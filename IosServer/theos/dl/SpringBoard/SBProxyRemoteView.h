/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>

@class NSString, SBApplication;

@interface SBProxyRemoteView : UIView {
  id _delegate;
  SBApplication* _app;
  NSString* _remoteViewIdentifier;
}
@property(retain, nonatomic) NSString* remoteViewIdentifier;
@property(assign, nonatomic) id delegate;
// inherited: +(Class)layerClass;
// inherited: -(void)dealloc;
-(void)didMoveToSuperview;
-(void)connectToContextID:(unsigned)contextID forIdentifier:(id)identifier application:(id)application;
-(void)_setIsConnected:(BOOL)connected;
-(void)noteConnectionLost;
-(void)disconnect;
@end

