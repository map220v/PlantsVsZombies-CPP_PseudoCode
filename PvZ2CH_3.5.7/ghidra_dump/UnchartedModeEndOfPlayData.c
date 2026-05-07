// Class: UnchartedModeEndOfPlayData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeEndOfPlayData::StaticClassInit() */

void UnchartedModeEndOfPlayData::StaticClassInit(void)

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
    std::string::string(asStack_10,"UnchartedModeEndOfPlayData");
    (*pcVar2)(plVar1,asStack_10,FUN_03837a18,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedModeEndOfPlayData::StaticGetClass() */

long * UnchartedModeEndOfPlayData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UnchartedModeEndOfPlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedModeEndOfPlayData::GetClass() const */

long * UnchartedModeEndOfPlayData::GetClass(void)

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
  (*pcVar3)(plVar1,"UnchartedModeEndOfPlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedModeEndOfPlayData::UnchartedModeEndOfPlayData() */

void __thiscall
UnchartedModeEndOfPlayData::UnchartedModeEndOfPlayData(UnchartedModeEndOfPlayData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066a6800;
  *(undefined ***)(this + 8) = &PTR__UnchartedModeEndOfPlayData_066a6868;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  return;
}


/* UnchartedModeEndOfPlayData::StaticNew() */

UnchartedModeEndOfPlayData * UnchartedModeEndOfPlayData::StaticNew(void)

{
  UnchartedModeEndOfPlayData *this;
  
  this = ::operator_new(0x80);
  UnchartedModeEndOfPlayData(this);
  return this;
}


/* UnchartedModeEndOfPlayData::~UnchartedModeEndOfPlayData() */

void __thiscall
UnchartedModeEndOfPlayData::~UnchartedModeEndOfPlayData(UnchartedModeEndOfPlayData *this)

{
  *(undefined ***)this = &PTR_GetClass_066a6800;
  *(undefined ***)(this + 8) = &PTR__UnchartedModeEndOfPlayData_066a6868;
  std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::~vector
            ((vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>> *)
             (this + 0x60));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x48));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to UnchartedModeEndOfPlayData::~UnchartedModeEndOfPlayData() */

void __thiscall
UnchartedModeEndOfPlayData::~UnchartedModeEndOfPlayData(UnchartedModeEndOfPlayData *this)

{
  ~UnchartedModeEndOfPlayData(this + -8);
  return;
}


/* UnchartedModeEndOfPlayData::~UnchartedModeEndOfPlayData() */

void __thiscall
UnchartedModeEndOfPlayData::~UnchartedModeEndOfPlayData(UnchartedModeEndOfPlayData *this)

{
  ~UnchartedModeEndOfPlayData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UnchartedModeEndOfPlayData::~UnchartedModeEndOfPlayData() */

void __thiscall
UnchartedModeEndOfPlayData::~UnchartedModeEndOfPlayData(UnchartedModeEndOfPlayData *this)

{
  ~UnchartedModeEndOfPlayData(this + -8);
  return;
}


/* UnchartedModeEndOfPlayData::TEMPNAMEPLACEHOLDERVALUE(UnchartedModeEndOfPlayData const&) */

UnchartedModeEndOfPlayData * __thiscall
UnchartedModeEndOfPlayData::operator=
          (UnchartedModeEndOfPlayData *this,UnchartedModeEndOfPlayData *param_1)

{
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::operator=
            ((vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>> *)
             (this + 0x60),(vector *)(param_1 + 0x60));
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return this;
}


/* UnchartedModeEndOfPlayData::UnchartedModeEndOfPlayData(UnchartedModeEndOfPlayData const&) */

void __thiscall
UnchartedModeEndOfPlayData::UnchartedModeEndOfPlayData
          (UnchartedModeEndOfPlayData *this,UnchartedModeEndOfPlayData *param_1)

{
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_066a6800;
  *(undefined ***)(this + 8) = &PTR__UnchartedModeEndOfPlayData_066a6868;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::vector
            ((vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>> *)
             (this + 0x60),(vector *)(param_1 + 0x60));
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return;
}

