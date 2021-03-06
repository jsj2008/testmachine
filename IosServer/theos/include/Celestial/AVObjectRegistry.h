/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSRecursiveLock;

@interface AVObjectRegistry : NSObject {
  NSMutableSet* _registeredObjects;
  NSRecursiveLock* _lock;
}
+(id)defaultObjectRegistry;
-(id)init;
-(void)dealloc;
-(void)registerObjectForSafeRetain:(id)safeRetain;
-(BOOL)safeRetainObject:(id)object;
-(void)finishedRelease;
-(BOOL)shouldReleaseObject:(id)object requireThread:(id)thread;
-(void)registerObject:(id)object;
-(void)unregisterObject:(id)object;
-(BOOL)isObjectRegistered:(id)registered;
-(void)safeInvokeWithDescription:(id)description;
-(void)safeInvokeWithDescriptionDelayed:(id)descriptionDelayed;
-(void)safePerformTarget:(id)target selector:(SEL)selector object:(id)object delay:(double)delay;
-(void)safePerformOnMainThreadTarget:(id)target selector:(SEL)selector object:(id)object delay:(double)delay;
-(void)safePerformOnMainThreadTarget:(id)target selector:(SEL)selector object:(id)object;
-(void)safePostDelayedNotificationFromMainThreadTarget:(id)mainThreadTarget name:(id)name userInfo:(id)info;
-(void)safePostNotificationFromMainThreadTarget:(id)mainThreadTarget name:(id)name userInfo:(id)info;
-(void)safePerformOnThread:(id)thread target:(id)target selector:(SEL)selector object:(id)object;
-(void)safePostNotificationFromThread:(id)thread target:(id)target name:(id)name userInfo:(id)info;
-(void)safePostDelayedNotificationFromThread:(id)thread target:(id)target name:(id)name userInfo:(id)info;
@end

