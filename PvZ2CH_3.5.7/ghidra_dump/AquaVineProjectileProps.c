// Class: AquaVineProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AquaVineProjectileProps::StaticClassInit() */

void AquaVineProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"AquaVineProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f4c034,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AquaVineProjectileProps::StaticGetClass() */

long * AquaVineProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AquaVineProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AquaVineProjectileProps::GetClass() const */

long * AquaVineProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"AquaVineProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AquaVineProjectileProps::~AquaVineProjectileProps() */

void __thiscall AquaVineProjectileProps::~AquaVineProjectileProps(AquaVineProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067993f0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* AquaVineProjectileProps::~AquaVineProjectileProps() */

void __thiscall AquaVineProjectileProps::~AquaVineProjectileProps(AquaVineProjectileProps *this)

{
  ~AquaVineProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* AquaVineProjectileProps::AquaVineProjectileProps() */

void __thiscall AquaVineProjectileProps::AquaVineProjectileProps(AquaVineProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067993f0;
  return;
}


/* AquaVineProjectileProps::StaticNew() */

AquaVineProjectileProps * AquaVineProjectileProps::StaticNew(void)

{
  AquaVineProjectileProps *this;
  
  this = ::operator_new(0x1e0);
  AquaVineProjectileProps(this);
  return this;
}

