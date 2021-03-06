/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class UIColor;

@interface UITableViewCellSelectedBackground : UIView {
  int _selectionStyle;
  UIColor* _multiselectBackgroundColor;
  BOOL _multiselect;
}
@property(assign, nonatomic) int selectionStyle;
@property(retain, nonatomic) UIColor* multiselectBackgroundColor;
@property(assign, nonatomic, getter=isMultiselect) BOOL multiselect;
-(void)drawRect:(CGRect)rect;
-(void)dealloc;
@end

