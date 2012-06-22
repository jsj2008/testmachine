/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "ComposeRecipient.h"
#import "MessageUI-Structs.h"
#import <Foundation/NSObject.h>

@class NSString;

@interface ComposeRecipient : NSObject {
  void* _record;
  int _property;
  int _identifier;
  NSString* _address;
  NSString* _label;
}
+(id)recipientWithRecord:(void*)record property:(int)property identifier:(int)identifier;
+(id)recipientWithProperty:(int)property address:(id)address;
-(id)initWithRecord:(void*)record property:(int)property identifier:(int)identifier address:(id)address;
-(int)property;
-(void*)record;
-(id)address;
-(id)commentedAddress;
-(id)label;
-(int)identifier;
-(id)copyWithZone:(NSZone*)zone;
-(id)displayString;
-(id)uncommentedAddress;
-(id)_unformattedAddress;
// inherited: -(BOOL)isEqual:(id)equal;
// inherited: -(unsigned)hash;
// inherited: -(void)dealloc;
@end

@interface ComposeRecipient (GALComposeRecipient)
+(id)recipientWithGALResult:(id)galresult;
@end

