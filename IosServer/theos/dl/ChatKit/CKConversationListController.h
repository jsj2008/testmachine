/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import <UIKit/UIViewController.h>
#import "MFMailComposeViewControllerDelegate.h"
#import "ChatKit-Structs.h"

@class UITableView, CKService, CKTranscriptController, UIToolbar, MFMailComposeViewController, CKConversationList, UINavigationController;

@interface CKConversationListController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate> {
  UINavigationController* _navigationController;
  UITableView* _table;
  CKTranscriptController* _transcriptController;
  UIToolbar* _buttonBar;
  unsigned _willBeMarkedReadCount;
  unsigned _dirty : 1;
  unsigned _isVisible : 1;
  unsigned _isUpdatingDisabled : 1;
  CKService* _currentService;
  CKConversationList* _conversationList;
  MFMailComposeViewController* _mailComposeController;
}
@property(assign, nonatomic) CKConversationList* conversationList;
-(id)initWithNavigationController:(id)navigationController service:(id)service;
-(void)dealloc;
-(id)transcriptController;
-(void)_conversationWasMarkedAsRead:(id)read;
-(void)_conversationDidChange:(id)_conversation;
-(void)_conversationMessageWasSent:(id)sent;
-(void)_groupsChanged:(id)changed;
-(void)updateTitle;
-(void)updateNavigationItems;
-(void)conversationWillBeMarkedRead:(id)conversation;
-(void)noteUnreadCountsChanged;
-(void)significantTimeChange;
-(void)updateConversationList;
-(void)disableConversationListUpdates;
-(void)enableConversationListUpdates;
-(void)noteConversationListChanged;
-(void)showMessagesForAddress:(id)address animate:(BOOL)animate;
-(void)showNewMessageCompositionPanel:(BOOL)panel;
-(void)showConversation:(id)conversation animate:(BOOL)animate;
-(BOOL)resumeToConversation:(id)conversation unsentComposition:(id)composition;
-(void)show:(BOOL)show;
-(BOOL)showUnreadConversations;
-(BOOL)isShowingTranscriptWithUnsentText;
-(void)loadView;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)_getRotationContentSettings:(XXStruct_TF$i3B*)settings;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)composeButtonClicked:(id)clicked;
-(int)selectedIndex;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
-(void)deleteButtonPressedForIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(void)_displaySMSDatabaseFullWarning;
-(void)_showMailComposeSheet;
-(void)showMailComposeSheetForAutosavedMessage;
-(void)autosaveMailComposition;
-(void)showMailComposeSheetForAddress:(id)address;
-(void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;
-(void)didCancelComposition:(id)composition;
@end

