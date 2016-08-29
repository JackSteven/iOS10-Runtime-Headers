/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCCloudFileProvider : BRCFileProvider <BRCReachabilityDelegate, BRItemNotificationReceiving> {
    NSMutableDictionary * _downloadTrackersByDocID;
    NSMutableDictionary * _filePresenterByKey;
    NSMutableSet * _keysPendingImmediateReads;
    NSMutableDictionary * _readersURLAndIDToDocID;
    NSMutableDictionary * _recursiveReadsByURLAndID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)__provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 session:(id)arg3 recursively:(bool)arg4 updateAccessTime:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)_cancelCallBackForDocID:(id)arg1 key:(id)arg2;
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (id)_fileReactorID;
- (id)_physicalURLForURL:(id)arg1;
- (void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_registerPresenterForItemAtURL:(id)arg1 key:(id)arg2 name:(id)arg3 session:(id)arg4;
- (unsigned long long)_spaceRequiredForReaders;
- (void)_triggerImmediateReadOfDocumentAtPath:(id)arg1;
- (void)_unregisterPresenterForKey:(id)arg1;
- (void)_waitForDownloadOfDirectory:(id)arg1 key:(id)arg2 updateAccessTime:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_waitForDownloadOfDocument:(id)arg1 key:(id)arg2 requireCurrent:(bool)arg3 updateAccessTime:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)boostFilePresenterForURL:(id)arg1;
- (void)cancelAllCoordinationProviders;
- (void)cancelFileProvidersForPath:(id)arg1;
- (void)document:(id)arg1 didCompleteDownloadWithError:(id)arg2;
- (void)dumpToContext:(id)arg1;
- (id)filePresenterIdentifierForURL:(id)arg1;
- (bool)hasFilePresenterForURL:(id)arg1;
- (bool)hasPendingReaderForDocumentID:(id)arg1;
- (id)initWithURL:(id)arg1;
- (oneway void)invalidate;
- (void)networkReachabilityChanged:(bool)arg1;
- (void)receiveProgressUpdates:(id)arg1 reply:(id /* block */)arg2;
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(id /* block */)arg4;

@end
