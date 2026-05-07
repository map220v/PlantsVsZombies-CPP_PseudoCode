// Class: PrimalPeashooterProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalPeashooterProjectileProps::StaticClassInit() */

void PrimalPeashooterProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PrimalPeashooterProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_041819d0,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PrimalPeashooterProjectileProps::StaticGetClass() */

long * PrimalPeashooterProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PrimalPeashooterProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalPeashooterProjectileProps::GetClass() const */

long * PrimalPeashooterProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PrimalPeashooterProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalPeashooterProjectileProps::~PrimalPeashooterProjectileProps() */

void __thiscall
PrimalPeashooterProjectileProps::~PrimalPeashooterProjectileProps
          (PrimalPeashooterProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f8550;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* PrimalPeashooterProjectileProps::~PrimalPeashooterProjectileProps() */

void __thiscall
PrimalPeashooterProjectileProps::~PrimalPeashooterProjectileProps
          (PrimalPeashooterProjectileProps *this)

{
  ~PrimalPeashooterProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* PrimalPeashooterProjectileProps::PrimalPeashooterProjectileProps() */

void __thiscall
PrimalPeashooterProjectileProps::PrimalPeashooterProjectileProps
          (PrimalPeashooterProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  this[500] = (PrimalPeashooterProjectileProps)0x0;
  *(undefined ***)this = &PTR_GetClass_067f8550;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 0x1f8) = 0x3e19999a;
  return;
}


/* PrimalPeashooterProjectileProps::StaticNew() */

PrimalPeashooterProjectileProps * PrimalPeashooterProjectileProps::StaticNew(void)

{
  PrimalPeashooterProjectileProps *this;
  
  this = ::operator_new(0x200);
  PrimalPeashooterProjectileProps(this);
  return this;
}

