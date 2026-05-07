// Class: ReincarnationRedPuffProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ReincarnationRedPuffProjectileProps::StaticClassInit() */

void ReincarnationRedPuffProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ReincarnationRedPuffProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0424a140,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ReincarnationRedPuffProjectileProps::StaticGetClass() */

long * ReincarnationRedPuffProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ReincarnationRedPuffProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ReincarnationRedPuffProjectileProps::GetClass() const */

long * ReincarnationRedPuffProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ReincarnationRedPuffProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ReincarnationRedPuffProjectileProps::~ReincarnationRedPuffProjectileProps() */

void __thiscall
ReincarnationRedPuffProjectileProps::~ReincarnationRedPuffProjectileProps
          (ReincarnationRedPuffProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068174a0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* ReincarnationRedPuffProjectileProps::~ReincarnationRedPuffProjectileProps() */

void __thiscall
ReincarnationRedPuffProjectileProps::~ReincarnationRedPuffProjectileProps
          (ReincarnationRedPuffProjectileProps *this)

{
  ~ReincarnationRedPuffProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* ReincarnationRedPuffProjectileProps::ReincarnationRedPuffProjectileProps() */

void __thiscall
ReincarnationRedPuffProjectileProps::ReincarnationRedPuffProjectileProps
          (ReincarnationRedPuffProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  this[0x1e0] = (ReincarnationRedPuffProjectileProps)0x0;
  *(undefined ***)this = &PTR_GetClass_068174a0;
  *(undefined4 *)(this + 0x1e4) = 0x40a00000;
  return;
}


/* ReincarnationRedPuffProjectileProps::StaticNew() */

ReincarnationRedPuffProjectileProps * ReincarnationRedPuffProjectileProps::StaticNew(void)

{
  ReincarnationRedPuffProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  ReincarnationRedPuffProjectileProps(this);
  return this;
}

