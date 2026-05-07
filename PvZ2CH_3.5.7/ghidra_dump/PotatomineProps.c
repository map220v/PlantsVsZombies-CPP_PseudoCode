// Class: PotatomineProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PotatomineProps::StaticClassInit() */

void PotatomineProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PotatomineProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04058ae4,0x3d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PotatomineProps::StaticGetClass() */

long * PotatomineProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PotatomineProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PotatomineProps::GetClass() const */

long * PotatomineProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PotatomineProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PotatomineProps::PotatomineProps() */

void __thiscall PotatomineProps::PotatomineProps(PotatomineProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  this[0x2b8] = (PotatomineProps)0x0;
  *(undefined4 *)(this + 700) = 0;
  *(undefined ***)this = &PTR_GetClass_067c1db0;
  *(undefined4 *)(this + 0x2c0) = 0x41700000;
  DuplicatableProps::DuplicatableProps((DuplicatableProps *)(this + 0x2c8));
  ComponentDamageRadiusProps::ComponentDamageRadiusProps
            ((ComponentDamageRadiusProps *)(this + 0x2e8));
  return;
}


/* PotatomineProps::StaticNew() */

PotatomineProps * PotatomineProps::StaticNew(void)

{
  PotatomineProps *this;
  
  this = ::operator_new(0x3d0);
  PotatomineProps(this);
  return this;
}


/* PotatomineProps::~PotatomineProps() */

void __thiscall PotatomineProps::~PotatomineProps(PotatomineProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067c1db0;
  ComponentDamageRadiusProps::~ComponentDamageRadiusProps
            ((ComponentDamageRadiusProps *)(this + 0x2e8));
  DuplicatableProps::~DuplicatableProps((DuplicatableProps *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PotatomineProps::~PotatomineProps() */

void __thiscall PotatomineProps::~PotatomineProps(PotatomineProps *this)

{
  ~PotatomineProps(this);
  AK::FreeHook(this);
  return;
}

