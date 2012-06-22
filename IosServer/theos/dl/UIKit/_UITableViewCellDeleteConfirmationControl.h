/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UIControl.h>
#import "UIKit-Structs.h"

@class NSString;

@interface _UITableViewCellDeleteConfirmationControl : UIControl {
  NSString* _title;
}
@property(readonly, assign, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) CGSize size;
+(CGSize)defaultSizeForTitle:(id)title;
+(id)_backgroundImage;
+(id)_highlightedBackgroundImage;
-(id)initWithTitle:(id)title;
-(void)dealloc;
-(void)drawBackgroundInRect:(CGRect)rect;
-(void)drawRect:(CGRect)rect;
@end

