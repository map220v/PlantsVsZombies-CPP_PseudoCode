// Class: GiantPlasmaProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiantPlasmaProjectileProps::StaticClassInit() */

void GiantPlasmaProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GiantPlasmaProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04086e34,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiantPlasmaProjectileProps::StaticGetClass() */

long * GiantPlasmaProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GiantPlasmaProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiantPlasmaProjectileProps::GetClass() const */

long * GiantPlasmaProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GiantPlasmaProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiantPlasmaProjectileProps::~GiantPlasmaProjectileProps() */

void __thiscall
GiantPlasmaProjectileProps::~GiantPlasmaProjectileProps(GiantPlasmaProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067cc100;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* GiantPlasmaProjectileProps::~GiantPlasmaProjectileProps() */

void __thiscall
GiantPlasmaProjectileProps::~GiantPlasmaProjectileProps(GiantPlasmaProjectileProps *this)

{
  ~GiantPlasmaProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* GiantPlasmaProjectileProps::GiantPlasmaProjectileProps() */

void __thiscall
GiantPlasmaProjectileProps::GiantPlasmaProjectileProps(GiantPlasmaProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x41c80000;
  *(undefined ***)this = &PTR_GetClass_067cc100;
  *(undefined4 *)(this + 0x1e4) = 0x425c0000;
  *(undefined4 *)(this + 0x1e8) = 0x44160000;
  *(undefined4 *)(this + 0x1ec) = 0xc3fa0000;
  return;
}


/* GiantPlasmaProjectileProps::StaticNew() */

GiantPlasmaProjectileProps * GiantPlasmaProjectileProps::StaticNew(void)

{
  GiantPlasmaProjectileProps *this;
  
  this = ::operator_new(0x1f0);
  GiantPlasmaProjectileProps(this);
  return this;
}

