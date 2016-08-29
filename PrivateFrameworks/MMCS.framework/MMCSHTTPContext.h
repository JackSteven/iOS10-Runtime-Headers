/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

@interface MMCSHTTPContext : NSObject <NSStreamDelegate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionTaskDelegatePrivate> {
    struct os_activity_s { } * _activityMarker;
    MMCSBoundedQueue * _boundedQueue;
    struct __CFError { } * _customCertificatePinningError;
    NSURLSessionDataTask * _dataTask;
    bool  _didOpen;
    MMCSDuetReporter * _duetReporter;
    struct mmcs_http_context { struct _C3Base { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; } x1; int x2; struct _Metricsinfo__HTTPMetricsInfo { struct _ProtobufCMessage { struct _ProtobufCMessageDescriptor {} *x_1_2_1; unsigned int x_1_2_2; struct _ProtobufCMessageUnknownField {} *x_1_2_3; } x_3_1_1; char *x_3_1_2; int x_3_1_3; int x_3_1_4; int x_3_1_5; int x_3_1_6; int x_3_1_7; double x_3_1_8; int x_3_1_9; double x_3_1_10; int x_3_1_11; double x_3_1_12; double x_3_1_13; double x_3_1_14; long long x_3_1_15; long long x_3_1_16; int x_3_1_17; long long x_3_1_18; unsigned long long x_3_1_19; unsigned long long x_3_1_20; int x_3_1_21; double x_3_1_22; int x_3_1_23; long long x_3_1_24; int x_3_1_25; long long x_3_1_26; unsigned int x_3_1_27; struct _Chunkserver__ErrorResponse {} *x_3_1_28; int x_3_1_29; double x_3_1_30; int x_3_1_31; double x_3_1_32; } x3; struct __CFString {} *x4; long long x5; double x6; double x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; } * _hc;
    NSInputStream * _inputStream;
    bool  _isHandlingError;
    bool  _isTaskDone;
    bool  _isValid;
    NSOutputStream * _outputStream;
    bool  _requestIsStreamed;
    NSDictionary * _timingData;
    NSURLSession * _urlSession;
}

@property (nonatomic) struct os_activity_s { }*activityMarker;
@property (nonatomic, retain) MMCSBoundedQueue *boundedQueue;
@property (nonatomic) struct __CFError { }*customCertificatePinningError;
@property (nonatomic, retain) NSURLSessionDataTask *dataTask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didOpen;
@property (nonatomic, retain) MMCSDuetReporter *duetReporter;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct mmcs_http_context { struct _C3Base { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; } x1; int x2; struct _Metricsinfo__HTTPMetricsInfo { struct _ProtobufCMessage { struct _ProtobufCMessageDescriptor {} *x_1_2_1; unsigned int x_1_2_2; struct _ProtobufCMessageUnknownField {} *x_1_2_3; } x_3_1_1; char *x_3_1_2; int x_3_1_3; int x_3_1_4; int x_3_1_5; int x_3_1_6; int x_3_1_7; double x_3_1_8; int x_3_1_9; double x_3_1_10; int x_3_1_11; double x_3_1_12; double x_3_1_13; double x_3_1_14; long long x_3_1_15; long long x_3_1_16; int x_3_1_17; long long x_3_1_18; unsigned long long x_3_1_19; unsigned long long x_3_1_20; int x_3_1_21; double x_3_1_22; int x_3_1_23; long long x_3_1_24; int x_3_1_25; long long x_3_1_26; unsigned int x_3_1_27; struct _Chunkserver__ErrorResponse {} *x_3_1_28; int x_3_1_29; double x_3_1_30; int x_3_1_31; double x_3_1_32; } x3; struct __CFString {} *x4; long long x5; double x6; double x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; }*hc;
@property (nonatomic, retain) NSInputStream *inputStream;
@property (nonatomic) bool isHandlingError;
@property (nonatomic) bool isTaskDone;
@property (nonatomic) bool isValid;
@property (nonatomic, retain) NSOutputStream *outputStream;
@property (nonatomic) bool requestIsStreamed;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *timingData;
@property (nonatomic, retain) NSURLSession *urlSession;

+ (unsigned char)handleTrustPolicy:(struct __SecTrust { }*)arg1 policy:(struct __SecPolicy { }*)arg2 requestType:(struct __CFString { }*)arg3 host:(struct __CFString { }*)arg4 error:(struct __CFError {}**)arg5;
+ (id)sharedMMCSHTTPSession;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (struct os_activity_s { }*)activityMarker;
- (id)boundedQueue;
- (void)cleanupRequest;
- (void)cleanupResponse;
- (long long)countOfRequestBodyBytesSent;
- (bool)createNewRequestBodyInputStream;
- (struct __CFError { }*)customCertificatePinningError;
- (id)dataTask;
- (void)dealloc;
- (id)description;
- (bool)didOpen;
- (id)duetReporter;
- (struct mmcs_http_context { struct _C3Base { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; } x1; int x2; struct _Metricsinfo__HTTPMetricsInfo { struct _ProtobufCMessage { struct _ProtobufCMessageDescriptor {} *x_1_2_1; unsigned int x_1_2_2; struct _ProtobufCMessageUnknownField {} *x_1_2_3; } x_3_1_1; char *x_3_1_2; int x_3_1_3; int x_3_1_4; int x_3_1_5; int x_3_1_6; int x_3_1_7; double x_3_1_8; int x_3_1_9; double x_3_1_10; int x_3_1_11; double x_3_1_12; double x_3_1_13; double x_3_1_14; long long x_3_1_15; long long x_3_1_16; int x_3_1_17; long long x_3_1_18; unsigned long long x_3_1_19; unsigned long long x_3_1_20; int x_3_1_21; double x_3_1_22; int x_3_1_23; long long x_3_1_24; int x_3_1_25; long long x_3_1_26; unsigned int x_3_1_27; struct _Chunkserver__ErrorResponse {} *x_3_1_28; int x_3_1_29; double x_3_1_30; int x_3_1_31; double x_3_1_32; } x3; struct __CFString {} *x4; long long x5; double x6; double x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; }*)hc;
- (id)initWithContext:(struct mmcs_http_context { struct _C3Base { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; } x1; int x2; struct _Metricsinfo__HTTPMetricsInfo { struct _ProtobufCMessage { struct _ProtobufCMessageDescriptor {} *x_1_2_1; unsigned int x_1_2_2; struct _ProtobufCMessageUnknownField {} *x_1_2_3; } x_3_1_1; char *x_3_1_2; int x_3_1_3; int x_3_1_4; int x_3_1_5; int x_3_1_6; int x_3_1_7; double x_3_1_8; int x_3_1_9; double x_3_1_10; int x_3_1_11; double x_3_1_12; double x_3_1_13; double x_3_1_14; long long x_3_1_15; long long x_3_1_16; int x_3_1_17; long long x_3_1_18; unsigned long long x_3_1_19; unsigned long long x_3_1_20; int x_3_1_21; double x_3_1_22; int x_3_1_23; long long x_3_1_24; int x_3_1_25; long long x_3_1_26; unsigned int x_3_1_27; struct _Chunkserver__ErrorResponse {} *x_3_1_28; int x_3_1_29; double x_3_1_30; int x_3_1_31; double x_3_1_32; } x3; struct __CFString {} *x4; long long x5; double x6; double x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; }*)arg1 options:(const struct mmcs_http_context_options { struct __CFString {} *x1; struct __CFHTTPMessage {} *x2; struct _mmcs_http_request_options {} *x3; double x4; double x5; unsigned long long x6; int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); void *x13; int (*x14)(); void *x15; unsigned char x16; double x17; struct os_activity_s {} *x18; }*)arg2 activityMarker:(struct os_activity_s { }*)arg3;
- (id)inputStream;
- (void)invalidate;
- (void)invalidateStreamPair;
- (bool)isHandlingError;
- (bool)isTaskDone;
- (bool)isValid;
- (id)outputStream;
- (bool)requestBodyCanAcceptData;
- (void)requestBodyDone;
- (bool)requestIsStreamed;
- (bool)send;
- (void)setActivityMarker:(struct os_activity_s { }*)arg1;
- (void)setBoundedQueue:(id)arg1;
- (void)setCustomCertificatePinningError:(struct __CFError { }*)arg1;
- (void)setDataTask:(id)arg1;
- (void)setDidOpen:(bool)arg1;
- (void)setDuetReporter:(id)arg1;
- (void)setHc:(struct mmcs_http_context { struct _C3Base { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; } x1; int x2; struct _Metricsinfo__HTTPMetricsInfo { struct _ProtobufCMessage { struct _ProtobufCMessageDescriptor {} *x_1_2_1; unsigned int x_1_2_2; struct _ProtobufCMessageUnknownField {} *x_1_2_3; } x_3_1_1; char *x_3_1_2; int x_3_1_3; int x_3_1_4; int x_3_1_5; int x_3_1_6; int x_3_1_7; double x_3_1_8; int x_3_1_9; double x_3_1_10; int x_3_1_11; double x_3_1_12; double x_3_1_13; double x_3_1_14; long long x_3_1_15; long long x_3_1_16; int x_3_1_17; long long x_3_1_18; unsigned long long x_3_1_19; unsigned long long x_3_1_20; int x_3_1_21; double x_3_1_22; int x_3_1_23; long long x_3_1_24; int x_3_1_25; long long x_3_1_26; unsigned int x_3_1_27; struct _Chunkserver__ErrorResponse {} *x_3_1_28; int x_3_1_29; double x_3_1_30; int x_3_1_31; double x_3_1_32; } x3; struct __CFString {} *x4; long long x5; double x6; double x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; }*)arg1;
- (void)setInputStream:(id)arg1;
- (void)setIsHandlingError:(bool)arg1;
- (void)setIsTaskDone:(bool)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setOutputStream:(id)arg1;
- (void)setRequestIsStreamed:(bool)arg1;
- (void)setTimingData:(id)arg1;
- (void)setUrlSession:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)timingData;
- (id)urlSession;
- (long long)writeRequestBody:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end
