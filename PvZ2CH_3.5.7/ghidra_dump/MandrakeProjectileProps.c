// Class: MandrakeProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MandrakeProjectileProps::StaticClassInit() */

void MandrakeProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MandrakeProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d51358,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MandrakeProjectileProps::StaticGetClass() */

long * MandrakeProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MandrakeProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MandrakeProjectileProps::GetClass() const */

long * MandrakeProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"MandrakeProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MandrakeProjectileProps::~MandrakeProjectileProps() */

void __thiscall MandrakeProjectileProps::~MandrakeProjectileProps(MandrakeProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069b2920;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* MandrakeProjectileProps::~MandrakeProjectileProps() */

void __thiscall MandrakeProjectileProps::~MandrakeProjectileProps(MandrakeProjectileProps *this)

{
  ~MandrakeProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* MandrakeProjectileProps::MandrakeProjectileProps() */

void __thiscall MandrakeProjectileProps::MandrakeProjectileProps(MandrakeProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e8) = 0x3f400000;
  *(undefined4 *)(this + 0x1f0) = 1;
  *(undefined ***)this = &PTR_GetClass_069b2920;
  *(undefined4 *)(this + 0x1ec) = 0x3f000000;
  *(undefined4 *)(this + 0x1e0) = 0x43a28000;
  *(undefined4 *)(this + 0x1e4) = 0x3f99999a;
  return;
}


/* MandrakeProjectileProps::StaticNew() */

MandrakeProjectileProps * MandrakeProjectileProps::StaticNew(void)

{
  MandrakeProjectileProps *this;
  
  this = ::operator_new(0x1f8);
  MandrakeProjectileProps(this);
  return this;
}

