/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OCFontSubfamily;

@interface OCFont : NSObject {

	BOOL _bold;
	BOOL _italic;
	OCFontSubfamily* _subfamily;

}

@property (nonatomic,readonly) OCFontSubfamily * subfamily;              //@synthesize subfamily=_subfamily - In the implementation block
@property (assign,nonatomic) BOOL bold;                                  //@synthesize bold=_bold - In the implementation block
@property (assign,nonatomic) BOOL italic;                                //@synthesize italic=_italic - In the implementation block
+(id)fontWithSubfamily:(id)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3 ;
-(void)dealloc;
-(BOOL)bold;
-(BOOL)italic;
-(void)setBold:(BOOL)arg1 ;
-(void)setItalic:(BOOL)arg1 ;
-(id)initWithSubfamily:(id)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3 ;
-(OCFontSubfamily *)subfamily;
@end

