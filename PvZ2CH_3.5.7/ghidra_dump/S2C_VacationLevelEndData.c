// Class: S2C_VacationLevelEndData


/* S2C_VacationLevelEndData::~S2C_VacationLevelEndData() */

void __thiscall S2C_VacationLevelEndData::~S2C_VacationLevelEndData(S2C_VacationLevelEndData *this)

{
  *(undefined ***)this = &PTR_GetClass_0660c940;
  *(undefined ***)(this + 8) = &PTR__S2C_VacationLevelEndData_0660c9a8;
  std::vector<VacationMaterialItem,std::allocator<VacationMaterialItem>>::~vector
            ((vector<VacationMaterialItem,std::allocator<VacationMaterialItem>> *)(this + 0x38));
  VacationMaterialItem::~VacationMaterialItem((VacationMaterialItem *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_VacationLevelEndData::~S2C_VacationLevelEndData() */

void __thiscall S2C_VacationLevelEndData::~S2C_VacationLevelEndData(S2C_VacationLevelEndData *this)

{
  ~S2C_VacationLevelEndData(this + -8);
  return;
}


/* S2C_VacationLevelEndData::~S2C_VacationLevelEndData() */

void __thiscall S2C_VacationLevelEndData::~S2C_VacationLevelEndData(S2C_VacationLevelEndData *this)

{
  ~S2C_VacationLevelEndData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_VacationLevelEndData::~S2C_VacationLevelEndData() */

void __thiscall S2C_VacationLevelEndData::~S2C_VacationLevelEndData(S2C_VacationLevelEndData *this)

{
  ~S2C_VacationLevelEndData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_VacationLevelEndData::StaticClassInit() */

void S2C_VacationLevelEndData::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_VacationLevelEndData");
    (*pcVar2)(plVar1,asStack_10,FUN_03228ff4,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_VacationLevelEndData::StaticGetClass() */

long * S2C_VacationLevelEndData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_VacationLevelEndData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_VacationLevelEndData::GetClass() const */

long * S2C_VacationLevelEndData::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_VacationLevelEndData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_VacationLevelEndData::S2C_VacationLevelEndData() */

void __thiscall S2C_VacationLevelEndData::S2C_VacationLevelEndData(S2C_VacationLevelEndData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660c940;
  *(undefined ***)(this + 8) = &PTR__S2C_VacationLevelEndData_0660c9a8;
  VacationMaterialItem::VacationMaterialItem((VacationMaterialItem *)(this + 0x18),0,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* S2C_VacationLevelEndData::StaticNew() */

S2C_VacationLevelEndData * S2C_VacationLevelEndData::StaticNew(void)

{
  S2C_VacationLevelEndData *this;
  
  this = ::operator_new(0x50);
  S2C_VacationLevelEndData(this);
  return this;
}

