/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <Foundation/NSObject.h>

@class NSDate;

@protocol MPMediaLibrary
@optional
-(void)prepareForQueryingWithMediaLibrary:(id)mediaLibrary;
-(id)serverIsAlive;
-(void)syncDidEnd;
-(void)setFilteringDisabled:(id)disabled;
-(id)hasMedia;
-(id)hasSongs;
-(id)lastModifiedDate;
-(id)itemExistsWithIdentifier:(id)identifier;
-(id)countOfItemsForQuery:(id)query;
-(id)itemsForQuery:(id)query;
-(id)countOfCollectionsForQuery:(id)query;
-(id)collectionsForQuery:(id)query;
-(id)prefetchCommonProperties:(id)properties item:(id)item;
-(id)fetchProperty:(id)property item:(id)item;
-(id)fetchArtworkForSizeValue:(id)sizeValue item:(id)item;
-(id)fetchArtworkForSizeValue:(id)sizeValue atPlaybackTime:(id)playbackTime item:(id)item;
-(id)fetchProperty:(id)property playlist:(id)playlist;
@end

@interface MPMediaLibrary : NSObject {
@private
  id _internal;
}
@property(readonly, assign, nonatomic) NSDate* lastModifiedDate;
+(Class)_implementationClass;
+(id)defaultMediaLibrary;
-(id)init;
-(void)dealloc;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
-(void)_postLibraryDidChangeNotificationForSync;
-(void)iTunesSyncPhaseWillStart:(int)iTunesSyncPhase;
-(void)iTunesSyncPhaseDidFinish:(int)iTunesSyncPhase reason:(int)reason;
-(BOOL)hasMedia;
-(BOOL)hasSongs;
-(void)beginGeneratingLibraryChangeNotifications;
-(void)endGeneratingLibraryChangeNotifications;
-(id)lastModifiedDateIfAvailable;
-(id)modificationToken;
-(BOOL)libraryHasBeenModifiedWithToken:(id)token;
-(BOOL)serverIsAlive;
-(BOOL)isFilteringDisabled;
-(void)setFilteringDisabled:(BOOL)disabled;
-(BOOL)itemExistsWithIdentifier:(unsigned long long)identifier;
-(unsigned)countOfItemsForQuery:(id)query;
-(unsigned)countOfCollectionsForQuery:(id)query;
-(id)fetchArtworkForSize:(CGSize)size item:(id)item;
-(id)fetchArtworkForSize:(CGSize)size atPlaybackTime:(double)playbackTime item:(id)item;
-(void)_postLibraryDidChangeNotificationWithUserInfo:(id)_postLibrary;
@end

