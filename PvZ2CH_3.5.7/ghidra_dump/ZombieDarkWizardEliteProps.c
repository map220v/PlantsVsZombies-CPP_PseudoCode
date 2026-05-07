// Class: ZombieDarkWizardEliteProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkWizardEliteProps::StaticClassInit() */

void ZombieDarkWizardEliteProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieDarkWizardEliteProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04664228,0x278,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDarkWizardEliteProps::StaticGetClass() */

long * ZombieDarkWizardEliteProps::StaticGetClass(void)

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
  uVar2 = ZombieDarkWizardProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDarkWizardEliteProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDarkWizardEliteProps::GetClass() const */

long * ZombieDarkWizardEliteProps::GetClass(void)

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
  uVar2 = ZombieDarkWizardProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDarkWizardEliteProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDarkWizardEliteProps::ZombieDarkWizardEliteProps() */

void __thiscall
ZombieDarkWizardEliteProps::ZombieDarkWizardEliteProps(ZombieDarkWizardEliteProps *this)

{
  ZombieDarkWizardProps::ZombieDarkWizardProps((ZombieDarkWizardProps *)this);
  *(undefined ***)this = &PTR_GetClass_06890520;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x268));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x270));
  return;
}


/* ZombieDarkWizardEliteProps::StaticNew() */

ZombieDarkWizardEliteProps * ZombieDarkWizardEliteProps::StaticNew(void)

{
  ZombieDarkWizardEliteProps *this;
  
  this = ::operator_new(0x278);
  ZombieDarkWizardEliteProps(this);
  return this;
}


/* ZombieDarkWizardEliteProps::~ZombieDarkWizardEliteProps() */

void __thiscall
ZombieDarkWizardEliteProps::~ZombieDarkWizardEliteProps(ZombieDarkWizardEliteProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06890520;
  ZombieDarkWizardProps::~ZombieDarkWizardProps((ZombieDarkWizardProps *)this);
  return;
}


/* ZombieDarkWizardEliteProps::~ZombieDarkWizardEliteProps() */

void __thiscall
ZombieDarkWizardEliteProps::~ZombieDarkWizardEliteProps(ZombieDarkWizardEliteProps *this)

{
  ~ZombieDarkWizardEliteProps(this);
  AK::FreeHook(this);
  return;
}

