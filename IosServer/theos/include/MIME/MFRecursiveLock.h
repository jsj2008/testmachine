/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFLockObject.h"
#import <Foundation/NSLock.h>

@class NSString;

@interface MFRecursiveLock : NSRecursiveLock <MFLockObject> {
  NSString* _name;
  id _delegate;
}
+(void)initialize;
// inherited: -(id)init;
// in a protocol: -(id)initWithName:(id)name andDelegate:(id)delegate;
// in a protocol: -(BOOL)isLockedByMe;
// inherited: -(void)lock;
// inherited: -(BOOL)tryLock;
// inherited: -(BOOL)lockBeforeDate:(id)date;
// inherited: -(void)unlock;
// inherited: -(id)description;
// inherited: -(void)dealloc;
@end

