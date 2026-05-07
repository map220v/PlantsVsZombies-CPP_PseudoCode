// Class: ArtifactWindProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWindProperties::StaticClassInit() */

void ArtifactWindProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactWindProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0372a054,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWindProperties::StaticGetClass() */

long * ArtifactWindProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactWindProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactWindProperties::GetClass() const */

long * ArtifactWindProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactWindProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactWindProperties::ArtifactWindProperties() */

void __thiscall ArtifactWindProperties::ArtifactWindProperties(ArtifactWindProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined4 *)(this + 0x150) = 0x3f800000;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined ***)this = &PTR_GetClass_0668adc0;
  *(undefined4 *)(this + 0x15c) = 0;
  return;
}


/* ArtifactWindProperties::StaticNew() */

ArtifactWindProperties * ArtifactWindProperties::StaticNew(void)

{
  ArtifactWindProperties *this;
  
  this = ::operator_new(0x160);
  ArtifactWindProperties(this);
  return this;
}


/* ArtifactWindProperties::~ArtifactWindProperties() */

void __thiscall ArtifactWindProperties::~ArtifactWindProperties(ArtifactWindProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0668adc0;
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactWindProperties::~ArtifactWindProperties() */

void __thiscall ArtifactWindProperties::~ArtifactWindProperties(ArtifactWindProperties *this)

{
  ~ArtifactWindProperties(this);
  AK::FreeHook(this);
  return;
}

