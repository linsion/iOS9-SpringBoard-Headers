/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UserFS/UserFS-Structs.h>
@class UserFSVolume, NSString;

@interface UserFSItem : NSObject {

	BOOL _isDirectory;
	BOOL _locked;
	UserFSVolume* _volume;
	NSString* _path;
	NSString* _name;
	unsigned long long _length;
	timespec _createdDate;
	timespec _modifiedDate;

}

@property (nonatomic,retain) UserFSVolume * volume;                    //@synthesize volume=_volume - In the implementation block
@property (nonatomic,copy) NSString * path;                            //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL isDirectory;                         //@synthesize isDirectory=_isDirectory - In the implementation block
@property (assign,getter=isLocked,nonatomic) BOOL locked;              //@synthesize locked=_locked - In the implementation block
@property (assign,nonatomic) unsigned long long length;                //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) timespec createdDate;                     //@synthesize createdDate=_createdDate - In the implementation block
@property (assign,nonatomic) timespec modifiedDate;                    //@synthesize modifiedDate=_modifiedDate - In the implementation block
+(id)_itemWithVolume:(id)arg1 path:(id)arg2 properties:(id)arg3 ;
-(BOOL)isDirectory;
-(timespec)modifiedDate;
-(void)setVolume:(UserFSVolume *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned long long)length;
-(BOOL)isLocked;
-(NSString *)path;
-(void)setLocked:(BOOL)arg1 ;
-(void)setLength:(unsigned long long)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(void)setIsDirectory:(BOOL)arg1 ;
-(void)setModifiedDate:(timespec)arg1 ;
-(UserFSVolume *)volume;
-(timespec)createdDate;
-(void)setCreatedDate:(timespec)arg1 ;
@end
