/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayout : TSWPTextHostLayout <TSKSearchTarget, TSWPColumnMetrics, TSWPLayoutParent, TSWPStorageObserver> {
    struct CGSize { 
        double width; 
        double height; 
    }  mAdjustableTableSize;
    NSMutableDictionary * mAttachmentCellLayouts;
    struct { 
        double tableNameHeight; 
        struct CGSize { 
            double width; 
            double height; 
        } scaleToFitParent; 
        struct CGSize { 
            double width; 
            double height; 
        } scaleToFitEnclosingTextColumn; 
    }  mCached;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  mCachedPaddingForEditingCell;
    int  mCachedVerticalAlignmentForEditingCell;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCanvasVisibleRect;
    struct CGSize { 
        double width; 
        double height; 
    }  mCapturedStrokeFrameSizeForInline;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mComputedEditingCellContentFrame;
    TSWPLayout * mContainedTextEditingLayout;
    int  mContainedTextEditorParagraphAlignment;
    bool  mContainedTextEditorSpills;
    bool  mContainedTextEditorTextWraps;
    int  mCoordinatesChangedMaskForChrome;
    struct TSUCellRect { 
        struct TSUCellCoord { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    }  mEditingSpillingTextRange;
    struct CGSize { 
        double width; 
        double height; 
    }  mFixedTableSize;
    bool  mLayoutDirectionIsLeftToRight;
    TSTLayoutHint * mLayoutHint;
    TSTMasterLayout * mMasterLayout;
    bool  mNewCanvasRevealedHorizontally;
    bool  mNewCanvasRevealedVertically;
    struct TSUCellRect { 
        struct TSUCellCoord { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    }  mPrevEditingSpillingTextRange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mPreviousVisibleStrokeFrame;
    bool  mProcessChangesFiltering;
    bool  mRemovingContainedTextEditorLayout;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mRenderingFrameForLayoutGeometryFromInfo;
    bool  mShouldUpdateAttachmentChildren;
    TSTLayoutSpaceBundle * mSpaceBundle;
    struct CGSize { 
        double width; 
        double height; 
    }  mSpillingTextSize;
    bool  mTableNameVisibilityIsValid;
    bool  mTableNameVisible;
    bool  mTabsVisible;
}

@property (nonatomic, readonly) bool alwaysStartsNewTarget;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) bool columnsAreLeftToRight;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } computedEditingCellContentFrame;
@property (nonatomic, retain) TSWPLayout *containedTextEditingLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } editingSpillingTextRange;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool layoutDirectionIsLeftToRight;
@property (nonatomic, retain) TSTLayoutHint *layoutHint;
@property (nonatomic, readonly) TSWPPadding *layoutMargins;
@property (nonatomic, retain) TSTMasterLayout *masterLayout;
@property (nonatomic) bool newCanvasRevealedHorizontally;
@property (nonatomic) bool newCanvasRevealedVertically;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } paddingForEditingCell;
@property (nonatomic, readonly) unsigned long long pageCount;
@property (nonatomic, readonly) unsigned long long pageNumber;
@property (nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } prevEditingSpillingTextRange;
@property (nonatomic) bool processChangesFiltering;
@property (nonatomic) struct CGSize { double x1; double x2; } scaleToFit;
@property (nonatomic, readonly) bool shrinkTextToFit;
@property (nonatomic, retain) TSTLayoutSpaceBundle *spaceBundle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TSTTableInfo *tableInfo;
@property (nonatomic, readonly) TSTTableModel *tableModel;
@property (nonatomic, readonly) double textScaleFactor;

- (struct CGPoint { double x1; double x2; })activityLineUnscaledEndPointForSearchReference:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forScrollingToSelectionPath:(id)arg2;
- (struct CGSize { double x1; double x2; })adjustedInsetsForTarget:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrame;
- (bool)alwaysStartsNewTarget;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize { double x1; double x2; })arg2;
- (void)bezierPathsForCellRegion:(id)arg1 selectionMask:(unsigned int)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 viewScale:(double)arg4 inset:(double)arg5 clipToVisibleRect:(bool)arg6 block:(id /* block */)arg7;
- (struct CGPoint { double x1; double x2; })calculatePointFromSearchReference:(id)arg1;
- (bool)canAspectRatioLockBeChangedByUser;
- (bool)canRotateChildLayout:(id)arg1;
- (bool)canvasShouldScrollForSelectionPath:(id)arg1;
- (struct CGPoint { double x1; double x2; })capturedInfoPositionForAttachment;
- (id)cellIterator;
- (id)cellIteratorWithRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)cellIteratorWithRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 flags:(unsigned long long)arg2;
- (id)childSearchTargets;
- (id)children;
- (unsigned long long)columnCount;
- (bool)columnsAreLeftToRight;
- (id)computeLayoutGeometry;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computedEditingCellContentFrame;
- (id)containedTextEditingLayout;
- (void)dealloc;
- (id)dependentLayouts;
- (id)dependentsOfTextLayout:(id)arg1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })editingSpillingTextRange;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (bool)inFindReplaceMode;
- (bool)inPrintPreviewMode;
- (struct CGPoint { double x1; double x2; })infoGeometryPositionForCurrentAttachedLayoutGeometry;
- (id)initWithInfo:(id)arg1;
- (id)initWithInfo:(id)arg1 layoutHint:(id)arg2;
- (id)initialInfoGeometry;
- (struct CGSize { double x1; double x2; })initialTextSize;
- (void)invalidate;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (void)invalidatePosition;
- (void)invalidateSize;
- (void)invalidateTableNameVisibility;
- (bool)isBeingManipulated;
- (bool)isDraggable;
- (bool)isStrokeEditing;
- (bool)isZoomedEditing;
- (void)iterateCellsAndTerminateWithIterator:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)iterateCellsInRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)iterateCellsInRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 withFlags:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)iterateCellsUsingBlock:(id /* block */)arg1;
- (bool)layoutDirectionIsLeftToRight;
- (id)layoutGeometryFromInfo;
- (id)layoutHint;
- (id)layoutMargins;
- (void)layoutSearchForAnnotationWithHitBlock:(id /* block */)arg1;
- (void)layoutSearchForSpellingErrorsWithHitBlock:(id /* block */)arg1 stop:(bool*)arg2;
- (void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskRectForTextLayout:(id)arg1;
- (id)masterLayout;
- (double)maxAutoGrowWidthForTextLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumFrameSizeForChild:(id)arg1;
- (int)naturalAlignmentForCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (int)naturalAlignmentForTextLayout:(id)arg1;
- (bool)newCanvasRevealedHorizontally;
- (bool)newCanvasRevealedVertically;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(id)arg1;
- (void)offsetGeometryBy:(struct CGPoint { double x1; double x2; })arg1;
- (bool)orderedBefore:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_autosizedFrameForRichTextLayout:(id)arg1 textSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_autosizedFrameForTextEditingLayout:(id)arg1 textSize:(struct CGSize { double x1; double x2; })arg2;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })p_cellIDForWPLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_computeSpillingTextFrameForEditingLayout:(id)arg1 textSize:(struct CGSize { double x1; double x2; })arg2 editingSpillRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; }*)arg3;
- (int)p_defaultAlignmentForTableWritingDirection;
- (bool)p_getLayoutDirectionLeftToRight;
- (bool)p_layoutWhollyContainsGridRange:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_maskRectForRichTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_maskRectForTextEditingLayout:(id)arg1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })p_maximumSpillRangeForCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_nonAutosizedFrameForRichTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_nonAutosizedFrameForTextEditingLayout:(id)arg1;
- (void)p_prepareAttachmentCells;
- (struct CGSize { double x1; double x2; })p_rangeUpAndLeftOfIntersectionRangeOfGridRange:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })p_spillRangeForMaskingRichTextLayout:(id)arg1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })p_spillRangeToRightForCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_textFrameForWrappingCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 defaultRowHeight:(bool*)arg2;
- (void)p_updateCachedStyleInformationFromCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingForEditingCell;
- (unsigned long long)pageCount;
- (unsigned long long)pageNumber;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double*)arg4 outGap:(double*)arg5;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })prevEditingSpillingTextRange;
- (bool)processChangesFiltering;
- (int)reapCoordinatesChangedMaskForChrome;
- (void)removeAttachmentCellLayouts;
- (void)removeContainedTextEditingLayout;
- (Class)repClassForTextLayout:(id)arg1;
- (bool)resizeMayChangeAspectRatio;
- (struct CGSize { double x1; double x2; })scaleToFit;
- (void)setContainedTextEditingLayout:(id)arg1;
- (void)setLayoutHint:(id)arg1;
- (void)setMasterLayout:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNewCanvasRevealedHorizontally:(bool)arg1;
- (void)setNewCanvasRevealedVertically:(bool)arg1;
- (void)setPrevEditingSpillingTextRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setProcessChangesFiltering:(bool)arg1;
- (void)setScaleToFit:(struct CGSize { double x1; double x2; })arg1;
- (void)setSpaceBundle:(id)arg1;
- (void)setupContainedTextEditingLayout:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)shrinkTextToFit;
- (id)spaceBundle;
- (bool)supportsRotation;
- (id)tableInfo;
- (id)tableModel;
- (bool)textIsVertical;
- (id)textWrapper;
- (void)updateChildrenFromInfo;
- (void)validate;
- (void)validateTableNameVisibility;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (double)viewScaleForZoomingToSelectionPath:(id)arg1 targetPointSize:(double)arg2;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (int)wrapFitType;

@end
