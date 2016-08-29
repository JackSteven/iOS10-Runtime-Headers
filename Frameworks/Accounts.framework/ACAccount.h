/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACAccount : NSObject <NSCopying, NSSecureCoding> {
    bool  _accountAccessAvailable;
    NSString * _accountDescription;
    id /* block */  _accountPropertiesTransformer;
    ACAccountType * _accountType;
    bool  _active;
    bool  _authenticated;
    NSString * _authenticationType;
    NSArray * _childAccounts;
    NSString * _clientToken;
    bool  _creatingFromManagedObject;
    ACAccountCredential * _credential;
    NSString * _credentialType;
    id  _credentialsDidChangeObserver;
    NSMutableDictionary * _dataclassProperties;
    NSDate * _date;
    NSMutableSet * _dirtyAccountProperties;
    NSMutableSet * _dirtyDataclassProperties;
    NSMutableSet * _dirtyProperties;
    NSMutableSet * _enabledDataclasses;
    bool  _haveCheckedForChildAccounts;
    bool  _haveCheckedForClientToken;
    bool  _haveCheckedForParentAccount;
    NSString * _identifier;
    NSDate * _lastCredentialRenewalRejectionDate;
    NSURL * _objectID;
    NSString * _owningBundleID;
    ACAccount * _parentAccount;
    NSString * _parentAccountIdentifier;
    NSMutableDictionary * _properties;
    NSMutableSet * _provisionedDataclasses;
    ACAccountStore * _store;
    bool  _supportsAuthentication;
    NSString * _username;
    bool  _visible;
}

@property (setter=_aa_setRawPassword:, nonatomic, copy) NSString *_aa_rawPassword;
@property (nonatomic, readonly) NSDictionary *aa_accountFirstDisplayAlert;
@property (nonatomic, readonly) NSDictionary *aa_accountFooterButton;
@property (nonatomic, readonly) NSString *aa_accountFooterText;
@property (nonatomic, readonly) NSString *aa_accountTypeString;
@property (nonatomic, readonly) NSString *aa_altDSID;
@property (nonatomic, readonly) NSArray *aa_appleIDAliases;
@property (nonatomic, readonly) NSString *aa_appleId;
@property (setter=aa_setAuthToken:, nonatomic, copy) NSString *aa_authToken;
@property (nonatomic, readonly) ACAccount *aa_childMailAccount;
@property (nonatomic, readonly) ACAccount *aa_cloudKitAccount;
@property (nonatomic, readonly) NSString *aa_displayName;
@property (setter=aa_setFirstName:, nonatomic, copy) NSString *aa_firstName;
@property (nonatomic, readonly) ACAccount *aa_fmfAccount;
@property (nonatomic, readonly) ACAccount *aa_fmipAccount;
@property (nonatomic, readonly) NSString *aa_fmipToken;
@property (nonatomic, readonly) NSString *aa_hsaToken;
@property (setter=aa_setCloudDocsMigrationComplete:, nonatomic) bool aa_isCloudDocsMigrationComplete;
@property (nonatomic, readonly) bool aa_isManagedAppleID;
@property (nonatomic, readonly) bool aa_isNotesMigrated;
@property (setter=aa_setPrimaryAccount:, nonatomic) bool aa_isPrimaryAccount;
@property (setter=aa_setPrimaryEmailVerified:, nonatomic) bool aa_isPrimaryEmailVerified;
@property (nonatomic, readonly) bool aa_isSandboxAccount;
@property (setter=aa_setSyncedAccount:, nonatomic) bool aa_isSyncedAccount;
@property (setter=aa_setUndergoingRepair:, nonatomic) bool aa_isUndergoingRepair;
@property (setter=aa_setUsesCloudDocs:, nonatomic) bool aa_isUsingCloudDocs;
@property (nonatomic, readonly) bool aa_isUsingiCloud;
@property (setter=aa_setLastName:, nonatomic, copy) NSString *aa_lastName;
@property (nonatomic, readonly) NSString *aa_mapsToken;
@property (nonatomic, readonly) bool aa_needsEmailConfiguration;
@property (nonatomic, readonly) bool aa_needsRegistration;
@property (setter=aa_setNeedsToVerifyTerms:, nonatomic) bool aa_needsToVerifyTerms;
@property (setter=aa_setPassword:, nonatomic, copy) NSString *aa_password;
@property (nonatomic, readonly) NSString *aa_personID;
@property (nonatomic, readonly) NSString *aa_primaryEmail;
@property (nonatomic, readonly) NSString *aa_protocolVersion;
@property (nonatomic, readonly) int aa_repairerPID;
@property (nonatomic, readonly) bool aa_serviceUnavailable;
@property (nonatomic, readonly) NSDictionary *aa_serviceUnavailableInfo;
@property (nonatomic, readonly) NSString *aa_syncStoreIdentifier;
@property (nonatomic, copy) NSString *accountDescription;
@property (nonatomic, readonly) NSDictionary *accountProperties;
@property (copy) id /* block */ accountPropertiesTransformer;
@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, retain) ACAccountType *accountType;
@property (getter=isActive, nonatomic) bool active;
@property (getter=isAuthenticated, nonatomic) bool authenticated;
@property (nonatomic, readonly) NSString *authenticationType;
@property bool calAttachmentDownloadHasTakenPlace;
@property (readonly) NSArray *calCalDAVChildAccounts;
@property (retain) NSString *calCollectionSetName;
@property (readonly) NSURL *calExchangeWebServicesURL;
@property (readonly) NSURL *calExternalExchangeWebServicesURL;
@property (copy) NSURL *calExternalURL;
@property (retain) NSString *calHostname;
@property (copy) NSString *calIdentityEmailAddress;
@property (readonly) bool calIsAutoRefreshed;
@property (readonly) bool calIsCalDAVAccount;
@property (readonly) bool calIsDirty;
@property (readonly) bool calIsEnabled;
@property bool calIsEnabledForCalendar;
@property bool calIsEnabledForReminders;
@property (readonly) bool calIsExchangeAccount;
@property (readonly) bool calIsGenericCalDAVAccount;
@property (readonly) bool calIsMissingParentAccount;
@property bool calLocalDataMigrationHasTakenPlace;
@property (copy) NSString *calMainPrincipalUID;
@property (copy) NSNumber *calPort;
@property (readonly, copy) NSDictionary *calPrincipals;
@property bool calPushDisabled;
@property long long calRefreshInterval;
@property (copy) NSString *calRootFolderID;
@property bool calServerSyncHasTakenPlace;
@property (copy) NSURL *calServerURL;
@property bool calSkipCredentialVerification;
@property bool calUseExternalURL;
@property bool calUseKerberos;
@property bool calUseSSL;
@property (copy) NSString *calWebServicesRecordGUID;
@property (nonatomic, readonly) NSArray *childAccounts;
@property (nonatomic, readonly) ACAccount *ck_cloudKitAccount;
@property (nonatomic, readonly) NSString *clientToken;
@property (nonatomic, retain) NSDictionary *communicationServiceRules;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) ACAccountCredential *credential;
@property (nonatomic, readonly) NSString *credentialType;
@property (nonatomic, readonly) NSDictionary *dataclassProperties;
@property (getter=isDirty, nonatomic, readonly) bool dirty;
@property (nonatomic, readonly) NSSet *dirtyAccountProperties;
@property (nonatomic, readonly) NSSet *dirtyDataclassProperties;
@property (nonatomic, readonly) NSSet *dirtyProperties;
@property (nonatomic, readonly) ACAccount *displayAccount;
@property (nonatomic, retain) NSMutableSet *enabledDataclasses;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSDate *lastCredentialRenewalRejectionDate;
@property (nonatomic, retain) NSString *mcAccountIdentifier;
@property (nonatomic, retain) NSString *mcPayloadUUID;
@property (nonatomic, retain) NSString *mcProfileUUID;
@property (nonatomic, readonly) NSURL *objectID;
@property (nonatomic, retain) ACAccount *parentAccount;
@property (nonatomic, readonly) NSString *parentAccountIdentifier;
@property (nonatomic, retain) NSMutableSet *provisionedDataclasses;
@property (nonatomic, readonly) NSString *shortDebugName;
@property (nonatomic) bool supportsAuthentication;
@property (nonatomic, readonly) bool supportsPush;
@property (nonatomic, readonly) NSString *userFullName;
@property (nonatomic, copy) NSString *username;
@property (getter=isVisible, nonatomic) bool visible;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

+ (id)_createNewAccountUID;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_clearCachedChildAccounts;
- (void)_clearCachedCredentials;
- (void)_clearDirtyProperties;
- (id)_initWithManagedAccount:(id)arg1 accountStore:(id)arg2 withDirtyStateFromAccount:(id)arg3;
- (void)_installCredentialsChangedObserver;
- (void)_loadAllCachedProperties;
- (void)_loadCachedPropertiesWithoutCredentials;
- (void)_markAccountPropertyDirty:(id)arg1;
- (void)_markCredentialDirty;
- (void)_markDataclassPropertyDirty:(id)arg1;
- (void)_markPropertyDirty:(id)arg1;
- (void)_setAccountStore:(id)arg1;
- (void)_setObjectID:(id)arg1;
- (bool)_useParentForCredentials;
- (id)accountByCleaningThirdPartyTransformations;
- (id)accountDescription;
- (id)accountProperties;
- (id /* block */)accountPropertiesTransformer;
- (id)accountPropertyForKey:(id)arg1;
- (id)accountStore;
- (id)accountType;
- (bool)addClientToken:(id)arg1;
- (bool)authenticated;
- (id)authenticationType;
- (id)childAccounts;
- (id)childAccountsWithAccountTypeIdentifier:(id)arg1;
- (id)clientToken;
- (struct __SecIdentity { }*)copySecIdentity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)credential;
- (id)credentialType;
- (id)credentialWithError:(id*)arg1;
- (void)credentialsChanged:(id)arg1;
- (id)dataclassProperties;
- (void)dealloc;
- (id)defaultAutodiscoverDomainForChildType:(id)arg1;
- (id)description;
- (id)diffAccount:(id)arg1;
- (id)dirtyAccountProperties;
- (id)dirtyDataclassProperties;
- (id)dirtyProperties;
- (id)displayAccount;
- (id)enabledAndSyncableDataclasses;
- (id)enabledDataclasses;
- (void)encodeWithCoder:(id)arg1;
- (id)fullDescription;
- (id)identifier;
- (id)initWithAccountType:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagedAccount:(id)arg1;
- (id)initWithManagedAccount:(id)arg1 accountStore:(id)arg2;
- (bool)isActive;
- (bool)isAuthenticated;
- (bool)isDirty;
- (bool)isEnabledForDataclass:(id)arg1;
- (bool)isEnabledToSyncDataclass:(id)arg1;
- (bool)isPropertyDirty:(id)arg1;
- (bool)isProvisionedForDataclass:(id)arg1;
- (bool)isVisible;
- (id)lastCredentialRenewalRejectionDate;
- (void)markAllPropertiesDirty;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectID;
- (id)owningBundleID;
- (id)parentAccount;
- (id)parentAccountIdentifier;
- (id)propertiesForDataclass:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (id)provisionedDataclasses;
- (id)qualifiedUsername;
- (void)refresh;
- (void)reload;
- (id)secCertificates;
- (void)setAccountDescription:(id)arg1;
- (void)setAccountProperties:(id)arg1;
- (void)setAccountPropertiesTransformer:(id /* block */)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setAccountType:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setAuthenticated:(bool)arg1;
- (void)setAuthenticationType:(id)arg1;
- (void)setCreatingFromManagedObject:(bool)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCredential:(id)arg1;
- (void)setCredentialType:(id)arg1;
- (void)setDataclassProperties:(id)arg1;
- (void)setEnabled:(bool)arg1 forDataclass:(id)arg2;
- (void)setEnabledDataclasses:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastCredentialRenewalRejectionDate:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setOwningBundleID:(id)arg1;
- (void)setParentAccount:(id)arg1;
- (void)setProperties:(id)arg1 forDataclass:(id)arg2;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setProvisionedDataclasses:(id)arg1;
- (void)setSecCertificates:(id)arg1;
- (void)setSecIdentity:(struct __SecIdentity { }*)arg1;
- (void)setSupportsAuthentication:(bool)arg1;
- (void)setUsername:(id)arg1;
- (void)setVisible:(bool)arg1;
- (id)shortDebugName;
- (bool)supportsAuthentication;
- (bool)supportsPush;
- (void)takeValuesFromModifiedAccount:(id)arg1;
- (id)userFullName;
- (id)username;

// Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI

- (id)displayUsername;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

+ (id)aa_dataclassesBoundToPrimaryAppleAccount;
+ (id)aa_dataclassesBoundToSingleAppleAccount;

- (void)_aa_clearRawPassword;
- (id)_aa_rawPassword;
- (void)_aa_setAltDSID:(id)arg1;
- (void)_aa_setAppleID:(id)arg1;
- (void)_aa_setRawPassword:(id)arg1;
- (id)_registeredBundles;
- (id)aa_accountFirstDisplayAlert;
- (id)aa_accountFooterButton;
- (id)aa_accountFooterText;
- (id)aa_accountTypeString;
- (id)aa_altDSID;
- (id)aa_appleIDAliases;
- (id)aa_appleId;
- (id)aa_authToken;
- (id)aa_authTokenWithError:(id*)arg1;
- (id)aa_childMailAccount;
- (id)aa_cloudKitAccount;
- (void)aa_configureCerts;
- (id)aa_displayName;
- (id)aa_firstName;
- (id)aa_fmfAccount;
- (id)aa_fmipAccount;
- (id)aa_fmipToken;
- (id)aa_hsaToken;
- (id)aa_hsaTokenWithError:(id*)arg1;
- (bool)aa_isCloudDocsMigrationComplete;
- (bool)aa_isManagedAppleID;
- (bool)aa_isNotesMigrated;
- (bool)aa_isPCSErrorTransient:(struct __CFError { }*)arg1;
- (bool)aa_isPrimaryAccount;
- (bool)aa_isPrimaryEmailVerified;
- (bool)aa_isSandboxAccount;
- (bool)aa_isSyncedAccount;
- (bool)aa_isUndergoingRepair;
- (bool)aa_isUsingCloudDocs;
- (bool)aa_isUsingiCloud;
- (id)aa_lastName;
- (id)aa_mapsToken;
- (bool)aa_needsEmailConfiguration;
- (bool)aa_needsPCSRepair;
- (bool)aa_needsPCSRepairWithAuthToken:(id)arg1;
- (bool)aa_needsRegistration;
- (bool)aa_needsToVerifyTerms;
- (id)aa_password;
- (id)aa_personID;
- (id)aa_primaryEmail;
- (id)aa_protocolVersion;
- (void)aa_removeCerts;
- (int)aa_repairerPID;
- (bool)aa_serviceUnavailable;
- (id)aa_serviceUnavailableInfo;
- (void)aa_setAuthToken:(id)arg1;
- (void)aa_setCloudDocsMigrationComplete:(bool)arg1;
- (void)aa_setFirstName:(id)arg1;
- (void)aa_setHSAToken:(id)arg1;
- (void)aa_setLastName:(id)arg1;
- (void)aa_setMapsToken:(id)arg1;
- (void)aa_setNeedsToVerifyTerms:(bool)arg1;
- (void)aa_setPassword:(id)arg1;
- (void)aa_setPrimaryAccount:(bool)arg1;
- (void)aa_setPrimaryEmailVerified:(bool)arg1;
- (void)aa_setSyncedAccount:(bool)arg1;
- (void)aa_setUndergoingRepair:(bool)arg1;
- (void)aa_setUseCellular:(bool)arg1 forDataclass:(id)arg2;
- (void)aa_setUsesCloudDocs:(bool)arg1;
- (id)aa_syncStoreIdentifier;
- (void)aa_updateWithProvisioningResponse:(id)arg1;
- (bool)aa_useCellularForDataclass:(id)arg1;
- (id)appleID;
- (bool)canRemoveAccount;
- (id)dsid;
- (id)initWithAppleID:(id)arg1 password:(id)arg2;
- (int)mobileMeAccountStatus;
- (void)setDSID:(id)arg1;
- (void)storeOriginalUsername;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

- (id)aaui_compositeName;
- (long long)aaui_compositeNameFormat;
- (bool)aaui_isRestrictedForDataclass:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication

- (id)aida_alternateDSID;
- (id)aida_deviceProvisioningInfo;
- (id)aida_dsid;
- (id)aida_tokenForService:(id)arg1;
- (id)aida_tokenWithExpirationCheck;
- (id)aida_tokenWithExpiryCheckForService:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

- (id)_accountPropertiesKeys;
- (id)_calDAVDataclassProperties;
- (id)_createExchangeWebServicesURLFromURL:(id)arg1;
- (bool)_dataclassIsEnabled:(id)arg1;
- (id)_diffAccountPropertiesWithAccount:(id)arg1 firstPropertyOnly:(bool)arg2;
- (id)_diffPropertiesWithAccount:(id)arg1 firstPropertyOnly:(bool)arg2;
- (id)_diffWithAccount:(id)arg1 firstPropertyOnly:(bool)arg2;
- (id)_schemeStringForUseSSL:(bool)arg1;
- (void)_setCalInternalValue:(id)arg1 forAccountPropertyKey:(id)arg2;
- (void)_setIsEnabled:(bool)arg1 forDataclass:(id)arg2;
- (id)_updateURL:(id)arg1 withHost:(id)arg2 port:(id)arg3 useSSL:(id)arg4;
- (bool)_useSSLForSchemeString:(id)arg1;
- (void)addPrincipal:(id)arg1 withUID:(id)arg2;
- (bool)calAttachmentDownloadHasTakenPlace;
- (id)calCalDAVChildAccounts;
- (id)calCollectionSetName;
- (id)calExchangeWebServicesURL;
- (id)calExternalExchangeWebServicesURL;
- (id)calExternalURL;
- (id)calHostname;
- (id)calIdentityEmailAddress;
- (bool)calIsAutoRefreshed;
- (bool)calIsCalDAVAccount;
- (bool)calIsDirty;
- (bool)calIsEnabled;
- (bool)calIsEnabledForCalendar;
- (bool)calIsEnabledForReminders;
- (bool)calIsExchangeAccount;
- (bool)calIsGenericCalDAVAccount;
- (bool)calIsMissingParentAccount;
- (bool)calLocalDataMigrationHasTakenPlace;
- (id)calMainPrincipalUID;
- (id)calPort;
- (id)calPrincipalURLForMainPrincipal;
- (id)calPrincipalURLForPrincipalWithUID:(id)arg1;
- (id)calPrincipals;
- (bool)calPushDisabled;
- (long long)calRefreshInterval;
- (id)calRootFolderID;
- (bool)calServerSyncHasTakenPlace;
- (id)calServerURL;
- (bool)calSkipCredentialVerification;
- (bool)calUseExternalURL;
- (bool)calUseKerberos;
- (bool)calUseSSL;
- (id)calWebServicesRecordGUID;
- (void)createDictionaryForPrincipalWithUID:(id)arg1;
- (id)diffWithAccount:(id)arg1;
- (id)firstDifferentPropertyWithAccount:(id)arg1;
- (void)removeAccountPropertyForKey:(id)arg1;
- (bool)removePrincipalWithUID:(id)arg1;
- (void)setCalAttachmentDownloadHasTakenPlace:(bool)arg1;
- (void)setCalCollectionSetName:(id)arg1;
- (void)setCalExternalURL:(id)arg1;
- (void)setCalHostname:(id)arg1;
- (void)setCalIdentityEmailAddress:(id)arg1;
- (void)setCalIsEnabledForCalendar:(bool)arg1;
- (void)setCalIsEnabledForReminders:(bool)arg1;
- (void)setCalLocalDataMigrationHasTakenPlace:(bool)arg1;
- (void)setCalMainPrincipalUID:(id)arg1;
- (void)setCalPort:(id)arg1;
- (void)setCalPrincipals:(id)arg1;
- (void)setCalPushDisabled:(bool)arg1;
- (void)setCalRefreshInterval:(long long)arg1;
- (void)setCalRootFolderID:(id)arg1;
- (void)setCalServerSyncHasTakenPlace:(bool)arg1;
- (void)setCalServerURL:(id)arg1;
- (void)setCalSkipCredentialVerification:(bool)arg1;
- (void)setCalUseExternalURL:(bool)arg1;
- (void)setCalUseKerberos:(bool)arg1;
- (void)setCalUseSSL:(bool)arg1;
- (void)setCalWebServicesRecordGUID:(id)arg1;
- (bool)setValue:(id)arg1 forKey:(id)arg2 forPrincipalWithUID:(id)arg3;
- (id)valueForAccountPropertyKey:(id)arg1;
- (id)valueForKey:(id)arg1 forPrincipalWithUID:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (id)br_displayName;
- (id)br_dsid;
- (id)br_firstName;
- (bool)br_isCloudDocsMigrated;
- (bool)br_isCloudDocsMigrationComplete;
- (bool)br_isEnabledForCloudDocs;
- (bool)br_isEnabledForDesktopSync;
- (bool)br_isEnabledForUbiquity;
- (bool)br_isEnabledForiCloudDesktop;
- (bool)br_isManagedAppleID;
- (bool)br_isPrimaryAccount;
- (bool)br_isPrimaryiCloudAccount;
- (bool)br_isiCloudAccount;
- (id)br_lastName;
- (void)br_setCloudDocsMigrated:(bool)arg1;
- (void)br_setCloudDocsMigrationComplete:(bool)arg1;
- (void)br_setEnabledForiCloudDesktop:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (id)ck_cloudKitAccount;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (id)_gkCredentialForEnvironment:(long long)arg1;
- (id)_gkCredentials;
- (id)_gkCredentialsForEnvironment:(long long)arg1;
- (bool)_gkIsPrimaryForEnvironment:(long long)arg1;
- (id)_gkModifiedDateForProperty:(id)arg1 environment:(long long)arg2;
- (id)_gkPerEnvironmentTokens;
- (id)_gkPlayerInternal;
- (id)_gkPropertyForKey:(id)arg1 environment:(long long)arg2;
- (void)_gkSetPlayerInternal:(id)arg1;
- (void)_gkSetProperty:(id)arg1 forKey:(id)arg2 environment:(long long)arg3;
- (void)_gkSetToken:(id)arg1 forEnvironment:(long long)arg2;
- (id)_gkTokenForEnvironment:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

- (bool)MCIsManaged;
- (id)communicationServiceRules;
- (id)mcAccountIdentifier;
- (id)mcBackingPayload;
- (id)mcBackingProfile;
- (id)mcPayloadUUID;
- (id)mcProfileUUID;
- (void)setCommunicationServiceRules:(id)arg1;
- (void)setMcAccountIdentifier:(id)arg1;
- (void)setMcPayloadUUID:(id)arg1;
- (void)setMcProfileUUID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileSync.framework/MobileSync

- (id)_usernameFromProperties:(id)arg1;
- (void)applySyncProperties:(id)arg1;
- (bool)isMobileMeAccount;
- (void)setPasswordFromSync:(id)arg1;
- (id)syncIdentityString;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (bool)ic_hasICloudEmailAddress;
- (bool)ic_isManagedAppleID;
- (bool)ic_isNotesMigrated;
- (bool)ic_isPrimaryAppleAccount;
- (bool)ic_supportsHTMLNotes;

@end
