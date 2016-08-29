/* Generated by RuntimeBrowser.
 */

@protocol CKDAccountInfoProvider <NSObject>

@required

- (bool)accountWantsPushRegistration;
- (NSBundle *)applicationBundle;
- (NSURL *)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
- (NSString *)bundleID;
- (bool)canAccessAccount;
- (void)cloudKitAuthTokenWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (CKDServerConfiguration *)config;
- (CKContainerID *)containerID;
- (NSString *)containerScopedUserID;
- (NSString *)deviceName;
- (NSString *)dsid;
- (NSArray *)enabledKeyboards;
- (void)fetchConfigurationUsingBackgroundSession:(void *)arg1 allowsCellularAccess:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKDServerConfiguration *, NSError *, void*
- (void)fetchContainerScopedUserIDUsingBackgroundSession:(void *)arg1 allowsCellularAccess:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)fetchDeviceIDUsingBackgroundSession:(void *)arg1 allowsCellularAccess:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)fetchPrivateURLWithServerType:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)fetchPublicURLUsingBackgroundSession:(void *)arg1 allowsCellularAccess:(void *)arg2 serverType:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: bool, bool, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (NSString *)hardwareID;
- (void)iCloudAuthTokenWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (bool)isAnonymousAccount;
- (bool)isUnitTestingAccount;
- (NSString *)languageCode;
- (CKDMescalSession *)mescalSession;
- (NSString *)regionCode;
- (void)renewAuthTokenWithReason:(void *)arg1 failedToken:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)renewMescalSessionForRequest:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: CKDURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resetMescalSession;
- (NSString *)serverPreferredPushEnvironment;
- (bool)shouldFailAllTasks;
- (NSString *)trafficContainerIdentifier;

@optional

- (NSDictionary *)additionalHeaderValues;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (void)noteTimeSpentInNetworking:(double)arg1;

@end
