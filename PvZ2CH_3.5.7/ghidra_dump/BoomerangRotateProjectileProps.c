// Class: BoomerangRotateProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomerangRotateProjectileProps::StaticClassInit() */

void BoomerangRotateProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoomerangRotateProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0415b2ac,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoomerangRotateProjectileProps::StaticGetClass() */

long * BoomerangRotateProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoomerangRotateProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoomerangRotateProjectileProps::GetClass() const */

long * BoomerangRotateProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BoomerangRotateProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoomerangRotateProjectileProps::~BoomerangRotateProjectileProps() */

void __thiscall
BoomerangRotateProjectileProps::~BoomerangRotateProjectileProps
          (BoomerangRotateProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f1fc0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* BoomerangRotateProjectileProps::~BoomerangRotateProjectileProps() */

void __thiscall
BoomerangRotateProjectileProps::~BoomerangRotateProjectileProps
          (BoomerangRotateProjectileProps *this)

{
  ~BoomerangRotateProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* BoomerangRotateProjectileProps::BoomerangRotateProjectileProps() */

void __thiscall
BoomerangRotateProjectileProps::BoomerangRotateProjectileProps(BoomerangRotateProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x3f000000;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined ***)this = &PTR_GetClass_067f1fc0;
  *(undefined4 *)(this + 0x1e4) = 0x3f800000;
  return;
}


/* BoomerangRotateProjectileProps::StaticNew() */

BoomerangRotateProjectileProps * BoomerangRotateProjectileProps::StaticNew(void)

{
  BoomerangRotateProjectileProps *this;
  
  this = ::operator_new(0x1f0);
  BoomerangRotateProjectileProps(this);
  return this;
}

