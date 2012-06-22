/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MessageUI-Structs.h"
#import <UIKit/UIView.h>

@class NSMutableArray, UITextLabel;

@interface LabelledAtomList : UIView {
  NSMutableArray* _addressAtoms;
  UITextLabel* _label;
  id _delegate;
  float _firstLineWidth;
  unsigned _needsReflow : 1;
  unsigned _isChangingFrame : 1;
}
-(id)initWithLabel:(id)label totalWidth:(float)width firstLineWidth:(float)width3 addresses:(id)addresses arePhoneNumbers:(id)numbers;
// inherited: -(void)dealloc;
-(void)setDelegate:(id)delegate;
-(void)setFirstLineWidth:(float)width;
-(void)setFrame:(CGRect)frame;
-(void)addressAtom:(id)atom displayStringDidChange:(id)displayString;
-(void)_setNeedsReflow;
-(void)_reflow;
-(void)setAddressAtomTarget:(id)target action:(SEL)action;
-(id)labelText;
-(CGRect)labelFrame;
-(id)atomDisplayStrings;
-(void)setAtomAlpha:(float)alpha;
@end

