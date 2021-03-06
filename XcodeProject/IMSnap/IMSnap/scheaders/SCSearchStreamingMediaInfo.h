//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import "SCSearchStreamingEncryptionInfo.h"

//#import "NSCoding-Protocol.h"
//#import "NSCopying-Protocol.h"

@class NSURL, SCSearchStreamingEncryptionInfo, SCSearchStreamingMediaMetadata;

@interface SCSearchStreamingMediaInfo : NSObject <NSCopying, NSCoding>
//{
//    NSURL *_mediaURL;
//    NSURL *_zipURL;
//    SCSearchStreamingEncryptionInfo *_encryptionInfo;
//    SCSearchStreamingMediaMetadata *_metadata;
//}

//@property(readonly, copy, nonatomic) SCSearchStreamingMediaMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) SCSearchStreamingEncryptionInfo *encryptionInfo; // @synthesize encryptionInfo=_encryptionInfo;
@property(readonly, copy, nonatomic) NSURL *zipURL; // @synthesize zipURL=_zipURL;
@property(readonly, copy, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
//- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaURL:(id)arg1 zipURL:(id)arg2 encryptionInfo:(id)arg3 metadata:(id)arg4;
- (id)initWithCoder:(id)arg1;

@end

