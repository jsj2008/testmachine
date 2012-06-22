/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UILabel.h>
#import "UIKit-Structs.h"

@class NSString;

@interface UITableViewCountView : UILabel {
  NSString* _countString;
  int _count;
}
-(id)initWithFrame:(CGRect)frame withCountString:(id)countString withCount:(int)count;
-(void)dealloc;
-(void)setCountString:(id)string withCount:(int)count;
-(void)setCount:(int)count;
-(int)count;
@end

