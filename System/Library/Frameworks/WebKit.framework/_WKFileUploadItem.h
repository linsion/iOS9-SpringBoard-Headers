/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSURL, UIImage;

@interface _WKFileUploadItem : NSObject {

	RetainPtr<NSURL>* _fileURL;

}

@property (getter=isVideo,nonatomic,readonly) BOOL video; 
@property (nonatomic,readonly) NSURL * fileURL; 
@property (nonatomic,readonly) UIImage * displayImage; 
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(UIImage *)displayImage;
-(BOOL)isVideo;
@end

