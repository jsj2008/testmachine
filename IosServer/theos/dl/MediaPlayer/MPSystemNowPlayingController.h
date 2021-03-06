/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface MPSystemNowPlayingController : NSObject {
@private
  unsigned _lastPostedNowPlayingTrackUniqueID;
  NSDictionary* _lastNowPlayingInfo;
}
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(void)dealloc;
-(void)postNowPlayingInfoForItem:(id)item isPlaying:(BOOL)playing additionalInfo:(id)info;
@end

