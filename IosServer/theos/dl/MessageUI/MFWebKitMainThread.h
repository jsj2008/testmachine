/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MessageUI-Structs.h"
#import <Foundation/NSObject.h>

@class NSLock;

@interface MFWebKitMainThread : NSObject {
  CFDictionaryRef _visibleDict;
  NSLock* _visibleDictLock;
}
+(id)sharedInstance;
// inherited: -(id)init;
// inherited: -(void)dealloc;
-(void)_mainThreadPopulateDictForMimeType:(id)mimeType;
-(int)dictValueForMimeType:(id)mimeType;
@end

