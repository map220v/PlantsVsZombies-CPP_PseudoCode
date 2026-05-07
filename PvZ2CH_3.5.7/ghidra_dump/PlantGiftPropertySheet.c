// Class: PlantGiftPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGiftPropertySheet::StaticClassInit() */

void PlantGiftPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGiftBaseData");
    (*pcVar3)(plVar2,asStack_10,FUN_042e5a74,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantGiftPropertySheet");
    (*pcVar3)(plVar2,asStack_10,FUN_042e5f30,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGiftPropertySheet::StaticGetClass() */

long * PlantGiftPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantGiftPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGiftPropertySheet::GetClass() const */

long * PlantGiftPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantGiftPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGiftPropertySheet::PlantGiftPropertySheet() */

void __thiscall PlantGiftPropertySheet::PlantGiftPropertySheet(PlantGiftPropertySheet *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06830fc0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* PlantGiftPropertySheet::StaticNew() */

PlantGiftPropertySheet * PlantGiftPropertySheet::StaticNew(void)

{
  PlantGiftPropertySheet *this;
  
  this = ::operator_new(0x28);
  PlantGiftPropertySheet(this);
  return this;
}


/* PlantGiftPropertySheet::~PlantGiftPropertySheet() */

void __thiscall PlantGiftPropertySheet::~PlantGiftPropertySheet(PlantGiftPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06830fc0;
  std::vector<PlantGiftBaseData,std::allocator<PlantGiftBaseData>>::~vector
            ((vector<PlantGiftBaseData,std::allocator<PlantGiftBaseData>> *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* PlantGiftPropertySheet::~PlantGiftPropertySheet() */

void __thiscall PlantGiftPropertySheet::~PlantGiftPropertySheet(PlantGiftPropertySheet *this)

{
  ~PlantGiftPropertySheet(this);
  AK::FreeHook(this);
  return;
}

