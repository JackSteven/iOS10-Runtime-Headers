/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAuthorizationFooterView : UIView {
    PKGlyphView * _glyphView;
    UILabel * _labelView;
    PKPaymentAuthorizationLayout * _layout;
    UIView * _lockupView;
    NSLayoutConstraint * _overallHeightConstraint;
    UILabel * _passbookPaymentDetailsView;
    UIButton * _payWithPasscodeButton;
    NSLayoutConstraint * _payWithPasscodeCenterYConstraint;
    NSLayoutConstraint * _separatorLeftConstraint;
    UIView * _separatorView;
    long long  _state;
}

@property (nonatomic, retain) PKPaymentAuthorizationLayout *layout;
@property (nonatomic, readonly) UIButton *payWithPasscodeButton;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)_createSubviews;
- (void)_prepareConstraints;
- (id)_titleAttributedStringForState:(long long)arg1;
- (id)_titleLabelAttributedString:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layout:(id)arg2;
- (id)layout;
- (id)payWithPasscodeButton;
- (void)setLayout:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setState:(long long)arg1 string:(id)arg2 animated:(bool)arg3;
- (long long)state;
- (void)updateConstraints;

@end
