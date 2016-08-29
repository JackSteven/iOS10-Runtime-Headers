/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarForegroundView : UIView {
    NSMutableArray * _actionAnimationStack;
    UIStatusBarComposedData * _currentData;
    UIStatusBarForegroundStyleAttributes * _foregroundStyle;
    long long  _idiom;
    int  _ignoreDataLevel;
    bool  _itemIsEnabled;
    UIStatusBarLayoutManager * _layoutManagers;
    int  _pendedActions;
    UIStatusBarComposedData * _pendedData;
    bool  _usesVerticalLayout;
}

@property (nonatomic, readonly) UIStatusBarForegroundStyleAttributes *foregroundStyle;
@property (nonatomic) long long idiom;

- (void).cxx_destruct;
- (void)_animateUnlockCompletionBlock:(id /* block */)arg1;
- (void)_cleanUpAfterDataChange;
- (void)_cleanUpAfterSimpleReflow;
- (id)_computeVisibleItemsPreservingHistory:(bool)arg1;
- (void)_reflowItemViewsCrossfadingCenterWithDuration:(double)arg1 timeWasEnabled:(bool)arg2;
- (void)_reflowItemViewsWithDuration:(double)arg1 preserveHistory:(bool)arg2;
- (void)_setStatusBarData:(id)arg1 actions:(int)arg2 animated:(bool)arg3;
- (bool)_tryToPlaceItem:(id)arg1 inItemArray:(id)arg2 layoutManager:(id)arg3 roomRemaining:(double*)arg4 allowSwap:(bool)arg5 swappedItem:(id*)arg6;
- (void)animateUnlock;
- (void)dealloc;
- (void)didMoveToWindow;
- (double)edgePadding;
- (id)foregroundStyle;
- (long long)idiom;
- (bool)ignoringData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 foregroundStyle:(id)arg2 usesVerticalLayout:(bool)arg3;
- (bool)isShowingBreadcrumb;
- (void)jiggleLockIcon;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)rectIntersectsTimeItem:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)reflowItemViews:(bool)arg1;
- (void)reflowItemViewsCrossfadingCenter:(id)arg1 duration:(double)arg2;
- (void)reflowItemViewsForgettingEitherSideItemHistory;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIdiom:(long long)arg1;
- (void)setPersistentAnimationsEnabled:(bool)arg1;
- (void)setStatusBarData:(id)arg1 actions:(int)arg2 animated:(bool)arg3;
- (void)startIgnoringData;
- (void)stopIgnoringData:(bool)arg1;
- (bool)willChangeNavigationItemDisplayWithSystemNavigationAction:(id)arg1;

@end
