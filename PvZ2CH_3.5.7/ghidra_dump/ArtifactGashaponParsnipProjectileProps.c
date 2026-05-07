// Class: ArtifactGashaponParsnipProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponParsnipProjectileProps::StaticClassInit() */

void ArtifactGashaponParsnipProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactGashaponParsnipProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_037c25f4,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGashaponParsnipProjectileProps::StaticGetClass() */

long * ArtifactGashaponParsnipProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactGashaponParsnipProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGashaponParsnipProjectileProps::GetClass() const */

long * ArtifactGashaponParsnipProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactGashaponParsnipProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGashaponParsnipProjectileProps::~ArtifactGashaponParsnipProjectileProps() */

void __thiscall
ArtifactGashaponParsnipProjectileProps::~ArtifactGashaponParsnipProjectileProps
          (ArtifactGashaponParsnipProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06699e30;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* ArtifactGashaponParsnipProjectileProps::~ArtifactGashaponParsnipProjectileProps() */

void __thiscall
ArtifactGashaponParsnipProjectileProps::~ArtifactGashaponParsnipProjectileProps
          (ArtifactGashaponParsnipProjectileProps *this)

{
  ~ArtifactGashaponParsnipProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactGashaponParsnipProjectileProps::ArtifactGashaponParsnipProjectileProps() */

void __thiscall
ArtifactGashaponParsnipProjectileProps::ArtifactGashaponParsnipProjectileProps
          (ArtifactGashaponParsnipProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_06699e30;
  *(undefined4 *)(this + 0x1e4) = 0x42c80000;
  return;
}


/* ArtifactGashaponParsnipProjectileProps::StaticNew() */

ArtifactGashaponParsnipProjectileProps * ArtifactGashaponParsnipProjectileProps::StaticNew(void)

{
  ArtifactGashaponParsnipProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  ArtifactGashaponParsnipProjectileProps(this);
  return this;
}

