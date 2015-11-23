/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSString, NSMutableArray, NSMutableSet, NSLock, NSObject;

@interface GEODBWriter : NSObject {

	NSString* _path;
	sqlite3Ref _db;
	sqlite3_stmtRef _versionQuery;
	sqlite3_stmtRef _versionInsert;
	sqlite3_stmtRef _editionQuery;
	sqlite3_stmtRef _editionDelete;
	sqlite3_stmtRef _editionInvalidate;
	sqlite3_stmtRef _editionUpdate;
	sqlite3_stmtRef _editionInvalidateAll;
	sqlite3_stmtRef _tileInsert;
	sqlite3_stmtRef _tileDelete;
	sqlite3_stmtRef _tileSize;
	sqlite3_stmtRef _sizeQuery;
	long long _lastRowID;
	unsigned long long _databaseSize;
	unsigned long long _maxDatabaseSize;
	BOOL _closed;
	BOOL _defunct;
	NSMutableArray* _writeList;
	NSMutableSet* _uncommitedWriteSet;
	unsigned long long _pendingWriteBytes;
	NSLock* _writeListLock;
	NSObject*<OS_dispatch_queue> _writeQueue;
	void* _editionMap;
	long long _evictionRowsThreshold;
	SCD_Struct_GE55* _expirationRecords;
	unsigned long long _expirationRecordCount;
	BOOL _preloading;
	double _lastCheckedGeneralExpiration;
	unsigned long long _tileCacheMinimumWriteCount;
	unsigned long long _tileCacheMinimumWriteBytes;
	unsigned long long _tileCacheMaximumWriteCount;
	unsigned long long _tileCacheMaximumWriteBytes;

}

@property (nonatomic,readonly) NSString * path;                               //@synthesize path=_path - In the implementation block
@property (assign) BOOL closed; 
@property (nonatomic,readonly) unsigned long long databaseSize;               //@synthesize databaseSize=_databaseSize - In the implementation block
@property (assign,nonatomic) unsigned long long maxDatabaseSize;              //@synthesize maxDatabaseSize=_maxDatabaseSize - In the implementation block
-(void)dealloc;
-(NSString *)path;
-(void)_updateSize;
-(id)initWithPath:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)_closeDB;
-(void)setClosed:(BOOL)arg1 ;
-(BOOL)closed;
-(void)setExpirationRecords:(SCD_Struct_GE55*)arg1 count:(unsigned long long)arg2 ;
-(void)_openIfNecessary;
-(id)pendingWriteForKey:(GEOTileKey*)arg1 ;
-(BOOL)_readEditions;
-(unsigned long long)databaseSize;
-(void)pendingWritesForKeys:(id)arg1 handler:(/*^block*/id)arg2 ;
-(unsigned long long)maxDatabaseSize;
-(void)_deviceLocked;
-(void)addData:(id)arg1 forKey:(GEOTileKey*)arg2 edition:(unsigned)arg3 set:(unsigned)arg4 provider:(unsigned)arg5 etag:(id)arg6 ;
-(void)_dropWritesOnFloor:(id)arg1 ;
-(void)setMaxDatabaseSize:(unsigned long long)arg1 ;
-(void)_createTables;
-(void)_openDBForceRecreate:(BOOL)arg1 ;
-(void)_printDBStatus:(const char*)arg1 ;
-(BOOL)_tileSetExpires:(unsigned)arg1 ;
-(void)deleteData:(const GEOTileKey*)arg1 ;
-(void)_shrinkToUnderSize:(unsigned long long)arg1 vacuum:(BOOL)arg2 ;
-(void)_performWrites:(BOOL)arg1 ;
-(void)_updateEdition:(unsigned)arg1 forTileset:(unsigned)arg2 provider:(unsigned)arg3 invalidateOnly:(BOOL)arg4 ;
-(void)_editionUpdate:(id)arg1 ;
-(void)_assertDatabaseSize;
-(unsigned long long)_dbFileSize;
-(BOOL)prepareSingleStatement:(sqlite3_stmt*)arg1 forSql:(id)arg2 ;
-(unsigned long long)_freeableDiskSpace;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 ;
-(void)shrinkBySize:(unsigned long long)arg1 callback:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)_prepareStatements;
-(void)_evict;
-(void)_deleteKey:(GEOTileKey)arg1 ;
-(void)shrinkToSize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(void)endPreloadSession;
-(void)_writeEntry:(id)arg1 ;
-(void)_writeVersion;
-(void)flushPendingWrites;
-(void)calculateFreeableSizeWithHandler:(/*^block*/id)arg1 onQueue:(id)arg2 ;
@end
