// Class: ShineVineProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShineVineProps::StaticClassInit() */

void ShineVineProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ShineVineProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03faa824,0x2f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShineVineProps::StaticGetClass() */

long * ShineVineProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ShineVineProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShineVineProps::GetClass() const */

long * ShineVineProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ShineVineProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShineVineProps::ShineVineProps() */

void __thiscall ShineVineProps::ShineVineProps(ShineVineProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined ***)this = &PTR_GetClass_067a62a0;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x2c8));
  *(undefined4 *)(this + 0x2b8) = 0x19;
  *(undefined4 *)(this + 700) = 0x3e800000;
  *(undefined4 *)(this + 0x2c0) = 0x3ee66666;
  return;
}


/* ShineVineProps::StaticNew() */

ShineVineProps * ShineVineProps::StaticNew(void)

{
  ShineVineProps *this;
  
  this = ::operator_new(0x2f0);
  ShineVineProps(this);
  return this;
}


/* ShineVineProps::~ShineVineProps() */

void __thiscall ShineVineProps::~ShineVineProps(ShineVineProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a62a0;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ShineVineProps::~ShineVineProps() */

void __thiscall ShineVineProps::~ShineVineProps(ShineVineProps *this)

{
  ~ShineVineProps(this);
  AK::FreeHook(this);
  return;
}

