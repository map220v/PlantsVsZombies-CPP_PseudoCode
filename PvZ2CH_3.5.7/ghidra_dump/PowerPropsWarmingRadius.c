// Class: PowerPropsWarmingRadius


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerPropsWarmingRadius::StaticClassInit() */

void PowerPropsWarmingRadius::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerPropsWarmingRadius");
    (*pcVar2)(plVar1,asStack_10,FUN_03fa2248,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerPropsWarmingRadius::StaticGetClass() */

long * PowerPropsWarmingRadius::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerPropsWarmingRadius",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerPropsWarmingRadius::GetClass() const */

long * PowerPropsWarmingRadius::GetClass(void)

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
  (*pcVar3)(plVar1,"PowerPropsWarmingRadius",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerPropsWarmingRadius::~PowerPropsWarmingRadius() */

void __thiscall PowerPropsWarmingRadius::~PowerPropsWarmingRadius(PowerPropsWarmingRadius *this)

{
  *(undefined ***)this = &PTR_GetClass_067a5d40;
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x18));
  PowerPropertySheet::~PowerPropertySheet((PowerPropertySheet *)this);
  return;
}


/* PowerPropsWarmingRadius::~PowerPropsWarmingRadius() */

void __thiscall PowerPropsWarmingRadius::~PowerPropsWarmingRadius(PowerPropsWarmingRadius *this)

{
  ~PowerPropsWarmingRadius(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerPropsWarmingRadius::PowerPropsWarmingRadius() */

void __thiscall PowerPropsWarmingRadius::PowerPropsWarmingRadius(PowerPropsWarmingRadius *this)

{
  ComponentWarmingRadiusProps aCStack_120 [280];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PowerPropertySheet::PowerPropertySheet((PowerPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a5d40;
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x18));
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps(aCStack_120);
  ComponentWarmingRadiusProps::operator=((ComponentWarmingRadiusProps *)(this + 0x18),aCStack_120);
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps(aCStack_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerPropsWarmingRadius::StaticNew() */

PowerPropsWarmingRadius * PowerPropsWarmingRadius::StaticNew(void)

{
  PowerPropsWarmingRadius *this;
  
  this = ::operator_new(0x130);
  PowerPropsWarmingRadius(this);
  return this;
}

