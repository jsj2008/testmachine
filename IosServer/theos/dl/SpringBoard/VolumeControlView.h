/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Availability2.h>

#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class NSString, UITextLabel;

@interface VolumeControlView : UIView {
  float _volume;
  int _mode;
  BOOL _headphonesPresent;
  UITextLabel* _label1;
  UITextLabel* _label2;
  NSString* _line1;
  NSString* _line2;
}
+(void)loadImages;
+(CGSize)controlSize;
// inherited: -(id)initWithFrame:(CGRect)frame;
-(void)_checkHeadphonesPresent;
-(void)setMode:(int)mode;
-(void)setVolume:(float)volume mode:(int)mode;
-(float)volume;
-(void)_updateLabelStrings;
// inherited: -(void)dealloc;
-(BOOL)_showLabel;
-(void)_drawLine1;
-(void)_drawLine2;
-(void)drawRect:(CGRect)rect;
@end

#endif
