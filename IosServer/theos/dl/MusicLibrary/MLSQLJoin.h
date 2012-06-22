/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MLSQLCode.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MLSQLJoin : MLSQLCode {
@private
  NSString* _joinedTable;
  NSString* _joinedTableID;
  unsigned _joinedTableIDAuto : 1;
}
+(id)expressionToken;
+(id)expressionTokenWhenJoinedToCodeClass:(Class)codeClass joinOp:(id)op;
+(id)mutableCopyOfJoinsByRemovingUnnecessaryJoins:(id)joinsByRemovingUnnecessaryJoins;
-(id)initWithJoinedTable:(id)joinedTable on:(id)on;
-(id)initWithJoinedTable:(id)joinedTable asID:(id)anId on:(id)on;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)joinedTable;
-(id)joinedTableID;
-(void)dealloc;
-(BOOL)allowsJoins;
@end

