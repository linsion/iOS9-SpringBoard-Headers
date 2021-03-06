/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface SiriUIImageMaskView : UIView {

	UIImage* _maskImage;

}

@property (nonatomic,retain) UIImage * maskImage;              //@synthesize maskImage=_maskImage - In the implementation block
+(id)imageMaskViewWithImage:(id)arg1 ;
+(id)imageMaskViewWithDefaultChevron;
-(UIImage *)maskImage;
-(void)setMaskColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMaskImage:(UIImage *)arg1 ;
@end

