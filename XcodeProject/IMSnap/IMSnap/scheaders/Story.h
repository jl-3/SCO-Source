//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>
#import "EphemeralMedia.h"
#import "SCSearchStreamingMediaInfo.h"

//#import "MediaCacheInfoDataSource-Protocol.h"
//#import "MediaDataSource-Protocol.h"
//#import "MediaDelegate-Protocol.h"
//#import "MediaImageProcessingDelegate-Protocol.h"
//#import "MediaUploadDelegate-Protocol.h"
//#import "NSCopying-Protocol.h"
//#import "SCReportStoryDataParamsProvider-Protocol.h"
//#import "SCReportStoryMetadataParamsProvider-Protocol.h"
//#import "SCStoriesViewDataModel-Protocol.h"
//#import "SCStoryExporterItem-Protocol.h"

//@class NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableSet, NSNumber, NSString, NSURL, NSUUID, SCEncryptedCache, SCImageToVideoWriter, SCMapStoryInfo, SCSearchStoryInfo, SCSearchStreamingLoggingInfo, SCSearchStreamingMediaInfo, SCSnapTime, SCSnapVideoFilterState, SCStoryMediaStateListenerAnnouncer, SOJUAudioStitch, SOJUBroadcastAttribution, SOJUStoryCollaborator, SOJUStoryFrame;
//@protocol SCChunk;

@interface Story : EphemeralMedia
//<SCReportStoryDataParamsProvider, SCReportStoryMetadataParamsProvider, MediaDataSource, MediaDelegate, MediaUploadDelegate, MediaImageProcessingDelegate, SCStoriesViewDataModel, SCStoryExporterItem, MediaCacheInfoDataSource, NSCopying>
//{
//    SCStoryMediaStateListenerAnnouncer *_mediaStateListenerAnnouncer;
//    NSDate *_sendStartTimestamp;
//    NSString *_cachedSnapIdComponent;
//    SCEncryptedCache *_storyPersistentCache;
//    _Bool _shouldShowToastWhenPostComplete;
//    _Bool _isBeingViewed;
//    _Bool _screenshotReported;
//    _Bool _saveReported;
//    _Bool _unviewedIsBeingViewed;
//    _Bool _insideMergedFriendStories;
//    _Bool _isMyStory;
//    _Bool _isMySharedStory;
//    _Bool _isSharedStory;
//    _Bool _isMyVerifiedStory;
//    _Bool _isOfficialStory;
//    _Bool _isPublic;
//    _Bool _isGroupStory;
//    _Bool _isPromotedStory;
//    _Bool _isSearchDynamicStory;
//    _Bool _isCheetahStory;
//    _Bool _viewed;
//    _Bool _needsAuthToFetch;
//    _Bool _deleting;
//    _Bool _recentlySaved;
//    _Bool _saving;
//    _Bool _savedByUser;
//    _Bool _isDynamicAdSlot;
//    _Bool _adCanFollow;
//    _Bool _addToMyStory;
//    _Bool _unrecoverable;
//    _Bool _isFromStoryBuilder;
//    _Bool _postMaster;
//    long long _postingState;
//    NSDate *_expirationDate;
//    NSString *_mediaKey;
//    NSString *_mediaId;
//    NSString *_mediaIv;
//    NSError *_playbackError;
//    NSArray *_requestContexts;
//    unsigned long long _mediaFormat;
//    id <SCChunk> _chunk;
//    NSDate *_timestamp;
//    double _unviewedTimeLeft;
//    NSString *_kvoUsername;
//    NSString *_userDisplayName;
//    NSDate *_userPostedTimestamp;
//    NSString *_key;
//    NSString *_iv;
//    NSDate *_postSuccessTimestamp;
//    NSString *_officialStoryEmoji;
//    SCSearchStoryInfo *_searchStoryInfo;
//    SCSearchStreamingMediaInfo *_streamingMediaInfo;
//    SCSearchStreamingLoggingInfo *_streamingLoggingInfo;
//    NSArray *_associatedSearchStories;
//    SCMapStoryInfo *_mapStoryInfo;
//    NSString *_flushableStoryId;
//    NSArray *_storyViewNotesFriend;
//    NSArray *_storyViewNotesOther;
//    unsigned long long _viewedCountFriend;
//    unsigned long long _viewedCountOther;
//    unsigned long long _screenshotCountFriend;
//    unsigned long long _screenshotCountOther;
//    unsigned long long _screenshotToReportCount;
//    unsigned long long _savesCountFriend;
//    unsigned long long _savesCountOther;
//    SOJUStoryFrame *_framing;
//    NSString *_adUnitId;
//    NSDictionary *_targetingParameters;
//    NSString *_adKey;
//    NSString *_adPlacementId;
//    NSString *_adLineItemId;
//    NSString *_adId;
//    NSString *_adHeadline;
//    NSString *_adBrandName;
//    NSUUID *_adPreloadToken;
//    NSString *_adRequestClientId;
//    long long _adPosition;
//    long long _brandFriendliness;
//    NSArray *_sharedStoriesToPostTo;
//    NSNumber *_addToMyStoryPrivacyOverride;
//    NSString *_sharedStoryGroupId;
//    NSString *_sharedStoryDisplayName;
//    NSString *_sharedStoryUserId;
//    NSString *_sharedStoryAvatarId;
//    NSString *_sharedStorySelfieId;
//    NSString *_sharedStoryGeoLocation;
//    SOJUStoryCollaborator *_verifiedStoryCollaborator;
//    NSArray *_officialStoriesToPostTo;
//    NSArray *_businessIdsToPostTo;
//    NSArray *_groupStoryPubIdsToPostTo;
//    long long _storyIndexInViewingSession;
//    NSString *_submissionId;
//    SOJUBroadcastAttribution *_attribution;
//    SOJUAudioStitch *_audioStitch;
//    NSURL *_mediaAPPURL;
//    NSURL *_mediaD2SURL;
//    NSDictionary *_rulefileParams;
//    long long _retryCount;
//    long long _remainingAutoRetryCount;
//    NSString *_geofilterId;
//    NSString *_lensId;
//    long long _postingDelay;
//    NSDate *_expectedPostingTimestamp;
//    SCSnapVideoFilterState *_storyVideoFilterState;
//    NSString *_savedUsername;
//    long long _atomicMediaState;
//    long long _atomicThumbnailMediaState;
//    NSDate *_markedAsViewedTimestamp;
//    NSDate *_atomicMetadataDownloadTimestamp;
//    long long _atomicBandwidthWhenDownloadMetadata;
//    NSString *_thumbnailIv;
//    NSURL *_thumbnailURL;
//    NSString *_thumbnailId;
//    double _engagementPercentage;
//    NSString *_atomicUsername;
//    Story *_postMasterStory;
//    SCImageToVideoWriter *_imageToVideoWriter;
//    NSMutableArray *_mediaFetchCompletionBlocks;
//    SCSnapTime *_snapTime;
//    NSMutableSet *_siblingsCache;
//}
//
//+ (void)_postNotificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
//+ (id)displayForCount:(unsigned long long)arg1;
//+ (id)storyFromStory:(id)arg1;
//+ (id)targetStoryFromEphemeralMedia:(id)arg1;
//+ (id)storyFromEphemeralMedia:(id)arg1;
//+ (unsigned long long *)fasterCodingKeys;
//+ (unsigned long long)fasterCodingVersion;
//@property(retain) NSMutableSet *siblingsCache; // @synthesize siblingsCache=_siblingsCache;
//@property(retain) SCSnapTime *snapTime; // @synthesize snapTime=_snapTime;
//@property(retain) NSMutableArray *mediaFetchCompletionBlocks; // @synthesize mediaFetchCompletionBlocks=_mediaFetchCompletionBlocks;
//@property(retain) SCImageToVideoWriter *imageToVideoWriter; // @synthesize imageToVideoWriter=_imageToVideoWriter;
//@property _Bool postMaster; // @synthesize postMaster=_postMaster;
//@property(retain) Story *postMasterStory; // @synthesize postMasterStory=_postMasterStory;
//@property(copy) NSString *atomicUsername; // @synthesize atomicUsername=_atomicUsername;
//@property double engagementPercentage; // @synthesize engagementPercentage=_engagementPercentage;
//@property(copy) NSString *thumbnailId; // @synthesize thumbnailId=_thumbnailId;
//@property(retain) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
//@property(copy) NSString *thumbnailIv; // @synthesize thumbnailIv=_thumbnailIv;
//@property long long atomicBandwidthWhenDownloadMetadata; // @synthesize atomicBandwidthWhenDownloadMetadata=_atomicBandwidthWhenDownloadMetadata;
//@property(retain) NSDate *atomicMetadataDownloadTimestamp; // @synthesize atomicMetadataDownloadTimestamp=_atomicMetadataDownloadTimestamp;
//@property(retain) NSDate *markedAsViewedTimestamp; // @synthesize markedAsViewedTimestamp=_markedAsViewedTimestamp;
//@property long long atomicThumbnailMediaState; // @synthesize atomicThumbnailMediaState=_atomicThumbnailMediaState;
//@property long long atomicMediaState; // @synthesize atomicMediaState=_atomicMediaState;
//@property(copy, nonatomic) NSString *savedUsername; // @synthesize savedUsername=_savedUsername;
//@property(copy, nonatomic) SCSnapVideoFilterState *storyVideoFilterState; // @synthesize storyVideoFilterState=_storyVideoFilterState;
//@property(retain) NSDate *expectedPostingTimestamp; // @synthesize expectedPostingTimestamp=_expectedPostingTimestamp;
//@property long long postingDelay; // @synthesize postingDelay=_postingDelay;
//@property(copy) NSString *lensId; // @synthesize lensId=_lensId;
//@property(copy) NSString *geofilterId; // @synthesize geofilterId=_geofilterId;
//@property _Bool isFromStoryBuilder; // @synthesize isFromStoryBuilder=_isFromStoryBuilder;
//@property long long remainingAutoRetryCount; // @synthesize remainingAutoRetryCount=_remainingAutoRetryCount;
//@property long long retryCount; // @synthesize retryCount=_retryCount;
//@property(retain) NSDictionary *rulefileParams; // @synthesize rulefileParams=_rulefileParams;
//@property(retain) NSURL *mediaD2SURL; // @synthesize mediaD2SURL=_mediaD2SURL;
//@property(retain) NSURL *mediaAPPURL; // @synthesize mediaAPPURL=_mediaAPPURL;
//@property(copy) SOJUAudioStitch *audioStitch; // @synthesize audioStitch=_audioStitch;
//@property(copy) SOJUBroadcastAttribution *attribution; // @synthesize attribution=_attribution;
//@property(copy) NSString *submissionId; // @synthesize submissionId=_submissionId;
//@property long long storyIndexInViewingSession; // @synthesize storyIndexInViewingSession=_storyIndexInViewingSession;
//@property _Bool unrecoverable; // @synthesize unrecoverable=_unrecoverable;
//@property(copy) NSArray *groupStoryPubIdsToPostTo; // @synthesize groupStoryPubIdsToPostTo=_groupStoryPubIdsToPostTo;
//@property(copy) NSArray *businessIdsToPostTo; // @synthesize businessIdsToPostTo=_businessIdsToPostTo;
//@property(copy) NSArray *officialStoriesToPostTo; // @synthesize officialStoriesToPostTo=_officialStoriesToPostTo;
//@property(copy) SOJUStoryCollaborator *verifiedStoryCollaborator; // @synthesize verifiedStoryCollaborator=_verifiedStoryCollaborator;
//@property(copy) NSString *sharedStoryGeoLocation; // @synthesize sharedStoryGeoLocation=_sharedStoryGeoLocation;
//@property(copy) NSString *sharedStorySelfieId; // @synthesize sharedStorySelfieId=_sharedStorySelfieId;
//@property(copy) NSString *sharedStoryAvatarId; // @synthesize sharedStoryAvatarId=_sharedStoryAvatarId;
//@property(copy) NSString *sharedStoryUserId; // @synthesize sharedStoryUserId=_sharedStoryUserId;
//@property(retain) NSString *sharedStoryDisplayName; // @synthesize sharedStoryDisplayName=_sharedStoryDisplayName;
//@property(retain) NSString *sharedStoryGroupId; // @synthesize sharedStoryGroupId=_sharedStoryGroupId;
//@property(retain) NSNumber *addToMyStoryPrivacyOverride; // @synthesize addToMyStoryPrivacyOverride=_addToMyStoryPrivacyOverride;
//@property(retain) NSArray *sharedStoriesToPostTo; // @synthesize sharedStoriesToPostTo=_sharedStoriesToPostTo;
//@property _Bool addToMyStory; // @synthesize addToMyStory=_addToMyStory;
//@property long long brandFriendliness; // @synthesize brandFriendliness=_brandFriendliness;
//@property long long adPosition; // @synthesize adPosition=_adPosition;
//@property _Bool adCanFollow; // @synthesize adCanFollow=_adCanFollow;
//@property(copy) NSString *adRequestClientId; // @synthesize adRequestClientId=_adRequestClientId;
//@property(copy) NSUUID *adPreloadToken; // @synthesize adPreloadToken=_adPreloadToken;
//@property(copy) NSString *adBrandName; // @synthesize adBrandName=_adBrandName;
//@property(copy) NSString *adHeadline; // @synthesize adHeadline=_adHeadline;
//@property(copy) NSString *adId; // @synthesize adId=_adId;
//@property(copy) NSString *adLineItemId; // @synthesize adLineItemId=_adLineItemId;
//@property(copy) NSString *adPlacementId; // @synthesize adPlacementId=_adPlacementId;
//@property(copy) NSString *adKey; // @synthesize adKey=_adKey;
//@property(retain) NSDictionary *targetingParameters; // @synthesize targetingParameters=_targetingParameters;
//@property(copy) NSString *adUnitId; // @synthesize adUnitId=_adUnitId;
//@property _Bool isDynamicAdSlot; // @synthesize isDynamicAdSlot=_isDynamicAdSlot;
//@property(copy) SOJUStoryFrame *framing; // @synthesize framing=_framing;
//@property _Bool savedByUser; // @synthesize savedByUser=_savedByUser;
//@property unsigned long long savesCountOther; // @synthesize savesCountOther=_savesCountOther;
//@property unsigned long long savesCountFriend; // @synthesize savesCountFriend=_savesCountFriend;
//@property unsigned long long screenshotToReportCount; // @synthesize screenshotToReportCount=_screenshotToReportCount;
//@property unsigned long long screenshotCountOther; // @synthesize screenshotCountOther=_screenshotCountOther;
//@property unsigned long long screenshotCountFriend; // @synthesize screenshotCountFriend=_screenshotCountFriend;
//@property unsigned long long viewedCountOther; // @synthesize viewedCountOther=_viewedCountOther;
//@property unsigned long long viewedCountFriend; // @synthesize viewedCountFriend=_viewedCountFriend;
//@property(copy) NSArray *storyViewNotesOther; // @synthesize storyViewNotesOther=_storyViewNotesOther;
//@property(copy) NSArray *storyViewNotesFriend; // @synthesize storyViewNotesFriend=_storyViewNotesFriend;
//@property(getter=isSaving) _Bool saving; // @synthesize saving=_saving;
//@property(getter=isRecentlySaved) _Bool recentlySaved; // @synthesize recentlySaved=_recentlySaved;
//@property(getter=isDeleting) _Bool deleting; // @synthesize deleting=_deleting;
//@property _Bool needsAuthToFetch; // @synthesize needsAuthToFetch=_needsAuthToFetch;
//@property(copy) NSString *flushableStoryId; // @synthesize flushableStoryId=_flushableStoryId;
@property _Bool viewed; // @synthesize viewed=_viewed;
//@property(retain) SCMapStoryInfo *mapStoryInfo; // @synthesize mapStoryInfo=_mapStoryInfo;
//@property(copy, nonatomic) NSArray *associatedSearchStories; // @synthesize associatedSearchStories=_associatedSearchStories;
//@property _Bool isCheetahStory; // @synthesize isCheetahStory=_isCheetahStory;
//@property(copy) SCSearchStreamingLoggingInfo *streamingLoggingInfo; // @synthesize streamingLoggingInfo=_streamingLoggingInfo;
@property(copy) SCSearchStreamingMediaInfo *streamingMediaInfo; // @synthesize streamingMediaInfo=_streamingMediaInfo;
//@property(copy) SCSearchStoryInfo *searchStoryInfo; // @synthesize searchStoryInfo=_searchStoryInfo;
//@property _Bool isSearchDynamicStory; // @synthesize isSearchDynamicStory=_isSearchDynamicStory;
//@property _Bool isPromotedStory; // @synthesize isPromotedStory=_isPromotedStory;
//@property _Bool isGroupStory; // @synthesize isGroupStory=_isGroupStory;
//@property(copy) NSString *officialStoryEmoji; // @synthesize officialStoryEmoji=_officialStoryEmoji;
//@property _Bool isPublic; // @synthesize isPublic=_isPublic;
//@property _Bool isOfficialStory; // @synthesize isOfficialStory=_isOfficialStory;
//@property _Bool isMyVerifiedStory; // @synthesize isMyVerifiedStory=_isMyVerifiedStory;
//@property _Bool isSharedStory; // @synthesize isSharedStory=_isSharedStory;
//@property _Bool isMySharedStory; // @synthesize isMySharedStory=_isMySharedStory;
//@property _Bool isMyStory; // @synthesize isMyStory=_isMyStory;
//@property(retain) NSDate *postSuccessTimestamp; // @synthesize postSuccessTimestamp=_postSuccessTimestamp;
//@property(retain, nonatomic) NSString *iv; // @synthesize iv=_iv;
//@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
//@property(nonatomic) _Bool insideMergedFriendStories; // @synthesize insideMergedFriendStories=_insideMergedFriendStories;
//@property(retain) NSDate *userPostedTimestamp; // @synthesize userPostedTimestamp=_userPostedTimestamp;
//@property(copy) NSString *userDisplayName; // @synthesize userDisplayName=_userDisplayName;
//@property(copy) NSString *kvoUsername; // @synthesize kvoUsername=_kvoUsername;
//@property _Bool unviewedIsBeingViewed; // @synthesize unviewedIsBeingViewed=_unviewedIsBeingViewed;
//@property double unviewedTimeLeft; // @synthesize unviewedTimeLeft=_unviewedTimeLeft;
//@property(retain) NSDate *timestamp; // @synthesize timestamp=_timestamp;
//@property(retain) id <SCChunk> chunk; // @synthesize chunk=_chunk;
//@property unsigned long long mediaFormat; // @synthesize mediaFormat=_mediaFormat;
//@property _Bool saveReported; // @synthesize saveReported=_saveReported;
//@property _Bool screenshotReported; // @synthesize screenshotReported=_screenshotReported;
//@property(copy) NSArray *requestContexts; // @synthesize requestContexts=_requestContexts;
//@property(retain) NSError *playbackError; // @synthesize playbackError=_playbackError;
//@property(copy) NSString *mediaIv; // @synthesize mediaIv=_mediaIv;
//@property(copy) NSString *mediaId; // @synthesize mediaId=_mediaId;
//@property(copy) NSString *mediaKey; // @synthesize mediaKey=_mediaKey;
//@property _Bool isBeingViewed; // @synthesize isBeingViewed=_isBeingViewed;
//@property _Bool shouldShowToastWhenPostComplete; // @synthesize shouldShowToastWhenPostComplete=_shouldShowToastWhenPostComplete;
//@property(retain) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
//@property long long postingState; // @synthesize postingState=_postingState;
//- (void).cxx_destruct;
//- (void)removeMediaStateListener:(id)arg1;
//- (void)addMediaStateListener:(id)arg1;
//- (id)mediaStateListenerAnnouncer;
//- (void)updatePostingState:(long long)arg1;
//- (void)updateThumbnailMediaState:(long long)arg1;
//- (void)updateMediaState:(long long)arg1;
//@property long long thumbnailMediaState;
//@property long long mediaState;
//- (void)updateStoryNotesFromStory:(id)arg1;
//- (unsigned long long)totalSaveCount;
//- (unsigned long long)totalViewCount;
//- (unsigned long long)totalScreenshotCount;
//- (unsigned long long)totalCaptureCount;
//- (struct CGRect)spectaclesExportSize;
//- (_Bool)isSpectacles60fps;
//- (_Bool)isSpectaclesImage;
//- (_Bool)isSpectaclesMedia;
//- (_Bool)isLagunaMedia;
//- (_Bool)isHD;
//- (id)encryptedStoryDatastore;
//@property(readonly, copy) NSString *description;
//- (id)getServerStoryId;
//- (long long)uniqueCellDataIdWithRow:(long long)arg1;
//- (id)LSIDForStoryID:(id)arg1;
//- (_Bool)hasAttributionIdForUserId:(id)arg1;
//- (_Bool)isMyProfileStory;
//- (_Bool)hasOfficialStoryAttribution;
//@property(readonly) unsigned long long hash;
//- (_Bool)isEqual:(id)arg1;
//- (_Bool)_isStoryPosterMutualFriend;
//- (id)storyPoster;
//- (id)flushableViewedJsonDictionary;
//- (id)readReceiptWithMasterSibling:(id)arg1;
//- (id)readReceipt;
//- (id)_storyMediaCache;
//- (long long)uniqueCellDataId;
//- (long long)uniqueCellDataIdWithSection:(long long)arg1;
//- (_Bool)veryRecentlyOpenForViewingType:(long long)arg1;
//- (void)markAsViewedForViewingType:(long long)arg1;
//- (void)timerFired;
//- (_Bool)isBeingViewedForViewingType:(long long)arg1;
//- (void)setIsBeingViewed:(_Bool)arg1 forViewingType:(long long)arg2;
//- (double)timeLeftForCounterForViewingType:(long long)arg1 isFirstSnap:(_Bool)arg2;
//- (void)setViewingFriendStory:(_Bool)arg1 viewingType:(long long)arg2;
//- (void)addSibling:(id)arg1;
//- (void)prepareForMergedStories;
//- (id)mergedSiblings;
//- (void)handleFailedStoryAfterUploadSuccess;
//- (void)removePersistedFailedStoryData;
//- (void)loadPersistedFailedStoryData;
//- (void)saveStoryDataToPersistentStoreWithData:(id)arg1;
//- (id)uploadSuccessUserDefaultsKey;
//- (id)tempMovieURLForSaving;
//- (void)postSaveWithSuccess:(_Bool)arg1;
//- (void)didFinishSavingSnapToAlbumWithError:(id)arg1 isVideo:(_Bool)arg2 videoDuration:(double)arg3;
//- (void)_prepareVideoFilterForExportingSpectacles:(id)arg1 videoSize:(struct CGSize)arg2 spectaclesExportSettings:(id)arg3;
//- (void)exportToVideoURLCompletion:(CDUnknownBlockType)arg1 progressBlock:(CDUnknownBlockType)arg2 spectaclesExportSettings:(id)arg3;
//- (double)_durationForVideoExport;
//- (id)_prepareImageForExportingSpectacles:(id)arg1 spectaclesExportSettings:(id)arg2;
//- (void)saveStory:(id)arg1;
//- (void)_didDeleteStory:(_Bool)arg1;
//- (void)_deleteMyStory;
//- (void)deleteStory;
//- (void)updatePostingStateWhileUploading:(long long)arg1;
//- (void)updateProgressForMedia:(id)arg1;
//- (void)uploadStory;
//- (void)uploadMedia;
//- (void)_removeUnrecoverableStory;
//- (void)resetDependentStoriesState;
//- (void)setUploading;
//- (CDUnknownBlockType)uploadFailureBlock;
//- (void)updateThumbnailMediaWithStory:(id)arg1;
//- (CDUnknownBlockType)_postNowSuccessBlock;
//- (CDUnknownBlockType)_resetPostingDelayTo:(long long)arg1;
//- (CDUnknownBlockType)uploadSuccessBlock;
//- (id)taggedUsernames;
//- (id)uploadParametersWithData:(_Bool)arg1 data:(id)arg2;
//- (id)_doublePostMaster;
//- (long long)bandwidthWhenDownloadMetadata;
//- (id)metadataDownloadTime;
//- (id)postedTimestamp;
//- (void)processFailedStoryUserInitiated:(_Bool)arg1;
//- (void)_setupGroupStory:(id)arg1;
//- (void)_setupOfficialStory:(id)arg1;
//- (void)_setupSharedStory:(id)arg1;
//- (void)verifyThumbnailMediaState;
//- (void)verifyMediaState;
//- (void)insertIntoList;
//- (void)postStoryNow;
//- (void)postStory;
//- (void)uploadAndPostStory;
//- (void)fetchMediaUserInitiated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
//- (void)fetchMediaUserInitiated:(_Bool)arg1 withRequestBatchId:(id)arg2 completion:(CDUnknownBlockType)arg3;
//- (id)captureCountDisplay;
//- (id)officialStoryViewedDisplay;
//- (id)officialStoryEngagementPercentageDisplay;
//- (id)viewedCountDisplay;
//- (void)imageProcessingDidSucceedForMedia:(id)arg1;
//- (_Bool)shouldPostFailToSendNotification;
//- (id)encryptedMediaDataToUpload:(id)arg1;
//- (void)mediaUploadDidFailForMedia:(id)arg1;
//- (void)mediaUploadDidSucceedForMedia:(id)arg1;
//- (long long)uploadMediaTypeForMedia:(id)arg1;
//- (id)uploadMediaIdForMedia:(id)arg1;
//- (_Bool)isVideoStreaming;
//- (void)didFinishDownload:(id)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3 additionalParams:(id)arg4;
//- (void)didFinishDownload:(id)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3;
//- (void)didStartDownload:(id)arg1;
//- (void)fetchMediaDidSucceedForMedia:(id)arg1 isFromCache:(_Bool)arg2;
//- (void)fetchMediaDidSucceedForMedia:(id)arg1;
//- (void)handleMediaNotFoundOrBadRequestForMedia:(id)arg1;
//- (void)fetchMediaBadRequestForMedia:(id)arg1;
//- (void)fetchMediaNotFoundForMedia:(id)arg1;
//- (void)fetchMediaDidCancelForMedia:(id)arg1;
//- (void)fetchMediaDidFailForMedia:(id)arg1;
//- (void)fetchMediaIsLoadingForMedia:(id)arg1 userInitiated:(_Bool)arg2;
//- (void)fetchMediaResponseHandlerCustom:(id)arg1 request:(id)arg2 response:(id)arg3;
//- (_Bool)shouldShowViewersList;
//- (_Bool)isCreatedByCurrentUser;
//- (_Bool)isFromCameraRoll;
//- (_Bool)isFromGallery;
//- (unsigned long long)trackingExpirationInDaysForMedia:(id)arg1;
//- (id)trackingMediaTypeForMedia:(id)arg1;
//- (id)storyType;
//- (id)trackingTypeForMedia:(id)arg1;
//- (id)trackingIdForMedia:(id)arg1;
//- (id)trackingId;
//- (_Bool)hasNoMedia;
//- (long long)requestFallbackPriority;
//- (long long)requestPriorityUserInitiated:(_Bool)arg1;
//- (_Bool)encrypt;
//- (_Bool)persist;
//- (id)encryptionDictionaryForMedia:(id)arg1;
//- (_Bool)shouldEncryptOnDiskForMedia:(id)arg1;
//- (id)encryptionIvForMedia:(id)arg1;
//- (id)encryptionKeyForMedia:(id)arg1;
//- (id)expirationForMedia:(id)arg1;
//- (id)decryptData:(id)arg1 forMedia:(id)arg2;
//- (id)endpointParamsForMedia:(id)arg1;
//- (id)endpointForMedia:(id)arg1;
//- (id)URLForMedia:(id)arg1;
//- (_Bool)usingD2SForMedia:(id)arg1;
//@property(retain, nonatomic) NSURL *mediaURL;
//- (id)mediaIdForMedia:(id)arg1;
//- (void)reportSaveIfNecessary;
//- (void)reportScreenshotIfNecessary;
//- (id)_sojuRulefileParamsToDictionary:(id)arg1;
//- (void)_logSearchMediaFetchFromCache;
//- (id)_sojuStoryNoteArrayToStoryNoteArray:(id)arg1 isFriendsNotes:(_Bool)arg2;
//- (id)persistingFailuresURL;
//- (_Bool)timeToSendHasExpired;
//- (_Bool)isDoublePost;
//- (_Bool)shouldReportSave;
//- (_Bool)shouldReportScreenshot;
//- (_Bool)isRecentlyReported;
//- (_Bool)isExpired;
//- (_Bool)hasUploaded;
//- (_Bool)isSendingOrHasFailed;
//- (_Bool)isMediaProcessingOrFailedToProcess;
//- (_Bool)isMediaProcessing;
//- (_Bool)hasMediaProcessingFailed;
//@property(readonly) _Bool isMapStory;
//- (_Bool)isShareable;
//- (_Bool)isDeletable;
//- (_Bool)isSaveable;
//- (_Bool)isReportable;
//- (_Bool)shouldAutoRetryToPost;
//- (_Bool)isBroadcastDelayed;
//- (_Bool)isPostingOrHasPermanentlyFailed;
//- (_Bool)isPostingOrHasFailed;
//- (_Bool)hasUploadPermanentlyFailed;
//- (_Bool)hasUploadFailed;
//- (_Bool)isProcessingOrUploading;
//- (_Bool)isBrandSnapStory;
//@property(readonly, nonatomic) NSString *clientIdSnapComponent;
//- (void)setClientId:(id)arg1;
//- (id)cacheMediaId;
//- (void)updateWithIncomingMyStory:(id)arg1;
//- (void)updateWithStory:(id)arg1;
//- (void)encodeWithCoder:(id)arg1;
//- (id)initWithCoder:(id)arg1;
//- (void)didDecodeObject;
//- (void)_storyDidDecodeObject;
//- (void)willEncodeObject;
//- (void)_storyWillEncodeObject;
//- (_Bool)isInsidePrivateCustomStory;
//- (double)percentTimeLeft;
//- (id)cacheThumbnailId;
//- (id)posterUsername;
@property(copy) NSString *username;
//- (id)copyWithZone:(struct _NSZone *)arg1;
//- (id)initMyStoryWithSOJUCollabStoryLogbook:(id)arg1;
//- (id)initMyStoryWithSOJUStoryLogbook:(id)arg1;
//- (id)initMyStoryWithSOJUPartialStoryLogbook:(id)arg1;
//- (id)initMyStoryWithDictionary:(id)arg1;
//- (id)initMyStoryFromStory:(id)arg1;
//- (id)initMyGroupStoryWithSOJUStoryLogbook:(id)arg1;
//- (id)initGroupStoryWithSoju:(id)arg1 isMyStory:(_Bool)arg2;
//- (id)initFriendStoryWithSoju:(id)arg1;
//- (id)initFriendStoryWithDictionary:(id)arg1;
//- (id)initWithClientId;
//- (id)init;
//- (void)updateStoryMediaMetadata:(id)arg1;
//- (id)initWithUsername:(id)arg1 adResponse:(id)arg2 adRequestClientId:(id)arg3 isSharedStory:(_Bool)arg4 adKey:(id)arg5 endpoint:(id)arg6 data:(id)arg7;
//- (id)initWithCheetahMomentStory:(id)arg1 storyId:(id)arg2;
//- (id)initWithCheetahPromotedSnap:(id)arg1;
//- (long long)myStoryType;
//- (long long)myStorySpecificType;
//- (long long)storySpecificType;
//- (id)loggingParamsForViewingType:(long long)arg1;
//- (id)initWithStoryElement:(id)arg1 username:(id)arg2 manifestDisplayName:(id)arg3 enableStreaming:(_Bool)arg4;
//- (id)_getTopSnapItem;
//- (id)getBackgroundVideoURL;
//- (id)getThumbnailKey;
//- (id)initWithStorySnap:(id)arg1 storyId:(id)arg2 reportingInfo:(id)arg3 userId:(id)arg4 displayName:(id)arg5 username:(id)arg6 avatarId:(id)arg7 selfieId:(id)arg8 emoji:(id)arg9 storyType:(long long)arg10 isSearchDynamicStory:(_Bool)arg11 isCheetahStory:(_Bool)arg12;
//- (id)initWithStorySnap:(id)arg1 storyId:(id)arg2 reportingInfo:(id)arg3 userId:(id)arg4 displayName:(id)arg5 username:(id)arg6 avatarId:(id)arg7 selfieId:(id)arg8 emoji:(id)arg9 storyType:(long long)arg10;
//- (id)initWithAdRendition:(id)arg1 username:(id)arg2;
//- (unsigned long long)baseLayerType;
//- (id)playlistItemFeatureType;
//- (void)videoProcessingDidFailForSnapVideoFilter:(id)arg1 error:(id)arg2;
//- (void)videoProcessingDidSucceedForSnapVideoFilter:(id)arg1 data:(id)arg2;
//- (void)loopForViewingType:(long long)arg1;
//- (_Bool)isLoopingForViewingType:(long long)arg1;
//- (void)restartPlaybackForViewingType:(long long)arg1;
//- (void)resetViewingTimeToNowFor:(long long)arg1;
//- (_Bool)isPausedForViewingType:(long long)arg1;
//- (void)stopLoopingStoryWithTimeLeft:(double)arg1 viewingType:(long long)arg2;
//- (void)unpauseStoryForViewingType:(long long)arg1;
//- (void)pauseStoryForViewingType:(long long)arg1;
//- (void)assertViewingNotStarted:(long long)arg1;
//- (void)clearViewingTimeFor:(long long)arg1;
//- (double)timeLeftForViewingType:(long long)arg1;
//- (double)videoTimeSoFarForViewingType:(long long)arg1;
//- (double)currentViewLengthForViewingType:(long long)arg1;
//- (double)mostRecentViewLengthForViewingType:(long long)arg1;
//- (double)viewLengthForType:(long long)arg1;
//- (_Bool)isCountingDownForViewingType:(long long)arg1;
//- (void)setUInt64:(unsigned long long)arg1 forUInt64Key:(unsigned long long)arg2;
//- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
//- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
//- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
//- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
//- (void)decodeWithFasterDecoder:(id)arg1;
//- (void)encodeWithFasterCoder:(id)arg1;
//- (_Bool)preferFasterCoding;
//- (void)storyDataParamsWithHandler:(CDUnknownBlockType)arg1;
//- (id)lensIdentifier;
//- (id)attachmentUrlString;
//- (id)reportedUsername;
//- (id)storySnapId;
//- (id)storyMetadataParams;
//- (unsigned long long)reportSnapSource;
//
//// Remaining properties
//@property(readonly, copy) NSString *debugDescription;
//@property(readonly) Class superclass;

@end

