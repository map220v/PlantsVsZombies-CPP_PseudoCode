// Class: FairyTaleFogWaveActionProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleFogWaveActionProps::StaticClassInit() */

void FairyTaleFogWaveActionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"FairyTaleFogWaveActionProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ecd108,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FairyTaleFogWaveActionProps::StaticGetClass() */

long * FairyTaleFogWaveActionProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FairyTaleFogWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FairyTaleFogWaveActionProps::GetClass() const */

long * FairyTaleFogWaveActionProps::GetClass(void)

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
  (*pcVar3)(plVar1,"FairyTaleFogWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FairyTaleFogWaveActionProps::GetActionClass() const */

long * FairyTaleFogWaveActionProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (FairyTaleFogWaveAction::sClass != (long *)0x0) {
    return FairyTaleFogWaveAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  FairyTaleFogWaveAction::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"FairyTaleFogWaveAction",uVar2,FairyTaleFogWaveAction::StaticNew);
  FairyTaleFogWaveAction::StaticClassInit();
  return FairyTaleFogWaveAction::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleFogWaveActionProps::FairyTaleFogWaveActionProps() */

void __thiscall
FairyTaleFogWaveActionProps::FairyTaleFogWaveActionProps(FairyTaleFogWaveActionProps *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069f7740;
  Sexy::Insets::Insets((Insets *)(this + 0x40));
  *(undefined4 *)(this + 0x50) = 6;
  *(undefined4 *)(this + 0x54) = 0;
  std::string::string((string *)(this + 0x58),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FairyTaleFogWaveActionProps::StaticNew() */

FairyTaleFogWaveActionProps * FairyTaleFogWaveActionProps::StaticNew(void)

{
  FairyTaleFogWaveActionProps *this;
  
  this = ::operator_new(0x60);
  FairyTaleFogWaveActionProps(this);
  return this;
}


/* FairyTaleFogWaveActionProps::~FairyTaleFogWaveActionProps() */

void __thiscall
FairyTaleFogWaveActionProps::~FairyTaleFogWaveActionProps(FairyTaleFogWaveActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069f7740;
  std::string::~string((string *)(this + 0x58));
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* FairyTaleFogWaveActionProps::~FairyTaleFogWaveActionProps() */

void __thiscall
FairyTaleFogWaveActionProps::~FairyTaleFogWaveActionProps(FairyTaleFogWaveActionProps *this)

{
  ~FairyTaleFogWaveActionProps(this);
  AK::FreeHook(this);
  return;
}

