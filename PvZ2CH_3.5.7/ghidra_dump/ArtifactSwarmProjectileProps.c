// Class: ArtifactSwarmProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSwarmProjectileProps::StaticClassInit() */

void ArtifactSwarmProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactSwarmProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_037f1398,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSwarmProjectileProps::StaticGetClass() */

long * ArtifactSwarmProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSwarmProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSwarmProjectileProps::GetClass() const */

long * ArtifactSwarmProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSwarmProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSwarmProjectileProps::~ArtifactSwarmProjectileProps() */

void __thiscall
ArtifactSwarmProjectileProps::~ArtifactSwarmProjectileProps(ArtifactSwarmProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0669c8d0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* ArtifactSwarmProjectileProps::~ArtifactSwarmProjectileProps() */

void __thiscall
ArtifactSwarmProjectileProps::~ArtifactSwarmProjectileProps(ArtifactSwarmProjectileProps *this)

{
  ~ArtifactSwarmProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSwarmProjectileProps::ArtifactSwarmProjectileProps() */

void __thiscall
ArtifactSwarmProjectileProps::ArtifactSwarmProjectileProps(ArtifactSwarmProjectileProps *this)

{
  undefined4 uVar1;
  
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  uVar1 = _FUN_037f1db0;
  *(undefined4 *)(this + 0x1e4) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_0669c8d0;
  *(undefined4 *)(this + 0x1e0) = uVar1;
  *(undefined4 *)(this + 0x1e8) = 0x41f00000;
  return;
}


/* ArtifactSwarmProjectileProps::StaticNew() */

ArtifactSwarmProjectileProps * ArtifactSwarmProjectileProps::StaticNew(void)

{
  ArtifactSwarmProjectileProps *this;
  
  this = ::operator_new(0x1f0);
  ArtifactSwarmProjectileProps(this);
  return this;
}

