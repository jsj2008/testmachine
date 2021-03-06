/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSMapTable, VMUSymbolicator, NSMutableSet, NSHashTable;

@interface VMUObjectIdentifier : NSObject {
  unsigned _task;
  VMUSymbolicator* _symbolicator;
  NSMapTable* _isaToClassInfo;
  NSHashTable* _classAddresses;
  NSMutableSet* _objcRuntimeMallocBlocks;
  unsigned _cfTypeCount;
  unsigned _objcClassCount;
  unsigned _cPlusPlusClassCount;
}
-(id)initWithTask:(unsigned)task symbolicator:(id)symbolicator;
// inherited: -(void)dealloc;
-(unsigned)CFTypeCount;
-(unsigned)ObjCclassCount;
-(unsigned)CPlusPlusClassCount;
-(id)objcRuntimeMallocBlocks;
-(id)readClassNameString:(unsigned)string;
-(id)classInfoForObject:(unsigned)object;
-(id)typeInfoForObject:(unsigned)object;
-(void)findCFTypes;
-(void)findObjCclasses;
@end

