/**
 * This header is generated by class-dump-z 0.1-11s.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "InvocationTrampoline.h"

@class NSOperationQueue;

@interface OperationQueueInvocationTrampoline : InvocationTrampoline {
  NSOperationQueue* _queue;
  int _priority;
}
-(id)initWithTarget:(id)target operationQueue:(id)queue priority:(int)priority;
// inherited: -(void)dealloc;
// inherited: -(void)forwardInvocation:(id)invocation;
@end

