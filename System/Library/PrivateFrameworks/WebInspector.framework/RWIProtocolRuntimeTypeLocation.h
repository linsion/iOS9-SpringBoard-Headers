/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolRuntimeTypeLocation : RWIProtocolJSONObject

@property (assign,nonatomic) int typeInformationDescriptor; 
@property (nonatomic,copy) NSString * sourceID; 
@property (assign,nonatomic) int divot; 
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(void)setTypeInformationDescriptor:(int)arg1 ;
-(void)setDivot:(int)arg1 ;
-(id)initWithTypeInformationDescriptor:(int)arg1 sourceID:(id)arg2 divot:(int)arg3 ;
-(int)typeInformationDescriptor;
-(int)divot;
@end

