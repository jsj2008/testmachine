/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>
#import "MusicLibrary-Structs.h"

@class MLQuery;

@interface MLQueryImpl : NSObject {
@private
	MLQuery* _query;
	CFArrayRef _queryResults;
	unsigned _countOfUniqueItemsByGroupingProperty;
	unsigned _trackGroupMembers : 1;
	unsigned _mixedResultsAllowed : 1;
	unsigned _orderingIsSorted : 1;
	unsigned _wasSortedAlphabetically : 1;
	unsigned _registeredAsCachedQuery : 1;
	unsigned _evaluationType : 2;
	unsigned _evaluateEntityExistenceOnlyResult : 1;
	unsigned _registeredForNotificationsAffectingEvaluationResults : 1;
	unsigned _usingSections : 1;
}
+(id)findCachedQueryImplMatchingCriteriaOfQuery:(id)query;
+(void)registerQueryImpl:(id)impl forCriteriaOfQuery:(id)query;
+(void)setEvaluationCachingEnabled:(BOOL)enabled;
+(void)reset;
+(void)resetAndInvalidate:(id)invalidate;
+(void)resetAndInvalidate;
+(id)_recursiveEvaluationLock;
+(void)recursiveEvaluationLockLock;
+(void)recursiveEvaluationLockUnlock;
-(void)freeQueryResults;
-(id)copyQueryResultsDescription;
-(id)shallowDebugDescription;
-(id)description;
-(void)dealloc;
-(void)_updateOptionalNotificationObserving:(BOOL)observing selector:(SEL)selector name:(id)name object:(id)object;
-(void)_unregisterForNotificationsAffectingEvaluationResults;
-(void)_registerForNotificationsAffectingEvaluationResults;
-(BOOL)_contentsAffectedByDynamicChangesToTrack:(id)track changeInfo:(id)info;
-(void)_trackDynamicPropertiesWillChangeNotification:(id)_trackDynamicProperties;
-(void)_trackDynamicPropertiesDidChangeNotification:(id)_trackDynamicProperties;
-(void)evaluate;
-(id)evaluationQuery;
-(void)prepareToEvaluate;
-(void)evaluateQuery:(id)query;
-(void)evaluateQuery:(id)query withEntities:(id)entities;
-(void)setEvaluationType:(int)type;
-(BOOL)countOfEntitiesIsNonZero;
-(unsigned)countOfEntitiesNoLoad;
-(BOOL)orderingIsSorted;
-(BOOL)wasSortedAlphabetically;
-(void)loadAllEntities;
-(unsigned)countOfEntities;
-(id)entityAtIndex:(unsigned)index;
-(unsigned)indexOfEntity:(id)entity;
-(unsigned)indexOfPersistentID:(long long)persistentID;
-(unsigned)indexOfFirstEntityMatchingPredicates:(id)firstEntityMatchingPredicates;
-(unsigned)indexOfFirstEntityMatchingPredicate:(id)firstEntityMatchingPredicate;
-(BOOL)entityMatchesPredicates:(id)predicates entityIndex:(unsigned)index;
-(BOOL)entityMatchesPredicate:(id)predicate entityIndex:(unsigned)index;
-(int)entityTypeOfEntityAtIndex:(unsigned)index;
-(id)stringValueForProperty:(unsigned long)property ofEntityAtIndex:(unsigned)index;
-(id)sectionTitleForStringProperty:(unsigned long)stringProperty ofEntityAtIndex:(unsigned)index;
-(void)getValues:(id*)values forProperties:(unsigned*)properties count:(unsigned)count ofEntityAtIndex:(unsigned)index;
-(unsigned long long)unsignedValueForProperty:(unsigned long)property ofEntityAtIndex:(unsigned)index;
-(double)timeValueForProperty:(unsigned long)property ofEntityAtIndex:(unsigned)index;
-(void)visitGroupMembersOfEntityAtIndex:(unsigned)index visitor:(/*function-pointer*/ void*)visitor context:(void*)context;
-(unsigned)countOfEntitiesGroupedByEntityAtIndex:(unsigned)index;
-(id)representativeTrackForEntityAtIndex:(unsigned)index;
-(id)containingPlaylist;
-(unsigned long)containedMediaTypesForEntityAtIndex:(unsigned)index;
-(id)sectionDataForStringProperty:(unsigned long)stringProperty;
-(id)sectionDataByBucketizingEntitiesWithStringProperty:(unsigned long)stringProperty;
-(id)representativeTracksForAlbumsGetTrackCount:(unsigned*)albumsGetTrackCount;
@end

