/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEORouteHypothesisRequest;

@interface GEORouteHypothesisKey : NSObject <NSCopying, NSSecureCoding> {

	GEORouteHypothesisRequest* _request;

}

@property (nonatomic,retain,readonly) GEORouteHypothesisRequest * request;              //@synthesize request=_request - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEORouteHypothesisRequest *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRouteHypothesisRequest:(id)arg1 ;
-(BOOL)_isEqual:(id)arg1 ;
@end
