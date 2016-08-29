/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDFPSCounter : NSObject {
    double  _endTimeInterval;
    unsigned long long  _frameCount;
    NSMutableArray * _sampleArray;
    double  _startTimeInterval;
}

- (void)addFrame;
- (void)addFrameAtDrawTime:(double)arg1;
- (void)addFrameAtDrawTime:(double)arg1 duration:(double)arg2;
- (void)dealloc;
- (id)formatInfoForLog:(id)arg1 identifier:(id)arg2 type:(id)arg3 testName:(id)arg4 direction:(id)arg5 duration:(double)arg6 graphing:(bool)arg7 slide:(long long)arg8;
- (id)fpsGraphString;
- (id)fpsSummaryString;
- (id)init;
- (id)p_fpsInfo:(bool)arg1;
- (id)p_fpsSummaryStringIncludingGraph:(bool)arg1;
- (id)p_modeFromArray:(id)arg1;
- (double)p_standardDeviationFromArray:(id)arg1 mean:(double)arg2;
- (void)reset;

@end
