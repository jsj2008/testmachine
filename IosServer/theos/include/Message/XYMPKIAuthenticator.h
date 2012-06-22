/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import "SASLAuthenticator.h"

@class YahooAccount;

@interface XYMPKIAuthenticator : SASLAuthenticator {
  BOOL sentInitialResponse;
  YahooAccount* _yahooAccount;
  lockdown_connection* _lockdown;
  BOOL _usedCachedSignature;
}
// inherited: -(id)responseForServerData:(id)serverData;
// inherited: -(id)saslName;
// inherited: -(BOOL)base64EncodeResponseData;
// inherited: -(void)setAuthenticationState:(int)state;
// inherited: -(BOOL)couldRetry;
// inherited: -(void)dealloc;
@end

