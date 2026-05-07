// Class: LavaGuavaProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LavaGuavaProjectileProps::StaticClassInit() */

void LavaGuavaProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LavaGuavaProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_041223d4,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LavaGuavaProjectileProps::StaticGetClass() */

long * LavaGuavaProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LavaGuavaProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LavaGuavaProjectileProps::GetClass() const */

long * LavaGuavaProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LavaGuavaProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LavaGuavaProjectileProps::~LavaGuavaProjectileProps() */

void __thiscall LavaGuavaProjectileProps::~LavaGuavaProjectileProps(LavaGuavaProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067ea5b0;
  std::string::~string((string *)(this + 0x1e8));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* LavaGuavaProjectileProps::~LavaGuavaProjectileProps() */

void __thiscall LavaGuavaProjectileProps::~LavaGuavaProjectileProps(LavaGuavaProjectileProps *this)

{
  ~LavaGuavaProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LavaGuavaProjectileProps::LavaGuavaProjectileProps() */

void __thiscall LavaGuavaProjectileProps::LavaGuavaProjectileProps(LavaGuavaProjectileProps *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x41200000;
  *(undefined ***)this = &PTR_GetClass_067ea5b0;
  std::string::string((string *)(this + 0x1e8),"groundlava");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LavaGuavaProjectileProps::StaticNew() */

LavaGuavaProjectileProps * LavaGuavaProjectileProps::StaticNew(void)

{
  LavaGuavaProjectileProps *this;
  
  this = ::operator_new(0x1f0);
  LavaGuavaProjectileProps(this);
  return this;
}

