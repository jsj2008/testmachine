/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "DAMessageMoveRequestConsumer.h"
#import "DAMailAccountConsumer.h"

@class NSMutableArray, NSDictionary, MFError;

@interface SimpleMoveResponseConsumer : DAMailAccountConsumer <DAMessageMoveRequestConsumer> {
  NSDictionary* messagesByMessageID;
  NSMutableArray* failedMessages;
  MFError* _error;
}
@property(retain, nonatomic) MFError* error;
// in a protocol: -(void)actionFailed:(int)failed forTask:(id)task error:(id)error;
// in a protocol: -(void)resultsForMessageMove:(id)messageMove;
// inherited: -(void)dealloc;
@end

