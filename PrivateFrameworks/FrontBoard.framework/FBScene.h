/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBScene : NSObject <BSDescriptionProviding, FBSceneHost, FBUISceneUpdater> {
    <FBSceneClient> * _client;
    FBProcess * _clientProcess;
    <FBSceneClientProvider> * _clientProvider;
    FBSSceneClientSettings * _clientSettings;
    FBSSceneDefinition * _definition;
    <FBSceneDelegate> * _delegate;
    FBSDisplay * _display;
    NSHashTable * _geometryObservers;
    FBSceneHostManager * _hostManager;
    NSString * _identifier;
    FBSceneLayerManager * _layerManager;
    bool  _lockedForMutation;
    FBSMutableSceneSettings * _mutableSettings;
    FBSSceneSettings * _settings;
    unsigned long long  _transactionID;
    bool  _valid;
    bool  _waitingForResponse;
    NSString * _workspaceIdentifier;
}

@property (setter=_setLockedForMutation:, nonatomic) bool _lockedForMutation;
@property (nonatomic, readonly) unsigned long long _transactionID;
@property (nonatomic, readonly, retain) <FBSceneClient> *client;
@property (nonatomic, readonly, retain) FBProcess *clientProcess;
@property (nonatomic, readonly, retain) <FBSceneClientProvider> *clientProvider;
@property (nonatomic, readonly, retain) FBSSceneClientSettings *clientSettings;
@property (nonatomic, readonly, retain) FBWindowContextHostManager *contextHostManager;
@property (nonatomic, readonly, retain) FBWindowContextManager *contextManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) FBSSceneDefinition *definition;
@property (nonatomic) <FBSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) FBSDisplay *display;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) FBSceneHostManager *hostManager;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, retain) FBSceneLayerManager *layerManager;
@property (nonatomic, readonly, retain) FBSMutableSceneSettings *mutableSettings;
@property (nonatomic, readonly, copy) FBSSceneParameters *parameters;
@property (nonatomic, readonly, copy) NSString *sceneIdentifier;
@property (nonatomic, readonly, retain) FBSSceneSettings *settings;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (getter=isWaitingForResponse, nonatomic, readonly) bool waitingForResponse;
@property (nonatomic, readonly, copy) NSString *workspaceIdentifier;

- (void)_addSceneGeometryObserver:(id)arg1;
- (unsigned long long)_applyMutableSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)_dispatchClientMessageWithBlock:(id /* block */)arg1;
- (void)_invalidateWithTransitionContext:(id)arg1;
- (bool)_lockedForMutation;
- (void)_removeSceneGeometryObserver:(id)arg1;
- (void)_setLockedForMutation:(bool)arg1;
- (unsigned long long)_transactionID;
- (id)client;
- (void)client:(id)arg1 attachLayer:(id)arg2;
- (void)client:(id)arg1 detachLayer:(id)arg2;
- (void)client:(id)arg1 didReceiveActions:(id)arg2;
- (void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)client:(id)arg1 updateLayer:(id)arg2;
- (id)clientProcess;
- (id)clientProvider;
- (id)clientSettings;
- (void)clientWillInvalidate:(id)arg1;
- (id)contentView;
- (id)contextHostManager;
- (id)contextManager;
- (id)createSnapshot;
- (id)createSnapshotWithContext:(id)arg1;
- (long long)currentInterfaceOrientation;
- (void)dealloc;
- (id)debugDescription;
- (id)definition;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)display;
- (id)hostManager;
- (id)identifier;
- (id)initWithDefiniton:(id)arg1 initialParameters:(id)arg2 clientProvider:(id)arg3;
- (bool)isValid;
- (bool)isWaitingForResponse;
- (id)layerManager;
- (id)mutableSettings;
- (id)parameters;
- (id)sceneIdentifier;
- (void)sendActions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)settings;
- (id)snapshotContext;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)uiClientSettings;
- (id)uiSettings;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)updateSettingsWithBlock:(id /* block */)arg1;
- (void)updateSettingsWithTransitionBlock:(id /* block */)arg1;
- (void)updateUISettingsWithBlock:(id /* block */)arg1;
- (void)updateUISettingsWithTransitionBlock:(id /* block */)arg1;
- (id)workspaceIdentifier;

@end
