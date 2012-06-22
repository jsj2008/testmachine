/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@protocol MPMovieViewDelegate;

@interface MPMovieView : UIView {
@private
  id<MPMovieViewDelegate> _delegate;
}
@property(assign, nonatomic) id<MPMovieViewDelegate> delegate;
-(void)willMoveToWindow:(id)window;
-(void)didMoveToWindow;
@end

