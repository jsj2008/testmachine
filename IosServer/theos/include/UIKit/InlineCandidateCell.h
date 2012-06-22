/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class UIFont, NSString;

@interface InlineCandidateCell : UIView {
  NSString* _candidate;
  unsigned _index;
  UIFont* _font;
  CGSize _stringImageSize;
  BOOL _highlighted;
  id _target;
  SEL _action;
  BOOL _lastItem;
  BOOL _dontDrawRightEdge;
}
-(id)initWithCandidate:(id)candidate andIndex:(unsigned)index withFontSize:(float)fontSize target:(id)target action:(SEL)action;
-(void)dealloc;
-(CGSize)stringImageSize;
-(unsigned)index;
-(void)dontDrawRightEdge:(BOOL)edge;
-(void)setLastItem:(BOOL)item;
-(BOOL)ignoresMouseEvents;
-(void)setHighlighted:(BOOL)highlighted;
-(void)drawRect:(CGRect)rect;
@end

