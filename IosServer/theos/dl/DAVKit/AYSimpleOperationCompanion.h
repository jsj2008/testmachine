/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <Foundation/NSObject.h>
#import "AYOperationCompanion.h"

@class AYOperation;

@interface AYSimpleOperationCompanion : NSObject <AYOperationCompanion> {
  AYOperation* _operation;
}
-(id)initWithOperation:(id)operation;
-(id)operation;
// in a protocol: -(void)postOperationForOperation:(id)operation;
@end

