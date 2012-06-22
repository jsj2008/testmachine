/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>
#import "DAMessagePayloadFetchResponse.h"

@class NSData;

@interface DAMessagePayloadFetchResponseImpl : NSObject <DAMessagePayloadFetchResponse> {
  BOOL streaming;
  BOOL streamingDone;
  NSData* data;
}
-(id)initWithData:(id)data streaming:(BOOL)streaming streamingDone:(BOOL)done;
// in a protocol: -(BOOL)streaming;
// in a protocol: -(BOOL)streamingDone;
// in a protocol: -(id)data;
// inherited: -(void)dealloc;
@end

