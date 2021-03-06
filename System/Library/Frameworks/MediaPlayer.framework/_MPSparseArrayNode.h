/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _MPSparseArrayNode : NSObject <NSSecureCoding> {

	unsigned long long _relativeOffset;
	id _object;

}

@property (assign,nonatomic) unsigned long long relativeOffset;              //@synthesize relativeOffset=_relativeOffset - In the implementation block
@property (nonatomic,retain) id object;                                      //@synthesize object=_object - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRelativeOffset:(unsigned long long)arg1 ;
-(id)initWithRelativeOffset:(unsigned long long)arg1 object:(id)arg2 ;
-(unsigned long long)relativeOffset;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
@end

