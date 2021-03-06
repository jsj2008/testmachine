/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIKit/UIButton.h>


@interface MPButton : UIButton {
  UIEdgeInsets _hitRectInsets;
  double _holdDelayInterval;
  unsigned _holding : 1;
}
@property(assign, nonatomic) UIEdgeInsets hitRectInsets;
@property(assign, nonatomic) double holdDelayInterval;
-(id)initWithFrame:(CGRect)frame;
-(BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)cancelTrackingWithEvent:(id)event;
-(void)endTrackingWithTouch:(id)touch withEvent:(id)event;
-(CGRect)hitRect;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)_delayedTriggerHold;
-(void)_handleTouchCancel;
-(void)_handleTouchDown;
-(void)_handleTouchUp;
@end

