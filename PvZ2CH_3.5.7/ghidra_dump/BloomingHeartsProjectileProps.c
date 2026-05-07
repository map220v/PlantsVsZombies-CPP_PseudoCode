// Class: BloomingHeartsProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BloomingHeartsProjectileProps::StaticClassInit() */

void BloomingHeartsProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BloomingHeartsProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03afb320,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BloomingHeartsProjectileProps::StaticGetClass() */

long * BloomingHeartsProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BloomingHeartsProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BloomingHeartsProjectileProps::GetClass() const */

long * BloomingHeartsProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BloomingHeartsProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BloomingHeartsProjectileProps::~BloomingHeartsProjectileProps() */

void __thiscall
BloomingHeartsProjectileProps::~BloomingHeartsProjectileProps(BloomingHeartsProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06727820;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* BloomingHeartsProjectileProps::~BloomingHeartsProjectileProps() */

void __thiscall
BloomingHeartsProjectileProps::~BloomingHeartsProjectileProps(BloomingHeartsProjectileProps *this)

{
  ~BloomingHeartsProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* BloomingHeartsProjectileProps::BloomingHeartsProjectileProps() */

void __thiscall
BloomingHeartsProjectileProps::BloomingHeartsProjectileProps(BloomingHeartsProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x40a00000;
  *(undefined4 *)(this + 0x1e8) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_06727820;
  *(undefined4 *)(this + 0x1e4) = 0x41200000;
  *(undefined4 *)(this + 0x1f0) = 0x3f800000;
  *(undefined4 *)(this + 0x1ec) = 0x3f000000;
  *(undefined4 *)(this + 500) = 0x40400000;
  return;
}


/* BloomingHeartsProjectileProps::StaticNew() */

BloomingHeartsProjectileProps * BloomingHeartsProjectileProps::StaticNew(void)

{
  BloomingHeartsProjectileProps *this;
  
  this = ::operator_new(0x1f8);
  BloomingHeartsProjectileProps(this);
  return this;
}

