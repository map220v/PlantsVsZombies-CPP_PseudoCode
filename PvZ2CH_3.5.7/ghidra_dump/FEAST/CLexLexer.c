// Class: FEAST::CLexLexer


/* FEAST::CLexLexer::operator new(unsigned long) */

void * __thiscall FEAST::CLexLexer::operator_new(CLexLexer *this,ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)LIB_GetClientRef();
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,this + 8);
  puVar2 = (undefined8 *)LIB_GetClientRef();
  *puVar1 = *puVar2;
  return puVar1 + 1;
}


/* FEAST::CLexLexer::operator delete(void*) */

void __thiscall FEAST::CLexLexer::operator_delete(CLexLexer *this,void *param_1)

{
  if (this != (CLexLexer *)0x0) {
    (**(code **)(**(long **)(this + -8) + 0x10))(*(long **)(this + -8));
  }
  return;
}


/* FEAST::CLexLexer::LexCaseSensitivity(bool) */

undefined8 __thiscall FEAST::CLexLexer::LexCaseSensitivity(CLexLexer *this,bool param_1)

{
  this[0x99] = (CLexLexer)param_1;
  return 1;
}


/* FEAST::CLexLexer::LexTokenPriority(unsigned char) */

CLexLexer __thiscall FEAST::CLexLexer::LexTokenPriority(CLexLexer *this,uchar param_1)

{
  CLexLexer CVar1;
  
  CVar1 = this[0x48];
  this[0x48] = (CLexLexer)param_1;
  return CVar1;
}


/* FEAST::CLexLexer::LexSetText(char const*, unsigned long, unsigned long, unsigned long) */

undefined8 __thiscall
FEAST::CLexLexer::LexSetText
          (CLexLexer *this,char *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  *(char **)(this + 0x38) = param_1;
  *(ulong *)(this + 0x80) = param_2;
  *(ulong *)(this + 0x88) = param_3;
  if (param_4 == 0) {
    *(undefined8 *)(this + 0x90) = 8;
    return 1;
  }
  *(ulong *)(this + 0x90) = param_4;
  return 1;
}


/* FEAST::CLexLexer::LexGetText(unsigned long*, unsigned long*) */

undefined8 __thiscall FEAST::CLexLexer::LexGetText(CLexLexer *this,ulong *param_1,ulong *param_2)

{
  if (param_1 != (ulong *)0x0) {
    *param_1 = *(ulong *)(this + 0x80);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = *(ulong *)(this + 0x88);
  }
  return *(undefined8 *)(this + 0x38);
}


/* FEAST::CLexLexer::LexGetChar(bool) */

char __thiscall FEAST::CLexLexer::LexGetChar(CLexLexer *this,bool param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(this + 0x38);
  if (pcVar1 != (char *)0x0) {
    if (param_1) {
      *(long *)(this + 0x88) = *(long *)(this + 0x88) + 1;
      if (*pcVar1 == '\n') {
        *(undefined8 *)(this + 0x88) = 0;
        *(long *)(this + 0x80) = *(long *)(this + 0x80) + 1;
        *(char **)(this + 0x38) = pcVar1 + 1;
      }
      else {
        *(char **)(this + 0x38) = pcVar1 + 1;
      }
    }
    return *pcVar1;
  }
  return '\0';
}


/* FEAST::CLexLexer::LexGetLastError() */

CLexLexer * __thiscall FEAST::CLexLexer::LexGetLastError(CLexLexer *this)

{
  return this + 0xb8;
}


/* FEAST::CLexLexer::LexGetStockRegex(FEAST::ELexStockRegex) */

char * __thiscall FEAST::CLexLexer::LexGetStockRegex(undefined8 param_1,undefined4 param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  switch(param_2) {
  case 1:
    pcVar1 = "[ \\t\\n]*";
    break;
  case 2:
    return "//.*";
  case 3:
    return "\\/\\*";
  case 4:
    return "[a-zA-Z_]([a-zA-Z0-9_])*";
  case 5:
    return "[0-9]+";
  case 6:
    return "0[xX][0-9a-fA-F]+";
  case 7:
    return "0[qQ][0-7]+";
  case 8:
    return "0[bB][0-1]+";
  case 9:
    return 
    "([0-9]+[Ee][\\+\\-]?[0-9]+)|([0-9]*\\.[0-9]+([Ee][\\+\\-]?[0-9]+)?)|([0-9]+\\.[0-9]*([Ee][\\+\\-]?[0-9]+)?)"
    ;
  case 10:
    return "\\\"(\\\\.|[^\\\\\"])*\\\"";
  case 0xb:
    return "\'(\\\\.|[^\\\\\'])+\'";
  }
  return pcVar1;
}


/* FEAST::CLexLexer::CLexLexer() */

void __thiscall FEAST::CLexLexer::CLexLexer(CLexLexer *this)

{
  CLexNfaNode *this_00;
  
  ILexLexer::ILexLexer((ILexLexer *)this);
  *(undefined ***)this = &PTR_LexDestroy_06a38400;
  CLexNfaNodeFactory::CLexNfaNodeFactory((CLexNfaNodeFactory *)(this + 8),0x800);
  CLexNfaExprFactory::CLexNfaExprFactory((CLexNfaExprFactory *)(this + 0x20),0x800);
  CLexDfaTable::CLexDfaTable((CLexDfaTable *)(this + 0x50));
  CLexBitSet::CLexBitSet((CLexBitSet *)(this + 0xa0),0x100);
  CLexBitSet::CLexBitSet((CLexBitSet *)(this + 0x4b8),0x800);
  CLexBitSet::CLexBitSet((CLexBitSet *)(this + 0x4d0),0x800);
  *(undefined8 *)(this + 0x38) = 0;
  this_00 = (CLexNfaNode *)CLexNfaNodeFactory::AllocNode((CLexNfaNodeFactory *)(this + 8));
  CLexNfaNode::CLexNfaNode(this_00);
  *(CLexNfaNode **)(this + 0x40) = this_00;
  *(undefined8 *)(this + 0x90) = 8;
  this[0x48] = (CLexLexer)0x0;
  this[0x99] = (CLexLexer)0x1;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  this[0x98] = (CLexLexer)0x0;
  FUN_05445258(*(undefined8 *)(this + 0xa0),*(undefined8 *)(this + 0xb0));
  this[0xb8] = (CLexLexer)0x0;
  return;
}


/* FEAST::CLexLexer::LexSetLastError(char const*) */

void __thiscall FEAST::CLexLexer::LexSetLastError(CLexLexer *this,char *param_1)

{
  strncpy((char *)(this + 0xb8),param_1,0x3ff);
  this[0x4b7] = (CLexLexer)0x0;
  return;
}


/* FEAST::CLexLexer::SetIntercept(unsigned long, bool (*)(FEAST::ILexLexer*, FEAST::SLexToken*,
   char*, int)) */

void __thiscall
FEAST::CLexLexer::SetIntercept
          (CLexLexer *this,ulong param_1,
          _func_bool_ILexLexer_ptr_SLexToken_ptr_char_ptr_int *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  
  if (param_1 != 0) {
    if (this[0x98] == (CLexLexer)0x0) {
      if (*(long *)(this + 8) != 0) {
        uVar5 = 0;
        do {
          while (lVar3 = CLexNfaNodeFactory::NodeForId((CLexNfaNodeFactory *)(this + 8),uVar5),
                param_1 == *(ulong *)(lVar3 + 8)) {
            uVar1 = uVar5 + 1;
            lVar3 = CLexNfaNodeFactory::NodeForId((CLexNfaNodeFactory *)(this + 8),uVar5);
            *(_func_bool_ILexLexer_ptr_SLexToken_ptr_char_ptr_int **)(lVar3 + 0x28) = param_2;
            uVar5 = uVar1;
            if (*(ulong *)(this + 8) <= uVar1) {
              return;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ulong *)(this + 8));
      }
    }
    else if (*(long *)(this + 0x58) != 0) {
      puVar4 = *(ulong **)(this + 0x78);
      puVar2 = puVar4 + *(long *)(this + 0x58) * 4;
      do {
        if (*puVar4 == param_1) {
          puVar4[2] = (ulong)param_2;
        }
        puVar4 = puVar4 + 4;
      } while (puVar4 != puVar2);
    }
  }
  return;
}


/* FEAST::CLexLexer::LexTokenIntercept(unsigned long, bool (*)(FEAST::ILexLexer*, FEAST::SLexToken*,
   char*, int)) */

undefined8 __thiscall
FEAST::CLexLexer::LexTokenIntercept
          (CLexLexer *this,ulong param_1,
          _func_bool_ILexLexer_ptr_SLexToken_ptr_char_ptr_int *param_2)

{
  SetIntercept(this,param_1,param_2);
  return 1;
}


/* FEAST::CLexLexer::ExprCreate(unsigned char) */

CLexNfaExpr * __thiscall FEAST::CLexLexer::ExprCreate(CLexLexer *this,uchar param_1)

{
  CLexNfaExpr *this_00;
  CLexNfaNode *this_01;
  CLexNfaNode *this_02;
  
  if ((this[0x99] == (CLexLexer)0x0) && ((byte)(param_1 + 0xbf) < 0x1a)) {
    param_1 = param_1 + ' ';
  }
  CLexBitSet::operator+=((CLexBitSet *)(this + 0xa0),(ulong)param_1);
  this_00 = (CLexNfaExpr *)CLexNfaExprFactory::AllocExpr((CLexNfaExprFactory *)(this + 0x20));
  CLexNfaExpr::CLexNfaExpr(this_00);
  this_01 = (CLexNfaNode *)CLexNfaNodeFactory::AllocNode((CLexNfaNodeFactory *)(this + 8));
  CLexNfaNode::CLexNfaNode(this_01);
  this_02 = (CLexNfaNode *)CLexNfaNodeFactory::AllocNode((CLexNfaNodeFactory *)(this + 8));
  CLexNfaNode::CLexNfaNode(this_02);
  this_01[0x10] = (CLexNfaNode)param_1;
  *(CLexNfaNode **)(this_01 + 0x18) = this_02;
  *(CLexNfaNode **)this_00 = this_01;
  *(CLexNfaNode **)(this_00 + 8) = this_02;
  return this_00;
}


/* FEAST::CLexLexer::ExprCreate(FEAST::CLexBitSet&) */

CLexNfaExpr * __thiscall FEAST::CLexLexer::ExprCreate(CLexLexer *this,CLexBitSet *param_1)

{
  CLexNfaExpr *this_00;
  CLexNfaNode *this_01;
  CLexNfaNode *this_02;
  
  FUN_0544519c(this + 0xa0,param_1,*(undefined8 *)(param_1 + 0x10));
  this_00 = (CLexNfaExpr *)CLexNfaExprFactory::AllocExpr((CLexNfaExprFactory *)(this + 0x20));
  CLexNfaExpr::CLexNfaExpr(this_00);
  this_01 = (CLexNfaNode *)CLexNfaNodeFactory::AllocNode((CLexNfaNodeFactory *)(this + 8));
  CLexNfaNode::CLexNfaNode(this_01);
  this_02 = (CLexNfaNode *)CLexNfaNodeFactory::AllocNode((CLexNfaNodeFactory *)(this + 8));
  CLexNfaNode::CLexNfaNode(this_02);
  this_01[0x10] = (CLexNfaNode)0x0;
  *(ulong *)this_01 = *(ulong *)this_01 | 4;
  FUN_05445168(this_01 + 0x30,*(undefined8 *)param_1,*(undefined8 *)(param_1 + 0x10));
  *(CLexNfaNode **)(this_01 + 0x18) = this_02;
  *(CLexNfaNode **)(this_00 + 8) = this_02;
  *(CLexNfaNode **)this_00 = this_01;
  return this_00;
}


/* FEAST::CLexLexer::ExprOr(FEAST::CLexNfaExpr*, FEAST::CLexNfaExpr*) */

void __thiscall FEAST::CLexLexer::ExprOr(CLexLexer *this,CLexNfaExpr *param_1,CLexNfaExpr *param_2)

{
  CLexNfaNode *this_00;
  CLexNfaNode *this_01;
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  this_00 = (CLexNfaNode *)CLexNfaNodeFactory::AllocNode((CLexNfaNodeFactory *)(this + 8));
  CLexNfaNode::CLexNfaNode(this_00);
  this_01 = (CLexNfaNode *)CLexNfaNodeFactory::AllocNode((CLexNfaNodeFactory *)(this + 8));
  CLexNfaNode::CLexNfaNode(this_01);
  this_00[0x10] = (CLexNfaNode)0x0;
  lVar2 = *(long *)(param_1 + 8);
  uVar3 = *(undefined8 *)param_2;
  *(undefined8 *)(this_00 + 0x18) = *(undefined8 *)param_1;
  *(ulong *)this_00 = *(ulong *)this_00 | 1;
  *(undefined8 *)(this_00 + 0x20) = uVar3;
  *(undefined1 *)(lVar2 + 0x10) = 0;
  lVar2 = *(long *)(param_2 + 8);
  **(ulong **)(param_1 + 8) = **(ulong **)(param_1 + 8) | 1;
  *(undefined1 *)(lVar2 + 0x10) = 0;
  puVar1 = *(ulong **)(param_2 + 8);
  lVar2 = *(long *)(param_1 + 8);
  *puVar1 = *puVar1 | 1;
  *(CLexNfaNode **)(lVar2 + 0x18) = this_01;
  puVar1[3] = (ulong)this_01;
  puVar1[4] = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(CLexNfaNode **)param_1 = this_00;
  *(CLexNfaNode **)(param_1 + 8) = this_01;
  return;
}


/* FEAST::CLexLexer::ExprOneOrMore(FEAST::CLexNfaExpr*) */

void __thiscall FEAST::CLexLexer::ExprOneOrMore(CLexLexer *this,CLexNfaExpr *param_1)

{
  CLexNfaNode *this_00;
  CLexNfaNode *this_01;
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  
  this_00 = (CLexNfaNode *)CLexNfaNodeFactory::AllocNode((CLexNfaNodeFactory *)(this + 8));
  CLexNfaNode::CLexNfaNode(this_00);
  this_01 = (CLexNfaNode *)CLexNfaNodeFactory::AllocNode((CLexNfaNodeFactory *)(this + 8));
  CLexNfaNode::CLexNfaNode(this_01);
  this_00[0x10] = (CLexNfaNode)0x0;
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(this_00 + 0x18) = *(undefined8 *)param_1;
  *(ulong *)this_00 = *(ulong *)this_00 | 1;
  *(undefined1 *)(lVar1 + 0x10) = 0;
  puVar3 = *(ulong **)(param_1 + 8);
  uVar2 = *(ulong *)param_1;
  puVar3[3] = (ulong)this_01;
  puVar3[4] = uVar2;
  *puVar3 = *puVar3 | 1;
  *(CLexNfaNode **)param_1 = this_00;
  *(CLexNfaNode **)(param_1 + 8) = this_01;
  return;
}


/* FEAST::CLexLexer::ExprZeroOrMore(FEAST::CLexNfaExpr*) */

void __thiscall FEAST::CLexLexer::ExprZeroOrMore(CLexLexer *this,CLexNfaExpr *param_1)

{
  CLexNfaNode *this_00;
  CLexNfaNode *this_01;
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  
  this_00 = (CLexNfaNode *)CLexNfaNodeFactory::AllocNode((CLexNfaNodeFactory *)(this + 8));
  CLexNfaNode::CLexNfaNode(this_00);
  this_01 = (CLexNfaNode *)CLexNfaNodeFactory::AllocNode((CLexNfaNodeFactory *)(this + 8));
  CLexNfaNode::CLexNfaNode(this_01);
  this_00[0x10] = (CLexNfaNode)0x0;
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(this_00 + 0x18) = *(undefined8 *)param_1;
  *(ulong *)this_00 = *(ulong *)this_00 | 1;
  *(CLexNfaNode **)(this_00 + 0x20) = this_01;
  *(undefined1 *)(lVar1 + 0x10) = 0;
  puVar2 = *(ulong **)(param_1 + 8);
  uVar3 = *(ulong *)param_1;
  puVar2[3] = (ulong)this_01;
  puVar2[4] = uVar3;
  *puVar2 = *puVar2 | 1;
  *(CLexNfaNode **)param_1 = this_00;
  *(CLexNfaNode **)(param_1 + 8) = this_01;
  return;
}


/* FEAST::CLexLexer::ExprZeroOrOne(FEAST::CLexNfaExpr*) */

void __thiscall FEAST::CLexLexer::ExprZeroOrOne(CLexLexer *this,CLexNfaExpr *param_1)

{
  CLexNfaNode *this_00;
  CLexNfaNode *this_01;
  long lVar1;
  ulong *puVar2;
  
  this_00 = (CLexNfaNode *)CLexNfaNodeFactory::AllocNode((CLexNfaNodeFactory *)(this + 8));
  CLexNfaNode::CLexNfaNode(this_00);
  this_01 = (CLexNfaNode *)CLexNfaNodeFactory::AllocNode((CLexNfaNodeFactory *)(this + 8));
  CLexNfaNode::CLexNfaNode(this_01);
  this_00[0x10] = (CLexNfaNode)0x0;
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(this_00 + 0x18) = *(undefined8 *)param_1;
  *(ulong *)this_00 = *(ulong *)this_00 | 1;
  *(CLexNfaNode **)(this_00 + 0x20) = this_01;
  *(undefined1 *)(lVar1 + 0x10) = 0;
  puVar2 = *(ulong **)(param_1 + 8);
  puVar2[3] = (ulong)this_01;
  puVar2[4] = 0;
  *puVar2 = *puVar2 | 1;
  *(CLexNfaNode **)param_1 = this_00;
  *(CLexNfaNode **)(param_1 + 8) = this_01;
  return;
}


/* FEAST::CLexLexer::RegisterExpr(FEAST::CLexNfaExpr*, unsigned long) */

void __thiscall FEAST::CLexLexer::RegisterExpr(CLexLexer *this,CLexNfaExpr *param_1,ulong param_2)

{
  CLexNfaNode *this_00;
  ulong *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = *(ulong **)(param_1 + 8);
  puVar1[5] = 0;
  *puVar1 = *puVar1 | 2;
  *(CLexLexer *)((long)puVar1 + 0x11) = this[0x48];
  lVar2 = *(long *)(this + 0x40);
  lVar3 = *(long *)(lVar2 + 0x18);
  *(ulong *)(*(long *)(param_1 + 8) + 8) = param_2;
  if (lVar3 != 0) {
    this_00 = (CLexNfaNode *)CLexNfaNodeFactory::AllocNode((CLexNfaNodeFactory *)(this + 8));
    CLexNfaNode::CLexNfaNode(this_00);
    this_00[0x10] = (CLexNfaNode)0x0;
    lVar2 = *(long *)(this + 0x40);
    *(undefined8 *)(this_00 + 0x18) = *(undefined8 *)param_1;
    *(undefined8 *)(this_00 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
    *(ulong *)this_00 = *(ulong *)this_00 | 1;
    *(CLexNfaNode **)(lVar2 + 0x20) = this_00;
    return;
  }
  *(undefined1 *)(lVar2 + 0x10) = 0;
  puVar1 = *(ulong **)(this + 0x40);
  puVar1[3] = *(ulong *)param_1;
  *puVar1 = *puVar1 | 1;
  return;
}


/* FEAST::CLexLexer::RegexLetter(char*&, bool*) */

char __thiscall FEAST::CLexLexer::RegexLetter(CLexLexer *this,char **param_1,bool *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = *param_1;
  *param_2 = false;
  cVar2 = *pcVar3;
  if (cVar2 == '\\') {
    *param_2 = true;
    *param_1 = pcVar3 + 2;
    cVar2 = pcVar3[1];
    if (cVar2 == '\0') {
      LexSetLastError(this,"Regex Syntax Error: Literal \'\\\' without character");
      cVar1 = '\0';
    }
    else {
      if (cVar2 != 'n') {
        if (cVar2 == 't') {
          cVar2 = '\t';
        }
        return cVar2;
      }
      cVar1 = '\n';
    }
  }
  else {
    cVar1 = '\0';
    if (cVar2 != '\0') {
      *param_1 = pcVar3 + 1;
      cVar1 = cVar2;
    }
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FEAST::CLexLexer::RegexGroup(char*&, FEAST::CLexBitSet&) */

void __thiscall FEAST::CLexLexer::RegexGroup(CLexLexer *this,char **param_1,CLexBitSet *param_2)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  ulong uVar5;
  undefined1 uVar6;
  bool local_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = RegexLetter(this,param_1,&local_9);
  if (bVar2 == 0) {
LAB_05446230:
    uVar6 = 0;
  }
  else {
    if (local_9 == false) {
      if (bVar2 == 0x2e) {
        uVar5 = 1;
        do {
          uVar1 = uVar5 + 1;
          CLexBitSet::operator+=(param_2,uVar5);
          uVar5 = uVar1;
        } while (uVar1 != 0xfe);
        uVar6 = 1;
        CLexBitSet::operator-=(param_2,10);
        goto LAB_054461bc;
      }
      pcVar4 = strchr("[]()*?+^|",(uint)bVar2);
      if (pcVar4 != (char *)0x0) {
        *param_1 = *param_1 + -1;
        if (bVar2 != 0x5d) {
          LexSetLastError(this,"Regex Syntax Error: Illegal character in group");
          uVar6 = 0;
          goto LAB_054461bc;
        }
        goto LAB_05446230;
      }
    }
    if (**param_1 == '-') {
      *param_1 = *param_1 + 1;
      bVar3 = RegexLetter(this,param_1,&local_9);
      if (bVar3 == 0) {
        uVar6 = 0;
        LexSetLastError(this,
                        "Regex Syntax Error: \'-\' found in group without valid ending character");
      }
      else if ((local_9 == false) &&
              (pcVar4 = strchr(".[]()*?+^|",(uint)bVar2), pcVar4 != (char *)0x0)) {
        *param_1 = *param_1 + -1;
        LexSetLastError(this,"Regex Syntax Error: Non-literal symbol is not a valid group character"
                       );
        uVar6 = 0;
      }
      else {
        for (; bVar2 <= bVar3; bVar2 = bVar2 + 1) {
          CLexBitSet::operator+=(param_2,(ulong)bVar2);
        }
        uVar6 = 1;
      }
    }
    else {
      uVar6 = 1;
      CLexBitSet::operator+=(param_2,(ulong)bVar2);
    }
  }
LAB_054461bc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FEAST::CLexLexer::RegexRange(char*&) */

void __thiscall FEAST::CLexLexer::RegexRange(CLexLexer *this,char **param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  CLexBitSet aCStack_20 [16];
  undefined1 auStack_10 [8];
  long local_8;
  
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  CLexBitSet::CLexBitSet(aCStack_20,0x100);
  if (**param_1 == '^') {
    bVar1 = true;
    *param_1 = *param_1 + 1;
  }
  do {
    cVar2 = RegexGroup(this,param_1,aCStack_20);
  } while (cVar2 != '\0');
  if (bVar1) {
    FUN_05445228(aCStack_20,auStack_10);
  }
  uVar3 = ExprCreate(this,aCStack_20);
  CLexBitSet::~CLexBitSet(aCStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* FEAST::CLexLexer::RegexExpr(char*&) */

CLexNfaExpr * __thiscall FEAST::CLexLexer::RegexExpr(CLexLexer *this,char **param_1)

{
  char cVar1;
  CLexNfaExpr *pCVar2;
  CLexNfaExpr *pCVar3;
  char *pcVar4;
  
  pCVar2 = (CLexNfaExpr *)RegexTerm(this,param_1);
  if (pCVar2 != (CLexNfaExpr *)0x0) {
    pcVar4 = *param_1;
    cVar1 = *pcVar4;
    while (cVar1 == '|') {
      *param_1 = pcVar4 + 1;
      pCVar3 = (CLexNfaExpr *)RegexTerm(this,param_1);
      if (pCVar3 == (CLexNfaExpr *)0x0) {
        LexSetLastError(this,"Regex Syntax Error: \'|\' without trailing term");
        return (CLexNfaExpr *)0x0;
      }
      ExprOr(this,pCVar2,pCVar3);
      pcVar4 = *param_1;
      cVar1 = *pcVar4;
    }
  }
  return pCVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FEAST::CLexLexer::RegexFactorPrime(char*&) */

void __thiscall FEAST::CLexLexer::RegexFactorPrime(CLexLexer *this,char **param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  bool local_21;
  CLexBitSet aCStack_20 [24];
  long local_8;
  
  pcVar4 = *param_1;
  local_8 = ___stack_chk_guard;
  if (*pcVar4 == '(') {
    *param_1 = pcVar4 + 1;
    uVar3 = RegexExpr(this,param_1);
    pcVar4 = *param_1;
    if (*pcVar4 != ')') {
      LexSetLastError(this,"Regex Syntax Error: Expecting \')\'");
      uVar3 = 0;
      goto LAB_05446504;
    }
  }
  else {
    if (*pcVar4 != '[') {
      bVar2 = RegexLetter(this,param_1,&local_21);
      if (bVar2 == 0) {
        uVar3 = 0;
        goto LAB_05446504;
      }
      if (local_21 == false) {
        if (bVar2 == 0x2e) {
          CLexBitSet::CLexBitSet(aCStack_20,0x100);
          uVar5 = 1;
          do {
            uVar1 = uVar5 + 1;
            CLexBitSet::operator+=(aCStack_20,uVar5);
            uVar5 = uVar1;
          } while (uVar1 != 0xff);
          CLexBitSet::operator-=(aCStack_20,10);
          uVar3 = ExprCreate(this,aCStack_20);
          CLexBitSet::~CLexBitSet(aCStack_20);
          goto LAB_05446504;
        }
        pcVar4 = strchr("[]()*?+^|",(uint)bVar2);
        if (pcVar4 != (char *)0x0) {
          uVar3 = 0;
          *param_1 = *param_1 + -1;
          goto LAB_05446504;
        }
      }
      uVar3 = ExprCreate(this,bVar2);
      goto LAB_05446504;
    }
    *param_1 = pcVar4 + 1;
    uVar3 = RegexRange(this,param_1);
    pcVar4 = *param_1;
    if (*pcVar4 != ']') {
      LexSetLastError(this,"Regex Syntax Error: Expecting \']\'");
      uVar3 = 0;
      goto LAB_05446504;
    }
  }
  *param_1 = pcVar4 + 1;
LAB_05446504:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* FEAST::CLexLexer::RegexFactor(char*&) */

CLexNfaExpr * __thiscall FEAST::CLexLexer::RegexFactor(CLexLexer *this,char **param_1)

{
  char cVar1;
  CLexNfaExpr *pCVar2;
  char *pcVar3;
  
  pCVar2 = (CLexNfaExpr *)RegexFactorPrime(this,param_1);
  pcVar3 = *param_1;
  cVar1 = *pcVar3;
  if (cVar1 == '*') {
    *param_1 = pcVar3 + 1;
    if (pCVar2 != (CLexNfaExpr *)0x0) {
      ExprZeroOrMore(this,pCVar2);
      return pCVar2;
    }
    LexSetLastError(this,"Regex Syntax Error: Modifier \'*\' without expression");
  }
  else if (cVar1 == '+') {
    *param_1 = pcVar3 + 1;
    if (pCVar2 != (CLexNfaExpr *)0x0) {
      ExprOneOrMore(this,pCVar2);
      return pCVar2;
    }
    LexSetLastError(this,"Regex Syntax Error: Modifier \'+\' without expression");
  }
  else if (cVar1 == '?') {
    *param_1 = pcVar3 + 1;
    if (pCVar2 != (CLexNfaExpr *)0x0) {
      ExprZeroOrOne(this,pCVar2);
      return pCVar2;
    }
    LexSetLastError(this,"Regex Syntax Error: Modifier \'?\' without expression");
  }
  return pCVar2;
}


/* FEAST::CLexLexer::RegexTerm(char*&) */

long __thiscall FEAST::CLexLexer::RegexTerm(CLexLexer *this,char **param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = RegexFactor(this,param_1);
  if (lVar1 != 0) {
    while (lVar2 = RegexFactor(this,param_1), lVar2 != 0) {
      FUN_054452d8(lVar1 + 8,lVar2);
    }
  }
  return lVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FEAST::CLexLexer::RegisterToken(char*, unsigned long) */

void __thiscall FEAST::CLexLexer::RegisterToken(CLexLexer *this,char *param_1,ulong param_2)

{
  CLexNfaExpr *pCVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (char *)0x0) {
    LexSetLastError(this,"Regex Syntax Error: NULL regex");
    uVar3 = 0;
  }
  else {
    LexSetLastError(this,"");
    local_10 = param_1;
    pCVar1 = (CLexNfaExpr *)RegexExpr(this,&local_10);
    if (*(code **)(*(long *)this + 0x50) == LexGetLastError) {
      pcVar2 = (char *)LexGetLastError(this);
    }
    else {
      pcVar2 = (char *)(**(code **)(*(long *)this + 0x50))();
    }
    uVar3 = 0;
    if (*pcVar2 == '\0') {
      if (pCVar1 == (CLexNfaExpr *)0x0) {
        LexSetLastError(this,"Regex Syntax Error: Nothing to register");
      }
      else if (*local_10 == '\0') {
        uVar3 = 1;
        RegisterExpr(this,pCVar1,param_2);
      }
      else {
        LexSetLastError(this,"Regex Syntax Error: Regex parse incomplete");
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* FEAST::CLexLexer::LexRegisterToken(unsigned long, char const*) */

void __thiscall FEAST::CLexLexer::LexRegisterToken(CLexLexer *this,ulong param_1,char *param_2)

{
  RegisterToken(this,param_2,param_1);
  return;
}


/* FEAST::CLexLexer::ComputeEpsilonClosure(FEAST::CLexBitSet&) */

void __thiscall FEAST::CLexLexer::ComputeEpsilonClosure(CLexLexer *this,CLexBitSet *param_1)

{
  ulong uVar1;
  long lVar2;
  CLexNfaNodeFactory *this_00;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  
  uVar8 = *(ulong *)(param_1 + 8);
  if (uVar8 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    uVar7 = 0;
    do {
      while (iVar4 = FUN_05445264(*(undefined8 *)param_1,uVar7), iVar4 == 0) {
        uVar7 = uVar7 + 1;
        if (uVar8 <= uVar7) goto LAB_05446930;
      }
      uVar1 = uVar7 + 1;
      lVar2 = lVar6 + 1;
      uVar5 = CLexNfaNodeFactory::NodeForId((CLexNfaNodeFactory *)(this + 8),uVar7);
      uVar8 = *(ulong *)(param_1 + 8);
      (&ComputeEpsilonClosure(FEAST::CLexBitSet&)::nodeStack)[lVar6] = uVar5;
      lVar6 = lVar2;
      uVar7 = uVar1;
    } while (uVar1 < uVar8);
  }
LAB_05446930:
  this_00 = (CLexNfaNodeFactory *)(this + 8);
  do {
    if (lVar6 == 0) {
      return;
    }
    puVar9 = (ulong *)(&ComputeEpsilonClosure(FEAST::CLexBitSet&)::nodeStack)[lVar6 + -1];
    uVar8 = *puVar9;
    lVar3 = lVar6 + -1;
    lVar2 = lVar6;
    while (lVar6 = lVar3, (uVar8 & 1) == 0) {
      if (lVar6 == 0) {
        return;
      }
      puVar9 = (ulong *)(&ComputeEpsilonClosure(FEAST::CLexBitSet&)::nodeStack)[lVar6 + -1];
      lVar3 = lVar6 + -1;
      lVar2 = lVar6;
      uVar8 = *puVar9;
    }
    if ((CLexNfaNode *)puVar9[3] != (CLexNfaNode *)0x0) {
      uVar5 = CLexNfaNodeFactory::IdForNode(this_00,(CLexNfaNode *)puVar9[3]);
      iVar4 = FUN_05445264(*(undefined8 *)param_1,uVar5);
      if (iVar4 == 0) {
        uVar8 = CLexNfaNodeFactory::IdForNode(this_00,(CLexNfaNode *)puVar9[3]);
        CLexBitSet::operator+=(param_1,uVar8);
        (&ComputeEpsilonClosure(FEAST::CLexBitSet&)::nodeStack)[lVar6] = puVar9[3];
        lVar6 = lVar2;
      }
    }
    if ((CLexNfaNode *)puVar9[4] != (CLexNfaNode *)0x0) {
      uVar5 = CLexNfaNodeFactory::IdForNode(this_00,(CLexNfaNode *)puVar9[4]);
      iVar4 = FUN_05445264(*(undefined8 *)param_1,uVar5);
      if (iVar4 == 0) {
        uVar8 = CLexNfaNodeFactory::IdForNode(this_00,(CLexNfaNode *)puVar9[4]);
        CLexBitSet::operator+=(param_1,uVar8);
        (&ComputeEpsilonClosure(FEAST::CLexBitSet&)::nodeStack)[lVar6] = puVar9[4];
        lVar6 = lVar6 + 1;
      }
    }
  } while( true );
}


/* FEAST::CLexLexer::ComputeMove(FEAST::CLexBitSet&, unsigned char) */

void __thiscall FEAST::CLexLexer::ComputeMove(CLexLexer *this,CLexBitSet *param_1,uchar param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  CLexNfaNode *pCVar5;
  
  iVar1 = FUN_05445264(*(undefined8 *)(this + 0xa0),param_2);
  if (iVar1 == 0) {
    FUN_05445258(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  uVar3 = 0;
  FUN_05445258(*(undefined8 *)(this + 0x4b8),*(undefined8 *)(this + 0x4c8));
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 != 0) {
    do {
      while (iVar1 = FUN_05445264(*(undefined8 *)param_1,uVar3), iVar1 == 0) {
LAB_05446a94:
        uVar3 = uVar3 + 1;
        if (uVar4 <= uVar3) goto LAB_05446b10;
      }
      puVar2 = (undefined8 *)CLexNfaNodeFactory::NodeForId((CLexNfaNodeFactory *)(this + 8),uVar3);
      pCVar5 = (CLexNfaNode *)puVar2[3];
      if ((pCVar5 == (CLexNfaNode *)0x0) ||
         ((*(uchar *)(puVar2 + 2) != param_2 &&
          ((((uint)*puVar2 >> 2 & 1) == 0 || (iVar1 = FUN_05445264(puVar2[6],param_2), iVar1 == 0)))
          ))) {
        uVar4 = *(ulong *)(param_1 + 8);
        goto LAB_05446a94;
      }
      uVar3 = uVar3 + 1;
      uVar4 = CLexNfaNodeFactory::IdForNode((CLexNfaNodeFactory *)(this + 8),pCVar5);
      CLexBitSet::operator+=((CLexBitSet *)(this + 0x4b8),uVar4);
      uVar4 = *(ulong *)(param_1 + 8);
    } while (uVar3 < uVar4);
  }
LAB_05446b10:
  FUN_05445168(param_1,*(undefined8 *)(this + 0x4b8),*(undefined8 *)(this + 0x4c8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FEAST::CLexLexer::MinimizeDFA() */

void __thiscall FEAST::CLexLexer::MinimizeDFA(CLexLexer *this)

{
  CLexDfaPartitionSet *pCVar1;
  CLexDfaPartitionSet *pCVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  CLexDfaPartitionSet *this_00;
  long lVar7;
  long lVar8;
  CLexDfaPartition *pCVar9;
  long lVar10;
  CLexDfaAcceptItem *pCVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  CLexDfaAcceptItem *this_01;
  undefined8 uVar15;
  long lVar16;
  bool bVar17;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x808018);
  CLexDfaPartitionSet::CLexDfaPartitionSet(this_00);
  lVar7 = LIB_ClientMalloc(*(long *)(this + 0x58) << 3);
  *(long *)(this + 0x70) = lVar7;
  lVar12 = 0;
  if (0 < *(long *)(this + 0x58)) {
    do {
      *(undefined8 *)(lVar7 + lVar12 * 8) = 0xffffffffffffffff;
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(long *)(this + 0x58));
  }
  CLexDfaPartitionSet::Init(this_00);
  CLexDfaPartitionSet::SetDFA(this_00,(CLexDfaTable *)(this + 0x50));
  lVar12 = 0;
  if (0 < *(long *)(this + 0x58)) {
    do {
      lVar7 = lVar12 + 1;
      CLexDfaPartitionSet::MoveToCurrent(this_00,lVar12);
      lVar12 = lVar7;
    } while (lVar7 < *(long *)(this + 0x58));
  }
  pCVar2 = this_00 + 0x808000;
  pCVar1 = this_00 + 0x808008;
  FUN_054452b4(pCVar1);
  lVar12 = *(long *)(this + 0x58);
  if (lVar12 < 1) {
    uVar15 = *(undefined8 *)pCVar2;
  }
  else {
    uVar15 = *(undefined8 *)pCVar2;
    lVar7 = 0;
    lVar8 = FUN_054452c0(uVar15);
    do {
      if (((uint)*(undefined8 *)(*(long *)(this + 0x78) + lVar7 * 0x20 + 8) >> 1 & 1) == 0) {
        lVar8 = FUN_054452c0(uVar15);
      }
      else {
        for (lVar12 = 1; lVar12 < lVar8; lVar12 = lVar12 + 1) {
          pCVar9 = (CLexDfaPartition *)CLexDfaPartitionSet::operator[](this_00,(int)lVar12);
          lVar8 = CLexDfaPartition::Next(pCVar9,0,(long *)0x0);
          if (((lVar8 != -1) && (lVar7 != lVar8)) &&
             (iVar6 = CLexDfaAcceptItem::operator==
                                ((CLexDfaAcceptItem *)(*(long *)(this + 0x78) + lVar7 * 0x20),
                                 (CLexDfaAcceptItem *)(*(long *)(this + 0x78) + lVar8 * 0x20)),
             iVar6 != 0)) {
            CLexDfaPartitionSet::MoveTo(this_00,lVar7,lVar12);
            uVar15 = *(undefined8 *)pCVar2;
            lVar8 = FUN_054452c0(uVar15);
            if (lVar12 < lVar8) goto LAB_05446ce0;
            break;
          }
          lVar8 = FUN_054452c0(*(undefined8 *)pCVar2);
        }
        CLexDfaPartitionSet::MoveToCurrent(this_00,lVar7);
        FUN_054452b4(pCVar1);
        uVar15 = *(undefined8 *)pCVar2;
        lVar8 = FUN_054452c0(uVar15);
LAB_05446ce0:
        lVar12 = *(long *)(this + 0x58);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar12);
  }
  lVar12 = FUN_054452c0(uVar15);
  do {
    lVar7 = 0;
    bVar17 = false;
    if (0 < lVar12) {
      do {
        local_10 = 0;
        pCVar9 = (CLexDfaPartition *)CLexDfaPartitionSet::operator[](this_00,(int)lVar7);
        lVar8 = CLexDfaPartition::Next(pCVar9,0,(long *)0x0);
        lVar12 = lVar8;
        while (lVar12 != -1) {
          lVar14 = *(long *)(this + 0x50);
          bVar5 = bVar17;
          if (0 < lVar14) {
            lVar13 = 0;
            do {
              while( true ) {
                uVar3 = *(ushort *)(*(long *)(this + 0x68) + (lVar13 + lVar14 * lVar8) * 2);
                uVar4 = *(ushort *)(*(long *)(this + 0x68) + (lVar13 + lVar14 * lVar12) * 2);
                if ((((uVar4 != 0xffff) || (uVar3 != 0xffff)) &&
                    ((lVar16 = *(long *)(this + 0x70), (uVar3 == 0xffff) != (uVar4 == 0xffff) ||
                     (*(long *)(lVar16 + (ulong)uVar3 * 8) != *(long *)(lVar16 + (ulong)uVar4 * 8)))
                    )) && (lVar10 = FUN_054452c8(*(undefined8 *)pCVar2,this_00[0x808008]),
                          *(long *)(lVar16 + lVar12 * 8) != lVar10)) break;
                lVar13 = lVar13 + 1;
                bVar5 = bVar17;
                if (lVar14 <= lVar13) goto LAB_05446de8;
              }
              bVar17 = true;
              lVar13 = lVar13 + 1;
              CLexDfaPartitionSet::MoveToCurrent(this_00,lVar12);
              lVar14 = *(long *)(this + 0x50);
              bVar5 = true;
            } while (lVar13 < lVar14);
          }
LAB_05446de8:
          bVar17 = bVar5;
          lVar12 = CLexDfaPartition::Next(pCVar9,local_10,&local_10);
        }
        lVar7 = lVar7 + 1;
        FUN_054452b4(pCVar1);
        lVar12 = FUN_054452c0(*(undefined8 *)pCVar2);
      } while (lVar7 < lVar12);
    }
    if (!bVar17) {
      lVar7 = LIB_ClientMalloc(*(long *)(this + 0x50) * 2 * lVar12);
      lVar12 = FUN_054452c0(*(undefined8 *)pCVar2);
      pCVar11 = (CLexDfaAcceptItem *)LIB_ClientMalloc(lVar12 << 5);
      lVar8 = FUN_054452c0(*(undefined8 *)pCVar2);
      lVar12 = 0;
      this_01 = pCVar11;
      if (0 < lVar8) {
        do {
          pCVar9 = (CLexDfaPartition *)CLexDfaPartitionSet::operator[](this_00,(int)lVar12);
          lVar8 = CLexDfaPartition::Next(pCVar9,0,(long *)0x0);
          if (lVar8 != -1) {
            lVar14 = *(long *)(this + 0x50);
            lVar13 = *(long *)(this + 0x68);
            lVar8 = CLexDfaPartition::Next(pCVar9,0,(long *)0x0);
            memcpy((void *)(lVar7 + lVar14 * 2 * lVar12),
                   (void *)(lVar13 + lVar8 * *(long *)(this + 0x50) * 2),*(long *)(this + 0x50) * 2)
            ;
            lVar8 = *(long *)(this + 0x50);
            if (0 < lVar8) {
              lVar14 = 0;
              lVar13 = lVar7 + lVar12 * lVar8 * 2;
              do {
                uVar3 = *(ushort *)(lVar13 + lVar14 * 2);
                if (uVar3 != 0xffff) {
                  *(short *)(lVar13 + lVar14 * 2) =
                       (short)*(undefined8 *)(*(long *)(this + 0x70) + (ulong)uVar3 * 8);
                }
                lVar14 = lVar14 + 1;
              } while (lVar8 != lVar14);
            }
            lVar14 = *(long *)(this + 0x78);
            lVar8 = CLexDfaPartition::Next(pCVar9,0,(long *)0x0);
            CLexDfaAcceptItem::operator=(this_01,(CLexDfaAcceptItem *)(lVar14 + lVar8 * 0x20));
          }
          lVar12 = lVar12 + 1;
          this_01 = this_01 + 0x20;
          lVar8 = FUN_054452c0(*(undefined8 *)pCVar2);
        } while (lVar12 < lVar8);
      }
      *(undefined8 *)(this + 0x60) = **(undefined8 **)(this + 0x70);
      uVar15 = FUN_054452c0(*(undefined8 *)pCVar2);
      *(undefined8 *)(this + 0x58) = uVar15;
      LIB_ClientFree(*(void **)(this + 0x68));
      *(long *)(this + 0x68) = lVar7;
      LIB_ClientFree(*(void **)(this + 0x78));
      *(CLexDfaAcceptItem **)(this + 0x78) = pCVar11;
      LIB_ClientFree(*(void **)(this + 0x70));
      *(undefined8 *)(this + 0x70) = 0;
      AK::FreeHook(this_00);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FEAST::CLexLexer::ComputeDFA() */

void __thiscall FEAST::CLexLexer::ComputeDFA(CLexLexer *this)

{
  CLexNfaNodeFactory *this_00;
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  char *pcVar12;
  long lVar14;
  long lVar15;
  long lVar16;
  CLexBitSet *pCVar17;
  CLexBitSet *pCVar18;
  undefined2 uVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 local_6428 [2];
  undefined8 local_6418;
  char acStack_6410 [8];
  undefined8 auStack_6408 [125];
  CLexBitSet aCStack_6020 [16];
  char acStack_6010 [8];
  undefined8 local_6008;
  long local_6000 [3068];
  CLexBitSet aCStack_20 [24];
  long local_8;
  char *pcVar13;
  
  local_8 = ___stack_chk_guard;
  CLexBitSet::defaultSize = *(undefined8 *)(this + 8);
  CLexBitSet::CLexBitSet((CLexBitSet *)local_6428);
  pCVar17 = (CLexBitSet *)&local_6008;
  do {
    pCVar18 = pCVar17 + 0x18;
    CLexBitSet::CLexBitSet(pCVar17);
    pCVar17 = pCVar18;
  } while (pCVar18 != (CLexBitSet *)&local_8);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0x100;
  CLexBitSet::defaultSize = 0;
  uVar7 = LIB_ClientMalloc(0x80000);
  *(undefined8 *)(this + 0x68) = uVar7;
  uVar7 = LIB_ClientMalloc(0x8000);
  *(undefined8 *)(this + 0x78) = uVar7;
  pcVar12 = acStack_6410;
  do {
    pcVar13 = pcVar12 + 0x10;
    pcVar12[8] = '\0';
    pcVar12[9] = '\0';
    pcVar12[10] = '\0';
    pcVar12[0xb] = '\0';
    pcVar12[0xc] = '\0';
    pcVar12[0xd] = '\0';
    pcVar12[0xe] = '\0';
    pcVar12[0xf] = '\0';
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12[4] = '\0';
    pcVar12[5] = '\0';
    pcVar12[6] = '\0';
    pcVar12[7] = '\0';
    pcVar12 = pcVar13;
  } while (pcVar13 != acStack_6010);
  this_00 = (CLexNfaNodeFactory *)(this + 8);
  FUN_05445258(local_6008,local_6000[1]);
  uVar8 = CLexNfaNodeFactory::IdForNode(this_00,*(CLexNfaNode **)(this + 0x40));
  CLexBitSet::operator+=((CLexBitSet *)&local_6008,uVar8);
  ComputeEpsilonClosure(this,(CLexBitSet *)&local_6008);
  if ((int)local_6000[0] < 1) {
    *(undefined8 *)(*(long *)(this + 0x78) + 8) = 0;
  }
  else {
    lVar15 = 0;
    uVar8 = 0;
    do {
      while (((iVar6 = FUN_05445264(local_6008,uVar8), iVar6 == 0 ||
              (puVar9 = (undefined8 *)CLexNfaNodeFactory::NodeForId(this_00,uVar8),
              ((uint)*puVar9 >> 1 & 1) == 0)) ||
             ((lVar15 != 0 &&
              (bVar2 = *(byte *)(lVar15 + 0x11),
              lVar10 = CLexNfaNodeFactory::NodeForId(this_00,uVar8),
              *(byte *)(lVar10 + 0x11) < bVar2))))) {
        uVar8 = uVar8 + 1;
        if ((long)(int)local_6000[0] <= (long)uVar8) goto LAB_054471e4;
      }
      uVar1 = uVar8 + 1;
      lVar15 = CLexNfaNodeFactory::NodeForId(this_00,uVar8);
      uVar8 = uVar1;
    } while ((long)uVar1 < (long)(int)local_6000[0]);
LAB_054471e4:
    lVar10 = *(long *)(this + 0x78);
    *(undefined8 *)(lVar10 + 8) = 0;
    if (lVar15 != 0) {
      *(undefined1 *)(lVar10 + 0x18) = *(undefined1 *)(lVar15 + 0x11);
      puVar9 = *(undefined8 **)(this + 0x78);
      uVar7 = *(undefined8 *)(lVar15 + 8);
      puVar9[2] = *(undefined8 *)(lVar15 + 0x28);
      *puVar9 = uVar7;
      puVar9[1] = 2;
    }
  }
  lVar15 = 1;
  do {
    bVar3 = true;
    lVar10 = 0;
    pCVar17 = (CLexBitSet *)&local_6008;
LAB_05447248:
    do {
      if (acStack_6410[lVar10] == '\0') {
        lVar20 = *(long *)(this + 0x50);
        acStack_6410[lVar10] = '\x01';
        if (lVar20 < 1) {
          lVar10 = lVar10 + 1;
          pCVar17 = pCVar17 + 0x18;
          bVar3 = false;
          if (lVar15 <= lVar10) break;
          goto LAB_05447248;
        }
        lVar16 = 0;
        do {
          while (iVar6 = FUN_05445264(*(undefined8 *)(this + 0xa0),lVar16), iVar6 == 0) {
            *(undefined2 *)(*(long *)(this + 0x68) + (lVar16 + lVar10 * lVar20) * 2) = 0xffff;
LAB_05447284:
            lVar16 = lVar16 + 1;
            if (lVar20 <= lVar16) goto LAB_05447348;
          }
          FUN_05445168((CLexBitSet *)local_6428,*(undefined8 *)pCVar17,
                       *(undefined8 *)(pCVar17 + 0x10));
          ComputeMove(this,(CLexBitSet *)local_6428,(uchar)lVar16);
          ComputeEpsilonClosure(this,(CLexBitSet *)local_6428);
          uVar4 = local_6418;
          uVar7 = local_6428[0];
          iVar6 = FUN_0544527c(local_6428[0],local_6418);
          if (iVar6 != 0) {
            lVar20 = *(long *)(this + 0x50);
            *(undefined2 *)(*(long *)(this + 0x68) + (lVar16 + lVar10 * lVar20) * 2) = 0xffff;
            goto LAB_05447284;
          }
          lVar20 = 0;
          pCVar18 = (CLexBitSet *)&local_6008;
          if (lVar15 < 1) {
            uVar19 = 0;
            uVar5 = 0;
            if (lVar15 == 0) goto LAB_05447410;
          }
          else {
            do {
              iVar6 = FUN_054451d8(uVar7,uVar4,*(undefined8 *)pCVar18,
                                   *(undefined8 *)(pCVar18 + 0x10));
              if (iVar6 != 0) {
                uVar19 = (undefined2)lVar20;
                goto LAB_05447328;
              }
              lVar20 = lVar20 + 1;
              pCVar18 = pCVar18 + 0x18;
            } while (lVar20 != lVar15);
            uVar5 = (short)lVar15;
LAB_05447410:
            uVar19 = uVar5;
            FUN_05445168((int *)((long)local_6000 + (lVar15 * 3 + -1) * 2 * 4),uVar7,uVar4);
            if (*(long *)((long)local_6000 + lVar15 * 6 * 4) < 1) {
              *(undefined8 *)(*(long *)(this + 0x78) + lVar15 * 0x20 + 8) = 0;
            }
            else {
              uVar8 = 0;
              puVar9 = (undefined8 *)0x0;
              do {
                puVar11 = (undefined8 *)CLexNfaNodeFactory::NodeForId(this_00,uVar8);
                puVar21 = puVar9;
                if ((((((uint)*puVar11 >> 1 & 1) != 0) &&
                     (iVar6 = FUN_05445264(*(undefined8 *)
                                            ((long)local_6000 + (lVar15 * 3 + -1) * 2 * 4),uVar8),
                     iVar6 != 0)) && (puVar21 = puVar11, puVar9 != (undefined8 *)0x0)) &&
                   (puVar21 = puVar9,
                   *(byte *)((long)puVar9 + 0x11) <= *(byte *)((long)puVar11 + 0x11))) {
                  puVar21 = puVar11;
                }
                uVar8 = uVar8 + 1;
                puVar9 = puVar21;
              } while ((long)uVar8 < *(long *)((long)local_6000 + lVar15 * 6 * 4));
              lVar20 = *(long *)(this + 0x78);
              lVar14 = lVar15 * 0x20;
              *(undefined8 *)(lVar20 + lVar14 + 8) = 0;
              if (puVar21 != (undefined8 *)0x0) {
                *(undefined1 *)(lVar20 + lVar14 + 0x18) = *(undefined1 *)((long)puVar21 + 0x11);
                lVar20 = *(long *)(this + 0x78) + lVar14;
                uVar7 = puVar21[5];
                *(undefined8 *)(*(long *)(this + 0x78) + lVar14) = puVar21[1];
                *(undefined8 *)(lVar20 + 0x10) = uVar7;
                *(undefined8 *)(lVar20 + 8) = 2;
              }
            }
            lVar15 = lVar15 + 1;
            if (0x3ff < lVar15) {
              LIB_Errorf("ComputeDFA: Too many DFA states");
            }
          }
LAB_05447328:
          lVar20 = *(long *)(this + 0x50);
          lVar14 = lVar16 + lVar10 * lVar20;
          lVar16 = lVar16 + 1;
          *(undefined2 *)(*(long *)(this + 0x68) + lVar14 * 2) = uVar19;
        } while (lVar16 < lVar20);
LAB_05447348:
        bVar3 = false;
      }
      lVar10 = lVar10 + 1;
      pCVar17 = pCVar17 + 0x18;
    } while (lVar10 < lVar15);
    if ((bVar3) || (lVar15 < 1)) {
      *(long *)(this + 0x58) = lVar15;
      pCVar17 = aCStack_20;
      do {
        pCVar18 = pCVar17 + -0x18;
        CLexBitSet::~CLexBitSet(pCVar17);
        pCVar17 = pCVar18;
      } while (pCVar18 != aCStack_6020);
      CLexBitSet::~CLexBitSet((CLexBitSet *)local_6428);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


/* FEAST::CLexLexer::FinalizeDFA() */

void __thiscall FEAST::CLexLexer::FinalizeDFA(CLexLexer *this)

{
  if (this[0x98] == (CLexLexer)0x0) {
    ComputeDFA(this);
    MinimizeDFA(this);
    this[0x98] = (CLexLexer)0x1;
  }
  return;
}


/* FEAST::CLexLexer::LexFinalize() */

undefined8 __thiscall FEAST::CLexLexer::LexFinalize(CLexLexer *this)

{
  FinalizeDFA(this);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FEAST::CLexLexer::GetTokenNFA(bool, FEAST::SLexToken*) */

void __thiscall FEAST::CLexLexer::GetTokenNFA(CLexLexer *this,bool param_1,SLexToken *param_2)

{
  CLexBitSet *this_00;
  CLexNfaNodeFactory *this_01;
  byte bVar1;
  uchar uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  uchar *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long local_130;
  long local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  char acStack_108 [256];
  long local_8;
  
  lVar10 = *(long *)(this + 0x38);
  uVar12 = *(undefined8 *)(this + 0x80);
  local_8 = ___stack_chk_guard;
  uVar6 = *(undefined8 *)(this + 0x88);
  if (lVar10 != 0) {
    this_00 = (CLexBitSet *)(this + 0x4d0);
    this_01 = (CLexNfaNodeFactory *)(this + 8);
    local_130 = 0;
LAB_05447608:
    if (local_130 == 0) {
      do {
        lVar16 = local_130;
        FUN_05445258(*(undefined8 *)(this + 0x4d0),*(undefined8 *)(this + 0x4e0));
        uVar7 = CLexNfaNodeFactory::IdForNode(this_01,*(CLexNfaNode **)(this + 0x40));
        CLexBitSet::operator+=(this_00,uVar7);
        ComputeEpsilonClosure(this,this_00);
        local_118 = *(undefined8 *)(this + 0x80);
        local_110 = *(undefined8 *)(this + 0x88);
        puVar11 = *(uchar **)(this + 0x38);
        uVar2 = *puVar11;
        lVar8 = 1;
        lVar13 = 0;
        lVar14 = lVar16;
        lVar15 = lVar16;
        while (lVar3 = lVar8, uVar2 != '\0') {
          if (uVar2 != '\r') {
            if ((byte)this[0x99] < ((byte)(uVar2 + 0xbf) < 0x1a)) {
              ComputeMove(this,this_00,uVar2 + ' ');
            }
            else {
              ComputeMove(this,this_00,uVar2);
            }
            ComputeEpsilonClosure(this,this_00);
            iVar5 = FUN_0544527c(*(undefined8 *)(this + 0x4d0),*(undefined8 *)(this + 0x4e0));
            if (iVar5 != 0) break;
            lVar8 = *(long *)(this + 0x88);
            puVar11 = *(uchar **)(this + 0x38);
            *(long *)(this + 0x88) = lVar8 + 1;
            if (puVar11[lVar13] == '\n') {
              *(undefined8 *)(this + 0x88) = 0;
              *(long *)(this + 0x80) = *(long *)(this + 0x80) + 1;
            }
            else if (puVar11[lVar13] == '\t') {
              *(long *)(this + 0x88) = *(long *)(this + 0x90) + -1 + lVar8 + 1;
            }
            if (*(long *)(this + 0x4d8) != 0) {
              uVar7 = 0;
              lVar13 = 0;
              do {
                puVar9 = (undefined8 *)CLexNfaNodeFactory::NodeForId(this_01,uVar7);
                if (((((uint)*puVar9 >> 1 & 1) != 0) &&
                    (iVar5 = FUN_05445264(*(undefined8 *)(this + 0x4d0),uVar7), iVar5 != 0)) &&
                   ((lVar13 == 0 ||
                    (bVar1 = *(byte *)(lVar13 + 0x11),
                    lVar8 = CLexNfaNodeFactory::NodeForId(this_01,uVar7),
                    bVar1 < *(byte *)(lVar8 + 0x11))))) {
                  lVar13 = CLexNfaNodeFactory::NodeForId(this_01,uVar7);
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < *(ulong *)(this + 0x4d8));
              puVar11 = *(uchar **)(this + 0x38);
              if (lVar13 != 0) {
                lVar14 = lVar13;
                lVar15 = lVar3;
              }
            }
          }
          lVar8 = lVar3 + 1;
          lVar13 = lVar3;
          uVar2 = puVar11[lVar3];
        }
        if (lVar14 == 0) {
          if (param_2 != (SLexToken *)0x0) {
            *(undefined8 *)param_2 = 0;
            *(undefined8 *)(param_2 + 8) = 0;
            *(undefined8 *)(param_2 + 0x10) = 0;
          }
          if (param_1) goto LAB_05447860;
          *(long *)(this + 0x38) = lVar10;
          *(undefined8 *)(this + 0x80) = uVar12;
          *(undefined8 *)(this + 0x88) = uVar6;
          goto LAB_054477cc;
        }
        local_128 = *(long *)(this + 0x38);
        local_130 = *(long *)(lVar14 + 8);
        lVar13 = *(long *)(lVar14 + 0x28);
        *(long *)(this + 0x38) = local_128 + lVar15;
        local_120 = lVar15;
        if (lVar13 != 0) goto LAB_05447894;
        if (local_130 != 0) break;
      } while( true );
    }
    if (!param_1) {
      *(long *)(this + 0x38) = lVar10;
      *(undefined8 *)(this + 0x80) = uVar12;
      *(undefined8 *)(this + 0x88) = uVar6;
    }
    lVar16 = local_130;
    if (param_2 != (SLexToken *)0x0) {
      *(undefined8 *)(param_2 + 0x20) = local_110;
      *(long *)param_2 = local_130;
      *(long *)(param_2 + 8) = local_128;
      *(long *)(param_2 + 0x10) = local_120;
      *(undefined8 *)(param_2 + 0x18) = local_118;
    }
    goto LAB_054477cc;
  }
LAB_05447860:
  lVar16 = 0;
LAB_054477cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar16);
LAB_05447894:
  memset(acStack_108,0,0x100);
  cVar4 = (**(code **)(lVar14 + 0x28))(this,&local_130,acStack_108,0x100);
  if (cVar4 == '\0') goto LAB_054478d0;
  goto LAB_05447608;
LAB_054478d0:
  if (!param_1) {
    *(long *)(this + 0x38) = lVar10;
    *(undefined8 *)(this + 0x80) = uVar12;
    *(undefined8 *)(this + 0x88) = uVar6;
  }
  if (param_2 != (SLexToken *)0x0) {
    *(undefined8 *)(param_2 + 0x20) = local_110;
    *(long *)param_2 = local_130;
    *(long *)(param_2 + 8) = local_128;
    *(long *)(param_2 + 0x10) = local_120;
    *(undefined8 *)(param_2 + 0x18) = local_118;
  }
  LexSetLastError(this,acStack_108);
  goto LAB_054477cc;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FEAST::CLexLexer::GetToken(bool, FEAST::SLexToken*) */

void __thiscall FEAST::CLexLexer::GetToken(CLexLexer *this,bool param_1,SLexToken *param_2)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  byte *pbVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long *local_130;
  byte *local_128;
  long *local_120;
  long local_118;
  undefined8 local_110;
  char acStack_108 [256];
  long local_8;
  
  uVar11 = *(undefined8 *)(this + 0x80);
  local_8 = ___stack_chk_guard;
  lVar15 = *(long *)(this + 0x38);
  uVar16 = *(undefined8 *)(this + 0x88);
  if (this[0x98] == (CLexLexer)0x0) {
    plVar14 = (long *)GetTokenNFA(this,param_1,param_2);
  }
  else {
    if (lVar15 != 0) {
      local_130 = (long *)0x0;
LAB_0544797c:
      if (local_130 == (long *)0x0) {
        do {
          plVar14 = local_130;
          pbVar12 = *(byte **)(this + 0x38);
          plVar9 = (long *)0x1;
          local_118 = *(long *)(this + 0x80);
          local_110 = *(undefined8 *)(this + 0x88);
          uVar7 = (ulong)*(ushort *)(this + 0x60);
          lVar4 = local_118;
          pbVar8 = pbVar12;
          plVar10 = local_130;
          plVar13 = local_130;
          while( true ) {
            uVar5 = (uint)*pbVar8;
            if (uVar5 == 0) break;
            if (uVar5 != 0xd) {
              if ((byte)this[0x99] < ((uVar5 - 0x41 & 0xff) < 0x1a)) {
                uVar2 = *(ushort *)
                         (*(long *)(this + 0x68) +
                         (uVar7 * *(long *)(this + 0x50) + (long)(int)(uVar5 + 0x20)) * 2);
              }
              else {
                uVar2 = *(ushort *)
                         (*(long *)(this + 0x68) +
                         (uVar7 * *(long *)(this + 0x50) + (ulong)*pbVar8) * 2);
              }
              if (uVar2 == 0xffff) break;
              uVar7 = (ulong)uVar2;
              lVar6 = *(long *)(this + 0x88);
              *(long *)(this + 0x88) = lVar6 + 1;
              if (*pbVar8 == 10) {
                lVar4 = lVar4 + 1;
                *(undefined8 *)(this + 0x88) = 0;
                *(long *)(this + 0x80) = lVar4;
              }
              else if (*pbVar8 == 9) {
                *(long *)(this + 0x88) = *(long *)(this + 0x90) + -1 + lVar6 + 1;
              }
              plVar1 = (long *)(*(long *)(this + 0x78) + uVar7 * 0x20);
              if ((plVar1[1] & 2U) != 0) {
                plVar10 = plVar9;
                plVar13 = plVar1;
              }
            }
            pbVar8 = pbVar8 + 1;
            plVar9 = (long *)((long)plVar9 + 1);
          }
          if (plVar13 == (long *)0x0) {
            if (param_2 != (SLexToken *)0x0) {
              *(undefined8 *)param_2 = 0;
              *(undefined8 *)(param_2 + 8) = 0;
              *(undefined8 *)(param_2 + 0x10) = 0;
            }
            if (param_1) goto LAB_05447b64;
            *(long *)(this + 0x38) = lVar15;
            *(undefined8 *)(this + 0x80) = uVar11;
            *(undefined8 *)(this + 0x88) = uVar16;
            goto LAB_05447ab0;
          }
          local_130 = (long *)*plVar13;
          lVar4 = plVar13[2];
          *(byte **)(this + 0x38) = pbVar12 + (long)plVar10;
          local_128 = pbVar12;
          local_120 = plVar10;
          if (lVar4 != 0) goto LAB_05447b18;
          if (local_130 != (long *)0x0) break;
        } while( true );
      }
      if (!param_1) {
        *(long *)(this + 0x38) = lVar15;
        *(undefined8 *)(this + 0x80) = uVar11;
        *(undefined8 *)(this + 0x88) = uVar16;
      }
      plVar14 = local_130;
      if (param_2 != (SLexToken *)0x0) {
        *(undefined8 *)(param_2 + 0x20) = local_110;
        *(long **)param_2 = local_130;
        *(byte **)(param_2 + 8) = local_128;
        *(long **)(param_2 + 0x10) = local_120;
        *(long *)(param_2 + 0x18) = local_118;
      }
      goto LAB_05447ab0;
    }
LAB_05447b64:
    plVar14 = (long *)0x0;
  }
LAB_05447ab0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar14);
  }
  return;
LAB_05447b18:
  memset(acStack_108,0,0x100);
  cVar3 = (*(code *)plVar13[2])(this,&local_130,acStack_108,0x100);
  if (cVar3 == '\0') goto LAB_05447b90;
  goto LAB_0544797c;
LAB_05447b90:
  if (!param_1) {
    *(long *)(this + 0x38) = lVar15;
    *(undefined8 *)(this + 0x80) = uVar11;
    *(undefined8 *)(this + 0x88) = uVar16;
  }
  if (param_2 != (SLexToken *)0x0) {
    *(undefined8 *)(param_2 + 0x20) = local_110;
    *(long **)param_2 = local_130;
    *(byte **)(param_2 + 8) = local_128;
    *(long **)(param_2 + 0x10) = local_120;
    *(long *)(param_2 + 0x18) = local_118;
  }
  LexSetLastError(this,acStack_108);
  goto LAB_05447ab0;
}


/* FEAST::CLexLexer::LexGetToken(FEAST::SLexToken*, bool) */

void __thiscall FEAST::CLexLexer::LexGetToken(CLexLexer *this,SLexToken *param_1,bool param_2)

{
  GetToken(this,param_2,param_1);
  return;
}


/* FEAST::CLexLexer::~CLexLexer() */

void __thiscall FEAST::CLexLexer::~CLexLexer(CLexLexer *this)

{
  *(undefined ***)this = &PTR_LexDestroy_06a38400;
  CLexBitSet::~CLexBitSet((CLexBitSet *)(this + 0x4d0));
  CLexBitSet::~CLexBitSet((CLexBitSet *)(this + 0x4b8));
  CLexBitSet::~CLexBitSet((CLexBitSet *)(this + 0xa0));
  CLexDfaTable::~CLexDfaTable((CLexDfaTable *)(this + 0x50));
  CLexNfaExprFactory::~CLexNfaExprFactory((CLexNfaExprFactory *)(this + 0x20));
  CLexNfaNodeFactory::~CLexNfaNodeFactory((CLexNfaNodeFactory *)(this + 8));
  return;
}


/* FEAST::CLexLexer::LexDestroy() */

undefined8 __thiscall FEAST::CLexLexer::LexDestroy(CLexLexer *this)

{
  void *extraout_x1;
  
  if (this != (CLexLexer *)0x0) {
    ~CLexLexer(this);
    operator_delete(this,extraout_x1);
  }
  return 1;
}

