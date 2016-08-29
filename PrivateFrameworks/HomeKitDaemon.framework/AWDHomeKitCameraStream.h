/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitCameraStream : PBCodable <NSCopying> {
    unsigned long long  _duration;
    unsigned int  _errorCode;
    struct { 
        unsigned int duration : 1; 
        unsigned int startupDelay : 1; 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int resolutionOnClose : 1; 
        unsigned int isLocal : 1; 
        unsigned int isStreamStarted : 1; 
    }  _has;
    bool  _isLocal;
    bool  _isStreamStarted;
    NSMutableArray * _resolutionCounts;
    int  _resolutionOnClose;
    NSString * _sessionID;
    unsigned long long  _startupDelay;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasIsLocal;
@property (nonatomic) bool hasIsStreamStarted;
@property (nonatomic) bool hasResolutionOnClose;
@property (nonatomic, readonly) bool hasSessionID;
@property (nonatomic) bool hasStartupDelay;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool isLocal;
@property (nonatomic) bool isStreamStarted;
@property (nonatomic, retain) NSMutableArray *resolutionCounts;
@property (nonatomic) int resolutionOnClose;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) unsigned long long startupDelay;
@property (nonatomic) unsigned long long timestamp;

+ (Class)resolutionCountType;

- (void).cxx_destruct;
- (int)StringAsResolutionOnClose:(id)arg1;
- (void)addResolutionCount:(id)arg1;
- (void)clearResolutionCounts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (unsigned int)errorCode;
- (bool)hasDuration;
- (bool)hasErrorCode;
- (bool)hasIsLocal;
- (bool)hasIsStreamStarted;
- (bool)hasResolutionOnClose;
- (bool)hasSessionID;
- (bool)hasStartupDelay;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isLocal;
- (bool)isStreamStarted;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resolutionCountAtIndex:(unsigned long long)arg1;
- (id)resolutionCounts;
- (unsigned long long)resolutionCountsCount;
- (int)resolutionOnClose;
- (id)resolutionOnCloseAsString:(int)arg1;
- (id)sessionID;
- (void)setDuration:(unsigned long long)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasIsLocal:(bool)arg1;
- (void)setHasIsStreamStarted:(bool)arg1;
- (void)setHasResolutionOnClose:(bool)arg1;
- (void)setHasStartupDelay:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsLocal:(bool)arg1;
- (void)setIsStreamStarted:(bool)arg1;
- (void)setResolutionCounts:(id)arg1;
- (void)setResolutionOnClose:(int)arg1;
- (void)setSessionID:(id)arg1;
- (void)setStartupDelay:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)startupDelay;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
