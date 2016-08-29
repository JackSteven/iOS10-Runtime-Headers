/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNanoRegistryPairingAttemptReport : PBCodable <NSCopying> {
    NSString * _abortPairingReason;
    unsigned int  _attemptCounter;
    unsigned int  _finalDurationSeconds;
    NSString * _finalScreenName;
    NSString * _gizmoBuild;
    NSString * _gizmoHardware;
    unsigned int  _gizmoMaxPairingVersion;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int attemptCounter : 1; 
        unsigned int finalDurationSeconds : 1; 
        unsigned int gizmoMaxPairingVersion : 1; 
        unsigned int incorrectPINcount : 1; 
        unsigned int pairedDeviceCount : 1; 
        unsigned int pairingType : 1; 
        unsigned int reason : 1; 
        unsigned int subreason : 1; 
        unsigned int switchCounter : 1; 
        unsigned int isAutomated : 1; 
    }  _has;
    unsigned int  _incorrectPINcount;
    bool  _isAutomated;
    unsigned int  _pairedDeviceCount;
    unsigned int  _pairingType;
    NSString * _processName;
    unsigned int  _reason;
    unsigned int  _subreason;
    unsigned int  _switchCounter;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *abortPairingReason;
@property (nonatomic) unsigned int attemptCounter;
@property (nonatomic) unsigned int finalDurationSeconds;
@property (nonatomic, retain) NSString *finalScreenName;
@property (nonatomic, retain) NSString *gizmoBuild;
@property (nonatomic, retain) NSString *gizmoHardware;
@property (nonatomic) unsigned int gizmoMaxPairingVersion;
@property (nonatomic, readonly) bool hasAbortPairingReason;
@property (nonatomic) bool hasAttemptCounter;
@property (nonatomic) bool hasFinalDurationSeconds;
@property (nonatomic, readonly) bool hasFinalScreenName;
@property (nonatomic, readonly) bool hasGizmoBuild;
@property (nonatomic, readonly) bool hasGizmoHardware;
@property (nonatomic) bool hasGizmoMaxPairingVersion;
@property (nonatomic) bool hasIncorrectPINcount;
@property (nonatomic) bool hasIsAutomated;
@property (nonatomic) bool hasPairedDeviceCount;
@property (nonatomic) bool hasPairingType;
@property (nonatomic, readonly) bool hasProcessName;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasSubreason;
@property (nonatomic) bool hasSwitchCounter;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int incorrectPINcount;
@property (nonatomic) bool isAutomated;
@property (nonatomic) unsigned int pairedDeviceCount;
@property (nonatomic) unsigned int pairingType;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic) unsigned int reason;
@property (nonatomic) unsigned int subreason;
@property (nonatomic) unsigned int switchCounter;
@property (nonatomic) unsigned long long timestamp;

- (id)abortPairingReason;
- (unsigned int)attemptCounter;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)finalDurationSeconds;
- (id)finalScreenName;
- (id)gizmoBuild;
- (id)gizmoHardware;
- (unsigned int)gizmoMaxPairingVersion;
- (bool)hasAbortPairingReason;
- (bool)hasAttemptCounter;
- (bool)hasFinalDurationSeconds;
- (bool)hasFinalScreenName;
- (bool)hasGizmoBuild;
- (bool)hasGizmoHardware;
- (bool)hasGizmoMaxPairingVersion;
- (bool)hasIncorrectPINcount;
- (bool)hasIsAutomated;
- (bool)hasPairedDeviceCount;
- (bool)hasPairingType;
- (bool)hasProcessName;
- (bool)hasReason;
- (bool)hasSubreason;
- (bool)hasSwitchCounter;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (unsigned int)incorrectPINcount;
- (bool)isAutomated;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)pairedDeviceCount;
- (unsigned int)pairingType;
- (id)processName;
- (bool)readFrom:(id)arg1;
- (unsigned int)reason;
- (void)setAbortPairingReason:(id)arg1;
- (void)setAttemptCounter:(unsigned int)arg1;
- (void)setFinalDurationSeconds:(unsigned int)arg1;
- (void)setFinalScreenName:(id)arg1;
- (void)setGizmoBuild:(id)arg1;
- (void)setGizmoHardware:(id)arg1;
- (void)setGizmoMaxPairingVersion:(unsigned int)arg1;
- (void)setHasAttemptCounter:(bool)arg1;
- (void)setHasFinalDurationSeconds:(bool)arg1;
- (void)setHasGizmoMaxPairingVersion:(bool)arg1;
- (void)setHasIncorrectPINcount:(bool)arg1;
- (void)setHasIsAutomated:(bool)arg1;
- (void)setHasPairedDeviceCount:(bool)arg1;
- (void)setHasPairingType:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasSubreason:(bool)arg1;
- (void)setHasSwitchCounter:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIncorrectPINcount:(unsigned int)arg1;
- (void)setIsAutomated:(bool)arg1;
- (void)setPairedDeviceCount:(unsigned int)arg1;
- (void)setPairingType:(unsigned int)arg1;
- (void)setProcessName:(id)arg1;
- (void)setReason:(unsigned int)arg1;
- (void)setSubreason:(unsigned int)arg1;
- (void)setSwitchCounter:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)subreason;
- (unsigned int)switchCounter;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
