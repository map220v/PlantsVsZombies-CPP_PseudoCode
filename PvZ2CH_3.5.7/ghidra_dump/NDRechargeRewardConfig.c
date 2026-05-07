// Class: NDRechargeRewardConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NDRechargeRewardConfig::StaticClassInit() */

void NDRechargeRewardConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"NDRechargeRewardConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_0397c5ac,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NDRechargeRewardConfig::StaticGetClass() */

long * NDRechargeRewardConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NDRechargeRewardConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NDRechargeRewardConfig::GetClass() const */

long * NDRechargeRewardConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"NDRechargeRewardConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NDRechargeRewardConfig::NDRechargeRewardConfig() */

void __thiscall NDRechargeRewardConfig::NDRechargeRewardConfig(NDRechargeRewardConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_GetClass_066da070;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NDRechargeRewardConfig::StaticNew() */

NDRechargeRewardConfig * NDRechargeRewardConfig::StaticNew(void)

{
  NDRechargeRewardConfig *this;
  
  this = ::operator_new(0x30);
  NDRechargeRewardConfig(this);
  return this;
}


/* NDRechargeRewardConfig::~NDRechargeRewardConfig() */

void __thiscall NDRechargeRewardConfig::~NDRechargeRewardConfig(NDRechargeRewardConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_066da070;
  std::vector<RechargeRewardData,std::allocator<RechargeRewardData>>::~vector
            ((vector<RechargeRewardData,std::allocator<RechargeRewardData>> *)(this + 0x18));
  nop();
  return;
}


/* NDRechargeRewardConfig::~NDRechargeRewardConfig() */

void __thiscall NDRechargeRewardConfig::~NDRechargeRewardConfig(NDRechargeRewardConfig *this)

{
  ~NDRechargeRewardConfig(this);
  AK::FreeHook(this);
  return;
}

