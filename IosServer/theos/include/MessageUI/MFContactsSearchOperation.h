/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSOperation.h>

@class NSNumber, NSSet, NSString, MFContactsSearchManager;

@interface MFContactsSearchOperation : NSOperation {
@private
  void* _addressBook;
  MFContactsSearchManager* _owner;
  NSNumber* _taskID;
  NSString* _text;
  NSSet* _properties;
}
@property(readonly, assign, nonatomic) void* addressBook;
@property(readonly, assign, nonatomic) MFContactsSearchManager* owner;
@property(readonly, assign, nonatomic) NSNumber* taskID;
@property(readonly, retain, nonatomic) NSString* text;
@property(readonly, assign, nonatomic) NSSet* properties;
+(id)operationWithAddressBook:(void*)addressBook owner:(id)owner text:(id)text taskID:(id)anId properties:(id)properties;
-(int)type;
// inherited: -(void)dealloc;
@end

