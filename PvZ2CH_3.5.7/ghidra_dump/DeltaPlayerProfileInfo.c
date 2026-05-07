// Class: DeltaPlayerProfileInfo


/* DeltaPlayerProfileInfo::DeltaPlayerProfileInfo() */

void __thiscall DeltaPlayerProfileInfo::DeltaPlayerProfileInfo(DeltaPlayerProfileInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06611b10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  Set8BytesTo0(this + 0x48);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa0));
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 8) = 0x15;
  return;
}


/* DeltaPlayerProfileInfo::~DeltaPlayerProfileInfo() */

void __thiscall DeltaPlayerProfileInfo::~DeltaPlayerProfileInfo(DeltaPlayerProfileInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06611b10;
  std::vector<PlantPieceRecord,std::allocator<PlantPieceRecord>>::~vector
            ((vector<PlantPieceRecord,std::allocator<PlantPieceRecord>> *)(this + 0xa0));
  std::vector<WorldSpecificKeys,std::allocator<WorldSpecificKeys>>::~vector
            ((vector<WorldSpecificKeys,std::allocator<WorldSpecificKeys>> *)(this + 0x88));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x70));
  std::vector<GameFeature,std::allocator<GameFeature>>::~vector
            ((vector<GameFeature,std::allocator<GameFeature>> *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  std::vector<DeltaWorldMapEventInfo,std::allocator<DeltaWorldMapEventInfo>>::~vector
            ((vector<DeltaWorldMapEventInfo,std::allocator<DeltaWorldMapEventInfo>> *)(this + 0x30))
  ;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  nop();
  return;
}


/* DeltaPlayerProfileInfo::~DeltaPlayerProfileInfo() */

void __thiscall DeltaPlayerProfileInfo::~DeltaPlayerProfileInfo(DeltaPlayerProfileInfo *this)

{
  ~DeltaPlayerProfileInfo(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DeltaPlayerProfileInfo::StaticClassInit() */

void DeltaPlayerProfileInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"DeltaWorldMapEventInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0330c4f0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WorldSpecificKeys");
    (*pcVar3)(plVar2,asStack_10,FUN_032f8ec4,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantPieceRecord");
    (*pcVar3)(plVar2,asStack_10,FUN_032f3fe8,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RebateSingleRecord");
    (*pcVar3)(plVar2,asStack_10,FUN_032f8d70,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DeltaPlayerProfileInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0331d7bc,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DeltaPlayerProfileInfo::StaticGetClass() */

long * DeltaPlayerProfileInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DeltaPlayerProfileInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DeltaPlayerProfileInfo::GetClass() const */

long * DeltaPlayerProfileInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"DeltaPlayerProfileInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DeltaPlayerProfileInfo::StaticNew() */

DeltaPlayerProfileInfo * DeltaPlayerProfileInfo::StaticNew(void)

{
  DeltaPlayerProfileInfo *this;
  
  this = ::operator_new(0xb8);
  DeltaPlayerProfileInfo(this);
  return this;
}

