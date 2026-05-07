// Class: ArtifactCureProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCureProperties::StaticClassInit() */

void ArtifactCureProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactCureProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0372d6c8,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCureProperties::StaticGetClass() */

long * ArtifactCureProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCureProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCureProperties::GetClass() const */

long * ArtifactCureProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCureProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCureProperties::ArtifactCureProperties() */

void __thiscall ArtifactCureProperties::ArtifactCureProperties(ArtifactCureProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined4 *)(this + 0x150) = 0x41a00000;
  *(undefined ***)this = &PTR_GetClass_0668e8c0;
  *(undefined4 *)(this + 0x154) = 0x3f800000;
  *(undefined4 *)(this + 0x158) = 0x3f800000;
  return;
}


/* ArtifactCureProperties::StaticNew() */

ArtifactCureProperties * ArtifactCureProperties::StaticNew(void)

{
  ArtifactCureProperties *this;
  
  this = ::operator_new(0x160);
  ArtifactCureProperties(this);
  return this;
}


/* ArtifactCureProperties::~ArtifactCureProperties() */

void __thiscall ArtifactCureProperties::~ArtifactCureProperties(ArtifactCureProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0668e8c0;
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactCureProperties::~ArtifactCureProperties() */

void __thiscall ArtifactCureProperties::~ArtifactCureProperties(ArtifactCureProperties *this)

{
  ~ArtifactCureProperties(this);
  AK::FreeHook(this);
  return;
}

