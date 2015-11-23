/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSOperationQueue, NSMutableDictionary;

@interface QLThumbnailGenerationQueue : NSObject {

	NSOperationQueue* _queue;
	NSMutableDictionary* _queuedURLs;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)noteThumbnailGenerationQueuedExternallyForDocumentAtURL:(id)arg1 ;
-(void)enqueueThumbnailGenerationIfNeededForDocumentAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
