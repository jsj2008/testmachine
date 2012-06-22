/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>

@class UIKBKey, UIKBKeyplane;

@interface UIKBKeyCacheEntry : NSObject {
  UIKBKey* m_key;
  UIKBKeyplane* m_keyplane;
}
@property(readonly, retain, nonatomic) UIKBKey* key;
@property(readonly, retain, nonatomic) UIKBKeyplane* keyplane;
-(id)initWithKey:(id)key keyPlane:(id)plane;
@end
