// Class: WaveActionToxicWaterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionToxicWaterProps::StaticClassInit() */

void WaveActionToxicWaterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaveActionToxicWaterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ca88e4,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveActionToxicWaterProps::StaticGetClass() */

long * WaveActionToxicWaterProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WaveActionToxicWaterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionToxicWaterProps::GetClass() const */

long * WaveActionToxicWaterProps::GetClass(void)

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
  (*pcVar3)(plVar1,"WaveActionToxicWaterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionToxicWaterProps::GetActionClass() const */

long * WaveActionToxicWaterProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WaveActionToxicWater::sClass != (long *)0x0) {
    return WaveActionToxicWater::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WaveActionToxicWater::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"WaveActionToxicWater",uVar2,WaveActionToxicWater::StaticNew);
  WaveActionToxicWater::StaticClassInit();
  return WaveActionToxicWater::sClass;
}


/* WaveActionToxicWaterProps::WaveActionToxicWaterProps() */

void __thiscall
WaveActionToxicWaterProps::WaveActionToxicWaterProps(WaveActionToxicWaterProps *this)

{
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined4 *)(this + 0x40) = 9;
  *(undefined4 *)(this + 0x44) = 1;
  *(undefined ***)this = &PTR_GetClass_069980b0;
  *(undefined4 *)(this + 0x48) = 1;
  *(undefined4 *)(this + 0x4c) = 1;
  *(undefined4 *)(this + 0x54) = 2;
  *(undefined4 *)(this + 0x50) = 0x3f800000;
  return;
}


/* WaveActionToxicWaterProps::StaticNew() */

WaveActionToxicWaterProps * WaveActionToxicWaterProps::StaticNew(void)

{
  WaveActionToxicWaterProps *this;
  
  this = ::operator_new(0x58);
  WaveActionToxicWaterProps(this);
  return this;
}


/* WaveActionToxicWaterProps::~WaveActionToxicWaterProps() */

void __thiscall
WaveActionToxicWaterProps::~WaveActionToxicWaterProps(WaveActionToxicWaterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069980b0;
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* WaveActionToxicWaterProps::~WaveActionToxicWaterProps() */

void __thiscall
WaveActionToxicWaterProps::~WaveActionToxicWaterProps(WaveActionToxicWaterProps *this)

{
  ~WaveActionToxicWaterProps(this);
  AK::FreeHook(this);
  return;
}

