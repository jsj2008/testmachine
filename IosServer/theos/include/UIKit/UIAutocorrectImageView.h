/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class UIImage;

@interface UIAutocorrectImageView : UIView {
  UIImage* m_image;
}
+(id)imageWithMaskingView:(id)maskingView maskingRect:(CGRect)rect;
-(id)initWithFrame:(CGRect)frame image:(id)image;
-(id)initWithFrame:(CGRect)frame string:(id)string font:(id)font;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
@end

