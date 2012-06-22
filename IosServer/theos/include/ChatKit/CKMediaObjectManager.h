/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface CKMediaObjectManager : NSObject {
  NSMutableDictionary* _mediaObjectDict;
}
+(id)sharedInstance;
-(void)_registerAllMediaTypes;
-(id)newMediaObjectForFilename:(id)filename mimeType:(id)type exportedFilename:(id)filename3;
-(id)newMediaObjectForData:(id)data mimeType:(id)type exportedFilename:(id)filename;
-(Class)mediaObjectClassForMIMEType:(id)mimetype;
-(void)dealloc;
@end

