/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCMutableNotificationOptions : NCNotificationOptions

@property (nonatomic) bool addToLockScreenWhenUnlocked;
@property (nonatomic, copy) NSSet *alertSuppressionContexts;
@property (nonatomic) bool alertsWhenLocked;
@property (nonatomic, copy) NSString *alternateActionLabel;
@property (nonatomic) bool canPlaySound;
@property (nonatomic) bool canTurnOnDisplay;
@property (nonatomic) bool coalescesWhenLocked;
@property (nonatomic) bool dismissAutomatically;
@property (nonatomic) bool hideClearActionInList;
@property (nonatomic) bool ignoreAttachmentImageThumbnailCrop;
@property (nonatomic) unsigned long long lockScreenPersistence;
@property (nonatomic) unsigned long long lockScreenPriority;
@property (nonatomic) unsigned long long messageNumberOfLines;
@property (nonatomic) bool overridesPocketMode;
@property (nonatomic) bool overridesQuietMode;
@property (nonatomic) bool preemptsPresentedNotification;
@property (nonatomic) unsigned long long realertCount;
@property (nonatomic) bool requestsFullScreenPresentation;
@property (nonatomic) bool revealsAdditionalContentOnPresentation;
@property (nonatomic) bool silencedByMenuButtonPress;
@property (nonatomic) bool suppressesAlertsWhenAppIsActive;
@property (nonatomic) bool suppressesMessageWhenLocked;
@property (nonatomic) bool suppressesSubtitleWhenLocked;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAddToLockScreenWhenUnlocked:(bool)arg1;
- (void)setAlertSuppressionContexts:(id)arg1;
- (void)setAlertsWhenLocked:(bool)arg1;
- (void)setAlternateActionLabel:(id)arg1;
- (void)setCanPlaySound:(bool)arg1;
- (void)setCanTurnOnDisplay:(bool)arg1;
- (void)setCoalescesWhenLocked:(bool)arg1;
- (void)setDismissAutomatically:(bool)arg1;
- (void)setHideClearActionInList:(bool)arg1;
- (void)setIgnoreAttachmentImageThumbnailCrop:(bool)arg1;
- (void)setLockScreenPersistence:(unsigned long long)arg1;
- (void)setLockScreenPriority:(unsigned long long)arg1;
- (void)setMessageNumberOfLines:(unsigned long long)arg1;
- (void)setOverridesPocketMode:(bool)arg1;
- (void)setOverridesQuietMode:(bool)arg1;
- (void)setPreemptsPresentedNotification:(bool)arg1;
- (void)setRealertCount:(unsigned long long)arg1;
- (void)setRequestsFullScreenPresentation:(bool)arg1;
- (void)setRevealsAdditionalContentOnPresentation:(bool)arg1;
- (void)setSilencedByMenuButtonPress:(bool)arg1;
- (void)setSuppressesAlertsWhenAppIsActive:(bool)arg1;
- (void)setSuppressesMessageWhenLocked:(bool)arg1;
- (void)setSuppressesSubtitleWhenLocked:(bool)arg1;

@end
