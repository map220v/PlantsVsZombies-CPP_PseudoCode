// Class: UnifiedCardRule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnifiedCardRule::StaticClassInit() */

void UnifiedCardRule::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"UnifiedCardRule");
    (*pcVar2)(plVar1,asStack_10,FUN_0360ba74,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnifiedCardRule::StaticGetClass() */

long * UnifiedCardRule::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = CardRule::StaticGetClass();
  (*pcVar3)(plVar1,"UnifiedCardRule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnifiedCardRule::UnifiedCardRule() */

void __thiscall UnifiedCardRule::UnifiedCardRule(UnifiedCardRule *this)

{
  CardRule::CardRule((CardRule *)this);
  *(undefined ***)this = &PTR_GetCardRuleClass_066674e0;
  return;
}


/* UnifiedCardRule::StaticNew() */

UnifiedCardRule * UnifiedCardRule::StaticNew(void)

{
  UnifiedCardRule *this;
  
  this = ::operator_new(0x20);
  UnifiedCardRule(this);
  return this;
}


/* UnifiedCardRule::~UnifiedCardRule() */

void __thiscall UnifiedCardRule::~UnifiedCardRule(UnifiedCardRule *this)

{
  *(undefined ***)this = &PTR_GetCardRuleClass_066674e0;
  CardRule::~CardRule((CardRule *)this);
  return;
}


/* UnifiedCardRule::~UnifiedCardRule() */

void __thiscall UnifiedCardRule::~UnifiedCardRule(UnifiedCardRule *this)

{
  ~UnifiedCardRule(this);
  AK::FreeHook(this);
  return;
}


/* UnifiedCardRule::IsRulePass() */

bool __thiscall UnifiedCardRule::IsRulePass(UnifiedCardRule *this)

{
  int iVar1;
  int iVar2;
  RtObject *this_00;
  UnifiedCardRuleProperty *pUVar3;
  long lVar4;
  
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18))
  ;
  pUVar3 = Sexy::RtObject::Cast<UnifiedCardRuleProperty>(this_00);
  lVar4 = Sexy::LazySingleton<CardBoardMgr>::GetInstance();
  iVar2 = FUN_0360b260(*(undefined4 *)(lVar4 + 8));
  iVar1 = *(int *)(pUVar3 + 8);
  Sexy::OutputDebugStrF((wchar_t *)"CardLog : UnifiedCardRule Check Rule Pass");
  return iVar1 <= iVar2;
}

