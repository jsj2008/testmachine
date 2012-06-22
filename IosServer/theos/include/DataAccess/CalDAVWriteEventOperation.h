/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class ICSCalendar, NSString, NSURL, CalDAVCacheManager, CalDAVAccount;

@interface CalDAVWriteEventOperation : NSObject {
  ICSCalendar* _calendar;
  NSURL* _calendarURL;
  BOOL _overwrite;
  CalDAVAccount* _account;
  CalDAVCacheManager* _cache;
  NSString* _resourcePath;
  BOOL _wasResourceModifiedByServer;
}
@property(readonly, assign, nonatomic) BOOL wasResourceModifiedByServer;
@property(readonly, assign, nonatomic) NSString* resourcePath;
-(id)initWithCalendar:(id)calendar overwrite:(BOOL)overwrite calendarURL:(id)url account:(id)account cache:(id)cache;
// inherited: -(void)dealloc;
-(void)performOperation:(BOOL)operation;
@end

