/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "ISDownloadQueueDelegate.h"
#import "SSDownloadQueueObserver.h"
#import <Availability2.h>

@class ISDownloadQueue, SSDownloadQueue;

@interface SBDownloadController : NSObject <ISDownloadQueueDelegate> {
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
  SSDownloadQueue* _downloadQueue;
#else
  ISDownloadQueue* _downloadQueue;
#endif
}
+(SBDownloadController *)sharedInstance;
// inherited: -(id)init;
// inherited: -(void)dealloc;
// in a protocol: -(void)downloadQueue:(id)queue changedWithRemovals:(id)removals disappearances:(id)disappearances;
-(void)_showDownloadQueueError;
-(void)downloadQueueError:(id)error;
-(BOOL)checkQueue;
-(id)currentDownloads;
-(id)downloadQueue;
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2
-(void)_networkUsageChanged:(id)changed;
#endif
@end

