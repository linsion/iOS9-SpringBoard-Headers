/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserNotification.framework/UserNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UNNotificationRegistrarConnectionListener, UNNotificationSchedulerConnectionListener;

@interface UNUserNotificationServer : NSObject {

	UNNotificationRegistrarConnectionListener* _registrarConnectionListener;
	UNNotificationSchedulerConnectionListener* _schedulerConnectionListener;

}
+(id)sharedInstance;
-(id)initWithSystemStateProvider:(id)arg1 ;
@end

