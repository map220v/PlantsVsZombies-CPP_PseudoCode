// Class: S2C_SummeryLotteryData


/* S2C_SummeryLotteryData::S2C_SummeryLotteryData(S2C_SummeryLotteryData const&) */

void __thiscall
S2C_SummeryLotteryData::S2C_SummeryLotteryData
          (S2C_SummeryLotteryData *this,S2C_SummeryLotteryData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_0660c9d0;
  *(undefined ***)(this + 8) = &PTR__S2C_SummeryLotteryData_0660ca38;
  VacationMaterialItem::VacationMaterialItem
            ((VacationMaterialItem *)(this + 0x18),(VacationMaterialItem *)(param_1 + 0x18));
  VacationMaterialItem::VacationMaterialItem
            ((VacationMaterialItem *)(this + 0x38),(VacationMaterialItem *)(param_1 + 0x38));
  std::vector<VacationMaterialItem,std::allocator<VacationMaterialItem>>::vector
            ((vector<VacationMaterialItem,std::allocator<VacationMaterialItem>> *)(this + 0x58),
             (vector *)(param_1 + 0x58));
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x70) = uVar1;
  return;
}


/* S2C_SummeryLotteryData::~S2C_SummeryLotteryData() */

void __thiscall S2C_SummeryLotteryData::~S2C_SummeryLotteryData(S2C_SummeryLotteryData *this)

{
  *(undefined ***)this = &PTR_GetClass_0660c9d0;
  *(undefined ***)(this + 8) = &PTR__S2C_SummeryLotteryData_0660ca38;
  std::vector<VacationMaterialItem,std::allocator<VacationMaterialItem>>::~vector
            ((vector<VacationMaterialItem,std::allocator<VacationMaterialItem>> *)(this + 0x58));
  VacationMaterialItem::~VacationMaterialItem((VacationMaterialItem *)(this + 0x38));
  VacationMaterialItem::~VacationMaterialItem((VacationMaterialItem *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_SummeryLotteryData::~S2C_SummeryLotteryData() */

void __thiscall S2C_SummeryLotteryData::~S2C_SummeryLotteryData(S2C_SummeryLotteryData *this)

{
  ~S2C_SummeryLotteryData(this + -8);
  return;
}


/* S2C_SummeryLotteryData::~S2C_SummeryLotteryData() */

void __thiscall S2C_SummeryLotteryData::~S2C_SummeryLotteryData(S2C_SummeryLotteryData *this)

{
  ~S2C_SummeryLotteryData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_SummeryLotteryData::~S2C_SummeryLotteryData() */

void __thiscall S2C_SummeryLotteryData::~S2C_SummeryLotteryData(S2C_SummeryLotteryData *this)

{
  ~S2C_SummeryLotteryData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_SummeryLotteryData::StaticClassInit() */

void S2C_SummeryLotteryData::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_SummeryLotteryData");
    (*pcVar2)(plVar1,asStack_10,FUN_032291cc,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_SummeryLotteryData::StaticGetClass() */

long * S2C_SummeryLotteryData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_SummeryLotteryData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_SummeryLotteryData::GetClass() const */

long * S2C_SummeryLotteryData::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_SummeryLotteryData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_SummeryLotteryData::S2C_SummeryLotteryData() */

void __thiscall S2C_SummeryLotteryData::S2C_SummeryLotteryData(S2C_SummeryLotteryData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660c9d0;
  *(undefined ***)(this + 8) = &PTR__S2C_SummeryLotteryData_0660ca38;
  VacationMaterialItem::VacationMaterialItem((VacationMaterialItem *)(this + 0x18),0,0);
  VacationMaterialItem::VacationMaterialItem((VacationMaterialItem *)(this + 0x38),0,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  return;
}


/* S2C_SummeryLotteryData::StaticNew() */

S2C_SummeryLotteryData * S2C_SummeryLotteryData::StaticNew(void)

{
  S2C_SummeryLotteryData *this;
  
  this = ::operator_new(0x78);
  S2C_SummeryLotteryData(this);
  return this;
}

