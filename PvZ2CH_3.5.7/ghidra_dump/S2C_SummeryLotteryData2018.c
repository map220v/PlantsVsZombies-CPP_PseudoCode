// Class: S2C_SummeryLotteryData2018


/* S2C_SummeryLotteryData2018::S2C_SummeryLotteryData2018(S2C_SummeryLotteryData2018 const&) */

void __thiscall
S2C_SummeryLotteryData2018::S2C_SummeryLotteryData2018
          (S2C_SummeryLotteryData2018 *this,S2C_SummeryLotteryData2018 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_0660ca60;
  *(undefined ***)(this + 8) = &PTR__S2C_SummeryLotteryData2018_0660cac8;
  std::vector<VacationMaterialItem,std::allocator<VacationMaterialItem>>::vector
            ((vector<VacationMaterialItem,std::allocator<VacationMaterialItem>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<VacationMaterialItem,std::allocator<VacationMaterialItem>>::vector
            ((vector<VacationMaterialItem,std::allocator<VacationMaterialItem>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x48) = uVar1;
  *(undefined4 *)(this + 0x4c) = uVar2;
  return;
}


/* S2C_SummeryLotteryData2018::~S2C_SummeryLotteryData2018() */

void __thiscall
S2C_SummeryLotteryData2018::~S2C_SummeryLotteryData2018(S2C_SummeryLotteryData2018 *this)

{
  *(undefined ***)this = &PTR_GetClass_0660ca60;
  *(undefined ***)(this + 8) = &PTR__S2C_SummeryLotteryData2018_0660cac8;
  std::vector<VacationMaterialItem,std::allocator<VacationMaterialItem>>::~vector
            ((vector<VacationMaterialItem,std::allocator<VacationMaterialItem>> *)(this + 0x30));
  std::vector<VacationMaterialItem,std::allocator<VacationMaterialItem>>::~vector
            ((vector<VacationMaterialItem,std::allocator<VacationMaterialItem>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_SummeryLotteryData2018::~S2C_SummeryLotteryData2018() */

void __thiscall
S2C_SummeryLotteryData2018::~S2C_SummeryLotteryData2018(S2C_SummeryLotteryData2018 *this)

{
  ~S2C_SummeryLotteryData2018(this + -8);
  return;
}


/* S2C_SummeryLotteryData2018::~S2C_SummeryLotteryData2018() */

void __thiscall
S2C_SummeryLotteryData2018::~S2C_SummeryLotteryData2018(S2C_SummeryLotteryData2018 *this)

{
  ~S2C_SummeryLotteryData2018(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_SummeryLotteryData2018::~S2C_SummeryLotteryData2018() */

void __thiscall
S2C_SummeryLotteryData2018::~S2C_SummeryLotteryData2018(S2C_SummeryLotteryData2018 *this)

{
  ~S2C_SummeryLotteryData2018(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_SummeryLotteryData2018::StaticClassInit() */

void S2C_SummeryLotteryData2018::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_SummeryLotteryData2018");
    (*pcVar2)(plVar1,asStack_10,FUN_03229500,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_SummeryLotteryData2018::StaticGetClass() */

long * S2C_SummeryLotteryData2018::StaticGetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"S2C_SummeryLotteryData2018",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_SummeryLotteryData2018::GetClass() const */

long * S2C_SummeryLotteryData2018::GetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"S2C_SummeryLotteryData2018",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_SummeryLotteryData2018::S2C_SummeryLotteryData2018() */

void __thiscall
S2C_SummeryLotteryData2018::S2C_SummeryLotteryData2018(S2C_SummeryLotteryData2018 *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660ca60;
  *(undefined ***)(this + 8) = &PTR__S2C_SummeryLotteryData2018_0660cac8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  return;
}


/* S2C_SummeryLotteryData2018::StaticNew() */

S2C_SummeryLotteryData2018 * S2C_SummeryLotteryData2018::StaticNew(void)

{
  S2C_SummeryLotteryData2018 *this;
  
  this = ::operator_new(0x58);
  S2C_SummeryLotteryData2018(this);
  return this;
}

