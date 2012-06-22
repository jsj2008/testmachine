/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SBDisplayStack : NSObject {
  NSMutableArray* _displayStack;
  /*function-pointer*/ void* _pushCallback;
  /*function-pointer*/ void* _popCallback;
}
// inherited: -(id)init;
// inherited: -(void)dealloc;
-(void)setPushCallBack:(/*function-pointer*/ void*)back;
-(void)setPopCallBack:(/*function-pointer*/ void*)back;
-(BOOL)isEmpty;
-(void)pushDisplay:(id)display;
-(id)pop;
-(id)popDisplay:(id)display;
-(id)displays;
-(BOOL)containsDisplay:(id)display;
-(id)topDisplay;
-(id)topApplication;
-(id)topAlert;
// inherited: -(id)description;
@end

