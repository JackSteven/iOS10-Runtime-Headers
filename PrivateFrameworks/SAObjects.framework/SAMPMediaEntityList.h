/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAMPCollection;

@interface SAMPMediaEntityList : SAAbstractItemList  {
}

@property int mediaType;
@property(retain) SAMPCollection * parentCollection;

+ (id)mediaEntityListWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mediaEntityList;

- (void)setParentCollection:(id)arg1;
- (id)parentCollection;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setMediaType:(int)arg1;
- (int)mediaType;
- (id)groupIdentifier;

@end