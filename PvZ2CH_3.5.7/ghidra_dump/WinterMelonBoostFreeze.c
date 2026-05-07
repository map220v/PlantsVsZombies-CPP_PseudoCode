// Class: WinterMelonBoostFreeze


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WinterMelonBoostFreeze::StaticClassInit() */

void WinterMelonBoostFreeze::StaticClassInit(void)

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
    std::string::string(asStack_10,"WinterMelonBoostFreeze");
    (*pcVar2)(plVar1,asStack_10,FUN_043af794,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WinterMelonBoostFreeze::StaticGetClass() */

long * WinterMelonBoostFreeze::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WinterMelonBoostFreeze",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WinterMelonBoostFreeze::GetClass() const */

long * WinterMelonBoostFreeze::GetClass(void)

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
  (*pcVar3)(plVar1,"WinterMelonBoostFreeze",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WinterMelonBoostFreeze::WinterMelonBoostFreeze() */

void __thiscall WinterMelonBoostFreeze::WinterMelonBoostFreeze(WinterMelonBoostFreeze *this)

{
  undefined4 uVar1;
  
  PlantNewAvatar::PlantNewAvatar((PlantNewAvatar *)this);
  uVar1 = _FUN_043b0908;
  *(undefined ***)this = &PTR_GetClass_068413a0;
  *(undefined4 *)(this + 100) = uVar1;
  return;
}


/* WinterMelonBoostFreeze::StaticNew() */

WinterMelonBoostFreeze * WinterMelonBoostFreeze::StaticNew(void)

{
  WinterMelonBoostFreeze *this;
  
  this = ::operator_new(0x68);
  WinterMelonBoostFreeze(this);
  return this;
}


/* WinterMelonBoostFreeze::~WinterMelonBoostFreeze() */

void __thiscall WinterMelonBoostFreeze::~WinterMelonBoostFreeze(WinterMelonBoostFreeze *this)

{
  *(undefined ***)this = &PTR_GetClass_068413a0;
  PlantNewAvatar::~PlantNewAvatar((PlantNewAvatar *)this);
  return;
}


/* WinterMelonBoostFreeze::~WinterMelonBoostFreeze() */

void __thiscall WinterMelonBoostFreeze::~WinterMelonBoostFreeze(WinterMelonBoostFreeze *this)

{
  ~WinterMelonBoostFreeze(this);
  AK::FreeHook(this);
  return;
}

