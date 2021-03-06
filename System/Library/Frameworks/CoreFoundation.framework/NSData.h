/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/ASParsingLeafNode.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSData : NSObject <ASParsingLeafNode, CKRecordValue, NSCopying, NSMutableCopying, NSSecureCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * md5; 
@property (nonatomic,readonly) NSData * SHA1Data; 
@property (nonatomic,readonly) NSString * SHA1HexString; 
@property (readonly) unsigned long long length; 
@property (readonly) const void* bytes; 
+(BOOL)expectsContent;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)dataFromHexadecimalString:(id)arg1 ;
+(id)da_dataWithHexString:(id)arg1 ;
+(id)da_dataWithHexString:(id)arg1 stringIsUppercase:(BOOL)arg2 ;
+(id)CKDataWithHexString:(id)arg1 stringIsUppercase:(BOOL)arg2 ;
+(id)CKDataWithHexString:(id)arg1 ;
+(id)CKDataFromBase64URLSafeString:(id)arg1 ;
+(id)dataForRadioRequestParameters:(id)arg1 isAsynchronousBackgroundRequest:(BOOL)arg2 error:(id*)arg3 ;
+(id)dataForRadioRequestParameters:(id)arg1 protocolVersion:(int)arg2 isAsynchronousBackgroundRequest:(BOOL)arg3 error:(id*)arg4 ;
+(id)pl_dataWithMappedContentsOfFileDescriptor:(int)arg1 ;
+(id)pl_dataWithMappedContentsOfFileHandle:(id)arg1 ;
+(unsigned long long)_cn_maxDataLengthFittingInBase64EncodingLength:(unsigned long long)arg1 ;
+(id)__imDataWithHexString:(id)arg1 ;
+(id)__imDataWithRandomBytes:(unsigned long long)arg1 ;
+(id)MCDataWithHexString:(id)arg1 ;
+(id)MCDataWithCFData:(CFDataRef)arg1 ;
+(BOOL)_base64DecodingAlwaysSucceedsForOptions:(unsigned long long)arg1 ;
+(id)dataWithContentsOfMappedFile:(id)arg1 ;
+(id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)dataWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)data;
+(id)dataWithContentsOfFile:(id)arg1 ;
+(id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
+(id)dataWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
+(id)dataWithContentsOfURL:(id)arg1 ;
+(id)dataWithData:(id)arg1 ;
-(id)digestForSubCal;
-(id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6 ;
-(int)parsingState;
-(id)initForLengthTokenOfLength:(unsigned long long)arg1 ;
-(id)mf_attachmentWithFilename:(id)arg1 UTIType:(id)arg2 fromManager:(id)arg3 contextID:(id)arg4 ;
-(id)safari_dataByCompressingData;
-(BOOL)safari_dataAppearsToBeCompressed;
-(id)safari_dataByDecompressingData;
-(id)hexRepresentationWithSpaces_AS:(BOOL)arg1 ;
-(id)hexadecimalString;
-(id)cr_md5DigestHexString;
-(id)da_hexString;
-(id)da_lowercaseHexStringWithoutSpaces;
-(id)da_uppercaseHexStringWithoutSpaces;
-(id)hexString;
-(id)CKSHA256;
-(id)CKUppercaseHexStringWithoutSpaces;
-(id)CKLowercaseHexStringWithoutSpaces;
-(id)CKBase64URLSafeString;
-(id)CKHexString;
-(id)propertyListForRadioResponseReturningError:(id*)arg1 ;
-(id)propertyListForRadioResponseReturningError:(id*)arg1 unparsedResponseDictionary:(id*)arg2 ;
-(NSString *)md5;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(unsigned long long)pl_advisoryLength;
-(void)pl_adviceWillNeed;
-(void)pl_adviceDoNotNeed;
-(id)aa_hexString;
-(id)cplSyncAnchorSimpleDescription;
-(id)cplSyncAnchorDescription;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)MSInitWithBase64Encoding:(id)arg1 ;
-(id)MSBase64Encoding;
-(id)MSHexString;
-(id)mf_MD5Digest;
-(NSRange)mf_rangeOfByteFromSet:(id)arg1 range:(NSRange)arg2 ;
-(id)mf_subdataToIndex:(unsigned long long)arg1 ;
-(id)mf_subdataFromIndex:(unsigned long long)arg1 ;
-(NSRange)mf_rangeOfByteFromSet:(id)arg1 ;
-(NSRange)mf_rangeOfCString:(const char*)arg1 ;
-(NSRange)mf_rangeOfCString:(const char*)arg1 options:(unsigned long long)arg2 ;
-(id)mf_dataByConvertingUnixNewlinesToNetwork;
-(id)mf_copyHexString;
-(id)mf_locationsOfUnixNewlinesNeedingConversion;
-(NSRange)mf_rangeOfRFC822HeaderData;
-(NSRange)mf_rangeOfCString:(const char*)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(NSRange)mf_rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(id)mf_decodeQuotedPrintableForText:(BOOL)arg1 ;
-(id)mf_decodeUuencoded;
-(id)mf_decodeBase64InRange:(NSRange*)arg1 ;
-(id)mf_encodeBase64HeaderData;
-(id)mf_encodeModifiedBase64;
-(id)mf_decodeModifiedBase64;
-(id)mf_encodeBase64WithoutLineBreaks;
-(id)mf_decodeBase64;
-(id)mf_encodeBase64;
-(BOOL)mf_immutable;
-(id)mf_subdataWithRange:(NSRange)arg1 ;
-(id)ml_stringValueForSQL;
-(void)ml_bindToSQLiteStatement:(sqlite3_stmtRef)arg1 atPosition:(int)arg2 ;
-(id)_cn_MD5Hash;
-(id)_cn_encodeVCardBase64DataWithInitialLength:(unsigned long long)arg1 ;
-(id)_geo_uppercaseMD5HashString;
-(id)_geo_newXPCData;
-(id)_cn_decodeBase64;
-(id)_cn_decodeBase64IgnoringWhitespace;
-(BOOL)_web_isCaseInsensitiveEqualToCString:(const char*)arg1 ;
-(id)_webkit_parseRFC822HeaderFields;
-(BOOL)_web_startsWithBlankLine;
-(long long)_web_locationAfterFirstBlankLine;
-(id)_webkit_guessedMIMETypeForXML;
-(id)_webkit_guessedMIMEType;
-(id)abDecodedUTF7;
-(id)abStringAtRange:(NSRange)arg1 inEncoding:(unsigned long long)arg2 ;
-(BOOL)abIsUTF16EntourageVCard;
-(id)abEncodeVCardBase64DataWithInitialLength:(unsigned long long)arg1 ;
-(id)abDecodeVCardBase64;
-(id)_FTOptionallyDecompressData;
-(id)_FTDecompressData;
-(id)_FTCopyGzippedData;
-(id)_FTStringFromBaseData;
-(id)subdataWithRangeNoCopy:(NSRange)arg1 ;
-(NSData *)SHA1Data;
-(NSString *)SHA1HexString;
-(id)__imHexString;
-(id)__imHexStringOfBytes:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(id)MCHexString;
-(id)MCBase64String;
-(id)MCInitWithBase64String:(id)arg1 ;
-(id)MCSHA1Hash;
-(id)_CUTDecompressData;
-(id)_CUTStringFromBaseData;
-(id)_CUTOptionallyDecompressData;
-(id)_CUTCopyGzippedData;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_web_guessedMIMETypeForXML;
-(id)_web_guessedMIMEType;
-(id)_web_guessedMIMETypeForExtension:(id)arg1 ;
-(id)_web_parseRFC822HeaderFields;
-(id)_replaceCString:(const char*)arg1 withCString:(const char*)arg2 ;
-(BOOL)isNSData__;
-(id)replacementObjectForCoder:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(BOOL)_isDispatchData;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5 ;
-(BOOL)_canReplaceWithDispatchDataForXPCCoder;
-(BOOL)_isCompactAndReturnBytes:(const void*)arg1 ;
-(BOOL)_isCompact;
-(BOOL)_copyWillRetain;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(BOOL)_decodeBase64EncodedCharacterBuffer:(const char*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 buffer:(char*)arg4 bufferLength:(unsigned long long)arg5 state:(SCD_Struct_NS14*)arg6 ;
-(id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_base64EncodingAsString:(BOOL)arg1 withOptions:(unsigned long long)arg2 ;
-(id)_asciiDescription;
-(BOOL)_allowsDirectEncoding;
-(void)getBytes:(void*)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 error:(id*)arg2 ;
-(id)_createDispatchData;
-(id)base64EncodedDataWithOptions:(unsigned long long)arg1 ;
-(id)initWithBase64Encoding:(id)arg1 ;
-(id)base64Encoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)length;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)base64EncodedStringWithOptions:(unsigned long long)arg1 ;
-(id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqualToData:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(BOOL)_isSafeResumeDataForBackgroundDownload;
@end

