/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUICommonAssetStorage : NSObject {
    void * _bitmapKeydb;
    void * _colordb;
    struct _carextendedMetadata { unsigned int x1; BOOL x2[256]; BOOL x3[256]; BOOL x4[256]; BOOL x5[256]; } * _extendedMetadata;
    NSSet * _externalTags;
    void * _facetKeysdb;
    void * _fontdb;
    void * _fontsizedb;
    NSData * _globals;
    struct _carheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6[128]; BOOL x7[256]; unsigned char x8[16]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; } * _header;
    void * _imagedb;
    unsigned int  _isMemoryMapped;
    struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; } * _keyfmt;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    /* Warning: unhandled array encoding: '[10@]' */ id  _renditionInfoCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _renditionInfoCacheLock;
    unsigned short  _renditionInfoCacheLookup;
    unsigned int  _reserved;
    unsigned int  _swap;
    void * _zcbezeldb;
    void * _zcglyphdb;
}

+ (void)initialize;
+ (bool)isValidAssetStorageWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
+ (bool)isValidAssetStorageWithURL:(id)arg1;

- (void)_addBitmapIndexForNameIdentifier:(unsigned short)arg1 attribute:(int)arg2 withValue:(unsigned short)arg3 toDictionary:(id)arg4;
- (struct _BOMStorage { }*)_bomStorage;
- (void)_bringHeaderInfoUpToDate;
- (void)_buildBitmapInfoIntoDictionary:(id)arg1;
- (bool)_commonInitWithStorage:(struct _BOMStorage { }*)arg1 forWritting:(bool)arg2;
- (const struct FontValue { BOOL x1[128]; float x2; }*)_fontValueForFontType:(id)arg1;
- (void)_initDefaultHeaderVersion:(double)arg1 versionString:(const char *)arg2;
- (long long)_storagefileTimestamp;
- (void)_swapHeader;
- (void)_swapKeyFormat;
- (void)_swapRenditionKeyArray:(unsigned short*)arg1;
- (struct _renditionkeytoken { unsigned short x1; unsigned short x2; })_swapRenditionKeyToken:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; })arg1;
- (void)_swapZeroCodeInformation:(struct { unsigned int x1; unsigned int x2; }*)arg1;
- (id)_zeroCodeListFromTree:(const void*)arg1;
- (id)allAssetKeys;
- (id)allRenditionNames;
- (bool)assetExistsForKey:(id)arg1;
- (bool)assetExistsForKeyData:(const void*)arg1 length:(unsigned long long)arg2;
- (id)assetForKey:(id)arg1;
- (id)assetKeysMatchingBlock:(id /* block */)arg1;
- (unsigned int)associatedChecksum;
- (id)authoringTool;
- (id)catalogGlobalData;
- (unsigned int)colorSpaceID;
- (unsigned int)coreuiVersion;
- (void)dealloc;
- (id)deploymentPlatform;
- (id)deploymentPlatformVersion;
- (id)description;
- (void)enumerateBitmapIndexUsingBlock:(id /* block */)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)externalTags;
- (float)fontSizeForFontSizeType:(id)arg1;
- (bool)getBaselineOffset:(float*)arg1 forFontType:(id)arg2;
- (bool)getColor:(struct _colordef { unsigned int x1; unsigned int x2; struct _rgbquad { unsigned int x_3_1_1 : 8; unsigned int x_3_1_2 : 8; unsigned int x_3_1_3 : 8; unsigned int x_3_1_4 : 8; } x3; }*)arg1 forName:(const char *)arg2;
- (bool)getFontName:(id*)arg1 baselineOffset:(float*)arg2 forFontType:(id)arg3;
- (bool)hasColorForName:(const char *)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 forWriting:(bool)arg2;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)keyFormat;
- (id)keyFormatData;
- (int)keySemantics;
- (const char *)mainVersionString;
- (long long)maximumRenditionKeyTokenCount;
- (id)path;
- (unsigned int)renditionCount;
- (id)renditionInfoForIdentifier:(unsigned short)arg1;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(const char *)arg1 hotSpot:(struct CGPoint { double x1; double x2; }*)arg2;
- (id)renditionNameForKeyList:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (unsigned int)schemaVersion;
- (long long)storageTimestamp;
- (unsigned int)storageVersion;
- (bool)swapped;
- (id)thinningArguments;
- (bool)usesCUISystemThemeRenditionKey;
- (id)uuid;
- (int)validateBitmapInfo;
- (const char *)versionString;
- (id)zeroCodeBezelList;
- (id)zeroCodeGlyphList;

@end
