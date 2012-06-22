/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class SBStatusBarContentsView;

@interface SBStatusBarContentView : UIView {
  SBStatusBarContentsView* _contentsView;
  int _mode;
}
-(id)initWithContentsView:(id)contentsView;
// inherited: -(id)initWithFrame:(CGRect)frame;
-(void)setMode:(int)mode;
-(int)effectiveModeForImages;
-(void)start;
-(void)stop;
-(id)textFont;
-(void)drawText:(id)text atPoint:(CGPoint)point forWidth:(float)width lineBreakMode:(int)mode;
-(void)enableShadow;
-(int)priority;
-(int)compare:(id)compare;
-(void)setVisible:(BOOL)visible;
-(BOOL)isVisible;
-(BOOL)showOnLeft;
-(void)setShowOnLeft:(BOOL)left;
-(float)padding;
-(void)setOverlap:(float)overlap;
-(float)overlap;
@end

