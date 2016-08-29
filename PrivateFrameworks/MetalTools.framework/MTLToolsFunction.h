/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsFunction : MTLToolsObject <MTLFunctionSPI> {
    MTLToolsPointerArray * _functions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly, copy) NSString *filePath;
@property (readonly) NSDictionary *functionConstantsDictionary;
@property (readonly) unsigned long long functionType;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) long long lineNumber;
@property (readonly) NSString *name;
@property (readonly) long long patchControlPointCount;
@property (readonly) unsigned long long patchType;
@property (readonly) NSArray *stageInputAttributes;
@property (readonly) Class superclass;
@property (readonly) NSArray *vertexAttributes;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (void)dealloc;
- (id)device;
- (id)filePath;
- (id)functionConstantsDictionary;
- (unsigned long long)functionType;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 functions:(id)arg3;
- (id)initWithBaseObject:(id)arg1 strongParent:(id)arg2 functions:(id)arg3;
- (id)label;
- (long long)lineNumber;
- (id)name;
- (long long)patchControlPointCount;
- (unsigned long long)patchType;
- (void)setLabel:(id)arg1;
- (id)stageInputAttributes;
- (id)vertexAttributes;

@end
