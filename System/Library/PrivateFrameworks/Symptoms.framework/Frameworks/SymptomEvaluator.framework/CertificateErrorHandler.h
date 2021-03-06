/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface CertificateErrorHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {

	NSMutableDictionary* _banned;
	NSMutableArray* _store;
	id _resetObserver;
	unsigned _maxAge;
	unsigned _maxCount;

}

@property (assign,nonatomic) unsigned maxAge;                       //@synthesize maxAge=_maxAge - In the implementation block
@property (assign,nonatomic) unsigned maxCount;                     //@synthesize maxCount=_maxCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
-(void)setMaxCount:(unsigned)arg1 ;
-(id)init;
-(NSString *)description;
-(void)_reset:(id)arg1 ;
-(unsigned)maxCount;
-(void)setMaxAge:(unsigned)arg1 ;
-(unsigned)maxAge;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(id)evaluate:(id)arg1 forThreshold:(long long)arg2 ;
@end

