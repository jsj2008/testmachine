/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSStream.h>
#import "DataAccess-Structs.h"

@class NSData;

@interface DAConvertCRtoCRLFStream : NSInputStream {
  NSData* _data;
  unsigned _readOffset;
  BOOL _lastByteCopiedWasCR;
  BOOL _openEventSent;
  unsigned _streamStatus;
  id _delegate;
  CFRunLoopSourceRef _rls;
  /*function-pointer*/ void* _clientCallback;
  XXStruct_4pnlqD _clientContext;
}
-(void)_streamEventTrigger;
-(void)_scheduleCallback;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;
-(BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void*)callback context:(XXStruct_4pnlqD*)context;
-(void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;
-(void)removeFromRunLoop:(id)runLoop forMode:(id)mode;
-(void)open;
-(void)close;
-(id)delegate;
-(void)setDelegate:(id)delegate;
-(unsigned)streamStatus;
-(int)read:(char*)read maxLength:(unsigned)length;
-(BOOL)hasBytesAvailable;
-(BOOL)getBuffer:(char**)buffer length:(unsigned*)length;
-(id)initWithData:(id)data;
// inherited: -(void)dealloc;
@end

