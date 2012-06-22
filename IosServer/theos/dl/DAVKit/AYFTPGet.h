/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVKit-Structs.h"
#import "AYOperation.h"

@class NSURL, NSMutableData, NSString;

@interface AYFTPGet : AYOperation {
  NSURL* _url;
  CFReadStreamRef _readStream;
  CFHostClientContext _clientContext;
  NSString* _username;
  NSString* _password;
  long long _ressourceSize;
  long long _readSize;
  NSMutableData* _readData;
}
+(id)getRequestWithURL:(id)url username:(id)username password:(id)password;
-(id)initGetRequestWithURL:(id)url username:(id)username password:(id)password;
// inherited: -(void)dealloc;
// inherited: -(void)finalize;
// inherited: -(void)resetOperation;
-(void)dispatch;
-(id)data;
// inherited: -(void)endOperationWithError:(id)error;
// inherited: -(BOOL)isRunLoopBased;
-(void)_readStreamEvent:(unsigned long)event;
// inherited: -(long long)operationProgress;
// inherited: -(long long)operationTotal;
@end

