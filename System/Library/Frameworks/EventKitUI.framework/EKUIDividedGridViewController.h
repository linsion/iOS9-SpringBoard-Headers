/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>

@protocol EKUIDividedGridViewControllerDelegate;
@class UIColor, NSArray;

@interface EKUIDividedGridViewController : UIViewController {

	long long _type;
	UIColor* _cellBackgroundColor;
	double _preferredWidth;
	NSArray* _buttonTitles;
	NSArray* _allCells;
	id<EKUIDividedGridViewControllerDelegate> _delegate;
	NSArray* _weekViews;

}

@property (assign,nonatomic) double preferredWidth;                                 //@synthesize preferredWidth=_preferredWidth - In the implementation block
@property (nonatomic,retain) NSArray * buttonTitles;                                //@synthesize buttonTitles=_buttonTitles - In the implementation block
@property (retain) NSArray * allCells;                                              //@synthesize allCells=_allCells - In the implementation block
@property (__weak) id<EKUIDividedGridViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSArray * weekViews;                                             //@synthesize weekViews=_weekViews - In the implementation block
+(id)dividerColor;
-(NSArray *)allCells;
-(id)_newDividerView;
-(double)_defaultButtonWidthForButtonAtIndex:(long long)arg1 ;
-(void)setAllCells:(NSArray *)arg1 ;
-(void)setWeekViews:(NSArray *)arg1 ;
-(double)_rowHeightForWidth:(double)arg1 ;
-(NSArray *)weekViews;
-(double)_neededHeight;
-(id)initWithType:(long long)arg1 buttonTitles:(id)arg2 cellBackgroundColor:(id)arg3 ;
-(void)cellTapped:(id)arg1 ;
-(void)setDelegate:(id<EKUIDividedGridViewControllerDelegate>)arg1 ;
-(id<EKUIDividedGridViewControllerDelegate>)delegate;
-(void)loadView;
-(CGSize)intrinsicContentSize;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(NSArray *)buttonTitles;
-(void)setButtonTitles:(NSArray *)arg1 ;
-(double)preferredWidth;
-(void)setPreferredWidth:(double)arg1 ;
@end

