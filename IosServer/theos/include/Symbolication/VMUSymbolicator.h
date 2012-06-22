/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUSymbolicator.h"
#import "Symbolication-Structs.h"
#import <Foundation/NSObject.h>

@class VMUMachTaskContainer, NSMutableArray, NSString, NSArray, NSDictionary, VMUArchitecture;

@interface VMUSymbolicator : NSObject {
  NSMutableArray* _symbolOwners;
  NSArray* _symbolOwnerAddressRanges;
  NSString* _path;
  VMUMachTaskContainer* _machTaskContainer;
  BOOL _isProtected;
}
+(NSArray*)symbolicatorsForPath:(NSString*)path;
+(VMUSymbolicator*)symbolicatorForPath:(NSString*)path architecture:(VMUArchitecture*)architecture;
+(VMUSymbolicator*)symbolicatorForTask:(unsigned)task;
+(VMUSymbolicator*)symbolicatorForPid:(int)pid;
+(VMUSymbolicator*)symbolicatorForMachTaskContainer:(id)machTaskContainer;
+(VMUSymbolicator*)symbolicatorForSignature:(NSDictionary*)signature;
-(id)faultLazySymbolOwnerAtIndex:(int)index;
-(BOOL)addSymbolRichFile:(id)file;
-(void)replaceSymbolOwner:(id)owner withSymbolOwner:(id)symbolOwner;
-(BOOL)containsAddress:(unsigned long long)address;
-(id)regions;
-(id)regionForAddress:(unsigned long long)address;
-(id)regionsInAddressRange:(VMURange)addressRange;
-(id)regionsForName:(id)name;
-(id)symbolForAddress:(unsigned long long)address;
-(id)sourceInfoForAddress:(unsigned long long)address;
-(id)symbolOwnerForAddress:(unsigned long long)address;
-(id)symbolOwnersInAddressRange:(VMURange)addressRange;
-(id)symbolsForName:(id)name;
-(id)symbolsForMangledName:(id)mangledName;
-(id)symbolOwnersForName:(id)name;
-(id)symbolOwnerForName:(id)name;
-(id)symbolOwnersWithFlags:(unsigned)flags;
-(id)symbolOwnerForPath:(id)path;
-(id)symbols;
-(id)sourceInfos;
-(id)symbolOwners;
-(id)symbolsInAddressRange:(VMURange)addressRange;
-(id)sourceInfosInAddressRange:(VMURange)addressRange;
-(id)path;
-(int)pid;
-(NSDictionary*)signature;
-(BOOL)isProtected;
-(void)forceFullSymbolExtraction;
-(id)architecture;
// inherited: -(id)description;
// inherited: -(void)dealloc;
@end

@interface VMUSymbolicator (Private)
+(id)convertHeaderToSymbolOwner:(id)symbolOwner allowLazySymbolOwners:(BOOL)owners;
+(id)symbolicatorWithHeaders:(id)headers allowLazySymbolOwners:(BOOL)owners path:(id)path machTaskContainer:(id)container;
+(id)symbolicatorWithSymbolOwners:(id)symbolOwners path:(id)path machTaskContainer:(id)container;
+(id)ignoreFunctionSymbols:(BOOL)symbols;
+(BOOL)isIgnoreFunctionSymbols;
-(id)initWithSymbolOwners:(id)symbolOwners path:(id)path machTaskContainer:(id)container;
-(id)programTextForAddress:(unsigned long long)address;
-(id)programTextForAddressRange:(VMURange)addressRange;
-(id)symbolForOneAddress:(unsigned long long)oneAddress;
@end

@interface VMUSymbolicator (PerformanceOptimization)
-(id)symbolOwnerNameForAddress:(unsigned long long)address;
@end

