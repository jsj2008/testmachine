/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

typedef struct _VMURange {
  unsigned long long location;
  unsigned long long length;
} VMURange;

typedef struct dyld_image_info_64 {
  unsigned long long _field1;
  unsigned long long _field2;
  unsigned long long _field3;
} dyld_image_info_64;

#include <sys/time.h>
#include <mach-o/nlist.h>
#include <stdio.h>

typedef struct {
  unsigned long _field1;
  unsigned long _field2;
  FILE* _field3;
} XXStruct_MQXXZB;

typedef struct {
  unsigned _field1;
  unsigned _field2;
  unsigned _field3;
  unsigned _field4;
} XXStruct_qFPbxC;

typedef struct {
  unsigned _field1;
  unsigned _field2;
  unsigned _field3;
  unsigned* _field4;
  unsigned _field5;
  unsigned _field6;
  unsigned _field7[2];
  XXStruct_qFPbxC _field8[0];
} XXStruct_KGqEpA;

#if __cplusplus
extern "C" {
#endif
  
  @class NSString;
  
  extern VMURange VMUUnionRange(VMURange a, VMURange b);
  
  static inline VMURange VMURangeMake(unsigned long long location, unsigned long long length) {
    VMURange retval;
    retval.location = location;
    retval.length = length;
    return retval;
  }
  
  static const VMURange VMURangeZero = {0, 0};
  
  extern NSString* VMUSignatureArchitecture;
  extern NSString* VMUSignatureHeaders;
  extern NSString* VMUSignatureModifiedTime;
  extern NSString* VMUSignaturePID;
  extern NSString* VMUSignaturePath;
  extern NSString* VMUSignatureSegmentAddresses;
  extern NSString* VMUSignatureType;
  extern NSString* VMUSignatureTypeMachO;
  extern NSString* VMUSignatureTypeMachOCommpage;
  extern NSString* VMUSignatureTypeSymbolicator;
  extern NSString* VMUSignatureUUID;
  
  
#if __cplusplus
}
#endif
