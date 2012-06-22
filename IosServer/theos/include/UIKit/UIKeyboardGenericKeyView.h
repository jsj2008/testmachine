/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "UIKeyboardKeyView.h"

@class NSString;

@interface UIKeyboardGenericKeyView : UIKeyboardKeyView {
  id _target;
  SEL _action;
  NSString* _label;
  int _location;
  BOOL _isMouseInside;
}
-(id)initWithFrame:(CGRect)frame target:(id)target action:(SEL)action;
-(void)setLabel:(id)label;
-(void)setLocation:(int)location;
-(id)localizedString;
-(CFDataRef)createCacheKey;
-(id)image;
-(void)mouseDown:(GSEventRef)down;
-(void)mouseUp:(GSEventRef)up;
@end

