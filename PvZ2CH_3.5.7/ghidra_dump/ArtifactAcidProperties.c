// Class: ArtifactAcidProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactAcidProperties::StaticClassInit() */

void ArtifactAcidProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactAcidProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0372d284,0x158,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactAcidProperties::StaticGetClass() */

long * ArtifactAcidProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactAcidProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactAcidProperties::GetClass() const */

long * ArtifactAcidProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactAcidProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactAcidProperties::ArtifactAcidProperties() */

void __thiscall ArtifactAcidProperties::ArtifactAcidProperties(ArtifactAcidProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0668e670;
  *(undefined4 *)(this + 0x150) = 0;
  return;
}


/* ArtifactAcidProperties::StaticNew() */

ArtifactAcidProperties * ArtifactAcidProperties::StaticNew(void)

{
  ArtifactAcidProperties *this;
  
  this = ::operator_new(0x158);
  ArtifactAcidProperties(this);
  return this;
}


/* ArtifactAcidProperties::~ArtifactAcidProperties() */

void __thiscall ArtifactAcidProperties::~ArtifactAcidProperties(ArtifactAcidProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0668e670;
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactAcidProperties::~ArtifactAcidProperties() */

void __thiscall ArtifactAcidProperties::~ArtifactAcidProperties(ArtifactAcidProperties *this)

{
  ~ArtifactAcidProperties(this);
  AK::FreeHook(this);
  return;
}

