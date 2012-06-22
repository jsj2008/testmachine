/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import <MIME/Message.h>

@class MailAccount, NSString, MailboxUid;
@interface MailMessage : Message {
  unsigned _messageFlags;
  XXStruct_CIR1YD _flags;
  unsigned char _subjectPrefixLength;
}
// inherited: +(void)setMessageClassForStore:(id)store;
+(id)messageWithRFC822Data:(id)rfc822Data;
+(id)forwardedMessagePrefixWithSpacer:(BOOL)spacer;
+(id)replyPrefixWithSpacer:(BOOL)spacer;
+(unsigned)validatePriority:(int)priority;
+(unsigned)displayablePriorityForPriority:(int)priority;
// inherited: -(id)messageStore;
// inherited: -(id)init;
-(unsigned long)messageFlags;
-(void)setMessageFlags:(unsigned long)flags;
-(void)setMessageFlagsWithoutCommitting:(unsigned long)committing;
-(BOOL)colorHasBeenEvaluated;
-(void)setColorHasBeenEvaluated:(BOOL)evaluated;
-(void)setPriorityFromHeaders:(id)headers;
-(int)priority;
// inherited: -(void)loadCachedHeaderValuesFromHeaders:(id)headers;
-(XXStruct_CIR1YD)moreMessageFlags;
-(void)markAsViewed;
-(void)markAsNotViewed;
-(void)markAsReplied;
-(void)markAsForwarded;
-(MailboxUid*)mailbox;
-(id)subjectAndPrefixLength:(unsigned*)length;
-(NSString*)subjectNotIncludingReAndFwdPrefix;
// inherited: -(id)subject;
// inherited: -(void)setSubject:(id)subject;
-(id)loadMeetingExternalID;
-(id)loadMeetingData;
-(MailAccount*)account;
-(id)remoteMailboxURL;
-(NSURL*)originalMailboxURL;
-(id)URL;
// inherited: -(unsigned short)numberOfAttachments;
-(void)setMutableInfoFromMessage:(id)message;
// inherited: -(void)setMessageInfo:(id)info to:(id)to cc:(id)cc sender:(id)sender dateReceivedTimeIntervalSince1970:(double)a1970 dateSentTimeIntervalSince1970:(double)a19706 messageIDHeaderDigest:(id)digest inReplyToHeaderDigest:(id)headerDigest summary:(id)summary;
-(void)setSummary:(id)summary;
-(BOOL)shouldSetSummary;
@end

