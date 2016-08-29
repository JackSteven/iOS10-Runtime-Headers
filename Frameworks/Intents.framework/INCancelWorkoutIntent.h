/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCancelWorkoutIntent : INIntent <INCancelWorkoutIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INSpeakableString *workoutName;

- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_typedBackingStore;
- (id)initWithWorkoutName:(id)arg1;
- (void)setWorkoutName:(id)arg1;
- (id)workoutName;

@end
