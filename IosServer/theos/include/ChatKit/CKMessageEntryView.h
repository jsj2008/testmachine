/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "ChatKit-Structs.h"
#import "UIScrollViewDelegate.h"
#import <UIKit/UI9PartImageView.h>

@class UIThreePartButton, CKContentEntryView;

@interface CKMessageEntryView : UI9PartImageView <UIScrollViewDelegate> {
  CKContentEntryView* _contentField;
  UI9PartImageView* _balloonFGView;
  UI9PartImageView* _balloonBGView;
  UI9PartImageView* _balloonBGSendingView;
  UIThreePartButton* _sendButton;
  CGRect _finalFrame;
  BOOL _isAnimating;
  BOOL _textFieldLoaded;
  id _delegate;
}
@property(assign, nonatomic) id delegate;
+(CGRect)sendButtonFrame:(CGRect)frame;
+(CGRect)entryFieldBalloonFrame:(CGRect)frame;
+(float)defaultHeight;
+(float)defaultWidthInPortrait;
-(id)initWithFrame:(CGRect)frame;
-(void)showFakeEntryView:(BOOL)view;
-(void)fadeToSendingState:(BOOL)sendingState withDuration:(float)duration;
-(void)dealloc;
-(void)send:(id)send;
-(CKContentEntryView*)entryField;
-(CGRect)contentEntryFrame:(BOOL)frame;
-(void)enableSendButton;
-(void)disableSendButton;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(CGRect)balloonFrame;
-(void)setIsAnimating:(BOOL)animating;
-(void)setFinalFrame:(CGRect)frame;
-(CGRect)finalFrame;
-(BOOL)ckContentEntryViewContentSizeChanged:(id)changed height:(float)height animate:(BOOL)animate;
@end

