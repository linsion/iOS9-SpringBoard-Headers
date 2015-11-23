/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DAMailMessage.h>

@class ASEmailItem;

@interface ASMailMessage : DAMailMessage {

	ASEmailItem* _ASEmailItem;

}
-(id)cc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)date;
-(id)body;
-(id)attachments;
-(id)subject;
-(id)messageClass;
-(int)importance;
-(int)bodyTruncated;
-(id)initWithASEmailItem:(id)arg1 ;
-(id)replyTo;
-(id)displayTo;
-(id)threadTopic;
-(id)conversationIndex;
-(id)remoteID;
-(id)folderID;
-(int)bodySize;
-(id)meetingRequestUUID;
-(id)longID;
-(BOOL)readIsSet;
-(BOOL)flaggedIsSet;
-(BOOL)flagged;
-(BOOL)verbIsSet;
-(int)lastVerb;
-(int)smimeType;
-(id)meetingRequestMetaData;
-(BOOL)meetingRequestIsActionable;
-(id)conversationId;
-(id)rfc822Data;
-(id)from;
-(id)to;
-(BOOL)read;
@end
