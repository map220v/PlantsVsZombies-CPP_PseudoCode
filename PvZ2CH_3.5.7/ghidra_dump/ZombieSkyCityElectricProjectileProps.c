// Class: ZombieSkyCityElectricProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityElectricProjectileProps::StaticClassInit() */

void ZombieSkyCityElectricProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSkyCityElectricProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047a68e4,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityElectricProjectileProps::StaticGetClass() */

long * ZombieSkyCityElectricProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSkyCityElectricProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityElectricProjectileProps::GetClass() const */

long * ZombieSkyCityElectricProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSkyCityElectricProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityElectricProjectileProps::~ZombieSkyCityElectricProjectileProps() */

void __thiscall
ZombieSkyCityElectricProjectileProps::~ZombieSkyCityElectricProjectileProps
          (ZombieSkyCityElectricProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068e05f0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* ZombieSkyCityElectricProjectileProps::~ZombieSkyCityElectricProjectileProps() */

void __thiscall
ZombieSkyCityElectricProjectileProps::~ZombieSkyCityElectricProjectileProps
          (ZombieSkyCityElectricProjectileProps *this)

{
  ~ZombieSkyCityElectricProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieSkyCityElectricProjectileProps::ZombieSkyCityElectricProjectileProps() */

void __thiscall
ZombieSkyCityElectricProjectileProps::ZombieSkyCityElectricProjectileProps
          (ZombieSkyCityElectricProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined ***)this = &PTR_GetClass_068e05f0;
  return;
}


/* ZombieSkyCityElectricProjectileProps::StaticNew() */

ZombieSkyCityElectricProjectileProps * ZombieSkyCityElectricProjectileProps::StaticNew(void)

{
  ZombieSkyCityElectricProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  ZombieSkyCityElectricProjectileProps(this);
  return this;
}

