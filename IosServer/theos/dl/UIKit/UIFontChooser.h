/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "UITextFieldDelegate.h"
#import <UIKit/UIView.h>

@class UITextField, UITable;

@interface UIFontChooser : UIView <UITextFieldDelegate> {
  UITable* _nameTable;
  UITable* _sizeTable;
  UITextField* _sizeField;
  CFArrayRef _familyNames;
  id _delegate;
  unsigned _sizes[15];
  unsigned _sizeBeforeEditing;
}
+(UIFontChooser*)sharedFontChooser;
-(id)_tableWithFrame:(CGRect)frame;
-(CGRect)_nameTableFrame;
-(CGRect)_separatorFrame;
-(CGRect)_fieldBackgroundFrame;
-(CGRect)_sizeFieldFrame;
-(CGRect)_sizeTableFrame;
-(void)_updateSublayerFrames;
-(id)initWithFrame:(CGRect)frame;
-(void)setFrame:(CGRect)frame;
-(void)drawRect:(CGRect)rect;
-(int)numberOfRowsInTable:(id)table;
-(id)table:(id)table cellForRow:(int)row column:(id)column;
-(void)selectFamilyName:(id)name;
-(void)selectSize:(float)size;
-(void)selectFont:(id)font;
-(void)acceptSizeFromSizeField;
-(void)_finishedEditing:(id)editing;
-(void)tableSelectionDidChange:(id)tableSelection;
-(void)textFieldDidBecomeFirstResponder:(id)textField;
-(void)textFieldDidResignFirstResponder:(id)textField;
-(NSString*)selectedFamilyName;
-(CGFloat)selectedSize;
-(void)setDelegate:(id)delegate;
-(id)delegate;
@end

@protocol UIFontChooserDelegate
@optional
-(void)showKeyboardForFontChooser:(UIFontChooser*)fontChooser;
-(void)hideKeyboardForFontChooser:(UIFontChooser*)fontChooser;
-(void)fontChooserDidChangeFamilyName:(UIFontChooser*)fontChooser;
-(void)fontChooserDidChangeSize:(UIFontChooser*)fontChooser;
@end
