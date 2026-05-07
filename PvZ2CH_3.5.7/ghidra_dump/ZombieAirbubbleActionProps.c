// Class: ZombieAirbubbleActionProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubbleActionProps::StaticClassInit() */

void ZombieAirbubbleActionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAirbubbleActionProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04a716c0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAirbubbleActionProps::StaticGetClass() */

long * ZombieAirbubbleActionProps::StaticGetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAirbubbleActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAirbubbleActionProps::GetClass() const */

long * ZombieAirbubbleActionProps::GetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAirbubbleActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAirbubbleActionProps::GetActionClass() const */

long * ZombieAirbubbleActionProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombieAirbubbleAction::sClass != (long *)0x0) {
    return ZombieAirbubbleAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombieAirbubbleAction::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAirbubbleAction",uVar2,ZombieAirbubbleAction::StaticNew);
  ZombieAirbubbleAction::StaticClassInit();
  return ZombieAirbubbleAction::sClass;
}


/* ZombieAirbubbleActionProps::ZombieAirbubbleActionProps() */

void __thiscall
ZombieAirbubbleActionProps::ZombieAirbubbleActionProps(ZombieAirbubbleActionProps *this)

{
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06939c30;
  return;
}


/* ZombieAirbubbleActionProps::StaticNew() */

ZombieAirbubbleActionProps * ZombieAirbubbleActionProps::StaticNew(void)

{
  ZombieAirbubbleActionProps *this;
  
  this = ::operator_new(0x50);
  ZombieAirbubbleActionProps(this);
  return this;
}


/* ZombieAirbubbleActionProps::~ZombieAirbubbleActionProps() */

void __thiscall
ZombieAirbubbleActionProps::~ZombieAirbubbleActionProps(ZombieAirbubbleActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06939c30;
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* ZombieAirbubbleActionProps::~ZombieAirbubbleActionProps() */

void __thiscall
ZombieAirbubbleActionProps::~ZombieAirbubbleActionProps(ZombieAirbubbleActionProps *this)

{
  ~ZombieAirbubbleActionProps(this);
  AK::FreeHook(this);
  return;
}

