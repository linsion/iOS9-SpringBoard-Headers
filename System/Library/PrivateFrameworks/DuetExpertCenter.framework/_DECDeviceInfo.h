/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _DECDeviceInfo : NSObject {

	int _batterySaverModeToken;

}
+(id)sharedInstance;
+(BOOL)isLowEndHardware;
+(BOOL)isBatterySaverEnabled;
+(BOOL)isDemoModeEnabled;
+(BOOL)isBetaBuild;
+(BOOL)shouldIncludePredictionLogs;
+(BOOL)isInternalBuild;
-(void)dealloc;
-(id)init;
@end

