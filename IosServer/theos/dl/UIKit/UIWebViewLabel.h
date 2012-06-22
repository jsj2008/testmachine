/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Availability2.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED < __IPHONE_3_2

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class UIHighlightView, UILabel;

__attribute__((visibility("hidden")))
@interface UIWebViewLabel : UIView {
  UILabel* _label;
  UIHighlightView* _highlight;
}
-(id)initWithFrame:(CGRect)frame;
-(void)sizeToFit;
-(void)setText:(id)text;
-(void)dealloc;
@end

#endif
