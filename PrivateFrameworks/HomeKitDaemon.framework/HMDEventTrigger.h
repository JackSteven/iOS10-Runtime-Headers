/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDEventTrigger : HMDTrigger <HMDLocationDelegate, HMFTimerDelegate> {
    NSMutableArray * _characteristicEvents;
    NSPredicate * _evaluationCondition;
    NSMutableArray * _locationEvents;
    NSArray * _recurrences;
    HMFTimer * _secureTriggerConfirmationTimer;
}

@property (nonatomic, retain) NSMutableArray *characteristicEvents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSPredicate *evaluationCondition;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *locationEvents;
@property (nonatomic, readonly) NSArray *recurrences;
@property (nonatomic, retain) HMFTimer *secureTriggerConfirmationTimer;
@property (readonly) Class superclass;

+ (bool)__validateRecurrences:(id)arg1;
+ (id)rewriteNowAdjustedForHomeTimeZone:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activate:(bool)arg1 characteristicEvents:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_activateLocationEvents:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_checkForNoEvents;
- (bool)_compareEventValue:(id)arg1 withCharacteristic:(id)arg2;
- (void)_evaluateFiringTrigger;
- (void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)_handleAddEventToEventTrigger:(id)arg1;
- (void)_handleLocationAuthorization:(int)arg1;
- (void)_handleLocationAuthorizationMessage:(id)arg1;
- (void)_handleRemoveEventsFromEventTrigger:(id)arg1;
- (void)_handleRetrieveLocationEventForEventTrigger:(id)arg1;
- (void)_handleUpdateEventForEventTrigger:(id)arg1;
- (void)_handleUpdateEventTriggerCondition:(id)arg1;
- (void)_handleUpdateEventTriggerRecurrences:(id)arg1;
- (void)_reevaluateIfRelaunchRequired:(bool)arg1;
- (void)_registerForMessages;
- (id)_rewritePredicate:(id)arg1 currentCharacteristicInPredicate:(id*)arg2 characteristicsToRead:(id)arg3;
- (void)_saveChanges:(id)arg1;
- (void)_sortEvents:(id)arg1;
- (id)_updatePredicate:(id)arg1 currentCharacteristicInPredicate:(id*)arg2 conditionModified:(bool*)arg3 removedAccessory:(id)arg4;
- (void)activate:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)activateOnLocalDevice;
- (id)addDeltaToNow:(id)arg1;
- (id)characteristicEvents;
- (id)compareValueOfCharacteristic:(id)arg1 againstValue:(id)arg2 operatorType:(id)arg3;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (bool)containsSecureActionSet;
- (id)dateComponentsFromDate:(id)arg1;
- (id)dateTodayMatchingComponents:(id)arg1;
- (void)dealloc;
- (void)didEnterRegion:(id)arg1;
- (void)didExitRegion:(id)arg1;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)evaluationCondition;
- (void)executeTriggerAfterEvaluatingCondition:(id)arg1;
- (void)fixupForReplacementAccessory:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 events:(id)arg2 recurrences:(id)arg3 evaluationCondition:(id)arg4;
- (void)invalidate;
- (id)locationEvents;
- (id)recurrences;
- (void)removeAccessory:(id)arg1;
- (id)secureTriggerConfirmationTimer;
- (void)sendTriggerFiredNotification:(id)arg1;
- (void)setCharacteristicEvents:(id)arg1;
- (void)setLocationEvents:(id)arg1;
- (void)setSecureTriggerConfirmationTimer:(id)arg1;
- (bool)shouldEncodeLastFireDate:(id)arg1;
- (id)sunrise;
- (id)sunset;
- (void)timerDidFire:(id)arg1;
- (unsigned long long)triggerType;

@end
