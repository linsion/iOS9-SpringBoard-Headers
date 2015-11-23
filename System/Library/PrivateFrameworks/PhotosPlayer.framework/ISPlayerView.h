/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/ISGestureInputDelegate.h>
#import <libobjc.A.dylib/ISPlayerOutput.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol ISPlayerViewDelegate, NSObject;
@class AVPlayerLayer, CALayer, ISCrossfadeLayer, ISPlayer, NSError, ISPlaybackSpec, UIScrollView, ISVitalityFilter, UIView, _ISTargetView, _ISAVPlayerView, _ISCrossfadeView, _ISPlayerDebugView, ISGestureInput, ISVitalityInput, ISMutedAudioInput, NSMutableSet, UIGestureRecognizer, NSString;

@interface ISPlayerView : UIView <ISGestureInputDelegate, ISPlayerOutput, UIGestureRecognizerDelegate> {

	ISPlayer* _player;
	BOOL _photoViewHidden;
	struct {
		unsigned respondsToStateDidChange : 1;
		unsigned respondsToWillBeginVisualPlayback : 1;
		unsigned respondsToDidEndVisualPlayback : 1;
		unsigned respondsToDidPlaybackVideoAssetToEnd : 1;
		unsigned respondsToDelegateForGestureReognizer : 1;
		unsigned respondsToViewHostingGestureRecognizer : 1;
		unsigned respondsToIsInteractingDidChange : 1;
	}  _delegateFlags;
	BOOL _isReadyForDisplay;
	BOOL _isInteracting;
	BOOL _vitalityAllowed;
	BOOL _allowReversePlayback;
	BOOL _showCrossfadeBorder;
	BOOL _showVideoBorder;
	BOOL _showDebugInfo;
	BOOL __crossfadeEnabled;
	BOOL __needsUpdateDebugView;
	BOOL __needsNewDriver;
	BOOL __playerTransitioning;
	double _photoScale;
	double _scrubOffset;
	long long _scrubRegion;
	long long _playbackState;
	long long _status;
	NSError* _error;
	id<ISPlayerViewDelegate> _delegate;
	unsigned long long _playbackStyle;
	ISPlaybackSpec* _playbackSpec;
	UIScrollView* _vitalityScrollView;
	ISVitalityFilter* _vitalityFilter;
	UIView* __contentContainerView;
	_ISTargetView* __photoView;
	_ISAVPlayerView* __videoView;
	_ISCrossfadeView* __crossfadeView;
	_ISPlayerDebugView* __debugInfoView;
	ISGestureInput* __playbackInput;
	ISVitalityInput* __vitalityInput;
	ISMutedAudioInput* __mutedAudioInput;
	id __forceTouchStatusObserver;
	id<NSObject> __playerObservationToken;
	NSMutableSet* __activeGestures;
	CGSize _dimensionsOfReservedVideoMemory;
	CGSize __videoSize;

}

@property (assign,nonatomic) BOOL audioMuted; 
@property (assign,nonatomic) double scrubOffset;                                                                                   //@synthesize scrubOffset=_scrubOffset - In the implementation block
@property (assign,nonatomic) long long scrubRegion;                                                                                //@synthesize scrubRegion=_scrubRegion - In the implementation block
@property (assign,nonatomic) BOOL isReadyForDisplay;                                                                               //@synthesize isReadyForDisplay=_isReadyForDisplay - In the implementation block
@property (assign,nonatomic) long long playbackState;                                                                              //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) BOOL isInteracting;                                                                                   //@synthesize isInteracting=_isInteracting - In the implementation block
@property (assign,nonatomic) long long status;                                                                                     //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * gestureRecognizer; 
@property (assign,nonatomic,__weak) id<ISPlayerViewDelegate> delegate;                                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ISPlayer * player; 
@property (assign,getter=isPhotoViewHidden,nonatomic) BOOL photoViewHidden;                                                        //@synthesize photoViewHidden=_photoViewHidden - In the implementation block
@property (assign,nonatomic) double scrubThreshold; 
@property (assign,nonatomic) double playThreshold; 
@property (assign,getter=isVitalityAllowed,nonatomic) BOOL vitalityAllowed;                                                        //@synthesize vitalityAllowed=_vitalityAllowed - In the implementation block
@property (assign,nonatomic) BOOL allowReversePlayback;                                                                            //@synthesize allowReversePlayback=_allowReversePlayback - In the implementation block
@property (assign,nonatomic) unsigned long long playbackStyle;                                                                     //@synthesize playbackStyle=_playbackStyle - In the implementation block
@property (assign,nonatomic) CGSize dimensionsOfReservedVideoMemory;                                                               //@synthesize dimensionsOfReservedVideoMemory=_dimensionsOfReservedVideoMemory - In the implementation block
@property (assign,nonatomic) BOOL showCrossfadeBorder;                                                                             //@synthesize showCrossfadeBorder=_showCrossfadeBorder - In the implementation block
@property (assign,nonatomic) BOOL showVideoBorder;                                                                                 //@synthesize showVideoBorder=_showVideoBorder - In the implementation block
@property (assign,nonatomic) BOOL showDebugInfo;                                                                                   //@synthesize showDebugInfo=_showDebugInfo - In the implementation block
@property (nonatomic,retain) ISPlaybackSpec * playbackSpec;                                                                        //@synthesize playbackSpec=_playbackSpec - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * vitalityScrollView;                                                             //@synthesize vitalityScrollView=_vitalityScrollView - In the implementation block
@property (nonatomic,retain) ISVitalityFilter * vitalityFilter;                                                                    //@synthesize vitalityFilter=_vitalityFilter - In the implementation block
@property (setter=_setContentContainerView:,nonatomic,retain) UIView * _contentContainerView;                                      //@synthesize _contentContainerView=__contentContainerView - In the implementation block
@property (setter=_setPhotoView:,nonatomic,retain) _ISTargetView * _photoView;                                                     //@synthesize _photoView=__photoView - In the implementation block
@property (setter=_setVideoView:,nonatomic,retain) _ISAVPlayerView * _videoView;                                                   //@synthesize _videoView=__videoView - In the implementation block
@property (setter=_setCrossfadeView:,nonatomic,retain) _ISCrossfadeView * _crossfadeView;                                          //@synthesize _crossfadeView=__crossfadeView - In the implementation block
@property (assign,setter=_setCrossfadeEnabled:,getter=_isCrossfadeEnabled,nonatomic) BOOL _crossfadeEnabled;                       //@synthesize _crossfadeEnabled=__crossfadeEnabled - In the implementation block
@property (setter=_setDebugInfoView:,nonatomic,retain) _ISPlayerDebugView * _debugInfoView;                                        //@synthesize _debugInfoView=__debugInfoView - In the implementation block
@property (assign,setter=_setNeedsUpdateDebugView:,nonatomic) BOOL _needsUpdateDebugView;                                          //@synthesize _needsUpdateDebugView=__needsUpdateDebugView - In the implementation block
@property (assign,setter=_setNeedsNewDriver:,nonatomic) BOOL _needsNewDriver;                                                      //@synthesize _needsNewDriver=__needsNewDriver - In the implementation block
@property (assign,setter=_setPlayerTransitioning:,getter=_isPlayerTransitioning,nonatomic) BOOL _playerTransitioning;              //@synthesize _playerTransitioning=__playerTransitioning - In the implementation block
@property (setter=_setPlaybackInput:,nonatomic,retain) ISGestureInput * _playbackInput;                                            //@synthesize _playbackInput=__playbackInput - In the implementation block
@property (setter=_setVitalityInput:,nonatomic,retain) ISVitalityInput * _vitalityInput;                                           //@synthesize _vitalityInput=__vitalityInput - In the implementation block
@property (setter=_setMutedAudioInput:,nonatomic,retain) ISMutedAudioInput * _mutedAudioInput;                                     //@synthesize _mutedAudioInput=__mutedAudioInput - In the implementation block
@property (assign,setter=_setVideoSize:,nonatomic) CGSize _videoSize;                                                              //@synthesize _videoSize=__videoSize - In the implementation block
@property (setter=_setForceTouchStatusObserver:,nonatomic,retain) id _forceTouchStatusObserver;                                    //@synthesize _forceTouchStatusObserver=__forceTouchStatusObserver - In the implementation block
@property (setter=_setPlayerObservationToken:,nonatomic,retain) id<NSObject> _playerObservationToken;                              //@synthesize _playerObservationToken=__playerObservationToken - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _activeGestures;                                                                     //@synthesize _activeGestures=__activeGestures - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AVPlayerLayer * videoLayer; 
@property (nonatomic,readonly) CALayer * photoLayer; 
@property (assign,nonatomic) double photoScale;                                                                                    //@synthesize photoScale=_photoScale - In the implementation block
@property (nonatomic,readonly) ISCrossfadeLayer * crossfadeLayer; 
+(void)initialize;
+(void)resetCaches;
-(CGSize)dimensionsOfReservedVideoMemory;
-(void)setDimensionsOfReservedVideoMemory:(CGSize)arg1 ;
-(_ISAVPlayerView *)_videoView;
-(AVPlayerLayer *)videoLayer;
-(void)_updateSubviewOrdering;
-(void)_setVideoSize:(CGSize)arg1 ;
-(BOOL)isVitalityAllowed;
-(void)setPhotoViewHidden:(BOOL)arg1 ;
-(BOOL)showVideoBorder;
-(void)setShowVideoBorder:(BOOL)arg1 ;
-(BOOL)showDebugInfo;
-(void)setShowDebugInfo:(BOOL)arg1 ;
-(void)setPlayer:(ISPlayer *)arg1 ;
-(void)prepareWithPhoto:(CGImageRef)arg1 videoAsset:(id)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4 ;
-(NSError *)error;
-(void)playVitalityHint;
-(void)seekForVitalityHintIfNeeded;
-(void)invalidateGestureRecognizers;
-(void)setVitalityScrollView:(UIScrollView *)arg1 ;
-(void)setScrubRegion:(long long)arg1 ;
-(void)setScrubOffset:(double)arg1 ;
-(long long)playbackState;
-(void)_playerPlaybackStateDidChange;
-(BOOL)isReadyForDisplay;
-(BOOL)showCrossfadeBorder;
-(void)setShowCrossfadeBorder:(BOOL)arg1 ;
-(void)setPlaybackSpec:(ISPlaybackSpec *)arg1 ;
-(void)setVitalityAllowed:(BOOL)arg1 ;
-(void)_setStatus:(long long)arg1 ;
-(void)_setError:(id)arg1 ;
-(ISPlayer *)player;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<ISPlayerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(NSString *)debugDescription;
-(id<ISPlayerViewDelegate>)delegate;
-(void)setContentMode:(long long)arg1 ;
-(UIGestureRecognizer *)gestureRecognizer;
-(long long)state;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)status;
-(id)contentLayer;
-(void)setAllowReversePlayback:(BOOL)arg1 ;
-(double)scrubOffset;
-(void)prepareWithPhoto:(CGImageRef)arg1 videoAsset:(id)arg2 photoTime:(double)arg3 ;
-(void)_setPlaybackState:(long long)arg1 ;
-(void)_updateStatus;
-(ISPlaybackSpec *)playbackSpec;
-(ISCrossfadeLayer *)crossfadeLayer;
-(void)playerWillBeginTransitionToPlaybackState:(long long)arg1 ;
-(void)playerDidPlayVideoToEnd;
-(void)playerDidEndTransitionToPlaybackState:(long long)arg1 ;
-(double)_backingScaleFactor;
-(void)_playerDidChangePlayerItem;
-(void)setIsReadyForDisplay:(BOOL)arg1 ;
-(void)_updateContentContainerView;
-(CGSize)_videoSize;
-(UIView *)_contentContainerView;
-(_ISCrossfadeView *)_crossfadeView;
-(void)_layoutPhotoView;
-(_ISTargetView *)_photoView;
-(CGSize)_photoSize;
-(long long)_photoOrientation;
-(double)photoScale;
-(void)_handleTracksLoadedForPlayerItem:(id)arg1 ;
-(void)_updateVideoSizeIfNeeded;
-(CGSize)_uncachedVideoSize;
-(void)prepareWithPlayerItem:(id)arg1 ;
-(void)_updateVideoBorder;
-(void)_updateCrossfadeLayer;
-(void)_configureForPlaybackSpec:(id)arg1 ;
-(void)_updatePlaybackInput;
-(void)_updateVitalityInput;
-(ISMutedAudioInput *)_mutedAudioInput;
-(ISVitalityInput *)_vitalityInput;
-(void)_invalidateDebugView;
-(void)_updateDebugViewIfNeeded;
-(void)cancelGestureRecognizers;
-(void)_updatePhotoViewVisibility;
-(ISGestureInput *)_playbackInput;
-(void)_removePlayerObservers;
-(void)_addPlayerObservers;
-(void)_invalidateVideoSizeAndLoadAsynchronously;
-(Class)_playbackInputClass;
-(void)setVitalityFilter:(ISVitalityFilter *)arg1 ;
-(BOOL)isPhotoViewHidden;
-(BOOL)_isPlayerTransitioning;
-(void)_setNeedsUpdateDebugView:(BOOL)arg1 ;
-(BOOL)_needsUpdateDebugView;
-(_ISPlayerDebugView *)_debugInfoView;
-(void)_setDebugInfoView:(id)arg1 ;
-(BOOL)_isCrossfadeEnabled;
-(id)_forceTouchStatusObserver;
-(void)_setContentContainerView:(id)arg1 ;
-(CALayer *)photoLayer;
-(void)_setPlayerObservationToken:(id)arg1 ;
-(id<NSObject>)_playerObservationToken;
-(void)_setCrossfadeEnabled:(BOOL)arg1 ;
-(void)_updateVideoLayer;
-(NSMutableSet *)_activeGestures;
-(void)_setInteracting:(BOOL)arg1 ;
-(void)_handleGesture:(id)arg1 ;
-(void)_setPlayerTransitioning:(BOOL)arg1 ;
-(id)gestureInputViewHostingGestureRecognizers:(id)arg1 ;
-(id)gestureInput:(id)arg1 delegateForGestureRecognizer:(id)arg2 ;
-(void)setPhotoScale:(double)arg1 ;
-(id)supportedContentModes;
-(BOOL)isSupportedContentMode:(long long)arg1 ;
-(void)prepareWithBundleURL:(id)arg1 ;
-(void)setScrubThreshold:(double)arg1 ;
-(double)scrubThreshold;
-(void)setPlaybackStyle:(unsigned long long)arg1 ;
-(BOOL)audioMuted;
-(void)setAudioMuted:(BOOL)arg1 ;
-(void)setPlayThreshold:(double)arg1 ;
-(double)playThreshold;
-(void)_updatePlayerParameters;
-(void)_forceTouchStatusDidChange:(id)arg1 ;
-(void)setVitalityEnabled:(BOOL)arg1 inScrollView:(id)arg2 ;
-(long long)scrubRegion;
-(BOOL)isInteracting;
-(BOOL)allowReversePlayback;
-(UIScrollView *)vitalityScrollView;
-(ISVitalityFilter *)vitalityFilter;
-(void)_setPhotoView:(id)arg1 ;
-(void)_setVideoView:(id)arg1 ;
-(void)_setCrossfadeView:(id)arg1 ;
-(BOOL)_needsNewDriver;
-(void)_setNeedsNewDriver:(BOOL)arg1 ;
-(void)_setPlaybackInput:(id)arg1 ;
-(void)_setVitalityInput:(id)arg1 ;
-(void)_setMutedAudioInput:(id)arg1 ;
-(void)_setForceTouchStatusObserver:(id)arg1 ;
-(unsigned long long)playbackStyle;
@end
