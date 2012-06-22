/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>
#import <Availability2.h>

@class UISearchBar, UITableView, SBRoundedCornerView, UILabel, UIKeyboard, SBRoundedCornersView;

@interface SBSearchView : UIView {
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
  SBRoundedCornersView* _roundedCornersView;
#endif
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2
  SBRoundedCornerView* _roundedCornerView;
#endif
  UISearchBar* _searchBar;
  UITableView* _tableView;
  UIKeyboard* _keyboard;
  UILabel* _noResultsLabel;
  BOOL _isKeyboardVisible;
  BOOL _inAnimationBlock;
  BOOL _showSearchKeyWhenAnimatingKeyboard;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
  BOOL _hidesEmptyTableFooter;
#endif
}
@property(readonly, assign, nonatomic) UISearchBar* searchBar;
@property(readonly, assign, nonatomic) UITableView* tableView;
// inherited: -(id)initWithFrame:(CGRect)frame;
-(BOOL)_initializeKeyboardIfNotBricked;
// inherited: -(void)dealloc;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)frame;
-(void)layoutCornerView;
-(CGFloat)_footerHeight;
-(void)layoutFooterView;
-(BOOL)isKeyboardVisible;
-(void)setShowsKeyboard:(BOOL)keyboard animated:(BOOL)animated;
-(void)keyboardAnimationDidStop:(id)keyboardAnimation finished:(id)finished context:(void*)context;
-(void)_fixUpRespondersAndPreheat;
-(void)setShowingNoResultsText:(BOOL)text;
-(void)setShowsSearchKeyWhenAnimatingKeyboard:(BOOL)keyboard;
-(void)_setDistantContentViewTransform;
-(void)scatter:(BOOL)scatter startTime:(double)time;
-(void)scatterAnimationDidStop;
-(void)unscatter:(BOOL)unscatter startTime:(double)time;
-(void)unscatterAnimationDidStop;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(void)setHidesEmptyTableFooter:(BOOL)footer;
-(void)_resetContentViewTransform;
-(void)willRotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation duration:(NSTimeInterval)duration;
-(void)willAnimateRotationToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation duration:(NSTimeInterval)duration;
-(void)didRotateFromInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation;
#endif
@end

