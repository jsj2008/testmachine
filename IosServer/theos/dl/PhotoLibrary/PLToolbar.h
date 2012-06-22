/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <UIKit/UIToolbar.h>


@interface PLToolbar : UIToolbar {
@private
  unsigned _backgroundHidden : 1;
  unsigned _backgroundAlwaysVisible : 1;
  UIToolbar* _persistentToolbar;
}
@property(assign, nonatomic, getter=isBackgroundAlwaysVisible) BOOL backgroundAlwaysVisible;
@property(assign, nonatomic, getter=isBackgroundHidden) BOOL backgroundHidden;
// inherited: -(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(BOOL)backgroundHidden;
-(BOOL)backgroundAlwaysVisible;
@end

