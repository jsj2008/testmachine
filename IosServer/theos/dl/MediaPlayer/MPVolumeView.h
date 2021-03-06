/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>
#import "NSCoding.h"
#import "MediaPlayer-Structs.h"

@class MPVolumeViewInternal;

@interface MPVolumeView : UIView <NSCoding> {
@private
  MPVolumeViewInternal* _internal;
}
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(void)audioDeviceControllerAudioRoutesChanged:(id)changed;
-(void)_setVolumeAudioCategory:(id)category;
-(id)_routeButton;
-(void)_createSubviews;
-(void)_displayAudioRoutePicker;
-(void)_setShowsRouteButton:(BOOL)button animated:(BOOL)animated;
-(void)_setShowsVolumeSlider:(BOOL)slider;
-(id)_routeButtonImage;
@end

