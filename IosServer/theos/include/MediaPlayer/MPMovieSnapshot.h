/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <Foundation/NSObject.h>

@class UIView;

@interface MPMovieSnapshot : NSObject {
	id _delegate;
	CGSize _size;
	int _interfaceOrientation;
	float _time;
	float _originalTime;
	UIView* _snapshot;
}
+(id)infoWithSize:(CGSize)size orientation:(int)orientation time:(float)time delegate:(id)delegate;
-(void)dealloc;
-(id)description;
-(BOOL)prepareForSnapshotOfLayer:(id)layer;
-(void)snapshotLayer:(id)layer;
-(id)delegate;
-(id)snapshot;
-(float)time;
@end
