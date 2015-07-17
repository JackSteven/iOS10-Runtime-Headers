/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioLikeRequest : RadioRequest {
    BOOL _isSeed;
    long long _itemID;
    int _likeStatus;
    SSURLConnectionRequest *_request;
    int _seedType;
    RadioStation *_station;
}

@property (nonatomic) BOOL isSeed;
@property (nonatomic) int likeStatus;

- (void).cxx_destruct;
- (id)init;
- (id)initWithItemID:(long long)arg1 seedType:(int)arg2 station:(id)arg3;
- (id)initWithTrack:(id)arg1 station:(id)arg2;
- (id)initWithTrackID:(id)arg1 station:(id)arg2;
- (BOOL)isSeed;
- (int)likeStatus;
- (void)setIsSeed:(BOOL)arg1;
- (void)setLikeStatus:(int)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)startWithLikeCompletionHandler:(id /* block */)arg1;

@end