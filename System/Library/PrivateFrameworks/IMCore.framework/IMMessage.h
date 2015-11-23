/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:34 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IMHandle, NSAttributedString, NSString, NSDate, NSArray, NSError, IMMessageItem;

@interface IMMessage : NSObject <NSCopying> {

	IMHandle* _sender;
	IMHandle* _subject;
	NSAttributedString* _text;
	NSString* _plainBody;
	NSDate* _time;
	NSDate* _timeDelivered;
	NSDate* _timeRead;
	NSDate* _timePlayed;
	NSString* _guid;
	NSAttributedString* _messageSubject;
	NSArray* _fileTransferGUIDs;
	NSError* _error;
	unsigned long long _flags;
	BOOL _isInvitationMessage;
	long long _messageID;

}

@property (nonatomic,retain) IMHandle * sender;                                               //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain,readonly) IMHandle * subject;                                     //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSDate * time;                                                   //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSDate * timeRead;                                               //@synthesize timeRead=_timeRead - In the implementation block
@property (nonatomic,retain) NSDate * timeDelivered;                                          //@synthesize timeDelivered=_timeDelivered - In the implementation block
@property (nonatomic,retain) NSDate * timePlayed;                                             //@synthesize timePlayed=_timePlayed - In the implementation block
@property (nonatomic,retain) NSAttributedString * text;                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,retain,readonly) NSAttributedString * messageSubject;                    //@synthesize messageSubject=_messageSubject - In the implementation block
@property (nonatomic,retain) NSError * error;                                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * guid;                                                 //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) long long messageID;                                             //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain,readonly) NSString * plainBody; 
@property (nonatomic,retain,readonly) NSString * senderName; 
@property (nonatomic,retain,readonly) NSString * summaryString; 
@property (nonatomic,copy) NSArray * fileTransferGUIDs;                                       //@synthesize fileTransferGUIDs=_fileTransferGUIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasInlineAttachments; 
@property (nonatomic,retain,readonly) NSArray * inlineAttachmentAttributesArray; 
@property (nonatomic,readonly) BOOL isSent; 
@property (nonatomic,readonly) BOOL isFinished; 
@property (nonatomic,readonly) BOOL isTypingMessage; 
@property (nonatomic,readonly) BOOL isLocatingMessage; 
@property (nonatomic,readonly) BOOL isEmote; 
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) BOOL isDelayed; 
@property (nonatomic,readonly) BOOL isAutoReply; 
@property (nonatomic,readonly) BOOL isDelivered; 
@property (nonatomic,readonly) BOOL isRead; 
@property (nonatomic,readonly) BOOL isAudioMessage; 
@property (nonatomic,readonly) BOOL isPlayed; 
@property (nonatomic,readonly) BOOL isAddressedToMe; 
@property (nonatomic,readonly) BOOL isAlert; 
@property (nonatomic,readonly) BOOL isSystemMessage; 
@property (assign,nonatomic) BOOL isInvitationMessage;                                        //@synthesize isInvitationMessage=_isInvitationMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasDataDetectorResults; 
@property (nonatomic,readonly) BOOL wasDowngraded; 
@property (nonatomic,readonly) BOOL wasDataDetected; 
@property (assign,nonatomic) unsigned long long flags;                                        //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain,readonly) IMMessageItem * _imMessageItem; 
+(id)locatingMessageWithGuid:(id)arg1 error:(id)arg2 ;
+(id)messageWithLocation:(id)arg1 flags:(unsigned long long)arg2 error:(id)arg3 guid:(id)arg4 ;
+(id)_vCardDataWithCLLocation:(id)arg1 ;
+(id)defaultInvitationMessageFromSender:(id)arg1 flags:(unsigned long long)arg2 ;
+(id)messageFromIMMessageItem:(id)arg1 sender:(id)arg2 subject:(id)arg3 ;
+(id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 flags:(unsigned long long)arg3 ;
+(id)instantMessageWithText:(id)arg1 flags:(unsigned long long)arg2 ;
+(id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4 ;
+(id)fromMeIMHandle:(id)arg1 withText:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4 ;
+(id)messageFromIMMessageItemDictionary:(id)arg1 body:(id)arg2 sender:(id)arg3 subject:(id)arg4 ;
-(BOOL)__ck_isSMS;
-(BOOL)__ck_isiMessage;
-(id)__ck_previewText;
-(id)__ck_service;
-(id)__ck_downgradedMessage;
-(id)__ck_attachmentText:(BOOL)arg1 ;
-(BOOL)__ck_isEqualToMessageUsingGUID:(id)arg1 ;
-(id)__ck_undowngradedMessage;
-(NSError *)error;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(NSAttributedString *)text;
-(BOOL)isDelayed;
-(IMHandle *)sender;
-(NSDate *)time;
-(IMHandle *)subject;
-(BOOL)isFinished;
-(BOOL)isFromMe;
-(NSString *)plainBody;
-(BOOL)isRead;
-(BOOL)isAudioMessage;
-(long long)messageID;
-(BOOL)isPlayed;
-(BOOL)hasDataDetectorResults;
-(BOOL)isTypingMessage;
-(NSArray *)fileTransferGUIDs;
-(BOOL)isDelivered;
-(BOOL)isSent;
-(BOOL)isLocatingMessage;
-(long long)compare:(id)arg1 comparisonType:(long long)arg2 ;
-(BOOL)wasDowngraded;
-(NSAttributedString *)messageSubject;
-(id)_copyWithFlags:(unsigned long long)arg1 ;
-(void)_updateTime:(id)arg1 ;
-(id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9 ;
-(IMMessageItem *)_imMessageItem;
-(NSDate *)timePlayed;
-(BOOL)isSystemMessage;
-(BOOL)wasDataDetected;
-(void)_updateSender:(id)arg1 ;
-(void)_updateGUID:(id)arg1 ;
-(void)_updateFlags:(unsigned long long)arg1 ;
-(id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(unsigned long long)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8 ;
-(id)_initWithSender:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 plainText:(id)arg6 text:(id)arg7 messageSubject:(id)arg8 fileTransferGUIDs:(id)arg9 flags:(unsigned long long)arg10 error:(id)arg11 guid:(id)arg12 messageID:(long long)arg13 subject:(id)arg14 ;
-(NSDate *)timeRead;
-(void)_updateTimeRead:(id)arg1 ;
-(NSDate *)timeDelivered;
-(void)_updateTimeDelivered:(id)arg1 ;
-(void)_updateTimePlayed:(id)arg1 ;
-(void)_updateMessageID:(long long)arg1 ;
-(BOOL)isEmote;
-(BOOL)hasInlineAttachments;
-(BOOL)isInvitationMessage;
-(id)initWithSender:(id)arg1 fileTransfer:(id)arg2 ;
-(NSString *)summaryString;
-(NSArray *)inlineAttachmentAttributesArray;
-(BOOL)isAutoReply;
-(void)setIsAddressedToMe:(BOOL)arg1 ;
-(BOOL)isAddressedToMe;
-(BOOL)isAlert;
-(void)_updateText:(id)arg1 ;
-(void)_updateError:(id)arg1 ;
-(void)setIsInvitationMessage:(BOOL)arg1 ;
-(void)_updateFileTransferGUIDs:(id)arg1 ;
-(NSString *)guid;
-(unsigned long long)flags;
-(NSString *)senderName;
@end
