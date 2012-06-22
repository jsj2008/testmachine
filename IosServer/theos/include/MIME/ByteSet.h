/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import <Foundation/NSObject.h>


@interface ByteSet : NSObject <NSCopying, NSMutableCopying> {
  BOOL mySet[32];
}
+(id)asciiWhitespaceSet;
+(id)ASCIIByteSet;
+(id)nonASCIIByteSet;
+(id)suspiciousCodepage1252ByteSet;
-(BOOL)byteIsMember:(BOOL)member;
-(id)invertedSet;
-(id)initWithRange:(NSRange)range;
-(id)initWithCString:(const char*)cstring;
-(id)initWithBytes:(const void*)bytes length:(unsigned)length;
-(id)_initWithSet:(const char*)set;
// in a protocol: -(id)copyWithZone:(NSZone*)zone;
// in a protocol: -(id)mutableCopyWithZone:(NSZone*)zone;
@end

