// Class: HeroPlantPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantPropertySheet::StaticClassInit() */

void HeroPlantPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeroPlantGradeUp");
    (*pcVar3)(plVar2,asStack_10,FUN_042b82a8,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"HeroPlantGradeRange");
    (*pcVar3)(plVar2,asStack_10,FUN_042b8154,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"HeroPlantTalent");
    (*pcVar3)(plVar2,asStack_10,FUN_042b89ec,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"HeroPlantPropertySheet");
    (*pcVar3)(plVar2,asStack_10,FUN_042b8fd4,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantPropertySheet::StaticGetClass() */

long * HeroPlantPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeroPlantPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeroPlantPropertySheet::GetClass() const */

long * HeroPlantPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"HeroPlantPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeroPlantPropertySheet::HeroPlantPropertySheet() */

void __thiscall HeroPlantPropertySheet::HeroPlantPropertySheet(HeroPlantPropertySheet *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0682bdf0;
  Set8BytesTo0(this + 0x10);
  *(undefined4 *)(this + 0x18) = 9999;
  *(undefined4 *)(this + 0x28) = 999;
  *(undefined4 *)(this + 0x1c) = 0x4479c000;
  *(undefined4 *)(this + 0x20) = 0x4479c000;
  *(undefined4 *)(this + 0x24) = 0x4479c000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  return;
}


/* HeroPlantPropertySheet::StaticNew() */

HeroPlantPropertySheet * HeroPlantPropertySheet::StaticNew(void)

{
  HeroPlantPropertySheet *this;
  
  this = ::operator_new(0x78);
  HeroPlantPropertySheet(this);
  return this;
}


/* HeroPlantPropertySheet::~HeroPlantPropertySheet() */

void __thiscall HeroPlantPropertySheet::~HeroPlantPropertySheet(HeroPlantPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_0682bdf0;
  std::vector<HeroPlantTalent,std::allocator<HeroPlantTalent>>::~vector
            ((vector<HeroPlantTalent,std::allocator<HeroPlantTalent>> *)(this + 0x60));
  std::vector<HeroPlantGradeRange,std::allocator<HeroPlantGradeRange>>::~vector
            ((vector<HeroPlantGradeRange,std::allocator<HeroPlantGradeRange>> *)(this + 0x48));
  std::vector<HeroPlantGradeUp,std::allocator<HeroPlantGradeUp>>::~vector
            ((vector<HeroPlantGradeUp,std::allocator<HeroPlantGradeUp>> *)(this + 0x30));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* HeroPlantPropertySheet::~HeroPlantPropertySheet() */

void __thiscall HeroPlantPropertySheet::~HeroPlantPropertySheet(HeroPlantPropertySheet *this)

{
  ~HeroPlantPropertySheet(this);
  AK::FreeHook(this);
  return;
}

