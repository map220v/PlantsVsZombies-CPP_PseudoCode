// Class: CannonLaserProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonLaserProjectileProps::StaticClassInit() */

void CannonLaserProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"CannonLaserProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047c4410,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CannonLaserProjectileProps::StaticGetClass() */

long * CannonLaserProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CannonLaserProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CannonLaserProjectileProps::GetClass() const */

long * CannonLaserProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"CannonLaserProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CannonLaserProjectileProps::~CannonLaserProjectileProps() */

void __thiscall
CannonLaserProjectileProps::~CannonLaserProjectileProps(CannonLaserProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068e4510;
  std::string::~string((string *)(this + 0x1e0));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* CannonLaserProjectileProps::~CannonLaserProjectileProps() */

void __thiscall
CannonLaserProjectileProps::~CannonLaserProjectileProps(CannonLaserProjectileProps *this)

{
  ~CannonLaserProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* CannonLaserProjectileProps::CannonLaserProjectileProps() */

void __thiscall
CannonLaserProjectileProps::CannonLaserProjectileProps(CannonLaserProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068e4510;
  Set8BytesTo0(this + 0x1e0);
  Sexy::Point::Point((Point *)(this + 0x1e8));
  Sexy::Point::Point((Point *)(this + 0x1f0));
  *(undefined4 *)(this + 0x1f8) = 0x40400000;
  return;
}


/* CannonLaserProjectileProps::StaticNew() */

CannonLaserProjectileProps * CannonLaserProjectileProps::StaticNew(void)

{
  CannonLaserProjectileProps *this;
  
  this = ::operator_new(0x200);
  CannonLaserProjectileProps(this);
  return this;
}

