/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:33 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HSCloudAvailability.h>

@class HSConnectionConfiguration, NSXPCConnection, NSString;

@interface HSCloudClient : NSObject <HSCloudAvailability> {

	BOOL _active;
	HSConnectionConfiguration* _configuration;
	NSXPCConnection* _nsxpcConnection;
	unsigned long long _daemonConfiguration;
	long long _preferredVideoQuality;
	/*^block*/id _updateInProgressChangedHandler;

}

@property (nonatomic,copy) id updateInProgressChangedHandler;              //@synthesize updateInProgressChangedHandler=_updateInProgressChangedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resignActive;
-(void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)uploadCloudItemProperties;
-(void)setItemProperties:(id)arg1 forSagaID:(long long)arg2 ;
-(void)setCollectionProperties:(id)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)uploadCloudPlaylistProperties;
-(BOOL)canShowCloudMusic;
-(BOOL)canShowCloudVideo;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(void)loadGeniusItemsForSagaID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isCellularDataRestricted;
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;
-(BOOL)canShowCloudDownloadButtons;
-(void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)createPlaylistWithPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)canSetPlaylistProperty:(id)arg1 ;
-(void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addStoreItemWithAdamID:(long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)publishPlaylistWithSagaID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)uploadArtworkForPlaylistWithPersistentID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canSetItemProperty:(id)arg1 ;
-(void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importItemArtworkForSagaID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importSubscriptionItemArtworkForPersistentID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importContainerArtworkForSagaID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importSubscriptionContainerArtworkForPersistentID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)becomeActive;
-(void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deauthenticateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)isExpiredWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)isAuthenticatedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadUpdateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)isAuthenticatedWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)authenticateAndStartInitialImport:(BOOL)arg1 mergeWithCloudLibrary:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 ;
-(void)evaluateKeepLocalRulesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadJaliscoGeniusCUIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setJaliscoGeniusCUID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)updateInProgressChangedHandler;
-(void)loadIsUpdateInProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setUpdateInProgressChangedHandler:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)connection;
-(void)loadJaliscoGeniusLearnMoreURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enableJaliscoGeniusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateJaliscoGeniusDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadJaliscoGeniusOperationStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)authenticateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)updateArtistHeroImages;
-(void)authenticateAndStartInitialImport:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateSagaLibraryWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateJaliscoLibraryWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_sendConfigurationToDaemon;
-(void)removeJaliscoLibraryWithCompletionHander:(/*^block*/id)arg1 ;
-(void)updateJaliscoLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateJaliscoAppsLibraryWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)searchJaliscoAppsLibrary:(id)arg1 searchMethod:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)jaliscoAppsImageDataForStoreID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setHidden:(BOOL)arg1 purchasedAppWithStoreID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)unhideAllPurchasedApps:(/*^block*/id)arg1 ;
-(void)updateJaliscoAppsLibraryForFamilyMemberStoreID:(id)arg1 withReason:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateSagaLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)downloadGeniusDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelUpdateJaliscoGeniusDataInProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)disableJaliscoGeniusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadArtworkInfoForSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadArtworkInfoForContainerSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetConfiguration:(id)arg1 ;
-(void)setDaemonConfiguration:(unsigned long long)arg1 ;
-(void)uploadItemProperties;
-(void)loadBooksForStoreIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_serverDidLaunch;
-(void)_serverUpdateInProgressDidChange;
-(void)setPreferredVideoQuality:(long long)arg1 ;
-(void)redownloadPurchaseAppWithStoreID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
