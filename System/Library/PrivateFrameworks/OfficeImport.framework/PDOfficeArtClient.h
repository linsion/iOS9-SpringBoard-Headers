/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OADClient.h>
#import <libobjc.A.dylib/OADImageRecolorInfoClient.h>

@class OADImageRecolorInfo, PDPlaceholder, PDAnimationInfo, NSString;

@interface PDOfficeArtClient : NSObject <OADClient, OADImageRecolorInfoClient> {

	OADImageRecolorInfo* mImageRecolorInfo;
	PDPlaceholder* mPlaceholder;
	BOOL mIsComment;
	PDAnimationInfo* mAnimationInfo;
	BOOL mHasOleChart;
	int mInheritedTextStylePlaceholderType;

}

@property (assign,nonatomic) int inheritedTextStylePlaceholderType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)bounds;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)setPlaceholder:(id)arg1 ;
-(id)placeholder;
-(BOOL)hasBounds;
-(BOOL)hasPlaceholder;
-(id)animationInfo;
-(void)setInheritedTextStylePlaceholderType:(int)arg1 ;
-(void)setImageRecolorInfo:(id)arg1 ;
-(void)setHasOleChart:(BOOL)arg1 ;
-(BOOL)hasOleChart;
-(id)imageRecolorInfo;
-(BOOL)isComment;
-(void)setIsComment:(BOOL)arg1 ;
-(BOOL)hasAnimationInfo;
-(void)setAnimationInfo:(id)arg1 ;
-(int)inheritedTextStylePlaceholderType;
@end
