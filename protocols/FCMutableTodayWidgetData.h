/* Generated by RuntimeBrowser.
 */

@protocol FCMutableTodayWidgetData <FCTodayWidgetDropboxData>

@required

- (<FCDerivedPersonalizationData><NSCoding> *)derivedPersonalizationData;
- (NSString *)feldsparID;
- (NSSet *)highestRankedSubscribedTagIDs;
- (NSSet *)mutedTagIDs;
- (NSSet *)purchasedTagIDs;
- (NSDictionary *)recentlyReadArticles;
- (void)setDerivedPersonalizationData:(id <FCDerivedPersonalizationData><NSCoding>)arg1;
- (void)setFeldsparID:(NSString *)arg1;
- (void)setHighestRankedSubscribedTagIDs:(NSSet *)arg1;
- (void)setMutedTagIDs:(NSSet *)arg1;
- (void)setPurchasedTagIDs:(NSSet *)arg1;
- (void)setRecentlyReadArticles:(NSDictionary *)arg1;

@end
