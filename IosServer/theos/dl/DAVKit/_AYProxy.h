/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <Foundation/NSProxy.h>

@class AYOperation;

@interface _AYProxy : NSProxy {
  AYOperation* _operation;
  BOOL _asyncLaunch;
}
-(id)initWithOperation:(id)operation;
-(void)setAsyncLaunch:(BOOL)launch;
// inherited: -(BOOL)respondsToSelector:(SEL)selector;
// inherited: -(BOOL)conformsToProtocol:(id)protocol;
// inherited: -(void)forwardInvocation:(id)invocation;
// inherited: -(id)methodSignatureForSelector:(SEL)selector;
// inherited: -(id)description;
@end

