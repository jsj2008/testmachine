/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>
#import <Availability2.h>

@class UIImageView, UIImage, UILabel;

@interface SBBatteryChargingView : UIView {
  int _type;
  UIImageView* _topBatteryView;
  UIImageView* _bottomBatteryView;
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2
  UIImageView* _reflectionView;
#endif
  UIImage* _lastBatteryImage;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
  UILabel* _percentLabel;
#endif
  int _lastBatteryIndex;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
  int _lastBatteryPercentage;
#endif
  unsigned _showReflection : 1;
}
+(CGSize)defaultSizeForType:(int)type;
+(float)batteryHeightForType:(int)type;
+(int)redChargeIndexForType:(int)type;
-(id)initWithFrame:(CGRect)frame type:(int)type;
// inherited: -(void)dealloc;
-(void)setShowsReflection:(BOOL)reflection;
-(int)_currentBatteryIndex;
-(id)_imageFormatString;
-(void)_batteryStatusChanged:(id)changed;
@end

