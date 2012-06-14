/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;
@protocol MFContactsSearchConsumer;

@interface MFContactsSearchTaskContext : NSObject {
@private
	id<MFContactsSearchConsumer> _consumer;
	NSString* _text;
	NSMutableSet* _operations;
	NSMutableSet* _searchQueries;
}
@property(readonly, retain, nonatomic) id<MFContactsSearchConsumer> consumer;
@property(readonly, retain, nonatomic) NSString* text;
@property(readonly, retain, nonatomic) NSMutableSet* operations;
@property(readonly, retain, nonatomic) NSMutableSet* searchQueries;
+(id)contextWithConsumer:(id)consumer text:(id)text operations:(id)operations searchQueries:(id)queries;
-(BOOL)done;
// inherited: -(void)dealloc;
@end
