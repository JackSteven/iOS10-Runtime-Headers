/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntent : NSObject <INIntentExport, NSCopying, NSSecureCoding> {
    PBCodable * _backingStore;
    NSString * _identifier;
}

@property (readonly) long long _cdInteractionMechanism;
@property (readonly) NSArray *_cdRecipients;
@property (nonatomic, copy) PBCodable *backingStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSString *intentId;
@property (nonatomic, readonly) NSString *launchId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *typeName;
@property (nonatomic, readonly) NSString *utteranceString;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)intentDescription;
+ (bool)supportsSecureCoding;
+ (id)typeName;

- (void).cxx_destruct;
- (id)_impl;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)backingStore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;
- (id)intentId;
- (bool)isEqual:(id)arg1;
- (id)launchId;
- (id)protoData;
- (void)setBackingStore:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)trimDataAgainstTCCForAuditToken:(struct { unsigned int x1[8]; })arg1 bundle:(id)arg2;
- (id)typeName;
- (id)utteranceString;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (long long)_cdInteractionMechanism;
- (id)_cdRecipients;

@end
