/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "ChatKit-Structs.h"
#import <Foundation/NSObject.h>

@protocol CKContentEntryBridgeClient;

@interface CKContentEntryBridge : NSObject {
  NSObject<CKContentEntryBridgeClient>* _entryView;
}
@property(assign, nonatomic) NSObject<CKContentEntryBridgeClient>* contentEntryView;
+(id)newContentEntryBridge;
-(void)dealloc;
-(void)setMessageComposition:(id)composition;
-(id)messageComposition;
-(void)setMessageParts:(id)parts;
-(id)messageParts;
-(id)attachments;
-(void)insertMessagePart:(id)part;
-(BOOL)hasContent;
-(id)newContentViewWithFrame:(CGRect)frame;
-(id)supportedPasteboardTypesInTextContentView:(id)textContentView;
-(id)documentFragmentForPasteboardItemAtIndex:(int)index inTextContentView:(id)textContentView;
@end

