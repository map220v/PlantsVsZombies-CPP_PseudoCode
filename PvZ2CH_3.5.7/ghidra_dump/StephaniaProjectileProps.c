// Class: StephaniaProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaProjectileProps::StaticClassInit() */

void StephaniaProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StephaniaProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040f5194,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StephaniaProjectileProps::StaticGetClass() */

long * StephaniaProjectileProps::StaticGetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"StephaniaProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StephaniaProjectileProps::GetClass() const */

long * StephaniaProjectileProps::GetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"StephaniaProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StephaniaProjectileProps::~StephaniaProjectileProps() */

void __thiscall StephaniaProjectileProps::~StephaniaProjectileProps(StephaniaProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067e1660;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* StephaniaProjectileProps::~StephaniaProjectileProps() */

void __thiscall StephaniaProjectileProps::~StephaniaProjectileProps(StephaniaProjectileProps *this)

{
  ~StephaniaProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* StephaniaProjectileProps::StephaniaProjectileProps() */

void __thiscall StephaniaProjectileProps::StephaniaProjectileProps(StephaniaProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067e1660;
  return;
}


/* StephaniaProjectileProps::StaticNew() */

StephaniaProjectileProps * StephaniaProjectileProps::StaticNew(void)

{
  StephaniaProjectileProps *this;
  
  this = ::operator_new(0x1e0);
  StephaniaProjectileProps(this);
  return this;
}

