/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDoubleLinkedList : NSObject {
    unsigned long long  _count;
    SSDoubleLinkedListNode * _head;
    NSString * _listIdentifier;
    SSDoubleLinkedListNode * _tail;
}

@property (nonatomic, readonly) NSArray *allNodes;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) SSDoubleLinkedListNode *head;
@property (nonatomic, retain) NSString *listIdentifier;
@property (nonatomic, retain) SSDoubleLinkedListNode *tail;

- (void).cxx_destruct;
- (id)allNodes;
- (void)appendNode:(id)arg1;
- (id)appendObject:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (id)head;
- (id)init;
- (void)insertNode:(id)arg1;
- (id)insertObject:(id)arg1;
- (id)listIdentifier;
- (void)removeNode:(id)arg1;
- (void)setHead:(id)arg1;
- (void)setListIdentifier:(id)arg1;
- (void)setTail:(id)arg1;
- (id)tail;

@end
