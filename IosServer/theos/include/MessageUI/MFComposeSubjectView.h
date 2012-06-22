/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MessageUI-Structs.h"
#import "UITextFieldDelegate.h"
#import "MFComposeHeaderView.h"

@class UITextField;

@interface MFComposeSubjectView : MFComposeHeaderView <UITextFieldDelegate> {
  UITextField* _textField;
  unsigned _delegateRespondsToTextChange : 1;
}
// inherited: -(id)initWithFrame:(CGRect)frame;
// inherited: -(void)layoutSubviews;
// inherited: -(BOOL)becomeFirstResponder;
-(void)textFieldDidResignFirstResponder:(id)textField;
-(id)text;
-(void)setText:(id)text;
// inherited: -(void)setDelegate:(id)delegate;
-(void)textChanged:(id)changed;
-(BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;
-(BOOL)endEditing:(BOOL)editing;
// inherited: -(void)dealloc;
// inherited: -(BOOL)_canBecomeFirstResponder;
-(void)setAcceptsEmoji:(BOOL)emoji;
@end

