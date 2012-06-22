/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "UILongPressGestureRecognizer.h"

@class UIDelayedAction, UIView;
@protocol UITextSelectingContainer;

@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {
  UIView<UITextSelectingContainer>* _containerView;
  UIDelayedAction* _secondDelayTimer;
  double _secondDelay;
  BOOL _secondDelayElapsed;
  id _userData;
}
@property(assign, nonatomic) UIView<UITextSelectingContainer>* containerView;
@property(assign, nonatomic) double secondDelay;
@property(readonly, assign, nonatomic) BOOL secondDelayElapsed;
@property(assign, nonatomic) id userData;
-(void)reset;
-(void)setState:(int)state;
-(void)secondDelayElapsed:(id)elapsed;
-(void)startTimer;
-(void)clearTimer;
@end

