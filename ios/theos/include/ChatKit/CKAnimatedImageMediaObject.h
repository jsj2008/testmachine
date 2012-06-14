/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "CKFixedImageMediaObject.h"
#import "ChatKit-Structs.h"


@interface CKAnimatedImageMediaObject : CKFixedImageMediaObject {
}
+(id)mimeTypesToFileExtensions;
-(id)newPreview:(int)preview highlight:(BOOL)highlight;
-(Class)balloonPreviewClassWithPreviewData:(id)previewData;
-(float)balloonHeightWithPreviewData:(id)previewData;
-(void)configureBalloon:(id)balloon withPreviewData:(id)previewData;
-(BOOL)_imageHasAnimation;
@end

