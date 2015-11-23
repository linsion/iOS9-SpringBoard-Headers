/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class SKUIScrollingTabBarBackgroundView, NSArray;

@interface SKUICrossFadingTabBar : UIView {

	SKUIScrollingTabBarBackgroundView* _backgroundView;
	NSArray* _tabBarButtons;

}

@property (nonatomic,readonly) SKUIScrollingTabBarBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,copy) NSArray * tabBarButtons;                                             //@synthesize tabBarButtons=_tabBarButtons - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(SKUIScrollingTabBarBackgroundView *)backgroundView;
-(NSArray *)tabBarButtons;
-(void)setTabBarButtons:(NSArray *)arg1 ;
@end
