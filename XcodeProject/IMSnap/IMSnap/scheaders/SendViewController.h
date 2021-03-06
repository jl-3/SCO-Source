//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2017 17:44:06).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKit.h>
#import "AWNavigationMenuItem.h"

//#import "SCAddToGroupViewControllerDelegate-Protocol.h"
//#import "SCBlockedExceptionAlertControllerDelegate-Protocol.h"
//#import "SCGroupMiniProfileViewControllerDelegate-Protocol.h"
//#import "SCHeaderDataSource-Protocol.h"
//#import "SCHeaderDelegate-Protocol.h"
//#import "SCInvalidFriendAlertViewDelegate-Protocol.h"
//#import "SCMiniProfileViewControllerDelegate-Protocol.h"
//#import "SCSelectGroupRecipientsDelegate-Protocol.h"
//#import "SCSelectTopicRecipientDelegate-Protocol.h"
//#import "SCSendConfirmationViewControllerDelegate-Protocol.h"
//#import "SCSendToViewController-Protocol.h"
//#import "SCSendViewControllerDismissalAnimatorDelegate-Protocol.h"
//#import "SCTimeProfilable-Protocol.h"
//#import "UINavigationControllerDelegate-Protocol.h"

//@class FBKVOController, Friend, NSString, NSTimer, SCBlockedExceptionAlertViewController, SCContactsCTAFooterView, SCFeedVerticalPresenter, SCFindFriendMenuViewController, SCHeader, SCInvalidFriendAlertView, SCLocationController, SCMaxBatchGroupCreationAlertView, SCMaxGroupSizeAlertView, SCOurStoryContentReplacement, SCPreviewTooltipBalloon, SCReplyParameters, SCSelectRecipientsConfiguration, SCSelectRecipientsView, SCSendConfirmationView, SCUserSession, UIButton, UIView;
//@protocol SCAddToGroupViewControllerProtocol, SCSendPreviewViewModel, SCSendViewControllerSendingDelegate, SCStartChatDelegate, SendSnapNavigationControllerDelegate, UIViewControllerAnimatedTransitioning><UIViewControllerTransitioningDelegate;

@interface SendViewController : UIViewController <AWNavigationMenuItemDataSource, AWNavigationMenuItemDelegate>
////<SCSelectGroupRecipientsDelegate, SCSendConfirmationViewControllerDelegate, SCHeaderDataSource, SCHeaderDelegate, SCTimeProfilable, SCAddToGroupViewControllerDelegate, SCSendViewControllerDismissalAnimatorDelegate, UINavigationControllerDelegate, SCMiniProfileViewControllerDelegate, SCBlockedExceptionAlertControllerDelegate, SCInvalidFriendAlertViewDelegate, SCSelectTopicRecipientDelegate, SCGroupMiniProfileViewControllerDelegate, SCSendToViewController>
//{
////    SCUserSession *_userSession;
////    id <UIViewControllerAnimatedTransitioning><UIViewControllerTransitioningDelegate> _dismissalAnimator;
////    FBKVOController *_KVOController;
////    SCLocationController *_locationController;
////    SCContactsCTAFooterView *_addContactsFooterView;
//    SCHeader *_header;
//    UIView *_topRightButtonContainer;
//    UIButton *_addFriendButton;
//    _Bool _userSentToSettings;
//    _Bool _shouldSyncGallerySelectionWithMyStory;
//    _Bool _shouldShowCreateGroupButton;
//    _Bool _didUIUnblockedByTimer;
////    SCSelectRecipientsConfiguration *_selectRecipientsConfiguration;
//    UIButton *_mischiefCreateButton;
////    SCFeedVerticalPresenter *_verticalPresenter;
////    UIViewController<SCAddToGroupViewControllerProtocol> *_addToGroupVC;
////    SCInvalidFriendAlertView *_invalidFriendAlertView;
////    SCBlockedExceptionAlertViewController *_blockedExceptionAlertVC;
////    SCPreviewTooltipBalloon *_alternateCreateButtonTooltip;
//    NSTimer *_timerForHideAlternateCreateButtonTooltip;
//    double _startTime;
////    SCMaxGroupSizeAlertView *_maxGroupSizeAlertView;
////    SCMaxBatchGroupCreationAlertView *_maxBatchGroupCreationAlertView;
////    SCOurStoryContentReplacement *_ourStoryContentReplacement;
//    NSString *_sessionId;
//    _Bool _isOpenedFromMemoriesTabInChatDrawer;
//    _Bool _gallerySendingLongVideo;
//    _Bool _userDidPressSend;
//    _Bool _isMultiSnap;
//    _Bool _allAreLagunaSnapsWithin24h;
//    _Bool _hideAddFriendsButton;
//    _Bool _showsAddDuplicatePromptForMyStory;
//    _Bool _animationInProgress;
//    _Bool _previousStatusBarHidden;
//    id <SCSendViewControllerSendingDelegate> _sendingDelegate;
//    id <SendSnapNavigationControllerDelegate> _delegate;
//    id <SCStartChatDelegate> _startChatDelegate;
////    Friend *_replyFriend;
////    SCSelectRecipientsView *_selectRecipientsView;
//    long long _snapSource;
//    NSString *_pageType;
////    id <SCSendPreviewViewModel> _previewViewModel;
//    double _lastExitTime;
//    NSString *_captureSessionId;
//    long long _statusBarStyle;
////    SCFindFriendMenuViewController *_addFriendsVC;
////    SCSendConfirmationView *_sendConfirmationView;
//    UIView *_containerView;
//    double _keyboardHeight;
////    SCReplyParameters *_replyParameters;
//    double _previousStatusBarY;
//}
//
//+ (int)context;
//+ (id)pageViewName;
//@property(nonatomic) _Bool previousStatusBarHidden; // @synthesize previousStatusBarHidden=_previousStatusBarHidden;
//@property(nonatomic) double previousStatusBarY; // @synthesize previousStatusBarY=_previousStatusBarY;
////@property(retain, nonatomic) SCReplyParameters *replyParameters; // @synthesize replyParameters=_replyParameters;
//@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
//@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
//@property(nonatomic) _Bool animationInProgress; // @synthesize animationInProgress=_animationInProgress;
////@property(retain, nonatomic) SCSendConfirmationView *sendConfirmationView; // @synthesize sendConfirmationView=_sendConfirmationView;
////@property(retain, nonatomic) SCFindFriendMenuViewController *addFriendsVC; // @synthesize addFriendsVC=_addFriendsVC;
//@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
//@property(nonatomic) _Bool showsAddDuplicatePromptForMyStory; // @synthesize showsAddDuplicatePromptForMyStory=_showsAddDuplicatePromptForMyStory;
//@property(nonatomic) _Bool hideAddFriendsButton; // @synthesize hideAddFriendsButton=_hideAddFriendsButton;
//@property(nonatomic) _Bool allAreLagunaSnapsWithin24h; // @synthesize allAreLagunaSnapsWithin24h=_allAreLagunaSnapsWithin24h;
//@property(copy, nonatomic) NSString *captureSessionId; // @synthesize captureSessionId=_captureSessionId;
//@property(nonatomic) _Bool isMultiSnap; // @synthesize isMultiSnap=_isMultiSnap;
//@property(nonatomic) _Bool userDidPressSend; // @synthesize userDidPressSend=_userDidPressSend;
//@property(nonatomic) double lastExitTime; // @synthesize lastExitTime=_lastExitTime;
////@property(retain, nonatomic) id <SCSendPreviewViewModel> previewViewModel; // @synthesize previewViewModel=_previewViewModel;
//@property(nonatomic) _Bool gallerySendingLongVideo; // @synthesize gallerySendingLongVideo=_gallerySendingLongVideo;
//@property(copy, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
//@property(nonatomic) _Bool isOpenedFromMemoriesTabInChatDrawer; // @synthesize isOpenedFromMemoriesTabInChatDrawer=_isOpenedFromMemoriesTabInChatDrawer;
//@property(nonatomic) long long snapSource; // @synthesize snapSource=_snapSource;
////@property(retain, nonatomic) SCSelectRecipientsView *selectRecipientsView; // @synthesize selectRecipientsView=_selectRecipientsView;
//@property(retain, nonatomic) Friend *replyFriend; // @synthesize replyFriend=_replyFriend;
////@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
////@property(nonatomic) __weak id <SendSnapNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
////@property(nonatomic) __weak id <SCSendViewControllerSendingDelegate> sendingDelegate; // @synthesize sendingDelegate=_sendingDelegate;
////- (void).cxx_destruct;
//- (void)didTapAddStoryHeader:(id)arg1;
//- (void)_showAlertForTooManyGroupStories;
//- (void)dismissalAnimatorViewControllerWillDismiss:(id)arg1;
//- (_Bool)_addFriendsMenuEnabled;
//- (struct CGAffineTransform)_alternateCreateButtonTransform;
//- (void)dismissAlternateCreateButtonTooltipIfNecessary;
//- (void)_handleTapOnTooltip;
//- (void)showAlternateCreateButtonTooltipIfNecessary;
//- (void)_initAlternateCreateButtonTooltip;
//- (void)didGrantBlockExceptionForGroup:(id)arg1;
//- (void)groupMiniProfileControllerDidUpdateGroup:(id)arg1;
//- (void)groupMiniProfileController:(id)arg1 wantsToNavigateToChatForFriend:(id)arg2 deepLinkURL:(id)arg3;
//- (void)groupMiniProfileControllerDidPressSnapButton:(id)arg1;
//- (void)groupMiniProfileControllerDidPressChatButton:(id)arg1;
//- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
//- (_Bool)hasSelectedRecipients;
//- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
//- (void)selectRecipientsTableViewDidScroll:(id)arg1;
//- (double)backgroundImageVerticalOffset;
//- (void)updateConfirmationViewRecipients;
//- (void)updateGroupLabelAnimated:(_Bool)arg1;
//- (void)_actualSendGroup;
//- (void)logStoriesSelectionWithLoggingParameters:(id)arg1;
//- (id)selectionResult;
//- (void)sendGroupPressed;
//- (void)navigateToChatViewWithGroupId:(id)arg1;
//- (void)didSendSnapInViewController:(id)arg1;
//- (void)navigateToChatViewWithFriend:(id)arg1 deepLinkURL:(id)arg2 viewController:(id)arg3;
//- (void)didPressMischiefConfirmationButton:(id)arg1 viewController:(id)arg2;
////- (void)dismissViewControllerAnimated:(_Bool)arg1 viewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
//- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
//- (_Bool)_hasTooManyNewMischiefsCreated;
//- (void)didTapAddMischiefSectionHeader:(id)arg1;
//- (void)mischiefCreateButtonPressed;
//- (void)_showMaxBatchGroupCreationAlert;
//- (void)_showMaxGroupSizeAlert;
//- (unsigned long long)titleTypeForInvalidFriendAlertView;
//- (void)showKeyboardIfNecessary:(_Bool)arg1;
//- (void)_showInvalidFriendAlertWithName:(id)arg1;
//- (_Bool)_shouldDimAlternateCreateButton;
//- (double)_yOffsetForCreateGroupButton;
//- (void)setMischiefButton:(_Bool)arg1;
//- (void)_initMischiefCreateButton;
//- (void)updateMischiefHeaderIfNeeded;
//- (_Bool)_shouldShowMischiefHeader;
//- (void)presentBlockedExceptionSendToAlertViewForMischief:(id)arg1;
//- (void)didTapAddTopicHeader:(id)arg1;
//- (void)didUpdateRecipientMetadata;
//- (void)didUpdateRecipients;
//- (void)selectRecipientsViewDidChangeAddToMyGallery:(id)arg1;
//- (void)rightButtonPressed;
//- (void)leftButtonPressed;
//- (void)initializeFindFriendsVC;
//- (void)dismiss;
//- (id)imageForRightButtonInState:(unsigned long long)arg1;
//- (id)imageForLeftButtonInState:(unsigned long long)arg1;
//- (id)textColorForHeader:(id)arg1;
//- (id)titleForHeader:(id)arg1;
//- (id)backgroundColorForHeader;
//- (void)didFinishUpdatingSendConfirmationBar;
//- (void)didPressRecipient:(id)arg1;
//- (void)didPressSend;
//- (void)didBecomeActive:(id)arg1;
//- (void)keyboardWillChange:(id)arg1 willShow:(_Bool)arg2;
//- (void)keyboardWillHide:(id)arg1;
//- (void)keyboardWillShow:(id)arg1;
//- (unsigned long long)supportedInterfaceOrientations;
//- (void)addContactsButtonClicked:(_Bool)arg1 skipPhoneVerification:(_Bool)arg2;
////@property(copy, nonatomic) SCOurStoryContentReplacement *ourStoryContentReplacement;
//- (double)_confirmationViewBottomInset;
//- (double)_confirmationViewHeight;
//- (void)_setupRecipientsConfiguration;
//- (_Bool)shouldPopToRootViewControllerLater;
//- (_Bool)shouldPopToRootViewController;
//- (void)viewDidDisappear:(_Bool)arg1;
//- (void)viewWillDisappear:(_Bool)arg1;
//- (void)viewDidAppear:(_Bool)arg1;
//- (void)viewWillAppear:(_Bool)arg1;
//- (void)setReplyFriend:(id)arg1 parameters:(id)arg2;
//- (void)viewDidLoad;
//- (double)_yOffsetForAddFriendButton;
//- (void)_initAddFriendButton;
//- (void)_initTopRightButtonContainer;
//- (void)initHeader;
//- (void)updateSendConfirmationLayoutConstraints;
//- (void)_clearTemporaryGroups;
//- (void)dealloc;
//- (void)updateAddContactsViewElements;
//- (void)updateAddContactsFooter;
//- (void)loadView;
//- (id)getPageViewParams;
//- (id)getPageViewName;
//- (id)initWithConfiguration:(id)arg1;
//- (id)initWithUserSession:(id)arg1 recipientConfiguration:(id)arg2;
//- (id)initWithUserSession:(id)arg1;
//
//// Remaining properties
//@property(readonly, copy) NSString *debugDescription;
//@property(readonly, copy) NSString *description;
//@property(readonly) unsigned long long hash;
//@property(readonly) Class superclass;

@end

