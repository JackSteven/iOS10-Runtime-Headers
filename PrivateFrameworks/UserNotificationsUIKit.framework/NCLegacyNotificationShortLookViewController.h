/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCLegacyNotificationShortLookViewController : NCNotificationShortLookViewController {
    UIView * _backgroundView;
}

@property (nonatomic, retain) UIView *backgroundView;

- (void).cxx_destruct;
- (void)_configureScrollViewIfNecessary;
- (void)_finishAdditionalContentReveal;
- (id)_initWithNotificationRequest:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_legacyLookViewIfLoaded;
- (void)_loadLookView;
- (id)_newTransitionManager;
- (struct CGSize { double x1; double x2; })_preferredCustomContentSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_resizeLegacyScrollViewToFitContentSize;
- (void)_setCustomContentProvidingViewController:(id)arg1;
- (void)_setupCustomContentProvider;
- (bool)_tryDismissingShortLookInScrollView:(id)arg1;
- (void)_updateScrollViewWithKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateWithProvidedCustomContent;
- (bool)acknowledgeAndDismissCustomContentProvidingViewControllerIfNecessary:(bool)arg1;
- (id)backgroundView;
- (void)expandAndPlayAudioMessage;
- (bool)hasCommittedToPresentingCustomContentProvidingViewController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentLongLook:(id /* block */)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)transitioningDelegate:(id)arg1 didFinishDismissalOfViewController:(id)arg2 completed:(bool)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end