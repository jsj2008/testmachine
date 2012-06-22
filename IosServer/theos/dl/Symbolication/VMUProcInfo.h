/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>
#import "Symbolication-Structs.h"
#import "SafeVMUProcInfoProtocol.h"

@class NSString, NSArray;

@interface VMUProcInfo : NSObject <SafeVMUProcInfoProtocol> {
  unsigned _task;
  BOOL _needTaskPortDealloc;
  NSString* _name;
  int _cpuType;
  NSArray* _envVars;
  NSString* _procTableName;
  NSString* _realAppName;
  NSString* _requestedAppName;
  NSString* _firstArg;
  int _pid;
  int _ppid;
  struct timeval _startTime;
}
// in a protocol: +(id)getProcessIds;
// in a protocol: +(BOOL)isProcessRunning:(int)running;
// in a protocol: +(int)processParentId:(int)anId;
// inherited: -(id)init;
-(id)initWithPid:(int)pid;
-(id)initWithTask:(unsigned)task;
// inherited: -(void)dealloc;
// inherited: -(void)finalize;
// in a protocol: -(timeval)startTime;
-(id)envVars;
// in a protocol: -(id)procTableName;
-(id)_nameFromCommandLine:(int)commandLine;
// in a protocol: -(id)realAppName;
// in a protocol: -(id)requestedAppName;
// in a protocol: -(id)firstArgument;
// in a protocol: -(id)userAppName;
// in a protocol: -(id)name;
// in a protocol: -(id)description;
// in a protocol: -(int)pid;
// in a protocol: -(int)ppid;
// in a protocol: -(unsigned)task;
-(void)update;
// in a protocol: -(BOOL)isApp;
// in a protocol: -(BOOL)isMachO;
// in a protocol: -(BOOL)isCFM;
// in a protocol: -(int)cpuType;
// in a protocol: -(BOOL)isNative;
// in a protocol: -(BOOL)isRunning;
-(BOOL)terminate;
-(BOOL)signal:(int)signal;
// in a protocol: -(BOOL)isEqual:(id)equal;
// in a protocol: -(int)compare:(id)compare;
// in a protocol: -(int)compareByName:(id)name;
-(int)compareByUserAppName:(id)name;
// in a protocol: -(unsigned)hash;
@end

