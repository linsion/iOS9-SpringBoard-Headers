/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertView.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UITextField, NSString;

@interface MPPasswordAlertView : UIAlertView <UIAlertViewDelegate> {

	/*^block*/id _completionHandler;
	long long _style;
	UITextField* _passwordTextField;

}

@property (nonatomic,readonly) long long style;                     //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStyle:(long long)arg1 routeName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(long long)style;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
@end

