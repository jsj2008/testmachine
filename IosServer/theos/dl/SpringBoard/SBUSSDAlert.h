/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"

@class NSTimer;

@interface SBUSSDAlert : SBAlert {
  unsigned _receivedString : 1;
  unsigned _dismissOnActivate : 1;
  NSTimer* _delayedDismissTimer;
}
+(void)registerForSettingsAlerts;
// inherited: +(void)registerForAlerts;
// inherited: +(void)test;
+(id)errorStringForCode:(unsigned)code;
+(void)_daemonRestart:(id)restart;
+(void)_newSIM:(id)sim;
// inherited: -(void)dealloc;
// inherited: -(id)alertDisplayViewWithSize:(CGSize)size;
-(void)USSDStringAvailable:(id)available allowsResponse:(BOOL)response;
-(BOOL)allowsResponse;
-(BOOL)receivedString;
-(void)setDismissOnActivate:(BOOL)activate;
-(void)_delayedDismiss;
// inherited: -(void)activate;
// inherited: -(void)deactivate;
@end

