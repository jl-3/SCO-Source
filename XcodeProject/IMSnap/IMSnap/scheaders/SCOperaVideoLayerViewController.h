//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

//#import "SCAudioStitchControlsViewDelegate-Protocol.h"
//#import "SCAudioStitchPlaybackHandlerDelegate-Protocol.h"
//#import "SCOperaLayerViewControllerMediaContainer-Protocol.h"
//#import "SCOperaVideoControlsViewDataSource-Protocol.h"
//#import "SCOperaVideoControlsViewDelegate-Protocol.h"
//#import "SCTimeProfilable-Protocol.h"
//#import "UIGestureRecognizerDelegate-Protocol.h"
//
//@class AVAsset, AVPlayerItemTrack, CADisplayLink, CALayer, FBKVOController, NSError, NSNotificationCenter, NSString, NSTimer, SCAVPlayerVolumeController, SCAudioStitchPlaybackHandler, SCFrameableContainerView, SCOperaVideoLayerView, SCStopwatch, UIGestureRecognizer, UIVisualEffectView;

@interface SCOperaVideoLayerViewController : SCOperaLayerViewController
//<UIGestureRecognizerDelegate, SCOperaVideoControlsViewDelegate, SCOperaVideoControlsViewDataSource, SCTimeProfilable, SCAudioStitchControlsViewDelegate, SCAudioStitchPlaybackHandlerDelegate, SCOperaLayerViewControllerMediaContainer>
//{
//    SCOperaVideoLayerView *_layerView;
//    SCFrameableContainerView *_containerView;
//    FBKVOController *_kvoController;
//    NSNotificationCenter *_notificationCenter;
//    _Bool _fullyViewed;
//    _Bool _isLooping;
//    _Bool _hasSentMediaStartsToPlayEvent;
//    _Bool _hasFullyAppearedOnScreen;
//    double _durationSec;
//    SCStopwatch *_mediaDisplayStopWatch;
//    id _videoTimeObserver;
//    _Bool _isSeeking;
//    NSTimer *_controlsFadeTimer;
//    long long _virtualOrientation;
//    double _delayedTargetVolume;
//    double _lastSetVolume;
//    UIGestureRecognizer *_tapToToggleVideoControlRecognizer;
//    UIGestureRecognizer *_tapToToggleVideoProgressRecognizer;
//    _Bool _pausedForAttachment;
//    UIVisualEffectView *_blurView;
//    long long _lastPlaybackFailureType;
//    NSError *_lastPlaybackError;
//    _Bool _didRecoverFromPlayerItemError;
//    _Bool _didRecoverFromMediaServiceError;
//    _Bool _videoIsInErrorState;
//    _Bool _videoWasPreparedWhenFullyAppeared;
//    _Bool _didRetryOnFrozenVideo;
//    _Bool _shouldStartPlaybackOnceReadyToPlay;
//    _Bool _videoShouldBePlaying;
//    _Bool _shouldShowLoadingIndicator;
//    _Bool _shouldHandleDidReachEndOnResume;
//    unsigned long long _totalStallCount;
//    double _firstStallMediaTime;
//    double _firstStallDuration;
//    SCStopwatch *_totalStallDurationStopwatch;
//    CADisplayLink *_videoFrameRateTrackingDisplayLink;
//    double _frameRateStartTrackingTime;
//    long long _frameRateTrackedTimes;
//    double _totalFrameRate;
//    double _nominalFrameRate;
//    double _timeToPrepareSec;
//    double _startPreparingTimeSec;
//    AVPlayerItemTrack *_frameRateVideoTrack;
//    AVAsset *_videoAsset;
//    SCAudioStitchPlaybackHandler *_audioStitchPlaybackHandler;
//    _Bool _disableSwipeUp;
//    CALayer *_subtitleLayer;
//    _Bool _ignoreUpdateToSubtitleVideoSize;
//    SCAVPlayerVolumeController *_volumeController;
//}
//
//+ (int)context;
//+ (id)layerViewControllerWithConfiguration:(id)arg1 kvoController:(id)arg2 mediaDisplayStopwatch:(id)arg3 eventAnnouncer:(id)arg4 sharedResourceManager:(id)arg5 notificationCenter:(id)arg6;
//@property(retain, nonatomic) SCAVPlayerVolumeController *volumeController; // @synthesize volumeController=_volumeController;
//- (void).cxx_destruct;
//- (void)_updateSubtitleLayerScreenSize;
//- (void)_subtitleLayerVideoSizeChanged;
//- (void)_updateSubtitlesStyle;
//- (void)_toggleSubtitlesIfNecessary;
//- (void)_setUpCloseToAutoAdvanceNotificationIfNecessary;
//- (void)_resetStallTracking;
//- (id)_stallTrackingParameters;
//- (void)_playerDidResumeFromStall:(id)arg1;
//- (void)_playerDidStall:(id)arg1;
//- (_Bool)_isPlayerViewPlaying:(id)arg1;
//- (_Bool)_isPlaybackLikelyToKeepUpForPlayerItem:(id)arg1;
//- (void)_resumeForBufferStatusChangeIfNecessary;
//- (void)_showLoadingIndicatorIfNecessary;
//- (void)_showLoadingIndicatorIfNecessaryWithDelay;
//- (void)_enableLoadingIndicator:(_Bool)arg1;
//- (void)_updateLoadingIndicator;
//- (void)_observePlayerViewForStreamingIfNecessary:(id)arg1;
//- (void)_observePlayerViewForAutoResumeOnStallIfNecessary:(id)arg1;
//- (void)_stopTrackingVideoFrameRate;
//- (void)_frameRateTrackingDisplayLinkDidFire;
//- (void)_startTrackingVideoFrameRate;
//- (void)_clearPlaybackErrorTrackingParams;
//- (void)_updatePlaybackErrorTrackingParams;
//- (void)_sendMediaFailsToDisplayEvent;
//- (void)_playerDidFailToPlay;
//- (CDStruct_1b6d18a9)duration;
//- (CDStruct_1b6d18a9)currentTime;
//- (id)_debugInfo;
//- (void)setProgress:(double)arg1 forIndex:(unsigned long long)arg2;
//- (void)seekToTime:(double)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completion:(CDUnknownBlockType)arg4;
//- (void)seekToTime:(double)arg1;
//- (void)seekToMediaStartTimeWithCompletion:(CDUnknownBlockType)arg1;
//- (void)videoControlsView:(id)arg1 didSeekToTime:(double)arg2;
//- (void)videoControlsViewDidPressExit:(id)arg1;
//- (void)videoControlsView:(id)arg1 didEndSeekingWithPlayButtonToggled:(_Bool)arg2;
//- (void)videoControlsViewDidBeginSeeking:(id)arg1;
//- (void)videoControlsView:(id)arg1 didTogglePlay:(_Bool)arg2;
//- (void)_rotateVideoWithTransform:(struct CGAffineTransform)arg1 animated:(_Bool)arg2;
//- (void)_setTargetOrientation:(long long)arg1 andRotateView:(_Bool)arg2;
//- (void)videoControlsViewDidPressShowActionMenuButton:(id)arg1;
//- (void)videoControlsView:(id)arg1 didToggleRotateLeft:(_Bool)arg2;
//- (void)videoControlsView:(id)arg1 didToggleCaption:(_Bool)arg2;
//- (void)videoControlsView:(id)arg1 didToggleVolume:(_Bool)arg2;
//- (void)_hideArrowAndText:(_Bool)arg1;
//- (void)_toggleVideoProgressView;
//- (void)_toggleVideoControlsView;
//- (void)handleTap:(id)arg1;
//- (void)_setupControlsFadeTimer;
//- (void)_fadeOutControlsWithCompletion:(CDUnknownBlockType)arg1;
//- (void)_fadeOutControls;
//- (void)_fadeInControls;
//- (void)_resetVideoAsset;
//- (id)_videoAsset;
//- (_Bool)_shouldLoopWhenReachEnd;
//- (_Bool)_shouldAutoAdvanceWhenReachEnd;
//- (void)playerItemDidReachEnd;
//- (_Bool)isOverlay;
//- (double)mediaHeightToWidthAspectRatio;
//- (struct CGRect)mediaViewFrame;
//- (void)audioStitchControlsViewDidFinishDisplayingOnboarding:(id)arg1;
//- (void)audioStitchControlsViewViewportButtonDidTap:(id)arg1;
//- (void)audioStitchPlaybackHandler:(id)arg1 canChangeViewportDidChange:(_Bool)arg2;
//- (void)audioStitchPlaybackHandler:(id)arg1 viewportDidChange:(id)arg2;
//- (void)_removeTimeObserver;
//- (void)_attachTimeObserver;
//- (struct CGSize)_contentSize;
//- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
//- (void)viewDidLayoutSubviews;
//- (void)loadView;
//- (id)shareableMedia;
//- (id)currentViewParameters;
//- (void)_updateResumeTime;
//- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
//- (void)didReceiveUpdateProperties:(id)arg1;
//- (long long)pageabilityForRelativePosition:(unsigned long long)arg1;
//- (void)fadeVolumeOut:(double)arg1;
//- (void)fadeVolumeIn:(double)arg1;
//- (void)setVolume:(double)arg1;
//- (void)teardown;
//- (_Bool)mediaIsBeingPreparedForDisplay;
//- (void)_didStartToPlay;
//- (void)resume;
//- (void)setPausedForAttachment:(_Bool)arg1;
//- (void)pause;
//- (void)_tearDownPlayerView;
//- (void)_stopPlayback;
//- (void)viewDidFullyDisappear;
//- (_Bool)_shouldShowVideoControls;
//- (void)_setupControlsIfNecessary;
//- (void)_setupVideoProgressTapGestureIfNecessary;
//- (void)_sendMediaStartsToDisplayIfNecessary;
//- (void)_startPlayingItem:(id)arg1;
//- (void)_startPlayingFromMediaStartTimeForItem:(id)arg1;
//- (void)_restartPlayer;
//- (void)_updatePlayerStatusBasedOnPlayerItemStatus:(id)arg1;
//- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
//- (void)_loadPlayerViewIfNecessary;
//- (void)viewDidFullyAppear;
//- (void)cancelViewWillFullyAppearAtTime;
//- (void)viewWillFullyAppearAtTime:(CDStruct_1b6d18a9)arg1;
//- (void)viewWillFullyAppear;
//- (void)dealloc;
//- (id)initWithConfiguration:(id)arg1 kvoController:(id)arg2 mediaDisplayStopwatch:(id)arg3 eventAnnouncer:(id)arg4 sharedResourceManager:(id)arg5 notificationCenter:(id)arg6;
//- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;
//- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
//- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
//
//// Remaining properties
//@property(readonly, copy) NSString *debugDescription;
//@property(readonly, copy) NSString *description;
//@property(readonly) unsigned long long hash;
//@property(readonly) Class superclass;

@end

