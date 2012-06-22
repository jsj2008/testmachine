/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class UIWindow, SBApplication;

@interface SBMiniAlertController : NSObject {
  SBApplication* _displayShowingAnAlert;
  UIWindow* _dimmingWindow;
  unsigned _miniAlertVisible : 1;
}
+(id)sharedInstance;
-(id)dimImageForKeyboard:(BOOL)keyboard;
-(void)showDimmingWindow;
-(void)finishedAnimatingDimWindowOut:(id)anOut didFinish:(id)finish;
-(void)cancelHideDimmingWindow;
-(void)hideDimmingWindowAfterDelay;
-(void)hideDimmingWindow;
-(void)deactivateAlertItemsForDisplay:(id)display;
-(void)displayWillShowMiniAlert:(id)display fenceId:(unsigned)anId;
-(id)displayShowingAnAlert;
-(void)displayWillDismissMiniAlert:(id)display andShowAnother:(BOOL)another fenceId:(unsigned)anId;
-(void)displayDidDismissMiniAlert:(id)display;
-(void)showApplicationMiniAlertsIfNeeded;
-(void)hideApplicationMiniAlerts;
-(void)noteMiniAlertStateChanged;
-(BOOL)miniAlertVisible;
-(BOOL)canShowAlerts;
@end

