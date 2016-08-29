/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSCardItem : NSObject <NSCopying, NSSecureCoding> {
    NSData * _attachmentData;
    NSString * _body;
    NSString * _bundleName;
    NSString * _categoryIdentifier;
    NSData * _iconData;
    NSString * _identifier;
    bool  _requiresPasscode;
    UIImage * _thumbnail;
    NSString * _title;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSData *attachmentData;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *bundleName;
@property (nonatomic, copy) NSString *categoryIdentifier;
@property (nonatomic, copy) NSData *iconData;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool requiresPasscode;
@property (nonatomic, copy) UIImage *thumbnail;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachmentData;
- (id)body;
- (id)bundleName;
- (id)categoryIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)iconData;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 categoryIdentifier:(id)arg2 iconData:(id)arg3 title:(id)arg4 body:(id)arg5 requiresPasscode:(bool)arg6 bundleName:(id)arg7 attachmentData:(id)arg8 userInfo:(id)arg9;
- (id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 classification:(long long)arg5 bundleName:(id)arg6 userInfo:(id)arg7;
- (id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 requiresPasscode:(bool)arg5 bundleName:(id)arg6 attachmentData:(id)arg7 userInfo:(id)arg8;
- (id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 requiresPasscode:(bool)arg5 bundleName:(id)arg6 userInfo:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)requiresPasscode;
- (void)setAttachmentData:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setBundleName:(id)arg1;
- (void)setCategoryIdentifier:(id)arg1;
- (void)setIconData:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRequiresPasscode:(bool)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)sortDate;
- (id)thumbnail;
- (id)title;
- (id)userInfo;

@end
