//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SrsHelper.h"
#import "SrsAppDel.h"
#import "Sr.h"
#import "SrsAppDel.h"
#import "SCStaticImageGeoFilter.h"

@implementation SrsAppDel : NSObject

+ (SrsAppDel *)sharedInstance {
	static SrsAppDel *__sharedInstance;
    static dispatch_once_t onceToken;
    
    dispatch_once(&onceToken, ^{
        __sharedInstance = [[self alloc] init];
    });
    
    return __sharedInstance;
}
+ (NSString *)scoffiltersDirectoryPath {
	NSString * docsDir = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];
	NSString *scofPath = [docsDir stringByAppendingPathComponent:@"scof"];
	BOOL isDirectory = NO;
    if (![[NSFileManager defaultManager] fileExistsAtPath:scofPath isDirectory:&isDirectory])
    {
        [[NSFileManager defaultManager] createDirectoryAtPath:scofPath withIntermediateDirectories:YES attributes:nil error:nil];        
    }
    return scofPath;

}
+ (void)fetchAppDelFiltersWithCompletion:(void (^)(NSArray *filters))completion {
	dispatch_async(dispatch_get_global_queue(0, 0), ^{
		
		NSMutableArray *filtersArray = [NSMutableArray new];
		NSArray *contentsOfDir = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:[[self class] scoffiltersDirectoryPath] error:nil];

		if ([contentsOfDir count]) {
			for(NSString *file in contentsOfDir) {
				NSString *fileExt = [file pathExtension];
				if ([fileExt isEqualToString:@"png"]) {

					NSString *fileFullPath = [[self scoffiltersDirectoryPath] stringByAppendingPathComponent:file];
					NSDictionary* attr = [[NSFileManager defaultManager] attributesOfItemAtPath:fileFullPath error:nil];
					if(attr) {
						NSDate *fileDate = (NSDate*)[attr objectForKey:NSFileModificationDate]; 
						NSString *fileKey = [[fileFullPath lastPathComponent] stringByDeletingPathExtension];
						Sr *filterFile = [[Sr alloc] init];
						[filterFile setKey:fileKey];
						[filterFile setPath:fileFullPath];
						[filterFile setLastModDate:fileDate];
						[filtersArray addObject:filterFile];

					}
				}
			}

			NSArray *sortDescriptors = [NSArray arrayWithObject:[NSSortDescriptor sortDescriptorWithKey:@"lastModDate" ascending:NO]];
	    	NSArray *filtersArraySorted = [filtersArray sortedArrayUsingDescriptors:sortDescriptors];
	    	dispatch_async(dispatch_get_main_queue(), ^{
				
				completion(filtersArraySorted);

			});
		}		
	});
}
+ (NSMutableArray *)filtersByAddingAppDelFiltersToSnapchatFilters:(NSArray *)arg1 {
	NSArray *array1 = nil;
	if (arg1) {
		array1 = arg1;
	} else {
		array1 = @[];
	}
	NSMutableArray *newArray = [NSMutableArray arrayWithArray:array1];
	NSArray *enabledSnapFitlers = [[SrsAppDel sharedInstance] appDelFiltersForSnapchat];

	[newArray addObjectsFromArray:enabledSnapFitlers];

	return newArray;
}
+ (NSMutableDictionary *)filtersByAddingAppDelFiltersToSnapchatDictionaryFilters:(NSDictionary *)arg1 {
	NSDictionary *dict1 = nil;
	if (arg1) {
		dict1 = arg1;
	} else {
        dict1 = @{};
	}
	NSMutableDictionary *newDict = [NSMutableDictionary dictionaryWithDictionary:dict1];
	NSDictionary *enabledSnapFitlers = [[SrsAppDel sharedInstance] appDelFiltersDictionaryForSnapchat];

	[newDict addEntriesFromDictionary:enabledSnapFitlers];
	return newDict;
}
- (void)updateAppDelFiltersForSnapchatWithCompletion:(void (^)(NSArray *filters, NSDictionary *filtersDict))completion {
	NSMutableArray *newArray = [NSMutableArray new];
	NSMutableDictionary *newDict = [NSMutableDictionary new];

	[[self class] fetchAppDelFiltersWithCompletion:^(NSArray *filters) {

		dispatch_async(dispatch_get_global_queue(0, 0), ^{

			if ([filters count]) {
				for(Sr *filter in filters) {
					NSDictionary *filterDict = [filter snapchatFilterDictionary];

					SCStaticImageGeoFilter *imageGeoFilter = [[objc_getClass("SCStaticImageGeoFilter") alloc] initWithDictionary:filterDict isPreCached:nil];
					[newArray addObject:imageGeoFilter];
					[newDict setObject:imageGeoFilter forKey:[filter key]];
				}
				dispatch_async(dispatch_get_main_queue(), ^{

					[self setAppDelFiltersForSnapchat:newArray];
					[self setAppDelFiltersDictionaryForSnapchat:newDict];

					completion(newArray, newDict);
				});
			}
		});

	}];
}



@end

