/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface TILanguageModelAdaptationContext : NSObject <NSCopying> {

	NSString* _appContext;
	NSString* _recipientNameDigest;
	NSDictionary* _recipientContext;

}

@property (nonatomic,readonly) NSString * appContext;                            //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,readonly) NSString * recipientNameDigest;                   //@synthesize recipientNameDigest=_recipientNameDigest - In the implementation block
@property (nonatomic,readonly) NSDictionary * recipientContext;                  //@synthesize recipientContext=_recipientContext - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * identifierForResponseKit; 
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)appContext;
-(NSString *)recipientNameDigest;
-(NSString *)identifierForResponseKit;
-(NSDictionary *)recipientContext;
-(id)initWithClientIdentifier:(id)arg1 andRecipientContactInfo:(id)arg2 ;
-(id)initWithClientIdentifier:(id)arg1 andRecipientRecord:(id)arg2 ;
@end
