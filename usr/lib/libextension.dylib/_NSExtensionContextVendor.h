/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libextension.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/_NSExtensionContextVending.h>

@class NSMutableDictionary, NSString;

@interface _NSExtensionContextVendor : NSObject <NSXPCListenerDelegate, _NSExtensionContextVending> {

	NSMutableDictionary* __extensionServiceConnections;
	NSMutableDictionary* __extensionContexts;
	NSMutableDictionary* __extensionPrincipalObjects;

}

@property (setter=_setExtensionServiceConnections:,nonatomic,retain) NSMutableDictionary * _extensionServiceConnections;              //@synthesize _extensionServiceConnections=__extensionServiceConnections - In the implementation block
@property (setter=_setExtensionContexts:,nonatomic,retain) NSMutableDictionary * _extensionContexts;                                  //@synthesize _extensionContexts=__extensionContexts - In the implementation block
@property (setter=_setExtensionPrincipalObjects:,nonatomic,retain) NSMutableDictionary * _extensionPrincipalObjects;                  //@synthesize _extensionPrincipalObjects=__extensionPrincipalObjects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_startListening;
+(id)_sharedExtensionContextVendor;
+(void)_startListening:(BOOL)arg1 ;
+(id)_extensionDictionary;
+(id)_extensionMainStoryboard;
+(Class)_extensionPrincipalClass;
+(Class)_extensionContextClass;
+(id)_completionConcurrentQueue;
+(id)_expirationConcurrentQueue;
-(void)dealloc;
-(id)_extensionContextForUUID:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_setPrincipalObject:(id)arg1 forUUID:(id)arg2 ;
-(void)_tearDownContextWithUUID:(id)arg1 ;
-(BOOL)_shouldCreatePrincipalObject;
-(void)_beginRequestWithExtensionItems:(id)arg1 listenerEndpoint:(id)arg2 withContextUUID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_hostDidEnterBackgroundForContextUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hostWillEnterForegroundForContextUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hostWillResignActiveForContextUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hostDidBecomeActiveForContextUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)_extensionServiceConnections;
-(void)_setExtensionServiceConnections:(id)arg1 ;
-(NSMutableDictionary *)_extensionContexts;
-(void)_setExtensionContexts:(id)arg1 ;
-(NSMutableDictionary *)_extensionPrincipalObjects;
-(void)_setExtensionPrincipalObjects:(id)arg1 ;
@end

