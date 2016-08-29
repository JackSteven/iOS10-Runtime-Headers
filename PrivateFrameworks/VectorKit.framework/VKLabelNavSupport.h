/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelNavSupport : NSObject {
    struct vector<std::__1::shared_ptr<md::NavLabel>, std::__1::allocator<std::__1::shared_ptr<md::NavLabel> > > { 
        struct shared_ptr<md::NavLabel> {} *__begin_; 
        struct shared_ptr<md::NavLabel> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<md::NavLabel> *, std::__1::allocator<std::__1::shared_ptr<md::NavLabel> > > { 
            struct shared_ptr<md::NavLabel> {} *__first_; 
        } __end_cap_; 
    }  _activeSigns;
    struct unique_ptr<VKLabelNavArtworkCache, std::__1::default_delete<VKLabelNavArtworkCache> > { 
        struct __compressed_pair<VKLabelNavArtworkCache *, std::__1::default_delete<VKLabelNavArtworkCache> > { 
            struct VKLabelNavArtworkCache {} *__first_; 
        } __ptr_; 
    }  _artworkCache;
    bool  _checkIfRouteSubrangeChanged;
    bool  _checkOnRouteLabelsAlignment;
    unsigned long long  _countVisibleOffRouteRoadSigns;
    unsigned long long  _countVisibleOnRouteRoadSigns;
    unsigned long long  _countVisibleRoadSigns;
    NSString * _currentLocationText;
    NSString * _currentRoadName;
    long long  _currentRoadNameIndex;
    struct shared_ptr<md::NavCurrentRoadSign> { 
        struct NavCurrentRoadSign {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _currentRoadSign;
    NSString * _currentShieldGroup;
    unsigned long long  _debugCachedMaxVisibleOffRouteRoadSigns;
    unsigned long long  _debugCachedMaxVisibleOnRouteRoadSigns;
    bool  _debugDisableRoadSignLimit;
    bool  _debugEnableShieldsOnRouteLine;
    bool  _disableTileParseForOneLayout;
    bool  _drawRoadSigns;
    NSMutableArray * _fadingLabels;
    NSMutableArray * _guidanceStepInfos;
    bool  _isOnRoute;
    NSMutableArray * _junctions;
    unsigned long long  _maxOnRoadGraphRoadSigns;
    unsigned long long  _maxVisibleOffRouteRoadSigns;
    unsigned long long  _maxVisibleOnRouteRoadSigns;
    unsigned long long  _maxVisibleRoadSigns;
    float  _minSignOffsetDistance;
    unsigned long long  _minVisibleOffRoadGraphRoadSigns;
    unsigned long long  _minVisibleProceedToRouteRoadSigns;
    unsigned char  _navMapMode;
    bool  _needsLayout;
    NSMutableSet * _pendingTiles;
    bool  _preferRightSideLabelPlacement;
    VKLabelNavRoadGraph * _roadGraph;
    NSMutableSet * _roadNamesInGuidance;
    VKPolylineOverlayPainter * _route;
    NSMutableArray * _routeRoadInfos;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeSubrangeEnd;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeSubrangeStart;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeUserOffset;
    unsigned long long  _stepIndex;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { 
        struct StylesheetManager<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleManager;
    NSMutableSet * _tiles;
    bool  _useRouteSubrange;
    NSMutableArray * _visibleLabels;
    NSMutableDictionary * _visibleLabelsByName;
}

@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<md::NavLabel>' */ struct *activeSigns; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<md::NavLabel> > >=^{shared_ptr<md::NavLabel>}}} */
@property (nonatomic, retain) NSString *currentLocationText;
@property (nonatomic, retain) NSString *currentRoadName;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{NavCurrentRoadSign=^^?{basic_string<char' */ struct *currentRoadSign; /* unknown property attribute:  1>=[2f]}}BBBfBBf} */
@property (nonatomic, readonly) float currentRoadSignPixelHeight;
@property (nonatomic, retain) NSString *currentShieldGroup;
@property (nonatomic) bool debugDisableRoadSignLimit;
@property (nonatomic) bool debugEnableShieldsOnRouteLine;
@property (nonatomic) bool drawRoadSigns;
@property (nonatomic) unsigned char navMapMode;
@property (nonatomic, readonly) bool needsLayout;
@property (nonatomic, retain) VKPolylineOverlayPainter *route;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeUserOffset;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_addJunctionsForTile:(id)arg1;
- (void)_addLabelsAtJunctions:(id)arg1 withContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg2 maxLabelsToAdd:(unsigned long long)arg3;
- (void)_addLabelsForJunctions:(id)arg1 withContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg2 maxLabelsToAdd:(unsigned long long)arg3 useAllJunctions:(bool)arg4 placeShieldsFrontToBack:(bool)arg5;
- (bool)_collideLabel:(id)arg1 activeLabel:(id)arg2 labelsToRemove:(id)arg3;
- (void)_createOrUpdateLabelForRoad:(id)arg1 isShield:(bool)arg2 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg3;
- (bool)_findRouteOverlappingJunctionFrom:(long long)arg1 routeJunctions:(struct vector<RouteJunctionInfo, std::__1::allocator<RouteJunctionInfo> > { struct RouteJunctionInfo {} *x1; struct RouteJunctionInfo {} *x2; struct __compressed_pair<RouteJunctionInfo *, std::__1::allocator<RouteJunctionInfo> > { struct RouteJunctionInfo {} *x_3_1_1; } x3; }*)arg2 lookBackward:(bool)arg3 firstOverlap:(long long*)arg4 secondOverlap:(long long*)arg5;
- (void)_generateCurrentRoadSignWithContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg1;
- (void)_initalizeCurrentRoadInfo;
- (void)_refreshGuidanceRoadNames;
- (void)_reloadRouteJunctions;
- (void)_tryAddLabel:(id)arg1 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg2 labelCollisionEnabled:(bool)arg3;
- (void)_tryAddRoadSignForJunction:(id)arg1 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg2 labelCollisionEnabled:(bool)arg3;
- (void)_tryAddRoadSignForRoad:(id)arg1 isShield:(bool)arg2 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg3 labelCollisionEnabled:(bool)arg4;
- (bool)_updateActiveRouteRange;
- (void)_updateCurrentRoadInfo;
- (void)_updatePreferredLabelPlacements;
- (void)_updateRoadStarts;
- (void)_updateRoadsInGuidance;
- (void)_updateUniqueOffRouteRoads;
- (const struct vector<std::__1::shared_ptr<md::NavLabel>, std::__1::allocator<std::__1::shared_ptr<md::NavLabel> > > { struct shared_ptr<md::NavLabel> {} *x1; struct shared_ptr<md::NavLabel> {} *x2; struct __compressed_pair<std::__1::shared_ptr<md::NavLabel> *, std::__1::allocator<std::__1::shared_ptr<md::NavLabel> > > { struct shared_ptr<md::NavLabel> {} *x_3_1_1; } x3; }*)activeSigns;
- (void)clearSceneIsMemoryWarning:(bool)arg1;
- (unsigned char)computeRoutePositionForPOIAtPixel:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 currentPosition:(unsigned char)arg2 context:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg3;
- (id)currentLocationText;
- (id)currentRoadName;
- (struct NavCurrentRoadSign { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > { struct StylesheetQuery<gss::PropertyID> {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; struct { bool x_4_1_1; bool x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; struct NavLabelPart {} *x5; struct Mercator2<double> { double x_6_1_1[2]; } x6; struct Matrix<float, 2, 1> { float x_7_1_1[2]; } x7; struct Matrix<float, 2, 1> { float x_8_1_1[2]; } x8; struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_2_1[2]; } x_9_1_1; struct Matrix<float, 2, 1> { float x_2_2_1[2]; } x_9_1_2; } x9; }*)currentRoadSign;
- (float)currentRoadSignPixelHeight;
- (id)currentShieldGroup;
- (void)dealloc;
- (bool)debugDisableRoadSignLimit;
- (bool)debugEnableShieldsOnRouteLine;
- (bool)drawRoadSigns;
- (void)grabTilesFromScene:(id)arg1;
- (id)init;
- (bool)isNavMode;
- (void)layoutWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg1;
- (unsigned char)navMapMode;
- (bool)needsLayout;
- (unsigned char)orientationForRoadSign:(id)arg1 roadLabel:(id)arg2 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg3;
- (id)route;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeUserOffset;
- (void)setCurrentLocationText:(id)arg1;
- (void)setCurrentRoadName:(id)arg1;
- (void)setCurrentShieldGroup:(id)arg1;
- (void)setDebugDisableRoadSignLimit:(bool)arg1;
- (void)setDebugEnableShieldsOnRouteLine:(bool)arg1;
- (void)setDrawRoadSigns:(bool)arg1;
- (void)setNavMapMode:(unsigned char)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteUserOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)stylesheetDidChange;

@end
