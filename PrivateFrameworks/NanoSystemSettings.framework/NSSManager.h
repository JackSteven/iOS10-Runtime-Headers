/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
 */

@interface NSSManager : NSObject {
    NSObject<OS_dispatch_queue> * _externalQueue;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *externalQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (void)displayAirplaneModeMirroringUserEducationAlert;
+ (void)displayAlertFailedRemoteAirplaneMode;
+ (void)displayAlertWithTitle:(id)arg1 body:(id)arg2 icon:(id)arg3;
+ (void)initialize;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (void)enableAirplaneMode:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)externalQueue;
- (void)getAboutInfo:(id /* block */)arg1;
- (void)getAccountsInfo:(id /* block */)arg1;
- (void)getAccountsInfoForAccountType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getLegalDocuments:(id /* block */)arg1;
- (void)getLocalesInfo:(id /* block */)arg1;
- (void)getProfileWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getProfilesInfo:(id /* block */)arg1;
- (void)getUsage:(id /* block */)arg1;
- (void)getiCloudInfo:(id /* block */)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)installProfile:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)internalQueue;
- (void)invalidate;
- (void)obliterateGizmo:(id /* block */)arg1;
- (id)protocol;
- (void)purgeUsageBundle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)rebootDevice;
- (void)removeProfileWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDeviceName:(id)arg1;
- (void)setExternalQueue:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)unsafe_invalidate;
- (id)xpcConnection;

@end
