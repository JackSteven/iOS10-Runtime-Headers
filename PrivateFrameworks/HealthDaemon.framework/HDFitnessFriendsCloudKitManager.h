/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsCloudKitManager : NSObject <APSConnectionDelegate, HDFitnessFriendsManagerReadyObserver> {
    HDFitnessFriendsNotificationStep * _achievementNotificationStep;
    CKShare * _activityDataShare;
    HDFitnessFriendsNotificationStep * _activitySnapshotNotificationStep;
    APSConnection * _apsConnection;
    NSArray * _blocksWaitingOnFetch;
    NSArray * _blocksWaitingOnSuccessfulFetch;
    long long  _cloudKitAccountStatus;
    HDFitnessFriendsCloudKitUtility * _cloudKitUtility;
    CKContainer * _container;
    unsigned long long  _currentFetchPriority;
    HDFitnessFriendsManager * _fitnessFriendsManager;
    bool  _hasCompletedFirstFetch;
    NSObject<OS_dispatch_source> * _newAccountTasksTimer;
    HDFitnessFriendsNotificationStep * _notificationEventNotificationStep;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    HDFitnessFriendsNotificationStep * _privateDatabaseActivitySnapshotNotificationStep;
    bool  _pushNotificationRecieved;
    bool  _readyForOperations;
    HDFitnessFriendsNotificationStep * _relationshipNotificationStep;
    HDFitnessFriendsNotificationStep * _remoteRelationshipNotificationStep;
    NSObject<OS_dispatch_queue> * _serialQueue;
    HDFitnessFriendsCloudKitServerChangeTokenCache * _serverChangeTokenCache;
    bool  _subscriptionNotificationWasReceivedDuringCurrentFetch;
    HDFitnessFriendsNotificationStep * _workoutNotificationStep;
}

@property (nonatomic, retain) HDFitnessFriendsCloudKitUtility *cloudKitUtility;
@property (nonatomic, retain) CKContainer *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCompletedFirstFetch;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool readyForOperations;
@property (readonly) Class superclass;

+ (id)_activityDataShareRecordID;
+ (id)_subscriptionWithID:(id)arg1 recordType:(id)arg2 highPriority:(bool)arg3;
+ (id)activityDataRecordZoneID;
+ (id)activityDataRootRecordID;
+ (id)relationshipZone;

- (void).cxx_destruct;
- (void)_cancelNewAccountTasksTimer;
- (void)_cloudKitAccountStatusChanged:(id)arg1;
- (void)_createActivityDataShareWithCompletion:(id /* block */)arg1;
- (void)_createNotificationSteps;
- (void)_enumerateRecordsByRecordZoneID:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_fetchAllChangesWithPriority:(long long)arg1 completion:(id /* block */)arg2 waitingForSuccessfulFetchCompletion:(id /* block */)arg3;
- (void)_fetchCloudKitAccountStatusAndNotifyOfChanges;
- (id)_friendUUIDForActivityDataShareRecordZoneID:(id)arg1;
- (void)_handleAccountStatusChange:(long long)arg1;
- (void)_handleIncomingNotification:(id)arg1;
- (void)_handleNewPrivateDatabaseRecordChanges:(id)arg1 sharedDatabaseRecordChanges:(id)arg2;
- (void)_observerQueue_notifyObserversOfBeginUpdates;
- (void)_observerQueue_notifyObserversOfEndUpdates;
- (void)_observerQueue_performNotificationStep:(id)arg1 onRecords:(id)arg2 dispatchGroup:(id)arg3;
- (void)_performAndRetryNewAccountTasksIfNecessaryWithShouldCreateSubscriptions:(bool)arg1 shouldFetch:(bool)arg2;
- (void)_performAndRetryNewAccountTasksWithRetryInterval:(double)arg1 shouldCreateSubscriptions:(bool)arg2 shouldFetch:(bool)arg3;
- (void)_performNewAccountTasksCreatingSubscriptions:(bool)arg1 fetching:(bool)arg2 completion:(id /* block */)arg3;
- (void)_pushDisable;
- (id)_queue_apsEnvironmentString;
- (void)_queue_callFetchCompletionBlocksWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_queue_cancelAllExecutingFetches;
- (void)_queue_clearChangeTokenCacheAndFriendListWithCompletion:(id /* block */)arg1;
- (void)_queue_fetchAllChangesWithPriority:(long long)arg1;
- (bool)_queue_isCloudKitAccountDifferentFromLastAccount;
- (void)_queue_notifyObserversOfStatusChanged;
- (void)_queue_pushEnable;
- (void)_queue_saveCloudKitAccountToKeyValueStore;
- (void)_queue_setHasCompletedFirstFetch:(bool)arg1;
- (void)_queue_startFetchAllChangesOperationWithPriority:(long long)arg1 completion:(id /* block */)arg2;
- (void)_saveSubscriptions:(id)arg1 andDeleteSubscriptionsWithIdentifiers:(id)arg2 inDatabase:(id)arg3 completion:(id /* block */)arg4;
- (void)_subscribeToChangesInDatabase:(id)arg1 subscriptionPrefix:(id)arg2 recordTypes:(id)arg3 recordTypesToDelete:(id)arg4 completion:(id /* block */)arg5;
- (void)_subscribeToChangesInPrivateDatabaseWithCompletion:(id /* block */)arg1;
- (void)_subscribeToChangesInSharedDatabaseWithCompletion:(id /* block */)arg1;
- (void)_verifyOrCreateSubscriptionsWithCompletion:(id /* block */)arg1;
- (void)acceptSharesWithURLs:(id)arg1 completion:(id /* block */)arg2;
- (void)addObserver:(id)arg1;
- (void)addParticipantWithCloudKitAddress:(id)arg1 toShares:(id)arg2 completion:(id /* block */)arg3;
- (void)cloudKitAccountStatusWithCompletion:(id /* block */)arg1;
- (id)cloudKitUtility;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)container;
- (void)createShareWithRootRecord:(id)arg1 otherRecordsToSave:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)fetchAllChangesWithPriority:(long long)arg1 completion:(id /* block */)arg2;
- (void)fetchAllChangesWithPriority:(long long)arg1 waitingForSuccessfulFetchCompletion:(id /* block */)arg2;
- (void)fetchAndHandleAccountStatus;
- (void)fetchOrCreateActivityDataShareWithCompletion:(id /* block */)arg1;
- (void)fetchShareWithShareRecordID:(id)arg1 completion:(id /* block */)arg2;
- (void)fitnessFriendsManagerReady:(id)arg1;
- (void)forceSaveRecordsIntoPrivateDatabaseIgnoringServerChanges:(id)arg1 priority:(long long)arg2 completion:(id /* block */)arg3;
- (bool)hasCompletedFirstFetch;
- (id)init;
- (bool)readyForOperations;
- (void)removeObserver:(id)arg1;
- (void)removeParticpantWithCloudKitAddress:(id)arg1 fromShares:(id)arg2 completion:(id /* block */)arg3;
- (void)saveRecordsIntoPrivateDatabase:(id)arg1 priority:(long long)arg2 completion:(id /* block */)arg3;
- (void)setCloudKitUtility:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setHasCompletedFirstFetch:(bool)arg1;
- (id)shareURLForShare:(id)arg1;

@end
