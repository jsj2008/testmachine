/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>
#import <Availability2.h>

@class NSString, NSTimer, SBAwayMediaControlsView, TPLCDTextView, UILabel;
@protocol SBAwayDateViewDelegate;

@interface SBAwayDateView : UIView {
  NSTimer* _dateTimer;
  TPLCDTextView* _timeLabel;
  TPLCDTextView* _titleLabel;
  NSString* _title;
  NSString* _artist;
  NSString* _album;
  UILabel* _nowPlayingTitleLabel;
  UILabel* _nowPlayingArtistLabel;
  UILabel* _nowPlayingAlbumLabel;
  SBAwayMediaControlsView* _controlsView;
  id<SBAwayDateViewDelegate> _delegate;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
  int _orientation;
#endif
  unsigned _isPlaying : 1;
}
@property(assign, nonatomic) id<SBAwayDateViewDelegate> delegate;
@property(assign, nonatomic, getter=isPlaying) BOOL playing;
@property(retain, nonatomic) NSString* title;
// inherited: -(id)initWithFrame:(CGRect)frame;
// inherited: -(void)dealloc;
-(id)labelWithFontSize:(float)fontSize origin:(CGPoint)origin fontName:(const char*)name;
-(id)labelWithFontSize:(float)fontSize origin:(CGPoint)origin;
-(id)newNowPlayingLabelWithFont:(id)font color:(id)color origin:(CGPoint)origin;
-(void)updateLabels;
-(void)setAlpha:(float)alpha;
-(void)updateClockFormat;
-(void)updateClock;
-(void)setArtist:(id)artist;
-(void)setAlbum:(id)album;
-(void)removeFromSuperview;
-(void)movedToSuperview:(id)superview;
-(id)controlsView;
-(void)setIsShowingControls:(BOOL)controls;
-(BOOL)isShowingControls;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@property(assign, nonatomic) int orientation;
-(void)resizeNowPlayingLabels;
#endif
@end

