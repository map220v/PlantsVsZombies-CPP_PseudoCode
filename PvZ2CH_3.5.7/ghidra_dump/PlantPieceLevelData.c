// Class: PlantPieceLevelData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPieceLevelData::StaticClassInit() */

void PlantPieceLevelData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPieceLevel");
    (*pcVar3)(plVar2,asStack_10,FUN_049245cc,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantPieceLevelData");
    (*pcVar3)(plVar2,asStack_10,FUN_04924b78,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPieceLevelData::StaticGetClass() */

long * PlantPieceLevelData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPieceLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPieceLevelData::GetClass() const */

long * PlantPieceLevelData::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPieceLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPieceLevelData::PlantPieceLevelData() */

void __thiscall PlantPieceLevelData::PlantPieceLevelData(PlantPieceLevelData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06910b00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* PlantPieceLevelData::StaticNew() */

PlantPieceLevelData * PlantPieceLevelData::StaticNew(void)

{
  PlantPieceLevelData *this;
  
  this = ::operator_new(0x20);
  PlantPieceLevelData(this);
  return this;
}


/* PlantPieceLevelData::~PlantPieceLevelData() */

void __thiscall PlantPieceLevelData::~PlantPieceLevelData(PlantPieceLevelData *this)

{
  *(undefined ***)this = &PTR_GetClass_06910b00;
  std::vector<PlantPieceLevel,std::allocator<PlantPieceLevel>>::~vector
            ((vector<PlantPieceLevel,std::allocator<PlantPieceLevel>> *)(this + 8));
  nop();
  return;
}


/* PlantPieceLevelData::~PlantPieceLevelData() */

void __thiscall PlantPieceLevelData::~PlantPieceLevelData(PlantPieceLevelData *this)

{
  ~PlantPieceLevelData(this);
  AK::FreeHook(this);
  return;
}

