// Class: VanillaTornadoProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VanillaTornadoProjectileProps::StaticClassInit() */

void VanillaTornadoProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"VanillaTornadoProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0396749c,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VanillaTornadoProjectileProps::StaticGetClass() */

long * VanillaTornadoProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VanillaTornadoProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VanillaTornadoProjectileProps::GetClass() const */

long * VanillaTornadoProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"VanillaTornadoProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VanillaTornadoProjectileProps::~VanillaTornadoProjectileProps() */

void __thiscall
VanillaTornadoProjectileProps::~VanillaTornadoProjectileProps(VanillaTornadoProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066d5ae0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* VanillaTornadoProjectileProps::~VanillaTornadoProjectileProps() */

void __thiscall
VanillaTornadoProjectileProps::~VanillaTornadoProjectileProps(VanillaTornadoProjectileProps *this)

{
  ~VanillaTornadoProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* VanillaTornadoProjectileProps::VanillaTornadoProjectileProps() */

void __thiscall
VanillaTornadoProjectileProps::VanillaTornadoProjectileProps(VanillaTornadoProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_066d5ae0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1e4));
  *(undefined4 *)(this + 0x1e0) = 0x447a0000;
  return;
}


/* VanillaTornadoProjectileProps::StaticNew() */

VanillaTornadoProjectileProps * VanillaTornadoProjectileProps::StaticNew(void)

{
  VanillaTornadoProjectileProps *this;
  
  this = ::operator_new(0x1f0);
  VanillaTornadoProjectileProps(this);
  return this;
}

