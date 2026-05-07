// Class: LimitLotteryConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryConfig::StaticClassInit() */

void LimitLotteryConfig::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LotteryBonus");
    (*pcVar3)(plVar2,asStack_10,FUN_03989324,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LimitLotteryConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_03992ccc,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitLotteryConfig::StaticGetClass() */

long * LimitLotteryConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LimitLotteryConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LimitLotteryConfig::GetClass() const */

long * LimitLotteryConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"LimitLotteryConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LimitLotteryConfig::LimitLotteryConfig() */

void __thiscall LimitLotteryConfig::LimitLotteryConfig(LimitLotteryConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066dff40;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  return;
}


/* LimitLotteryConfig::StaticNew() */

LimitLotteryConfig * LimitLotteryConfig::StaticNew(void)

{
  LimitLotteryConfig *this;
  
  this = ::operator_new(0x78);
  LimitLotteryConfig(this);
  return this;
}


/* LimitLotteryConfig::~LimitLotteryConfig() */

void __thiscall LimitLotteryConfig::~LimitLotteryConfig(LimitLotteryConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_066dff40;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x50));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x38));
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x20));
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 8));
  nop();
  return;
}


/* LimitLotteryConfig::~LimitLotteryConfig() */

void __thiscall LimitLotteryConfig::~LimitLotteryConfig(LimitLotteryConfig *this)

{
  ~LimitLotteryConfig(this);
  AK::FreeHook(this);
  return;
}

