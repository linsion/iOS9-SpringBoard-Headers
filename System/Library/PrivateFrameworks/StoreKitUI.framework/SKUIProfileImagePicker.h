/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol SKUIProfileImagePickerDelegate;
@class SKUIClientContext, UIView, UILabel, UIImagePickerController, UIScrollView, NSString;

@interface SKUIProfileImagePicker : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	SKUIClientContext* _clientContext;
	UIView* _contentView;
	UILabel* _descriptionLabel;
	BOOL _firstApperance;
	UIImagePickerController* _imagePicker;
	UIScrollView* _scrollView;
	UILabel* _titleLabel;
	id<SKUIProfileImagePickerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKUIProfileImagePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_fixCropRect:(id)arg1 forOriginalImage:(id)arg2 ;
-(void)setDelegate:(id<SKUIProfileImagePickerDelegate>)arg1 ;
-(id<SKUIProfileImagePickerDelegate>)delegate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(id)initWithClientContext:(id)arg1 ;
-(void)_didCancel;
-(void)_showImagePicker;
-(void)_showImageSourcePicker;
-(void)_presentImagePickerWithSourceType:(long long)arg1 ;
@end
