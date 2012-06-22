/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import "YahooAccount.h"
#import "IMAPAccount.h"

@class NSString, NSRecursiveLock;

@interface YahooAccount : IMAPAccount {
  CFSocketRef _socket;
  CFRunLoopSourceRef _socketRunLoopSource;
  void* _manager;
  unsigned _nonce;
  BOOL _initializedDeviceID;
  unsigned char _deviceID[16];
  unsigned short _sequenceNumber;
  NSRecursiveLock* _cookieLock;
  double _timeLastReceivedPacket;
  double _timeLastSentPacket;
  double _timeLastProvisioned;
  BOOL _shouldListenForNotifications;
  BOOL _shouldStartListeningForNotifications;
  double _timeLastEncounteredAuthenticationError;
  NSString* _temporaryPassword;
  NSString* _signature;
  int _stores;
}
// inherited: +(void)initialize;
+(id)emailAddressHostPart;
// inherited: +(id)displayedAccountTypeString;
// inherited: +(BOOL)isPredefinedAccountType;
// inherited: +(id)createAccountWithDictionary:(id)dictionary;
+(id)deliveryAccountHostname;
+(BOOL)deliveryAccountUsesSSL;
+(unsigned)deliveryAccountPortNumber;
+(id)accountInfoValueForKey:(id)key value:(id)value;
// inherited: +(BOOL)isSSLEditable;
// inherited: +(id)hostname;
// inherited: +(BOOL)usernameIsEmailAddress;
// inherited: +(BOOL)getConfigurationFromServerForEmail:(id)email;
// inherited: -(id)init;
-(id)_deliveryAccountCreateIfNeeded:(BOOL)needed;
-(id)_defaultSpecialMailboxNameForType:(int)type;
// inherited: -(id)hostname;
// inherited: -(unsigned)portNumber;
// inherited: -(id)preferredAuthScheme;
// inherited: -(Class)connectionClass;
-(id)accountNameForKeychain;
-(void)setCookie:(id)cookie forKey:(id)key;
-(void)removeCookie:(id)cookie;
-(void)setSecurityToken:(id)token;
-(id)securityToken;
-(id)cookieForKey:(id)key;
-(void)cookiesExpired;
// inherited: -(id)password;
// inherited: -(void)setPassword:(id)password;
-(id)temporaryPassword;
// inherited: -(BOOL)storesPassword;
// inherited: -(BOOL)needsCredentials;
// inherited: -(BOOL)acquireCredentialsWithPassword:(id)password;
// inherited: -(id)emailAddresses;
// inherited: -(id)valueInAccountInfoForKey:(id)key;
// inherited: -(id)transferDisabledMailboxUids;
-(void)scheduleSource;
-(void)scheduleRetryLater;
-(void)sendKeepalive:(id)keepalive;
-(void)cancelKeepalive;
-(void)scheduleKeepaliveImmediately;
-(void)scheduleKeepaliveAfterDelay;
-(void)_scheduleWakeAtDate:(id)date;
-(void)scheduleTimer;
// inherited: -(void)startListeningForNotifications;
-(void)startupListener;
-(void)removeSource:(CFRunLoopSourceRef)source;
-(void)shutdownListener;
-(void)_reallyStopListeningForNotifications;
// inherited: -(void)stopListeningForNotifications;
-(void)sendUDPAuthentication;
// inherited: -(BOOL)_canReceiveNewMailNotifications;
// inherited: -(unsigned)minUID;
// inherited: -(id)connectionForStore:(id)store delegate:(id)delegate options:(int)options;
-(id)URLForMessage:(id)message;
// inherited: -(BOOL)canForwardWithoutDownload;
// inherited: -(BOOL)isPasswordMissing;
-(id)XYMPKISignature;
-(void)setXYMPKISignature:(id)signature;
// inherited: -(id)displayUsername;
// inherited: -(BOOL)archiveSentMessages;
// inherited: -(BOOL)shouldDisplayHostnameInErrorMessages;
// inherited: -(void)dealloc;
@end

@interface YahooAccount (Internal)
-(id)apiHostname;
-(id)yahooParameterForKey:(id)key;
-(id)devtypeParameter;
@end

@interface YahooAccount (Delivery)
-(id)errorForDeliveryResponse:(id)deliveryResponse;
@end

