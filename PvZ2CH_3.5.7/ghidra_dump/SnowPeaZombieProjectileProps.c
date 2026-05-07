// Class: SnowPeaZombieProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnowPeaZombieProjectileProps::StaticClassInit() */

void SnowPeaZombieProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SnowPeaZombieProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0480ee84,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SnowPeaZombieProjectileProps::StaticGetClass() */

long * SnowPeaZombieProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SnowPeaZombieProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SnowPeaZombieProjectileProps::GetClass() const */

long * SnowPeaZombieProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"SnowPeaZombieProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SnowPeaZombieProjectileProps::~SnowPeaZombieProjectileProps() */

void __thiscall
SnowPeaZombieProjectileProps::~SnowPeaZombieProjectileProps(SnowPeaZombieProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06901620;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* SnowPeaZombieProjectileProps::~SnowPeaZombieProjectileProps() */

void __thiscall
SnowPeaZombieProjectileProps::~SnowPeaZombieProjectileProps(SnowPeaZombieProjectileProps *this)

{
  ~SnowPeaZombieProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* SnowPeaZombieProjectileProps::SnowPeaZombieProjectileProps() */

void __thiscall
SnowPeaZombieProjectileProps::SnowPeaZombieProjectileProps(SnowPeaZombieProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_06901620;
  return;
}


/* SnowPeaZombieProjectileProps::StaticNew() */

SnowPeaZombieProjectileProps * SnowPeaZombieProjectileProps::StaticNew(void)

{
  SnowPeaZombieProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  SnowPeaZombieProjectileProps(this);
  return this;
}

