/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class NSArray, UIColor, NSMutableArray;

@interface UIHighlightView : UIView {
  UIColor* _color;
  float _cornerRadius;
  CGRect _invertedHighlightClipRect;
  NSArray* _cornerRadii;
  NSMutableArray* _innerBounds;
  NSMutableArray* _innerQuads;
  BOOL _invertHighlight;
}
-(id)initWithFrame:(CGRect)frame;
-(void)cleanUp;
-(void)dealloc;
-(void)setColor:(id)color;
-(void)setCornerRadius:(float)radius;
-(void)setCornerRadii:(id)radii;
-(void)setFrames:(id)frames boundaryRect:(CGRect)rect;
-(void)setQuads:(id)quads boundaryRect:(CGRect)rect;
-(void)setFrame:(CGRect)frame;
-(void)setInvertHighlight:(BOOL)highlight clipRect:(CGRect)rect;
-(void)drawRect:(CGRect)rect;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
@end

