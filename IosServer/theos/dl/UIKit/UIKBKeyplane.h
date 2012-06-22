/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, UIKBAttributeList, UIKBKeylayout;

@interface UIKBKeyplane : NSObject <NSCoding> {
  NSString* m_name;
  NSMutableArray* m_keylayouts;
  UIKBAttributeList* m_attributes;
  NSMutableArray* m_supportedTypes;
  NSArray* m_keys;
}
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSArray* keylayouts;
@property(copy, nonatomic) UIKBAttributeList* attributes;
@property(copy, nonatomic) NSArray* supportedTypes;
@property(readonly, assign, nonatomic) NSArray* keysOrderedByPosition;
@property(readonly, assign, nonatomic) NSArray* keys;
+(UIKBKeyplane*)keyplane;
//-(id)init;
//-(void)dealloc;
//-(id)initWithCoder:(id)coder;
//-(void)encodeWithCoder:(id)coder;
-(UIKBKeylayout*)keylayoutWithName:(NSString*)name;
-(void)layoutInRect:(CGRect)rect;
-(BOOL)looksLike:(UIKBKeyplane*)another;
-(BOOL)looksLikeShiftAlternate;
//-(id)description;
-(BOOL)usesAutoShift;
-(NSString*)alternateKeyplaneName;
-(NSString*)shiftAlternateKeyplaneName;
-(BOOL)isShiftKeyplane;
-(BOOL)shouldSkipCandidateSelection;
-(BOOL)isShiftKeyPlaneChooser;
-(BOOL)usesAdaptiveKeys;
-(BOOL)supportsType:(int)type;
@end
