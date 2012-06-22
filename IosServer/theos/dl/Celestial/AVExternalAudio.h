/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <Foundation/NSObject.h>


@interface AVExternalAudio : NSObject {
  AVExternalAudioPrivate* _priv;
}
+(id)avExternalAudio:(id)audio;
-(id)initWithDelegate:(id)delegate;
-(void)dealloc;
-(id)attributeForKey:(id)key;
-(BOOL)setAttribute:(id)attribute forKey:(id)key error:(id*)error;
-(void)makeError:(id*)error withDescription:(id)description code:(long)code;
-(void)postServerConnectionDiedNotification:(id)notification;
-(void)fmpServerConnectionDied;
-(BOOL)okToNotifyFromThisThread;
-(BOOL)activate:(id*)activate;
-(float)volume;
-(BOOL)isActive;
-(void)postUserVolumeChangedNotification:(id)notification;
-(void)fmpUserVolumeDidChange;
-(void)fmpChangeConnectionActive:(BOOL)active;
@end

