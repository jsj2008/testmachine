/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIKit/UIKit.h>


@interface TPBottomBar : UIView {
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
  UIInterfaceOrientation _orientation;
#endif
}
+(UIImage *)_backgroundImage;
+(void)preloadImages;
+(CGFloat)defaultHeight;
-(id)initWithDefaultSize;
-(void)drawRect:(CGRect)rect;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
+(CGFloat)defaultHeightForOrientation:(UIInterfaceOrientation)orientation;
-(id)initWithDefaultSizeForOrientation:(UIInterfaceOrientation)orientation;
-(void)setOrientation:(UIInterfaceOrientation)orientation;
-(UIInterfaceOrientation)orientation;
#endif
@end

