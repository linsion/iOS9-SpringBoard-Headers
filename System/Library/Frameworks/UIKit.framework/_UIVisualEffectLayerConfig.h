/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, UIColor;

@interface _UIVisualEffectLayerConfig : NSObject {

	NSString* _filterType;
	double _opacity;
	UIColor* _fillColor;

}

@property (nonatomic,readonly) double opacity;                     //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,readonly) NSString * filterType;              //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,readonly) UIColor * fillColor;                //@synthesize fillColor=_fillColor - In the implementation block
+(id)layerWithFillColor:(id)arg1 opacity:(double)arg2 filterType:(id)arg3 ;
-(double)opacity;
-(UIColor *)fillColor;
-(NSString *)filterType;
-(void)configureLayerView:(id)arg1 ;
-(void)deconfigureLayerView:(id)arg1 ;
@end
