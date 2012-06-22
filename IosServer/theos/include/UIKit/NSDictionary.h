/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSDictionary.h>


@interface NSDictionary (UICollectionAdditions)
-(BOOL)boolForKey:(id)key;
@end

@interface NSDictionary (UIWebDocumentViewMessaging)  // In 3.2 the category name is UIWebBrowserViewPrivate.
-(id)text;
-(int)lineNumber;
-(id)sourceURL;
-(int)type;
@end

@interface NSDictionary (BrowserAdditions)
-(void)_safari_setObject:(id)object forUncopiedKey:(id)uncopiedKey;
@end
