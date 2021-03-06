/**
 * This header is generated by class-dump-z 0.1-11s.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSSpecifier.h"
#import <UIKit/UIPreferencesTableCell.h>


@interface PSTableCell : UIPreferencesTableCell {
  id _userInfo;
  BOOL _checked;
}
@property(retain) id userInfo;
+(PSCellType)cellTypeFromString:(id)string;
+(id)_cellForSpecifier:(id)specifier defaultClass:(Class)aClass frame:(CGRect)frame;
+(PSTableCell *)switchCellWithFrame:(CGRect)frame specifier:(PSSpecifier *)specifier;
+(PSTableCell *)segmentCellWithFrame:(CGRect)frame specifier:(PSSpecifier *)specifier;
+(PSTableCell *)sliderCellWithFrame:(CGRect)frame specifier:(PSSpecifier *)specifier;
+(PSTableCell *)textFieldCellWithFrame:(CGRect)frame specifier:(PSSpecifier *)specifier;
+(PSTableCell *)textViewCellWithFrame:(CGRect)frame specifier:(PSSpecifier *)specifier;
+(PSTableCell *)groupHeaderCellWithFrame:(CGRect)frame specifier:(PSSpecifier *)specifier;
+(PSTableCell *)staticTextCellWithFrame:(CGRect)frame specifier:(PSSpecifier *)specifier;
+(PSTableCell *)cellWithFrame:(CGRect)frame specifier:(PSSpecifier *)specifier;
-(void)setValueChangedTarget:(id)target action:(SEL)action userInfo:(id)info;
-(void)cellClicked:(id)clicked;
// inherited: -(void)layoutSubviews;
// inherited: -(id)titleTextLabel;
-(id)initWithFrame:(CGRect)frame specifier:(id)specifier;
// inherited: -(void)dealloc;
-(void)willMoveToSuperview:(id)superview;
@end

@interface PSTableCell (SyntheticEvents)
-(id)_automationID;
-(id)scriptingInfoWithChildren;
@end

