/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIViewController.h>

@class MPVolumeView;

@interface MPVolumeViewController : UIViewController {

	MPVolumeView* _volumeView;

}

@property (nonatomic,readonly) MPVolumeView * volumeView;              //@synthesize volumeView=_volumeView - In the implementation block
-(MPVolumeView *)volumeView;
-(id)init;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
@end

