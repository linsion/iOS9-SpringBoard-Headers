/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardLayout.h>

@class UIKBBackgroundView, UIKBTree;

@interface UIKeyboardLayoutDictation : UIKeyboardLayout {

	UIKBBackgroundView* _backgroundView;
	UIKBTree* _keyplane;

}
+(id)activeInstance;
+(CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setRenderConfig:(id)arg1 ;
-(BOOL)visible;
-(int)_clipCornersOfView:(id)arg1 ;
-(CGSize)dragGestureSize;
-(id)currentKeyplane;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(BOOL)shouldFadeFromLayout;
-(BOOL)shouldFadeToLayout;
-(BOOL)usesAutoShift;
-(void)setupBackgroundViewForNewSplitTraits:(id)arg1 ;
-(CGSize)splitLeftSize;
@end
