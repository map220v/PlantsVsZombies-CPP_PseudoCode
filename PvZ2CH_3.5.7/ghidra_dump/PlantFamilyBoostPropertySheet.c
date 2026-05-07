// Class: PlantFamilyBoostPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyBoostPropertySheet::StaticClassInit() */

void PlantFamilyBoostPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantFamilyBoostPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_03f9f8c4,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFamilyBoostPropertySheet::StaticGetClass() */

long * PlantFamilyBoostPropertySheet::StaticGetClass(void)

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
  uVar2 = PlantBoostPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"PlantFamilyBoostPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFamilyBoostPropertySheet::GetClass() const */

long * PlantFamilyBoostPropertySheet::GetClass(void)

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
  uVar2 = PlantBoostPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"PlantFamilyBoostPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFamilyBoostPropertySheet::PlantFamilyBoostPropertySheet() */

void __thiscall
PlantFamilyBoostPropertySheet::PlantFamilyBoostPropertySheet(PlantFamilyBoostPropertySheet *this)

{
  PlantBoostPropertySheet::PlantBoostPropertySheet((PlantBoostPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a5a70;
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x30) = 1;
  *(undefined4 *)(this + 0x38) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  return;
}


/* PlantFamilyBoostPropertySheet::StaticNew() */

PlantFamilyBoostPropertySheet * PlantFamilyBoostPropertySheet::StaticNew(void)

{
  PlantFamilyBoostPropertySheet *this;
  
  this = ::operator_new(0x70);
  PlantFamilyBoostPropertySheet(this);
  return this;
}


/* PlantFamilyBoostPropertySheet::~PlantFamilyBoostPropertySheet() */

void __thiscall
PlantFamilyBoostPropertySheet::~PlantFamilyBoostPropertySheet(PlantFamilyBoostPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_067a5a70;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x58));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x40));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  PlantBoostPropertySheet::~PlantBoostPropertySheet((PlantBoostPropertySheet *)this);
  return;
}


/* PlantFamilyBoostPropertySheet::~PlantFamilyBoostPropertySheet() */

void __thiscall
PlantFamilyBoostPropertySheet::~PlantFamilyBoostPropertySheet(PlantFamilyBoostPropertySheet *this)

{
  ~PlantFamilyBoostPropertySheet(this);
  AK::FreeHook(this);
  return;
}

