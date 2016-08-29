/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTileIDKeyDict : TSPContainedObject {
    struct hash_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > > { struct __hash_table<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, __gnu_cxx::__hash_map_hasher<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, TSTIntHasher, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > > { struct unique_ptr<std::__1::__hash_node<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> > > { struct __hash_node<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; } * mMap;
}

+ (id)p_sharedQueue;

- (void)applyFunction:(int (*)arg1 withState:(void*)arg2;
- (long long)count;
- (void)dealloc;
- (void)enumerateTilesConcurrentlyUsingBlock:(id /* block */)arg1 andWaitForAsyncBlocks:(bool)arg2;
- (void)enumerateTilesWithBlock:(id /* block */)arg1;
- (id)initWithArchive:(const struct TileStorage { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TST::TileStorage_Tile> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (id)initWithOwner:(id)arg1;
- (void)removeAllTiles;
- (void)removeTileForID:(struct { unsigned short x1; unsigned short x2; })arg1;
- (void)saveToArchive:(struct TileStorage { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TST::TileStorage_Tile> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1 archiver:(id)arg2;
- (void)setTile:(id)arg1 forID:(struct { unsigned short x1; unsigned short x2; })arg2;
- (id)tileForID:(struct { unsigned short x1; unsigned short x2; })arg1;

@end
