/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface TTTextStorage : NSTextStorage <TTMergeableStringDelegate> {
    NSMutableAttributedString * _attributedString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _beforeEndEditedRange;
    TTMergeableStringUndoGroup * _coalescingUndoGroup;
    bool  _convertAttributes;
    bool  _delayedFixupAfterEditingWantsUndoCommand;
    NSMutableArray * _deletedRanges;
    bool  _directlyEditing;
    bool  _disableUndoCoalesceBreaking;
    TTMergeableStringVersionedDocument * _document;
    unsigned long long  _editingCount;
    bool  _filterPastedAttributes;
    bool  _filterSubstringAttributes;
    bool  _filterSubstringAttributesForPlainText;
    bool  _isApplyingUndoCommand;
    bool  _isChangingSelectionByGestures;
    bool  _isDictating;
    bool  _isDragging;
    bool  _isEndingEditing;
    bool  _isFixing;
    bool  _isHandlingTextCheckingResults;
    bool  _isResettingBaseWritingDirection;
    bool  _isSelectingText;
    bool  _isTypingOrMarkingText;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _lastUndoEditRange;
    bool  _pendingFixupAfterEditing;
    bool  _previouslyHadMarkedText;
    bool  _retainOriginalFormatting;
    <TTTextStorageStyler> * _styler;
    unsigned long long  _temporaryAttributeEditing;
    long long  _ttChangeInLength;
    unsigned long long  _ttEditedMask;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _ttEditedRange;
    NSMutableArray * _undoCommands;
    NSUndoManager * _undoManager;
    bool  _wantsUndoCommands;
}

@property (nonatomic, readonly) NSAttributedString *_icaxUnfilteredAttributedString;
@property (nonatomic, retain) NSMutableAttributedString *attributedString;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } beforeEndEditedRange;
@property (nonatomic, retain) TTMergeableStringUndoGroup *coalescingUndoGroup;
@property (nonatomic) bool convertAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool delayedFixupAfterEditingWantsUndoCommand;
@property (nonatomic, readonly) NSMutableArray *deletedRanges;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableUndoCoalesceBreaking;
@property (nonatomic, readonly) TTMergeableStringVersionedDocument *document;
@property (nonatomic) unsigned long long editingCount;
@property (nonatomic) bool filterPastedAttributes;
@property (nonatomic) bool filterSubstringAttributes;
@property (nonatomic) bool filterSubstringAttributesForPlainText;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isApplyingUndoCommand;
@property (nonatomic) bool isChangingSelectionByGestures;
@property (nonatomic) bool isDictating;
@property (nonatomic) bool isDragging;
@property (nonatomic, readonly) bool isEditingTemporaryAttributes;
@property (nonatomic) bool isEndingEditing;
@property (nonatomic) bool isFixing;
@property (nonatomic) bool isHandlingTextCheckingResults;
@property (nonatomic) bool isResettingBaseWritingDirection;
@property (nonatomic) bool isSelectingText;
@property (nonatomic) bool isTypingOrMarkingText;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } lastUndoEditRange;
@property (nonatomic, readonly) TTMergeableAttributedString *mergeableString;
@property (nonatomic) bool pendingFixupAfterEditing;
@property (nonatomic) bool retainOriginalFormatting;
@property (nonatomic, retain) <TTTextStorageStyler> *styler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *textViews;
@property (nonatomic) long long ttChangeInLength;
@property (nonatomic) unsigned long long ttEditedMask;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } ttEditedRange;
@property (nonatomic, retain) NSMutableArray *undoCommands;
@property (nonatomic, retain) NSUndoManager *undoManager;
@property (nonatomic) bool wantsUndoCommands;

+ (id)bulletTextAttributesWithTextFont:(struct UIFont { Class x1; }*)arg1 paragraphStyle:(id)arg2 letterpress:(bool)arg3;
+ (id)filteredAttributedSubstring:(id)arg1 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forPlainText:(bool)arg3 fixAttachments:(bool)arg4;
+ (void)fixAttachmentsForRenderingInAttributedString:(id)arg1;
+ (id)removeDataDetectorLinksForAttributedString:(id)arg1;
+ (id)removeTextAttachmentsForAttributedString:(id)arg1 translateTTFont:(bool)arg2;
+ (id)standardizedAttributedStringFromAttributedString:(id)arg1 fixAttachments:(bool)arg2 translateTTFont:(bool)arg3;

- (void).cxx_destruct;
- (id)_icaxUnfilteredAttributedString;
- (bool)_shouldSetOriginalFontAttribute;
- (bool)_usesSimpleTextEffects;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)addUndoCommand:(id)arg1;
- (void)applyUndoGroup:(id)arg1;
- (id)attributedString;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })beforeEndEditedRange;
- (void)beginEditing;
- (void)beginTemporaryAttributeEditing;
- (void)beginTemporaryAttributes;
- (void)breakUndoCoalescing;
- (id)coalescingUndoGroup;
- (bool)convertAttributes;
- (void)convertNSTablesToTabs:(id)arg1;
- (void)coordinateAccess:(id /* block */)arg1;
- (void)coordinateEditing:(id /* block */)arg1;
- (void)coordinateReading:(id /* block */)arg1;
- (id)dataFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2 error:(id*)arg3;
- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 context:(id)arg2;
- (void)dd_resetResults;
- (bool)delayedFixupAfterEditingWantsUndoCommand;
- (id)deletedRanges;
- (bool)disableUndoCoalesceBreaking;
- (id)document;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (void)editedAttributeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)editedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 changeInLength:(long long)arg2;
- (unsigned long long)editingCount;
- (void)endEditing;
- (void)endTemporaryAttributeEditing;
- (void)endTemporaryAttributes;
- (void)executeDelayedFixupAfterEditing;
- (bool)filterPastedAttributes;
- (bool)filterSubstringAttributes;
- (bool)filterSubstringAttributesForPlainText;
- (id)filteredAttributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixupAfterEditing;
- (void)fixupAfterEditingDelayedToEndOfRunLoop;
- (void)forceFixupAfterEditingIfDelayed;
- (bool)ic_containsAttribute:(id)arg1 InRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithAttributedString:(id)arg1 replicaID:(id)arg2;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (id)initWithReplicaID:(id)arg1;
- (bool)isApplyingUndoCommand;
- (bool)isChangingSelectionByGestures;
- (bool)isDeletingContentAttachmentWithReplacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementLength:(unsigned long long)arg2;
- (bool)isDeletingDictationAttachmentWithReplacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementLength:(unsigned long long)arg2;
- (bool)isDictating;
- (bool)isDragging;
- (bool)isEditing;
- (bool)isEditingOrConvertingMarkedText:(bool)arg1;
- (bool)isEditingTemporaryAttributes;
- (bool)isEndingEditing;
- (bool)isFixing;
- (bool)isHandlingTextCheckingResults;
- (bool)isResettingBaseWritingDirection;
- (bool)isSelectingText;
- (bool)isTypingOrMarkingText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lastUndoEditRange;
- (unsigned long long)mergeWithDocument:(id)arg1;
- (id)mergeableString;
- (bool)mergeableStringIsEqualAfterSerialization:(id)arg1;
- (bool)pendingFixupAfterEditing;
- (void)preReplaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withStringLength:(unsigned long long)arg2;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (void)replaceWithDocument:(id)arg1;
- (void)resetTTEdits;
- (void)resetUndoManager;
- (void)restoreSelection:(id)arg1;
- (bool)retainOriginalFormatting;
- (void)saveSelectionDuringBlock:(id /* block */)arg1;
- (void)saveSelectionDuringBlock:(id /* block */)arg1 affinity:(unsigned long long)arg2;
- (id)savedSelectionWithSelectionAffinity:(unsigned long long)arg1;
- (void)setAttributedString:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setBeforeEndEditedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setCoalescingUndoGroup:(id)arg1;
- (void)setConvertAttributes:(bool)arg1;
- (void)setDelayedFixupAfterEditingWantsUndoCommand:(bool)arg1;
- (void)setDisableUndoCoalesceBreaking:(bool)arg1;
- (void)setEditingCount:(unsigned long long)arg1;
- (void)setFilterPastedAttributes:(bool)arg1;
- (void)setFilterSubstringAttributes:(bool)arg1;
- (void)setFilterSubstringAttributesForPlainText:(bool)arg1;
- (void)setIsApplyingUndoCommand:(bool)arg1;
- (void)setIsChangingSelectionByGestures:(bool)arg1;
- (void)setIsDictating:(bool)arg1;
- (void)setIsDragging:(bool)arg1;
- (void)setIsEndingEditing:(bool)arg1;
- (void)setIsFixing:(bool)arg1;
- (void)setIsHandlingTextCheckingResults:(bool)arg1;
- (void)setIsResettingBaseWritingDirection:(bool)arg1;
- (void)setIsSelectingText:(bool)arg1;
- (void)setIsTypingOrMarkingText:(bool)arg1;
- (void)setLastUndoEditRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setPendingFixupAfterEditing:(bool)arg1;
- (void)setRetainOriginalFormatting:(bool)arg1;
- (void)setStyler:(id)arg1;
- (void)setTtChangeInLength:(long long)arg1;
- (void)setTtEditedMask:(unsigned long long)arg1;
- (void)setTtEditedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setUndoCommands:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (void)setWantsUndoCommands:(bool)arg1;
- (bool)shouldBreakUndoCoalescingWithReplacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementLength:(unsigned long long)arg2;
- (id)standardizedAttributedStringFixingTextAttachments;
- (id)string;
- (id)styler;
- (bool)textViewHasMarkedText:(struct UITextView { Class x1; }*)arg1;
- (id)textViews;
- (long long)ttChangeInLength;
- (unsigned long long)ttEditedMask;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ttEditedRange;
- (id)undoCommands;
- (id)undoManager;
- (bool)wantsUndoCommands;

@end
