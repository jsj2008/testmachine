/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MessageUI-Structs.h"
#import "MFComposeHeaderView.h"

@class UITextLabel, UIImageView;

@interface MFComposeFromView : MFComposeHeaderView {
  UITextLabel* _accountLabel;
  UIImageView* _background;
}
// inherited: -(id)initWithFrame:(CGRect)frame;
// inherited: -(void)dealloc;
// inherited: -(void)layoutSubviews;
-(id)_accountLabel;
-(void)setAccountLabel:(id)label;
// inherited: -(void)setLabelHighlighted:(BOOL)highlighted;
@end

