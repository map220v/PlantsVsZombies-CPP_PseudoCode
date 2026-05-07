// Class: ArtifactGashaponGuacodileProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponGuacodileProjectileProps::StaticClassInit() */

void ArtifactGashaponGuacodileProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactGashaponGuacodileProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_037c2194,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGashaponGuacodileProjectileProps::StaticGetClass() */

long * ArtifactGashaponGuacodileProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactGashaponGuacodileProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGashaponGuacodileProjectileProps::GetClass() const */

long * ArtifactGashaponGuacodileProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactGashaponGuacodileProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGashaponGuacodileProjectileProps::~ArtifactGashaponGuacodileProjectileProps() */

void __thiscall
ArtifactGashaponGuacodileProjectileProps::~ArtifactGashaponGuacodileProjectileProps
          (ArtifactGashaponGuacodileProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06699b70;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* ArtifactGashaponGuacodileProjectileProps::~ArtifactGashaponGuacodileProjectileProps() */

void __thiscall
ArtifactGashaponGuacodileProjectileProps::~ArtifactGashaponGuacodileProjectileProps
          (ArtifactGashaponGuacodileProjectileProps *this)

{
  ~ArtifactGashaponGuacodileProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactGashaponGuacodileProjectileProps::ArtifactGashaponGuacodileProjectileProps() */

void __thiscall
ArtifactGashaponGuacodileProjectileProps::ArtifactGashaponGuacodileProjectileProps
          (ArtifactGashaponGuacodileProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_06699b70;
  *(undefined4 *)(this + 0x1e4) = 0x42c80000;
  return;
}


/* ArtifactGashaponGuacodileProjectileProps::StaticNew() */

ArtifactGashaponGuacodileProjectileProps * ArtifactGashaponGuacodileProjectileProps::StaticNew(void)

{
  ArtifactGashaponGuacodileProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  ArtifactGashaponGuacodileProjectileProps(this);
  return this;
}

