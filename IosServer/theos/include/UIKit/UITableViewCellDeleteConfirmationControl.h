/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UIControl.h>
#import "UITableViewCellDeleteConfirmationControl.h"
#import "UIKit-Structs.h"


@interface UITableViewCellDeleteConfirmationControl : UIControl {
  BOOL _visible;
}
@property(assign, nonatomic, getter=isVisible) BOOL visible;
+(CGSize)defaultSizeForTitle:(id)title;
-(id)initWithTitle:(id)title;
-(CGSize)defaultSize;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;
-(BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)endTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)cancelTrackingWithEvent:(id)event;
-(void)setVisible:(BOOL)visible animated:(BOOL)animated;
-(void)layoutSubviews;
-(void)removeFromSuperview;
@end

@interface UITableViewCellDeleteConfirmationControl (UITableViewCellDeleteConfirmationControlStatic)
-(void)_confirmationAnimationDidEnd;
-(void)_setInterceptMouseEvent:(BOOL)event;
-(id)_interceptMouseEvent:(GSEventRef)event;
-(id)_interceptEvent:(id)event;
@end

