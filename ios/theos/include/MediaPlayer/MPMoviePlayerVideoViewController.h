/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPFullScreenVideoViewController.h"


@interface MPMoviePlayerVideoViewController : MPFullScreenVideoViewController {
	BOOL _hideNavigationBar;
}
@property(assign, nonatomic) BOOL hideNavigationBar;
-(void)viewDidAppear:(BOOL)view;
-(void)backgroundViewDidUpdate;
-(void)_showOverlay;
@end

