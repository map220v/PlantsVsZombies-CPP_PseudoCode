// Class: FishHookGrassProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishHookGrassProjectileProps::StaticClassInit() */

void FishHookGrassProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"FishHookGrassProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0401acec,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FishHookGrassProjectileProps::StaticGetClass() */

long * FishHookGrassProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FishHookGrassProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FishHookGrassProjectileProps::GetClass() const */

long * FishHookGrassProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"FishHookGrassProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FishHookGrassProjectileProps::~FishHookGrassProjectileProps() */

void __thiscall
FishHookGrassProjectileProps::~FishHookGrassProjectileProps(FishHookGrassProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067b71b0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* FishHookGrassProjectileProps::~FishHookGrassProjectileProps() */

void __thiscall
FishHookGrassProjectileProps::~FishHookGrassProjectileProps(FishHookGrassProjectileProps *this)

{
  ~FishHookGrassProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* FishHookGrassProjectileProps::FishHookGrassProjectileProps() */

void __thiscall
FishHookGrassProjectileProps::FishHookGrassProjectileProps(FishHookGrassProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067b71b0;
  return;
}


/* FishHookGrassProjectileProps::StaticNew() */

FishHookGrassProjectileProps * FishHookGrassProjectileProps::StaticNew(void)

{
  FishHookGrassProjectileProps *this;
  
  this = ::operator_new(0x1e0);
  FishHookGrassProjectileProps(this);
  return this;
}

