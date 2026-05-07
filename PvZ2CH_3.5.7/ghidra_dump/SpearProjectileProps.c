// Class: SpearProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpearProjectileProps::StaticClassInit() */

void SpearProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpearProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e44fd0,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpearProjectileProps::StaticGetClass() */

long * SpearProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpearProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpearProjectileProps::GetClass() const */

long * SpearProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"SpearProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpearProjectileProps::~SpearProjectileProps() */

void __thiscall SpearProjectileProps::~SpearProjectileProps(SpearProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069df720;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* SpearProjectileProps::~SpearProjectileProps() */

void __thiscall SpearProjectileProps::~SpearProjectileProps(SpearProjectileProps *this)

{
  ~SpearProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpearProjectileProps::SpearProjectileProps() */

void __thiscall SpearProjectileProps::SpearProjectileProps(SpearProjectileProps *this)

{
  undefined4 uVar1;
  
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  uVar1 = _FUN_04e4b400;
  *(undefined4 *)(this + 0x1e4) = 0x40a00000;
  *(undefined ***)this = &PTR_GetClass_069df720;
  *(undefined4 *)(this + 0x1e0) = uVar1;
  *(undefined4 *)(this + 0x1e8) = 0x41700000;
  return;
}


/* SpearProjectileProps::StaticNew() */

SpearProjectileProps * SpearProjectileProps::StaticNew(void)

{
  SpearProjectileProps *this;
  
  this = ::operator_new(0x1f0);
  SpearProjectileProps(this);
  return this;
}

