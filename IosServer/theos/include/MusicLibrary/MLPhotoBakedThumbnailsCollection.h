/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSData;

@interface MLPhotoBakedThumbnailsCollection : NSObject {
@private
	NSData* _data;
	NSMutableDictionary* _bakedThumbnails;
}
+(void)setTesting:(BOOL)testing;
-(id)init;
-(id)initWithContentsOfFile:(id)file;
-(void)dealloc;
-(void)_parseDataWithContentsOfFile:(id)file;
-(id)availableFormats;
-(id)bakedThumbnailsForFormat:(int)format;
-(void)setBakedThumbnails:(id)thumbnails forFormat:(int)format;
-(void)saveToFile:(id)file;
@end
