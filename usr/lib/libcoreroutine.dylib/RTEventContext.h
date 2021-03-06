/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RTEventContext : RTEvent <NSSecureCoding> {

	NSString* _context;

}

@property (nonatomic,retain) NSString * context;              //@synthesize context=_context - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)context;
-(id)initWithContext:(id)arg1 ;
-(void)setContext:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 source:(long long)arg4 locationIdentifier:(id)arg5 ;
-(id)initWithContext:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
@end

