/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class SKUIShapeView, UIImageView, UILabel, UIColor, UIImage, NSString;

@interface SKUIOnboardingProgressView : UIView {

	SKUIShapeView* _borderView;
	UIImageView* _imageView;
	double _progress;
	SKUIShapeView* _progressView;
	UILabel* _titleLabel;

}

@property (assign,nonatomic) double progress;                          //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) UIColor * fillColor; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) CGSize preferredImageSize; 
+(CGSize)preferredImageSizeForViewSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(void)tintColorDidChange;
-(void)setProgress:(double)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(double)progress;
-(id)_borderColor;
-(CGSize)preferredImageSize;
@end
