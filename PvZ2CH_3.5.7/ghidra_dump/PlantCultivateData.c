// Class: PlantCultivateData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCultivateData::StaticClassInit() */

void PlantCultivateData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCultivateSelectInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0347f76c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantCultivateTaskInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0347f618,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantCultivateData");
    (*pcVar3)(plVar2,asStack_10,FUN_03483128,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCultivateData::StaticGetClass() */

long * PlantCultivateData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCultivateData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCultivateData::GetClass() const */

long * PlantCultivateData::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCultivateData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCultivateData::PlantCultivateData() */

void __thiscall PlantCultivateData::PlantCultivateData(PlantCultivateData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0663ed40;
  *(undefined ***)(this + 8) = &PTR__PlantCultivateData_0663eda8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  Set8BytesTo0(this + 0x58);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  return;
}


/* PlantCultivateData::StaticNew() */

PlantCultivateData * PlantCultivateData::StaticNew(void)

{
  PlantCultivateData *this;
  
  this = ::operator_new(0x80);
  PlantCultivateData(this);
  return this;
}


/* PlantCultivateData::~PlantCultivateData() */

void __thiscall PlantCultivateData::~PlantCultivateData(PlantCultivateData *this)

{
  *(undefined ***)this = &PTR_GetClass_0663ed40;
  *(undefined ***)(this + 8) = &PTR__PlantCultivateData_0663eda8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x68));
  std::string::~string((string *)(this + 0x58));
  std::vector<PlantCultivateTaskInfo,std::allocator<PlantCultivateTaskInfo>>::~vector
            ((vector<PlantCultivateTaskInfo,std::allocator<PlantCultivateTaskInfo>> *)(this + 0x40))
  ;
  std::vector<PlantCultivateSelectInfo,std::allocator<PlantCultivateSelectInfo>>::~vector
            ((vector<PlantCultivateSelectInfo,std::allocator<PlantCultivateSelectInfo>> *)
             (this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PlantCultivateData::~PlantCultivateData() */

void __thiscall PlantCultivateData::~PlantCultivateData(PlantCultivateData *this)

{
  ~PlantCultivateData(this + -8);
  return;
}


/* PlantCultivateData::~PlantCultivateData() */

void __thiscall PlantCultivateData::~PlantCultivateData(PlantCultivateData *this)

{
  ~PlantCultivateData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantCultivateData::~PlantCultivateData() */

void __thiscall PlantCultivateData::~PlantCultivateData(PlantCultivateData *this)

{
  ~PlantCultivateData(this + -8);
  return;
}

