// Class: ArtifactGravityProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravityProperties::StaticClassInit() */

void ArtifactGravityProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactGravityProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03743a14,0x178,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGravityProperties::StaticGetClass() */

long * ArtifactGravityProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactGravityProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGravityProperties::GetClass() const */

long * ArtifactGravityProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactGravityProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGravityProperties::ArtifactGravityProperties() */

void __thiscall
ArtifactGravityProperties::ArtifactGravityProperties(ArtifactGravityProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06695a20;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x150));
  return;
}


/* ArtifactGravityProperties::StaticNew() */

ArtifactGravityProperties * ArtifactGravityProperties::StaticNew(void)

{
  ArtifactGravityProperties *this;
  
  this = ::operator_new(0x178);
  ArtifactGravityProperties(this);
  return this;
}


/* ArtifactGravityProperties::~ArtifactGravityProperties() */

void __thiscall
ArtifactGravityProperties::~ArtifactGravityProperties(ArtifactGravityProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06695a20;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x150));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactGravityProperties::~ArtifactGravityProperties() */

void __thiscall
ArtifactGravityProperties::~ArtifactGravityProperties(ArtifactGravityProperties *this)

{
  ~ArtifactGravityProperties(this);
  AK::FreeHook(this);
  return;
}

