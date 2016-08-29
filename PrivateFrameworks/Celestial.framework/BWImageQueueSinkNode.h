/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWImageQueueSinkNode : BWSinkNode {
    NSMutableArray * _bufferIDsInQueue;
    unsigned long long  _enqueuedBufferContextCount;
    struct _EnqueuedBufferContext {} ** _enqueuedBufferContexts;
    NSObject<OS_os_transaction> * _holdingBuffersForClientAssertion;
    struct _CAImageQueue { } * _imageQueue;
    unsigned int  _imageQueueCapacity;
    unsigned int  _imageQueueFreeSlots;
    unsigned int  _imageQueueHeight;
    unsigned int  _imageQueueSlot;
    unsigned int  _imageQueueWidth;
    double  _lastDisplayTime;
    double  _lastFramePTS;
    unsigned long long  _numFramesReceived;
    struct OpaqueFigPreviewSynchronizer { } * _previewSynchronizer;
    <BWImageQueueSinkNodePreviewTapDelegate> * _previewTapDelegate;
    bool  _resetPreviewSynchronizerOnNextFrame;
    unsigned long long * _sharedBufferIDs;
    unsigned long long  _sharedSurfaceCount;
    NSMutableArray * _sharedSurfaces;
    bool  _surfaceRegistrationComplete;
    struct OpaqueFigSimpleMutex { } * _surfaceRegistrationMutex;
    int  _syncStrategy;
    bool  _useGlobalIOSurfaces;
}

@property (nonatomic, readonly) struct _CAImageQueue { }*imageQueue;
@property (nonatomic, readonly) unsigned int imageQueueSlot;
@property (nonatomic) <BWImageQueueSinkNodePreviewTapDelegate> *previewTapDelegate;

+ (void)initialize;

- (unsigned long long)_bufferIDForSurface:(struct __IOSurface { }*)arg1;
- (void)_cleanupIOSurfaces;
- (/* Warning: unhandled struct encoding: '{_EnqueuedBufferContext=^{opaqueCMSampleBuffer}Q@}' */ struct _EnqueuedBufferContext { struct opaqueCMSampleBuffer {} *x1; unsigned long long x2; id x3; }*)_contextForBuffer:(struct opaqueCMSampleBuffer { }*)arg1 node:(id)arg2 bufferId:(unsigned long long)arg3;
- (double)_displayTimeSyncedWithFramePTS:(double)arg1;
- (void)_ensureImageQueue;
- (void)_releaseBufferContext:(/* Warning: unhandled struct encoding: '{_EnqueuedBufferContext=^{opaqueCMSampleBuffer}Q@}' */ struct _EnqueuedBufferContext { struct opaqueCMSampleBuffer {} *x1; unsigned long long x2; id x3; }*)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (bool)hasNonLiveConfigurationChanges;
- (struct _CAImageQueue { }*)imageQueue;
- (unsigned int)imageQueueSlot;
- (id)initWithHFRSupport:(bool)arg1;
- (void)inputConnectionWillBeEnabled;
- (void)makeCurrentConfigurationLive;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)previewTapDelegate;
- (void)registerSurfacesFromSourcePool:(id)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setPreviewTapDelegate:(id)arg1;
- (void)setSyncStrategy:(int)arg1;
- (int)syncStrategy;

@end
