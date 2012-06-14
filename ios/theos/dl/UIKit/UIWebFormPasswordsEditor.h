/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableArray, NSDictionary;

@interface UIWebFormPasswordsEditor : NSObject {
	NSDictionary* _credentialsByProtectionSpace;
	NSMutableArray* _flattenedCredentials;
	NSMutableDictionary* _credentialToProtectionSpaceMap;
	BOOL _ignoreNotifications;
}
+(id)sharedPasswordsEditor;
-(id)protectionSpaceForCredential:(id)credential;
-(id)addressStringForCredential:(id)credential;
-(void)resetCredentials;
-(void)credentialsChanged:(id)changed;
-(void)startMonitoringCredentials;
-(void)stopMonitoringCredentials;
-(void)dealloc;
-(void)removeSelectedItems:(id)items;
-(void)removeAll;
@end

