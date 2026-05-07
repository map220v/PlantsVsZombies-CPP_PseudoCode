// Class: PowerupTypeBeghouledShuffle


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTypeBeghouledShuffle::StaticClassInit() */

void PowerupTypeBeghouledShuffle::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerupTypeBeghouledShuffle");
    (*pcVar2)(plVar1,asStack_10,FUN_04993b44,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupTypeBeghouledShuffle::StaticGetClass() */

long * PowerupTypeBeghouledShuffle::StaticGetClass(void)

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
  uVar2 = PowerupType::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupTypeBeghouledShuffle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupTypeBeghouledShuffle::GetClass() const */

long * PowerupTypeBeghouledShuffle::GetClass(void)

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
  uVar2 = PowerupType::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupTypeBeghouledShuffle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupTypeBeghouledShuffle::PowerupTypeBeghouledShuffle() */

void __thiscall
PowerupTypeBeghouledShuffle::PowerupTypeBeghouledShuffle(PowerupTypeBeghouledShuffle *this)

{
  PowerupType::PowerupType((PowerupType *)this);
  *(undefined ***)this = &PTR_GetClass_06919e60;
  return;
}


/* PowerupTypeBeghouledShuffle::StaticNew() */

PowerupTypeBeghouledShuffle * PowerupTypeBeghouledShuffle::StaticNew(void)

{
  PowerupTypeBeghouledShuffle *this;
  
  this = ::operator_new(0x78);
  PowerupTypeBeghouledShuffle(this);
  return this;
}


/* PowerupTypeBeghouledShuffle::~PowerupTypeBeghouledShuffle() */

void __thiscall
PowerupTypeBeghouledShuffle::~PowerupTypeBeghouledShuffle(PowerupTypeBeghouledShuffle *this)

{
  *(undefined ***)this = &PTR_GetClass_06919e60;
  PowerupType::~PowerupType((PowerupType *)this);
  return;
}


/* PowerupTypeBeghouledShuffle::~PowerupTypeBeghouledShuffle() */

void __thiscall
PowerupTypeBeghouledShuffle::~PowerupTypeBeghouledShuffle(PowerupTypeBeghouledShuffle *this)

{
  ~PowerupTypeBeghouledShuffle(this);
  AK::FreeHook(this);
  return;
}

