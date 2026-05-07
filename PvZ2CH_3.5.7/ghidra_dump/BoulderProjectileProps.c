// Class: BoulderProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoulderProjectileProps::StaticClassInit() */

void BoulderProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoulderProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04918964,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoulderProjectileProps::StaticGetClass() */

long * BoulderProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoulderProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoulderProjectileProps::GetClass() const */

long * BoulderProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BoulderProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoulderProjectileProps::~BoulderProjectileProps() */

void __thiscall BoulderProjectileProps::~BoulderProjectileProps(BoulderProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0690f6c0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* BoulderProjectileProps::~BoulderProjectileProps() */

void __thiscall BoulderProjectileProps::~BoulderProjectileProps(BoulderProjectileProps *this)

{
  ~BoulderProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* BoulderProjectileProps::BoulderProjectileProps() */

void __thiscall BoulderProjectileProps::BoulderProjectileProps(BoulderProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0690f6c0;
  DVec3::DVec3((DVec3 *)(this + 0x1e0));
  *(undefined4 *)(this + 0x1ec) = 0x3e99999a;
  *(undefined4 *)(this + 0x1f0) = 0x3ba3d70a;
  return;
}


/* BoulderProjectileProps::StaticNew() */

BoulderProjectileProps * BoulderProjectileProps::StaticNew(void)

{
  BoulderProjectileProps *this;
  
  this = ::operator_new(0x1f8);
  BoulderProjectileProps(this);
  return this;
}

