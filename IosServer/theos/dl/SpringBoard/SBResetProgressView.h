/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class UIBezierPath, UIColor;

@interface SBResetProgressView : UIView {
  UIColor* _progressColor;
  UIBezierPath* _path;
  float _resetProgress;
}
+(CGSize)defaultSize;
// inherited: -(void)dealloc;
-(void)setResetProgress:(float)progress;
-(id)_outlinePath;
-(id)_progressColor;
-(void)drawRect:(CGRect)rect;
@end

