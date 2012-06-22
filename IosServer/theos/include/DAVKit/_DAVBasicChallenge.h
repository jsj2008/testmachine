/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVChallenge.h"
#import "DAVKit-Structs.h"

@class NSString;

@interface _DAVBasicChallenge : DAVChallenge {
  NSString* authString;
}
-(id)initWithAuthString:(id)authString;
// inherited: -(void)dealloc;
// inherited: -(BOOL)addAuthHeaderToMessage:(CFHTTPMessageRef)message;
@end

