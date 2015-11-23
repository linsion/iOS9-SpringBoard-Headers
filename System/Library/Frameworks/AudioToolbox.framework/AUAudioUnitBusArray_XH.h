/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AudioToolbox/AUAudioUnitBusArray.h>

@interface AUAudioUnitBusArray_XH : AUAudioUnitBusArray {

	BOOL _countWritable;

}
-(id)initWithOwner:(id)arg1 scope:(unsigned)arg2 busses:(id)arg3 countWritable:(BOOL)arg4 ;
-(BOOL)setBusCount:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isCountChangeable;
@end
