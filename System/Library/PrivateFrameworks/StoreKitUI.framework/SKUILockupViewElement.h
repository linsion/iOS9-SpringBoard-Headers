/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIFullscreenImageViewElement;

@interface SKUILockupViewElement : SKUIViewElement {

	char _enabled;
	long long _lockupViewType;
	BOOL _selectable;

}

@property (nonatomic,readonly) BOOL containsElementGroups; 
@property (nonatomic,readonly) SKUIFullscreenImageViewElement * fullscreenImage; 
@property (nonatomic,readonly) long long lockupViewType;                                      //@synthesize lockupViewType=_lockupViewType - In the implementation block
@property (getter=isSelectable,nonatomic,readonly) BOOL selectable;                           //@synthesize selectable=_selectable - In the implementation block
-(BOOL)isEnabled;
-(BOOL)isSelectable;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(SKUIFullscreenImageViewElement *)fullscreenImage;
-(long long)lockupViewType;
-(BOOL)containsElementGroups;
@end
