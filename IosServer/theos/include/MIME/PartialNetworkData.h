/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <Foundation/NSObject.h>

@class NSMutableData;

@interface PartialNetworkData : NSObject {
  NSMutableData* _rawData;
  NSMutableData* _unixData;
}
-(void)appendRawData:(id)data;
-(void)setRawData:(id)data;
-(id)rawData;
-(unsigned)rawDataLength;
-(id)dataWithUnixLineEndings;
-(id)copyDataWithUnixLineEndings;
// inherited: -(void)dealloc;
-(void)purgeCaches;
@end

