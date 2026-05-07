// Class: SapflingProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SapflingProjectileProps::StaticClassInit() */

void SapflingProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SapflingProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0409ac60,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SapflingProjectileProps::StaticGetClass() */

long * SapflingProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SapflingProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SapflingProjectileProps::GetClass() const */

long * SapflingProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"SapflingProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SapflingProjectileProps::~SapflingProjectileProps() */

void __thiscall SapflingProjectileProps::~SapflingProjectileProps(SapflingProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067d0190;
  std::string::~string((string *)(this + 0x1e0));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* SapflingProjectileProps::~SapflingProjectileProps() */

void __thiscall SapflingProjectileProps::~SapflingProjectileProps(SapflingProjectileProps *this)

{
  ~SapflingProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* SapflingProjectileProps::SapflingProjectileProps() */

void __thiscall SapflingProjectileProps::SapflingProjectileProps(SapflingProjectileProps *this)

{
  size_t in_x2;
  
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067d0190;
  Set8BytesTo0((string *)(this + 0x1e0));
  std::string::append((string *)(this + 0x1e0),"sap",in_x2);
  return;
}


/* SapflingProjectileProps::StaticNew() */

SapflingProjectileProps * SapflingProjectileProps::StaticNew(void)

{
  SapflingProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  SapflingProjectileProps(this);
  return this;
}

