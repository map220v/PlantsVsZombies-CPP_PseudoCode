// Class: FEAST::CPrsParser


/* FEAST::CPrsParser::PrsGetLexer() */

undefined8 __thiscall FEAST::CPrsParser::PrsGetLexer(CPrsParser *this)

{
  return *(undefined8 *)(this + 0x8e438);
}


/* FEAST::CPrsParser::PrsGetLastError(unsigned long*, unsigned long*) */

CPrsParser * __thiscall
FEAST::CPrsParser::PrsGetLastError(CPrsParser *this,ulong *param_1,ulong *param_2)

{
  if (param_1 != (ulong *)0x0) {
    *param_1 = *(ulong *)(this + 0x8e428);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = *(ulong *)(this + 0x8e430);
  }
  return this + 0x8e028;
}


/* FEAST::CPrsParser::MakeRule(char const*, bool*, bool) */

CPrsParser * __thiscall
FEAST::CPrsParser::MakeRule(CPrsParser *this,char *param_1,bool *param_2,bool param_3)

{
  int iVar1;
  long lVar2;
  char *__s2;
  ulong uVar3;
  CPrsParser *pCVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(this + 0x8008);
  if (uVar5 == 0) {
    if (param_3) goto LAB_0539e2e0;
  }
  else {
    pCVar4 = this + 8;
    uVar3 = 0;
    do {
      __s2 = *(char **)pCVar4;
      pCVar4 = pCVar4 + 0x40;
      iVar1 = strcmp(param_1,__s2);
      if (iVar1 == 0) {
        if (param_2 != (bool *)0x0) {
          *param_2 = true;
        }
        return this + uVar3 * 0x40 + 8;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
    if (param_3) {
      if (0x1ff < uVar5) {
        LIB_Errorf("CPrsParser::MakeRule: Exceeded maximum rule count");
        uVar5 = *(ulong *)(this + 0x8008);
      }
LAB_0539e2e0:
      pCVar4 = this + uVar5 * 0x40 + 8;
      FUN_0539d674(pCVar4,param_1);
      *(undefined8 *)(this + uVar5 * 0x40 + 0x20) = 0;
      lVar2 = *(long *)(this + 0x8008);
      *(long *)(this + uVar5 * 0x40 + 0x28) = lVar2;
      *(undefined8 *)(this + uVar5 * 0x40 + 0x30) = 0;
      *(undefined8 *)(this + uVar5 * 0x40 + 0x38) = 0;
      *(long *)(this + 0x8008) = lVar2 + 1;
      if (param_2 == (bool *)0x0) {
        return pCVar4;
      }
      *param_2 = false;
      return pCVar4;
    }
  }
  if (param_2 == (bool *)0x0) {
    return (CPrsParser *)0x0;
  }
  *param_2 = false;
  return (CPrsParser *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FEAST::CPrsParser::PrsSetRuleAlias(char const*, char const*) */

void __thiscall FEAST::CPrsParser::PrsSetRuleAlias(CPrsParser *this,char *param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  bool bStack_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (char *)0x0) || (lVar1 = MakeRule(this,param_1,&bStack_9,false), lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    FUN_0539d734(lVar1 + 0x10,param_2);
    uVar2 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* FEAST::CPrsParser::RuleForLexTag(unsigned long) */

CPrsParser * __thiscall FEAST::CPrsParser::RuleForLexTag(CPrsParser *this,ulong param_1)

{
  long lVar1;
  CPrsParser *pCVar2;
  ulong uVar3;
  
  if (*(long *)(this + 0x8008) == 0) {
    return (CPrsParser *)0x0;
  }
  if (*(ulong *)(this + 0x30) == param_1) {
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    pCVar2 = this + 0x70;
    do {
      lVar1 = lVar1 + 1;
      if (lVar1 == *(long *)(this + 0x8008)) {
        return (CPrsParser *)0x0;
      }
      uVar3 = *(ulong *)pCVar2;
      pCVar2 = pCVar2 + 0x40;
    } while (uVar3 != param_1);
  }
  return this + lVar1 * 0x40 + 8;
}


/* FEAST::CPrsParser::PrsRegisterT(char const*, unsigned long, unsigned long) */

undefined8 FEAST::CPrsParser::PrsRegisterT(char *param_1,ulong param_2,ulong param_3)

{
  FUN_0539e42c();
  return 1;
}


/* FEAST::CPrsParser::InitProductionLexer() */

void __thiscall FEAST::CPrsParser::InitProductionLexer(CPrsParser *this)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (*(long *)(this + 0x8e020) != 0) {
    return;
  }
  plVar1 = (long *)ILexLexer::LexCreate();
  *(long **)(this + 0x8e020) = plVar1;
  if (plVar1 == (long *)0x0) {
    LIB_Errorf("CPrsParser::RegisterNonTerminal: Cannot create production lexer");
    plVar1 = *(long **)(this + 0x8e020);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,0);
  (**(code **)(**(long **)(this + 0x8e020) + 0x10))(*(long **)(this + 0x8e020),0,".");
  (**(code **)(**(long **)(this + 0x8e020) + 0x18))(*(long **)(this + 0x8e020),1);
  plVar1 = *(long **)(this + 0x8e020);
  pcVar3 = *(code **)(*plVar1 + 0x10);
  uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,1);
  (*pcVar3)(plVar1,0,uVar2);
  plVar1 = *(long **)(this + 0x8e020);
  pcVar3 = *(code **)(*plVar1 + 0x10);
  uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,0xb);
  (*pcVar3)(plVar1,1,uVar2);
  plVar1 = *(long **)(this + 0x8e020);
  pcVar3 = *(code **)(*plVar1 + 0x10);
  uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,10);
  (*pcVar3)(plVar1,2,uVar2);
  (**(code **)(**(long **)(this + 0x8e020) + 0x10))
            (*(long **)(this + 0x8e020),3,"[a-zA-Z_!]([a-zA-Z_!]|[0-9])*");
  plVar1 = *(long **)(this + 0x8e020);
  pcVar3 = *(code **)(*plVar1 + 0x10);
  uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,5);
  (*pcVar3)(plVar1,4,uVar2);
  (**(code **)(**(long **)(this + 0x8e020) + 0x10))(*(long **)(this + 0x8e020),5,&DAT_056ecb48);
  (**(code **)(**(long **)(this + 0x8e020) + 0x28))(*(long **)(this + 0x8e020));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FEAST::CPrsParser::RegisterNonTerminal(char const*, char const*, unsigned long, void*) */

void FEAST::CPrsParser::RegisterNonTerminal(char *param_1,char *param_2,ulong param_3,void *param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  size_t sVar9;
  char *__dest;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  char acStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  InitProductionLexer((CPrsParser *)param_1);
  if ((param_2 != (char *)0x0) && (param_3 != 0)) {
    lVar7 = MakeRule((CPrsParser *)param_1,param_2,(bool *)0x0,true);
    if ((*(ulong *)(lVar7 + 0x18) & 1) != 0) {
      LIB_Errorf("CPrsParser::RegisterNonTerminal: Rule \"%s\" is used by a terminal",param_2);
    }
    bVar2 = false;
    puVar8 = (undefined8 *)LIB_ClientMalloc(0x40);
    *puVar8 = 0;
    puVar8[1] = lVar7;
    puVar8[2] = 0;
    sVar9 = strlen((char *)param_3);
    __dest = (char *)LIB_ClientMalloc(sVar9 + 1);
    puVar8[5] = __dest;
    strcpy(__dest,(char *)param_3);
    plVar12 = *(long **)(param_1 + 0x8e020);
    puVar8[6] = 0;
    puVar8[7] = 0;
    lVar14 = *plVar12;
    puVar8[3] = 0;
    pcVar15 = *(code **)(lVar14 + 0x30);
    puVar8[4] = param_4;
    (*pcVar15)(plVar12,puVar8[5],0,0,0);
    while( true ) {
      lVar14 = (**(code **)(**(long **)(param_1 + 0x8e020) + 0x48))
                         (*(long **)(param_1 + 0x8e020),
                          &RegisterNonTerminal(char_const*,char_const*,unsigned_long,void*)::token,1
                         );
      uVar5 = DAT_06be89c0;
      uVar4 = DAT_06be89b8;
      uVar3 = DAT_06be89b0;
      uVar10 = DAT_06be89a8;
      if (lVar14 == 0) break;
      lVar14 = puVar8[2];
      if (RegisterNonTerminal(char_const*,char_const*,unsigned_long,void*)::token == 5) {
        if (lVar14 == 0) {
          LIB_Errorf("CPrsParser::RegisterNonTerminal: Rule \"%s\" has a production with an invalid AST marker"
                     ,param_2);
        }
        lVar14 = (**(code **)(**(long **)(param_1 + 0x8e020) + 0x48))
                           (*(long **)(param_1 + 0x8e020),
                            &RegisterNonTerminal(char_const*,char_const*,unsigned_long,void*)::token
                            ,1);
        if (lVar14 != 4) {
          LIB_Errorf("CPrsParser::RegisterNonTerminal: Rule \"%s\" has a production with an invalid AST marker"
                     ,param_2);
        }
        bVar2 = true;
        sprintf(acStack_108,"%0.*s",DAT_06be89b0,DAT_06be89a8);
        iVar6 = atoi(acStack_108);
        (&RegisterNonTerminal(char_const*,char_const*,unsigned_long,void*)::tempAstIndices)
        [puVar8[2] + -1] = (long)iVar6;
      }
      else {
        (&RegisterNonTerminal(char_const*,char_const*,unsigned_long,void*)::tempTokens)[lVar14 * 5]
             = RegisterNonTerminal(char_const*,char_const*,unsigned_long,void*)::token;
        (&DAT_06be59a8)[lVar14 * 5] = uVar10;
        (&DAT_06be59c0)[lVar14 * 5] = uVar5;
        (&DAT_06be59b0)[lVar14 * 5] = uVar3;
        (&DAT_06be59b8)[lVar14 * 5] = uVar4;
        (&RegisterNonTerminal(char_const*,char_const*,unsigned_long,void*)::tempAstIndices)[lVar14]
             = 0;
        puVar8[2] = puVar8[2] + 1;
      }
    }
    lVar14 = puVar8[2];
    if (lVar14 == 0) {
      LIB_Errorf("CPrsParser::RegisterNonTerminal: Rule \"%s\" has production with no valid items",
                 param_2);
      lVar14 = puVar8[2];
    }
    uVar10 = LIB_ClientMalloc(lVar14 * 0x28);
    puVar8[6] = uVar10;
    puVar11 = (undefined8 *)LIB_ClientMalloc(puVar8[2] << 3);
    puVar8[3] = puVar11;
    if (puVar8[2] != 0) {
      lVar16 = puVar8[6];
      uVar13 = 0;
      lVar14 = 0;
      do {
        puVar1 = (undefined8 *)(lVar16 + lVar14);
        uVar10 = *(undefined8 *)((long)&DAT_06be59a8 + lVar14);
        *puVar1 = *(undefined8 *)
                   ((long)&RegisterNonTerminal(char_const*,char_const*,unsigned_long,void*)::
                           tempTokens + lVar14);
        puVar1[1] = uVar10;
        uVar10 = *(undefined8 *)((long)&DAT_06be59b8 + lVar14);
        puVar1[2] = *(undefined8 *)((long)&DAT_06be59b0 + lVar14);
        puVar1[3] = uVar10;
        puVar1[4] = *(undefined8 *)((long)&DAT_06be59c0 + lVar14);
        puVar11[uVar13] =
             (&RegisterNonTerminal(char_const*,char_const*,unsigned_long,void*)::tempAstIndices)
             [uVar13];
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 0x28;
      } while (uVar13 < (ulong)puVar8[2]);
    }
    if (!bVar2) {
      *puVar11 = 1;
    }
    *puVar8 = *(undefined8 *)(lVar7 + 0x30);
    *(undefined8 **)(lVar7 + 0x30) = puVar8;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FEAST::CPrsParser::PrsRegisterNT(char const*, char const*, unsigned long) */

undefined8 __thiscall
FEAST::CPrsParser::PrsRegisterNT(CPrsParser *this,char *param_1,char *param_2,ulong param_3)

{
  RegisterNonTerminal((char *)this,param_1,(ulong)param_2,(void *)param_3);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FEAST::CPrsParser::ResolveProductionItemRules() */

void __thiscall FEAST::CPrsParser::ResolveProductionItemRules(CPrsParser *this)

{
  char cVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  long *plVar8;
  char *pcVar9;
  code *pcVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  CPrsParser *pCVar17;
  ulong uVar18;
  bool local_9;
  long local_8;
  
  pCVar17 = this + 0x38;
  local_8 = ___stack_chk_guard;
  uVar18 = 0;
  if (*(long *)(this + 0x8008) != 0) {
    do {
      for (plVar16 = *(long **)pCVar17; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        uVar5 = LIB_ClientMalloc(plVar16[2] << 3);
        plVar16[7] = uVar5;
        if (plVar16[2] != 0) {
          lVar14 = 0;
          uVar13 = 0;
          do {
            while( true ) {
              lVar15 = plVar16[6] + lVar14 * 5;
              if ((**(char **)(lVar15 + 8) == '\"') || (**(char **)(lVar15 + 8) == '\'')) break;
              sprintf(&ResolveProductionItemRules()::buf,"%0.*s",*(undefined8 *)(lVar15 + 0x10));
              lVar15 = plVar16[7];
              uVar5 = MakeRule(this,&ResolveProductionItemRules()::buf,&local_9,false);
              *(undefined8 *)(lVar15 + lVar14) = uVar5;
              if (local_9 == false) {
                LIB_Errorf("CPrsParser::ResolveProductionItemRules: Unknown terminal/nonterminal \"%s\""
                           ,&ResolveProductionItemRules()::buf);
              }
LAB_0539eab8:
              uVar13 = uVar13 + 1;
              lVar14 = lVar14 + 8;
              if ((ulong)plVar16[2] <= uVar13) goto LAB_0539ec04;
            }
            sprintf(&ResolveProductionItemRules()::buf,"%0.*s",*(undefined8 *)(lVar15 + 0x10));
            puVar2 = ResolveProductionItemRules()::literals;
            if (ResolveProductionItemRules()::buf == '\'') {
              DAT_06bea9d2 = DAT_06beaad1;
              ResolveProductionItemRules()::namebuf = 0x24;
              DAT_06bea9d1 = 0x5c;
              DAT_06bea9d3 = 0;
            }
            else {
              ResolveProductionItemRules()::namebuf = 0x24;
              if ((DAT_06beaad1 == '\"') || (DAT_06beaad1 == '\0')) {
                pcVar9 = &DAT_06bea9d1;
              }
              else {
                pcVar9 = &DAT_06bea9d1;
                pcVar7 = &DAT_06beaad1;
                cVar3 = DAT_06beaad1;
                do {
                  cVar1 = *puVar2;
                  pcVar11 = puVar2;
                  while (cVar1 != '\0') {
                    if (cVar3 == cVar1) {
                      *pcVar9 = '\\';
                      pcVar9 = pcVar9 + 1;
                      break;
                    }
                    pcVar11 = pcVar11 + 1;
                    cVar1 = *pcVar11;
                  }
                  *pcVar9 = cVar3;
                  pcVar9 = pcVar9 + 1;
                  pcVar7 = pcVar7 + 1;
                  cVar3 = *pcVar7;
                } while ((cVar3 != '\"') && (cVar3 != '\0'));
              }
              *pcVar9 = '\0';
            }
            lVar6 = MakeRule(this,&ResolveProductionItemRules()::namebuf,&local_9,false);
            if (local_9 == false) {
              FUN_0539e42c(this,&ResolveProductionItemRules()::namebuf,0xffff5150,0);
              lVar6 = MakeRule(this,&ResolveProductionItemRules()::namebuf,(bool *)0x0,false);
              plVar8 = *(long **)(this + 0x8e438);
              lVar12 = *plVar8;
              *(ulong *)(lVar6 + 0x18) = *(ulong *)(lVar6 + 0x18) | 4;
              pcVar10 = *(code **)(lVar12 + 0x18);
              *(ulong *)(lVar6 + 0x28) = *(ulong *)(lVar6 + 0x20) | 0x40000000;
              uVar4 = (*pcVar10)(plVar8,0xffffffff);
              cVar3 = (**(code **)(**(long **)(this + 0x8e438) + 0x10))
                                (*(long **)(this + 0x8e438),*(undefined8 *)(lVar6 + 0x28),
                                 &DAT_06bea9d1);
              if (cVar3 == '\0') {
                LIB_Errorf("CPrsParser::ResolveProductionItemRules: RegisterToken failure on \"%s\", tag %d"
                           ,&DAT_06bea9d1,*(undefined8 *)(lVar6 + 0x28));
              }
              (**(code **)(**(long **)(this + 0x8e438) + 0x18))(*(long **)(this + 0x8e438),uVar4);
            }
            uVar5 = *(undefined8 *)(lVar15 + 0x10);
            *(long *)(plVar16[7] + lVar14) = lVar6;
            sprintf(&ResolveProductionItemRules()::buf,"%0.*s",uVar5,*(undefined8 *)(lVar15 + 8));
            FUN_0539d6d4(lVar6 + 8,&ResolveProductionItemRules()::buf);
            if (*(long *)(plVar16[3] + lVar14) == 0) goto LAB_0539eab8;
            uVar13 = uVar13 + 1;
            *(undefined8 *)(lVar6 + 0x38) = 0xffff0001;
            lVar14 = lVar14 + 8;
          } while (uVar13 < (ulong)plVar16[2]);
        }
LAB_0539ec04:
        LIB_ClientFree((void *)plVar16[6]);
        plVar16[6] = 0;
        LIB_ClientFree((void *)plVar16[5]);
        plVar16[5] = 0;
      }
      uVar18 = uVar18 + 1;
      pCVar17 = pCVar17 + 0x40;
    } while (uVar18 < *(ulong *)(this + 0x8008));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* FEAST::CPrsParser::CPrsParser() */

void __thiscall FEAST::CPrsParser::CPrsParser(CPrsParser *this)

{
  CPrsParser *pCVar1;
  long lVar2;
  CPrsParser *this_00;
  
  IPrsParser::IPrsParser((IPrsParser *)this);
  *(undefined ***)this = &PTR_PrsDestroy_06a36e00;
  this_00 = this + 8;
  do {
    pCVar1 = this_00 + 0x40;
    CPrsParseRule::CPrsParseRule((CPrsParseRule *)this_00);
    this_00 = pCVar1;
  } while (pCVar1 != this + 0x8008);
  *(undefined8 *)(this + 0x8e018) = 0;
  *(undefined8 *)(this + 0xe010) = 0;
  *(undefined8 *)(this + 0x8008) = 0;
  *(undefined8 *)(this + 0x8e020) = 0;
  this[0x8e028] = (CPrsParser)0x0;
  *(undefined8 *)(this + 0x8e430) = 0;
  *(undefined8 *)(this + 0x8e428) = 0;
  memset(this + 0x8010,0,0x6000);
  memset(this + 0xe018,0,0x80000);
  lVar2 = ILexLexer::LexCreate();
  *(long *)(this + 0x8e438) = lVar2;
  if (lVar2 == 0) {
    LIB_Errorf("CPrsParser::CPrsParser(): Cannot create terminal lexer");
  }
  this[0x8e440] = (CPrsParser)0x0;
  *(undefined8 *)(this + 0x8e448) = 1;
  RegisterNonTerminal((char *)this,"NULL",0x5608e50,(void *)0x0);
  FUN_0539e42c(this,&DAT_056ecd20,0xffff1234,0);
  return;
}


/* FEAST::CPrsParser::~CPrsParser() */

void __thiscall FEAST::CPrsParser::~CPrsParser(CPrsParser *this)

{
  CPrsParser *pCVar1;
  
  *(undefined ***)this = &PTR_PrsDestroy_06a36e00;
  if (*(undefined8 **)(this + 0x8e020) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(this + 0x8e020))();
  }
  if (*(undefined8 **)(this + 0x8e438) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(this + 0x8e438))();
  }
  pCVar1 = this + 0xe010;
  while (pCVar1 != this + 0x8010) {
    pCVar1 = pCVar1 + -0x18;
    CPrsParseState::~CPrsParseState((CPrsParseState *)pCVar1);
  }
  pCVar1 = this + 0x8008;
  do {
    pCVar1 = pCVar1 + -0x40;
    CPrsParseRule::~CPrsParseRule((CPrsParseRule *)pCVar1);
  } while (this + 8 != pCVar1);
  return;
}


/* FEAST::CPrsParser::PrsDestroy() */

undefined8 __thiscall FEAST::CPrsParser::PrsDestroy(CPrsParser *this)

{
  void *extraout_x1;
  
  if (this != (CPrsParser *)0x0) {
    ~CPrsParser(this);
    CLexLexer::operator_delete((CLexLexer *)this,extraout_x1);
  }
  return 1;
}


/* FEAST::CPrsParser::GenerateStates() */

void __thiscall FEAST::CPrsParser::GenerateStates(CPrsParser *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  CPrsParser *pCVar9;
  long *plVar10;
  CPrsParser *pCVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  CPrsParser *pCVar18;
  undefined8 uVar19;
  int iVar20;
  int iVar21;
  
  lVar5 = MakeRule(this,"!start",(bool *)0x0,false);
  if (lVar5 == 0) {
    LIB_Errorf("CPrsParser::GenerateStates: No start rule");
  }
  puVar6 = CPrsParseState::operator_new(0x18,this,*(ulong *)(this + 0x8008));
  plVar14 = *(long **)(lVar5 + 0x30);
  *(ulong *)(lVar5 + 0x18) = *(ulong *)(lVar5 + 0x18) | 2;
  while (plVar14 != (long *)0x0) {
    puVar7 = CPrsParseStateProd::operator_new(0x20,this,*(ulong *)(this + 0x8008));
    *puVar7 = *puVar6;
    puVar7[1] = plVar14;
    puVar7[2] = 0;
    *(undefined4 *)(puVar7 + 3) = 0;
    plVar14 = (long *)*plVar14;
    *puVar6 = puVar7;
  }
  lVar5 = *(long *)(this + 0xe010);
  iVar21 = 0;
  iVar1 = (int)lVar5;
  if ((int)lVar5 != 0) {
    do {
      if (iVar21 < (int)lVar5) {
        pCVar18 = this + (long)iVar21 * 0x18 + 0x8020;
        do {
          lVar8 = (long)iVar21;
          do {
            plVar14 = *(long **)(this + lVar8 * 0x18 + 0x8010);
            if (plVar14 == (long *)0x0) {
              iVar3 = (int)*(undefined8 *)(this + 0x8008);
              plVar14 = (long *)0x0;
              if (0 < iVar3) goto LAB_0539f458;
              iVar3 = 1;
              goto LAB_0539f4a8;
            }
            bVar2 = false;
            do {
              if ((int)plVar14[3] == 0) {
                *(undefined4 *)(plVar14 + 3) = 1;
                if (plVar14[2] != *(long *)(plVar14[1] + 0x10)) {
                  lVar12 = *(long *)(*(long *)(plVar14[1] + 0x38) + plVar14[2] * 8);
                  if (((uint)*(ulong *)(lVar12 + 0x18) >> 1 & 1) == 0) {
                    plVar15 = *(long **)(lVar12 + 0x30);
                    *(ulong *)(lVar12 + 0x18) = *(ulong *)(lVar12 + 0x18) | 2;
                    if (plVar15 != (long *)0x0) {
                      do {
                        puVar6 = CPrsParseStateProd::operator_new
                                           (0x20,this,*(ulong *)(this + 0x8008));
                        *puVar6 = *(undefined8 *)(this + lVar8 * 0x18 + 0x8010);
                        puVar6[1] = plVar15;
                        *(undefined4 *)(puVar6 + 3) = 0;
                        puVar6[2] = 0;
                        plVar15 = (long *)*plVar15;
                        *(undefined8 **)(this + lVar8 * 0x18 + 0x8010) = puVar6;
                      } while (plVar15 != (long *)0x0);
                      bVar2 = true;
                    }
                  }
                }
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          } while (bVar2);
          iVar3 = (int)*(undefined8 *)(this + 0x8008);
          plVar14 = *(long **)(this + lVar8 * 0x18 + 0x8010);
          plVar15 = plVar14;
          if (0 < iVar3) {
LAB_0539f458:
            pCVar11 = this + 0x20;
            do {
              pCVar9 = pCVar11 + 0x40;
              *(ulong *)pCVar11 = *(ulong *)pCVar11 & 0xfffffffffffffffd;
              pCVar11 = pCVar9;
              plVar15 = plVar14;
            } while (pCVar9 != this + (ulong)(iVar3 - 1) * 0x40 + 0x60);
          }
          for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
            *(undefined4 *)(plVar15 + 3) = 0xffffffff;
          }
          iVar3 = 1;
LAB_0539f4a8:
          do {
            if (plVar14 == (long *)0x0) break;
            bVar2 = false;
            plVar15 = plVar14;
            do {
              while (-1 < (int)plVar15[3]) {
LAB_0539f4b8:
                plVar15 = (long *)*plVar15;
                if (plVar15 == (long *)0x0) goto LAB_0539f534;
              }
              if (plVar15[2] == *(long *)(plVar15[1] + 0x10)) {
                *(undefined4 *)(plVar15 + 3) = 0;
                bVar2 = true;
                goto LAB_0539f4b8;
              }
              plVar10 = plVar14;
              do {
                if ((0 < (int)plVar10[3]) &&
                   (*(long *)(*(long *)(plVar15[1] + 0x38) + plVar15[2] * 8) ==
                    *(long *)(*(long *)(plVar10[1] + 0x38) + plVar10[2] * 8))) {
                  *(int *)(plVar15 + 3) = (int)plVar10[3];
                  bVar2 = true;
                  goto LAB_0539f4b8;
                }
                plVar10 = (long *)*plVar10;
              } while (plVar10 != (long *)0x0);
              *(int *)(plVar15 + 3) = iVar3;
              bVar2 = true;
              plVar15 = (long *)*plVar15;
              iVar3 = iVar3 + 1;
            } while (plVar15 != (long *)0x0);
LAB_0539f534:
          } while (bVar2);
          iVar20 = 1;
          this[lVar8 * 0x18 + 0x8020] = (CPrsParser)0x1;
          if (iVar3 != 1) {
            do {
              for (plVar14 = *(long **)(this + lVar8 * 0x18 + 0x8010); plVar14 != (long *)0x0;
                  plVar14 = (long *)*plVar14) {
                if (*(int *)(plVar14 + 3) == iVar20) {
                  lVar12 = *(long *)(*(long *)(plVar14[1] + 0x38) + plVar14[2] * 8);
                  if (lVar12 != 0) goto LAB_0539f598;
                  break;
                }
              }
              lVar12 = 0;
              LIB_Errorf("CPrsParser::GenerateStates: No TransRule");
LAB_0539f598:
              uVar16 = *(undefined8 *)(this + 0xe010);
              if (0 < (int)uVar16) {
                uVar19 = *(undefined8 *)(pCVar18 + -0x10);
                pCVar11 = this + 0x8010;
                do {
                  pCVar9 = pCVar11 + 0x18;
                  iVar4 = FUN_0539e0a4(pCVar11,uVar19,pCVar18,iVar20);
                  if (iVar4 != 0) goto LAB_0539f5f0;
                  pCVar11 = pCVar9;
                } while (pCVar9 != this + (ulong)((int)uVar16 - 1) * 0x18 + 0x8028);
              }
              pCVar11 = CPrsParseState::operator_new(0x18,this,*(ulong *)(this + 0x8008));
              for (plVar14 = *(long **)(this + lVar8 * 0x18 + 0x8010); plVar14 != (long *)0x0;
                  plVar14 = (long *)*plVar14) {
                if (*(int *)(plVar14 + 3) == iVar20) {
                  puVar6 = CPrsParseStateProd::operator_new(0x20,this,*(ulong *)(this + 0x8008));
                  lVar13 = plVar14[2];
                  uVar16 = plVar14[1];
                  *puVar6 = *(undefined8 *)pCVar11;
                  puVar6[1] = uVar16;
                  puVar6[2] = lVar13 + 1;
                  *(undefined4 *)(puVar6 + 3) = 0;
                  *(undefined8 **)pCVar11 = puVar6;
                }
              }
LAB_0539f5f0:
              if (*(long *)pCVar11 == 0) {
                LIB_Errorf("CPrsParser::GenerateStates: No production to link on");
              }
              iVar20 = iVar20 + 1;
              *(CPrsParser **)
               (*(long *)(this + lVar8 * 0x18 + 0x8018) + *(long *)(lVar12 + 0x20) * 8) = pCVar11;
            } while (iVar20 != iVar3);
          }
          plVar14 = *(long **)(this + lVar8 * 0x18 + 0x8010);
          this[lVar8 * 0x18 + 0x8020] = (CPrsParser)0x0;
          for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
            *(undefined4 *)(plVar14 + 3) = 0;
          }
          pCVar18 = pCVar18 + 0x18;
          iVar21 = iVar21 + 1;
        } while (iVar21 != (int)lVar5);
        lVar5 = *(long *)(this + 0xe010);
      }
      bVar2 = (int)lVar5 != iVar1;
      iVar21 = iVar1;
      iVar1 = (int)lVar5;
    } while (bVar2);
  }
  uVar17 = 0;
  pCVar18 = this + 0x8010;
  if (lVar5 != 0) {
    do {
      uVar17 = uVar17 + 1;
      FUN_0539d794(pCVar18);
      pCVar18 = pCVar18 + 0x18;
    } while (uVar17 < *(ulong *)(this + 0xe010));
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FEAST::CPrsParser::FinalizeParser(char const*) */

void __thiscall FEAST::CPrsParser::FinalizeParser(CPrsParser *this,char *param_1)

{
  long lVar1;
  char acStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RegisterNonTerminal((char *)this,"!start",0x56ecd20,(void *)0x0);
  sprintf(acStack_108,"%s !eoi",param_1);
  RegisterNonTerminal((char *)this,"!start",(ulong)acStack_108,(void *)0x0);
  ResolveProductionItemRules(this);
  GenerateStates(this);
  (**(code **)(**(long **)(this + 0x8e438) + 0x28))(*(long **)(this + 0x8e438));
  lVar1 = ___stack_chk_guard;
  this[0x8e440] = (CPrsParser)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FEAST::CPrsParser::PrsBuild() */

bool __thiscall FEAST::CPrsParser::PrsBuild(CPrsParser *this)

{
  CPrsParser CVar1;
  
  CVar1 = this[0x8e440];
  if (CVar1 == (CPrsParser)0x0) {
    FinalizeParser(this,"start");
  }
  return CVar1 == (CPrsParser)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FEAST::CPrsParser::Parse(char*, unsigned long, char*, unsigned long*, unsigned long*,
   FEAST::TDatArray<FEAST::CPrsCSTNode*>&) */

void __thiscall
FEAST::CPrsParser::Parse
          (CPrsParser *this,char *param_1,ulong param_2,char *param_3,ulong *param_4,ulong *param_5,
          TDatArray *param_6)

{
  ulong uVar1;
  ulong *puVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  CPrsCSTNode *pCVar9;
  size_t sVar10;
  bool bVar11;
  ulong uVar12;
  void *extraout_x1;
  void *extraout_x1_00;
  ulong *puVar13;
  void *extraout_x1_01;
  ulong extraout_x1_02;
  void *extraout_x1_03;
  byte bVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  parsePosition_t *this_00;
  parsePosition_t *this_01;
  undefined8 uVar20;
  parsePosition_t *ppVar21;
  long lVar22;
  CPrsParser *pCVar23;
  parsePosition_t *ppVar24;
  long lVar25;
  CPrsCSTNode *local_88;
  ulong local_80;
  char *local_78;
  long local_70;
  long local_68;
  long local_60;
  ulong local_58;
  undefined4 *local_50;
  undefined8 *local_48;
  ulong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28 [2];
  CPrsCSTNode *local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = MakeRule(this,"!start",(bool *)0x0,false);
  if (lVar6 == 0) {
    LIB_Errorf("CPrsParser::Parse: No start rule");
  }
  if (this[0x8e440] == (CPrsParser)0x0) {
    FinalizeParser(this,"start");
  }
  lVar22 = 0;
  Parse(char*,unsigned_long,char*,unsigned_long*,unsigned_long*,FEAST::TDatArray<FEAST::
  CPrsCSTNode*>&)::parsePosition_t::parsePosition_t(unsigned_long,int*,FEAST::CPrsCSTNode**,FEAST::
  CPrsParseStateProd__char__unsigned_long_unsigned_long_
            ((parsePosition_t *)&local_58,0x400,0,0,0,param_1,0,0);
  *local_50 = 0;
  *local_48 = 0;
  local_58 = 1;
  this_01 = (parsePosition_t *)0x0;
LAB_053a04e4:
  (**(code **)(**(long **)(this + 0x8e438) + 0x30))
            (*(long **)(this + 0x8e438),local_38,local_30,local_28[0],param_2);
  lVar7 = (**(code **)(**(long **)(this + 0x8e438) + 0x48))(*(long **)(this + 0x8e438),&local_80,1);
  pcVar8 = (char *)(**(code **)(**(long **)(this + 0x8e438) + 0x50))(*(long **)(this + 0x8e438));
  uVar12 = local_80;
  if (*pcVar8 == '\0') {
    if (lVar7 == 0) {
      lVar7 = MakeRule(this,"!eoi",(bool *)0x0,false);
      uVar12 = *(ulong *)(lVar7 + 0x28);
      local_70 = 5;
      local_78 = "(eoi)";
      local_80 = uVar12;
      lVar7 = RuleForLexTag(this,uVar12);
      if (lVar7 == 0) goto LAB_053a07a0;
LAB_053a0560:
      iVar5 = local_50[local_58 - 1];
      if (local_40 != (ulong *)0x0) goto LAB_053a0578;
LAB_053a07cc:
      lVar25 = (long)iVar5;
      puVar16 = *(ulong **)(this + lVar25 * 0x18 + 0x8010);
      lVar19 = *(long *)(*(long *)(this + lVar25 * 0x18 + 0x8018) + *(long *)(lVar7 + 0x20) * 8);
      bVar4 = lVar19 != 0;
      puVar2 = puVar16;
      puVar15 = local_40;
      ppVar21 = this_01;
      if (puVar16 == (ulong *)0x0) {
LAB_053a0884:
        bVar11 = true;
LAB_053a0888:
        if (bVar11 <= bVar4) {
LAB_053a0a88:
          this_01 = ppVar21;
          if (bVar4) goto LAB_053a0a90;
LAB_053a08e8:
          if (local_40 != (ulong *)0x0) goto LAB_053a0578;
          goto LAB_053a08f0;
        }
        pCVar9 = local_18;
        if (lVar22 != 0) {
          while (pCVar9 != (CPrsCSTNode *)0x0) {
            pCVar9 = *(CPrsCSTNode **)pCVar9;
            FUN_0539d860();
          }
          lVar22 = lVar22 + -1;
          Parse(char*,unsigned_long,char*,unsigned_long*,unsigned_long*,FEAST::TDatArray<FEAST::CPrsCSTNode*>&)
          ::parsePosition_t::operator=((parsePosition_t *)&local_58,ppVar21);
          this_01 = *(parsePosition_t **)(ppVar21 + 0x38);
          Parse(char*,unsigned_long,char*,unsigned_long*,unsigned_long*,FEAST::TDatArray<FEAST::CPrsCSTNode*>&)
          ::parsePosition_t::~parsePosition_t(ppVar21);
          CLexLexer::operator_delete((CLexLexer *)ppVar21,extraout_x1_01);
          goto LAB_053a06c0;
        }
        if (param_3 != (char *)0x0) {
          sprintf(param_3,"Found \"%0.*s\"",local_70,local_78);
          if (*(long *)(this + 0x8008) != 0) {
            pCVar23 = this + 0x18;
            uVar12 = 0;
            lVar6 = 0;
            do {
              if ((*(long *)(*(long *)(this + lVar25 * 0x18 + 0x8018) + uVar12 * 8) != 0) &&
                 (lVar22 = *(long *)pCVar23, lVar22 != 0)) {
                if (lVar6 == 0) {
                  sVar10 = strlen(param_3);
                  sprintf(param_3 + sVar10,", expecting %s",lVar22);
                }
                else {
                  sVar10 = strlen(param_3);
                  sprintf(param_3 + sVar10,", %s",lVar22);
                }
                lVar6 = lVar6 + 1;
              }
              uVar12 = uVar12 + 1;
              pCVar23 = pCVar23 + 0x40;
            } while (uVar12 < *(ulong *)(this + 0x8008));
          }
          if (param_4 != (ulong *)0x0) {
            *param_4 = local_68 + 1;
          }
          if (param_5 != (ulong *)0x0) {
            uVar20 = 0;
            *param_5 = local_60 + 1;
            goto LAB_053a0af8;
          }
        }
        goto LAB_053a0b48;
      }
      do {
        while (puVar13 = puVar2, puVar13[2] == *(ulong *)(puVar13[1] + 0x10)) {
          local_40 = (ulong *)((long)local_40 + 1);
          puVar2 = (ulong *)*puVar13;
          puVar15 = puVar13;
          if ((ulong *)*puVar13 == (ulong *)0x0) goto LAB_053a0830;
        }
        puVar2 = (ulong *)*puVar13;
      } while ((ulong *)*puVar13 != (ulong *)0x0);
LAB_053a0830:
      uVar12 = 0;
      if (puVar15 == (ulong *)0x0) {
        bVar11 = local_40 < (ulong *)0x2;
        local_40 = puVar15;
        if ((bVar11) || (*(long *)(this + 0x8e448) == 0)) goto LAB_053a0884;
        bVar11 = false;
        bVar14 = 0;
        bVar3 = 0;
        if (*puVar16 != 0) goto LAB_053a09dc;
LAB_053a0860:
        bVar11 = (bool)(bVar14 ^ 1);
        ppVar21 = this_01;
        goto LAB_053a0888;
      }
      if (!bVar4) {
        bVar11 = (ulong *)0x1 < local_40;
        local_40 = puVar15;
        if ((bVar11) && (*(long *)(this + 0x8e448) != 0)) {
          bVar11 = false;
          bVar14 = 1;
          goto LAB_053a09d4;
        }
        goto LAB_053a08e8;
      }
      uVar12 = *(ulong *)(this + 0x8e448);
      if (uVar12 != 0) {
        bVar11 = (ulong *)0x1 < local_40;
        local_40 = puVar15;
        if (bVar11) {
          bVar14 = 1;
          uVar17 = *puVar16;
          bVar11 = bVar4;
          while (ppVar21 = this_01, bVar3 = bVar14, uVar17 != 0) {
LAB_053a09dc:
            bVar14 = bVar3;
            uVar12 = puVar16[2];
            this_01 = ppVar21;
            if (uVar12 == *(ulong *)(puVar16[1] + 0x10)) {
              lVar22 = lVar22 + 1;
              this_01 = CLexLexer::operator_new((CLexLexer *)0x50,uVar12);
              Parse(char*,unsigned_long,char*,unsigned_long*,unsigned_long*,FEAST::TDatArray<FEAST::CPrsCSTNode*>&)
              ::parsePosition_t::parsePosition_t(this_01,(parsePosition_t *)&local_58);
              *(parsePosition_t **)(this_01 + 0x38) = ppVar21;
              *(ulong **)(this_01 + 0x18) = puVar16;
              local_18 = (CPrsCSTNode *)0x0;
              uVar12 = extraout_x1_02;
            }
            puVar16 = (ulong *)*puVar16;
            if (puVar16 == (ulong *)0x0) break;
LAB_053a09d4:
            uVar17 = *puVar16;
          }
          if (!bVar11) goto LAB_053a0860;
        }
        lVar22 = lVar22 + 1;
        ppVar21 = CLexLexer::operator_new((CLexLexer *)0x50,uVar12);
        Parse(char*,unsigned_long,char*,unsigned_long*,unsigned_long*,FEAST::TDatArray<FEAST::CPrsCSTNode*>&)
        ::parsePosition_t::parsePosition_t(ppVar21,(parsePosition_t *)&local_58);
        *(ulong **)(ppVar21 + 0x18) = local_40;
        *(parsePosition_t **)(ppVar21 + 0x38) = this_01;
        local_18 = (CPrsCSTNode *)0x0;
        goto LAB_053a0a88;
      }
LAB_053a0a90:
      local_40 = (ulong *)0x0;
      this_01 = ppVar21;
LAB_053a08f0:
      local_38 = (**(code **)(**(long **)(this + 0x8e438) + 0x38))
                           (*(long **)(this + 0x8e438),&local_30,local_28);
      local_10 = local_10 + 1;
      pCVar9 = CPrsCSTNode::operator_new((CPrsCSTNode *)0x58,local_10);
      CPrsCSTNode::CPrsCSTNode(pCVar9);
      local_88 = pCVar9;
      TDatArray<FEAST::CPrsCSTNode*>::AddItem((TDatArray<FEAST::CPrsCSTNode*> *)param_6,&local_88);
      *(ulong *)(local_88 + 0x20) = local_80;
      *(char **)(local_88 + 0x28) = local_78;
      *(CPrsCSTNode **)local_88 = local_18;
      *(long *)(local_88 + 8) = 0;
      *(long *)(local_88 + 0x10) = 0;
      *(long *)(local_88 + 0x18) = 0;
      *(long *)(local_88 + 0x30) = local_70;
      *(long *)(local_88 + 0x38) = local_68;
      *(long *)(local_88 + 0x40) = local_60;
      *(long *)(local_88 + 0x50) = 0;
      *(long *)(local_88 + 0x48) = lVar7;
      local_48[local_58] = local_88;
      local_50[local_58] = (int)(lVar19 - (long)(this + 0x8010) >> 3) * -0x55555555;
      local_58 = local_58 + 1;
      local_18 = local_88;
LAB_053a06c0:
      if ((this_01 != (parsePosition_t *)0x0) && (*(long *)(this + 0x8e448) != 0xffffffff)) {
        ppVar21 = (parsePosition_t *)0x0;
        this_00 = this_01;
        while (local_10 <= (ulong)(*(long *)(this + 0x8e448) + *(long *)(this_00 + 0x48))) {
          ppVar24 = this_00 + 0x38;
          ppVar21 = this_00;
          this_00 = *(parsePosition_t **)ppVar24;
          if (*(parsePosition_t **)ppVar24 == (parsePosition_t *)0x0) goto LAB_053a04e4;
        }
        if (ppVar21 != (parsePosition_t *)0x0) {
          *(undefined8 *)(ppVar21 + 0x38) = 0;
          ppVar21 = this_01;
        }
        do {
          ppVar24 = *(parsePosition_t **)(this_00 + 0x38);
          lVar22 = lVar22 + -1;
          Parse(char*,unsigned_long,char*,unsigned_long*,unsigned_long*,FEAST::TDatArray<FEAST::CPrsCSTNode*>&)
          ::parsePosition_t::~parsePosition_t(this_00);
          CLexLexer::operator_delete((CLexLexer *)this_00,extraout_x1);
          this_00 = ppVar24;
          this_01 = ppVar21;
        } while (ppVar24 != (parsePosition_t *)0x0);
      }
      goto LAB_053a04e4;
    }
    lVar7 = RuleForLexTag(this,local_80);
    if (lVar7 != 0) goto LAB_053a0560;
LAB_053a07a0:
    LIB_Errorf("CPrsParser::Parse: No rule matching terminal tag %d",uVar12);
    iVar5 = local_50[local_58 - 1];
    if (local_40 == (ulong *)0x0) goto LAB_053a07cc;
LAB_053a0578:
    local_58 = local_58 - local_40[2];
    iVar5 = local_50[local_58 - 1];
    if (*(long *)(local_40[1] + 8) != lVar6) {
      uVar12 = *(ulong *)(*(long *)(local_40[1] + 8) + 0x20);
      lVar7 = *(long *)(*(long *)(this + (long)iVar5 * 0x18 + 0x8018) + uVar12 * 8);
      if (lVar7 != 0) {
        pCVar9 = CPrsCSTNode::operator_new((CPrsCSTNode *)0x58,uVar12);
        CPrsCSTNode::CPrsCSTNode(pCVar9);
        local_88 = pCVar9;
        TDatArray<FEAST::CPrsCSTNode*>::AddItem((TDatArray<FEAST::CPrsCSTNode*> *)param_6,&local_88)
        ;
        uVar12 = local_40[1];
        lVar19 = *(long *)(uVar12 + 8);
        uVar18 = local_40[2];
        *(long *)(local_88 + 0x10) = 0;
        *(long *)(local_88 + 8) = 0;
        *(long *)(local_88 + 0x18) = 0;
        *(undefined1 **)(local_88 + 0x28) = &DAT_055923fe;
        *(CPrsCSTNode **)local_88 = local_18;
        *(long *)(local_88 + 0x20) = 0;
        *(long *)(local_88 + 0x30) = 0;
        *(long *)(local_88 + 0x40) = 0;
        *(long *)(local_88 + 0x38) = 0;
        local_18 = local_88;
        *(ulong *)(local_88 + 0x50) = uVar12;
        uVar17 = (local_58 + uVar18) - 1;
        *(long *)(local_88 + 0x48) = lVar19;
        *(undefined8 *)(local_88 + 0x10) = local_48[local_58];
        uVar12 = local_58;
        if (local_58 < uVar17) {
          do {
            *(CPrsCSTNode **)(local_48[uVar12] + 8) = local_88;
            uVar1 = uVar12 + 1;
            *(undefined8 *)(local_48[uVar12] + 0x18) = local_48[uVar1];
            uVar12 = uVar1;
          } while (uVar1 != uVar17);
          uVar12 = (local_58 + uVar18) - 1;
        }
        *(CPrsCSTNode **)(local_48[uVar12] + 8) = local_88;
        *(undefined8 *)(local_48[uVar12] + 0x18) = 0;
        local_48[local_58] = local_88;
        local_50[local_58] = (int)(lVar7 - (long)(this + 0x8010) >> 3) * -0x55555555;
        local_40 = (ulong *)0x0;
        local_58 = local_58 + 1;
        goto LAB_053a06c0;
      }
      if (param_3 != (char *)0x0) {
        sprintf(param_3,"Found \"%0.*s\"",local_70,local_78);
        if (*(long *)(this + 0x8008) != 0) {
          pCVar23 = this + 0x18;
          uVar12 = 0;
          lVar6 = 0;
          do {
            if ((*(long *)(*(long *)(this + (long)iVar5 * 0x18 + 0x8018) + uVar12 * 8) != 0) &&
               (lVar22 = *(long *)pCVar23, lVar22 != 0)) {
              if (lVar6 == 0) {
                sVar10 = strlen(param_3);
                sprintf(param_3 + sVar10,", expecting %s",lVar22);
              }
              else {
                sVar10 = strlen(param_3);
                sprintf(param_3 + sVar10,", %s",lVar22);
              }
              lVar6 = lVar6 + 1;
            }
            uVar12 = uVar12 + 1;
            pCVar23 = pCVar23 + 0x40;
          } while (uVar12 < *(ulong *)(this + 0x8008));
        }
        if (param_4 != (ulong *)0x0) {
          *param_4 = local_68 + 1;
        }
        if (param_5 != (ulong *)0x0) {
          *param_5 = local_60 + 1;
        }
      }
      while (this_01 != (parsePosition_t *)0x0) {
        ppVar21 = *(parsePosition_t **)(this_01 + 0x38);
        Parse(char*,unsigned_long,char*,unsigned_long*,unsigned_long*,FEAST::TDatArray<FEAST::CPrsCSTNode*>&)
        ::parsePosition_t::~parsePosition_t(this_01);
        CLexLexer::operator_delete((CLexLexer *)this_01,extraout_x1_03);
        this_01 = ppVar21;
      }
      goto LAB_053a0b48;
    }
    while (this_01 != (parsePosition_t *)0x0) {
      ppVar21 = *(parsePosition_t **)(this_01 + 0x38);
      Parse(char*,unsigned_long,char*,unsigned_long*,unsigned_long*,FEAST::TDatArray<FEAST::CPrsCSTNode*>&)
      ::parsePosition_t::~parsePosition_t(this_01);
      CLexLexer::operator_delete((CLexLexer *)this_01,extraout_x1_00);
      this_01 = ppVar21;
    }
    FUN_053a01c4(local_48[1]);
    uVar20 = local_48[1];
  }
  else {
    if (param_4 != (ulong *)0x0) {
      *param_4 = local_68 + 1;
    }
    if (param_5 != (ulong *)0x0) {
      *param_5 = local_60 + 1;
    }
    if (param_3 == (char *)0x0) {
LAB_053a0b48:
      uVar20 = 0;
    }
    else {
      uVar20 = 0;
      pcVar8 = (char *)(**(code **)(**(long **)(this + 0x8e438) + 0x50))(*(long **)(this + 0x8e438))
      ;
      strcpy(param_3,pcVar8);
    }
  }
LAB_053a0af8:
  Parse(char*,unsigned_long,char*,unsigned_long*,unsigned_long*,FEAST::TDatArray<FEAST::CPrsCSTNode*>&)
  ::parsePosition_t::~parsePosition_t((parsePosition_t *)&local_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FEAST::CPrsParser::PrsExecute(char const*, unsigned long) */

void __thiscall FEAST::CPrsParser::PrsExecute(CPrsParser *this,char *param_1,ulong param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_28;
  undefined8 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TDatArray<FEAST::CPrsCSTNode*>::TDatArray((TDatArray<FEAST::CPrsCSTNode*> *)&local_28,0);
  puVar2 = (undefined8 *)
           Parse(this,param_1,param_2,(char *)(this + 0x8e028),(ulong *)(this + 0x8e428),
                 (ulong *)(this + 0x8e430),(TDatArray *)&local_28);
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0539d660(*puVar2);
  }
  uVar6 = 0;
  while( true ) {
    uVar7 = uVar6 & 0xffffffff;
    uVar5 = FUN_0539d914(local_20);
    bVar1 = uVar5 <= uVar6;
    uVar6 = uVar6 + 1;
    if (bVar1) break;
    plVar4 = (long *)FUN_0539d918(local_28,uVar7);
    *(undefined8 *)(*plVar4 + 0x10) = 0;
    CPrsCSTNode::NodeDestroy((CPrsCSTNode *)*plVar4);
  }
  TDatArray<FEAST::CPrsCSTNode*>::~TDatArray((TDatArray<FEAST::CPrsCSTNode*> *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

