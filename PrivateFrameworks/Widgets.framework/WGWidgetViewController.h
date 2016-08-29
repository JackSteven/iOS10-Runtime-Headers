/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetViewController : UIViewController <WGWidgetExtensionVisibilityProviding, WGWidgetHostingViewControllerDelegate, WGWidgetHostingViewControllerHost> {
    <WGWidgetViewControllerDelegate> * _delegate;
    WGWidgetHostingViewController * _widgetHost;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WGWidgetViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) WGWidgetHostingViewController *widgetHost;

- (void).cxx_destruct;
- (void)_addWidgetButtonTapped:(id)arg1;
- (id)_shortLookViewIfLoaded;
- (id)_shortLookViewLoadingIfNecessary:(bool)arg1;
- (id)delegate;
- (id)initWithWidgetHost:(id)arg1;
- (bool)isWidgetExtensionVisible:(id)arg1;
- (long long)largestAvailableDisplayModeForWidget:(id)arg1;
- (void)loadView;
- (struct CGSize { double x1; double x2; })maxSizeForWidget:(id)arg1 forDisplayMode:(long long)arg2;
- (void)remoteViewControllerDidConnectForWidget:(id)arg1;
- (void)remoteViewControllerViewDidAppearForWidget:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWidgetHost:(id)arg1;
- (long long)userSpecifiedDisplayModeForWidget:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (id)widgetHost;

@end
