/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBDoubleHeightStatusInfo : NSObject {
  int _doubleHeightMode;
  int _priority;
  NSString* _prefixText;
  NSString* _statusText;
  NSString* _bundleID;
}
@property(assign, nonatomic) int doubleHeightMode;
@property(retain, nonatomic) NSString* prefixText;
@property(retain, nonatomic) NSString* statusText;
@property(retain, nonatomic) NSString* bundleID;
@property(assign, nonatomic) int priority;
-(int)compareDoubleHeightInfos:(id)infos;
// inherited: -(void)dealloc;
@end

