/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBNotificationBehaviorUtilitiesClientProtocol.h>

@class NSXPCConnection, NSString;

@interface BBNotificationBehaviorUtilitiesClient : NSObject <BBNotificationBehaviorUtilitiesClientProtocol> {

	NSXPCConnection* _connection;
	/*^block*/id _filteringStateChangeHandler;
	/*^block*/id _activeBehaviorOverridesChangeHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterface;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)activeBehaviorOverrideTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2 ;
-(void)notificationPresentationFilteringChangedToEnabled:(BOOL)arg1 ;
-(void)setFilteringStateChangeHandler:(/*^block*/id)arg1 ;
-(void)setActiveBehaviorOverridesChangeHandler:(/*^block*/id)arg1 ;
-(void)shouldPresentNotificationOfType:(int)arg1 fromSender:(id)arg2 withHandler:(/*^block*/id)arg3 ;
@end

