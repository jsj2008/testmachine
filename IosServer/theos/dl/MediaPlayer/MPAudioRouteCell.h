/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIAlertSheetTableCell.h>

@class UIImageView;

@interface MPAudioRouteCell : UIAlertSheetTableCell {
  UIImageView* _pickedImage;
}
-(id)initWithRouteName:(id)routeName isPicked:(BOOL)picked;
-(void)layoutSubviews;
-(void)setPicked:(BOOL)picked;
-(void)updateHighlightColors;
@end

