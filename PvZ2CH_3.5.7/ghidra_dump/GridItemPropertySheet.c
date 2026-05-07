// Class: GridItemPropertySheet


/* GridItemPropertySheet::GridItemPropertySheet() */

void __thiscall GridItemPropertySheet::GridItemPropertySheet(GridItemPropertySheet *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06781a90;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  PlantingRestrictionSet::PlantingRestrictionSet((PlantingRestrictionSet *)(this + 0x68));
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x60) = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  this[100] = (GridItemPropertySheet)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x10) = 0x447a0000;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* GridItemPropertySheet::~GridItemPropertySheet() */

void __thiscall GridItemPropertySheet::~GridItemPropertySheet(GridItemPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06781a90;
  PlantingRestrictionSet::~PlantingRestrictionSet((PlantingRestrictionSet *)(this + 0x68));
  std::vector<GridItemLevelStat,std::allocator<GridItemLevelStat>>::~vector
            ((vector<GridItemLevelStat,std::allocator<GridItemLevelStat>> *)(this + 0x48));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* GridItemPropertySheet::~GridItemPropertySheet() */

void __thiscall GridItemPropertySheet::~GridItemPropertySheet(GridItemPropertySheet *this)

{
  ~GridItemPropertySheet(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPropertySheet::StaticClassInit() */

void GridItemPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemLevelStat");
    (*pcVar3)(plVar2,asStack_10,FUN_03e038a0,4,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GridItemPropertySheet");
    (*pcVar3)(plVar2,asStack_10,FUN_03e04c98,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPropertySheet::StaticGetClass() */

long * GridItemPropertySheet::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPropertySheet::GetClass() const */

long * GridItemPropertySheet::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPropertySheet::StaticNew() */

GridItemPropertySheet * GridItemPropertySheet::StaticNew(void)

{
  GridItemPropertySheet *this;
  
  this = ::operator_new(0x98);
  GridItemPropertySheet(this);
  return this;
}

