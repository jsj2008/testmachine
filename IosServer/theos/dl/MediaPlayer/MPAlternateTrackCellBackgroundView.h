/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>
#import "MediaPlayer-Structs.h"

@class UIBezierPath;

@interface MPAlternateTrackCellBackgroundView : UIView {
  int _sectionLocation;
  int _selectionStyle;
  UIBezierPath* _fillPath;
  UIBezierPath* _strokePath;
}
@property(assign, nonatomic) int selectionStyle;
@property(assign, nonatomic) int sectionLocation;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)_invalidatePaths;
-(void)setFrame:(CGRect)frame;
-(void)setSectionLocation:(int)location animated:(BOOL)animated;
-(void)_createBezierPathWithCornerRadius:(float)cornerRadius bottomRadius:(float)radius animating:(BOOL)animating;
-(void)drawRect:(CGRect)rect;
-(void)layoutSubviews;
@end

