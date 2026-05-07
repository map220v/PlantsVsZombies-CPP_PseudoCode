// Class: StoneLotteryConfig


/* StoneLotteryConfig::StoneLotteryConfig() */

void __thiscall StoneLotteryConfig::StoneLotteryConfig(StoneLotteryConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR_GetClass_066c61a0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x18] = (StoneLotteryConfig)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


/* StoneLotteryConfig::~StoneLotteryConfig() */

void __thiscall StoneLotteryConfig::~StoneLotteryConfig(StoneLotteryConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_066c61a0;
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x20));
  nop();
  return;
}


/* StoneLotteryConfig::~StoneLotteryConfig() */

void __thiscall StoneLotteryConfig::~StoneLotteryConfig(StoneLotteryConfig *this)

{
  ~StoneLotteryConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLotteryConfig::StaticClassInit() */

void StoneLotteryConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"StoneLotteryConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_0391b5f0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StoneLotteryConfig::StaticGetClass() */

long * StoneLotteryConfig::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"StoneLotteryConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StoneLotteryConfig::GetClass() const */

long * StoneLotteryConfig::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"StoneLotteryConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StoneLotteryConfig::StaticNew() */

StoneLotteryConfig * StoneLotteryConfig::StaticNew(void)

{
  StoneLotteryConfig *this;
  
  this = ::operator_new(0x40);
  StoneLotteryConfig(this);
  return this;
}

