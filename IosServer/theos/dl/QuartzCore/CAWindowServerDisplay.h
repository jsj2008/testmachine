/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <Foundation/NSObject.h>

@class NSString;

@interface CAWindowServerDisplay : NSObject {
@private
  void* _impl;
}
@property(copy) NSString* TVSignalType;
@property(copy) NSString* TVMode;
@property(assign) BOOL invertsColors;
@property(assign, getter=isBlanked) BOOL blanked;
@property(readonly, assign) unsigned rendererFlags;
@property(readonly, assign) NSString* deviceName;
@property(readonly, assign) NSString* name;
@property(readonly, assign) CGRect bounds;
-(id)_initWithCADisplayServer:(Server*)cadisplayServer;
-(void)invalidate;
// inherited: -(void)dealloc;
-(id)contextIdsWithClientPort:(unsigned)clientPort;
-(unsigned)contextIdAtPosition:(CGPoint)position;
-(unsigned)clientPortAtPosition:(CGPoint)position;
-(CGRect)frameOfContextId:(unsigned)contextId;
-(CGPoint)convertPoint:(CGPoint)point toContextId:(unsigned)contextId;
// inherited: -(id)description;
@end

