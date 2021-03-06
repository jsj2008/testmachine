/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import <Foundation/NSObject.h>
#import "UIKit-Structs.h"

@class NSString, UIImage, UIColor;

@interface UIButtonContent : NSObject <NSCoding, NSCopying> {
  NSString* title;
  UIImage* image;
  UIImage* background;
  UIColor* titleColor;
  UIColor* shadowColor;
}
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) UIImage* image;
@property(retain, nonatomic) UIImage* background;
@property(retain, nonatomic) UIColor* titleColor;
@property(retain, nonatomic) UIColor* shadowColor;
@property(readonly, assign, nonatomic) BOOL isEmpty;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)description;
@end

