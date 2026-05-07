// Class: PepperpultProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PepperpultProps::StaticClassInit() */

void PepperpultProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PepperpultProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040b2178,0x4f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PepperpultProps::StaticGetClass() */

long * PepperpultProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PepperpultProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PepperpultProps::GetClass() const */

long * PepperpultProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PepperpultProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PepperpultProps::PepperpultProps() */

void __thiscall PepperpultProps::PepperpultProps(PepperpultProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067d4710;
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2c8));
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x3e0));
  *(undefined4 *)(this + 0x2c0) = 4;
  *(undefined4 *)(this + 0x2b8) = 0x3f99999a;
  *(undefined4 *)(this + 700) = 0x43af0000;
  return;
}


/* PepperpultProps::StaticNew() */

PepperpultProps * PepperpultProps::StaticNew(void)

{
  PepperpultProps *this;
  
  this = ::operator_new(0x4f8);
  PepperpultProps(this);
  return this;
}


/* PepperpultProps::~PepperpultProps() */

void __thiscall PepperpultProps::~PepperpultProps(PepperpultProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067d4710;
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x3e0));
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PepperpultProps::~PepperpultProps() */

void __thiscall PepperpultProps::~PepperpultProps(PepperpultProps *this)

{
  ~PepperpultProps(this);
  AK::FreeHook(this);
  return;
}

