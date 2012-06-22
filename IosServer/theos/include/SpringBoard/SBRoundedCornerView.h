/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Availability2.h>

#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2

#import "SpringBoard-Structs.h"
#import <UIKit/UIKit.h>

@class SBClipCornerView;

@interface SBRoundedCornerView : UIView {
  SBClipCornerView* _clipCornerViews[4];
  CGFloat _cornerRadius;
  CGFloat _cornerSize;
  CGFloat _edgeInset;
  UIImageView* _imageSuperview;
}
-(id)initWithCornerRadius:(CGFloat)cornerRadius size:(CGFloat)size inset:(CGFloat)inset imageSuperview:(UIView *)superview;
-(CGPoint)_originForCornerIndex:(int)cornerIndex withBoundsSize:(CGSize)boundsSize;
-(void)_layoutSubviews;
-(void)setFrame:(CGRect)frame;
// inherited: -(void)dealloc;
@end

#endif
