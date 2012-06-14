/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <Foundation/NSObject.h>


@interface SBCalendarController : NSObject {
	CFDateFormatterRef _dayFormatter;
	CFDateRef _lastScheduledWake;
	int _unreadInvitationCount;
	CalEventExpirationMonitor* _expirationMonitor;
	CalAlarmEngine* _alarmEngine;
	CalDatabase* _database;
}
+(id)sharedInstance;
// inherited: -(id)init;
// inherited: -(void)dealloc;
-(void)_finishInitialization;
-(void)_databaseChanged:(id)changed;
-(void)_unreadInvitationsExpired:(id)expired;
-(void)_setInvitationUnreadCount:(int)count;
-(int)unreadInvitationCount;
-(void)_alertForInvitations;
-(void)_alarmsDidSchedule:(id)_alarms;
-(void)_adjustOnWake;
-(void)_didWakeFromSleep;
-(void)_alarmsDidFire:(id)_alarms;
-(void)_checkForTimeZoneIfNecessary;
-(void)_significantTimeChange;
-(void)_newSIM:(id)sim;
-(id)_stringForDay:(XXStruct_fhKmAA)day withLongFormatString:(id)longFormatString useAbbreviatedFormats:(BOOL)formats;
-(id)stringForDay:(XXStruct_fhKmAA)day withLongFormatString:(id)longFormatString;
-(id)abbreviatedStringForDay:(XXStruct_fhKmAA)day withLongFormatString:(id)longFormatString;
-(void)playAlertSound;
@end

