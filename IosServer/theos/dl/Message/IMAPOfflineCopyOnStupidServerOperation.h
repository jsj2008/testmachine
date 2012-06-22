/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "IMAPOperation.h"
#import "Message-Structs.h"


@interface IMAPOfflineCopyOnStupidServerOperation : IMAPOperation {
  CFArrayRef messageIds;
  CFArrayRef internalDates;
}
// inherited: -(void)serializeIntoData:(id)data;
// inherited: -(unsigned char)_magic;
// inherited: -(void)_deserializeOpSpecificValuesFromData:(id)data cursor:(unsigned*)cursor;
// inherited: -(void)dealloc;
// inherited: -(BOOL)getMessageId:(id*)anId andInternalDate:(id*)date forDestinationUid:(unsigned)destinationUid;
// inherited: -(void)setMessageId:(id)anId andInternalDate:(id)date forMessageWithSourceUid:(unsigned)sourceUid;
// inherited: -(void)expungeTemporaryUid:(unsigned)uid;
// inherited: -(unsigned)approximateSize;
@end

