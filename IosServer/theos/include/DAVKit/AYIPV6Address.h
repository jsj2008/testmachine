/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVKit-Structs.h"
#import "AYAddress.h"


@interface AYIPV6Address : AYAddress {
  struct sockaddr_in6 _saddr;
}
-(id)initWithSockaddrBuffer:(struct sockaddr*)sockaddrBuffer;
// inherited: -(id)type;
// inherited: -(id)addressAsString;
// inherited: -(int)port;
// inherited: -(BOOL)isLocalAddressConnectingTo:(id)to;
// inherited: -(id)addressAsData;
// inherited: -(void)getAddressAsSockAddr:(sockaddr*)addr length:(int*)length;
// inherited: -(id)URLToAddressWithScheme:(id)scheme andPort:(int)port URI:(id)uri;
// inherited: -(void)dumpInternal;
@end

