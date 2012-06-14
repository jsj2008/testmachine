/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASItem.h"

@class NSArray, NSNumber;

@interface ASItemOperationsResponse : ASItem {
	NSNumber* _status;
	NSArray* _fetchResponses;
}
// inherited: +(BOOL)acceptsTopLevelLeaves;
// inherited: +(BOOL)parsingLeafNode;
// inherited: +(BOOL)parsingWithSubItems;
// inherited: +(BOOL)frontingBasicTypes;
-(id)fetchResponses;
-(void)setFetchResponses:(id)responses;
// inherited: -(id)asParseRules;
// inherited: -(void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;
// inherited: -(id)description;
-(void)setStatus:(id)status;
-(id)status;
// inherited: -(void)dealloc;
@end

