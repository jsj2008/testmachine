/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface IMAPCommandPipeline : NSObject {
	unsigned _chunkSize;
	unsigned _expectedSize;
	unsigned _full : 1;
	unsigned _sending : 1;
	NSMutableArray* _fetchUnits;
}
// inherited: -(void)dealloc;
-(void)addFetchCommandForUid:(unsigned long)uid fetchItem:(id)item expectedLength:(unsigned long)length;
-(unsigned long)expectedSize;
-(void)setChunkSize:(unsigned long)size;
-(unsigned long)chunkSize;
-(void)setFull:(BOOL)full;
-(BOOL)isFull;
-(void)_removeFetchUnitMatchingResponse:(id)response;
-(id)failureResponsesFromSendingCommandsWithConnection:(id)connection;
-(BOOL)isSending;
@end
