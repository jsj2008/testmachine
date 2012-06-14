/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIKit/UIThreePartButton.h>

@class TPPushButton;

@interface TPCallWaitingButton : UIThreePartButton {
	TPPushButton* _innerButton;
	unsigned _type : 1;
}
+(CGSize)defaultSizeForType:(int)type;
+(float)defaultVerticalCenteringOffset;
-(id)initWithFrame:(CGRect)frame type:(int)type;
-(id)initTopForIncomingCallWaiting;
-(id)initTopForTTY;
-(id)initBottomForIncomingCallWaiting;
-(id)initBottomForSecondIncomingCallWaiting;
-(id)initBottomForTTYWithTitle:(id)title;
-(void)removeTarget:(id)target forControlEvents:(unsigned)controlEvents;
-(void)addTarget:(id)target action:(SEL)action forEvents:(int)events;
-(void)removeTarget:(id)target forEvents:(int)events;
@end

