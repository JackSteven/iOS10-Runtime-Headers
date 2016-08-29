/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSRTFReader : NSObject {
    struct _NSAttributeInfo { 
        unsigned int toUniCharEncoding; 
        unsigned int codePageEncoding; 
        NSFont *font; 
        double fontSize; 
        double kern; 
        NSMutableParagraphStyle *paraStyle; 
        unsigned int bold : 1; 
        unsigned int italic : 1; 
        unsigned int fontIsValid : 1; 
        unsigned int paraStyleIsValid : 1; 
        unsigned int kernIsValid : 1; 
        unsigned int attributesSameAsBefore : 1; 
        unsigned int multiByteEncoding : 1; 
        unsigned int unicodeAlternativeLength : 3; 
        unsigned int tabStopType : 4; 
        unsigned int curAttributesNeedsCopying : 1; 
        unsigned int paraStyleNeedsCopying : 1; 
        unsigned int hasWritingDirectionAttribute : 1; 
        unsigned int  : 15; 
    }  _attributeInfo;
    NSMutableData * _attributeInfoStack;
    NSMutableArray * _attributesStack;
    double  _bMargin;
    NSMapTable * _cachedRTFFontTable;
    int  _cocoaSubVersion;
    int  _cocoaVersion;
    int  _colorTblColorSpace;
    NSMutableAttributedString * _curAttributedString;
    NSMutableDictionary * _curAttributes;
    unsigned long long  _currentBorderEdge;
    bool  _currentBorderIsTable;
    int  _currentColumn;
    int  _currentDefinitionColumn;
    int  _currentListLevel;
    int  _currentListNumber;
    int  _currentRow;
    NSMutableArray * _currentRowArray;
    bool  _currentRowIsLast;
    NSTextTable * _currentTable;
    double  _defaultTabInterval;
    unsigned int  _defaultToUniCharEncoding;
    NSFileWrapper * _document;
    NSColor * _documentBackgroundColor;
    NSMutableDictionary * _documentInfoDictionary;
    bool  _explicitCharSetEncountered;
    NSMutableDictionary * _fontAttributesTable;
    NSMutableDictionary * _fontTable;
    NSCalendar * _gregorianCalendar;
    double  _hyphenationFactor;
    bool  _isRTLDocument;
    double  _lMargin;
    NSMutableArray * _layoutOrientationSections;
    unsigned int  _level;
    bool  _limitReached;
    NSMutableDictionary * _listDefinitions;
    NSMutableArray * _nestedTables;
    struct CGSize { 
        double width; 
        double height; 
    }  _paperSize;
    NSMutableArray * _previousRowArray;
    NSTextTable * _previousTable;
    struct _NSRTFPriv { 
        void *reader; 
        char *rtfInput; 
        unsigned long long rtfInputLength; 
        unsigned long long rtfInputLocation; 
        unsigned long long rtfHeaderEndLocation; 
        int pushedChar; 
        int pushedClass; 
        int pushedMajor; 
        int pushedMinor; 
        int pushedParam; 
        BOOL pushedTextBuf[1024]; 
        int prevChar; 
        int bumpLine; 
        struct RTFFont {} *fontList; 
        struct RTFColor {} *colorList; 
        struct RTFStyle {} *styleList; 
        char *inputName; 
        char *outputName; 
        int (*ccb[5])(); 
        int (*readHook)(); 
        int (*msgProc)(); 
        int (*panicProc)(); 
        BOOL textBuf[1024]; 
        int textLen; 
        int class; 
        int major; 
        int minor; 
        int param; 
        long long lineNum; 
        long long linePos; 
        int groupState; 
    }  _private;
    double  _rMargin;
    long long  _readLimit;
    int  _readOnly;
    NSData * _rtfData;
    int  _rtfVersion;
    bool  _setTableCells;
    double  _tMargin;
    NSArray * _textBlocks;
    union { 
        unsigned char thin[128]; 
        unsigned short fat[128]; 
    }  _textBuffer;
    bool  _textBufferContentsIsFat;
    unsigned long long  _textBufferIndex;
    unsigned char  _textFlow;
    long long  _thumbnailLimit;
    NSMutableAttributedString * _topAttributedString;
    int  _usesScreenFonts;
    unsigned long long  _verticalOrientationLocation;
    int  _viewKind;
    int  _viewScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
}

- (id)_RTFDFileWrapper;
- (void)_addListDefinition:(id)arg1 forKey:(long long)arg2;
- (void)_addOverride:(long long)arg1 forKey:(long long)arg2;
- (void)_beginTableRow;
- (void)_clearTableCells;
- (unsigned long long)_currentBorderEdge;
- (bool)_currentBorderIsTable;
- (long long)_currentListLevel;
- (long long)_currentListNumber;
- (id)_currentTable;
- (id)_currentTableCell;
- (bool)_currentTableCellIsPlaceholder;
- (id)_documentInfoDictionary;
- (void)_endTableCell;
- (void)_endTableCellDefinition;
- (void)_endTableRow;
- (void)_ensureTableCells;
- (void)_lastTableRow;
- (id)_listDefinitions;
- (void)_mergeTableCellsHorizontally;
- (void)_mergeTableCellsVertically;
- (id)_mutableParagraphStyle;
- (void)_paragraphInTable;
- (void)_popState;
- (void)_popTableState;
- (void)_pushState;
- (void)_pushTableState;
- (void)_setCurrentBorderEdge:(unsigned long long)arg1 isTable:(bool)arg2;
- (void)_setCurrentListLevel:(long long)arg1;
- (void)_setCurrentListNumber:(long long)arg1;
- (void)_setRTFDFileWrapper:(id)arg1;
- (void)_setTableCells;
- (void)_setTableNestingLevel:(long long)arg1;
- (void)_startTableRowDefinition;
- (void)_updateAttributes;
- (id)attributedString;
- (id)attributedStringToEndOfGroup;
- (id)attributesAtEndOfGroup;
- (long long)baseWritingDirection;
- (long long)cocoaSubVersion;
- (long long)cocoaVersion;
- (void)dealloc;
- (id)defaultParagraphStyle;
- (double)defaultTabInterval;
- (id)documentAttributes;
- (void)finalize;
- (double)floatCocoaVersion;
- (id)initWithPath:(id)arg1;
- (id)initWithRTF:(id)arg1;
- (id)initWithRTFD:(id)arg1;
- (id)initWithRTFDFileWrapper:(id)arg1;
- (id)mutableAttributedString;
- (id)mutableAttributes;
- (struct CGSize { double x1; double x2; })paperSize;
- (void)processString:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1;
- (void)setBottomMargin:(double)arg1;
- (void)setCocoaSubVersion:(long long)arg1;
- (void)setCocoaVersion:(long long)arg1;
- (void)setDefaultTabInterval:(double)arg1;
- (void)setHyphenationFactor:(float)arg1;
- (void)setLeftMargin:(double)arg1;
- (void)setMutableAttributedString:(id)arg1;
- (void)setPaperSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setReadLimit:(long long)arg1;
- (void)setReadOnly:(long long)arg1;
- (void)setRightMargin:(double)arg1;
- (void)setTextFlow:(unsigned long long)arg1;
- (void)setThumbnailLimit:(long long)arg1;
- (void)setTopMargin:(double)arg1;
- (void)setUsesScreenFonts:(long long)arg1;
- (void)setViewKind:(long long)arg1;
- (void)setViewScale:(long long)arg1;
- (void)setViewSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)textFlow;
- (struct CGSize { double x1; double x2; })viewSize;

@end
