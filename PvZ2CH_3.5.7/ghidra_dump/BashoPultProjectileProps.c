// Class: BashoPultProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BashoPultProjectileProps::StaticClassInit() */

void BashoPultProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BashoPultProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040cc060,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BashoPultProjectileProps::StaticGetClass() */

long * BashoPultProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BashoPultProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BashoPultProjectileProps::GetClass() const */

long * BashoPultProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BashoPultProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BashoPultProjectileProps::~BashoPultProjectileProps() */

void __thiscall BashoPultProjectileProps::~BashoPultProjectileProps(BashoPultProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067d9c10;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* BashoPultProjectileProps::~BashoPultProjectileProps() */

void __thiscall BashoPultProjectileProps::~BashoPultProjectileProps(BashoPultProjectileProps *this)

{
  ~BashoPultProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* BashoPultProjectileProps::BashoPultProjectileProps() */

void __thiscall BashoPultProjectileProps::BashoPultProjectileProps(BashoPultProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x42c80000;
  *(undefined ***)this = &PTR_GetClass_067d9c10;
  *(undefined4 *)(this + 0x1e8) = 0x3f99999a;
  *(undefined4 *)(this + 0x1e4) = 0x43af0000;
  return;
}


/* BashoPultProjectileProps::StaticNew() */

BashoPultProjectileProps * BashoPultProjectileProps::StaticNew(void)

{
  BashoPultProjectileProps *this;
  
  this = ::operator_new(0x1f0);
  BashoPultProjectileProps(this);
  return this;
}

