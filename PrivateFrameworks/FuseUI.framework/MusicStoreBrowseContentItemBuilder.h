/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreBrowseContentItemBuilder : MPStoreModelObjectBuilder {
    MPStoreModelAlbumBuilder * _albumBuilder;
    bool  _allowsRadioStations;
    bool  _allowsVideoContent;
    MPStoreModelArtistBuilder * _artistBuilder;
    MPStoreModelCuratorBuilder * _curatorBuilder;
    MPStoreModelPlaylistBuilder * _playlistBuilder;
    MPStoreModelRadioStationBuilder * _radioStationBuilder;
    struct { 
        unsigned int initialized : 1; 
        unsigned int itemType : 1; 
        unsigned int detailedItemType : 1; 
        unsigned int artist : 1; 
        unsigned int album : 1; 
        unsigned int curator : 1; 
        unsigned int playlist : 1; 
        unsigned int radioStation : 1; 
        unsigned int song : 1; 
        unsigned int aucType : 1; 
    }  _requestedBrowseContentItemProperties;
    MPStoreModelSongBuilder * _songBuilder;
}

@property (nonatomic) bool allowsRadioStations;
@property (nonatomic) bool allowsVideoContent;

+ (id)allSupportedProperties;

- (void).cxx_destruct;
- (bool)allowsRadioStations;
- (bool)allowsVideoContent;
- (long long)contentItemTypeForRawResponseKindIdentifierValue:(long long)arg1;
- (long long)contentItemTypeForRawResponseKindIdentifiers:(id)arg1;
- (long long)contentItemTypeForStoreItemMetadata:(id)arg1;
- (id)initWithRequestedPropertySet:(id)arg1;
- (id)modelObjectWithStoreItemMetadata:(id)arg1;
- (void)setAllowsRadioStations:(bool)arg1;
- (void)setAllowsVideoContent:(bool)arg1;

@end
