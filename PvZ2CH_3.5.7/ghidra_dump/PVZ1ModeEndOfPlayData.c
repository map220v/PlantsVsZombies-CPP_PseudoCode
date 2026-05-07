// Class: PVZ1ModeEndOfPlayData


/* PVZ1ModeEndOfPlayData::PVZ1ModeEndOfPlayData(PVZ1ModeEndOfPlayData const&) */

void __thiscall
PVZ1ModeEndOfPlayData::PVZ1ModeEndOfPlayData
          (PVZ1ModeEndOfPlayData *this,PVZ1ModeEndOfPlayData *param_1)

{
  PVZ1ModeEndOfPlayData PVar1;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_06991b30;
  *(undefined ***)(this + 8) = &PTR__PVZ1ModeEndOfPlayData_06991b98;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  PVar1 = param_1[0x30];
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  this[0x30] = PVar1;
  return;
}


/* PVZ1ModeEndOfPlayData::~PVZ1ModeEndOfPlayData() */

void __thiscall PVZ1ModeEndOfPlayData::~PVZ1ModeEndOfPlayData(PVZ1ModeEndOfPlayData *this)

{
  *(undefined ***)this = &PTR_GetClass_06991b30;
  *(undefined ***)(this + 8) = &PTR__PVZ1ModeEndOfPlayData_06991b98;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PVZ1ModeEndOfPlayData::~PVZ1ModeEndOfPlayData() */

void __thiscall PVZ1ModeEndOfPlayData::~PVZ1ModeEndOfPlayData(PVZ1ModeEndOfPlayData *this)

{
  ~PVZ1ModeEndOfPlayData(this + -8);
  return;
}


/* PVZ1ModeEndOfPlayData::~PVZ1ModeEndOfPlayData() */

void __thiscall PVZ1ModeEndOfPlayData::~PVZ1ModeEndOfPlayData(PVZ1ModeEndOfPlayData *this)

{
  ~PVZ1ModeEndOfPlayData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ1ModeEndOfPlayData::~PVZ1ModeEndOfPlayData() */

void __thiscall PVZ1ModeEndOfPlayData::~PVZ1ModeEndOfPlayData(PVZ1ModeEndOfPlayData *this)

{
  ~PVZ1ModeEndOfPlayData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeEndOfPlayData::StaticClassInit() */

void PVZ1ModeEndOfPlayData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1ModeEndOfPlayData");
    (*pcVar2)(plVar1,asStack_10,FUN_04c7467c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeEndOfPlayData::StaticGetClass() */

long * PVZ1ModeEndOfPlayData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeEndOfPlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeEndOfPlayData::GetClass() const */

long * PVZ1ModeEndOfPlayData::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeEndOfPlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeEndOfPlayData::PVZ1ModeEndOfPlayData() */

void __thiscall PVZ1ModeEndOfPlayData::PVZ1ModeEndOfPlayData(PVZ1ModeEndOfPlayData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06991b30;
  *(undefined ***)(this + 8) = &PTR__PVZ1ModeEndOfPlayData_06991b98;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* PVZ1ModeEndOfPlayData::StaticNew() */

PVZ1ModeEndOfPlayData * PVZ1ModeEndOfPlayData::StaticNew(void)

{
  PVZ1ModeEndOfPlayData *this;
  
  this = ::operator_new(0x38);
  PVZ1ModeEndOfPlayData(this);
  return this;
}


/* PVZ1ModeEndOfPlayData::TEMPNAMEPLACEHOLDERVALUE(PVZ1ModeEndOfPlayData const&) */

PVZ1ModeEndOfPlayData * __thiscall
PVZ1ModeEndOfPlayData::operator=(PVZ1ModeEndOfPlayData *this,PVZ1ModeEndOfPlayData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  this[0x30] = param_1[0x30];
  *(undefined4 *)(this + 0x34) = uVar1;
  return this;
}

