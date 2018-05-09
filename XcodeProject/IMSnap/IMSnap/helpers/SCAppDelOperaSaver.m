//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>
#import "SCAppDelOperaSaver.h"
#import <AVFoundation/AVFoundation.h>
#import "SCOperaPageViewController.h"
#import "ProgressHUD.h"
#import "SCM3U8.h"
#import "NSData-Encryption.h"
#import "SCAppDelSaver.h"
#import "SCAppDelPrefs.h"
#import "SCSearchStreamingEncryptionInfo.h"
#import "Story.h"
#import "SCSearchStreamingMediaInfo.h"

@implementation SCAppDelOperaSaver

+ (void)mergeAudioFile:(id)arg1 andVideoFile:(id)arg2 completion:(void (^)(NSURL *outputURL))arg3 {
    AVMutableComposition* mixComposition = [AVMutableComposition composition];
    AVURLAsset *audioAsset = [[AVURLAsset alloc]initWithURL:arg1 options:nil];
    CMTimeRange audio_timeRange = CMTimeRangeMake(kCMTimeZero, audioAsset.duration);

    AVMutableCompositionTrack *b_compositionAudioTrack = [mixComposition addMutableTrackWithMediaType:AVMediaTypeAudio preferredTrackID:kCMPersistentTrackID_Invalid];
    [b_compositionAudioTrack insertTimeRange:audio_timeRange ofTrack:[[audioAsset tracksWithMediaType:AVMediaTypeAudio] objectAtIndex:0] atTime:kCMTimeZero error:nil];
    AVURLAsset *videoAsset = [[AVURLAsset alloc]initWithURL:arg2 options:nil];
    CMTimeRange video_timeRange = CMTimeRangeMake(kCMTimeZero,audioAsset.duration);

    //Now we are creating the second AVMutableCompositionTrack containing our video and add it to our AVMutableComposition object.
    AVMutableCompositionTrack *a_compositionVideoTrack = [mixComposition addMutableTrackWithMediaType:AVMediaTypeVideo preferredTrackID:kCMPersistentTrackID_Invalid];
    [a_compositionVideoTrack insertTimeRange:video_timeRange ofTrack:[[videoAsset tracksWithMediaType:AVMediaTypeVideo] objectAtIndex:0] atTime:kCMTimeZero error:nil];

    //decide the path where you want to store the final video created with audio and video merge.
    NSArray *dirPaths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *docsDir = [dirPaths objectAtIndex:0];
    NSString *outputFilePath = [docsDir stringByAppendingPathComponent:[NSString stringWithFormat:@"%@.mp4", [[NSUUID UUID] UUIDString]]];
    NSURL *outputFileUrl = [NSURL fileURLWithPath:outputFilePath];
    if ([[NSFileManager defaultManager] fileExistsAtPath:outputFilePath])
        [[NSFileManager defaultManager] removeItemAtPath:outputFilePath error:nil];

    //Now create an AVAssetExportSession object that will save your final video at specified path.
    AVAssetExportSession* _assetExport = [[AVAssetExportSession alloc] initWithAsset:mixComposition presetName:AVAssetExportPresetHighestQuality];
    _assetExport.outputFileType = AVFileTypeMPEG4;
    _assetExport.outputURL = outputFileUrl;

    [_assetExport exportAsynchronouslyWithCompletionHandler:
     ^(void ) {
         arg3(outputFileUrl);
     }
     ];

}
+ (void)downloadFileFromURL:(id)arg1 completion:(void (^)(NSData *data, NSError *error))arg2 {
	NSURLSessionDataTask *imageDataTask = [[NSURLSession sharedSession] dataTaskWithURL:arg1 completionHandler:^(NSData *data, NSURLResponse *response, NSError *error) {
	    arg2(data, error);
	}];
	[imageDataTask resume];
}
+ (void)getVideoAndAudioURLsFromM3U8URL:(id)arg1 completion:(void (^)(NSURL *videoUrl, NSURL *audioUrl))arg2 {
    
	[self downloadFileFromURL:arg1 completion:^(NSData *data, NSError *error) {
		SCM3U8 *scmu8 = [[SCM3U8 alloc] initWithData:data];
		NSArray *childM3U8Urls = [scmu8 childM3U8Urls];

		NSPredicate *predicate1 = [NSPredicate predicateWithBlock:^BOOL(id object, NSDictionary *bindings) {

			return [[[object path] lastPathComponent] isEqualToString:@"media_video.m3u8"];
		}];

        NSArray *filtered1 = [childM3U8Urls filteredArrayUsingPredicate:predicate1];

		NSPredicate *predicate2 = [NSPredicate predicateWithBlock:^BOOL(id object, NSDictionary *bindings) {
			return [[[object path] lastPathComponent] isEqualToString:@"media_audio.m3u8"];
		}];

		NSArray *filtered2 = [childM3U8Urls filteredArrayUsingPredicate:predicate2];


		NSURL *url1 = [filtered1 firstObject];
		NSURL *url2 = [filtered2 firstObject];

		[self downloadFileFromURL:url1 completion:^(NSData *data, NSError *error) {

			SCM3U8 *scmu82 = [[SCM3U8 alloc] initWithData:data];
			NSURL *url3 = [[[scmu82 mediaSegmentInfos] lastObject] url];
			[self downloadFileFromURL:url2 completion:^(NSData *data, NSError *error) {

				SCM3U8 *scmu83 = [[SCM3U8 alloc] initWithData:data];
				NSURL *url4 = [[[scmu83 mediaSegmentInfos] lastObject] url];

				arg2(url3, url4);
			}];
		}];
	}];
}
+ (void)generateVideoURLFromM3U8:(id)arg1 key:(id)arg2 iv:(id)arg3 completion:(void (^)(NSURL *url))arg4 {
	dispatch_async(dispatch_get_global_queue(0, 0), ^{

		[[self class] getVideoAndAudioURLsFromM3U8URL:arg1 completion:^(NSURL *videoUrl, NSURL *audioUrl) {
            NSString *tempPath = NSTemporaryDirectory();
            
			NSString *videoFileName = [NSString stringWithFormat:@"%@.mp4", [[NSUUID UUID] UUIDString]];
			NSString *videoTempPath = [tempPath stringByAppendingPathComponent:videoFileName];
			NSURL *videoTempURL = [NSURL fileURLWithPath:videoTempPath];

			NSString *audioFileName = [NSString stringWithFormat:@"%@.mp4", [[NSUUID UUID] UUIDString]];
			NSString *audioTempPath = [tempPath stringByAppendingPathComponent:audioFileName];
			NSURL *audioTempURL = [NSURL fileURLWithPath:audioTempPath];

			NSData *videoData = nil;
			NSData *audioData = nil;
			if (videoUrl) {
				videoData = [NSData dataWithContentsOfURL:videoUrl];
			}
			if (audioUrl) {
				audioData = [NSData dataWithContentsOfURL:audioUrl];
			}

			if (videoData) {
				videoData = [videoData secureDecryptWithKey:arg2 iv:arg3];
			}

			if (audioData) {
				audioData = [audioData secureDecryptWithKey:arg2 iv:arg3];
			}

			if (videoData && audioData) {
				[videoData writeToURL:videoTempURL atomically:YES];
				[audioData writeToURL:audioTempURL atomically:YES];
				[[self class] mergeAudioFile:audioTempURL andVideoFile:videoTempURL completion:^(NSURL *outputURL) {
					arg4(outputURL);
				}];
			} else if (videoData) {
				[videoData writeToURL:videoTempURL atomically:YES];
				arg4(videoTempURL);
			} else if (audioData) {
				[audioData writeToURL:audioTempURL atomically:YES];
				arg4(audioTempURL);
			} else {
				arg4(nil);
			}
		}];
	});
}
+ (void)saveVideoFromLocalPath:(id)arg1 controller:(id)arg2 {
	[SCAppDelSaver showSaveAlertIfNeededForMediaType:1 controller:arg2 saveBlock:^(BOOL success) {

		[SCAppDelSaver handleVideoSave:arg1 fromController:arg2 completion:^(BOOL success, NSError *error){
						// saved
			dispatch_async(dispatch_get_main_queue(), ^{

				[ProgressHUD dismiss];
				[[self class] handleStorySaveCompletion:YES afterDelay:0.2];
			});
		}];
	}];
}
+ (void)downloadAndSaveVideoFromURL:(id)arg1 controller:(id)arg2 {
	[SCAppDelSaver showSaveAlertIfNeededForMediaType:1 controller:arg2 saveBlock:^(BOOL success) {
		[ProgressHUD show:[[SCAppDelPrefs sharedInstance] localizedStringForKey:@"Downloading..."]];

		dispatch_async(dispatch_get_global_queue(0, 0), ^{

			[self downloadFileFromURL:arg1 completion:^(NSData *data, NSError *error) {
				if (error != nil || !data) {
					dispatch_async(dispatch_get_main_queue(), ^{
						[ProgressHUD dismiss];
						[[self class] handleStorySaveCompletion:NO afterDelay:0.2];
					});
				} else {
					NSString *tempPath = NSTemporaryDirectory();
					NSString *videoFileName = [NSString stringWithFormat:@"%@.mp4", [[NSUUID UUID] UUIDString]];
					NSString *videoTempPath = [tempPath stringByAppendingPathComponent:videoFileName];
					[data writeToFile:videoTempPath atomically:YES];

					[SCAppDelSaver handleVideoSave:videoTempPath fromController:arg2 completion:^(BOOL success, NSError *error){
						// saved
						dispatch_async(dispatch_get_main_queue(), ^{

							[ProgressHUD dismiss];
							[[self class] handleStorySaveCompletion:YES afterDelay:0.2];
						});
					}];
				}
			}];
		});
	}];
}
+ (void)saveImageFromOperaController:(SCOperaPageViewController *)arg1 {

    if ([arg1 respondsToSelector:@selector(_layerVCForLayerType:inLayerVCs:)]) {
		id layerVCsOnPage = [arg1 _layerVCsOnPage];
		id layerVCForLayerTyp = [arg1 _layerVCForLayerType:1 inLayerVCs:layerVCsOnPage];
		if (layerVCForLayerTyp) {
			UIImage *img = [[layerVCForLayerTyp valueForKey:@"_layerView"] image];
			[SCAppDelSaver showSaveAlertIfNeededForMediaType:0 controller:nil saveBlock:^(BOOL success) {

				[SCAppDelSaver handleImageSave:img fromController:arg1 completion:^(BOOL success, NSError *error){

					[[self class] handleStorySaveCompletion:success afterDelay:0];
				}];

			}];
		}
	}

}
+ (void)handleStorySaveCompletion:(_Bool)arg1 afterDelay:(double)arg2 {

		  double delayInSeconds = arg2;
        dispatch_time_t popTime = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delayInSeconds * NSEC_PER_SEC));
        dispatch_after(popTime, dispatch_get_main_queue(), ^(void){
            if (arg1) {
				[ProgressHUD showSuccess:[[SCAppDelPrefs sharedInstance] localizedStringForKey:@"DONE"]];
			} else {
				[ProgressHUD showError];
			}
			[ProgressHUD dismissAfterDelay:2];
        });


}
+ (void)saveMediaFromOperaPageViewController:(SCOperaPageViewController *)arg1 {

	NSDictionary *properties = [[arg1 page] properties];
	if ([properties count]) {
		for(id item in properties)
		{
			//
			NSLog(@"");
		}
	}
	NSURL *videoUrl = [properties objectForKey:@"shareable_video_url"];
	if (videoUrl) {
		[[self class] downloadAndSaveVideoFromURL:videoUrl controller:arg1];
	} else {
		Story *story = [properties objectForKey:@"story"];
		if (story) {
			BOOL isImageMedia = [story isImage];
			BOOL isVideoMedia = [story isVideo];

			if (isImageMedia) {
				[[self class] saveImageFromOperaController:arg1];
			} else if (isVideoMedia) {
				SCSearchStreamingMediaInfo *streamingMediaInfo = [story streamingMediaInfo];
				NSURL *mediaUrl = [streamingMediaInfo mediaURL];
				if (mediaUrl) {
					id rootVC = [[[UIApplication sharedApplication] keyWindow] rootViewController];

					[SCAppDelSaver showSaveAlertIfNeededForMediaType:1 controller:rootVC saveBlock:^(BOOL success) {
						[ProgressHUD show:[[SCAppDelPrefs sharedInstance] localizedStringForKey:@"Downloading..."]];
						SCSearchStreamingEncryptionInfo *encryptionInfo = [streamingMediaInfo encryptionInfo];
						[[self class] generateVideoURLFromM3U8:mediaUrl key:[encryptionInfo key] iv:[encryptionInfo iv] completion:^(NSURL *url){

							[SCAppDelSaver handleVideoSave:[url path] fromController:rootVC completion:^(BOOL success, NSError *error){
											// saved
								dispatch_async(dispatch_get_main_queue(), ^{

									[ProgressHUD dismiss];
									[[self class] handleStorySaveCompletion:YES afterDelay:0.2];
								});
							}];
						}];
					}];
				}
			}
		}
	}
}

@end