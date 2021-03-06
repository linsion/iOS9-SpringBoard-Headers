/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSDate, WiFiData, Peer, EventScene, NSSet;

@interface Event : NSManagedObject

@property (nonatomic,retain) NSString * failureImpact; 
@property (nonatomic,retain) NSString * failureString; 
@property (nonatomic,retain) NSNumber * rfu1; 
@property (nonatomic,retain) NSNumber * rfu2; 
@property (nonatomic,retain) NSNumber * rfu3; 
@property (nonatomic,retain) NSNumber * rfu4; 
@property (nonatomic,retain) NSNumber * rfu5; 
@property (nonatomic,retain) NSDate * timeStamp; 
@property (nonatomic,retain) NSString * syndromeID; 
@property (nonatomic,retain) WiFiData * happenedOnNet; 
@property (nonatomic,retain) Peer * hasPeer; 
@property (nonatomic,retain) EventScene * hasScene; 
@property (nonatomic,retain) NSSet * hasTshootingData; 
@end

