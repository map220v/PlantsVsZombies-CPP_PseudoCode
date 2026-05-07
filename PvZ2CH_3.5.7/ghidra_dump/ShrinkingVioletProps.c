// Class: ShrinkingVioletProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShrinkingVioletProps::StaticClassInit() */

void ShrinkingVioletProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ShrinkingVioletProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04186f70,0x2e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShrinkingVioletProps::StaticGetClass() */

long * ShrinkingVioletProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ShrinkingVioletProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShrinkingVioletProps::GetClass() const */

long * ShrinkingVioletProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ShrinkingVioletProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShrinkingVioletProps::ShrinkingVioletProps() */

void __thiscall ShrinkingVioletProps::ShrinkingVioletProps(ShrinkingVioletProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067f9890;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2c0));
  return;
}


/* ShrinkingVioletProps::StaticNew() */

ShrinkingVioletProps * ShrinkingVioletProps::StaticNew(void)

{
  ShrinkingVioletProps *this;
  
  this = ::operator_new(0x2e8);
  ShrinkingVioletProps(this);
  return this;
}


/* ShrinkingVioletProps::~ShrinkingVioletProps() */

void __thiscall ShrinkingVioletProps::~ShrinkingVioletProps(ShrinkingVioletProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f9890;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ShrinkingVioletProps::~ShrinkingVioletProps() */

void __thiscall ShrinkingVioletProps::~ShrinkingVioletProps(ShrinkingVioletProps *this)

{
  ~ShrinkingVioletProps(this);
  AK::FreeHook(this);
  return;
}

