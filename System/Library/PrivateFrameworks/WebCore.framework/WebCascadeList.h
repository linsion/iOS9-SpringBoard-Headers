/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface WebCascadeList : NSArray {

	WeakPtr<WebCore::FontCascade>* _font;
	int _character;
	unsigned long long _count;
	Vector<WTF::RetainPtr<const __CTFontDescriptor *>, 16, WTF::CrashOnOverflow, 16>* _fontDescriptors;

}
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)initWithFont:(const FontCascade*)arg1 character:(int)arg2 ;
@end

