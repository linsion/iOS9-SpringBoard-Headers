/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBPlaceholder : NSObject
+(int)placeholderTypeFromTextType:(int)arg1 ;
+(int)readPlaceholderType:(int)arg1 ;
+(int)readPlaceholderSize:(int)arg1 ;
+(int)readPlaceholderOrientation:(int)arg1 ;
+(BOOL)isBodyPlaceholder:(int)arg1 ;
+(BOOL)isTitlePlaceholder:(int)arg1 ;
+(void)writePlaceholder:(id)arg1 toPlaceholderAtom:(PptOEPlaceholderAtom*)arg2 isMaster:(BOOL)arg3 isNotes:(BOOL)arg4 ;
@end
