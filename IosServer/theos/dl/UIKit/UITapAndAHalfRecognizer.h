/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"
#import <Availability2.h>

@class UITouch, NSMutableSet, UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UITapAndAHalfRecognizer : UIGestureRecognizer {
  CGPoint _startPoint;
  float _allowableMovement;
  int _numberOfFullTaps;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
  double _minimumFinalPressDuration;
#endif
  NSMutableSet* _activeTouches;
  int _currentNumberOfTaps;
  UITouch* _touch;
  UIDelayedAction* _tapTimer;
}
@property(assign, nonatomic) int numberOfFullTaps;
@property(retain, nonatomic) UITouch* touch;
@property(assign, nonatomic) float allowableMovement;
@property(assign, nonatomic) double minimumFinalPressDuration __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_2);
// inherited: -(id)initWithTarget:(id)target action:(SEL)action;
// inherited: -(void)dealloc;
// inherited: -(void)reset;
-(void)clearTapTimer;
-(void)startRecognitionTimer:(double)timer;
-(void)startTapTimer:(double)timer;
-(void)tooSlow:(id)slow;
-(void)recognized:(id)recognized;
-(void)_verifyMovementInAllowableRange;
// inherited: -(void)touchesBegan:(id)began withEvent:(id)event;
// inherited: -(void)touchesMoved:(id)moved withEvent:(id)event;
// inherited: -(void)touchesEnded:(id)ended withEvent:(id)event;
// inherited: -(void)touchesCancelled:(id)cancelled withEvent:(id)event;
@end

