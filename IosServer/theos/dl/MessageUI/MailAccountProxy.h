/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface MailAccountProxy : NSObject {
  NSDictionary* _properties;
}
+(void)reloadAccounts;
+(id)defaultMailAccountForDelivery;
+(id)activeAccounts;
+(id)mailAccounts;
+(id)accountContainingEmailAddress:(id)address includingInactive:(BOOL)inactive;
-(id)_initWithProperties:(id)properties;
// inherited: -(void)dealloc;
-(BOOL)isDefaultDeliveryAccount;
-(id)fullUserName;
-(id)username;
-(id)firstEmailAddress;
-(id)emailAddresses;
-(id)receiveEmailAliasAddresses;
-(id)uniqueID;
-(BOOL)supportsEmoji;
-(BOOL)allowsEmoji;
-(Class)accountType;
@end

