/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIKit.h>
#import <Availability2.h>

@interface SBScreenFlash : NSObject {
  UIWindow* _flashWindow;
  UIView* _flashView;
  BOOL _windowVisible;
}
+(SBScreenFlash *)sharedInstance;
-(void)_tearDown;
-(void)_orderWindowOut:(id)anOut;
-(void)stopFlash;
-(void)flash;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(void)_createUIWithColor:(UIColor *)color;
-(void)_orderWindowFront:(id)front withColor:(UIColor *)color;
-(void)flashColor:(UIColor *)color;
#endif
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2
-(void)_createUI;
-(void)_orderWindowFront:(id)front;
#endif
@end

