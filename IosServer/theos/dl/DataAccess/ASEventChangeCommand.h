/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASSyncTaskCommand.h"

@class ASEvent;

@interface ASEventChangeCommand : ASSyncTaskCommand {
  ASEvent* _event;
}
-(id)initWithEvent:(id)event;
// inherited: -(void)appendApplicationDataForTask:(id)task toWBXMLData:(id)wbxmldata;
-(id)event;
// inherited: -(void)dealloc;
// inherited: -(id)serverID;
@end

