// Class: AquaVineProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AquaVineProps::StaticClassInit() */

void AquaVineProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"AquaVineProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f4d38c,0x340,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AquaVineProps::StaticGetClass() */

long * AquaVineProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AquaVineProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AquaVineProps::GetClass() const */

long * AquaVineProps::GetClass(void)

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
  (*pcVar3)(plVar1,"AquaVineProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AquaVineProps::AquaVineProps() */

void __thiscall AquaVineProps::AquaVineProps(AquaVineProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_06798980;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x2c8));
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x2f0));
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x318));
  return;
}


/* AquaVineProps::StaticNew() */

AquaVineProps * AquaVineProps::StaticNew(void)

{
  AquaVineProps *this;
  
  this = ::operator_new(0x340);
  AquaVineProps(this);
  return this;
}


/* AquaVineProps::~AquaVineProps() */

void __thiscall AquaVineProps::~AquaVineProps(AquaVineProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06798980;
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x318));
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x2f0));
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* AquaVineProps::~AquaVineProps() */

void __thiscall AquaVineProps::~AquaVineProps(AquaVineProps *this)

{
  ~AquaVineProps(this);
  AK::FreeHook(this);
  return;
}

