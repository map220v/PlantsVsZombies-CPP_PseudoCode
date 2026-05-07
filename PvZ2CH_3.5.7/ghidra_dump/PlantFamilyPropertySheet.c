// Class: PlantFamilyPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyPropertySheet::StaticClassInit() */

void PlantFamilyPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantFamilyPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_03f9fee0,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFamilyPropertySheet::StaticGetClass() */

long * PlantFamilyPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantFamilyPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFamilyPropertySheet::GetClass() const */

long * PlantFamilyPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantFamilyPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFamilyPropertySheet::PlantFamilyPropertySheet() */

void __thiscall PlantFamilyPropertySheet::PlantFamilyPropertySheet(PlantFamilyPropertySheet *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_067a5b00;
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  *(undefined4 *)(this + 0x28) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::
  pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>
  ::pair((pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>
          *)(this + 0x78));
  return;
}


/* PlantFamilyPropertySheet::StaticNew() */

PlantFamilyPropertySheet * PlantFamilyPropertySheet::StaticNew(void)

{
  PlantFamilyPropertySheet *this;
  
  this = ::operator_new(0x98);
  PlantFamilyPropertySheet(this);
  return this;
}


/* PlantFamilyPropertySheet::~PlantFamilyPropertySheet() */

void __thiscall PlantFamilyPropertySheet::~PlantFamilyPropertySheet(PlantFamilyPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_067a5b00;
  PlantBoost::~PlantBoost((PlantBoost *)(this + 0x78));
  std::vector<PlantBoost,std::allocator<PlantBoost>>::~vector
            ((vector<PlantBoost,std::allocator<PlantBoost>> *)(this + 0x60));
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::~vector
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x48));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* PlantFamilyPropertySheet::~PlantFamilyPropertySheet() */

void __thiscall PlantFamilyPropertySheet::~PlantFamilyPropertySheet(PlantFamilyPropertySheet *this)

{
  ~PlantFamilyPropertySheet(this);
  AK::FreeHook(this);
  return;
}

