// Class: GeilivableLotteryConfig


/* GeilivableLotteryConfig::GeilivableLotteryConfig() */

void __thiscall GeilivableLotteryConfig::GeilivableLotteryConfig(GeilivableLotteryConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR_GetClass_06979e20;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  TGAScrollbannerData::TGAScrollbannerData((TGAScrollbannerData *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* GeilivableLotteryConfig::~GeilivableLotteryConfig() */

void __thiscall GeilivableLotteryConfig::~GeilivableLotteryConfig(GeilivableLotteryConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_06979e20;
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x38));
  Sexy::PACommand::~PACommand((PACommand *)(this + 0x28));
  nop();
  return;
}


/* GeilivableLotteryConfig::~GeilivableLotteryConfig() */

void __thiscall GeilivableLotteryConfig::~GeilivableLotteryConfig(GeilivableLotteryConfig *this)

{
  ~GeilivableLotteryConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeilivableLotteryConfig::StaticClassInit() */

void GeilivableLotteryConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeilivableLotteryConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_04bc0718,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeilivableLotteryConfig::StaticGetClass() */

long * GeilivableLotteryConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeilivableLotteryConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeilivableLotteryConfig::GetClass() const */

long * GeilivableLotteryConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"GeilivableLotteryConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeilivableLotteryConfig::StaticNew() */

GeilivableLotteryConfig * GeilivableLotteryConfig::StaticNew(void)

{
  GeilivableLotteryConfig *this;
  
  this = ::operator_new(0x50);
  GeilivableLotteryConfig(this);
  return this;
}

