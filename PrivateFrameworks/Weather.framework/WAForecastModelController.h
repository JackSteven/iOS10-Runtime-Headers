/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WAForecastModelController : NSObject {
    NSObject<OS_dispatch_queue> * _completionHandlerQueue;
    NSMutableDictionary * _completionHandlersForCity;
    NSOperationQueue * _forecastOperationQueue;
    NSObject<OS_dispatch_queue> * _incomingRequestQueue;
    NSString * _trackingParameter;
    NSMutableSet * _updatingCities;
}

@property (retain) NSObject<OS_dispatch_queue> *completionHandlerQueue;
@property (retain) NSMutableDictionary *completionHandlersForCity;
@property (retain) NSOperationQueue *forecastOperationQueue;
@property (retain) NSObject<OS_dispatch_queue> *incomingRequestQueue;
@property (copy) NSString *trackingParameter;
@property (retain) NSMutableSet *updatingCities;

- (void).cxx_destruct;
- (id)_commaSeparatedUpdatingCitiesNames;
- (void)_handleForecastOperationCompletion:(id)arg1;
- (id)_queue_executeFetchForCity:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelAllFetchRequests;
- (id)completionHandlerQueue;
- (id)completionHandlersForCity;
- (bool)fetchForecastForCities:(id)arg1 completion:(id /* block */)arg2;
- (bool)fetchForecastForCity:(id)arg1 completion:(id /* block */)arg2;
- (id)forecastOperationQueue;
- (id)incomingRequestQueue;
- (id)init;
- (bool)isCityBeingUpdated:(id)arg1;
- (void)setCompletionHandlerQueue:(id)arg1;
- (void)setCompletionHandlersForCity:(id)arg1;
- (void)setForecastOperationQueue:(id)arg1;
- (void)setIncomingRequestQueue:(id)arg1;
- (void)setTrackingParameter:(id)arg1;
- (void)setUpdatingCities:(id)arg1;
- (id)trackingParameter;
- (id)updatingCities;

@end
