/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIElement : NSObject {
    NSMutableDictionary * _attributes;
    NSString * _body;
    bool  _enabled;
    NSString * _identifier;
    RUIElement * _parent;
    RUIStyle * _style;
}

@property (nonatomic, copy) NSDictionary *attributes;
@property (nonatomic, copy) NSString *body;
@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) RUIElement *parent;
@property (nonatomic, retain) RUIStyle *style;

- (void).cxx_destruct;
- (id)URLAttributeForImageName:(id)arg1 getScale:(double*)arg2;
- (int)_horizontalAlignmentForString:(id)arg1;
- (id)attributes;
- (id)body;
- (void)configureView:(id)arg1;
- (void)dealloc;
- (bool)enabled;
- (bool)hasImage;
- (id)identifier;
- (void)imageLoaded:(id)arg1;
- (id)init;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (bool)loadImage;
- (id)mutableAttributes;
- (id)name;
- (id)parent;
- (void)populatePostbackDictionary:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStyle:(id)arg1;
- (id)sourceURL;
- (id)style;
- (id)subElementsWithName:(id)arg1;

@end
