/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/QLPreviewItem.h>

@protocol MFDataConsumer;
@class NSURL, NSString, NSMutableDictionary, MFAttachmentManager, MFAttachmentPlaceholder, MFMimePart, MFMailDropMetadata;

@interface MFAttachment : NSObject <QLPreviewItem> {

	NSMutableDictionary* _metadata;
	MFAttachmentManager* _attachmentManager;
	BOOL _isDataAvailableLocally;
	MFAttachmentPlaceholder* _placeholder;
	BOOL _isUserFacing;
	NSURL* _url;
	MFMimePart* _part;
	NSString* _disposition;
	unsigned long long _encodedFileSize;
	MFMailDropMetadata* _mailDropMetadata;
	unsigned long long _progressInterval;
	double _progressTimeInterval;
	/*^block*/id _fetchCompletionBlock;
	/*^block*/id _fetchProgressBlock;
	id<MFDataConsumer> _customConsumer;
	unsigned long long _lastProgressBytes;
	double _lastProgressTime;

}

@property (nonatomic,retain) NSString * eventID; 
@property (nonatomic,retain) NSString * meetingStorePersistentID; 
@property (nonatomic,retain) NSString * icsRepresentation; 
@property (assign,nonatomic) CGSize imageDimensions; 
@property (nonatomic,copy) NSURL * url;                                            //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) MFMimePart * part;                                    //@synthesize part=_part - In the implementation block
@property (readonly) NSString * contentID; 
@property (nonatomic,copy) NSString * fileName; 
@property (nonatomic,copy) NSString * path; 
@property (nonatomic,copy) NSString * mimeType; 
@property (nonatomic,copy) NSString * disposition;                                 //@synthesize disposition=_disposition - In the implementation block
@property (assign,nonatomic) unsigned long long decodedFileSize; 
@property (assign,nonatomic) unsigned long long encodedFileSize;                   //@synthesize encodedFileSize=_encodedFileSize - In the implementation block
@property (readonly) BOOL isDataAvailableLocally; 
@property (readonly) BOOL shouldAutoDownload; 
@property (readonly) NSString * inferredMimeType; 
@property (readonly) NSString * fileUTType; 
@property (readonly) BOOL isAutoArchive; 
@property (nonatomic,retain) MFMailDropMetadata * mailDropMetadata;                //@synthesize mailDropMetadata=_mailDropMetadata - In the implementation block
@property (assign,nonatomic) unsigned long long progressInterval;                  //@synthesize progressInterval=_progressInterval - In the implementation block
@property (assign,nonatomic) double progressTimeInterval;                          //@synthesize progressTimeInterval=_progressTimeInterval - In the implementation block
@property (nonatomic,copy) id fetchCompletionBlock;                                //@synthesize fetchCompletionBlock=_fetchCompletionBlock - In the implementation block
@property (copy) id fetchProgressBlock;                                            //@synthesize fetchProgressBlock=_fetchProgressBlock - In the implementation block
@property (nonatomic,retain) id<MFDataConsumer> customConsumer;                    //@synthesize customConsumer=_customConsumer - In the implementation block
@property (assign,nonatomic) BOOL isUserFacing;                                    //@synthesize isUserFacing=_isUserFacing - In the implementation block
@property (assign,nonatomic) MFAttachmentManager * attachmentManager;              //@synthesize attachmentManager=_attachmentManager - In the implementation block
@property (readonly) BOOL isContainedInRFC822; 
@property (readonly) BOOL isContainedInCompose; 
@property (assign,nonatomic) unsigned long long lastProgressBytes;                 //@synthesize lastProgressBytes=_lastProgressBytes - In the implementation block
@property (assign,nonatomic) double lastProgressTime;                              //@synthesize lastProgressTime=_lastProgressTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
+(id)passPlaceholder;
-(BOOL)isPass;
-(id)passWithError:(id*)arg1 ;
-(id)pass;
-(BOOL)isDisplayableImage;
-(CGSize)markupSizeForImageScale:(unsigned long long)arg1 ;
-(BOOL)isDisplayableInline;
-(BOOL)isPDFFile;
-(unsigned long long)imageScalingFlags;
-(void)enqueueScaleAttachmentWithCompletionBlock:(/*^block*/id)arg1 ;
-(unsigned long long)scaledFileSize;
-(unsigned long long)scaleImageToFit:(unsigned long long)arg1 saveScaledImage:(BOOL)arg2 ;
-(BOOL)isSupportedImageType;
-(NSString *)meetingStorePersistentID;
-(BOOL)isCalendarFile;
-(void)setIcsRepresentation:(NSString *)arg1 ;
-(void)setEventID:(NSString *)arg1 ;
-(void)setMeetingStorePersistentID:(NSString *)arg1 ;
-(id)markupStringForCompositionWithPrependedBlankLine:(BOOL)arg1 imageScale:(unsigned long long)arg2 ;
-(id)filenameStrippingZipIfNeededUseApplications:(BOOL)arg1 ;
-(id)_contentTypeByStrippingZipIfNeeded:(BOOL)arg1 ;
-(BOOL)_isContentTypeDisplayableByMobileMail;
-(BOOL)isMedia;
-(CGSize)imageDimensionsWithData:(id)arg1 ;
-(double)constrainedWidth;
-(id)_imageScalingKeyForImageScale:(unsigned long long)arg1 ;
-(unsigned long long)_imageScale;
-(void)_setImageScale:(unsigned long long)arg1 ;
-(BOOL)isDisplayableByWebKit;
-(BOOL)isRestrictedMIMEType;
-(BOOL)isContentOpenable;
-(BOOL)isDisplayableInlineWithData:(id)arg1 ;
-(BOOL)hasCalendarMetadata;
-(NSString *)eventID;
-(NSString *)icsRepresentation;
-(BOOL)isContentCompressed;
-(void)compressContentsWithCompletion:(/*^block*/id)arg1 ;
-(void)decompressContentsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isRFC822;
-(BOOL)isDisplayableInsidePlugin;
-(id)markupStringForDisplayWithData:(id)arg1 displayStyle:(int)arg2 printableWidth:(double)arg3 useEdgeToEdgeFormattingIfApplicable:(BOOL)arg4 ;
-(id)contentType;
-(id)className;
-(CGSize)imageDimensions;
-(void)setImageDimensions:(CGSize)arg1 ;
-(void)fetchDataWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)contentTypeConformsToMarkup;
-(NSString *)contentID;
-(id)fetchDataSynchronously:(id*)arg1 ;
-(void)setContentID:(NSString *)arg1 ;
-(MFMailDropMetadata *)mailDropMetadata;
-(id)metadataValueForKey:(id)arg1 ;
-(BOOL)isDataAvailableLocally;
-(id)fetchLocalData;
-(void)setFetchCompletionBlock:(id)arg1 ;
-(void)fetchData;
-(unsigned long long)decodedFileSize;
-(unsigned long long)encodedFileSize;
-(MFAttachmentManager *)attachmentManager;
-(void)setAttachmentManager:(MFAttachmentManager *)arg1 ;
-(id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2 ;
-(BOOL)isMailDrop;
-(NSString *)inferredMimeType;
-(BOOL)isImageFile;
-(NSString *)disposition;
-(BOOL)contentTypeConformsToPassbook;
-(BOOL)isAvailable;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSURL *)url;
-(NSString *)path;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)mimeType;
-(id)placeholder;
-(NSURL *)previewItemURL;
-(NSString *)previewItemTitle;
-(id)fileURL;
-(void)setMimeType:(NSString *)arg1 ;
-(void)setDisposition:(NSString *)arg1 ;
-(BOOL)isAutoArchive;
-(id)fetchPlaceholderData;
-(id)fetchDataSynchronously:(id*)arg1 stripPrivateMetadata:(BOOL)arg2 ;
-(id)readFromDisk;
-(id<MFDataConsumer>)customConsumer;
-(id)decodeFilterWithDataConsumer:(id)arg1 ;
-(void)setDecodedFileSize:(unsigned long long)arg1 ;
-(void)writeToDiskWithData:(id)arg1 ;
-(BOOL)isUserFacing;
-(id)initWithURL:(id)arg1 attachmentManager:(id)arg2 ;
-(id)fetchProgressBlock;
-(void)setMailDropMetadata:(MFMailDropMetadata *)arg1 ;
-(void)setIsUserFacing:(BOOL)arg1 ;
-(BOOL)isContainedInRFC822;
-(id)fetchLocalData:(id*)arg1 stripPrivateMetadata:(BOOL)arg2 ;
-(BOOL)isContainedInCompose;
-(id)filterData:(id)arg1 ;
-(id)fetchCompletionBlock;
-(void)fetchDataWithCompletion:(/*^block*/id)arg1 stripPrivateMetadata:(BOOL)arg2 ;
-(BOOL)contentTypeConformsToEventVCS;
-(id)filterVCSData:(id)arg1 ;
-(BOOL)isCached;
-(NSString *)fileUTType;
-(unsigned long long)sizeOnDisk;
-(id)textEncodingGuessWithData:(id)arg1 ;
-(BOOL)contentTypeConformsToEventICS;
-(BOOL)conformsToType:(id)arg1 ;
-(id)fetchDataToURL:(id*)arg1 ;
-(id)filterICSData:(id)arg1 ;
-(BOOL)shouldAutoDownload;
-(id)storageLocationWithMessage:(id)arg1 ;
-(BOOL)contentTypeConformsToVCard;
-(BOOL)contentTypeConformsToEvent;
-(BOOL)contentTypeConformsToProvisionment;
-(void)setEncodedFileSize:(unsigned long long)arg1 ;
-(unsigned long long)progressInterval;
-(void)setProgressInterval:(unsigned long long)arg1 ;
-(double)progressTimeInterval;
-(void)setProgressTimeInterval:(double)arg1 ;
-(void)setFetchProgressBlock:(id)arg1 ;
-(void)setCustomConsumer:(id<MFDataConsumer>)arg1 ;
-(unsigned long long)lastProgressBytes;
-(void)setLastProgressBytes:(unsigned long long)arg1 ;
-(double)lastProgressTime;
-(void)setLastProgressTime:(double)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(id)fileAttributes;
-(void)setPart:(MFMimePart *)arg1 ;
-(MFMimePart *)part;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isPlaceholder;
@end

