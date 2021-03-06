/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class CKDPCSData, NSObject, NSError;

@interface CKDPCSCacheItem : NSObject {

	CKDPCSData* _pcsData;
	NSObject*<OS_dispatch_group> _fetchGroup;
	NSError* _fetchError;

}

@property (nonatomic,retain) CKDPCSData * pcsData;                                 //@synthesize pcsData=_pcsData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchGroup;              //@synthesize fetchGroup=_fetchGroup - In the implementation block
@property (nonatomic,retain) NSError * fetchError;                                 //@synthesize fetchError=_fetchError - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_group>)fetchGroup;
-(void)setFetchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setPcsData:(CKDPCSData *)arg1 ;
-(CKDPCSData *)pcsData;
-(NSError *)fetchError;
-(void)setFetchError:(NSError *)arg1 ;
@end

