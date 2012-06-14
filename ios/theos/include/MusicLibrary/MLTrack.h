/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>
#import "MusicLibrary-Structs.h"
#import "NSCopying.h"

@class NSString;

@interface MLTrack : NSObject <NSCopying> {
@private
	void* _trackInfoContext;
}
@property(copy, nonatomic) NSString* lyrics;
-(id)initWithTrackContext:(void*)trackContext;
-(void*)trackInfoContext;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(void)dealloc;
-(BOOL)isEqualToTrack:(id)track;
-(id)stringValueForProperty:(unsigned long)property;
-(unsigned long long)unsignedValueForProperty:(unsigned long)property;
-(double)timeValueForProperty:(unsigned long)property;
-(unsigned long long)persistentUID;
-(unsigned long long)globalID;
-(unsigned long)uniqueID;
-(unsigned long long)albumPID;
-(unsigned long long)artistPID;
-(id)filePath;
-(BOOL)_isFilePathPlayable;
-(id)path;
-(unsigned long long)fileSize;
-(id)title;
-(id)artist;
-(id)albumArtist;
-(id)album;
-(id)composer;
-(id)genre;
-(id)grouping;
-(id)infoShortDescription;
-(id)infoDescription;
-(id)comments;
-(id)copyright;
-(double)releaseDate;
-(id)sortTitle;
-(id)sortArtist;
-(id)sortAlbum;
-(id)sortAlbumArtist;
-(id)sortComposer;
-(id)sortSeriesDisplayName;
-(id)podcastName;
-(id)podcastDirectStoreURL;
-(unsigned long long)storeItemAdamID;
-(unsigned long long)storePlaylistAdamID;
-(id)podcastURL;
-(unsigned long)bpm;
-(unsigned long)year;
-(id)podcastStoreURL;
-(id)audioBookName;
-(id)seriesDisplayName;
-(id)seasonDisplayName;
-(unsigned)seasonNumber;
-(unsigned)episodeNumber;
-(unsigned long)audibleDRMGroupID;
-(BOOL)isAudibleAudioBook;
-(unsigned long)trackIndexInAlbum;
-(unsigned long)number;
-(unsigned long)numberOfTracksInAlbum;
-(unsigned long)discNumber;
-(unsigned long)numberOfDiscs;
-(id)contentRatingInfo;
-(id)movieInfo;
-(unsigned long)ratingLevel;
-(unsigned long long)accountID;
-(unsigned long)mediaType;
-(BOOL)isCompilationTrack;
-(BOOL)isExcludedFromShuffle;
-(BOOL)isOTAPurchasedContent;
-(BOOL)isITunesU;
-(BOOL)hasLyrics;
-(BOOL)hasVideoData;
-(BOOL)isRental;
-(BOOL)isDemoRental;
-(double)demoRentalExpirationDate;
-(BOOL)fakeAsDemoRental;
-(id)eqPresetName;
-(id)eqPreset;
-(float)volumeAdjustment;
-(float)volumeNormalization;
-(int)duration;
-(int)durationInMS;
-(int)startTimeInMS;
-(int)stopTimeInMS;
-(int)customStopTimeInMS;
-(int)totalTimeInMS;
-(void)gaplessHeuristicInfo:(unsigned*)info duration:(unsigned*)duration lastPacketsResync:(unsigned*)resync encodingDelay:(unsigned*)delay encodingDrain:(unsigned*)drain;
-(id)chapterTOC;
-(BOOL)hasChapterData;
-(BOOL)videoHasAlternateAudio;
-(BOOL)videoHasSubtitles;
-(unsigned)videoAudioTrackID;
-(void)setVideoAudioTrackID:(unsigned)anId;
-(unsigned)videoSubtitleTrackID;
-(void)setVideoSubtitleTrackID:(unsigned)anId;
-(id)videoCodecs;
-(unsigned long)imageDBRecordID:(int)anId;
-(BOOL)hasDataForArtworkType:(int)artworkType;
-(BOOL)sharesArtworkWithTrack:(id)track artworkType:(int)type formatID:(unsigned)anId timeInMS:(unsigned)ms;
-(id)_getImageDataForImageType:(int)imageType artworkFormatID:(unsigned)anId size:(CGSize)size timeInMS:(unsigned)ms artworkInstanceInfo:(MLArtworkInstanceInfo*)info;
-(id)bestImageDataForImageType:(int)imageType size:(CGSize)size;
-(id)bestImageDataForImageType:(int)imageType size:(CGSize)size timeInMS:(unsigned)ms artworkInstanceInfo:(MLArtworkInstanceInfo*)info;
-(id)imageDataForImageType:(int)imageType artworkFormatID:(unsigned)anId timeInMS:(unsigned)ms artworkInstanceInfo:(MLArtworkInstanceInfo*)info;
-(id)availableArtworkForImageType:(int)imageType formatIDsForTimeInMS:(unsigned)ms;
-(BOOL)rating;
-(void)setRating:(BOOL)rating;
-(BOOL)hasNominalAmountBeenPlayed;
-(double)nominalHasBeenPlayedThresholdInSeconds;
-(void)markNominalAmountHasBeenPlayed;
-(void)noteWasPlayedToTime:(double)time skipped:(BOOL*)skipped;
-(void)incrementSkipCount;
-(unsigned)skipCount;
-(double)lastSkippedDate;
-(BOOL)incrementPlayCountForStopTime:(double)stopTime;
-(void)incrementPlayCountForPlayingToEnd;
-(unsigned)playCount;
-(double)lastPlayedDate;
-(BOOL)markAsDeleted;
-(BOOL)isExplicitBasedOnCurrentRestrictions;
-(BOOL)isHidden;
-(BOOL)markHidden:(BOOL)hidden;
-(BOOL)shouldBookmarkLastPlayedTime;
-(BOOL)hasLastPlayedBookmarkTime;
-(void)clearLastPlayedBookmarkTime;
-(void)setLastPlayedBookmarkTimeInSeconds:(double)seconds;
-(double)lastPlayedBookmarkTimeInSeconds;
-(id)_libraryLinkArtist;
-(id)_libraryLinkKind;
-(id)_libraryLinkPlaylistName;
-(id)_libraryLinkURL:(BOOL)url;
-(id)containerLibraryLinkURL;
-(id)directStoreURL;
-(id)libraryLinkURL;
@end

