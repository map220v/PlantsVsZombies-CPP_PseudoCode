// Class: ArtifactHoloProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHoloProperties::StaticClassInit() */

void ArtifactHoloProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactHoloProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0374dd44,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactHoloProperties::StaticGetClass() */

long * ArtifactHoloProperties::StaticGetClass(void)

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
  uVar2 = ArtifactProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactHoloProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactHoloProperties::GetClass() const */

long * ArtifactHoloProperties::GetClass(void)

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
  uVar2 = ArtifactProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactHoloProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactHoloProperties::ArtifactHoloProperties() */

void __thiscall ArtifactHoloProperties::ArtifactHoloProperties(ArtifactHoloProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06695810;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x150));
  GridItemRestrictionSet::GridItemRestrictionSet((GridItemRestrictionSet *)(this + 0x178));
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x1a0));
  return;
}


/* ArtifactHoloProperties::StaticNew() */

ArtifactHoloProperties * ArtifactHoloProperties::StaticNew(void)

{
  ArtifactHoloProperties *this;
  
  this = ::operator_new(0x1c8);
  ArtifactHoloProperties(this);
  return this;
}


/* ArtifactHoloProperties::~ArtifactHoloProperties() */

void __thiscall ArtifactHoloProperties::~ArtifactHoloProperties(ArtifactHoloProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06695810;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x1a0));
  GridItemRestrictionSet::~GridItemRestrictionSet((GridItemRestrictionSet *)(this + 0x178));
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x150));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactHoloProperties::~ArtifactHoloProperties() */

void __thiscall ArtifactHoloProperties::~ArtifactHoloProperties(ArtifactHoloProperties *this)

{
  ~ArtifactHoloProperties(this);
  AK::FreeHook(this);
  return;
}

