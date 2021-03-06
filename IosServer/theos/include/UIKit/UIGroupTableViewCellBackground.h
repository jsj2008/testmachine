/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIGroupTableViewCellBackground.h"
#import "UIKit-Structs.h"
#import <UIKit/UIView.h>
#import <Availability2.h>


@interface UIGroupTableViewCellBackground : UIView {
  int _sectionLocation;
  int _animationCount;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
  int _selectionStyle;
  int _separatorStyle;
  UIView* _topSeparatorView;
  UIView* _bottomSeparatorView;
  struct {
    unsigned disableTopSeparator : 1;
    unsigned disableBottomSeparator : 1;
    unsigned selected : 1;
  } _groupBackgroundFlags;  
#else
  BOOL _disableSeparator;
  UIView* _separatorView;
#endif
}
@property(assign, nonatomic) int sectionLocation;
+(void)_flushCacheOnMemoryWarning:(id)warning;
+(void)initialize;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)setFrame:(CGRect)frame;
-(void)_setSectionLocationAnimationDidStop;
-(void)setSectionLocation:(int)location animated:(BOOL)animated;
-(void)setBackgroundColor:(id)color;
-(id)backgroundColor;
-(void)layoutSubviews;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@property(assign, nonatomic, getter=isSelected) BOOL selected;
@property(assign, nonatomic) int separatorStyle;
@property(assign, nonatomic) int selectionStyle;
-(id)_contentMaskLayer;
-(id)_topShadowViewWithColor:(id)color;
#endif
@end

@interface UIGroupTableViewCellBackground (UIGroupTableViewCellBackgroundInternal)
-(CGContextRef)_createContextForCachingWithFrame:(CGRect)frame isOpaque:(BOOL)opaque;
-(CGRect)_contentRectForContentHeight:(float)contentHeight;
-(void)_incrementAnimationCount;
-(void)_decrementAnimationCount;
-(id)_backgroundColor;
-(id)_borderColor;
-(id)_fillColor;
-(void)_layoutSubviews:(BOOL)subviews;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(id)_roundedRectBezierPathInRect:(CGRect)rect withSectionLocation:(int)sectionLocation;
-(CGImageRef)_cachedImageForKey:(id)key;
-(id)_topShadowColor;
-(id)_bottomShadowColor;
-(void)_updateSeparatorViews;
-(float)_pixelDisplayedImageHeight;
-(CGRect)_contentsRect:(BOOL)rect;
-(CGRect)_contentsCenter:(BOOL)center;
#else
-(CGImageRef)_cachedImageWithSize:(CGSize)size forBackgroundColor:(id)backgroundColor borderColor:(id)color fillColor:(id)color4 leftPhase:(float)phase rightPhase:(float)phase6 ignoreSectionLocation:(BOOL)location;
-(void)_updateSeparatorView;
-(void)_updateContentsRectAndCenter;
#endif
@end

