/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCallHistoryDatabaseInfo : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _fetchLimit;
    unsigned int _schema;
    unsigned int _size;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int fetchLimit : 1; 
        unsigned int schema : 1; 
        unsigned int size : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasSize;
@property unsigned int size;
@property bool hasFetchLimit;
@property unsigned int fetchLimit;
@property bool hasSchema;
@property unsigned int schema;


- (unsigned int)schema;
- (bool)hasSchema;
- (void)setHasSchema:(bool)arg1;
- (void)setSchema:(unsigned int)arg1;
- (bool)hasFetchLimit;
- (void)setHasFetchLimit:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (bool)hasTimestamp;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)hasSize;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setFetchLimit:(unsigned int)arg1;
- (unsigned int)fetchLimit;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setSize:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)size;
- (id)dictionaryRepresentation;

@end