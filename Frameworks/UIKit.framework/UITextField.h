/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextField : UIControl <ABText, MPUAutoupdatingTextContainer, NSCoding, UIContentSizeCategoryAdjusting, UIGestureRecognizerDelegate, UIKeyInputPrivate, UIKeyboardInput, UIPopoverControllerDelegate, UITextInput, UITextInputTraits_Private, _UIFloatingContentViewDelegate, _UILayoutBaselineUpdating> {
    bool  _adjustsFontForContentSizeCategory;
    bool  _animateNextHighlightChange;
    UITextFieldAtomBackgroundView * _atomBackgroundView;
    bool  _avoidBecomeFirstResponder;
    UIImage * _background;
    UITextFieldBorderView * _backgroundView;
    NSLayoutConstraint * _baselineLayoutConstraint;
    _UIBaselineLayoutStrut * _baselineLayoutLabel;
    long long  _borderStyle;
    UIButton * _clearButton;
    long long  _clearButtonMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _clearButtonOffset;
    UIVisualEffectView * _contentBackdropView;
    CUICatalog * _cuiCatalog;
    CUIStyleEffectConfiguration * _cuiStyleEffectConfiguration;
    bool  _deferringBecomeFirstResponder;
    id  _delegate;
    bool  _disableTextColorUpdateOnTraitCollectionChange;
    UIImage * _disabledBackground;
    UITextFieldBorderView * _disabledBackgroundView;
    UITextFieldLabel * _displayLabel;
    _UIDetachedFieldEditorBackgroundView * _fieldEditorBackgroundView;
    UIVisualEffectView * _fieldEditorEffectView;
    _UIFloatingContentView * _floatingContentView;
    _UIFullFontSize * _fullFontSize;
    UIImageView * _iconView;
    UIView * _inputAccessoryView;
    UIView * _inputView;
    UITextInteractionAssistant * _interactionAssistant;
    UILabel * _label;
    double  _labelOffset;
    UIView * _leftView;
    long long  _leftViewMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _leftViewOffset;
    double  _minimumFontSize;
    UITextInputTraits * _nonAtomTraits;
    NSAttributedString * _overriddenPlaceholder;
    long long  _overriddenPlaceholderAlignment;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    UITextFieldLabel * _placeholderLabel;
    UITextFieldLabel * _prefixLabel;
    float  _progress;
    UIView * _rightView;
    long long  _rightViewMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _rightViewOffset;
    double  _roundedRectBackgroundCornerRadius;
    int  _scrollXOffset;
    int  _scrollYOffset;
    UITapGestureRecognizer * _selectGestureRecognizer;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectionRangeWhenNotEditing;
    bool  _setSelectionRangeAfterFieldEditorIsAttached;
    UITextFieldLabel * _suffixLabel;
    UITextFieldBackgroundView * _systemBackgroundView;
    UISystemInputViewController * _systemInputViewController;
    struct { 
        unsigned int verticallyCenterText : 1; 
        unsigned int isAnimating : 4; 
        unsigned int inactiveHasDimAppearance : 1; 
        unsigned int becomesFirstResponderOnClearButtonTap : 1; 
        unsigned int clearsPlaceholderOnBeginEditing : 1; 
        unsigned int adjustsFontSizeToFitWidth : 1; 
        unsigned int fieldEditorAttached : 1; 
        unsigned int canBecomeFirstResponder : 1; 
        unsigned int shouldSuppressShouldBeginEditing : 1; 
        unsigned int inResignFirstResponder : 1; 
        unsigned int undoDisabled : 1; 
        unsigned int explicitAlignment : 1; 
        unsigned int implementsCustomDrawing : 1; 
        unsigned int needsClearing : 1; 
        unsigned int suppressContentChangedNotification : 1; 
        unsigned int allowsEditingTextAttributes : 1; 
        unsigned int usesAttributedText : 1; 
        unsigned int backgroundViewState : 2; 
        unsigned int clearingBehavior : 2; 
        unsigned int overridePasscodeStyle : 1; 
        unsigned int shouldResignWithoutUpdate : 1; 
        unsigned int blurEnabled : 1; 
        unsigned int disableFocus : 1; 
        unsigned int disableRemoteTextEditing : 1; 
    }  _textFieldFlags;
    _UICascadingTextStorage * _textStorage;
    UITextInputTraits * _traits;
    UIColor * _tvCustomFocusedTextColor;
    UIColor * _tvCustomTextColor;
    bool  _tvUseVibrancy;
}

@property (setter=MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:, nonatomic) bool MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
@property (nonatomic, readonly) MPUTextContainerContentSizeUpdater *MPU_contentSizeUpdater;
@property (nonatomic, copy) NSIndexSet *PINEntrySeparatorIndexes;
@property (setter=_setBaselineLayoutConstraint:, nonatomic, retain) NSLayoutConstraint *_baselineLayoutConstraint;
@property (setter=_setBaselineLayoutLabel:, nonatomic, retain) _UIBaselineLayoutStrut *_baselineLayoutLabel;
@property (nonatomic) bool _disableTextColorUpdateOnTraitCollectionChange;
@property (nonatomic, retain) UIColor *_tvCustomFocusedTextColor;
@property (nonatomic, retain) UIColor *_tvCustomTextColor;
@property (nonatomic) bool _tvUseVibrancy;
@property (nonatomic, copy) NSString *ab_text;
@property (nonatomic, copy) NSDictionary *ab_textAttributes;
@property (nonatomic) bool acceptsDictationSearchResults;
@property (nonatomic) bool acceptsEmoji;
@property (nonatomic) bool acceptsFloatingKeyboard;
@property (nonatomic) bool acceptsSplitKeyboard;
@property (nonatomic) bool accessibilityValueChangesAreReplacements;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic) bool allowsEditingTextAttributes;
@property (nonatomic, copy) NSAttributedString *attributedPlaceholder;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic, copy) NSString *autocorrectionContext;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic, retain) UIImage *background;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (nonatomic) long long borderStyle;
@property (nonatomic) long long clearButtonMode;
@property (nonatomic) bool clearsOnBeginEditing;
@property (nonatomic) bool clearsOnInsertion;
@property (nonatomic) bool contentsIsSingleValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSDictionary *defaultTextAttributes;
@property (nonatomic) bool deferBecomingResponder;
@property (nonatomic) <UITextFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableInputBars;
@property (nonatomic) bool disablePrediction;
@property (nonatomic, retain) UIImage *disabledBackground;
@property (nonatomic) bool displaySecureEditsUsingPlainText;
@property (nonatomic) bool displaySecureTextUsingPlainText;
@property (getter=isEditing, nonatomic, readonly) bool editing;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic) bool enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) bool forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) bool forceDisableDictation;
@property (nonatomic) bool forceEnableDictation;
@property (nonatomic) bool hasDefaultContents;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (retain) UIView *inputAccessoryView;
@property (nonatomic, retain) UIInputContextHistory *inputContextHistory;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (retain) UIView *inputView;
@property (nonatomic, readonly) id insertDictationResultPlaceholder;
@property (nonatomic, retain) UIColor *insertionPointColor;
@property (nonatomic) unsigned long long insertionPointWidth;
@property (nonatomic) bool isCarPlayIdiom;
@property (nonatomic) bool isSingleLineDocument;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic) bool learnsCorrections;
@property (nonatomic, retain) UIView *leftView;
@property (nonatomic) long long leftViewMode;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic) double minimumFontSize;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSString *recentInputIdentifier;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic) bool returnKeyGoesToNextResponder;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, retain) UIView *rightView;
@property (nonatomic) long long rightViewMode;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic, retain) UIColor *selectionBarColor;
@property (nonatomic, retain) UIImage *selectionDragDotImage;
@property (nonatomic, retain) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressReturnKeyStyling;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) long long textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet { }*textTrimmingSet;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;
@property (nonatomic, copy) NSDictionary *typingAttributes;
@property (nonatomic) bool useInterfaceLanguageForLocalization;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } validTextRange;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (bool)_isCompatibilityTextField;
+ (bool)_isDisplayingShortcutViewController;
+ (id)_tvDefaultTextColorDarkKeyboard;
+ (id)_tvDefaultTextColorLightKeyboard;
+ (id)_tvPlaceholderTextColorDarkKeyboard;
+ (id)_tvPlaceholderTextColorFocused;
+ (id)_tvPlaceholderTextColorLightKeyboard;

- (void).cxx_destruct;
- (void)__resumeBecomeFirstResponder;
- (void)_activateSelectionView;
- (void)_addShortcut:(id)arg1;
- (void)_adjustPreferredFontForCurrentContentSizeCategory;
- (void)_applicationResuming:(id)arg1;
- (void)_applyRoundedRectBackgroundCornerRadiusToBackgroundViewWithWarning:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_atomBackgroundViewFrame;
- (id)_attributedText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_availableTextRectExcludingButtonsForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_availableTextRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forEditing:(bool)arg2;
- (id)_backgroundView;
- (id)_baselineLayoutConstraint;
- (double)_baselineLayoutConstraintConstantForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_baselineLayoutLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_baselineLeftViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_becomeFirstResponder;
- (long long)_blurEffectStyleForAppearance;
- (bool)_blurEnabled;
- (bool)_canDrawContent;
- (void)_clearBackgroundViews;
- (id)_clearButton;
- (void)_clearButtonClicked:(id)arg1;
- (id)_clearButtonImageForState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_clearButtonSize;
- (void)_clearSelectionUI;
- (id)_contentBackdropView;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_copyFont:(id)arg1 newSize:(float)arg2 maxSize:(float)arg3;
- (void)_createBaselineLayoutLabelIfNecessary;
- (void)_createInteractionAssistant;
- (id)_cuiCatalog;
- (id)_cuiStyleEffectConfiguration;
- (long long)_currentTextAlignment;
- (id)_defaultPromptString;
- (void)_define:(id)arg1;
- (void)_deleteBackwardAndNotify:(bool)arg1;
- (id)_dictationInterpretations;
- (void)_disableClipToBoundsForBorderStyleNone;
- (bool)_disableTextColorUpdateOnTraitCollectionChange;
- (id)_displayLabel;
- (void)_drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forLabel:(id)arg2;
- (id)_effectiveContentView;
- (id)_encodableSubviews;
- (void)_encodeBackgroundColorWithCoder:(id)arg1;
- (void)_endedEditing;
- (id)_fieldEditor;
- (bool)_fieldEditorAttached;
- (bool)_finishResignFirstResponder;
- (id)_floatingContentView;
- (void)_forceObscureAllText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForLabel:(id)arg1 inTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)_fullFontSize;
- (bool)_hasContent;
- (bool)_hasSuffixField;
- (bool)_heightShouldBeMini;
- (bool)_implementsCustomDrawing;
- (bool)_inPopover;
- (void)_initialScrollDidFinish:(id)arg1;
- (id)_inputController;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)_installSelectGestureRecognizer;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_invalidateBaselineLayoutConstraints;
- (void)_invalidateDefaultFullFontSize;
- (bool)_isDisplayingLookupViewController;
- (bool)_isDisplayingReferenceLibraryViewController;
- (bool)_isDisplayingShareViewController;
- (bool)_isPasscodeStyle;
- (bool)_isShowingPlaceholder;
- (bool)_isShowingPrefix;
- (void)_layoutContent;
- (void)_layoutLabels;
- (struct CGSize { double x1; double x2; })_leftViewOffset;
- (float)_marginTop;
- (float)_marginTopForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)_newFontSize:(float)arg1 maxSize:(float)arg2;
- (void)_nonDestructivelyResignFirstResponder;
- (struct CGPoint { double x1; double x2; })_originForTextFieldLabel:(id)arg1;
- (bool)_overridePasscodeStyle;
- (bool)_ownsInputAccessoryView;
- (bool)_partsShouldBeMini;
- (double)_passcodeStyleAlpha;
- (id)_placeholderColor;
- (id)_placeholderLabel;
- (Class)_placeholderLabelClass;
- (id)_placeholderView;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_prefixFrame;
- (void)_promptForReplace:(id)arg1;
- (void)_propagateCuiProperties;
- (id)_proxyTextInput;
- (bool)_requiresKeyboardResetOnReload;
- (void)_resetSelectionUI;
- (void)_resignFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderExternalTouchRectForWindow:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderSelectionRectForWindow:(id)arg1;
- (bool)_restoreFirstResponder;
- (struct CGSize { double x1; double x2; })_rightViewOffset;
- (double)_roundedRectBackgroundCornerRadius;
- (void)_sanitizeText:(id)arg1;
- (struct CGPoint { double x1; double x2; })_scrollOffset;
- (void)_scrollRangeToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 animated:(bool)arg2;
- (id)_secureString:(id)arg1;
- (void)_selectGestureChanged:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (void)_selectionMayChange:(id)arg1;
- (void)_setActualLeftView:(id)arg1;
- (void)_setActualLeftViewMode:(long long)arg1;
- (void)_setActualRightView:(id)arg1;
- (void)_setActualRightViewMode:(long long)arg1;
- (void)_setAttributedPlaceholder:(id)arg1;
- (void)_setAttributedText:(id)arg1 onFieldEditorAndSetCaretSelectionAfterText:(bool)arg2;
- (void)_setBackgroundFillColor:(id)arg1;
- (void)_setBackgroundStrokeColor:(id)arg1;
- (void)_setBackgroundStrokeWidth:(double)arg1;
- (void)_setBaselineLayoutConstraint:(id)arg1;
- (void)_setBaselineLayoutLabel:(id)arg1;
- (void)_setBlurEnabled:(bool)arg1;
- (void)_setCuiCatalog:(id)arg1;
- (void)_setCuiStyleEffectConfiguration:(id)arg1;
- (void)_setDisableFocus:(bool)arg1;
- (void)_setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)_setFullFontSize:(id)arg1;
- (void)_setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)_setLeftViewOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)_setNeedsStyleRecalc;
- (void)_setOverridePasscodeStyle:(bool)arg1;
- (void)_setOverridePlaceholder:(id)arg1 alignment:(long long)arg2;
- (void)_setPasscodeStyleAlpha:(double)arg1;
- (void)_setPlaceholder:(id)arg1;
- (void)_setPrefix:(id)arg1;
- (void)_setRightViewOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)_setRoundedRectBackgroundCornerRadius:(double)arg1;
- (void)_setSuffix:(id)arg1 withColor:(id)arg2;
- (void)_setSystemBackgroundViewActive:(bool)arg1;
- (void)_setUpBaselineLayoutConstraintsForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_share:(id)arg1;
- (bool)_shouldEndEditing;
- (bool)_shouldObscureInput;
- (bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (void)_showTextStyleOptions:(id)arg1;
- (bool)_showsAtomBackground;
- (bool)_showsClearButton:(bool)arg1;
- (bool)_showsClearButtonWhenEmpty;
- (bool)_showsClearButtonWhenNonEmpty:(bool)arg1;
- (bool)_showsLeftView;
- (bool)_showsRightView;
- (void)_sizeChanged:(bool)arg1;
- (void)_stopObservingFieldEditorScroll;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_suffixFrame;
- (long long)_suffixLabelTextAlignment;
- (void)_switchToLayoutEngine:(id)arg1;
- (void)_syncTypingAttributesWithDefaultAttribute:(id)arg1;
- (id)_systemBackgroundView;
- (Class)_systemBackgroundViewClass;
- (id)_systemInputViewController;
- (id)_text;
- (id)_textInputViewForAddingGestureRecognizers;
- (id)_textLabelView;
- (bool)_textNeedsSanitizing:(id)arg1;
- (struct CGSize { double x1; double x2; })_textSize;
- (struct CGSize { double x1; double x2; })_textSizeUsingFullFontSize:(bool)arg1;
- (id)_textStorageTextColor;
- (void)_transliterateChinese:(id)arg1;
- (id)_tvCustomFocusedTextColor;
- (id)_tvCustomTextColor;
- (id)_tvDefaultFocusedTextColor;
- (id)_tvDefaultInterfaceTextColor;
- (id)_tvDefaultKeyboardTextColor;
- (id)_tvDefaultTextColor;
- (id)_tvTypingAttributes;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;
- (void)_tvUpdateContentBackdropView;
- (void)_tvUpdateTextColor;
- (bool)_tvUseVibrancy;
- (id)_uiktest_placeholderLabelColor;
- (bool)_uiktest_shouldDisableTextColorUpdateOnTraitCollectionChange;
- (id)_uiktest_tvCustomTextColor;
- (bool)_uiktest_tvUseVibrancy;
- (void)_uninstallSelectGestureRecognizer;
- (void)_updateAtomBackground;
- (void)_updateAtomTextColor;
- (void)_updateAutosizeStyleIfNeeded;
- (void)_updateBackgroundViewsAnimated:(bool)arg1;
- (void)_updateBaselineInformationDependentOnBounds;
- (void)_updateButtons;
- (void)_updateFieldEditorBackgroundViewLayout:(bool)arg1;
- (void)_updateForPasscodeAppearance;
- (void)_updateForTintColor;
- (void)_updateLabel;
- (void)_updateLabelAppearance;
- (void)_updatePlaceholderPosition;
- (void)_updateSuffix:(id)arg1;
- (void)_updateTextLabel;
- (bool)_useGesturesForEditableContent;
- (bool)_wantsBaselineUpdatingFollowingConstraintsPass;
- (void)_windowBecameKey;
- (void)_windowResignedKey;
- (id)actualFont;
- (double)actualMinimumFontSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedCaretRectForCaretRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)adjustsFontForContentSizeCategory;
- (bool)adjustsFontSizeToFitWidth;
- (bool)allowsEditingTextAttributes;
- (int)atomStyle;
- (void)attachFieldEditor:(id)arg1;
- (id)attributedPlaceholder;
- (id)attributedText;
- (id)automaticallySelectedOverlay;
- (id)background;
- (id)backgroundColor;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (bool)becomeFirstResponder;
- (void)beginFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })borderRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)borderStyle;
- (bool)canBecomeFirstResponder;
- (bool)canBecomeFocused;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canResignFirstResponder;
- (void)cancelAutoscroll;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (unsigned long long)characterOffsetAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)clearButton;
- (long long)clearButtonMode;
- (struct CGSize { double x1; double x2; })clearButtonOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clearButtonRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clearButtonRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)clearText;
- (int)clearingBehavior;
- (bool)clearsOnBeginEditing;
- (bool)clearsOnInsertion;
- (bool)clearsPlaceholderOnBeginEditing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (struct CGPoint { double x1; double x2; })constrainedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)copy:(id)arg1;
- (void)createPlaceholderIfNecessary;
- (id)createPlaceholderLabelWithFont:(id)arg1 andTextAlignment:(long long)arg2;
- (id)createTextLabelWithTextColor:(id)arg1;
- (id)customOverlayContainer;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (id)defaultTextAttributes;
- (id)delegate;
- (void)deleteBackward;
- (bool)detachFieldEditor:(id)arg1;
- (void)didAttachFieldEditor:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)disableClearsOnInsertion;
- (id)disabledBackground;
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;
- (void)drawBorder:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawPlaceholderInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawPrefixInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawSuffixInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)drawsAsAtom;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editingRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endFloatingCursor;
- (id)endOfDocument;
- (void)endSelectionChange;
- (bool)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })fieldEditor:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 toCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)fieldEditorDidChange:(id)arg1;
- (void)fieldEditorDidChangeSelection:(id)arg1;
- (void)finishedSettingPlaceholder;
- (void)finishedSettingTextOrAttributedText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)font;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasMarkedText;
- (bool)hasSelection;
- (bool)hasText;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })iconRect;
- (void)increaseSize:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputAccessoryView;
- (id)inputDelegate;
- (id)inputView;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })insertFilteredText:(id)arg1;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (void)interactionTintColorDidChange;
- (bool)isAccessibilityElementByDefault;
- (bool)isEditable;
- (bool)isEditing;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isUndoEnabled;
- (bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(bool)arg3;
- (bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (bool)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (bool)keyboardInputShouldDelete:(id)arg1;
- (void)layoutSubviews;
- (void)layoutTilesNow;
- (id)leftView;
- (long long)leftViewMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (double)minimumFontSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (unsigned long long)offsetInMarkedTextForSelection:(id)arg1;
- (float)paddingBottom;
- (float)paddingLeft;
- (float)paddingRight;
- (float)paddingTop;
- (void)paste:(id)arg1;
- (id)placeholder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })placeholderRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (bool)resignFirstResponder;
- (bool)respondsToSelector:(SEL)arg1;
- (id)rightView;
- (long long)rightViewMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rightViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)scrollTextFieldToVisible;
- (id)searchText;
- (void)select:(id)arg1;
- (void)selectAll;
- (void)selectAll:(id)arg1;
- (void)selectAllFromFieldEditor:(id)arg1;
- (id)selectedAttributedText;
- (id)selectedText;
- (id)selectedTextRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setAllowsEditingTextAttributes:(bool)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setAtomStyle:(int)arg1;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setAutoresizesTextToFit:(bool)arg1;
- (void)setBackground:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setBecomesFirstResponderOnClearButtonTap:(bool)arg1;
- (void)setBorderStyle:(long long)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setClearButtonMode:(long long)arg1;
- (void)setClearButtonOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setClearButtonStyle:(int)arg1;
- (void)setClearingBehavior:(int)arg1;
- (void)setClearsOnBeginEditing:(bool)arg1;
- (void)setClearsOnInsertion:(bool)arg1;
- (void)setClearsPlaceholderOnBeginEditing:(bool)arg1;
- (void)setContentVerticalAlignment:(long long)arg1;
- (void)setContinuousSpellCheckingEnabled:(bool)arg1;
- (void)setDefaultTextAttributes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabledBackground:(id)arg1;
- (void)setDisplaySecureEditsUsingPlainText:(bool)arg1;
- (void)setDisplaySecureTextUsingPlainText:(bool)arg1;
- (void)setDrawsAsAtom:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFont:(id)arg1 fullFontSize:(id)arg2;
- (void)setFont:(id)arg1 fullFontSize:(id)arg2 ambientOnly:(bool)arg3;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setInactiveHasDimAppearance:(bool)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelOffset:(float)arg1;
- (void)setLeftView:(id)arg1;
- (void)setLeftViewMode:(long long)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setMinimumFontSize:(double)arg1;
- (void)setPaddingBottom:(float)arg1;
- (void)setPaddingLeft:(float)arg1;
- (void)setPaddingRight:(float)arg1;
- (void)setPaddingTop:(float)arg1;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (void)setPlaceholder:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setRightView:(id)arg1;
- (void)setRightViewMode:(long long)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShadowBlur:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextAutorresizesToFit:(bool)arg1;
- (void)setTextCentersHorizontally:(bool)arg1;
- (void)setTextCentersVertically:(bool)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTypingAttributes:(id)arg1;
- (void)setUndoEnabled:(bool)arg1;
- (void)set_disableTextColorUpdateOnTraitCollectionChange:(bool)arg1;
- (void)set_tvCustomFocusedTextColor:(id)arg1;
- (void)set_tvCustomTextColor:(id)arg1;
- (void)set_tvUseVibrancy:(bool)arg1;
- (double)shadowBlur;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startAutoscroll:(struct CGPoint { double x1; double x2; })arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)takeTraitsFrom:(id)arg1;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (id)textInputView;
- (id)textLabel;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)tintColorDidChange;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)tokenizer;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)typingAttributes;
- (id)undoManager;
- (void)unmarkText;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)viewForLastBaselineLayout;
- (id)webView;
- (void)willAttachFieldEditor:(id)arg1;
- (void)willDetachFieldEditor:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

// Image: /System/Library/AccessibilityBundles/QuickSpeak.bundle/QuickSpeak

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityQuickSpeakContent;
- (bool)_accessibilitySystemShouldShowSpeakBubble;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void)_cnui_applyContactStyle;
- (id)ab_text;
- (id)ab_textAttributes;
- (void)setAb_text:(id)arg1;
- (void)setAb_textAttributes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (bool)isReallyFirstResponder;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (bool)MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
- (id)MPU_contentSizeUpdater;
- (void)MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (id)pk_placeholderColor;
- (void)pk_setPlaceholderColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (bool)accessibilityValueChangesAreReplacements;
- (void)setAccessibilityValueChangesAreReplacements:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (void)rc_copyKeyboardSettingsFromTextField:(id)arg1;
- (void)rc_resignFirstResponderWithoutDismissingKeyboardForDuration:(double)arg1 completionBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)configureFromScriptTextField:(id)arg1;

@end
