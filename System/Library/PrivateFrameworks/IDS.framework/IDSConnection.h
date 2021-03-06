/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:33 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _IDSConnection, IDSAccount;

@interface IDSConnection : NSObject {

	_IDSConnection* _internal;

}

@property (nonatomic,retain,readonly) IDSAccount * account; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,retain,readonly) _IDSConnection * _internal; 
-(_IDSConnection *)_internal;
-(void)dealloc;
-(BOOL)isActive;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(id)initWithAccount:(id)arg1 commands:(id)arg2 ;
-(id)_initWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(BOOL)arg3 ;
-(BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5 ;
-(BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(void)removeDelegate:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(IDSAccount *)account;
@end

