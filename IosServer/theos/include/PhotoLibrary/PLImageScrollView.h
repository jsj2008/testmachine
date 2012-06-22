/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <UIKit/UIScrollView.h>

@class PLImageTile, PLImageView;
@protocol UIScrollViewDelegate, PLImageScrollViewDelegate;

@interface PLImageScrollView : UIScrollView {
  PLImageView* _imageView;
  PLImageTile* _imageTile;
  CGPoint _grabLoc;
  BOOL _locked;
  BOOL _isZooming;
  BOOL _canFlickDuringTouch;
  BOOL _dontAdjustOffset;
  CGSize _padding;
  struct {
    unsigned delegateImplementsSiblingForDirection : 1;
    unsigned allowNegativeOffsets : 1;
    unsigned reserved : 30;
  } _imageScrollerFlags;
  PLImageView* _leftView;
  PLImageView* _rightView;
}
@property(assign, nonatomic) id<UIScrollViewDelegate, PLImageScrollViewDelegate> delegate;
-(CGSize)_contentSizeForView:(id)view;
// inherited: -(id)initWithFrame:(CGRect)frame;
// inherited: -(void)dealloc;
// inherited: -(BOOL)canHandleSwipes;
-(void)_adjustPositionOfView:(id)view forContentSize:(CGSize)contentSize offset:(CGPoint)offset;
-(void)updateSideViews;
-(void)_clearSideViews;
-(id)_createSideViewWithImageView:(id)imageView frame:(CGRect)frame;
-(void)_showSideViewInDirection:(int)direction;
-(void)_showLeftView;
-(void)_showRightView;
// inherited: -(void)setContentSize:(CGSize)size;
// inherited: -(BOOL)alwaysBounceHorizontal;
-(void)setAllowNegativeOffsets:(BOOL)offsets;
-(void)setOffset:(CGPoint)offset animated:(BOOL)animated;
// inherited: -(void)setContentOffset:(CGPoint)offset;
-(void)setDontAdjustOffset:(BOOL)offset;
-(void)_adjustContentOffsetIfNecessary;
-(void)resetContentOffsetAnimated:(BOOL)animated;
-(void)setLockedOnImage:(BOOL)image;
-(CGSize)padding;
-(void)setPadding:(CGSize)padding;
-(id)imageView;
-(void)setImageView:(id)view;
-(id)imageTile;
-(void)setImageTile:(id)tile;
-(BOOL)canFlick;
-(BOOL)shouldAdvance;
-(BOOL)_alwaysHandleScrollerMouseEvent;
// inherited: -(void)touchesBegan:(id)began withEvent:(id)event;
// inherited: -(void)touchesMoved:(id)moved withEvent:(id)event;
// inherited: -(void)touchesEnded:(id)ended withEvent:(id)event;
// inherited: -(void)setFrame:(CGRect)frame;
-(void)zoomToScale:(float)scale;
-(void)imageView:(id)view didStartGesture:(int)gesture forEvent:(GSEventRef)event;
-(CGImageRef)createImageWithCropRect:(CGRect)cropRect croppedImageData:(id*)data fullSizeImageData:(id*)data3 fullScreenImageData:(id*)data4 imageCropRect:(CGRect*)rect padWithBlack:(BOOL)black;
@end

