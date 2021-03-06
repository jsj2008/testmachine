/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASItem.h"

@class ASSettingsTaskUserInformationResponse, NSNumber;

@interface ASSettingsTaskResponse : ASItem {
  NSNumber* _status;
  ASSettingsTaskUserInformationResponse* _userInformation;
}
@property(retain, nonatomic) NSNumber* status;
@property(retain, nonatomic) ASSettingsTaskUserInformationResponse* userInformation;
// inherited: +(BOOL)acceptsTopLevelLeaves;
// inherited: +(BOOL)parsingLeafNode;
// inherited: +(BOOL)parsingWithSubItems;
// inherited: +(BOOL)frontingBasicTypes;
// inherited: -(void)dealloc;
// inherited: -(id)description;
// inherited: -(id)asParseRules;
// inherited: -(void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;
@end

