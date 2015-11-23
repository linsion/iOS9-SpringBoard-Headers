/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAStockObject, NSURL, NSArray, NSString;

@interface SAStockAddCompleted : SABaseCommand <SAServerBoundCommand> {

	SAStockObject* _aceStock;
	NSURL* _identifier;
	NSArray* _stockReferences;

}

@property (nonatomic,retain) SAStockObject * aceStock;              //@synthesize aceStock=_aceStock - In the implementation block
@property (nonatomic,copy) NSURL * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * results; 
@property (nonatomic,copy) NSArray * stockReferences;               //@synthesize stockReferences=_stockReferences - In the implementation block
@property (nonatomic,copy) NSArray * stocks; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)addCompleted;
+(id)addCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)identifier;
-(void)setIdentifier:(NSURL *)arg1 ;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)stocks;
-(void)setStocks:(NSArray *)arg1 ;
-(NSArray *)stockReferences;
-(void)setStockReferences:(NSArray *)arg1 ;
-(SAStockObject *)aceStock;
-(void)setAceStock:(SAStockObject *)arg1 ;
@end
