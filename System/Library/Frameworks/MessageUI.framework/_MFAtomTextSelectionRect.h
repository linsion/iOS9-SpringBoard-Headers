/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:34 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UITextSelectionRect.h>

@interface _MFAtomTextSelectionRect : UITextSelectionRect {

	BOOL containsStart;
	BOOL containsEnd;
	CGRect rect;

}

@property (assign,nonatomic) CGRect rect; 
@property (assign,nonatomic) BOOL containsStart; 
@property (assign,nonatomic) BOOL containsEnd; 
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(BOOL)containsStart;
-(BOOL)containsEnd;
-(void)setContainsEnd:(BOOL)arg1 ;
-(void)setContainsStart:(BOOL)arg1 ;
@end
