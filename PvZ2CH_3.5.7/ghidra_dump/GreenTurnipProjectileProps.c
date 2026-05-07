// Class: GreenTurnipProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GreenTurnipProjectileProps::StaticClassInit() */

void GreenTurnipProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GreenTurnipProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040e0ed0,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GreenTurnipProjectileProps::StaticGetClass() */

long * GreenTurnipProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GreenTurnipProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GreenTurnipProjectileProps::GetClass() const */

long * GreenTurnipProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GreenTurnipProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GreenTurnipProjectileProps::~GreenTurnipProjectileProps() */

void __thiscall
GreenTurnipProjectileProps::~GreenTurnipProjectileProps(GreenTurnipProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067dd960;
  std::string::~string((string *)(this + 0x1f0));
  std::string::~string((string *)(this + 0x1e8));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* GreenTurnipProjectileProps::~GreenTurnipProjectileProps() */

void __thiscall
GreenTurnipProjectileProps::~GreenTurnipProjectileProps(GreenTurnipProjectileProps *this)

{
  ~GreenTurnipProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* GreenTurnipProjectileProps::GreenTurnipProjectileProps() */

void __thiscall
GreenTurnipProjectileProps::GreenTurnipProjectileProps(GreenTurnipProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067dd960;
  Set8BytesTo0(this + 0x1e8);
  Set8BytesTo0(this + 0x1f0);
  *(undefined4 *)(this + 0x1e4) = 0x3f400000;
  *(undefined4 *)(this + 0x1e0) = 0x43480000;
  return;
}


/* GreenTurnipProjectileProps::StaticNew() */

GreenTurnipProjectileProps * GreenTurnipProjectileProps::StaticNew(void)

{
  GreenTurnipProjectileProps *this;
  
  this = ::operator_new(0x1f8);
  GreenTurnipProjectileProps(this);
  return this;
}

