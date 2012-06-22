/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <Foundation/NSObject.h>
#import <Availability2.h>

@class UIWebDocumentView, UIWebSelectionView, UIWebSelection, UILongPressGestureRecognizer, UITapAndAHalfRecognizer;

@interface UIWebSelectionAssistant : NSObject 
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
<UILongPressGestureRecognizerDelegate>
#endif
{
  UIWebDocumentView* _webView;
  UIWebSelectionView* _tintView;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
  UILongPressGestureRecognizer* _longPressGestureRecognizer;
  UITapAndAHalfRecognizer* _tapAndAHalfGestureRecognizer;
#endif
  BOOL _enabled;
}
@property(assign, nonatomic) BOOL enabled;
@property(readonly, assign, nonatomic) CGRect selectionFrame;
@property(readonly, assign, nonatomic) UIWebSelection* selection;
-(id)initWithWebView:(id)webView;
-(void)dealloc;
-(void)setGestureRecognizers;
-(void)selectionChanged;
-(void)tap:(id)tap;
-(void)scaleChanged;
-(id)hitTest:(CGPoint)test withEvent:(id)event fromView:(id)view;
-(void)willDrag;
-(void)doneDragging;
-(void)resignedFirstResponder;
-(void)hideCallout;
-(void)layoutChanged;
-(void)willRotate:(id)rotate;
-(void)didRotate:(id)rotate;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
// in a protocol: -(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
// in a protocol: -(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(void)clearSelection;
-(void)makeWebSelection:(id)selection;
#else
-(void)longPress:(id)press;
#endif
@end

