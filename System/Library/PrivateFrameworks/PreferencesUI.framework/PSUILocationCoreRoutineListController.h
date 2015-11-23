/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PreferencesUI/PSUILocationServicesListController.h>

@class PSSpecifier, RTRoutineManager;

@interface PSUILocationCoreRoutineListController : PSUILocationServicesListController {

	PSSpecifier* _coreRoutineSpecifier;
	id _coreRoutineSettings;
	id _cachedParentController;
	RTRoutineManager* _routineManager;

}

@property (retain) id cachedParentController;                                //@synthesize cachedParentController=_cachedParentController - In the implementation block
@property (nonatomic,retain) RTRoutineManager * routineManager;              //@synthesize routineManager=_routineManager - In the implementation block
-(id)specifiers;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)updateSpecifiersForImposedSettings;
-(void)stopLocationStatusUpdates;
-(void)startLocationStatusUpdates;
-(void)updateLocationUsage;
-(RTRoutineManager *)routineManager;
-(void)setStatusEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isStatusEnabled:(id)arg1 ;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
-(void)setCachedParentController:(id)arg1 ;
-(id)cachedParentController;
-(void)setCoreRoutineEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isCoreRoutineEnabled:(id)arg1 ;
@end
