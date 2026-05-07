// Class: PlantGeneEnhancementData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementData::StaticClassInit() */

void PlantGeneEnhancementData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGeneEnhancementData");
    (*pcVar2)(plVar1,asStack_10,FUN_03809ea4,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGeneEnhancementData::StaticGetClass() */

long * PlantGeneEnhancementData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantGeneEnhancementData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGeneEnhancementData::GetClass() const */

long * PlantGeneEnhancementData::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantGeneEnhancementData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGeneEnhancementData::PlantGeneEnhancementData() */

void __thiscall PlantGeneEnhancementData::PlantGeneEnhancementData(PlantGeneEnhancementData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0669df30;
  *(undefined ***)(this + 8) = &PTR__PlantGeneEnhancementData_0669df98;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* PlantGeneEnhancementData::StaticNew() */

PlantGeneEnhancementData * PlantGeneEnhancementData::StaticNew(void)

{
  PlantGeneEnhancementData *this;
  
  this = ::operator_new(0x48);
  PlantGeneEnhancementData(this);
  return this;
}


/* PlantGeneEnhancementData::~PlantGeneEnhancementData() */

void __thiscall PlantGeneEnhancementData::~PlantGeneEnhancementData(PlantGeneEnhancementData *this)

{
  *(undefined ***)this = &PTR_GetClass_0669df30;
  *(undefined ***)(this + 8) = &PTR__PlantGeneEnhancementData_0669df98;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x30));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PlantGeneEnhancementData::~PlantGeneEnhancementData() */

void __thiscall PlantGeneEnhancementData::~PlantGeneEnhancementData(PlantGeneEnhancementData *this)

{
  ~PlantGeneEnhancementData(this + -8);
  return;
}


/* PlantGeneEnhancementData::~PlantGeneEnhancementData() */

void __thiscall PlantGeneEnhancementData::~PlantGeneEnhancementData(PlantGeneEnhancementData *this)

{
  ~PlantGeneEnhancementData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantGeneEnhancementData::~PlantGeneEnhancementData() */

void __thiscall PlantGeneEnhancementData::~PlantGeneEnhancementData(PlantGeneEnhancementData *this)

{
  ~PlantGeneEnhancementData(this + -8);
  return;
}

