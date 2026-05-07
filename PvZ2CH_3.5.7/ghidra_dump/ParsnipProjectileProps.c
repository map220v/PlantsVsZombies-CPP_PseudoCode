// Class: ParsnipProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParsnipProjectileProps::StaticClassInit() */

void ParsnipProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ParsnipProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03bee08c,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ParsnipProjectileProps::StaticGetClass() */

long * ParsnipProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ParsnipProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ParsnipProjectileProps::GetClass() const */

long * ParsnipProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ParsnipProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ParsnipProjectileProps::~ParsnipProjectileProps() */

void __thiscall ParsnipProjectileProps::~ParsnipProjectileProps(ParsnipProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06740bb0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* ParsnipProjectileProps::~ParsnipProjectileProps() */

void __thiscall ParsnipProjectileProps::~ParsnipProjectileProps(ParsnipProjectileProps *this)

{
  ~ParsnipProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* ParsnipProjectileProps::ParsnipProjectileProps() */

void __thiscall ParsnipProjectileProps::ParsnipProjectileProps(ParsnipProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_06740bb0;
  *(undefined4 *)(this + 0x1e4) = 0x42c80000;
  return;
}


/* ParsnipProjectileProps::StaticNew() */

ParsnipProjectileProps * ParsnipProjectileProps::StaticNew(void)

{
  ParsnipProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  ParsnipProjectileProps(this);
  return this;
}

