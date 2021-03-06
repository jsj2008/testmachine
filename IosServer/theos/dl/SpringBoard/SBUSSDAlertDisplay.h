/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlertDisplay.h"
#import "UITextFieldDelegate.h"

@class UIProgressIndicator, SBTextDisplayView, UITextField, TPBottomButtonBar, UITransitionView, UIScroller;

@interface SBUSSDAlertDisplay : SBAlertDisplay <UITextFieldDelegate> {
  TPBottomButtonBar* _responseBar;
  UIView* _notifyView;
  UIView* _replyView;
  UITransitionView* _transitionView;
  UIScroller* _scroller;
  SBTextDisplayView* _contentView;
  SBTextDisplayView* _charsRemainingView;
  UIProgressIndicator* _progressIndicator;
  UITextField* _responseField;
  BOOL _allowsResponse;
}
// inherited: -(id)initWithFrame:(CGRect)frame;
-(id)_notifyView;
-(id)_replyView;
// inherited: -(void)dealloc;
-(void)displayString:(id)string centerVertically:(BOOL)vertically;
// inherited: -(void)alertDisplayWillBecomeVisible;
// inherited: -(void)alertDisplayBecameVisible;
-(void)_setupResponseBar;
-(void)alertStringAvailable:(id)available;
-(BOOL)allowsResponse;
-(void)setAllowsResponse:(BOOL)response;
-(BOOL)textField:(id)field shouldInsertText:(id)text replacingRange:(NSRange)range;
-(void)_updateCharsRemaining;
-(void)_textChanged:(id)changed;
-(void)_replyClicked;
-(void)_okayClicked;
-(void)_cancelClicked;
-(void)navigationBar:(id)bar buttonClicked:(int)clicked;
@end

