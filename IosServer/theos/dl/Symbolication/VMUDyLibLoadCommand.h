/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMULoadCommand.h"

@class NSString, NSDate;

@interface VMUDyLibLoadCommand : VMULoadCommand {
  NSString* _path;
  NSDate* _timestamp;
  unsigned _currentVersion;
  unsigned _compatibilityVersion;
}
// inherited: -(id)initWithMemory:(id)memory;
-(id)path;
-(id)timestamp;
-(unsigned)currentVersion;
-(unsigned)compatibilityVersion;
// inherited: -(BOOL)isDyLib;
// inherited: -(id)description;
// inherited: -(void)dealloc;
@end

