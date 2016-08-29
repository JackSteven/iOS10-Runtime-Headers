/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMSPIMessage : NSObject {
    NSAttributedString * _attributedText;
    NSArray * _chatGuids;
    NSDate * _date;
    NSDate * _dateRead;
    NSString * _displayName;
    NSString * _effect;
    NSString * _groupID;
    NSString * _guid;
    bool  _isAudioMessage;
    bool  _isOutgoing;
    bool  _isRead;
    NSDate * _lastReadDate;
    long long  _messageID;
    NSArray * _recipients;
    IMSPIHandle * _sender;
    NSString * _subject;
    NSString * _text;
}

@property (retain) NSAttributedString *attributedText;
@property (retain) NSArray *chatGuids;
@property (retain) NSDate *date;
@property (retain) NSDate *dateRead;
@property (retain) NSString *displayName;
@property (retain) NSString *effect;
@property (retain) NSString *groupID;
@property (retain) NSString *guid;
@property bool isAudioMessage;
@property bool isOutgoing;
@property bool isRead;
@property (retain) NSDate *lastReadDate;
@property long long messageID;
@property (retain) NSArray *recipients;
@property (retain) IMSPIHandle *sender;
@property (retain) NSString *subject;
@property (retain) NSString *text;
@property (readonly) NSURL *url;

- (void).cxx_destruct;
- (id)attributedText;
- (id)chatGuids;
- (id)date;
- (id)dateRead;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)effect;
- (id)groupID;
- (id)guid;
- (bool)isAudioMessage;
- (bool)isOutgoing;
- (bool)isRead;
- (id)lastReadDate;
- (long long)messageID;
- (id)recipients;
- (id)sender;
- (void)setAttributedText:(id)arg1;
- (void)setChatGuids:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDateRead:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setIsAudioMessage:(bool)arg1;
- (void)setIsOutgoing:(bool)arg1;
- (void)setIsRead:(bool)arg1;
- (void)setLastReadDate:(id)arg1;
- (void)setMessageID:(long long)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setText:(id)arg1;
- (id)subject;
- (id)text;
- (id)url;

@end
