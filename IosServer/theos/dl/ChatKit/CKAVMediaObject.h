/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "CKMediaObject.h"
#import "ChatKit-Structs.h"

@class NSString, AVRemaker;

@interface CKAVMediaObject : CKMediaObject {
  AVRemaker* _remaker;
  BOOL _remakeSuccessful;
  BOOL _remakeDidEnd;
  NSString* _createdFilename;
  double _approximateDuration;
}
@property(assign) BOOL remakeDidEnd;
+(void)initialize;
+(double)maxMMSTrimDurationForMediaType:(int)mediaType;
+(id)transcodeOptionsWithMaxBytes:(int)maxBytes;
+(void)_dequeueNextTranscodeOnMainThread;
-(void)dealloc;
-(BOOL)shouldTranscodeForMMS;
-(Class)balloonPreviewClassWithPreviewData:(id)previewData;
-(void)prepareForTranscode;
-(id)transcodedFilename;
-(id)newTranscodingForMMSWithMaxByteLength:(int)maxByteLength;
-(id)transcodedPathExtension;
-(void)cleanupAfterTranscode;
-(void)configureBalloon:(id)balloon withPreviewData:(id)previewData;
-(id)transcodePath;
-(double)transcodeStartTime;
-(double)transcodeEndTime;
-(double)transcodeDuration;
-(id)transcodeMimeType;
-(id)effectiveExportedFilename;
-(id)fileForDataWithExtension:(id)extension;
-(id)previewTitle;
-(void)_determineDurationOnMainThreadWithFile:(id)file;
-(void)_enqueueTranscodeOnMainThreadWithOptions:(id)options;
-(void)_beginRemakingOnMainThreadWithOptions:(id)options;
-(void)_remakeDidComplete:(id)_remake;
@end

