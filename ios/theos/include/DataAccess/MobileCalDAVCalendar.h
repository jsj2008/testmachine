/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>
#import "DataAccess-Structs.h"

@class MobileCalDAVAccount, NSString;

@interface MobileCalDAVCalendar : NSObject {
	MobileCalDAVAccount* _account;
	NSString* _calGUID;
	NSString* _description;
	NSString* _path;
	NSString* _color;
	BOOL _enabled;
	void* _calCalendar;
	int _mostRecentEventChangeIndex;
	int _mostRecentAlarmChangeIndex;
	int _mostRecentRecurChangeIndex;
	int _mostRecentAttendeeChangeIndex;
}
-(id)initWithCalendarPath:(id)calendarPath account:(id)account;
// inherited: -(void)dealloc;
-(void)deleteCalendar;
-(id)account;
-(void)setAccount:(id)account;
-(void*)initCalCalendar;
-(void*)getCalCalendar;
-(id)guid;
-(void)setGuid:(id)guid;
-(id)title;
-(void)setTitle:(id)title;
// inherited: -(id)description;
-(void)setDescription:(id)description;
-(id)path;
-(void)setPath:(id)path;
-(id)color;
-(void)setColor:(id)color;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)enabled;
-(BOOL)writable;
-(void)setIsWritable:(BOOL)writable;
-(id)ctag;
-(void)setCtag:(id)ctag;
-(void)_dropCalStoreContext;
-(id)addedEvents;
-(id)_gatherModifiedEventsInCalCalendar:(void*)calCalendar inDatabase:(CalDatabase*)database;
-(id)_gatherModifiedEventsFromModifiedAlarmsInCalCalendar:(void*)calCalendar inDatabase:(CalDatabase*)database;
-(id)_gatherModifiedEventsFromModifiedRecurrencesInCalCalendar:(void*)calCalendar inDatabase:(CalDatabase*)database;
-(id)_gatherModifiedEventsFromModifiedAttendeesInCalCalendar:(void*)calCalendar inDatabase:(CalDatabase*)database;
-(id)modifiedEvents;
-(id)deletedEvents;
-(void)clearEventChanges;
@end

