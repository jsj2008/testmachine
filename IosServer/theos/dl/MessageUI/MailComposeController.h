/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MailComposeViewDelegate.h"
#import <Foundation/NSObject.h>
#import "MessageUI-Structs.h"

@class MailboxUid, OutgoingMessageDelivery, OutgoingMessage, MutableMessageHeaders, NSTimer, MailComposeView, UINavigationItem, MFError, ComposeBodyField, MFComposeSubjectView, GenericAttachmentStore, NSString, MailCompositionContext, NSArray, ComposeRecipientView, MailAccountProxy;

@interface MailComposeController : NSObject <MailComposeViewDelegate> {
  id _delegate;
  MailComposeView* _view;
  ComposeRecipientView* _toField;
  ComposeRecipientView* _ccField;
  MFComposeSubjectView* _subjectField;
  ComposeBodyField* _bodyField;
  UINavigationItem* _navigationItem;
  CGSize _size;
  MailCompositionContext* _compositionContext;
  unsigned _showKeyboardImmediately : 1;
  unsigned _isDirty : 1;
  unsigned _shouldAutosaveWithSuspendInfo : 1;
  unsigned _suspendedPickingTo : 1;
  unsigned _suspendedPickingCC : 1;
  unsigned _suspendedToWasSelected : 1;
  unsigned _suspendedCCWasSelected : 1;
  unsigned _suspendedBCCWasSelected : 1;
  unsigned _suspendedSubjectWasSelected : 1;
  unsigned _suspendedBodyWasSelected : 1;
  unsigned _keyboardWasVisible : 1;
  unsigned _pickerWasVisible : 1;
  unsigned _allowDisabledFromAddress : 1;
  unsigned _initialAttachmentCount : 10;
  unsigned _stillLoading : 1;
  unsigned _hosted : 1;
  NSString* _lastDraftMessageID;
  MailboxUid* _lastDraftMailboxUid;
  GenericAttachmentStore* _attachmentStore;
  OutgoingMessageDelivery* _delivery;
  OutgoingMessage* _message;
  NSString* _originalSendingEmailAddress;
  NSString* _sendingEmailAddress;
  int _sendingEmailAddressIndex;
  NSArray* _toAddresses;
  NSArray* _ccAddresses;
  NSArray* _bccAddresses;
  NSArray* _originalBccAddresses;
  NSString* _subject;
  id _content;
  MutableMessageHeaders* _savedHeaders;
  NSRange _selectedRange;
  int _resolution;
  NSTimer* _autosaveTimer;
  MFError* _error;
}
// inherited: +(void)initialize;
+(void)_refreshMailAccountsIfNecessary;
+(BOOL)isSetupForDelivery;
+(MailAccountProxy*)_defaultAccount;
+(id)preferenceForKey:(id)key;
+(NSString*)accountEmailAddresses;
+(NSDictionary*)dotMacUsernamesIncludingDisabled:(BOOL)disabled;
+(void)tearDownViewOnMainThread:(id)thread;
+(NSString*)defaultSignature;
+(NSString*)signature;
+(NSString*)_autosavePath;
+(BOOL)hasAutosavedMessage;
+(void)removeAutosavedMessage;
-(void)setFallbackDisabledDotMacUsername:(id)username;
-(void)initializeUI;
-(void)tearDownUI;
-(id)topView;
-(id)bottomView;
-(id)initForContentSize:(CGSize)contentSize navigationItem:(id)item;
-(id)initForContentSize:(CGSize)contentSize navigationItem:(id)item showKeyboardImmediately:(BOOL)immediately;
// inherited: -(id)init;
-(void)_pickInitialFirstResponder;
-(int)composeType;
-(void)setCompositionContext:(MailCompositionContext*)context;
-(void)_setupForNewMessage;
-(void)_setupForDraft:(id)draft;
-(void)_setupForReplyToMessage:(id)message;
-(void)_setupForReplyAllToMessage:(id)message;
-(void)_setupForForwardOfMessage:(id)message;
-(void)_setupForAutosavedMessage:(id)autosavedMessage;
-(void)_setupForExistingNewMessage:(id)existingNewMessage headers:(id)headers;
-(void)_quoteReplyMessage:(id)message content:(id)content;
-(void)_quoteForwardedMessage:(id)message content:(id)content;
-(void)_quoteBody:(id)body;
-(void)_loadAttachments:(id)attachments;
-(void)_loadingContextDidLoad:(id)_loadingContext;
-(BOOL)_shouldPrependBlankLineForAttachments;
-(void)setQuotedContent:(id)content includeAttachments:(BOOL)attachments;
-(void)setDelegate:(id)delegate;
-(id)view;
// inherited: -(void)dealloc;
-(void)setPercentDone:(double)done;
-(id)sendingEmailAddress;
// in a protocol: -(id)sendingEmailAddressIfExists;
-(void)setSendingEmailAddress:(id)address;
// in a protocol: -(BOOL)sendingEmailDirtied;
// in a protocol: -(BOOL)bccAddressesDirtied;
// in a protocol: -(BOOL)canShowFromField;
-(void)setupForURL:(id)url;
-(void)_focusGained:(id)gained;
-(void)suspend;
-(void)resumeWithSize:(CGSize)size;
-(void)resume;
-(void)_textChanged:(id)changed;
-(void)_bodyTextChanged:(id)changed;
-(void)_close;
-(void)close:(id)close;
-(void)emptyContent;
-(id)navigationBarTitle;
-(void)setContent:(id)content;
-(void)prependQuotedMarkup:(id)markup;
-(void)prependPreamble:(id)preamble;
-(void)addSignature:(BOOL)signature;
-(void)addSignature;
-(void)setSubject:(id)subject;
-(void)_setRecipients:(id)recipients forField:(int)field;
-(void)setToRecipients:(id)recipients;
-(void)setCcRecipients:(id)recipients;
-(void)setBccRecipients:(id)recipients;
-(void)setSendingEmailAddress:(id)address addIfNotPresent:(BOOL)present;
-(void)_tryAddSenderToBccRecipients;
-(void)setDraftMessageID:(id)anId mailbox:(id)mailbox;
-(void)setHosted:(BOOL)hosted;
-(id)attachments;
-(CGRect)frameForAttachmentWithIdentifier:(id)identifier;
-(CGRect)rectOfAttachment:(id)attachment;
-(void)setContentVisible:(BOOL)visible;
-(BOOL)_addAttachment:(id)attachment;
// in a protocol: -(id)addInlineAttachmentForInclusion:(id)inclusion;
-(id)_markupForInlineAttachment:(id)inlineAttachment willBeIncluded:(BOOL)included prependBlankLine:(BOOL)line;
-(void)_insertInlineAttachmentWithWrapper:(id)wrapper mimeType:(id)type fileName:(id)name;
-(void)addInlineAttachmentAtPath:(id)path;
-(void)addInlineAttachmentAtPath:(id)path includeDirectoryContents:(BOOL)contents;
-(void)addInlineAttachmentWithData:(id)data preferredFilename:(id)filename mimeType:(id)type;
-(void)_insertInlineAttachment:(id)attachment;
-(void)addInlineAttachment:(id)attachment;
-(void)attachmentsRemoved:(id)removed;
-(void)_inlinedAttachmentFinishedLoading:(id)loading;
-(void)attachmentFinishedLoading:(id)loading;
-(void)accountsChanged:(id)changed;
-(void)recoverAutosavedMessage;
-(void)_reallyAutosaveImmediately:(id)immediately;
-(void)scheduleAutosaveAfterDelay:(id)delay;
-(void)autosaveImmediately;
-(void)cancelAutosave;
-(id)_autosavedMessage;
-(void)composeSubjectViewTextFieldDidResignFirstResponder:(id)composeSubjectViewTextField;
-(id)headersUseSuspendInfo:(BOOL)info;
-(BOOL)_fromAccountAllowsEmoji;
-(void)_setCodePointTranslationEnabled:(BOOL)enabled;
-(id)messageUseSuspendInfo:(BOOL)info endingEditing:(BOOL)editing;
-(id)messageUseSuspendInfo:(BOOL)info;
-(void)_getMessage:(id)message;
-(id)message;
-(id)messageEndingEditing:(BOOL)editing;
-(id)_lastDraftWithLibrary:(id)library;
-(void)_removeLastDraftWithStore:(id)store;
-(void)markMessageAsReplied:(id)replied;
-(void)markMessageAsForwarded:(id)forwarded;
-(void)_setUpDeliveryObject;
-(void)send:(id)send;
-(void)sendMessage;
-(id)addressesForField:(int)field;
-(void)addAddress:(id)address field:(int)field;
-(void)setAddresses:(id)addresses field:(int)field;
-(void)removeAddressAtIndex:(int)index field:(int)field;
-(int)resolution;
-(BOOL)needsDelivery;
-(void)_setupForSaveAsDraft;
-(void)saveAsDraft;
-(BOOL)deliverMessage;
-(BOOL)deliverMessageRemotely;
-(id)error;
-(id)errorTitle;
-(id)errorDescription;
-(void)setRecipientsKeyboardType:(int)type;
-(void)composeHeaderViewDidChangeValue:(id)composeHeaderView;
-(void)composeHeaderViewDidConfirmValue:(id)composeHeaderView;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
-(int)numberOfComponentsInPickerView:(id)pickerView;
-(unsigned)pickerView:(id)view numberOfRowsInComponent:(unsigned)component;
// in a protocol: -(id)pickerView:(id)view viewForRow:(int)row forComponent:(int)component reusingView:(id)view4;
-(void)didSelectCellAtRow:(unsigned)row;
// in a protocol: -(void)selectCurrentEntryForPickerView:(id)pickerView;
@end

