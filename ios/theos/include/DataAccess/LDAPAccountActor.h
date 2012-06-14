/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DAAccountActorMessages.h"
#import <ActorKit/AKActor.h>

@class LDAPAccount;

@interface LDAPAccountActor : AKActor <DAAccountActorMessages> {
	LDAPAccount* _account;
}
// in a protocol: -(oneway void)cancelTaskWithID:(int)anId;
// in a protocol: -(oneway void)performSearchQuery:(id)query consumer:(id)consumer;
// in a protocol: -(oneway void)cancelSearchQuery:(id)query;
// in a protocol: -(oneway void)cancelAllSearchQueries;
// in a protocol: -(BOOL)searchQueriesRunning;
// in a protocol: -(oneway void)startup;
// in a protocol: -(oneway void)setAccount:(id)account;
// in a protocol: -(oneway void)shutdown;
-(void)_findScheduler;
-(id)initWithDAAccount:(id)daaccount;
// inherited: -(void)dealloc;
@end

