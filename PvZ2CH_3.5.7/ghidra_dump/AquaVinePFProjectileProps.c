// Class: AquaVinePFProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AquaVinePFProjectileProps::StaticClassInit() */

void AquaVinePFProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"AquaVinePFProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f4c61c,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AquaVinePFProjectileProps::StaticGetClass() */

long * AquaVinePFProjectileProps::StaticGetClass(void)

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
  uVar2 = AquaVineProjectileProps::StaticGetClass();
  (*pcVar3)(plVar1,"AquaVinePFProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AquaVinePFProjectileProps::GetClass() const */

long * AquaVinePFProjectileProps::GetClass(void)

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
  uVar2 = AquaVineProjectileProps::StaticGetClass();
  (*pcVar3)(plVar1,"AquaVinePFProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AquaVinePFProjectileProps::~AquaVinePFProjectileProps() */

void __thiscall
AquaVinePFProjectileProps::~AquaVinePFProjectileProps(AquaVinePFProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067998c0;
  AquaVineProjectileProps::~AquaVineProjectileProps((AquaVineProjectileProps *)this);
  return;
}


/* AquaVinePFProjectileProps::~AquaVinePFProjectileProps() */

void __thiscall
AquaVinePFProjectileProps::~AquaVinePFProjectileProps(AquaVinePFProjectileProps *this)

{
  ~AquaVinePFProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* AquaVinePFProjectileProps::AquaVinePFProjectileProps() */

void __thiscall
AquaVinePFProjectileProps::AquaVinePFProjectileProps(AquaVinePFProjectileProps *this)

{
  AquaVineProjectileProps::AquaVineProjectileProps((AquaVineProjectileProps *)this);
  *(undefined ***)this = &PTR_GetClass_067998c0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  return;
}


/* AquaVinePFProjectileProps::StaticNew() */

AquaVinePFProjectileProps * AquaVinePFProjectileProps::StaticNew(void)

{
  AquaVinePFProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  AquaVinePFProjectileProps(this);
  return this;
}

