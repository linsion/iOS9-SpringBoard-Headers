/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class AVSynchronizedLayerInternal, AVPlayerItem;

@interface AVSynchronizedLayer : CALayer {

	AVSynchronizedLayerInternal* _syncLayer;

}

@property (nonatomic,retain) AVPlayerItem * playerItem; 
+(id)synchronizedLayerWithPlayerItem:(id)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)finalize;
@end

