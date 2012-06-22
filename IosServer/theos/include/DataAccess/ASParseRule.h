/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface ASParseRule : NSObject {
  int _minimumNumber;
  int _maximumNumber;
  int _codePage;
  int _token;
  Class _objectClass;
  SEL _setterMethod;
  int _collectionClassType;
  NSDictionary* _subclassRuleSet;
  NSDictionary* _callbackDict;
  NSDictionary* _streamCallbackDict;
}
-(id)initWithMinimumNumber:(int)minimumNumber maximumNumber:(int)number codePage:(int)page token:(int)token objectClass:(Class)aClass setterMethod:(SEL)method collectionClassType:(int)type callbackDict:(id)dict streamCallbackDict:(id)dict9 subclassRuleSet:(id)set;
// inherited: -(void)dealloc;
-(int)minimumNumber;
-(int)maximumNumber;
-(int)codePage;
-(int)token;
-(Class)objectClass;
-(SEL)setterMethod;
-(int)collectionClassType;
-(id)callbackDict;
-(id)streamCallbackDict;
-(id)subclassRuleSet;
@end

