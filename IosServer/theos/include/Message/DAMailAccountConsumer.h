/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSConditionLock;

@interface DAMailAccountConsumer : NSObject {
@private
  NSConditionLock* _doneCondition;
}
// inherited: -(id)init;
-(void)setDone:(BOOL)done;
-(BOOL)waitUntilDoneBeforeDate:(id)date;
-(void)waitUntilDone;
// inherited: -(void)dealloc;
@end

