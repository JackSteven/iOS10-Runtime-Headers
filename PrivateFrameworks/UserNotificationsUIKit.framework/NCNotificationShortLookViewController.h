/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationShortLookViewController : NCNotificationViewController <NCBannerPresentationTransitioningDelegateObserver, NCLongLookPresentationControllerDelegate, NCTransitionManagerDelegate> {
    UIView * _audioAccessoryView;
    NSHashTable * _audioAccessoryViewObservers;
    NCBannerPresentationTransitionDelegate * _bannerPresentationTransitionDelegate;
    UIView * _contextDefiningContainerView;
    UIViewController * _contextDefiningViewController;
    NCNotificationViewController * _longLookNotificationViewController;
    NSDate * _tapBeginTime;
    UITapGestureRecognizer * _tapGesture;
    NCTransitionManager * _transitionManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_presentedLongLookViewController, nonatomic, readonly) NCNotificationViewController *presentedLongLookViewController;
@property (readonly) Class superclass;
@property (getter=_transitionManager, nonatomic, retain) NCTransitionManager *transitionManager;

- (void).cxx_destruct;
- (void)_configureScrollViewIfNecessary;
- (id)_customContentProvidingViewControllerCreateIfNecessary;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForTransitionViewInScrollView;
- (void)_handleTapOnView:(id)arg1;
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(bool)arg2;
- (bool)_isPresentingCustomContentProvidingViewController;
- (void)_loadExtensionIfNecessary;
- (void)_loadLookView;
- (id)_newTransitionManager;
- (id)_notificationShortLookViewIfLoaded;
- (void)_notificationViewControllerViewDidLoad;
- (id)_presentedLongLookViewController;
- (void)_resizeViewToFitContainerView;
- (void)_setAudioAccessoryView:(id)arg1;
- (bool)_setDelegate:(id)arg1;
- (bool)_setNotificationRequest:(id)arg1;
- (bool)_shouldAddHintTextToLookView;
- (id)_transitionManager;
- (bool)_tryDismissingShortLookInScrollView:(id)arg1;
- (void)_updateWithProvidedStaticContent;
- (void)addAudioAccessoryViewObserver:(id)arg1;
- (void)customContent:(id)arg1 didLoadAudioAccessoryView:(id)arg2;
- (void)customContentDidLoadExtension:(id)arg1;
- (void)didReceiveNotificationRequest:(id)arg1;
- (bool)dismissPresentedViewControllerAndClearNotification:(bool)arg1 animated:(bool)arg2;
- (void)expandAndPlayAudioMessage;
- (bool)hasCommittedToPresentingCustomContentProvidingViewController;
- (bool)isContentExtensionVisible:(id)arg1;
- (bool)isShortLook;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })longLookPresentationController:(id)arg1 frameForTransitionViewInPresentationSuperview:(id)arg2;
- (bool)longLookPresentationControllerPreviewShouldIncludeShadow:(id)arg1;
- (bool)longLookPresentationControllerShouldRestoreSourceView:(id)arg1;
- (id)longLookViewControllerForTransitionManager:(id)arg1;
- (void)longLookWillDismissForTransitionManager:(id)arg1;
- (void)longLookWillPresentForTransitionManager:(id)arg1 withSource:(id)arg2;
- (void)presentLongLookAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)presentingViewControllerForTransitionManager:(id)arg1;
- (void)removeAudioAccesoryViewObserver:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setInteractionEnabled:(bool)arg1;
- (void)setTransitionManager:(id)arg1;
- (bool)shouldRestorePresentingShortLookOnDismiss;
- (void)transitionManager:(id)arg1 didDismissLongLook:(bool)arg2;
- (void)transitionManager:(id)arg1 didPresentLongLook:(bool)arg2;
- (bool)transitionManager:(id)arg1 shouldBeginInteractionWithSource:(id)arg2;
- (void)transitionManagerDidEndUserInteraction:(id)arg1;
- (void)transitionManagerWillBeginUserInteraction:(id)arg1;
- (void)transitioningDelegate:(id)arg1 animatorDidCommitToTransitionWithCoordinator:(id)arg2;
- (void)transitioningDelegate:(id)arg1 didFinishDismissalOfViewController:(id)arg2 completed:(bool)arg3;
- (void)viewWillLayoutSubviews;

@end
