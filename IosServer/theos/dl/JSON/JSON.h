/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/JSON.framework/JSON
 */


#import <Foundation/Foundation.h>
#import <Availability2.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_1

@interface JSON : NSObject {
  unsigned options;
  NSError** error;
  unsigned depth;
}
-(id)initWithOptions:(unsigned)options error:(NSError**)error;
-(void)setErrorWithCode:(unsigned)code description:(NSString*)description;
-(void)setErrorWithCode:(unsigned)code string:(NSString*)string;
@end

@interface JSON (JSONParser)
+(id)objectWithData:(NSData*)data options:(unsigned)options error:(NSError**)error;
@end

@interface JSON (JSONWriter)
+(NSData*)dataWithObject:(id)object options:(unsigned)options error:(id*)error;
+(NSData*)dataWithObject:(id)object options:(unsigned)options encoding:(unsigned)encoding error:(id*)error;
+(NSString*)stringWithObject:(id)object options:(unsigned)options error:(id*)error;
@end



__attribute__((visibility("hidden")))
@interface JSONParser : JSON {
@private
  char* c;
  char* start;
  char* end;
}
-(id)objectWithData:(id)data;
-(unsigned)stringEncodingForJSONData:(id)jsondata;
-(id)newScanValue;
-(id)newScanConstant;
-(id)newScanArray;
-(id)newScanDictionary;
-(id)newScanString;
-(BOOL)scanUnicodeChar:(unsigned short*)aChar;
-(BOOL)scanHexQuad:(unsigned short*)quad;
-(id)newScanNumber;
-(BOOL)scanIsAtEnd;
-(void)setErrorWithCode:(unsigned)code string:(id)string;
@end

__attribute__((visibility("hidden")))
@interface JSONWriter : JSON {
}
-(id)stringWithObject:(id)object;
-(id)indent;
-(BOOL)appendValue:(id)value into:(id)into;
-(BOOL)appendArray:(id)array into:(id)into;
-(BOOL)appendDictionary:(id)dictionary into:(id)into;
-(BOOL)appendString:(id)string into:(id)into;
@end

#endif
