/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Availability2.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED < __IPHONE_3_2

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <Foundation/NSObject.h>

@class CandWordString;

@interface CandWord : NSObject <NSCopying> {
  CandWordString* _word;
}
-(id)initWithWord:(NSString*)word;
-(void)dealloc;
-(NSString*)word;
-(const char*)wordUTF8String;
-(id)insertion;
-(unsigned)deleteCount;
-(unsigned)wordOriginFeedbackID;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
@end

#endif
