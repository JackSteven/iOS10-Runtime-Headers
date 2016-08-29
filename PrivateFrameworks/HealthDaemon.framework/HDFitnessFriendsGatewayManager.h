/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsGatewayManager : NSObject <HDFitnessFriendsCloudKitManagerChangesObserver, HDFitnessFriendsManagerReadyObserver> {
    bool  _allPairedWatchesMeetMinimumVersion;
    HDFitnessFriendsCloudKitManager * _cloudKitManager;
    HDFitnessFriendsManager * _fitnessFriendsManager;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_notifyObservers;
- (void)addObserver:(id)arg1;
- (void)beginObserving;
- (void)cloudKitManagerDidUpdateAccountStatus:(id)arg1;
- (void)fitnessFriendsManagerReady:(id)arg1;
- (void)gatewayStatusWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isInviteVersionCompatible:(unsigned int)arg1;
- (void)removeObserver:(id)arg1;
- (bool)shouldFilterIncomingMessageFrom:(id)arg1;
- (void)updateState;

@end
