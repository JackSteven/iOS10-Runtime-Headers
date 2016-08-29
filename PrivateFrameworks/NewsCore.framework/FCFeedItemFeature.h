/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedItemFeature : NSObject <NSCopying> {
    NSString * _key;
    long long  _type;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *topicID;
@property (nonatomic, readonly) long long type;

+ (id)featureForCoverArt;
+ (id)featureForPaidCoverArt;
+ (id)featureForTopicID:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 key:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)topicID;
- (long long)type;

@end
