/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>

@class WebFrame, NSMutableArray, DOMElement, DOMHTMLInputElement, NSMutableDictionary;

@interface FormAutoFiller : NSObject {
  WebFrame* _frame;
  DOMElement* _form;
  int _formType;
  DOMHTMLInputElement* _usernameElement;
  DOMHTMLInputElement* _passwordElement;
  NSMutableArray* _autoFilledControls;
  NSMutableDictionary* _fieldsFilledFromAB;
  NSMutableArray* _continuationFields;
  BOOL _hasAutoFilled;
}
+(id)autoFillerForFrame:(id)frame form:(id)form create:(BOOL)create;
+(id)matchForControl:(id)control rep:(id)rep fieldLabels:(id)labels useFieldName:(BOOL)name foundByPageScan:(BOOL*)scan;
+(id)abMatchInFrame:(id)frame form:(id)form fieldName:(id)name;
+(BOOL)isContinuationField:(id)field inFrame:(id)frame form:(id)form;
+(void)recordABMatch:(id)match inFrame:(id)frame form:(id)form fieldName:(id)name;
+(void)clearAutoFillStateForFrame:(id)frame;
+(void)clearAutoFilledTextField:(id)field inFrame:(id)frame form:(id)form;
+(int)indexOfItemInSelectElement:(id)selectElement forSynonyms:(id)synonyms;
+(id)radioButtonGroupContaining:(id)containing inFormElements:(id)formElements;
+(int)indexOfItemInRadioButtonGroup:(id)radioButtonGroup forSynonyms:(id)synonyms;
+(id)fieldNameForAutoFillOfControl:(id)control rep:(id)rep respectHTMLAutocompleteAttribute:(BOOL)attribute;
-(id)init;
-(void)dealloc;
-(id)visibleControlsInForm;
-(void)_scanElements;
-(int)formType;
-(id)usernameElement;
-(id)passwordElement;
-(int)_itemInSelectElement:(id)selectElement forMatch:(id)match;
-(id)_decomposeStreetAddress:(id)address style:(int)style;
-(void)_insertABValue:(id)value inTextFieldElement:(id)textFieldElement match:(id)match fieldName:(id)name;
-(int)_reflectMultiFieldMatch:(id)match inControls:(id)controls currIndex:(unsigned)index fieldName:(id)name isPhoneNumber:(BOOL)number;
-(int)_reflectAutoFillMatch:(id)match inControls:(id)controls currIndex:(int)index fieldName:(id)name;
-(BOOL)hasAutoFilled;
-(BOOL)autoFill;
-(void)autoFillAddressStartingAtControl:(id)control match:(id)match;
-(int)autoFillPhoneOrZipStartingAtControl:(id)control match:(id)match;
-(void)recordABMatch:(id)match fieldName:(id)name;
-(void)recordABContinuationField:(id)field;
-(void)clearAutoFilledTextField:(id)field;
@end

