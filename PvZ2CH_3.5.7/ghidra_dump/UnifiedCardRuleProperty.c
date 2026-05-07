// Class: UnifiedCardRuleProperty


/* UnifiedCardRuleProperty::~UnifiedCardRuleProperty() */

void __thiscall UnifiedCardRuleProperty::~UnifiedCardRuleProperty(UnifiedCardRuleProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_06667480;
  CardRuleProperty::~CardRuleProperty((CardRuleProperty *)this);
  return;
}


/* UnifiedCardRuleProperty::~UnifiedCardRuleProperty() */

void __thiscall UnifiedCardRuleProperty::~UnifiedCardRuleProperty(UnifiedCardRuleProperty *this)

{
  ~UnifiedCardRuleProperty(this);
  AK::FreeHook(this);
  return;
}


/* UnifiedCardRuleProperty::UnifiedCardRuleProperty() */

void __thiscall UnifiedCardRuleProperty::UnifiedCardRuleProperty(UnifiedCardRuleProperty *this)

{
  CardRuleProperty::CardRuleProperty((CardRuleProperty *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_GetClass_06667480;
  return;
}


/* UnifiedCardRuleProperty::StaticNew() */

UnifiedCardRuleProperty * UnifiedCardRuleProperty::StaticNew(void)

{
  UnifiedCardRuleProperty *this;
  
  this = ::operator_new(0x10);
  UnifiedCardRuleProperty(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnifiedCardRuleProperty::StaticClassInit() */

void UnifiedCardRuleProperty::StaticClassInit(void)

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
    std::string::string(asStack_10,"UnifiedCardRuleProperty");
    (*pcVar2)(plVar1,asStack_10,FUN_0360b7e0,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnifiedCardRuleProperty::StaticGetClass() */

long * UnifiedCardRuleProperty::StaticGetClass(void)

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
  uVar2 = CardRuleProperty::StaticGetClass();
  (*pcVar3)(plVar1,"UnifiedCardRuleProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnifiedCardRuleProperty::GetClass() const */

long * UnifiedCardRuleProperty::GetClass(void)

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
  uVar2 = CardRuleProperty::StaticGetClass();
  (*pcVar3)(plVar1,"UnifiedCardRuleProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnifiedCardRuleProperty::GetCardRuleClass() const */

long * UnifiedCardRuleProperty::GetCardRuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (UnifiedCardRule::sClass != (long *)0x0) {
    return UnifiedCardRule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  UnifiedCardRule::sClass = plVar1;
  uVar2 = CardRule::StaticGetClass();
  (*pcVar3)(plVar1,"UnifiedCardRule",uVar2,UnifiedCardRule::StaticNew);
  UnifiedCardRule::StaticClassInit();
  return UnifiedCardRule::sClass;
}

