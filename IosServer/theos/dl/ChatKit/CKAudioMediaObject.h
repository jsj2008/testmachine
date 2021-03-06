/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "CKAVMediaObject.h"

@class NSDictionary, NSString;

@interface CKAudioMediaObject : CKAVMediaObject {
  NSDictionary* _transcodeOptions;
  NSString* _transcodePath;
}
+(id)mimeTypesToFileExtensions;
-(void)dealloc;
-(BOOL)shouldTranscodeForMMS;
-(int)mediaType;
-(unsigned long long)sizeInBytes;
-(id)optionsForMedia;
-(void)prepareForTranscode;
-(id)transcodePath;
-(id)transcodedFilename;
-(id)transcodeMimeType;
-(id)transcodedPathExtension;
-(double)transcodeStartTime;
-(double)transcodeEndTime;
-(double)transcodeDuration;
-(id)effectiveExportedFilename;
-(id)previewTitle;
-(id)filenameForMedia;
@end

