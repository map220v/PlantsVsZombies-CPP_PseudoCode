// Class: VamporciniProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VamporciniProps::StaticClassInit() */

void VamporciniProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"VamporciniProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d09fc0,0x350,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VamporciniProps::StaticGetClass() */

long * VamporciniProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"VamporciniProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VamporciniProps::GetClass() const */

long * VamporciniProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"VamporciniProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VamporciniProps::VamporciniProps() */

void __thiscall VamporciniProps::VamporciniProps(VamporciniProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069a6b10;
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2d0) = 0;
  *(undefined4 *)(this + 0x2d4) = 0;
  *(undefined4 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2dc) = 0;
  *(undefined4 *)(this + 0x2e0) = 0;
  *(undefined4 *)(this + 0x2e4) = 0;
  *(undefined4 *)(this + 0x2e8) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x2ec));
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x300));
  GridItemRestrictionSet::GridItemRestrictionSet((GridItemRestrictionSet *)(this + 0x328));
  return;
}


/* VamporciniProps::StaticNew() */

VamporciniProps * VamporciniProps::StaticNew(void)

{
  VamporciniProps *this;
  
  this = ::operator_new(0x350);
  VamporciniProps(this);
  return this;
}


/* VamporciniProps::~VamporciniProps() */

void __thiscall VamporciniProps::~VamporciniProps(VamporciniProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069a6b10;
  GridItemRestrictionSet::~GridItemRestrictionSet((GridItemRestrictionSet *)(this + 0x328));
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x300));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* VamporciniProps::~VamporciniProps() */

void __thiscall VamporciniProps::~VamporciniProps(VamporciniProps *this)

{
  ~VamporciniProps(this);
  AK::FreeHook(this);
  return;
}

