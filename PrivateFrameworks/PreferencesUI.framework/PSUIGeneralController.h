/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIGeneralController : PSListController <CRCarPlayPreferencesDelegate, DevicePINControllerDelegate> {
    CRCarPlayPreferences * _carPreferences;
    PSUITVOutManager * _tvOutManager;
    PSSpecifier * _tvOutSpecifier;
    NSTimer * _usageTimer;
}

@property (nonatomic, retain) CRCarPlayPreferences *carPreferences;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)EDGEEnabled:(id)arg1;
- (bool)_hasCarPlayContent;
- (void)_setUseSwitchForOrientationLockWithSpecifier:(id)arg1;
- (id)carPreferences;
- (void)dealloc;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)enableEdge:(id)arg1;
- (void)handleCarPlayAllowedDidChange;
- (void)handleTVOutChange;
- (void)handleURL:(id)arg1;
- (id)init;
- (id)parentalControlsEnabled:(id)arg1;
- (void)profileNotification:(id)arg1;
- (void)setCarPreferences:(id)arg1;
- (bool)shouldDeferPushForSpecifierID:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;

@end
