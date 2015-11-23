/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class UIPDFDocument, NSOperationQueue;

@interface UIPDFPageImageCache : NSObject {

	UIPDFDocument* _document;
	unsigned long long _lookAhead;
	unsigned long long _jobCount;
	id* _jobsPrioritized;
	unsigned long long _nextJobIndex;
	unsigned long long _pageCount;
	id* _jobsByPage;
	NSOperationQueue* _renderQueue;
	int _lock;

}

@property (readonly) UIPDFDocument * document;                  //@synthesize document=_document - In the implementation block
@property (readonly) unsigned long long pageCount;              //@synthesize pageCount=_pageCount - In the implementation block
@property (readonly) unsigned long long lookAhead;              //@synthesize lookAhead=_lookAhead - In the implementation block
-(void)dealloc;
-(unsigned long long)pageCount;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(UIPDFDocument *)document;
-(id)initWithDocument:(id)arg1 ;
-(void)clearCache;
-(id)initWithDocument:(id)arg1 cacheCount:(unsigned long long)arg2 lookAhead:(unsigned long long)arg3 ;
-(id)getImageIfAvailableForPage:(unsigned long long)arg1 ;
-(void)deliverImageOfPage:(unsigned long long)arg1 maxSize:(CGSize)arg2 quality:(BOOL*)arg3 receiver:(id)arg4 selector:(SEL)arg5 info:(id)arg6 ;
-(void)addRenderJob:(id)arg1 ;
-(void)cacheImageOfPage:(unsigned long long)arg1 maxSize:(CGSize)arg2 ;
-(void)cancelPendingRenderOperations;
-(void)cancelPendingRenderOperationsForTarget:(id)arg1 ;
-(unsigned long long)lookAhead;
@end
