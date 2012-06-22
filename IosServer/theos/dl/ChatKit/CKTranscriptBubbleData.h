/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "CKTranscriptBubbleData.h"
#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray;

@interface CKTranscriptBubbleData : NSObject {
  NSMutableArray* _bubbleDataArray;
  float _balloonWidth;
  NSDate* _nextEligibleTimestamp;
}
@property(assign, nonatomic) float balloonWidth;
+(Class)balloonClassForMessagePart:(id)messagePart;
+(Class)balloonClassForFlags:(unsigned long)flags;
+(Class)balloonClassForMessage:(id)message;
+(unsigned long)_processFlags:(unsigned long)flags forText:(id)text;
-(void)dealloc;
-(int)count;
-(id)data:(int)data forIndex:(int)index;
-(id)bubbleDataForIndex:(int)index;
-(BOOL)bubbleData:(id)data isEqualToIndex:(int)index;
-(id)deleteMessageAtIndex:(int)index;
-(void)appendBubbleDataForMessage:(id)message;
-(void)clearBubbleData;
-(void)_createArrayIfNeeded;
-(void)_createBubbleInfoForImage:(id)image part:(id)part subject:(id)subject;
-(void)_appendTextMessage:(id)message part:(id)part height:(int)height text:(id)text subject:(id)subject bubbleClass:(Class)aClass messageContinuation:(BOOL)continuation;
-(void)_createSegmentArrayForMessageText:(id)messageText height:(unsigned*)height message:(id)message subject:(id)subject part:(id)part messageContinuation:(BOOL)continuation;
-(void)_createBubbleInfoForTextMessage:(id)textMessage part:(id)part subject:(id)subject;
-(void)_appendDateForMessageIfNeeded:(id)messageIfNeeded;
-(void)_appendEntity:(id)entity;
-(void)_appendDate:(id)date;
-(void)_appendEntityForMessageIfNeeded:(id)messageIfNeeded;
-(void)_setupNextEligibleTimestamp:(id)timestamp;
-(BOOL)_shouldShowTimestampForDate:(id)date;
@end

@interface CKTranscriptBubbleData (ConvenienceAndClarity)
-(int)typeAtIndex:(int)index;
-(id)entityAtIndex:(int)index;
-(id)messageAtIndex:(int)index;
-(id)dateAtIndex:(int)index;
-(id)partAtIndex:(int)index;
-(id)textAtIndex:(int)index;
-(id)subjectAtIndex:(int)index;
-(int)heightAtIndex:(int)index;
-(Class)balloonClassAtIndex:(int)index;
-(BOOL)isSubjectPlaceholderAtIndex:(int)index;
-(BOOL)isMessageContinuationAtIndex:(int)index;
@end

