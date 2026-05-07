// Class: HeathSeekerProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeathSeekerProjectileProps::StaticClassInit() */

void HeathSeekerProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeathSeekerProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0400d4a0,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeathSeekerProjectileProps::StaticGetClass() */

long * HeathSeekerProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeathSeekerProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeathSeekerProjectileProps::GetClass() const */

long * HeathSeekerProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"HeathSeekerProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeathSeekerProjectileProps::~HeathSeekerProjectileProps() */

void __thiscall
HeathSeekerProjectileProps::~HeathSeekerProjectileProps(HeathSeekerProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067b52f0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* HeathSeekerProjectileProps::~HeathSeekerProjectileProps() */

void __thiscall
HeathSeekerProjectileProps::~HeathSeekerProjectileProps(HeathSeekerProjectileProps *this)

{
  ~HeathSeekerProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* HeathSeekerProjectileProps::HeathSeekerProjectileProps() */

void __thiscall
HeathSeekerProjectileProps::HeathSeekerProjectileProps(HeathSeekerProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x40200000;
  *(undefined ***)this = &PTR_GetClass_067b52f0;
  *(undefined4 *)(this + 0x1e4) = 0x40a00000;
  return;
}


/* HeathSeekerProjectileProps::StaticNew() */

HeathSeekerProjectileProps * HeathSeekerProjectileProps::StaticNew(void)

{
  HeathSeekerProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  HeathSeekerProjectileProps(this);
  return this;
}

