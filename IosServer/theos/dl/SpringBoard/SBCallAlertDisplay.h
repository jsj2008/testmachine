/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBSlidingAlertDisplay.h"


@interface SBCallAlertDisplay : SBSlidingAlertDisplay {
  BOOL _wasToldToStopRinging;
  BOOL _answered;
  BOOL _pendingRing;
}
+(id)createBottomLockBarForDisplay:(id)display;
// inherited: +(id)createBottomBarForInstance:(id)instance;
// inherited: -(void)dealloc;
-(void)ringOrVibrate;
-(void)stopRingingOrVibrating;
-(BOOL)wasToldToStopRinging;
-(void)ringerChanged;
-(void)updateLCDWithName:(id)name label:(id)label breakPoint:(unsigned)point;
-(void)updateImageFromPerson:(void*)person;
-(void)updateCallInformationFromAlert;
// inherited: -(void)setAlert:(id)alert;
// inherited: -(BOOL)shouldEnableWirelessLCD;
-(void)checkForStatusChange;
-(void)_ringIfNecessary;
// inherited: -(void)alertDisplayWillBecomeVisible;
// inherited: -(void)alertDisplayBecameVisible;
// inherited: -(void)finishedAnimatingIn;
-(id)additionalURLParameter;
-(void)answerCall:(CTCallRef)call;
-(void)answerAndRelease;
-(void)answer:(id)answer;
-(void)lockBarUnlocked:(id)unlocked;
// inherited: -(void)dismiss;
-(void)ignoreAndRelease;
-(void)ignore;
-(void)handleVolumeEvent:(GSEventRef)event;
@end

