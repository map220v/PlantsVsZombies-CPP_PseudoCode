// Class: PlantGeneEnhancementConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneEnhancementConfig::StaticClassInit() */

void PlantGeneEnhancementConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneSequenceShopItem");
    (*pcVar3)(plVar2,asStack_10,FUN_037fe5a8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantGeneEnhancementConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_03809aa0,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGeneEnhancementConfig::StaticGetClass() */

long * PlantGeneEnhancementConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantGeneEnhancementConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGeneEnhancementConfig::GetClass() const */

long * PlantGeneEnhancementConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantGeneEnhancementConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGeneEnhancementConfig::PlantGeneEnhancementConfig() */

void __thiscall
PlantGeneEnhancementConfig::PlantGeneEnhancementConfig(PlantGeneEnhancementConfig *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0669dea0;
  *(undefined ***)(this + 8) = &PTR__PlantGeneEnhancementConfig_0669df08;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x3c) = 1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* PlantGeneEnhancementConfig::StaticNew() */

PlantGeneEnhancementConfig * PlantGeneEnhancementConfig::StaticNew(void)

{
  PlantGeneEnhancementConfig *this;
  
  this = ::operator_new(0x60);
  PlantGeneEnhancementConfig(this);
  return this;
}


/* PlantGeneEnhancementConfig::~PlantGeneEnhancementConfig() */

void __thiscall
PlantGeneEnhancementConfig::~PlantGeneEnhancementConfig(PlantGeneEnhancementConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0669dea0;
  *(undefined ***)(this + 8) = &PTR__PlantGeneEnhancementConfig_0669df08;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x48));
  std::vector<GeneSequenceShopItem,std::allocator<GeneSequenceShopItem>>::~vector
            ((vector<GeneSequenceShopItem,std::allocator<GeneSequenceShopItem>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PlantGeneEnhancementConfig::~PlantGeneEnhancementConfig() */

void __thiscall
PlantGeneEnhancementConfig::~PlantGeneEnhancementConfig(PlantGeneEnhancementConfig *this)

{
  ~PlantGeneEnhancementConfig(this + -8);
  return;
}


/* PlantGeneEnhancementConfig::~PlantGeneEnhancementConfig() */

void __thiscall
PlantGeneEnhancementConfig::~PlantGeneEnhancementConfig(PlantGeneEnhancementConfig *this)

{
  ~PlantGeneEnhancementConfig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantGeneEnhancementConfig::~PlantGeneEnhancementConfig() */

void __thiscall
PlantGeneEnhancementConfig::~PlantGeneEnhancementConfig(PlantGeneEnhancementConfig *this)

{
  ~PlantGeneEnhancementConfig(this + -8);
  return;
}

