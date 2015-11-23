/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PairedSync/PairedSync-Structs.h>
@class NSObject, NSMutableArray;

@interface PSYDeviceSyncStateProvider : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _observers;
	unsigned long long _syncState;
	opaque_pthread_mutex_t _syncStateLock;
	int _notifyToken;
	unsigned long long _notifyState;

}
+(id)sharedSyncStateProvider;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(unsigned long long)syncState;
-(void)deviceSyncStateChangedRemotely;
-(void)enumerateObserversWithBlock:(/*^block*/id)arg1 ;
@end
