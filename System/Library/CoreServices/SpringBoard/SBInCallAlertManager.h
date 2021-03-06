//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBRemoteAlertAdapter;

@interface SBInCallAlertManager : NSObject
{
    SBRemoteAlertAdapter *_currentActiveInCallAlert;
    _Bool _endingCallForLockButtonPress;
}

+ (id)sharedInstance;
@property(nonatomic, getter=isEndingCallForLockButtonPress) _Bool endingCallForLockButtonPress; // @synthesize endingCallForLockButtonPress=_endingCallForLockButtonPress;
@property(retain, nonatomic) SBRemoteAlertAdapter *currentActiveInCallAlert; // @synthesize currentActiveInCallAlert=_currentActiveInCallAlert;
- (void)maybeLockUIAfterCallEnded;
- (void)reactivateAlertForActivityContinuationWithActivityIdentifier:(id)arg1;
- (void)reactivateAlertForLockButtonPress;
- (void)reactivateAlertFromLockScreenWithUIUnlock:(_Bool)arg1 disableAnimatedTransition:(_Bool)arg2;
- (void)reactivateAlertFromStatusBarTap;
- (id)init;

@end

