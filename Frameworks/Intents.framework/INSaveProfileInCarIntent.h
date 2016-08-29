/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSaveProfileInCarIntent : INIntent <INSaveProfileInCarIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *profileLabel;
@property (nonatomic, readonly, copy) NSNumber *profileNumber;
@property (readonly) Class superclass;

- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_typedBackingStore;
- (id)initWithProfileNumber:(id)arg1 profileLabel:(id)arg2;
- (id)profileLabel;
- (id)profileNumber;
- (void)setProfileLabel:(id)arg1;
- (void)setProfileNumber:(id)arg1;

@end
