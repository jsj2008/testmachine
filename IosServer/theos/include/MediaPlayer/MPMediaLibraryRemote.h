/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaLibrary.h"
#import "MediaPlayer-Structs.h"
#import "MPServerObjectProxy.h"

@class NSMachPort, MPMediaLibrary;

@interface MPMediaLibraryRemote : MPServerObjectProxy <MPMediaLibrary> {
@private
  MPMediaLibrary* _mediaLibrary;
  NSMachPort* _launchNotifyPort;
  int _launchNotifyPortToken;
  unsigned _didCheckIn : 1;
  unsigned _serverPort;
  unsigned _clientPort;
  CFRunLoopSourceRef _runLoopSource;
  unsigned _serverConnectionDeathCount;
}
-(id)init;
-(void)dealloc;
-(void)prepareForQueryingWithMediaLibrary:(id)mediaLibrary;
-(void)prepareForDecodingWithCoder:(id)coder;
-(void)prepareForRemoteSelectorInvocation;
-(void)didPrepareForRemoteSelectorInvocation;
-(void)serverConnectionDied;
-(void)_mediaLibraryDidLaunch;
-(void)_registerForLaunchNotifications;
-(void)_unregisterForLaunchNotifications;
-(void)_clientCheckIn;
-(void)_runMigServerOnPort:(unsigned)port;
-(void)_stopMigServer;
@end

