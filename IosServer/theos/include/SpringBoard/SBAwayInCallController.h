/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <Foundation/NSObject.h>

@class NSString, NSTimer, UIImage, TPLCDView;

@interface SBAwayInCallController : NSObject {
  TPLCDView* _lcdView;
  BOOL _showsInCallInfo;
  NSTimer* _durationTimer;
  CTCallRef _displayedCall;
  NSString* _localizedLabel;
  UIImage* _callerImage;
  BOOL _isFullScreen;
}
-(id)initWithLCDView:(id)lcdview;
// inherited: -(void)dealloc;
-(id)callerImage;
-(BOOL)callerImageIsFullScreen;
-(void)fetchCallInformation:(id*)information name:(id*)name label:(id*)label image:(id*)image isFullScreen:(BOOL*)screen;
-(void)updateDuration;
-(void)reload;
-(void)setShowsInCallInfo:(BOOL)callInfo;
@end

