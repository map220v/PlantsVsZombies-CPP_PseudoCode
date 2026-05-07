// Class: PlantBundleInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBundleInfo::StaticClassInit() */

void PlantBundleInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkBundleData");
    (*pcVar3)(plVar2,asStack_10,FUN_04c24c4c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantBundleInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04c25da0,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBundleInfo::StaticGetClass() */

long * PlantBundleInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantBundleInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBundleInfo::GetClass() const */

long * PlantBundleInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantBundleInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBundleInfo::PlantBundleInfo() */

void __thiscall PlantBundleInfo::PlantBundleInfo(PlantBundleInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06983410;
  Set8BytesTo0(this + 0x20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* PlantBundleInfo::StaticNew() */

PlantBundleInfo * PlantBundleInfo::StaticNew(void)

{
  PlantBundleInfo *this;
  
  this = ::operator_new(0x48);
  PlantBundleInfo(this);
  return this;
}


/* PlantBundleInfo::~PlantBundleInfo() */

void __thiscall PlantBundleInfo::~PlantBundleInfo(PlantBundleInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06983410;
  std::vector<NetworkBundleData,std::allocator<NetworkBundleData>>::~vector
            ((vector<NetworkBundleData,std::allocator<NetworkBundleData>> *)(this + 0x30));
  std::string::~string((string *)(this + 0x20));
  nop();
  return;
}


/* PlantBundleInfo::~PlantBundleInfo() */

void __thiscall PlantBundleInfo::~PlantBundleInfo(PlantBundleInfo *this)

{
  ~PlantBundleInfo(this);
  AK::FreeHook(this);
  return;
}

