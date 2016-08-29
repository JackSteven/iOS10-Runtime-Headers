/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDFMIPManager : NSObject {
    NSURL * _managedLostModeFileURL;
    NSURL * _needsLocateAckLostModeFileURL;
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcConnectionCreationQueue;
}

@property (nonatomic, retain) NSURL *managedLostModeFileURL;
@property (nonatomic, retain) NSURL *needsLocateAckLostModeFileURL;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *xpcConnectionCreationQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_destroyXPCConnection;
- (void)_forceFMWUpgradeAlertWithCompletion:(id /* block */)arg1;
- (void)_initiateLostModeExitAuthForIDSDeviceID:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)_isRunningAsMobileUser;
- (unsigned long long)_managedLostModeType;
- (unsigned long long)_needsAckLostModeType;
- (id)_postWipePrefPath;
- (bool)_quickFetchFMIPEnabledstate;
- (void)_updateManagedLostModeWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateNeedsLocateAckLostModeWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)currentXPCConnection;
- (void)dealloc;
- (void)deviceActivationDidSucceed;
- (void)didChangeFMIPAccountInfo:(id)arg1;
- (void)didReceiveLostModeExitAuthToken:(id)arg1;
- (void)disableFMIPUsingToken:(id)arg1 forPairedDeviceWithUDID:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2;
- (void)disableLostMode;
- (void)disableManagedLostModeWithCompletion:(id /* block */)arg1;
- (void)disableManagedLostModeWithLocatedMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)disableTouchIDForLostModeWithCompletion:(id /* block */)arg1;
- (void)enableActivationLockWithCompletion:(id /* block */)arg1;
- (id)enableFMIPInContext:(unsigned long long)arg1;
- (id)enableLostModeWithInfo:(id)arg1;
- (void)enableManagedLostModeWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)fmipAccount;
- (void)fmipAccountWithCompletion:(id /* block */)arg1;
- (void)fmipStateWithCompletion:(id /* block */)arg1;
- (id)getManagedLostModeFileURL;
- (id)getNeedsLocateAckLostModeFileURL;
- (id)init;
- (void)initiateLostModeExitAuthForIDSDeviceID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)initiateLostModeExitAuthWithCompletion:(id /* block */)arg1;
- (void)isActivationLockAllowedWithCompletion:(id /* block */)arg1;
- (void)isActivationLockEnabledWithCompletion:(id /* block */)arg1;
- (void)isActivationLockedWithCompletion:(id /* block */)arg1;
- (bool)isManagedLostModeActive;
- (bool)lockdownShouldDisableDevicePairing;
- (bool)lockdownShouldDisableDeviceRestore;
- (id)lostModeInfo;
- (bool)lostModeIsActive;
- (void)lowBatteryLocateEnabledWithCompletion:(id /* block */)arg1;
- (id)managedLostModeFileURL;
- (void)markAsMissingSupportedForPairedDeviceWithUDID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)markPairedDeviceWithUDID:(id)arg1 asMissingUsingToken:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)needsLocateAckLostModeFileURL;
- (bool)needsLostModeExitAuth;
- (id)newErrorForCode:(int)arg1 message:(id)arg2;
- (id)pathsToPreserveAcrossWipe;
- (void)setLowBatteryLocateEnabled:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)setManagedLostModeFileURL:(id)arg1;
- (void)setNeedsLocateAckLostModeFileURL:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcConnectionCreationQueue:(id)arg1;
- (void)userDidAckManagedLostModeLocateWithCompletion:(id /* block */)arg1;
- (void)userNotifiedOfActivationLockForAllPairedDevices;
- (void)userNotifiedOfActivationLockForPairedDevices:(id)arg1;
- (id)xpcConnection;
- (id)xpcConnectionCreationQueue;

@end
