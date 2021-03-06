/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MusicContainerScrollViewDelegate.h>
#import <libobjc.A.dylib/SKUIScrollingSegmentedControllerDelegate.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>
#import <libobjc.A.dylib/MusicMediaDetailSplitViewController.h>

@protocol MusicMediaProfileSplitMainViewControllerDelegate;
@class MusicProfileAlbumsViewConfiguration, MusicProfileAlbumsViewController, NSArray, MPMediaItemCollection, MusicContainerScrollView, UIScrollView, NSString, NSMutableDictionary, SKUIScrollingSegmentedController, UIView, NSMutableArray, NSMutableSet, MusicClientContext, NSDictionary, MusicMediaDetailTintInformation;

@interface MusicMediaProfileSplitMainViewController : UIViewController <MusicContainerScrollViewDelegate, SKUIScrollingSegmentedControllerDelegate, MusicClientContextConsuming, MusicMediaDetailSplitViewController> {

	MusicProfileAlbumsViewConfiguration* _albumsViewConfiguration;
	MusicProfileAlbumsViewController* _albumsViewController;
	NSArray* _allowedSegments;
	MPMediaItemCollection* _artistEntity;
	BOOL _canShowConnectSegment;
	BOOL _canShowSubscriptionSegments;
	MusicContainerScrollView* _containerScrollView;
	CGPoint _containerScrollViewNormalizedContentOffset;
	BOOL _didAutomaticallySelectMyMusicSegment;
	UIScrollView* _focusedContentScrollView;
	BOOL _hasInitializedContainerScrollViewNormalizedContentOffset;
	NSString* _initiallySelectedSegmentIdentifier;
	BOOL _isAdjustingContentSize;
	BOOL _isHidingVerticalScrollIndicator;
	NSMutableDictionary* _loadedViewControllersToInsert;
	UIEdgeInsets _minimumHeightContentInsetAdditions;
	unsigned long long _profileType;
	SKUIScrollingSegmentedController* _scrollingSegmentedController;
	UIView* _segmentedControlHairlineView;
	UIEdgeInsets _segmentedControlScrollViewEdgeInsetAdditions;
	NSMutableArray* _segmentIdentifiers;
	NSMutableSet* _segmentIdentifiersForLoadedViews;
	BOOL _shouldAutomaticallySelectMyMusicSegment;
	BOOL _segmentedControlVisible;
	BOOL _shouldShowStoreSegments;
	MusicClientContext* _clientContext;
	double _headerTransitionProgress;
	id<MusicMediaProfileSplitMainViewControllerDelegate> _mediaSplitViewControllerDelegate;
	NSDictionary* _availableContentFlags;
	MusicMediaDetailTintInformation* _mediaDetailTintInformation;

}

@property (nonatomic,retain) MusicClientContext * clientContext;                                                                        //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) double headerTransitionProgress;                                                                           //@synthesize headerTransitionProgress=_headerTransitionProgress - In the implementation block
@property (assign,nonatomic,__weak) id<MusicMediaProfileSplitMainViewControllerDelegate> mediaSplitViewControllerDelegate;              //@synthesize mediaSplitViewControllerDelegate=_mediaSplitViewControllerDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldAutomaticallySelectMyMusicSegment;                                                              //@synthesize shouldAutomaticallySelectMyMusicSegment=_shouldAutomaticallySelectMyMusicSegment - In the implementation block
@property (nonatomic,copy) NSArray * allowedSegments; 
@property (nonatomic,copy) NSDictionary * availableContentFlags;                                                                        //@synthesize availableContentFlags=_availableContentFlags - In the implementation block
@property (nonatomic,copy) MusicMediaDetailTintInformation * mediaDetailTintInformation;                                                //@synthesize mediaDetailTintInformation=_mediaDetailTintInformation - In the implementation block
@property (getter=isSegmentedControlVisible,nonatomic,readonly) BOOL segmentedControlVisible;                                           //@synthesize segmentedControlVisible=_segmentedControlVisible - In the implementation block
@property (assign,nonatomic) BOOL shouldShowStoreSegments;                                                                              //@synthesize shouldShowStoreSegments=_shouldShowStoreSegments - In the implementation block
@property (nonatomic,copy) NSString * selectedSegmentIdentifier; 
@property (nonatomic,readonly) SKUIScrollingSegmentedController * scrollingSegmentedController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)contentScrollView;
-(void)_setContentOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2 ;
-(void)_applyTintInformation;
-(id<MusicMediaProfileSplitMainViewControllerDelegate>)mediaSplitViewControllerDelegate;
-(void)setMediaDetailTintInformation:(MusicMediaDetailTintInformation *)arg1 ;
-(void)setMediaSplitViewControllerDelegate:(id<MusicMediaProfileSplitMainViewControllerDelegate>)arg1 ;
-(MusicMediaDetailTintInformation *)mediaDetailTintInformation;
-(void)setShouldAutomaticallySelectMyMusicSegment:(BOOL)arg1 ;
-(void)_unregisterForNotificationsForContentScrollView:(id)arg1 ;
-(void)containerScrollViewContentSizeDidChange:(id)arg1 ;
-(void)_registerForNotificationsForContentScrollView:(id)arg1 ;
-(double)headerTransitionProgress;
-(id)initWithProfileType:(unsigned long long)arg1 artistEntity:(id)arg2 ;
-(void)setHeaderTransitionProgress:(double)arg1 ;
-(void)setAllowedSegments:(NSArray *)arg1 ;
-(void)setViewController:(id)arg1 forSegmentIdentifier:(id)arg2 ;
-(NSDictionary *)availableContentFlags;
-(void)setAvailableContentFlags:(NSDictionary *)arg1 ;
-(NSString *)selectedSegmentIdentifier;
-(void)setSelectedSegmentIdentifier:(NSString *)arg1 ;
-(BOOL)isSegmentedControlVisible;
-(BOOL)shouldAutomaticallySelectMyMusicSegment;
-(id)viewControllerForSegmentIdentifier:(id)arg1 ;
-(void)setShouldShowStoreSegments:(BOOL)arg1 ;
-(void)_updateHairlineProperties;
-(void)_handleCanShowConnectDidChangeNotification:(id)arg1 ;
-(void)_handleCanShowSubscriptionContentDidChangeNotification:(id)arg1 ;
-(id)_scrollingSegmentedController;
-(UIEdgeInsets)_currentSegmentedControlContentEdgeInsets;
-(void)_updateSegmentedControlLayoutForSuperviewChange:(BOOL)arg1 ;
-(void)_updateVisibleSegments;
-(void)_updateSegmentedControlScrollViewVisibility;
-(void)_updateContainerScrollViewContentInformationFromScroll:(BOOL)arg1 ;
-(void)_updateFocusedContentScrollViewIfNeeded;
-(CGPoint)_adjustContentOffsetForBounds:(CGRect)arg1 inScrollView:(id)arg2 withContentInset:(UIEdgeInsets)arg3 ;
-(NSArray *)allowedSegments;
-(void)_applyHairlineTintInformation;
-(BOOL)_shouldShowSegmentedControl;
-(BOOL)shouldShowStoreSegments;
-(void)setClientContext:(MusicClientContext *)arg1 ;
-(MusicClientContext *)clientContext;
-(void)scrollingSegmentedController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2 ;
-(void)scrollingSegmentedController:(id)arg1 didFocusViewControllerAtIndex:(unsigned long long)arg2 ;
-(void)scrollingSegmentedController:(id)arg1 contentScrollViewDidChangeForViewControllerAtIndex:(unsigned long long)arg2 ;
-(SKUIScrollingSegmentedController *)scrollingSegmentedController;
@end

