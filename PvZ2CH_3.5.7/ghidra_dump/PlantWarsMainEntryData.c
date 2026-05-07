// Class: PlantWarsMainEntryData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsMainEntryData::StaticClassInit() */

void PlantWarsMainEntryData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWarsLeaderBoardLineData");
    (*pcVar3)(plVar2,asStack_10,FUN_04d8c78c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantWarsStarRewardData");
    (*pcVar3)(plVar2,asStack_10,FUN_04d93ba0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantWarsLeaderBoardBonusData");
    (*pcVar3)(plVar2,asStack_10,FUN_04d93e80,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantWarsLeaderBoardData");
    (*pcVar3)(plVar2,asStack_10,FUN_04d94078,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantWarsStarInfoData");
    (*pcVar3)(plVar2,asStack_10,FUN_04d8c3f4,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantWarsNodeData");
    (*pcVar3)(plVar2,asStack_10,FUN_04d90d0c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantWarsLevelData");
    (*pcVar3)(plVar2,asStack_10,FUN_04d942e8,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantWarsWorldData");
    (*pcVar3)(plVar2,asStack_10,FUN_04d94794,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantWarsMainEntryData");
    (*pcVar3)(plVar2,asStack_10,FUN_04d94c44,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsMainEntryData::StaticGetClass() */

long * PlantWarsMainEntryData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsMainEntryData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsMainEntryData::GetClass() const */

long * PlantWarsMainEntryData::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsMainEntryData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsMainEntryData::PlantWarsMainEntryData() */

void __thiscall PlantWarsMainEntryData::PlantWarsMainEntryData(PlantWarsMainEntryData *this)

{
  size_t in_x2;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_069ba560;
  Set8BytesTo0((string *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::string::append((string *)(this + 0x10),"",in_x2);
  *(undefined4 *)(this + 8) = 0;
  this[0x38] = (PlantWarsMainEntryData)0x0;
  return;
}


/* PlantWarsMainEntryData::StaticNew() */

PlantWarsMainEntryData * PlantWarsMainEntryData::StaticNew(void)

{
  PlantWarsMainEntryData *this;
  
  this = ::operator_new(0x40);
  PlantWarsMainEntryData(this);
  return this;
}


/* PlantWarsMainEntryData::~PlantWarsMainEntryData() */

void __thiscall PlantWarsMainEntryData::~PlantWarsMainEntryData(PlantWarsMainEntryData *this)

{
  *(undefined ***)this = &PTR_GetClass_069ba560;
  std::vector<PlantWarsWorldData,std::allocator<PlantWarsWorldData>>::~vector
            ((vector<PlantWarsWorldData,std::allocator<PlantWarsWorldData>> *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  nop();
  return;
}


/* PlantWarsMainEntryData::~PlantWarsMainEntryData() */

void __thiscall PlantWarsMainEntryData::~PlantWarsMainEntryData(PlantWarsMainEntryData *this)

{
  ~PlantWarsMainEntryData(this);
  AK::FreeHook(this);
  return;
}


/* PlantWarsMainEntryData::TEMPNAMEPLACEHOLDERVALUE(PlantWarsMainEntryData const&) */

PlantWarsMainEntryData * __thiscall
PlantWarsMainEntryData::operator=(PlantWarsMainEntryData *this,PlantWarsMainEntryData *param_1)

{
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  std::vector<PlantWarsWorldData,std::allocator<PlantWarsWorldData>>::operator=
            ((vector<PlantWarsWorldData,std::allocator<PlantWarsWorldData>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  this[0x38] = param_1[0x38];
  return this;
}

