/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "ML3Query.h"

@class NSLock, ML3Predicate, NSString, ML3Container;

@interface ML3ContainerQuery : ML3Query {
@private
  ML3Predicate* _containerPredicate;
  ML3Container* _container;
  NSLock* _limitCountLock;
  unsigned _limitCount;
  BOOL _limitCountLoaded;
}
@property(readonly, assign) ML3Container* container;
@property(readonly, assign) NSString* selectLimitingSQL;
@property(readonly, assign) unsigned limitCount;
-(id)initWithEntityClass:(Class)entityClass container:(id)container predicate:(id)predicate orderingProperties:(id)properties;
-(void)dealloc;
-(BOOL)requiresSmartLimiting;
-(id)selectPersistentIDsSQL;
-(void)bindToPersistentIDsSqlite3Statement:(sqlite3_stmt*)persistentIDsSqlite3Statement bindingIndex:(inout int*)index;
@end

