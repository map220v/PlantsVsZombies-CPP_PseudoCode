// Class: PlantWarsEndOfPlayData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsEndOfPlayData::StaticClassInit() */

void PlantWarsEndOfPlayData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWarsEndOfPlayData");
    (*pcVar2)(plVar1,asStack_10,FUN_04d9369c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsEndOfPlayData::StaticGetClass() */

long * PlantWarsEndOfPlayData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsEndOfPlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsEndOfPlayData::GetClass() const */

long * PlantWarsEndOfPlayData::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsEndOfPlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsEndOfPlayData::PlantWarsEndOfPlayData() */

void __thiscall PlantWarsEndOfPlayData::PlantWarsEndOfPlayData(PlantWarsEndOfPlayData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069ba440;
  *(undefined ***)(this + 8) = &PTR__PlantWarsEndOfPlayData_069ba4a8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* PlantWarsEndOfPlayData::StaticNew() */

PlantWarsEndOfPlayData * PlantWarsEndOfPlayData::StaticNew(void)

{
  PlantWarsEndOfPlayData *this;
  
  this = ::operator_new(0x50);
  PlantWarsEndOfPlayData(this);
  return this;
}


/* PlantWarsEndOfPlayData::~PlantWarsEndOfPlayData() */

void __thiscall PlantWarsEndOfPlayData::~PlantWarsEndOfPlayData(PlantWarsEndOfPlayData *this)

{
  *(undefined ***)this = &PTR_GetClass_069ba440;
  *(undefined ***)(this + 8) = &PTR__PlantWarsEndOfPlayData_069ba4a8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x30));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PlantWarsEndOfPlayData::~PlantWarsEndOfPlayData() */

void __thiscall PlantWarsEndOfPlayData::~PlantWarsEndOfPlayData(PlantWarsEndOfPlayData *this)

{
  ~PlantWarsEndOfPlayData(this + -8);
  return;
}


/* PlantWarsEndOfPlayData::~PlantWarsEndOfPlayData() */

void __thiscall PlantWarsEndOfPlayData::~PlantWarsEndOfPlayData(PlantWarsEndOfPlayData *this)

{
  ~PlantWarsEndOfPlayData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantWarsEndOfPlayData::~PlantWarsEndOfPlayData() */

void __thiscall PlantWarsEndOfPlayData::~PlantWarsEndOfPlayData(PlantWarsEndOfPlayData *this)

{
  ~PlantWarsEndOfPlayData(this + -8);
  return;
}


/* PlantWarsEndOfPlayData::PlantWarsEndOfPlayData(PlantWarsEndOfPlayData const&) */

void __thiscall
PlantWarsEndOfPlayData::PlantWarsEndOfPlayData
          (PlantWarsEndOfPlayData *this,PlantWarsEndOfPlayData *param_1)

{
  PlantWarsEndOfPlayData PVar1;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_069ba440;
  *(undefined ***)(this + 8) = &PTR__PlantWarsEndOfPlayData_069ba4a8;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  PVar1 = param_1[0x48];
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  this[0x48] = PVar1;
  return;
}


/* PlantWarsEndOfPlayData::TEMPNAMEPLACEHOLDERVALUE(PlantWarsEndOfPlayData const&) */

PlantWarsEndOfPlayData * __thiscall
PlantWarsEndOfPlayData::operator=(PlantWarsEndOfPlayData *this,PlantWarsEndOfPlayData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  this[0x48] = param_1[0x48];
  *(undefined4 *)(this + 0x4c) = uVar1;
  return this;
}

