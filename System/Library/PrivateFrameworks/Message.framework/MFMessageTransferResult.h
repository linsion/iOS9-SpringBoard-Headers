/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface MFMessageTransferResult : NSObject {

	unsigned long long _resultCode;
	NSArray* _failedMessages;
	NSArray* _transferedMessages;

}

@property (nonatomic,readonly) unsigned long long resultCode;              //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,readonly) NSArray * failedMessages;                   //@synthesize failedMessages=_failedMessages - In the implementation block
@property (nonatomic,readonly) NSArray * transferedMessages;               //@synthesize transferedMessages=_transferedMessages - In the implementation block
-(void)dealloc;
-(id)init;
-(id)debugDescription;
-(NSArray *)transferedMessages;
-(NSArray *)failedMessages;
-(id)initWithResultCode:(unsigned long long)arg1 failedMessages:(id)arg2 transferedMessage:(id)arg3 ;
-(unsigned long long)resultCode;
@end
