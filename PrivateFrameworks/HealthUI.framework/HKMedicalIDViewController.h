/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMedicalIDViewController : HKViewController <HKEmergencyCardDeletionDelegate, HKEmergencyCardLastUpdatedTableItemDelegate, HKEmergencyCardRowHeightChangeDelegate, HKMedicalIDViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _accumulatedNumberOfRowsForItems;
    bool  _allowsEditing;
    HKEmergencyCardContactsTableItem * _contactsItem;
    <HKMedicalIDViewControllerDelegate> * _delegate;
    NSArray * _footers;
    HKEmergencyCardGroupTableItem * _groupItem;
    HKHealthStore * _healthStore;
    bool  _inBuddy;
    bool  _inEditMode;
    NSArray * _localeItems;
    _HKMedicalIDData * _medicalID;
    HKEmergencyCardNameAndPictureTableItem * _nameAndPictureItem;
    NSArray * _organDonationItems;
    bool  _organDonationSignupAvailable;
    NSArray * _presentableTableItems;
    bool  _showsDeleteButton;
    bool  _showsDismissButton;
    NSArray * _tableItems;
    UITableView * _tableView;
    long long  _tableViewStyle;
}

@property (nonatomic) bool allowsEditing;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKMedicalIDViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) _HKMedicalIDData *medicalID;
@property (nonatomic) bool showsDeleteButton;
@property (nonatomic) bool showsDismissButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

+ (bool)isSupportedOnThisDevice;

- (void).cxx_destruct;
- (void)_adjustTableViewContentOffsetForVisibleView:(id)arg1 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 animated:(bool)arg3;
- (void)_buildPresentableTableItems;
- (void)_buildTableItems;
- (void)_cancelEditingTapped:(id)arg1;
- (void)_contactStoreDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_doneEditingTapped:(id)arg1;
- (void)_doneTapped:(id)arg1;
- (void)_editTapped:(id)arg1;
- (bool)_editable;
- (id)_fetchMedicalIDDataSynchronously:(bool*)arg1;
- (void)_fetchName;
- (void)_keyboardFrameWillChange:(id)arg1;
- (id)_newViewForFooterInSection:(long long)arg1;
- (void)_nextButtonTapped:(id)arg1;
- (void)_organDonationTapped:(id)arg1;
- (long long)_preferredOrganDonationOrganization;
- (void)_refreshEmergencyContactsAndReload:(bool)arg1;
- (long long)_rowIndexForTableItem:(id)arg1 atIndexPath:(id)arg2;
- (bool)_shouldShowOrganDonation;
- (id)_tableItemForIndexPath:(id)arg1;
- (void)_updateMedicalIDNameWithDemographicsInformation:(id)arg1;
- (bool)allowsEditing;
- (void)dealloc;
- (id)delegate;
- (void)deletionTableItemDidTapDelete:(id)arg1;
- (id)healthStore;
- (id)initInEditMode:(bool)arg1;
- (id)initInEditMode:(bool)arg1 inBuddy:(bool)arg2 organDonationSignupAvailable:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)lastUpdatedTableItemDidTapEditButton:(id)arg1;
- (void)localeDidChange:(id)arg1;
- (id)medicalID;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)setAllowsEditing:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setMedicalID:(id)arg1;
- (void)setShowsDeleteButton:(bool)arg1;
- (void)setShowsDismissButton:(bool)arg1;
- (void)setTableView:(id)arg1;
- (bool)showsDeleteButton;
- (bool)showsDismissButton;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tableItem:(id)arg1 heightDidChangeForRowIndex:(long long)arg2 keepRectVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4;
- (void)tableItemDidBeginEditing:(id)arg1 keepRectVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3;
- (void)tableItemDidChangeSelection:(id)arg1 keepRectVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3;
- (id)tableView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)timeZoneDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
