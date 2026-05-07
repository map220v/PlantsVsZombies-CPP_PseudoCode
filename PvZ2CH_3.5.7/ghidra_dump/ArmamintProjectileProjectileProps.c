// Class: ArmamintProjectileProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmamintProjectileProjectileProps::StaticClassInit() */

void ArmamintProjectileProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArmamintProjectileProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04296944,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArmamintProjectileProjectileProps::StaticGetClass() */

long * ArmamintProjectileProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArmamintProjectileProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArmamintProjectileProjectileProps::GetClass() const */

long * ArmamintProjectileProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ArmamintProjectileProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArmamintProjectileProjectileProps::~ArmamintProjectileProjectileProps() */

void __thiscall
ArmamintProjectileProjectileProps::~ArmamintProjectileProjectileProps
          (ArmamintProjectileProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068275e0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* ArmamintProjectileProjectileProps::~ArmamintProjectileProjectileProps() */

void __thiscall
ArmamintProjectileProjectileProps::~ArmamintProjectileProjectileProps
          (ArmamintProjectileProjectileProps *this)

{
  ~ArmamintProjectileProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* ArmamintProjectileProjectileProps::ArmamintProjectileProjectileProps() */

void __thiscall
ArmamintProjectileProjectileProps::ArmamintProjectileProjectileProps
          (ArmamintProjectileProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e8) = 0x3f400000;
  *(undefined4 *)(this + 0x1e0) = 5;
  *(undefined ***)this = &PTR_GetClass_068275e0;
  *(undefined4 *)(this + 0x1ec) = 0x40a00000;
  *(undefined4 *)(this + 0x1e4) = 0x43480000;
  return;
}


/* ArmamintProjectileProjectileProps::StaticNew() */

ArmamintProjectileProjectileProps * ArmamintProjectileProjectileProps::StaticNew(void)

{
  ArmamintProjectileProjectileProps *this;
  
  this = ::operator_new(0x1f8);
  ArmamintProjectileProjectileProps(this);
  return this;
}

