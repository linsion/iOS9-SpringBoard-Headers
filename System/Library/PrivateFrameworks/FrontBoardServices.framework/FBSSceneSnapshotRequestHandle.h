/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class FBSSceneSnapshotContext, FBSSceneSnapshotRequestAction;

@interface FBSSceneSnapshotRequestHandle : NSObject {

	unsigned long long _type;
	FBSSceneSnapshotContext* _context;
	FBSSceneSnapshotRequestAction* _action;
	BOOL _canceled;

}
+(id)handleForRequestType:(unsigned long long)arg1 context:(id)arg2 ;
-(void)dealloc;
-(void)performRequestForScene:(id)arg1 ;
-(id)initWithRequestType:(unsigned long long)arg1 context:(id)arg2 ;
-(void)_clearAction;
-(void)cancelRequest;
@end

