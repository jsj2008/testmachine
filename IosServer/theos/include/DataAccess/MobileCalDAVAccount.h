/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "MobileCalDAVAccount.h"
#import "DAAccount.h"

@class NSMutableSet, NSSet, NSURL, DAVSession, CalDAVSettingsTemplate, NSDate, CalDAVAccount, CalDAVPrincipal, NSString, NSTimeZone, CalDAVServerVersion;
@protocol DAValidityCheckConsumer;

@interface MobileCalDAVAccount : DAAccount {
  CalDAVAccount* _account;
  CalDAVSettingsTemplate* _settingsTemplate;
  CalDAVPrincipal* _principal;
  int _preferredDaysToSync;
  NSMutableSet* _calendarUserAddresses;
  NSMutableSet* _calendars;
  BOOL _isSpinning;
  id<DAValidityCheckConsumer> _validityConsumer;
}
@property(retain) NSSet* calendarUserAddresses;
@property(retain) NSSet* calendars;
@property(readonly, assign) BOOL shouldFilterSyncTimeRange;
@property(readonly, assign) NSDate* ocurrenceCacheEndDate;
@property(readonly, assign) NSDate* ocurrenceCacheStartDate;
@property(readonly, assign) NSTimeZone* viewedTimeZone;
@property(assign) int preferredDaysToSync;
@property(assign) CalDAVServerVersion* serverVersion;
@property(assign) int calDAVAccountVersion;
@property(readonly, assign) DAVSession* session;
@property(assign) BOOL isWritable;
@property(assign) BOOL keepOffline;
@property(retain) NSString* fullName;
@property(retain) NSString* dropBoxPath;
@property(retain) NSString* outboxPath;
@property(retain) NSString* inboxPath;
@property(retain) NSString* notificationsPath;
@property(retain) NSString* calendarHomePath;
@property(retain) NSURL* principalURL;
@property(retain) NSString* scheme;
@property(retain) NSString* server;
@property(retain) NSString* login;
@property(retain) CalDAVPrincipal* principal;
@property(retain) CalDAVSettingsTemplate* settingsTemplate;
@property(retain) CalDAVAccount* account;
// inherited: +(id)defaultProperties;
// inherited: +(Class)accountClass;
// inherited: +(Class)clientClass;
+(id)supportedDataclasses;
// inherited: -(id)initWithProperties:(id)properties;
// inherited: -(id)init;
// inherited: -(void)dealloc;
// inherited: -(id)properties;
// inherited: -(BOOL)supportsAccountType:(int)type;
-(BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded accountManager:(id)manager;
// inherited: -(BOOL)upgradeAccountIfNecessaryWithAccountManager:(id)accountManager;
// inherited: -(id)username;
// inherited: -(void)setUsername:(id)username;
// inherited: -(void)setHost:(id)host;
// inherited: -(id)host;
// inherited: -(void)setPort:(int)port;
// inherited: -(int)port;
// inherited: -(void)setUseSSL:(BOOL)ssl;
// inherited: -(BOOL)useSSL;
// inherited: -(void)setPassword:(id)password;
// inherited: -(void)setAccountDescription:(id)description;
-(BOOL)hasCalendarUserAddress:(id)address;
-(void)addCalendarUserAddress:(id)address;
-(void)removeCalendarUserAddress:(id)address;
-(void)addCalendar:(id)calendar;
-(void)removeCalendar:(id)calendar;
-(id)dateToSyncFrom;
-(id)dateToSyncTo;
-(BOOL)_updateCalendarStoreProperties:(void*)properties;
-(void)_updateCalendarStore:(BOOL)store;
-(void)_setSpinning:(BOOL)spinning;
-(BOOL)isPendingRefresh;
-(BOOL)isRefreshing;
-(void)cancelRefresh;
-(void)refreshWithContext:(id)context;
-(void)refreshOperation:(id)operation didCompleteWithError:(id)error;
// inherited: -(id)urlForKeychain;
// inherited: -(void)checkValidityWithConsumer:(id)consumer;
-(void)verifyOperationSucceeded:(BOOL)succeeded error:(id)error;
-(id)_powerAssertionContext;
-(id)_powerAssertionGroupIdentifier;
-(void)retainPowerAssertion;
-(void)releasePowerAssertion;
-(void)dropPowerAssertions;
-(void)reattainPowerAssertions;
@end

@interface MobileCalDAVAccount (DAVSessionCertificateDelegateCallbacks)
-(void)davSessionShouldAllowTrustInfo:(id)davSession;
@end

