/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DAMessageFetchAttachmentRequest : NSObject {
  NSString* _messageID;
  NSString* _attachmentName;
}
-(id)initWithAttachmentName:(id)attachmentName andMessageServerID:(id)anId;
// inherited: -(void)dealloc;
-(id)messageID;
-(id)attachmentName;
@end

