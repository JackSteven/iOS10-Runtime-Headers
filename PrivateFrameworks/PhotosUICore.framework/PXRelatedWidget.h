/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRelatedWidget : NSObject <PXChangeObserver, PXRelatedDataSourceManagerObserver, PXRelatedTilingLayoutDelegate, PXTileSource, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXWidget> {
    PXRelatedDataSource * __anchorDataSource;
    struct PXSimpleIndexPath { 
        unsigned long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  __anchorIndexPath;
    struct CGPoint { 
        double x; 
        double y; 
    }  __anchorOffset;
    long long  __availableNumberOfRows;
    bool  __canExpand;
    PXRelatedDataSourceManager * __dataSourceManager;
    bool  __expanded;
    PXRelatedTilingLayout * __layout;
    long long  __maximumNumberOfRowsToDisplay;
    NSDictionary * __prefetchedDataSourceByRelatedEntry;
    bool  __shouldLoadContentData;
    PXRelatedSpecManager * __specManager;
    PXBasicTileAnimator * __tileAnimator;
    PXTilingController * __tilingController;
    PXPhotosDetailsContext * _context;
    PXSectionedObjectReference * _focusedObjectReference;
    bool  _hasLoadedContentData;
    PXSectionedObjectReference * _highlightedObjectReference;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    struct { 
        bool dataSourceManager; 
        bool layout; 
        bool availableNumberOfRows; 
        bool maximumNumberOfRowsToDisplay; 
        bool canExpand; 
        bool hasLoadedContentData; 
        bool prefetchedDataSources; 
    }  _needsUpdateFlags;
    <PXWidgetDelegate> * _widgetDelegate;
}

@property (setter=_setAnchorDataSource:, nonatomic, retain) PXRelatedDataSource *_anchorDataSource;
@property (setter=_setAnchorIndexPath:, nonatomic) struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; } _anchorIndexPath;
@property (setter=_setAnchorOffset:, nonatomic) struct CGPoint { double x1; double x2; } _anchorOffset;
@property (setter=_setAvailableNumberOfRows:, nonatomic) long long _availableNumberOfRows;
@property (setter=_setCanExpand:, nonatomic) bool _canExpand;
@property (nonatomic, readonly) PXRelatedDataSourceManager *_dataSourceManager;
@property (getter=_isExpanded, setter=_setExpanded:, nonatomic) bool _expanded;
@property (nonatomic, readonly) PXRelatedTilingLayout *_layout;
@property (setter=_setMaximumNumberOfRowsToDisplay:, nonatomic) long long _maximumNumberOfRowsToDisplay;
@property (setter=_setPrefetchedDataSourceByRelatedEntry:, nonatomic, retain) NSDictionary *_prefetchedDataSourceByRelatedEntry;
@property (setter=_setShouldLoadContentData:, nonatomic) bool _shouldLoadContentData;
@property (nonatomic, readonly) PXRelatedSpecManager *_specManager;
@property (nonatomic, readonly) PXBasicTileAnimator *_tileAnimator;
@property (nonatomic, readonly) PXTilingController *_tilingController;
@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFaceModeEnabled, nonatomic) bool faceModeEnabled;
@property (nonatomic, retain) PXSectionedObjectReference *focusedObjectReference;
@property (nonatomic, readonly) bool hasContentForCurrentInput;
@property (setter=_setHasLoadedContentData:, nonatomic) bool hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXSectionedObjectReference *highlightedObjectReference;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (getter=isSelecting, nonatomic) bool selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode;
@property (nonatomic, readonly) bool supportsSelection;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;

- (void).cxx_destruct;
- (id)_anchorDataSource;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })_anchorIndexPath;
- (struct CGPoint { double x1; double x2; })_anchorOffset;
- (struct CGPoint { double x1; double x2; })_anchorPointForLayoutContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)_availableNumberOfRows;
- (bool)_canExpand;
- (id)_createPhotosDataSourceForRelatedEntry:(id)arg1;
- (id)_dataSourceManager;
- (void)_invalidateAvailableNumberOfRows;
- (void)_invalidateCanExpand;
- (void)_invalidateDataSourceManager;
- (void)_invalidateHasLoadedContentData;
- (void)_invalidateLayout;
- (void)_invalidateMaximumNumberOfRowsToDisplay;
- (void)_invalidatePrefetchedDataSources;
- (bool)_isExpanded;
- (id)_layout;
- (void)_loadContentDataIfNeeded;
- (void)_loadTilingController;
- (long long)_maximumNumberOfRowsToDisplay;
- (bool)_needsUpdate;
- (void)_performChanges:(id /* block */)arg1;
- (id)_prefetchedDataSourceByRelatedEntry;
- (void)_saveAnchoring;
- (void)_setAnchorDataSource:(id)arg1;
- (void)_setAnchorIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)_setAnchorOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setAvailableNumberOfRows:(long long)arg1;
- (void)_setCanExpand:(bool)arg1;
- (void)_setExpanded:(bool)arg1;
- (void)_setHasLoadedContentData:(bool)arg1;
- (void)_setMaximumNumberOfRowsToDisplay:(long long)arg1;
- (void)_setNeedsUpdate;
- (void)_setPrefetchedDataSourceByRelatedEntry:(id)arg1;
- (void)_setShouldLoadContentData:(bool)arg1;
- (bool)_shouldLoadContentData;
- (id)_specManager;
- (id)_tileAnimator;
- (id)_tilingController;
- (void)_updateAvailableNumberOfRowsIfNeeded;
- (void)_updateCanExpandIfNeeded;
- (void)_updateDataSourceManagerIfNeeded;
- (void)_updateHasLoadedContentDataIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)_updateMaximumNumberOfRowsToDisplayIfNeeded;
- (void)_updatePrefetchedDataSources;
- (id)allRelatedEntries;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (id)contentTilingController;
- (id)context;
- (id)createTileAnimator;
- (id)entryObjectReferenceAtPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpaceWithIdentifier:(void*)arg2;
- (id)extendedTraitCollection;
- (id)focusedObjectReference;
- (bool)hasContentForCurrentInput;
- (bool)hasLoadedContentData;
- (id)highlightedObjectReference;
- (struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })identifierForTileWithKind:(long long)arg1 relatedEntry:(id)arg2;
- (struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })identifierForTileWithKind:(long long)arg1 relatedEntry:(id)arg2 layout:(id)arg3;
- (id)init;
- (void)installGestureRecognizers;
- (void)loadContentData;
- (id)localizedDisclosureTitle;
- (id)localizedTitle;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)photosDataSourceForRelatedEntry:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfInterestForRelatedEntry:(id)arg1 inCoordinateSpaceWithIdentifier:(void*)arg2;
- (id)relatedEntryAtPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpaceWithIdentifier:(void*)arg2;
- (id)relatedEntryForPhotosDataSource:(id)arg1;
- (id)relatedEntryForTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })relatedTilingLayout:(id)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2 forAspectRatio:(double)arg3;
- (bool)relatedTilingLayout:(id)arg1 isPlaceholderEntryAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (id)relatedTilingLayout:(id)arg1 titleFontNameForEntryAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFocusedObjectReference:(id)arg1;
- (void)setHighlightedObjectReference:(id)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (struct CGPoint { double x1; double x2; })tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (void)tilingController:(id)arg1 prepareForChange:(id)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (void)unloadContentData;
- (void)userDidSelectDisclosureControl;
- (id)widgetDelegate;

@end
