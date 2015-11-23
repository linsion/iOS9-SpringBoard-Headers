/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, HMDHomeManager;

@interface HMDApplicationVendorIDStore : NSObject <NSSecureCoding> {

	NSMutableDictionary* _applicationVendorIdMapping;
	NSObject*<OS_dispatch_queue> _clientQueue;
	HMDHomeManager* _homeManager;

}

@property (nonatomic,readonly) NSMutableDictionary * applicationVendorIdMapping;              //@synthesize applicationVendorIdMapping=_applicationVendorIdMapping - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                             //@synthesize homeManager=_homeManager - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sharedStore;
+(id)setSharedStore:(id)arg1 withManager:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)_save;
-(HMDHomeManager *)homeManager;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)checkCorrectness;
-(NSMutableDictionary *)applicationVendorIdMapping;
-(id)_vendorIDForApplication:(id)arg1 ;
-(void)_extractVendorIDForApplication:(id)arg1 ;
-(void)_setAndSaveVendorID:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(BOOL)arg4 ;
-(BOOL)_addVendorID:(id)arg1 forApplication:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(BOOL)arg4 ;
-(id)vendorIDForApplication:(id)arg1 ;
-(void)addVendorID:(id)arg1 applicationBundleId:(id)arg2 spiClient:(BOOL)arg3 ;
-(void)addVendorIDData:(id)arg1 applicationBundleId:(id)arg2 ;
-(void)addVendorID:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3 ;
-(void)removeVendorIDForApplicationBundleId:(id)arg1 ;
@end
