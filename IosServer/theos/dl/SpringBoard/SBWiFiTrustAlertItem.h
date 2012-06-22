/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class NSString, NSArray;

@interface SBWiFiTrustAlertItem : SBAlertItem {
  NSString* _displayName;
  NSString* _networkName;
  NSArray* _certificateArray;
  BOOL _sentResponse;
}
// inherited: -(Class)alertSheetClass;
-(id)initWithCertificateArray:(id)certificateArray networkName:(id)name;
// inherited: -(void)dealloc;
-(id)_scanDictionaryWithCertificateData;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
// inherited: -(void)didDeactivateForReason:(int)reason;
// inherited: -(BOOL)dismissOnLock;
// inherited: -(BOOL)allowMenuButtonDismissal;
// inherited: -(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
@end

