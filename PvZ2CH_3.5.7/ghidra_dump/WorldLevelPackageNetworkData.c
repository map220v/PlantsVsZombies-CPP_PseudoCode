// Class: WorldLevelPackageNetworkData


/* WorldLevelPackageNetworkData::WorldLevelPackageNetworkData() */

void __thiscall
WorldLevelPackageNetworkData::WorldLevelPackageNetworkData(WorldLevelPackageNetworkData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06868390;
  *(undefined ***)(this + 8) = &PTR__WorldLevelPackageNetworkData_068683f8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* WorldLevelPackageNetworkData::~WorldLevelPackageNetworkData() */

void __thiscall
WorldLevelPackageNetworkData::~WorldLevelPackageNetworkData(WorldLevelPackageNetworkData *this)

{
  *(undefined ***)this = &PTR_GetClass_06868390;
  *(undefined ***)(this + 8) = &PTR__WorldLevelPackageNetworkData_068683f8;
  std::vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>>::~vector
            ((vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to WorldLevelPackageNetworkData::~WorldLevelPackageNetworkData() */

void __thiscall
WorldLevelPackageNetworkData::~WorldLevelPackageNetworkData(WorldLevelPackageNetworkData *this)

{
  ~WorldLevelPackageNetworkData(this + -8);
  return;
}


/* WorldLevelPackageNetworkData::~WorldLevelPackageNetworkData() */

void __thiscall
WorldLevelPackageNetworkData::~WorldLevelPackageNetworkData(WorldLevelPackageNetworkData *this)

{
  ~WorldLevelPackageNetworkData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldLevelPackageNetworkData::~WorldLevelPackageNetworkData() */

void __thiscall
WorldLevelPackageNetworkData::~WorldLevelPackageNetworkData(WorldLevelPackageNetworkData *this)

{
  ~WorldLevelPackageNetworkData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageNetworkData::StaticClassInit() */

void WorldLevelPackageNetworkData::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldLevelPackageItem");
    (*pcVar3)(plVar2,asStack_10,FUN_045ad32c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WorldLevelPackageData");
    (*pcVar3)(plVar2,asStack_10,FUN_045ad59c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WorldLevelPackageNetworkData");
    (*pcVar3)(plVar2,asStack_10,FUN_045ad794,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldLevelPackageNetworkData::StaticGetClass() */

long * WorldLevelPackageNetworkData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldLevelPackageNetworkData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldLevelPackageNetworkData::GetClass() const */

long * WorldLevelPackageNetworkData::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldLevelPackageNetworkData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldLevelPackageNetworkData::StaticNew() */

WorldLevelPackageNetworkData * WorldLevelPackageNetworkData::StaticNew(void)

{
  WorldLevelPackageNetworkData *this;
  
  this = ::operator_new(0x30);
  WorldLevelPackageNetworkData(this);
  return this;
}


/* WorldLevelPackageNetworkData::TEMPNAMEPLACEHOLDERVALUE(WorldLevelPackageNetworkData const&) */

WorldLevelPackageNetworkData * __thiscall
WorldLevelPackageNetworkData::operator=
          (WorldLevelPackageNetworkData *this,WorldLevelPackageNetworkData *param_1)

{
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>>::operator=
            ((vector<WorldLevelPackageData,std::allocator<WorldLevelPackageData>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  return this;
}

