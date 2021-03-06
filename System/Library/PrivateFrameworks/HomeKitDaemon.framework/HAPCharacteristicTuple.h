/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class HAPCharacteristic, NSString;

@interface HAPCharacteristicTuple : NSObject {

	HAPCharacteristic* _hapCharacteristic;
	NSString* _serverIdentifier;
	long long _linkType;

}

@property (nonatomic,retain) HAPCharacteristic * hapCharacteristic;              //@synthesize hapCharacteristic=_hapCharacteristic - In the implementation block
@property (nonatomic,retain) NSString * serverIdentifier;                        //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (assign) long long linkType;                                           //@synthesize linkType=_linkType - In the implementation block
-(NSString *)serverIdentifier;
-(void)setServerIdentifier:(NSString *)arg1 ;
-(id)initWithHAPCharacteristic:(id)arg1 serverIdentifier:(id)arg2 linkType:(long long)arg3 ;
-(HAPCharacteristic *)hapCharacteristic;
-(void)setHapCharacteristic:(HAPCharacteristic *)arg1 ;
-(void)setLinkType:(long long)arg1 ;
-(long long)linkType;
@end

