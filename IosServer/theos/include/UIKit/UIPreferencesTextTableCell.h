/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UITextFieldDelegate.h"
#import "UIKit-Structs.h"
#import "UIPreferencesTableCell.h"

@class UILabel, UITextField;

@interface UIPreferencesTextTableCell : UIPreferencesTableCell <UITextFieldDelegate> {
  UITextField* _textField;
  UILabel* _valueSuffixLabel;
  float _textFieldOffset;
  SEL _returnAction;
}
-(id)initWithFrame:(CGRect)frame;
-(void)setTextFieldOffset:(float)offset;
-(float)textFieldOffset;
-(void)setReturnAction:(SEL)action;
-(void)dealloc;
-(id)_disabledFontColor;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)resignFirstResponder;
-(void)setUserInteractionEnabled:(BOOL)enabled;
-(void)setValueSuffix:(id)suffix;
-(BOOL)hasValueSuffix;
-(void)setValue:(id)value;
-(void)textFieldDidBecomeFirstResponder:(id)textField;
-(id)value;
-(id)valueTextLabel;
-(void)_textFieldStartEditing:(id)editing;
-(void)_textFieldEndEditing:(id)editing;
-(void)_textFieldEndEditingOnReturn:(id)aReturn;
-(void)_textValueChanged:(id)changed;
-(void)textFieldClearButtonPressed:(id)pressed;
-(id)textField;
-(void)setPlaceHolderValue:(id)value;
-(void)_updateSuffixFrame;
-(void)layoutSubviews;
@end

