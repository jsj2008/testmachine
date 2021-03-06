/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <SystemConfiguration/SystemConfiguration.h>
#import <QuartzCore/QuartzCore.h>

typedef struct __SecTrust SecTrust;

typedef struct _xmlNs xmlNs;
typedef struct _xmlAttr xmlAttr;
typedef struct _xmlDoc xmlDoc;
typedef struct _xmlNode {
  void* _field1;
  int _field2;
  char* _field3;
  struct _xmlNode* _field4;
  struct _xmlNode* _field5;
  struct _xmlNode* _field6;
  struct _xmlNode* _field7;
  struct _xmlNode* _field8;
  xmlDoc* _field9;
  xmlNs* _field10;
  char* _field11;
  xmlAttr* _field12;
  xmlNs* _field13;
  void* _field14;
  unsigned short _field15;
  unsigned short _field16;
} xmlNode;

typedef struct _SYSTEMTIME {
  short _field1;
  short _field2;
  short _field3;
  short _field4;
  short _field5;
  short _field6;
  short _field7;
  short _field8;
} SYSTEMTIME;

typedef struct {
  long _field1;
  unsigned short _field2[32];
  SYSTEMTIME _field3;
  long _field4;
  unsigned short _field5[32];
  SYSTEMTIME _field6;
  long _field7;
} XXStruct_wS5jrA;

typedef struct {
  int version;
  void* info;
  /*function-pointer*/ void* retain;
  /*function-pointer*/ void* release;
  /*function-pointer*/ void* copyDescription;
} XXStruct_4pnlqD;

typedef struct ldap ldap;

typedef struct ldapmsg ldapmsg;

typedef struct CalDatabase CalDatabase;

typedef struct _xmlSAXHandler {
  /*function-pointer*/ void* internalSubset;
  /*function-pointer*/ void* isStandalone;
  /*function-pointer*/ void* hasInternalSubset;
  /*function-pointer*/ void* hasExternalSubset;
  /*function-pointer*/ void* resolveEntity;
  /*function-pointer*/ void* getEntity;
  /*function-pointer*/ void* entityDecl;
  /*function-pointer*/ void* notationDecl;
  /*function-pointer*/ void* attributeDecl;
  /*function-pointer*/ void* elementDecl;
  /*function-pointer*/ void* unparsedEntityDecl;
  /*function-pointer*/ void* setDocumentLocator;
  /*function-pointer*/ void* startDocument;
  /*function-pointer*/ void* endDocument;
  /*function-pointer*/ void* startElement;
  /*function-pointer*/ void* endElement;
  /*function-pointer*/ void* reference;
  /*function-pointer*/ void* characters;
  /*function-pointer*/ void* ignorableWhitespace;
  /*function-pointer*/ void* processingInstruction;
  /*function-pointer*/ void* comment;
  /*function-pointer*/ void* warning;
  /*function-pointer*/ void* error;
  /*function-pointer*/ void* fatalError;
  /*function-pointer*/ void* getParameterEntity;
  /*function-pointer*/ void* cdataBlock;
  /*function-pointer*/ void* externalSubset;
  unsigned initialized;
  void* _private;
  /*function-pointer*/ void* startElementNs;
  /*function-pointer*/ void* endElementNs;
  /*function-pointer*/ void* serror;
} xmlSAXHandler;

typedef struct _xmlParserInput xmlParserInput;

typedef struct _xmlParserNodeInfo xmlParserNodeInfo;

typedef struct _xmlParserNodeInfoSeq {
  unsigned long maximum;
  unsigned long length;
  xmlParserNodeInfo* buffer;
} xmlParserNodeInfoSeq;

typedef struct _xmlValidState xmlValidState;

typedef struct _xmlAutomata xmlAutomata;

typedef struct _xmlAutomataState xmlAutomataState;

typedef struct _xmlValidCtxt {
  void* userData;
  /*function-pointer*/ void* error;
  /*function-pointer*/ void* warning;
  xmlNode* node;
  int nodeNr;
  int nodeMax;
  xmlNode** nodeTab;
  unsigned finishDtd;
  xmlDoc* doc;
  int valid;
  xmlValidState* vstate;
  int vstateNr;
  int vstateMax;
  xmlValidState* vstateTab;
  xmlAutomata* am;
  xmlAutomataState* state;
} xmlValidCtxt;

typedef struct _xmlDict xmlDict;

typedef struct _xmlHashTable xmlHashTable;

typedef struct _xmlError {
  int domain;
  int code;
  char* message;
  int level;
  char* file;
  int line;
  char* str1;
  char* str2;
  char* str3;
  int int1;
  int int2;
  void* ctxt;
  void* node;
} xmlError;

typedef struct _xmlParserCtxt {
  xmlSAXHandler* _field1;
  void* _field2;
  xmlDoc* _field3;
  int _field4;
  int _field5;
  char* _field6;
  char* _field7;
  int _field8;
  int _field9;
  xmlParserInput* _field10;
  int _field11;
  int _field12;
  xmlParserInput** _field13;
  xmlNode* _field14;
  int _field15;
  int _field16;
  xmlNode** _field17;
  int _field18;
  xmlParserNodeInfoSeq _field19;
  int _field20;
  int _field21;
  int _field22;
  int _field23;
  int _field24;
  int _field25;
  xmlValidCtxt _field26;
  int _field27;
  int _field28;
  char* _field29;
  char* _field30;
  int _field31;
  int _field32;
  char** _field33;
  long _field34;
  long _field35;
  int _field36;
  int _field37;
  int _field38;
  char* _field39;
  char* _field40;
  char* _field41;
  int* _field42;
  int _field43;
  int _field44;
  int* _field45;
  int _field46;
  xmlParserInput* _field47;
  int _field48;
  int _field49;
  int _field50;
  int _field51;
  void* _field52;
  int _field53;
  int _field54;
  void* _field55;
  int _field56;
  int _field57;
  xmlDict* _field58;
  char** _field59;
  int _field60;
  int _field61;
  char* _field62;
  char* _field63;
  char* _field64;
  int _field65;
  int _field66;
  int _field67;
  char** _field68;
  int* _field69;
  void** _field70;
  xmlHashTable* _field71;
  xmlHashTable* _field72;
  int _field73;
  int _field74;
  int _field75;
  int _field76;
  xmlNode* _field77;
  int _field78;
  xmlAttr* _field79;
  xmlError _field80;
  int _field81;
  unsigned long _field82;
  unsigned long _field83;
} xmlParserCtxt;

typedef struct re_guts re_guts;

typedef struct CalOrganizer CalOrganizer;

typedef struct {
  int _field1;
  BOOL _field2;
  BOOL _field3;
  BOOL _field4;
  BOOL _field5;
  double _field6;
} XXStruct_fhKmAA;

typedef struct {
  Class _field1;
  id _field2;
  id _field3;
  int _field4;
  int _field5;
  id _field6;
  int _field7;
  id _field8;
  int _field9;
  id _field10;
  int _field11;
  id _field12;
  id _field13;
  id _field14;
  BOOL _field15;
  BOOL _field16;
  id _field17;
  void* _field18;
  id _field19;
  id _field20;
  id _field21;
  id _field22;
  id _field23;
  id _field24;
  id _field25;
  id _field26;
  id _field27;
  id _field28;
  id _field29;
  id _field30;
  id _field31;
  id _field32;
  id _field33;
  id _field34;
  id _field35;
  id _field36;
  id _field37;
  id _field38;
  id _field39;
  int _field40;
  BOOL _field41;
  BOOL _field42;
  BOOL _field43;
  BOOL _field44;
  BOOL _field45;
  BOOL _field46;
} struct_ASEvent;

typedef struct {
  int _field1;
  int _field2;
  int _field3;
  int _field4;
} XXStruct_SMhV9B;

typedef struct {
  Class _field1;
  id _field2;
  id _field3;
  int _field4;
  int _field5;
  id _field6;
  int _field7;
  id _field8;
  int _field9;
  id _field10;
  int _field11;
  id _field12;
  id _field13;
  id _field14;
  BOOL _field15;
  BOOL _field16;
  id _field17;
  void* _field18;
  id _field19;
  id _field20;
  id _field21;
  id _field22;
  id _field23;
  int _field24;
  BOOL _field25;
  id _field26;
  id _field27;
  id _field28;
  id _field29;
  id _field30;
  id _field31;
  id _field32;
  id _field33;
  id _field34;
  id _field35;
  id _field36;
  id _field37;
  id _field38;
  id _field39;
  id _field40;
  id _field41;
  id _field42;
  id _field43;
  id _field44;
  id _field45;
  id _field46;
  id _field47;
  id _field48;
  id _field49;
  id _field50;
  id _field51;
  id _field52;
  id _field53;
  id _field54;
  id _field55;
  id _field56;
  id _field57;
  id _field58;
  id _field59;
  id _field60;
  id _field61;
  id _field62;
  id _field63;
  id _field64;
  id _field65;
  id _field66;
  id _field67;
  id _field68;
  id _field69;
  id _field70;
  id _field71;
  id _field72;
  id _field73;
  id _field74;
  id _field75;
  id _field76;
  id _field77;
  id _field78;
  id _field79;
  id _field80;
  id _field81;
  int _field82;
} struct_ASContact;

typedef struct {
  int _field1;
} XXStruct_YWGUWB;


