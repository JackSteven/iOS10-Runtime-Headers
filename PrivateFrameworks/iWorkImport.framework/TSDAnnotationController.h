/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDAnnotationController : NSObject {
    <TSDAnnotationDelegate> * _delegate;
    TSKSelectionPath * _displayedAnnotationSelectionPath;
    bool  _isNavigatingAnnotations;
}

@property (nonatomic, readonly) unsigned long long annotationCount;
@property (nonatomic, readonly) NSString *annotationNavigationString;
@property (nonatomic) <TSDAnnotationDelegate> *delegate;
@property (nonatomic, retain) TSKSelectionPath *displayedAnnotationSelectionPath;
@property (nonatomic, readonly) unsigned long long filteredAnnotationCount;
@property (nonatomic, readonly) bool hasAnnotations;
@property (nonatomic) bool isNavigatingAnnotations;
@property (nonatomic) bool textSelectionChangeShouldDismissAnnotations;

+ (double)commentFontSize;
+ (id)commentPossibleFontSizes;

- (unsigned long long)annotationCount;
- (id)annotationMenuItemTextShowNext;
- (id)annotationMenuItemTextShowPrevious;
- (id)annotationNavigationString;
- (id)annotationToolTipTextGoToNext;
- (id)annotationToolTipTextGoToPrevious;
- (void)commitCommentText:(id)arg1 forAnnotation:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didShowAnnotation:(id)arg1;
- (id)displayedAnnotationSelectionPath;
- (unsigned long long)filteredAnnotationCount;
- (bool)hasAnnotations;
- (id)init;
- (void)invalidateAnnotationAuthors;
- (bool)isNavigatingAnnotations;
- (void)nextAnnotation:(id)arg1;
- (void)previousAnnotation:(id)arg1;
- (void)setAuthorFilter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedAnnotationSelectionPath:(id)arg1;
- (void)setIsNavigatingAnnotations:(bool)arg1;
- (void)setTextSelectionChangeShouldDismissAnnotations:(bool)arg1;
- (bool)textSelectionChangeShouldDismissAnnotations;
- (void)updateCurrentAnnotation:(id)arg1;
- (void)willShowAnnotation:(id)arg1;

@end
