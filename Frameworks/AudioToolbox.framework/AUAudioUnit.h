/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AUAudioUnit : NSObject {
    bool  _allParameterValues;
    struct UIViewController { Class x1; } * _cachedViewController;
    bool  _canProcessInPlace;
    NSArray * _channelMap;
    struct OpaqueAudioComponent { } * _component;
    struct AudioComponentDescription { 
        unsigned int componentType; 
        unsigned int componentSubType; 
        unsigned int componentManufacturer; 
        unsigned int componentFlags; 
        unsigned int componentFlagsMask; 
    }  _componentDescription;
    NSString * _componentName;
    unsigned int  _componentVersion;
    NSString * _contextName;
    AUAudioUnitPreset * _currentPreset;
    NSArray * _factoryPresets;
    double  _latency;
    unsigned int  _maximumFramesToRender;
    id /* block */  _musicalContextBlock;
    struct RealtimeState { 
        struct CAMutex { 
            int (**_vptr$CAMutex)(); 
            char *mName; 
            struct _opaque_pthread_t {} *mOwner; 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } mMutex; 
        } mMutex; 
        struct RenderObserverList { 
            struct TThreadSafeList<RenderObserver> { 
                struct NodeStack { 
                    struct Node {} *mHead; 
                } mActiveList; 
                struct NodeStack { 
                    struct Node {} *mHead; 
                } mPendingList; 
                struct NodeStack { 
                    struct Node {} *mHead; 
                } mFreeList; 
            } mObservers; 
            bool mTouched; 
        } renderObserverList; 
        struct AUEventSchedule { 
            struct AURenderEventAllocator {} *mAllocator; 
            struct TAtomicStack<AURenderEventStruct> { 
                struct AURenderEventStruct {} *mHead; 
            } mAddedEventStack; 
            union { /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_0_2_1; void*x_0_2_2; void*x_0_2_3; in double x_0_2_4; void*x_0_2_5; const void*x_0_2_6; void x_0_2_7; void*x_0_2_8; in void*x_0_2_9; } *mScheduleHead; 
            AUAudioUnit *mOwningAU; 
        } eventSchedule; 
    }  _realtimeState;
    long long  _renderQuality;
    bool  _renderResourcesAllocated;
    bool  _renderingOffline;
    bool  _shouldBypassEffect;
    bool  _supportsMPE;
    double  _tailTime;
    id /* block */  _transportStateBlock;
    long long  _virtualMIDICableCount;
}

@property (nonatomic, readonly) bool allParameterValues;
@property (nonatomic, readonly, copy) NSString *audioUnitName;
@property (nonatomic, readonly) bool canProcessInPlace;
@property (nonatomic, readonly, copy) NSArray *channelCapabilities;
@property (nonatomic, copy) NSArray *channelMap;
@property (nonatomic, readonly) struct OpaqueAudioComponent { }*component;
@property (nonatomic, readonly) struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } componentDescription;
@property (nonatomic, readonly, copy) NSString *componentName;
@property (nonatomic, readonly) unsigned int componentVersion;
@property (nonatomic, copy) NSString *contextName;
@property (nonatomic, retain) AUAudioUnitPreset *currentPreset;
@property (nonatomic, readonly, copy) NSArray *factoryPresets;
@property (nonatomic, copy) NSDictionary *fullState;
@property (nonatomic, copy) NSDictionary *fullStateForDocument;
@property (nonatomic, readonly) AUAudioUnitBusArray *inputBusses;
@property (nonatomic, readonly) double latency;
@property (nonatomic, readonly, copy) NSString *manufacturerName;
@property (nonatomic) unsigned int maximumFramesToRender;
@property (getter=isMusicDeviceOrEffect, nonatomic, readonly) bool musicDeviceOrEffect;
@property (nonatomic, copy) id /* block */ musicalContextBlock;
@property (nonatomic, readonly) AUAudioUnitBusArray *outputBusses;
@property (nonatomic, readonly) AUParameterTree *parameterTree;
@property (nonatomic) struct RealtimeState { struct CAMutex { int (**x_1_1_1)(); char *x_1_1_2; struct _opaque_pthread_t {} *x_1_1_3; struct _opaque_pthread_mutex_t { long long x_4_2_1; BOOL x_4_2_2[56]; } x_1_1_4; } x1; struct RenderObserverList { struct TThreadSafeList<RenderObserver> { struct NodeStack { struct Node {} *x_1_3_1; } x_1_2_1; struct NodeStack { struct Node {} *x_2_3_1; } x_1_2_2; struct NodeStack { struct Node {} *x_3_3_1; } x_1_2_3; } x_2_1_1; bool x_2_1_2; } x2; struct AUEventSchedule { struct AURenderEventAllocator {} *x_3_1_1; struct TAtomicStack<AURenderEventStruct> { struct AURenderEventStruct {} *x_2_2_1; } x_3_1_2; union { /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_3_2_1; void*x_3_2_2; void*x_3_2_3; in double x_3_2_4; void*x_3_2_5; const void*x_3_2_6; void x_3_2_7; void*x_3_2_8; in void*x_3_2_9; } *x_3_1_3; id x_3_1_4; } x3; } realtimeState;
@property (nonatomic, readonly) id /* block */ renderBlock;
@property (nonatomic) long long renderQuality;
@property (nonatomic, readonly) bool renderResourcesAllocated;
@property (getter=isRenderingOffline, nonatomic) bool renderingOffline;
@property (nonatomic, readonly) id /* block */ scheduleMIDIEventBlock;
@property (nonatomic, readonly) id /* block */ scheduleParameterBlock;
@property (nonatomic) bool shouldBypassEffect;
@property (nonatomic, readonly) bool supportsMPE;
@property (nonatomic, readonly) double tailTime;
@property (nonatomic, copy) id /* block */ transportStateBlock;
@property (nonatomic, readonly) long long virtualMIDICableCount;

+ (id)auAudioUnitForAudioUnit:(struct OpaqueAudioComponentInstance { }*)arg1;
+ (void)instantiateWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
+ (id)keyPathsForValuesAffectingAllParameterValues;
+ (void)registerSubclass:(Class)arg1 asComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg2 name:(id)arg3 version:(unsigned int)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addRenderObserver:(int (*)arg1 userData:(void*)arg2;
- (bool)allParameterValues;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (id)audioUnitName;
- (struct UIViewController { Class x1; }*)cachedViewController;
- (bool)canProcessInPlace;
- (id)channelCapabilities;
- (id)channelMap;
- (struct OpaqueAudioComponent { }*)component;
- (struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })componentDescription;
- (id)componentName;
- (unsigned int)componentVersion;
- (id)contextName;
- (id)currentPreset;
- (void)dealloc;
- (void)deallocateRenderResources;
- (struct AUEventSchedule { struct AURenderEventAllocator {} *x1; struct TAtomicStack<AURenderEventStruct> { struct AURenderEventStruct {} *x_2_1_1; } x2; union { /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_3_1_1; void*x_3_1_2; void*x_3_1_3; in double x_3_1_4; void*x_3_1_5; const void*x_3_1_6; void x_3_1_7; void*x_3_1_8; in void*x_3_1_9; } *x3; id x4; }*)eventSchedule;
- (id)factoryPresets;
- (id)fullState;
- (id)fullStateForDocument;
- (id)init;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 error:(id*)arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)inputBusses;
- (id /* block */)internalRenderBlock;
- (bool)isMusicDeviceOrEffect;
- (bool)isRenderingOffline;
- (double)latency;
- (id)manufacturerName;
- (unsigned int)maximumFramesToRender;
- (id /* block */)musicalContextBlock;
- (id)outputBusses;
- (id)parameterTree;
- (id)parametersForOverviewWithCount:(long long)arg1;
- (struct RealtimeState { struct CAMutex { int (**x_1_1_1)(); char *x_1_1_2; struct _opaque_pthread_t {} *x_1_1_3; struct _opaque_pthread_mutex_t { long long x_4_2_1; BOOL x_4_2_2[56]; } x_1_1_4; } x1; struct RenderObserverList { struct TThreadSafeList<RenderObserver> { struct NodeStack { struct Node {} *x_1_3_1; } x_1_2_1; struct NodeStack { struct Node {} *x_2_3_1; } x_1_2_2; struct NodeStack { struct Node {} *x_3_3_1; } x_1_2_3; } x_2_1_1; bool x_2_1_2; } x2; struct AUEventSchedule { struct AURenderEventAllocator {} *x_3_1_1; struct TAtomicStack<AURenderEventStruct> { struct AURenderEventStruct {} *x_2_2_1; } x_3_1_2; union { /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_3_2_1; void*x_3_2_2; void*x_3_2_3; in double x_3_2_4; void*x_3_2_5; const void*x_3_2_6; void x_3_2_7; void*x_3_2_8; in void*x_3_2_9; } *x_3_1_3; id x_3_1_4; } x3; })realtimeState;
- (void)removeRenderObserver:(long long)arg1;
- (void)removeRenderObserver:(int (*)arg1 userData:(void*)arg2;
- (id /* block */)renderBlock;
- (long long)renderQuality;
- (bool)renderResourcesAllocated;
- (void)requestViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)reset;
- (id /* block */)scheduleMIDIEventBlock;
- (id /* block */)scheduleParameterBlock;
- (void)setCachedViewController:(struct UIViewController { Class x1; }*)arg1;
- (void)setChannelMap:(id)arg1;
- (void)setContextName:(id)arg1;
- (void)setCurrentPreset:(id)arg1;
- (void)setFullState:(id)arg1;
- (void)setFullStateForDocument:(id)arg1;
- (void)setMaximumFramesToRender:(unsigned int)arg1;
- (void)setMusicalContextBlock:(id /* block */)arg1;
- (void)setRealtimeState:(struct RealtimeState { struct CAMutex { int (**x_1_1_1)(); char *x_1_1_2; struct _opaque_pthread_t {} *x_1_1_3; struct _opaque_pthread_mutex_t { long long x_4_2_1; BOOL x_4_2_2[56]; } x_1_1_4; } x1; struct RenderObserverList { struct TThreadSafeList<RenderObserver> { struct NodeStack { struct Node {} *x_1_3_1; } x_1_2_1; struct NodeStack { struct Node {} *x_2_3_1; } x_1_2_2; struct NodeStack { struct Node {} *x_3_3_1; } x_1_2_3; } x_2_1_1; bool x_2_1_2; } x2; struct AUEventSchedule { struct AURenderEventAllocator {} *x_3_1_1; struct TAtomicStack<AURenderEventStruct> { struct AURenderEventStruct {} *x_2_2_1; } x_3_1_2; union { /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_3_2_1; void*x_3_2_2; void*x_3_2_3; in double x_3_2_4; void*x_3_2_5; const void*x_3_2_6; void x_3_2_7; void*x_3_2_8; in void*x_3_2_9; } *x_3_1_3; id x_3_1_4; } x3; })arg1;
- (void)setRenderQuality:(long long)arg1;
- (void)setRenderResourcesAllocated:(bool)arg1;
- (void)setRenderingOffline:(bool)arg1;
- (void)setShouldBypassEffect:(bool)arg1;
- (void)setTransportStateBlock:(id /* block */)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (bool)shouldBypassEffect;
- (bool)shouldChangeToFormat:(id)arg1 forBus:(id)arg2;
- (bool)supportsMPE;
- (double)tailTime;
- (long long)tokenByAddingRenderObserver:(id /* block */)arg1;
- (id /* block */)transportStateBlock;
- (id)valueForUndefinedKey:(id)arg1;
- (long long)virtualMIDICableCount;

@end
