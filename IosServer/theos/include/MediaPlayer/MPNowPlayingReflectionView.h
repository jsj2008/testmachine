/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>
#import "MediaPlayer-Structs.h"

@class UIImage, UIGradient;

@interface MPNowPlayingReflectionView : UIView {
  UIGradient* _gradient;
  UIImage* _image;
}
@property(retain, nonatomic) UIGradient* gradient;
-(void)dealloc;
-(void)setImage:(id)image;
-(void)drawRect:(CGRect)rect;
@end

