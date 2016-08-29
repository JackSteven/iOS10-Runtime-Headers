/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding> {
    bool  __isATVStyle;
    bool  __isAutomaticStyle;
    _UIVisualEffectConfig * _effectConfig;
    _UIBackdropViewSettings * _effectSettings;
}

@property (nonatomic, readonly) bool _isATVStyle;
@property (nonatomic, readonly) bool _isAutomaticStyle;
@property (nonatomic, readonly) _UIVisualEffectConfig *effectConfig;
@property (nonatomic, readonly) _UIBackdropViewSettings *effectSettings;
@property (nonatomic, readonly) bool hu_isVibrancyEffect;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isATVStyle;
- (bool)_isAutomaticStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectConfig;
- (id)effectConfigForQuality:(long long)arg1;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (id)effectSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (bool)hu_isVibrancyEffect;

@end
