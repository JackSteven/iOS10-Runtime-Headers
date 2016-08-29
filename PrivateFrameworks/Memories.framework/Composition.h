/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface Composition : NSObject {
    id /* block */  _compositionDuckingTimesCreationBlock;
    float  _dynamicScale;
    bool  _fullScreen;
    bool  _fullScreenPlaybackOnExternalDisplay;
    bool  _hasMemoryConstraints;
    bool  _isDynamicPlayBack;
    bool  _isExporting;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
    CompositionTrackGroup * m_alternativeTrackGroupA;
    CompositionTrackGroup * m_alternativeTrackGroupB;
    NSMutableDictionary * m_assetsUsed;
    AVMutableAudioMix * m_audioMix;
    NSMutableArray * m_audioMixParameters;
    AVMutableCompositionTrack * m_audioWorkaroundEmptyTrack;
    AVMutableComposition * m_avComposition;
    AVPlayerItem * m_avPlayerItem;
    long long  m_backgroundAudioTrackCount;
    CompositionTrackGroup * m_backgroundAudioTrackGroup;
    CompositionDuckingTimes * m_compositionDuckingTimes;
    CompositionTrackGroup * m_cutawayTrackGroup;
    NSArray * m_editList;
    long long  m_foregroundAudioTrackCount;
    CompositionTrackGroup * m_foregroundAudioTrackGroup;
    float  m_globalAudioVolume;
    struct CGSize { 
        double width; 
        double height; 
    }  m_previousRenderSize;
    Project * m_project;
    unsigned int  m_setNeedsUpdate;
    CompositionTrackGroup * m_trackGroupA;
    CompositionTrackGroup * m_trackGroupB;
    CompositionTrackGroup * m_transitionAudioTrackGroup;
    NSArray * m_transitionInputs;
    bool  m_useShortenedCompositionToEditClip;
    AVMutableVideoComposition * m_videoComposition;
    NSMutableArray * m_videoCompositionInstructions;
    int  m_videotrackAStartAt;
    int  m_videotrackBStartAt;
}

@property (nonatomic, readonly) AVMutableComposition *AVComposition;
@property (nonatomic, readonly) AVMutableAudioMix *audioMix;
@property (nonatomic, retain) CompositionDuckingTimes *compositionDuckingTimes;
@property (nonatomic, copy) id /* block */ compositionDuckingTimesCreationBlock;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic) float dynamicScale;
@property (nonatomic) NSArray *editList;
@property (nonatomic) bool fullScreen;
@property (nonatomic) bool fullScreenPlaybackOnExternalDisplay;
@property (nonatomic) float globalAudioVolume;
@property (nonatomic) bool hasMemoryConstraints;
@property (nonatomic) bool isDynamicPlayBack;
@property (nonatomic) bool isExporting;
@property (nonatomic, readonly) AVPlayerItem *playerItem;
@property (nonatomic, readonly) Project *project;
@property (nonatomic, retain) NSArray *transitionInputs;
@property (nonatomic) bool useShortenedCompositionToEditClip;
@property (nonatomic, readonly) AVMutableVideoComposition *videoComposition;
@property (nonatomic, readonly) int videotrackAStartAt;
@property (nonatomic, readonly) int videotrackBStartAt;
@property (nonatomic) struct CGSize { double x1; double x2; } viewSize;

- (id)AVComposition;
- (bool)CARenderingRequiredForClip:(id)arg1;
- (void)addAudioPointsToArray:(id)arg1 atFrameTime:(int)arg2 volume:(double)arg3;
- (void)addBackTracksIfRemoved;
- (void)addCutaway:(id)arg1 toInstruction:(id)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 underlayTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;
- (void)addIntersectingCutaways:(id)arg1 toInstruction:(id)arg2;
- (void)addTitleSoundsForState:(id)arg1;
- (void)addTransitionSoundsForState:(id)arg1;
- (void)addVideoInstructionsForTransition:(id)arg1 forRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 toInstructions:(id)arg3 previousTrackID:(int)arg4 previousClip:(id)arg5 previousClipRequiresCA:(bool)arg6 nextTrackID:(int)arg7 nextClip:(id)arg8 nextClipRequiresCA:(bool)arg9 cutawaysIntersection:(id)arg10;
- (bool)addVolumeRampToTrackGroup:(id)arg1 forClip:(id)arg2 shouldUseDucking:(bool)arg3;
- (void)applyPlayerItemProperties;
- (bool)assembleAudioCompositionTrackGroups:(id*)arg1 destinationTrackGroupCount:(long long)arg2 audioItem:(id)arg3 clip:(id)arg4 shouldUseDucking:(bool)arg5 shouldLoopClipContents:(bool)arg6;
- (void)assetUsed:(id)arg1;
- (id)audioMix;
- (void)burnInPlaybackSettings:(id)arg1;
- (void)checkIt:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (void)clearPlayerItemProperties;
- (id)compositionDuckingTimes;
- (id /* block */)compositionDuckingTimesCreationBlock;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })compositionItemsForState:(id)arg1 compositionItem:(id*)arg2 backfillCompositionItem:(id*)arg3;
- (bool)cutIsContiguous:(id)arg1 transition:(id)arg2 next:(id)arg3;
- (id)cutawaysIntersectingWithClip:(id)arg1 previousTransition:(id)arg2 nextTransition:(id)arg3 cutaways:(id)arg4;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (float)dynamicScale;
- (id)editList;
- (bool)emptySegments:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })extensionForTransitionsSupportingEatLeftRight:(id)arg1 leftSideOfTransition:(bool)arg2 splitClip:(bool*)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fadeToBlackDurationCMTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fadeToBlackStartCMTime;
- (void)finalizeVideoComposition;
- (bool)fullScreen;
- (bool)fullScreenPlaybackOnExternalDisplay;
- (float)globalAudioVolume;
- (bool)hasMemoryConstraints;
- (id)init;
- (bool)insertASilentAudioTrackAsWorkaround;
- (id)instructionToHideTrackID:(int)arg1 whileHidingTrackID:(int)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 requiresCARendering:(bool)arg4;
- (id)instructionToShowClip:(id)arg1 withTrackID:(int)arg2 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg4 requiresCARendering:(bool)arg5 isFreezeFrame:(bool)arg6 applyTitleEffect:(bool)arg7;
- (id)instructionToShowImageWithClip:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 requiresCARendering:(bool)arg4 applyTitleEffect:(bool)arg5;
- (id)instructionToTransitionTracksForRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 requiresCARendering:(bool)arg2 incomingClipIsNarrower:(bool)arg3 incomingClipRequiresBG:(bool)arg4 outgoingClipRequiresBG:(bool)arg5 incomingClipIsZoomed:(bool)arg6 outgoingClipIsZoomed:(bool)arg7 transitionClip:(id)arg8 applyTitleEffect:(bool)arg9;
- (bool)isDynamicPlayBack;
- (bool)isExporting;
- (void)logAddedTrack:(id)arg1 trackID:(int)arg2;
- (void)logRemovedTrack:(id)arg1 trackID:(int)arg2;
- (void)lowerDynamicResolution;
- (id)makeAudioPointsArrayForClip:(id)arg1 shouldUseDuckingArrays:(bool)arg2;
- (void)markDirty;
- (struct CGSize { double x1; double x2; })naturalSizeForClipAfterTransform:(id)arg1;
- (id)newInstructionGraphNodeForClip:(id)arg1 clipTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 compositionTrackID:(int)arg3 requiresTweening:(bool*)arg4 isContainedClip:(bool)arg5 applyTitleEffect:(bool)arg6;
- (id)newInstructionGraphNodeForClipTitleEffect:(id)arg1 inputIGNode:(id)arg2;
- (id)newInstructionGraphNodeToShowGeneratorClip:(id)arg1;
- (id)newInstructionGraphNodeToShowImageWithClip:(id)arg1 clipTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 isContainedClip:(bool)arg3;
- (id)newInstructionGraphNodeToShowIrisMovieClip:(id)arg1 clipTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 compositionTrackID:(int)arg3 requiresTweening:(bool*)arg4 applyTitleEffect:(bool)arg5;
- (id)newInstructionGraphNodeToShowKenBurnsEffect:(id)arg1 withInfo:(id)arg2 inputNode:(id)arg3;
- (id)newInstructionGraphNodeToShowMovieClip:(id)arg1 clipTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 compositionTrackID:(int)arg3;
- (id)newInstructionGraphNodeToShowMultiUpClip:(id)arg1 clipTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 compositionTrackID:(int)arg3 requiresTweening:(bool*)arg4 applyTitleEffect:(bool)arg5;
- (void)noteEffectChanged:(id)arg1;
- (int)outputFrameRate;
- (float)percentBetweenRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 forTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 firstRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg3 secondRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg4;
- (id)playerItem;
- (void)playerItemDidReachEnd:(id)arg1;
- (id)project;
- (void)raiseDynamicResolution;
- (void)rebuildCompositionInstructionsForClip:(id)arg1;
- (void)rebuildCompositionInstructionsForMovieKenBurnsExtra:(id)arg1;
- (void)refresh:(id)arg1;
- (void)refreshCompositionInstructionsWithinRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)removeEmptyTracks;
- (void)removeTrackFromAudioMix:(int)arg1;
- (bool)removeTrackIfEmpty:(id)arg1;
- (void)setCompositionDuckingTimes:(id)arg1;
- (void)setCompositionDuckingTimesCreationBlock:(id /* block */)arg1;
- (void)setDynamicPlayBack:(bool)arg1;
- (void)setDynamicScale:(float)arg1;
- (void)setEditList:(id)arg1;
- (void)setFullScreen:(bool)arg1;
- (void)setFullScreenPlaybackOnExternalDisplay:(bool)arg1;
- (void)setGlobalAudioVolume:(float)arg1;
- (void)setHasMemoryConstraints:(bool)arg1;
- (void)setIsDynamicPlayBack:(bool)arg1;
- (void)setIsExporting:(bool)arg1;
- (void)setProject:(id)arg1 frameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 viewSize:(struct CGSize { double x1; double x2; })arg3 forFullScreen:(bool)arg4;
- (void)setRenderScale;
- (void)setTransitionInputs:(id)arg1;
- (void)setUseShortenedCompositionToEditClip:(bool)arg1;
- (void)setViewSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldInsertASilentAudioTrackAsWorkaround;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })sourceTimeRangeForAudioClip:(id)arg1 endOfComposition:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })sourceTimeRangeForClip:(id)arg1 endOfComposition:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 projectStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3;
- (id)splitCompositionInstruction:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 options:(int)arg3;
- (void)splitCompositionInstructionListAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 options:(int)arg2;
- (id)splitCompositionState:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)splitCompositionState:(id)arg1 forCutaways:(id)arg2 searchIndex:(int*)arg3 projectDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRangeForClipIncludingTransitions:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForCutaway:(id)arg1 underlayTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg2 forSize:(struct CGSize { double x1; double x2; })arg3;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformKBForVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)transitionBottomTrack;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })transitionExtensionForClip:(id)arg1 left:(bool)arg2 splitClip:(bool*)arg3;
- (id)transitionInputs;
- (id)transitionTopTrack;
- (void)update;
- (void)updateBackgroundAudioCompositionTracks:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)updateCutawayCompositionTracks:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)updateForegroundAudioCompositionTracks:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)updateInstructionsWithTitles:(id)arg1;
- (void)updateVideoAndAudioInstructionForState:(id)arg1 cutSwaped:(bool)arg2 originalState:(id)arg3;
- (bool)useShortenedCompositionToEditClip;
- (bool)validate;
- (id)videoComposition;
- (int)videotrackAStartAt;
- (int)videotrackBStartAt;
- (struct CGSize { double x1; double x2; })viewSize;
- (float)volumeForClip:(id)arg1;
- (bool)writeVolumeRampToCompositionFromTrackGroup:(id)arg1 endOfComposition:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

@end
