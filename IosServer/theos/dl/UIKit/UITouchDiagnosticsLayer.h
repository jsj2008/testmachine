/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class UIBezierPath;

@interface UITouchDiagnosticsLayer : UIView {
  CFArrayRef _eventQueue;
  UIBezierPath* _hitRectsPath;
  UIBezierPath* _customHitRectsPath;
  UIBezierPath* _chargesPath;
  BOOL _trackTouchEvents;
  BOOL _displayTouchEvents;
  BOOL _displayHitRects;
  BOOL _displayChargeMap;
}
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(BOOL)layerRespondsToEvents:(id)events;
-(void)_addLayerHitRects:(id)rects toPath:(id)path customPath:(id)path3;
-(void)drawChargeMap;
-(void)drawRect:(CGRect)rect;
-(void)diagnoseEvent:(GSEventRef)event;
-(BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;
-(void)refreshHitRects;
-(void)setTrackTouchEvents:(BOOL)events;
-(void)setDisplayHitRects:(BOOL)rects;
-(void)setDisplayTouchEvents:(BOOL)events;
-(void)setDisplayChargeMap:(BOOL)map;
-(void)tearDown;
@end

