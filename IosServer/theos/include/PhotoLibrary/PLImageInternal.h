/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <MusicLibrary/MLPhoto.h>

@class NSData, NSURL;

@interface PLImageInternal : MLPhoto {
@private
  NSURL* _url;
  NSData* _data;
  CGImageSourceRef _imageSource;
}
// inherited: -(void)dealloc;
// inherited: -(id)title;
-(CGImageRef)createThumbnailCGImageRef;
-(CGImageRef)createLowResolutionFullScreenCGImageRef;
-(CGImageRef)createFullScreenCGImageRef:(int*)ref properties:(const CFDictionaryRef*)properties;
-(CGImageRef)createFullSizeCGImageRef:(int*)ref;
-(BOOL)hasFullSizeImage;
-(CGImageSourceRef)_imageSource;
-(id)_data;
@end

