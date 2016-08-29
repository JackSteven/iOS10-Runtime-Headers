/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIControlCenterDefaults : BSAbstractDefaultDomain

@property (nonatomic) bool hasAcknowledgedFirstUseAlert;
@property (nonatomic, readonly) bool shouldAlwaysBeEnabled;
@property (nonatomic, readonly) bool shouldDisableArtraceButton;
@property (nonatomic, readonly) bool shouldDisableInternalButtons;
@property (nonatomic, readonly) bool shouldDisableLaunchingClockToTimer;
@property (nonatomic, readonly) bool shouldDisableScreenRecordingButton;
@property (nonatomic, readonly) bool shouldEnablePrototypeFeatures;
@property (nonatomic, readonly) bool shouldExcludeControlCenterFromStatusBarOverrides;

+ (id)standardDefaults;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end
