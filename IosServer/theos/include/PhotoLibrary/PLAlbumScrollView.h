/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <UIKit/UIScrollView.h>

@class UIView, NSTimer;
@protocol UIScrollViewDelegate, PLAlbumScrollViewDelegate;

@interface PLAlbumScrollView : UIScrollView {
  BOOL _dragging;
  float _lastX;
  double _lastTimeStamp;
  float _dragSpeed;
  float _grabX;
  CGPoint _grabLoc;
  float _mySpeed;
  float _myX;
  float _destinationX;
  NSTimer* _updateTimer;
  int _lastScrollDirection;
  int _lastDragDirection;
  BOOL _shouldAdvance;
  UIView* _leftBackstopView;
  UIView* _rightBackstopView;
  float _slowDownFactor;
  BOOL _scrollTriggered;
  unsigned _rotationDisabled;
  unsigned _mouseIsDown : 1;
  unsigned _isScrolling : 1;
}
// inherited: @property(assign, nonatomic) id<UIScrollViewDelegate, PLAlbumScrollViewDelegate> delegate;
// inherited: -(id)initWithFrame:(CGRect)frame;
-(void)setRotationDisabled:(BOOL)disabled;
-(void)_setMouseIsDown:(BOOL)down;
-(void)_setIsScrolling:(BOOL)scrolling;
// inherited: -(void)dealloc;
// inherited: -(void)touchesBegan:(id)began withEvent:(id)event;
// inherited: -(void)touchesMoved:(id)moved withEvent:(id)event;
// inherited: -(void)touchesEnded:(id)ended withEvent:(id)event;
// inherited: -(void)touchesCancelled:(id)cancelled withEvent:(id)event;
// inherited: -(void)mouseDown:(GSEventRef)down;
-(void)_updateDragInfoWithTimeInterval:(double)timeInterval event:(GSEventRef)event smoothScrolling:(BOOL)scrolling;
-(void)_updateScrollWithTimeInterval:(double)timeInterval;
-(void)_updateTimerFired:(id)fired;
// inherited: -(void)mouseDragged:(GSEventRef)dragged;
// inherited: -(void)mouseUp:(GSEventRef)up;
-(void)contentMouseUpInView:(id)view withEvent:(GSEventRef)event;
-(void)_releaseDrag;
// inherited: -(BOOL)canBecomeFirstResponder;
-(void)copy:(id)copy;
// inherited: -(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
// inherited: -(void)gestureStarted:(GSEventRef)started;
// inherited: -(void)gestureEnded:(GSEventRef)ended;
// inherited: -(void)gestureChanged:(GSEventRef)changed;
-(BOOL)_alwaysHandleInteractionEvents;
// inherited: -(id)hitTest:(CGPoint)test withEvent:(id)event;
// inherited: -(void)setScrollEnabled:(BOOL)enabled;
// inherited: -(void)setContentSize:(CGSize)size;
// inherited: -(void)setContentOffset:(CGPoint)offset;
-(void)_cancelUpdateTimer;
-(void)_startTimer;
-(BOOL)isSmoothScrolling;
// inherited: -(BOOL)isDragging;
-(int)lastScrollDirection;
-(BOOL)shouldAdvance;
-(void)_doScrollToOffset:(CGPoint)offset animate:(BOOL)animate;
-(void)ensureOffsetToImageBoundary;
-(void)scrollToNextImageWithAnimation:(BOOL)animation offset:(CGPoint)offset;
-(void)scrollToPreviousImageWithAnimation:(BOOL)animation offset:(CGPoint)offset;
@end

