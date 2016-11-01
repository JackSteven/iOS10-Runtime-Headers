/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSHardwareButtonService : SBSAbstractSystemService {
    NSMutableArray * _consumers;
    unsigned long long  _eventMask;
    long long  _maximumPriority;
}

@property (nonatomic, retain) NSMutableArray *consumers;
@property (nonatomic) unsigned long long eventMask;
@property (nonatomic) long long maximumPriority;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addEventConsumerInfo:(id)arg1;
- (void)_mainQueue_handleButtonPressMessage:(long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3;
- (void)_resetEventMask;
- (void)_setApplicationClientEventMask:(unsigned long long)arg1 priority:(long long)arg2;
- (id)_viableConsumerForEvent:(long long)arg1 priority:(long long)arg2;
- (void)acquireHomeHardwareButtonHintSuppressionAssertionForReason:(id)arg1 completion:(id /* block */)arg2;
- (id)beginConsumingPressesForButtonKind:(long long)arg1 eventConsumer:(id)arg2 priority:(long long)arg3;
- (void)consumerInfoWillInvalidate:(id)arg1;
- (id)consumers;
- (id)description;
- (unsigned long long)eventMask;
- (void)fetchHapticTypeForButtonKind:(long long)arg1 completion:(id /* block */)arg2;
- (void)handleButtonPressMessage:(long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3;
- (long long)maximumPriority;
- (void)setConsumers:(id)arg1;
- (void)setEventMask:(unsigned long long)arg1;
- (void)setHapticType:(long long)arg1 forButtonKind:(long long)arg2;
- (void)setMaximumPriority:(long long)arg1;

@end