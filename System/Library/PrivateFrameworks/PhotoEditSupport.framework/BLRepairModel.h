/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, BLRepairLayerStack, NSLock;

@interface BLRepairModel : NSObject {

	NSDictionary* _strokesDataDictionary;
	BLRepairLayerStack* _layerStack;
	NSLock* _lock;

}
-(void)dealloc;
-(id)initWithAdjustmentsDictionary:(id)arg1 ;
-(BOOL)hasRedeye;
-(void)setLayerStack:(id)arg1 ;
-(BOOL)hasRepairOrRedeye;
-(BOOL)hasRepair;
-(BOOL)hasLayerStack;
-(id)layerStack;
-(void)buildLayerStackWithAnalysisImage:(id)arg1 andRepairImage:(id)arg2 ;
-(id)imagePatchList;
@end
