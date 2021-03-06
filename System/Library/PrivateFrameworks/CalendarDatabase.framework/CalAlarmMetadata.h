/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSString;

@interface CalAlarmMetadata : NSObject <NSCoding> {

	NSArray* _attach;
	NSArray* _attendee;
	NSString* _description;
	NSString* _summary;

}

@property (retain) NSArray * attach;                    //@synthesize attach=_attach - In the implementation block
@property (retain) NSArray * attendee;                  //@synthesize attendee=_attendee - In the implementation block
@property (retain) NSString * description;              //@synthesize description=_description - In the implementation block
@property (retain) NSString * summary;                  //@synthesize summary=_summary - In the implementation block
+(id)metadataWithData:(id)arg1 ;
-(id)dataRepresentation;
-(void)setSummary:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSArray *)attach;
-(NSArray *)attendee;
-(void)setAttach:(NSArray *)arg1 ;
-(id)initWithICSAlarm:(id)arg1 ;
-(void)applyToAlarm:(id)arg1 ;
-(void)setAttendee:(NSArray *)arg1 ;
-(NSString *)summary;
-(void)setDescription:(NSString *)arg1 ;
@end

