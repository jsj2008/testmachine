/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>

@class CKService, NSString;

@interface CKEntity : NSObject {
  int _addressBookUID;
  int _identifier;
  int _propertyType;
  BOOL _foundABNameForSender;
  BOOL _senderIsVoicemail;
  void* _abRecord;
  CKService* _service;
}
@property(readonly, assign, nonatomic) CKService* service;
@property(assign, nonatomic) int addressBookUID;
@property(assign, nonatomic) int identifier;
@property(readonly, assign, nonatomic) void* abRecord;
@property(assign, nonatomic) int propertyType;
@property(readonly, assign, nonatomic) BOOL foundABNameForSender;
@property(readonly, assign, nonatomic) BOOL senderIsVoicemail;
@property(readonly, assign, nonatomic) NSString* rawAddress;
@property(readonly, assign, nonatomic) NSString* name;
-(void)resetCaches;
-(id)_initWithService:(id)service;
-(void)dealloc;
@end

