/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTileStatePool : NSObject {
    struct unordered_map<PXTileIdentifier, unsigned long, std::__1::hash<PXTileIdentifier>, std::__1::equal_to<PXTileIdentifier>, std::__1::allocator<std::__1::pair<const PXTileIdentifier, unsigned long> > > { 
        struct __hash_table<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::__unordered_map_hasher<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::hash<PXTileIdentifier>, true>, std::__1::__unordered_map_equal<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::equal_to<PXTileIdentifier>, true>, std::__1::allocator<std::__1::__hash_value_type<PXTileIdentifier, unsigned long> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> > > { 
                    struct __hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> { 
                    struct __hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::hash<PXTileIdentifier>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::equal_to<PXTileIdentifier>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _indexByTargetIdentifier;
    NSMutableIndexSet * _pageKeysToRemove;
    struct PXTileState { bool x1; struct PXTileIdentifier { unsigned long long x_2_1_1; unsigned long long x_2_1_2[10]; } x2; struct PXTileIdentifier { unsigned long long x_3_1_1; unsigned long long x_3_1_2[10]; } x3; struct PXTileIdentifier { unsigned long long x_4_1_1; unsigned long long x_4_1_2[10]; } x4; unsigned long long x5; bool x6; struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_7_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_7_1_2; struct CGSize { double x_3_2_1; double x_3_2_2; } x_7_1_3; struct CGAffineTransform { double x_4_2_1; double x_4_2_2; double x_4_2_3; double x_4_2_4; double x_4_2_5; double x_4_2_6; } x_7_1_4; double x_7_1_5; double x_7_1_6; bool x_7_1_7; struct CGSize { double x_8_2_1; double x_8_2_2; } x_7_1_8; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_9_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_9_2_2; } x_7_1_9; void *x_7_1_10; } x7; struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_8_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_8_1_2; struct CGSize { double x_3_2_1; double x_3_2_2; } x_8_1_3; struct CGAffineTransform { double x_4_2_1; double x_4_2_2; double x_4_2_3; double x_4_2_4; double x_4_2_5; double x_4_2_6; } x_8_1_4; double x_8_1_5; double x_8_1_6; bool x_8_1_7; struct CGSize { double x_8_2_1; double x_8_2_2; } x_8_1_8; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_9_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_9_2_2; } x_8_1_9; void *x_8_1_10; } x8; } * _states;
    long long  _statesMaxCount;
    NSMapTable * _tileIndexesByPageKey;
    NSMutableIndexSet * _unusedIndexes;
    NSMutableIndexSet * _usedIndexes;
}

@property (nonatomic, readonly) long long count;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cleanupStateAtIndex:(unsigned long long)arg1;
- (struct PXTileState { bool x1; struct PXTileIdentifier { unsigned long long x_2_1_1; unsigned long long x_2_1_2[10]; } x2; struct PXTileIdentifier { unsigned long long x_3_1_1; unsigned long long x_3_1_2[10]; } x3; struct PXTileIdentifier { unsigned long long x_4_1_1; unsigned long long x_4_1_2[10]; } x4; unsigned long long x5; bool x6; struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_7_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_7_1_2; struct CGSize { double x_3_2_1; double x_3_2_2; } x_7_1_3; struct CGAffineTransform { double x_4_2_1; double x_4_2_2; double x_4_2_3; double x_4_2_4; double x_4_2_5; double x_4_2_6; } x_7_1_4; double x_7_1_5; double x_7_1_6; bool x_7_1_7; struct CGSize { double x_8_2_1; double x_8_2_2; } x_7_1_8; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_9_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_9_2_2; } x_7_1_9; void *x_7_1_10; } x7; struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_8_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_8_1_2; struct CGSize { double x_3_2_1; double x_3_2_2; } x_8_1_3; struct CGAffineTransform { double x_4_2_1; double x_4_2_2; double x_4_2_3; double x_4_2_4; double x_4_2_5; double x_4_2_6; } x_8_1_4; double x_8_1_5; double x_8_1_6; bool x_8_1_7; struct CGSize { double x_8_2_1; double x_8_2_2; } x_8_1_8; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_9_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_9_2_2; } x_8_1_9; void *x_8_1_10; } x8; }*)_mutableStateAtIndex:(unsigned long long)arg1;
- (void)_storeCurrentFrameLookupForTileState:(struct PXTileState { bool x1; struct PXTileIdentifier { unsigned long long x_2_1_1; unsigned long long x_2_1_2[10]; } x2; struct PXTileIdentifier { unsigned long long x_3_1_1; unsigned long long x_3_1_2[10]; } x3; struct PXTileIdentifier { unsigned long long x_4_1_1; unsigned long long x_4_1_2[10]; } x4; unsigned long long x5; bool x6; struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_7_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_7_1_2; struct CGSize { double x_3_2_1; double x_3_2_2; } x_7_1_3; struct CGAffineTransform { double x_4_2_1; double x_4_2_2; double x_4_2_3; double x_4_2_4; double x_4_2_5; double x_4_2_6; } x_7_1_4; double x_7_1_5; double x_7_1_6; bool x_7_1_7; struct CGSize { double x_8_2_1; double x_8_2_2; } x_7_1_8; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_9_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_9_2_2; } x_7_1_9; void *x_7_1_10; } x7; struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_8_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_8_1_2; struct CGSize { double x_3_2_1; double x_3_2_2; } x_8_1_3; struct CGAffineTransform { double x_4_2_1; double x_4_2_2; double x_4_2_3; double x_4_2_4; double x_4_2_5; double x_4_2_6; } x_8_1_4; double x_8_1_5; double x_8_1_6; bool x_8_1_7; struct CGSize { double x_8_2_1; double x_8_2_2; } x_8_1_8; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_9_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_9_2_2; } x_8_1_9; void *x_8_1_10; } x8; }*)arg1 withIndex:(unsigned long long)arg2;
- (void)_storeTargetIdentifierLookupForTileState:(struct PXTileState { bool x1; struct PXTileIdentifier { unsigned long long x_2_1_1; unsigned long long x_2_1_2[10]; } x2; struct PXTileIdentifier { unsigned long long x_3_1_1; unsigned long long x_3_1_2[10]; } x3; struct PXTileIdentifier { unsigned long long x_4_1_1; unsigned long long x_4_1_2[10]; } x4; unsigned long long x5; bool x6; struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_7_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_7_1_2; struct CGSize { double x_3_2_1; double x_3_2_2; } x_7_1_3; struct CGAffineTransform { double x_4_2_1; double x_4_2_2; double x_4_2_3; double x_4_2_4; double x_4_2_5; double x_4_2_6; } x_7_1_4; double x_7_1_5; double x_7_1_6; bool x_7_1_7; struct CGSize { double x_8_2_1; double x_8_2_2; } x_7_1_8; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_9_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_9_2_2; } x_7_1_9; void *x_7_1_10; } x7; struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_8_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_8_1_2; struct CGSize { double x_3_2_1; double x_3_2_2; } x_8_1_3; struct CGAffineTransform { double x_4_2_1; double x_4_2_2; double x_4_2_3; double x_4_2_4; double x_4_2_5; double x_4_2_6; } x_8_1_4; double x_8_1_5; double x_8_1_6; bool x_8_1_7; struct CGSize { double x_8_2_1; double x_8_2_2; } x_8_1_8; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_9_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_9_2_2; } x_8_1_9; void *x_8_1_10; } x8; }*)arg1 withIndex:(unsigned long long)arg2;
- (void)checkInIndex:(unsigned long long)arg1;
- (void)checkInIndexes:(id)arg1;
- (unsigned long long)checkOutIndexWithInitialConfiguration:(id /* block */)arg1;
- (long long)count;
- (void)dealloc;
- (id)description;
- (void)enumerateStatesAtIndexes:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateStatesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateStatesUsingBlock:(id /* block */)arg1;
- (unsigned long long)indexOfFirstStatePassingTest:(id /* block */)arg1;
- (unsigned long long)indexOfStateWithTargetIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;
- (id)indexesOfStatesPassingTest:(id /* block */)arg1;
- (id)init;
- (void)setCurrentGeometry:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg1 forTileStateAtIndex:(unsigned long long)arg2;
- (void)setTargetIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 forTileStateAtIndex:(unsigned long long)arg2;
- (struct PXProtectedTileState { bool x1; struct PXTileIdentifier { unsigned long long x_2_1_1; unsigned long long x_2_1_2[10]; } x2; struct PXTileIdentifier { unsigned long long x_3_1_1; unsigned long long x_3_1_2[10]; } x3; struct PXTileIdentifier { unsigned long long x_4_1_1; unsigned long long x_4_1_2[10]; } x4; unsigned long long x5; bool x6; struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_7_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_7_1_2; struct CGSize { double x_3_2_1; double x_3_2_2; } x_7_1_3; struct CGAffineTransform { double x_4_2_1; double x_4_2_2; double x_4_2_3; double x_4_2_4; double x_4_2_5; double x_4_2_6; } x_7_1_4; double x_7_1_5; double x_7_1_6; bool x_7_1_7; struct CGSize { double x_8_2_1; double x_8_2_2; } x_7_1_8; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_9_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_9_2_2; } x_7_1_9; void *x_7_1_10; } x7; struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_8_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_8_1_2; struct CGSize { double x_3_2_1; double x_3_2_2; } x_8_1_3; struct CGAffineTransform { double x_4_2_1; double x_4_2_2; double x_4_2_3; double x_4_2_4; double x_4_2_5; double x_4_2_6; } x_8_1_4; double x_8_1_5; double x_8_1_6; bool x_8_1_7; struct CGSize { double x_8_2_1; double x_8_2_2; } x_8_1_8; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_9_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_9_2_2; } x_8_1_9; void *x_8_1_10; } x8; }*)stateAtIndex:(unsigned long long)arg1;

@end
