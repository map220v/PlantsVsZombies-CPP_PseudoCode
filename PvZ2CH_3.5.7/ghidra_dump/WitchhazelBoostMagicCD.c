// Class: WitchhazelBoostMagicCD


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WitchhazelBoostMagicCD::StaticClassInit() */

void WitchhazelBoostMagicCD::StaticClassInit(void)

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
    std::string::string(asStack_10,"WitchhazelBoostMagicCD");
    (*pcVar2)(plVar1,asStack_10,FUN_043aff50,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WitchhazelBoostMagicCD::StaticGetClass() */

long * WitchhazelBoostMagicCD::StaticGetClass(void)

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
  uVar2 = PlantNewAvatar::StaticGetClass();
  (*pcVar3)(plVar1,"WitchhazelBoostMagicCD",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WitchhazelBoostMagicCD::GetClass() const */

long * WitchhazelBoostMagicCD::GetClass(void)

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
  uVar2 = PlantNewAvatar::StaticGetClass();
  (*pcVar3)(plVar1,"WitchhazelBoostMagicCD",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WitchhazelBoostMagicCD::WitchhazelBoostMagicCD() */

void __thiscall WitchhazelBoostMagicCD::WitchhazelBoostMagicCD(WitchhazelBoostMagicCD *this)

{
  PlantNewAvatar::PlantNewAvatar((PlantNewAvatar *)this);
  *(undefined ***)this = &PTR_GetClass_06841550;
  *(undefined4 *)(this + 100) = 0x3e4ccccd;
  return;
}


/* WitchhazelBoostMagicCD::StaticNew() */

WitchhazelBoostMagicCD * WitchhazelBoostMagicCD::StaticNew(void)

{
  WitchhazelBoostMagicCD *this;
  
  this = ::operator_new(0x68);
  WitchhazelBoostMagicCD(this);
  return this;
}


/* WitchhazelBoostMagicCD::~WitchhazelBoostMagicCD() */

void __thiscall WitchhazelBoostMagicCD::~WitchhazelBoostMagicCD(WitchhazelBoostMagicCD *this)

{
  *(undefined ***)this = &PTR_GetClass_06841550;
  PlantNewAvatar::~PlantNewAvatar((PlantNewAvatar *)this);
  return;
}


/* WitchhazelBoostMagicCD::~WitchhazelBoostMagicCD() */

void __thiscall WitchhazelBoostMagicCD::~WitchhazelBoostMagicCD(WitchhazelBoostMagicCD *this)

{
  ~WitchhazelBoostMagicCD(this);
  AK::FreeHook(this);
  return;
}

