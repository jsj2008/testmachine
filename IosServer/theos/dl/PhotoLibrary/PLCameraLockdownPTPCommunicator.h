/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <Foundation/NSObject.h>


@interface PLCameraLockdownPTPCommunicator : NSObject {
  CFMessagePortRef _port;
  int _msgid;
}
+(id)sharedInstance;
-(BOOL)createPortIfNecessary;
-(void)releasePort;
-(void)sendData:(id)data;
-(void)notifyLockdownAboutFileGroup:(id)group added:(BOOL)added;
-(void)addedFileGroup:(id)group;
-(void)addedPhotoFileGroup:(id)group;
-(void)addedVideoFileGroup:(id)group withDuration:(id)duration;
-(void)removedFileGroup:(id)group;
-(void)applicationWillTerminate:(id)application;
// inherited: -(id)init;
// inherited: -(void)dealloc;
@end

