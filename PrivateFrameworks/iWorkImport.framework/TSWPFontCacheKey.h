/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFontCacheKey : NSObject {
    NSString * _fontName;
    double  _fontSize;
    unsigned long long  _hash;
}

@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double fontSize;

+ (id)cacheKeyWithFontName:(id)arg1 size:(double)arg2;

- (void)dealloc;
- (id)description;
- (id)fontName;
- (double)fontSize;
- (unsigned long long)hash;
- (id)initWithFontName:(id)arg1 size:(double)arg2;
- (bool)isEqual:(id)arg1;

@end
