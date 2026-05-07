// Class: ArtifactArcadeProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactArcadeProperties::StaticClassInit() */

void ArtifactArcadeProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactArcadeProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0372f81c,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactArcadeProperties::StaticGetClass() */

long * ArtifactArcadeProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactArcadeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactArcadeProperties::GetClass() const */

long * ArtifactArcadeProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactArcadeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactArcadeProperties::ArtifactArcadeProperties() */

void __thiscall ArtifactArcadeProperties::ArtifactArcadeProperties(ArtifactArcadeProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0668fa70;
  return;
}


/* ArtifactArcadeProperties::StaticNew() */

ArtifactArcadeProperties * ArtifactArcadeProperties::StaticNew(void)

{
  ArtifactArcadeProperties *this;
  
  this = ::operator_new(0x150);
  ArtifactArcadeProperties(this);
  return this;
}


/* ArtifactArcadeProperties::~ArtifactArcadeProperties() */

void __thiscall ArtifactArcadeProperties::~ArtifactArcadeProperties(ArtifactArcadeProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0668fa70;
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactArcadeProperties::~ArtifactArcadeProperties() */

void __thiscall ArtifactArcadeProperties::~ArtifactArcadeProperties(ArtifactArcadeProperties *this)

{
  ~ArtifactArcadeProperties(this);
  AK::FreeHook(this);
  return;
}

