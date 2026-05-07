// Class: AkeeProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AkeeProjectileProps::StaticClassInit() */

void AkeeProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"AkeeProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0410f5a8,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AkeeProjectileProps::StaticGetClass() */

long * AkeeProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AkeeProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AkeeProjectileProps::GetClass() const */

long * AkeeProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"AkeeProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AkeeProjectileProps::~AkeeProjectileProps() */

void __thiscall AkeeProjectileProps::~AkeeProjectileProps(AkeeProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067e5850;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* AkeeProjectileProps::~AkeeProjectileProps() */

void __thiscall AkeeProjectileProps::~AkeeProjectileProps(AkeeProjectileProps *this)

{
  ~AkeeProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* AkeeProjectileProps::AkeeProjectileProps() */

void __thiscall AkeeProjectileProps::AkeeProjectileProps(AkeeProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1ec) = 0x3f400000;
  *(undefined4 *)(this + 0x1e4) = 5;
  *(undefined ***)this = &PTR_GetClass_067e5850;
  *(undefined4 *)(this + 0x1f0) = 0x40a00000;
  *(undefined4 *)(this + 0x1e8) = 0x43480000;
  *(undefined4 *)(this + 0x1fc) = 0x43480000;
  *(undefined4 *)(this + 0x200) = 0x40000000;
  return;
}


/* AkeeProjectileProps::StaticNew() */

AkeeProjectileProps * AkeeProjectileProps::StaticNew(void)

{
  AkeeProjectileProps *this;
  
  this = ::operator_new(0x208);
  AkeeProjectileProps(this);
  return this;
}

