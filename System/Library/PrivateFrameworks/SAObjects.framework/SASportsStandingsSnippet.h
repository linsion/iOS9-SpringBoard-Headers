/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASportsSnippet.h>

@class NSArray;

@interface SASportsStandingsSnippet : SASportsSnippet

@property (nonatomic,copy) NSArray * columns; 
@property (nonatomic,copy) NSArray * entities; 
@property (nonatomic,copy) NSArray * selectedEntities; 
@property (assign,nonatomic) BOOL showCardinalPositions; 
+(id)standingsSnippet;
+(id)standingsSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setEntities:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)entities;
-(NSArray *)selectedEntities;
-(void)setSelectedEntities:(NSArray *)arg1 ;
-(BOOL)showCardinalPositions;
-(void)setShowCardinalPositions:(BOOL)arg1 ;
-(NSArray *)columns;
-(void)setColumns:(NSArray *)arg1 ;
@end

