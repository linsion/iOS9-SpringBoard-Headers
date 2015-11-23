/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPVideoView.h>

@interface UIMovieView : MPVideoView
-(void)setRepeatMode:(unsigned long long)arg1 ;
-(unsigned long long)playableContentType;
-(void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned long long)arg2 ;
-(unsigned long long)bufferingStatusMask;
-(id)mpavController;
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
-(id)avPlayer;
-(void)play;
-(unsigned long long)playbackState;
-(double)duration;
-(void)stop;
-(void)pause;
@end
