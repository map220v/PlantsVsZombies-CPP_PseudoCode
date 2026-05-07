// Class: PowerupBeghouledShuffle


/* PowerupBeghouledShuffle::onSelected() */

void __thiscall PowerupBeghouledShuffle::onSelected(PowerupBeghouledShuffle *this)

{
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  BasePowerup::Activate((BasePowerup *)this);
  return;
}


/* PowerupBeghouledShuffle::PowerupBeghouledShuffle() */

void __thiscall PowerupBeghouledShuffle::PowerupBeghouledShuffle(PowerupBeghouledShuffle *this)

{
  BasePowerup::BasePowerup((BasePowerup *)this);
  *(undefined ***)this = &PTR_GetClass_06919d80;
  return;
}


/* PowerupBeghouledShuffle::StaticNew() */

PowerupBeghouledShuffle * PowerupBeghouledShuffle::StaticNew(void)

{
  PowerupBeghouledShuffle *this;
  
  this = ::operator_new(200);
  PowerupBeghouledShuffle(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupBeghouledShuffle::StaticClassInit() */

void PowerupBeghouledShuffle::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerupBeghouledShuffle");
    (*pcVar2)(plVar1,asStack_10,FUN_04993930,200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupBeghouledShuffle::StaticGetClass() */

long * PowerupBeghouledShuffle::StaticGetClass(void)

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
  uVar2 = BasePowerup::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupBeghouledShuffle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupBeghouledShuffle::GetClass() const */

long * PowerupBeghouledShuffle::GetClass(void)

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
  uVar2 = BasePowerup::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupBeghouledShuffle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupBeghouledShuffle::~PowerupBeghouledShuffle() */

void __thiscall PowerupBeghouledShuffle::~PowerupBeghouledShuffle(PowerupBeghouledShuffle *this)

{
  *(undefined ***)this = &PTR_GetClass_06919d80;
  BasePowerup::~BasePowerup((BasePowerup *)this);
  return;
}


/* PowerupBeghouledShuffle::~PowerupBeghouledShuffle() */

void __thiscall PowerupBeghouledShuffle::~PowerupBeghouledShuffle(PowerupBeghouledShuffle *this)

{
  ~PowerupBeghouledShuffle(this);
  AK::FreeHook(this);
  return;
}

