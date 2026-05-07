// Class: PrimalPeashooterSplitTargetProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalPeashooterSplitTargetProjectileProps::StaticClassInit() */

void PrimalPeashooterSplitTargetProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PrimalPeashooterSplitTargetProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_041815a4,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PrimalPeashooterSplitTargetProjectileProps::StaticGetClass() */

long * PrimalPeashooterSplitTargetProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PrimalPeashooterSplitTargetProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalPeashooterSplitTargetProjectileProps::GetClass() const */

long * PrimalPeashooterSplitTargetProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PrimalPeashooterSplitTargetProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalPeashooterSplitTargetProjectileProps::~PrimalPeashooterSplitTargetProjectileProps() */

void __thiscall
PrimalPeashooterSplitTargetProjectileProps::~PrimalPeashooterSplitTargetProjectileProps
          (PrimalPeashooterSplitTargetProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f82a0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* PrimalPeashooterSplitTargetProjectileProps::~PrimalPeashooterSplitTargetProjectileProps() */

void __thiscall
PrimalPeashooterSplitTargetProjectileProps::~PrimalPeashooterSplitTargetProjectileProps
          (PrimalPeashooterSplitTargetProjectileProps *this)

{
  ~PrimalPeashooterSplitTargetProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* PrimalPeashooterSplitTargetProjectileProps::PrimalPeashooterSplitTargetProjectileProps() */

void __thiscall
PrimalPeashooterSplitTargetProjectileProps::PrimalPeashooterSplitTargetProjectileProps
          (PrimalPeashooterSplitTargetProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067f82a0;
  *(undefined4 *)(this + 0x1e0) = 0;
  return;
}


/* PrimalPeashooterSplitTargetProjectileProps::StaticNew() */

PrimalPeashooterSplitTargetProjectileProps *
PrimalPeashooterSplitTargetProjectileProps::StaticNew(void)

{
  PrimalPeashooterSplitTargetProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  PrimalPeashooterSplitTargetProjectileProps(this);
  return this;
}

