// Class: BlackHoleWaveActionProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlackHoleWaveActionProps::StaticClassInit() */

void BlackHoleWaveActionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BlackHoleWaveActionProps");
    (*pcVar2)(plVar1,asStack_10,FUN_033b2244,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BlackHoleWaveActionProps::StaticGetClass() */

long * BlackHoleWaveActionProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BlackHoleWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BlackHoleWaveActionProps::GetClass() const */

long * BlackHoleWaveActionProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BlackHoleWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BlackHoleWaveActionProps::GetActionClass() const */

long * BlackHoleWaveActionProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BlackHoleWaveAction::sClass != (long *)0x0) {
    return BlackHoleWaveAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BlackHoleWaveAction::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"BlackHoleWaveAction",uVar2,BlackHoleWaveAction::StaticNew);
  BlackHoleWaveAction::StaticClassInit();
  return BlackHoleWaveAction::sClass;
}


/* BlackHoleWaveActionProps::BlackHoleWaveActionProps() */

void __thiscall BlackHoleWaveActionProps::BlackHoleWaveActionProps(BlackHoleWaveActionProps *this)

{
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_06615320;
  return;
}


/* BlackHoleWaveActionProps::StaticNew() */

BlackHoleWaveActionProps * BlackHoleWaveActionProps::StaticNew(void)

{
  BlackHoleWaveActionProps *this;
  
  this = ::operator_new(0x48);
  BlackHoleWaveActionProps(this);
  return this;
}


/* BlackHoleWaveActionProps::~BlackHoleWaveActionProps() */

void __thiscall BlackHoleWaveActionProps::~BlackHoleWaveActionProps(BlackHoleWaveActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06615320;
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* BlackHoleWaveActionProps::~BlackHoleWaveActionProps() */

void __thiscall BlackHoleWaveActionProps::~BlackHoleWaveActionProps(BlackHoleWaveActionProps *this)

{
  ~BlackHoleWaveActionProps(this);
  AK::FreeHook(this);
  return;
}

