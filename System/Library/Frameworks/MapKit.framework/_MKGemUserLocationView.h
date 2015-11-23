/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKUserLocationView.h>

@class CALayer;

@interface _MKGemUserLocationView : MKUserLocationView {

	CALayer* _gemLayer;

}
-(void)_setMapType:(unsigned long long)arg1 ;
-(void)_updateLayers;
-(UIImage*)staleImage;
-(id)_baseLayer;
-(id)_pulseAnimation;
-(void)_setupLayers;
-(id)_pulseLayer;
-(UIImage*)normalImage;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
@end
