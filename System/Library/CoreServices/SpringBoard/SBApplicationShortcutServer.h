//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSystemServiceFacility.h"

@class NSObject<OS_dispatch_queue>;

@interface SBApplicationShortcutServer : FBSystemServiceFacility
{
    NSObject<OS_dispatch_queue> *_queue;
    id <SBApplicationShortcutServerDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) id <SBApplicationShortcutServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleUpdateDynamicShortcutItemsMessage:(id)arg1 fromClient:(id)arg2 entitlements:(unsigned long long)arg3 effectiveBundleIdentifier:(id)arg4;
- (void)_handleFetchDynamicShortcutItemsMessage:(id)arg1 fromClient:(id)arg2 entitlements:(unsigned long long)arg3 effectiveBundleIdentifier:(id)arg4;
- (id)_sanitizeShortcutItems:(id)arg1 entitlements:(unsigned long long)arg2;
- (void)_checkEntitlementsForMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)dealloc;
- (id)init;

@end

