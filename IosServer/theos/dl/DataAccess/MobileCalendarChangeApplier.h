/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>
#import "DataAccess-Structs.h"

@class MobileCalDAVCalendar;

@interface MobileCalendarChangeApplier : NSObject {
  MobileCalDAVCalendar* _calendar;
  int _numChanges;
}
@property(readonly, assign) int numChanges;
-(id)initWithCalendar:(id)calendar;
// inherited: -(void)dealloc;
-(void)didAbortRefreshInOperation:(id)operation;
-(void)didCompleteRefreshInOperation:(id)operation;
-(void)operation:(id)operation processError:(id)error;
-(void*)_copyOurCalAttendeeFromEvent:(void*)event;
-(void)_setOrganizerAndEventStatusOnEvent:(void*)event;
-(BOOL)_addOrModifyEvent:(id)event inICSCalendar:(id)icscalendar calCalendar:(void*)calendar calDatabase:(CalDatabase*)database;
-(BOOL)_removeEventWithUID:(id)uid inCalCalendar:(void*)calCalendar calDatabase:(CalDatabase*)database;
-(void)processComponent:(id)component inCalendar:(id)calendar cache:(id)cache filename:(id)filename serverETag:(id)tag;
-(void)saveCalEventData:(id)data filename:(id)filename;
-(void)processGetFromData:(id)data etagCache:(id)cache filename:(id)filename serverETag:(id)tag;
-(void)operation:(id)operation processResources:(id)resources;
-(void)processResources:(id)resources etagCache:(id)cache;
-(void)operation:(id)operation deleteResourcesWithFilenames:(id)filenames;
-(BOOL)operation:(id)operation shouldAcceptRemoteModification:(id)modification isDeleted:(BOOL)deleted;
-(BOOL)operationShouldContinueProcessingResources:(id)operation;
@end

