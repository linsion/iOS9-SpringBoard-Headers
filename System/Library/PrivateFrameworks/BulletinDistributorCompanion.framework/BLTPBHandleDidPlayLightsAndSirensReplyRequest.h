/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BLTPBHandleDidPlayLightsAndSirensReplyRequest : PBRequest <NSCopying> {

	double _date;
	NSString* _phoneSectionID;
	NSString* _publisherMatchID;
	BOOL _didPlayLightsAndSirens;
	SCD_Struct_BL3 _has;

}

@property (assign,nonatomic) BOOL hasDidPlayLightsAndSirens; 
@property (assign,nonatomic) BOOL didPlayLightsAndSirens;                 //@synthesize didPlayLightsAndSirens=_didPlayLightsAndSirens - In the implementation block
@property (nonatomic,readonly) BOOL hasPublisherMatchID; 
@property (nonatomic,retain) NSString * publisherMatchID;                 //@synthesize publisherMatchID=_publisherMatchID - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneSectionID; 
@property (nonatomic,retain) NSString * phoneSectionID;                   //@synthesize phoneSectionID=_phoneSectionID - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                 //@synthesize date=_date - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(double)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)publisherMatchID;
-(void)setPublisherMatchID:(NSString *)arg1 ;
-(BOOL)didPlayLightsAndSirens;
-(NSString *)phoneSectionID;
-(void)setDidPlayLightsAndSirens:(BOOL)arg1 ;
-(BOOL)hasPublisherMatchID;
-(void)setPhoneSectionID:(NSString *)arg1 ;
-(void)setHasDidPlayLightsAndSirens:(BOOL)arg1 ;
-(BOOL)hasDidPlayLightsAndSirens;
-(BOOL)hasPhoneSectionID;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasDate:(BOOL)arg1 ;
-(BOOL)hasDate;
-(BOOL)readFrom:(id)arg1 ;
@end

