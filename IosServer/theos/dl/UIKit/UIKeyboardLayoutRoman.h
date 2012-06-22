/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKeyboardLayout.h"
#import "UIKit-Structs.h"

@class NSMutableDictionary, UIKeyboardSublayout;

@interface UIKeyboardLayoutRoman : UIKeyboardLayout {
  NSMutableDictionary* m_keyedSublayouts;
  UIKeyboardSublayout* m_activeSublayout;
  UIKeyboardSublayout* m_deactivatingSublayout;
  id m_activeSublayoutKey;
  int m_activeKeyIndex;
  UIView* m_activeKeyView;
  UIView* m_accentedKeyView;
  int m_returnKeyIndex;
  UIView* m_enabledReturnKeyView;
  UIView* m_disabledReturnKeyView;
  UIView* m_pressedReturnKeyView;
  CGPoint m_dragPoint;
  int m_preferredTrackingChangeCount;
  USetRef m_accentInfo;
  USetRef m_hasAccents;
  id m_spaceTarget;
  SEL m_spaceAction;
  SEL m_spaceLongAction;
  id m_returnTarget;
  SEL m_returnAction;
  SEL m_returnLongAction;
  id m_deleteTarget;
  SEL m_deleteAction;
  SEL m_deleteLongAction;
  BOOL m_shift;
  BOOL m_built;
  BOOL m_dragged;
  BOOL m_dragChangedKey;
  BOOL m_mouseDownInMoreKey;
  BOOL m_didLongPress;
}
+(id)inputModesPreferringEuroToDollar;
+(id)availableTopLevelDomains;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)showKeyboardType:(int)type withAppearance:(int)appearance;
-(void)deactivateActiveKeys;
-(void)updateReturnKey;
-(void)updateLocalizedKeys;
-(BOOL)usesAutoShift;
-(BOOL)isShiftKeyBeingHeld;
-(BOOL)isShiftKeyPlaneChooser;
-(void)setShift:(BOOL)shift;
-(void)longPressAction;
-(unsigned)typeForKey:(XXStruct_K4qLnD*)key;
-(unsigned)downActionFlagsForKey:(XXStruct_K4qLnD*)key;
-(unsigned)upActionFlagsForKey:(XXStruct_K4qLnD*)key;
-(CGRect)compositeFGLongPressFrameForKey:(XXStruct_K4qLnD*)key orientation:(int)orientation;
-(Class)sublayoutClassForKeyboardType:(id)keyboardType;
-(void)setLabel:(id)label forKey:(id)key;
-(void)setTarget:(id)target forKey:(id)key;
-(void)setAction:(SEL)action forKey:(id)key;
-(void)setLongPressAction:(SEL)action forKey:(id)key;
-(void)restoreDefaultsForKey:(id)key;
-(void)restoreDefaultsForAllKeys;
-(void)nextCandidatesAction;
-(void)confirmAction;
-(void)sendStringAction:(id)action forKey:(XXStruct_K4qLnD*)key;
-(void)deleteAction;
-(void)handleHardwareKeyDownFromSimulator:(GSEventRef)simulator;
-(void)addLocalizedCurrencyKeysToSublayout:(id)sublayout keyboardType:(id)type;
-(void)build;
-(id)buildSublayoutForKey:(id)key;
-(id)buildUIKeyboardLayoutMain;
-(id)buildUIKeyboardLayoutAlternate;
-(id)buildUIKeyboardLayoutAlphabet;
-(id)buildUIKeyboardLayoutNumbers;
-(id)buildUIKeyboardLayoutAlphabetTransparent;
-(id)buildUIKeyboardLayoutNumbersTransparent;
-(id)buildUIKeyboardLayoutPhonePad;
-(id)buildUIKeyboardLayoutPhonePadAlt;
-(id)buildUIKeyboardLayoutPhonePadTransparent;
-(id)buildUIKeyboardLayoutPhonePadAltTransparent;
-(id)buildUIKeyboardLayoutNumberPad;
-(id)buildUIKeyboardLayoutNumberPadTransparent;
-(id)buildUIKeyboardLayoutURL;
-(id)buildUIKeyboardLayoutURLAlt;
-(id)buildUIKeyboardLayoutURLTransparent;
-(id)buildUIKeyboardLayoutURLAltTransparent;
-(id)buildUIKeyboardLayoutSMSAddressing;
-(id)buildUIKeyboardLayoutSMSAddressingAlt;
-(id)buildUIKeyboardLayoutSMSAddressingTransparent;
-(id)buildUIKeyboardLayoutSMSAddressingAltTransparent;
-(id)buildUIKeyboardLayoutEmailAddress;
-(id)buildUIKeyboardLayoutEmailAddressAlt;
-(id)buildUIKeyboardLayoutEmailAddressTransparent;
-(id)buildUIKeyboardLayoutEmailAddressAltTransparent;
-(void)addSublayout:(id)sublayout forKey:(id)key;
-(id)layoutKeyForKeyboardType:(int)keyboardType withAppearance:(int)appearance;
-(void)showKeyboardTypeForKey:(id)key;
-(id)sublayoutForKey:(id)key;
-(id)activeSublayoutKey;
-(id)activeSublayout;
-(XXStruct_K4qLnD*)activeKey;
-(id)overlayImageForKey:(XXStruct_K4qLnD*)key;
-(BOOL)shouldCacheViewForKey:(XXStruct_K4qLnD*)key;
-(void)activateCompositeKey:(XXStruct_K4qLnD*)key;
-(void)activateKey:(XXStruct_K4qLnD*)key;
-(void)activateKeyWithIndex:(unsigned)index;
-(void)activateFirstKeyOfType:(unsigned)type;
-(XXStruct_K4qLnD*)closestKeyWithoutCharging:(CGPoint)charging;
-(unsigned)keyHitTest:(CGPoint)test;
-(XXStruct_K4qLnD*)keyForPoint:(CGPoint)point;
-(void)showPopupVariantsForKey:(XXStruct_K4qLnD*)key;
-(void)layoutSubview:(id)subview selectedString:(id)string;
-(BOOL)isLongPressedKey:(XXStruct_K4qLnD*)key;
-(id)inputStringForKey:(XXStruct_K4qLnD*)key;
-(id)cacheKeyForKey:(XXStruct_K4qLnD*)key;
-(XXStruct_K4qLnD*)inputKeyboardKeyForKey:(XXStruct_K4qLnD*)key;
-(id)alternateSublayoutKey:(id)key;
-(void)touchDownWithKey:(XXStruct_K4qLnD*)key atPoint:(CGPoint)point;
-(int)keyHitTestUniversal:(CGPoint)universal touchStage:(int)stage atTime:(double)time withPathInfo:(XXStruct__FxRIA*)pathInfo;
-(void)touchDown:(GSEventRef)down withPathInfo:(XXStruct__FxRIA*)pathInfo;
-(void)touchDragged:(GSEventRef)dragged withPathInfo:(XXStruct__FxRIA*)pathInfo;
-(void)touchUp:(GSEventRef)up withPathInfo:(XXStruct__FxRIA*)pathInfo;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)willRotate;
-(void)didRotate;
@end

