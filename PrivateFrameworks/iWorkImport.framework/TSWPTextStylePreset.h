/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTextStylePreset : TSPObject <TSSPreset> {
    TSWPListStyle * _listStyle;
    TSWPParagraphStyle * _paragraphStyle;
    NSString * _presetIdentifier;
}

@property (nonatomic, retain) TSWPListStyle *listStyle;
@property (nonatomic, retain) TSWPParagraphStyle *paragraphStyle;
@property (nonatomic, copy) NSString *presetIdentifier;
@property (nonatomic, readonly) NSString *presetKind;

- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 presetIdentifier:(id)arg2 paragraphStyle:(id)arg3 listStyle:(id)arg4;
- (id)listStyle;
- (void)loadFromArchive:(const struct TextStylePresetArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Reference {} *x6; struct Reference {} *x7; }*)arg1 unarchiver:(id)arg2;
- (id)paragraphStyle;
- (id)presetIdentifier;
- (id)presetKind;
- (void)saveToArchive:(struct TextStylePresetArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Reference {} *x6; struct Reference {} *x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setListStyle:(id)arg1;
- (void)setParagraphStyle:(id)arg1;
- (void)setPresetIdentifier:(id)arg1;

@end