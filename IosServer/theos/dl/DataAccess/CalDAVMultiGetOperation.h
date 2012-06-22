/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DAVKit/AYOperation.h>

@class NSArray, DAVSession, NSString;

@interface CalDAVMultiGetOperation : AYOperation {
  NSString* _uri;
  NSArray* _resourceURIs;
  DAVSession* _session;
}
-(id)initWithSession:(id)session URI:(id)uri resources:(id)resources;
// inherited: -(void)dealloc;
-(id)resourceURIs;
-(id)resources;
-(void)getResources;
@end

