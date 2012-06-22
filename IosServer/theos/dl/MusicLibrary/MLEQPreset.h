/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MLEQPreset : NSObject {
@private
  NSString* _name;
  NSString* _localizedName;
  int _builtInPresetType;
}
+(id)eqPresetForName:(id)name;
+(id)eqPresetForBuiltInPresetType:(int)presetType;
-(id)initWithBuiltInPresetType:(int)presetType;
-(void)dealloc;
-(id)name;
-(id)localizedName;
-(int)builtInPresetType;
-(int)typeForAVController;
@end

