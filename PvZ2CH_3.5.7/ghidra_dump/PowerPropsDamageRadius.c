// Class: PowerPropsDamageRadius


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerPropsDamageRadius::StaticClassInit() */

void PowerPropsDamageRadius::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerPropsDamageRadius");
    (*pcVar2)(plVar1,asStack_10,FUN_03fa242c,0x100,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerPropsDamageRadius::StaticGetClass() */

long * PowerPropsDamageRadius::StaticGetClass(void)

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
  uVar2 = PowerPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"PowerPropsDamageRadius",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerPropsDamageRadius::GetClass() const */

long * PowerPropsDamageRadius::GetClass(void)

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
  uVar2 = PowerPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"PowerPropsDamageRadius",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerPropsDamageRadius::~PowerPropsDamageRadius() */

void __thiscall PowerPropsDamageRadius::~PowerPropsDamageRadius(PowerPropsDamageRadius *this)

{
  *(undefined ***)this = &PTR_GetClass_067a5dd0;
  ComponentDamageRadiusProps::~ComponentDamageRadiusProps
            ((ComponentDamageRadiusProps *)(this + 0x18));
  PowerPropertySheet::~PowerPropertySheet((PowerPropertySheet *)this);
  return;
}


/* PowerPropsDamageRadius::~PowerPropsDamageRadius() */

void __thiscall PowerPropsDamageRadius::~PowerPropsDamageRadius(PowerPropsDamageRadius *this)

{
  ~PowerPropsDamageRadius(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerPropsDamageRadius::PowerPropsDamageRadius() */

void __thiscall PowerPropsDamageRadius::PowerPropsDamageRadius(PowerPropsDamageRadius *this)

{
  ComponentDamageRadiusProps aCStack_f0 [232];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PowerPropertySheet::PowerPropertySheet((PowerPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a5dd0;
  ComponentDamageRadiusProps::ComponentDamageRadiusProps
            ((ComponentDamageRadiusProps *)(this + 0x18));
  ComponentDamageRadiusProps::ComponentDamageRadiusProps(aCStack_f0);
  ComponentDamageRadiusProps::operator=((ComponentDamageRadiusProps *)(this + 0x18),aCStack_f0);
  ComponentDamageRadiusProps::~ComponentDamageRadiusProps(aCStack_f0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerPropsDamageRadius::StaticNew() */

PowerPropsDamageRadius * PowerPropsDamageRadius::StaticNew(void)

{
  PowerPropsDamageRadius *this;
  
  this = ::operator_new(0x100);
  PowerPropsDamageRadius(this);
  return this;
}

