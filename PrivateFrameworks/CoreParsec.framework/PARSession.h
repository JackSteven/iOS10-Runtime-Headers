/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARSession : NSObject <PARClientXPC, SFFeedbackListener> {
    PARBag * _bag;
    PARSearchClient * _client;
    PARSessionConfiguration * _configuration;
    NSXPCConnection * _connection;
    <PARSessionDelegate> * _delegate;
    PARRanker * _ranker;
}

@property (readonly) PARBag *bag;
@property (nonatomic, retain) PARSearchClient *client;
@property (nonatomic, retain) PARSessionConfiguration *configuration;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PARSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) PARRanker *ranker;
@property (readonly) Class superclass;

+ (id)sessionWithConfiguration:(id)arg1;
+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 startImmediately:(bool)arg3;
+ (id)sharedPARSessionWithConfiguration:(id)arg1;

- (void).cxx_destruct;
- (void)_addTopicsToSearchRequest:(id)arg1;
- (void)_setupRanker;
- (unsigned long long)_userAgentToMKSearchFoundationFeedbackClientType:(id)arg1;
- (id)awaitBag;
- (id)bag;
- (void)bagDidLoad:(id)arg1 error:(id)arg2;
- (void)captureMapsResultsDisplayedFeedback:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (id)client;
- (id)configuration;
- (id)connection;
- (id)delegate;
- (void)didAppendLateSections:(id)arg1;
- (void)didClearInput:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didEngageSection:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)didErrorOccur:(id)arg1;
- (void)didGoToSite:(id)arg1;
- (void)didRankSections:(id)arg1;
- (void)didReceiveResultsAfterTimeout:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (unsigned long long)enabledStatus;
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 connection:(id)arg2;
- (id)initWithConfiguration:(id)arg1 connection:(id)arg2 delegate:(id)arg3 startImmediately:(bool)arg4;
- (void)loadTask:(id)arg1;
- (id)ranker;
- (void)reportEvent:(id)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)searchViewDidAppear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (void)sectionHeaderDidBecomeVisible:(id)arg1;
- (void)sendCustomFeedback:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRanker:(id)arg1;
- (void)start;
- (void)suggestionsDidBecomeVisible:(id)arg1;
- (id)taskWithRequest:(id)arg1 completion:(id /* block */)arg2;

@end
