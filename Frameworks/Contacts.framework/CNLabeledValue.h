/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNLabeledValue : NSObject <CNSuggested, NSCopying, NSSecureCoding> {
    int  _iOSLegacyIdentifier;
    NSString * _identifier;
    CNLabelValuePair * _labelValuePair;
    NSSet * _linkedIdentifiers;
    NSString * _storeIdentifier;
    NSDictionary * _storeInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int iOSLegacyIdentifier;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *label;
@property (readonly) CNLabelValuePair *labelValuePair;
@property (nonatomic, copy) NSSet *linkedIdentifiers;
@property (nonatomic, readonly) NSString *localizedLabel;
@property (nonatomic, readonly) int multiValueIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (nonatomic, copy) NSDictionary *storeInfo;
@property (getter=isSuggested, nonatomic, readonly) bool suggested;
@property (nonatomic, readonly) NSString *suggestionFoundInBundleId;
@property (nonatomic, readonly) SGRecordId *suggestionRecordId;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) <NSCopying><NSSecureCoding> *value;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)allValuesInArray:(id)arg1;
+ (id)emptyEntries;
+ (id)entriesByUnifyingEntryArrays:(id)arg1 forProperty:(id)arg2;
+ (id)entryForIdentifier:(id)arg1 inArray:(id)arg2;
+ (id)entryWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3;
+ (id)firstLabeledValueWithValue:(id)arg1 inArray:(id)arg2;
+ (id)identifierProvider;
+ (bool)isArrayOfEntries:(id)arg1 equalToArrayOfEntriesIgnoringIdentifiers:(id)arg2;
+ (id)labelForIdentifier:(id)arg1 inArray:(id)arg2;
+ (id)labeledValueWithIdentifier:(id)arg1 inArray:(id)arg2;
+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;
+ (id)localizedStringForLabel:(id)arg1;
+ (id)makeIdentifier;
+ (bool)supportsSecureCoding;
+ (id /* block */)testMatchingIdentifier:(id)arg1;
+ (id)valueForIdentifier:(id)arg1 inArray:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (int)iOSLegacyIdentifier;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3;
- (id)initWithLabel:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualIgnoringIdentifiers:(id)arg1;
- (bool)isEqualToLabeledValue:(id)arg1;
- (bool)isEqualToLabeledValue:(id)arg1 includeIdentifiers:(bool)arg2;
- (bool)isSuggested;
- (id)label;
- (id)labelValuePair;
- (id)labeledValueBySettingLabel:(id)arg1;
- (id)labeledValueBySettingLabel:(id)arg1 value:(id)arg2;
- (id)labeledValueBySettingValue:(id)arg1;
- (id)linkedIdentifiers;
- (void)setIOSLegacyIdentifier:(int)arg1;
- (void)setLinkedIdentifiers:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setStoreInfo:(id)arg1;
- (id)storeIdentifier;
- (id)storeInfo;
- (id)suggestionFoundInBundleId;
- (id)suggestionRecordId;
- (id)value;

// Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI

- (int)multiValueIdentifier;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (void*)addressBook;
+ (id)allCustomLabels;
+ (id)allLabels;
+ (id)builtinLabelsForProperty:(id)arg1;
+ (id)defaultLabels;
+ (void)deleteCustomLabel:(id)arg1;
+ (id)localizedDisplayStringForLabel:(id)arg1 propertyName:(id)arg2;

- (Class)contactViewControllerCellClassForPropertyType:(id)arg1;
- (id)localizedLabel;

@end
