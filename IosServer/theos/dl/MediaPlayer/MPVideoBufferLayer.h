/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <QuartzCore/CALayer.h>
#import "MediaPlayer-Structs.h"


@interface MPVideoBufferLayer : CALayer {
  unsigned _animationsEnablesCount;
}
+(id)defaultValueForKey:(id)key;
-(id)actionForKey:(id)key;
-(void)enableAnimations;
-(void)disableAnimations;
-(void)display;
-(void)setRenderTransform:(CGAffineTransform)transform;
@end

