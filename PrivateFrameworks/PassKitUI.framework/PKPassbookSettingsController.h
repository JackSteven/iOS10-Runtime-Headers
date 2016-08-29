/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassbookSettingsController : NSObject <PKPaymentPassTableCellDelegate, PKPaymentServiceDelegate> {
    LAContext * _LAContext;
    PSSpecifier * _addCardButtonSpecifier;
    PKPaymentPreference * _availableCards;
    PSSpecifier * _cardsGroupSpecifier;
    PSSpecifier * _companionCardsGroupSpecifier;
    NSArray * _companionPassSpecifiers;
    NSArray * _companionPasses;
    long long  _context;
    <PKPassbookSettingsDataSource> * _dataSource;
    NSString * _defaultCardIdentifier;
    PKPaymentPreferencesViewController * _defaultCardsController;
    PSSpecifier * _defaultContactEmailSpecifier;
    PSSpecifier * _defaultContactPhoneSpecifier;
    PSSpecifier * _defaultPaymentSpecifier;
    PSSpecifier * _defaultShippingAddressSpecifier;
    <PKPassbookSettingsDelegate> * _delegate;
    NSArray * _handoffSwitchSpecifiers;
    NSArray * _lockscreenSwitchSpecifiers;
    <PKPaymentOptionsProtocol> * _optionsDelegate;
    <PKPassLibraryDataProvider> * _passLibraryDataProvider;
    NSArray * _passSpecifiers;
    NSArray * _passes;
    <PKPaymentDataProvider> * _paymentDataProvider;
    PKPaymentSetupAboutViewController * _privacyController;
    NSString * _provisioningPassIdentifier;
    PKPaymentPreference * _unavailableCards;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassbookSettingsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPaymentCard;
- (id)_bridgeSpecifiers;
- (void)_canTransferForPaymentPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_companionPassSpecifiers;
- (id)_currentDefaultPaymentPass;
- (id)_defaultContactEmailSpecifier;
- (id)_defaultContactPhoneSpecifier;
- (id)_defaultPaymentSpecifier;
- (id)_defaultShippingAddressSpecifier;
- (id)_defaultsGroupSpecifiers;
- (id)_displayableStringForLabeledValue:(id)arg1;
- (id)_getDefaultContactEmail;
- (id)_getDefaultContactPhone;
- (id)_getDefaultPaymentCard;
- (id)_getDefaultShippingAddress;
- (void)_handleDefaultPaymentPassChangedTo:(id)arg1 withSender:(id)arg2 optionsController:(id)arg3 canPrompt:(bool)arg4;
- (void)_handleProvisioningError:(id)arg1 viewController:(id)arg2;
- (id)_handoffSwitchGroupSpecifiers;
- (id)_handoffSwitchSettingForSpecifier:(id)arg1;
- (id)_lockscreenSwitchGroupSpecifiers;
- (id)_lockscreenSwitchSettingForSpecifier:(id)arg1;
- (void)_openPrivacyLink;
- (id)_passSpecifiers;
- (int)_paymentPreferencesStyle;
- (void)_performPhoneToWatchProvisioningForPaymentPass:(id)arg1;
- (void)_presentProvisioningPaymentPassNavController:(id)arg1 paymentPass:(id)arg2;
- (void)_regionConfigurationDidChangeNotification;
- (void)_reloadPassData;
- (void)_requestDelegatePresentViewController:(id)arg1;
- (id)_restrictedModeSpecifier;
- (void)_setCardAddProvisioningButtonEnabled:(bool)arg1 forPaymentPass:(id)arg2;
- (void)_setHandoffSwitchSetting:(id)arg1 forSpecifier:(id)arg2;
- (void)_setLockscreenSwitchSetting:(id)arg1 forSpecifier:(id)arg2;
- (id)_settingsSpecifiers;
- (void)_showCardDetails:(id)arg1;
- (void)_showDefaultContactEmailOptions:(id)arg1;
- (void)_showDefaultContactPhoneOptions:(id)arg1;
- (void)_showDefaultPaymentOptions:(id)arg1;
- (void)_showDefaultShippingAddressOptions:(id)arg1;
- (id)_specifierForPassUniqueID:(id)arg1;
- (void)_updateAddButtonSpecifier;
- (void)_updateCardsGroupSpecifier;
- (void)_updateCompanionGroupSpecifier;
- (void)_updateCompanionPassesAddButton;
- (void)_updateDefaultCardsPreferences;
- (void)addButtonPressedForPaymentPass:(id)arg1;
- (void)addCardTapped;
- (void)addCardTappedForPaymentPassWithUniqueID:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 context:(long long)arg3;
- (void)refreshDefaultCard;
- (void)refreshPasses;
- (void)removeFooterForSpecifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)specifiers;

@end
