/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITextInputUIResponderAccessibility_super.h>

@interface UITextInputUIResponderAccessibility : __UITextInputUIResponderAccessibility_super
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)arg1 ;
-(NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1 ;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)_accessibilitySpeakThisString;
-(NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1 ;
-(void)_accessibilityCheckBorderHit:(BOOL)arg1 left:(BOOL)arg2 ;
-(long long)_accessibilityLineEndPosition;
-(long long)_accessibilityTextInputLinePosition:(BOOL)arg1 ;
-(long long)_accessibilityLineStartPosition;
-(id)_accessibilityTextRectsForSpeakThisStringRange:(NSRange)arg1 ;
-(void)_moveRight:(BOOL)arg1 withHistory:(id)arg2 ;
-(void)_moveLeft:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
@end
