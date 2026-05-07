// Class: ArtifactMidasTouchProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMidasTouchProperties::StaticClassInit() */

void ArtifactMidasTouchProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactMidasTouchProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0372fc44,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMidasTouchProperties::StaticGetClass() */

long * ArtifactMidasTouchProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMidasTouchProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMidasTouchProperties::GetClass() const */

long * ArtifactMidasTouchProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMidasTouchProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMidasTouchProperties::ArtifactMidasTouchProperties() */

void __thiscall
ArtifactMidasTouchProperties::ArtifactMidasTouchProperties(ArtifactMidasTouchProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0668fc20;
  return;
}


/* ArtifactMidasTouchProperties::StaticNew() */

ArtifactMidasTouchProperties * ArtifactMidasTouchProperties::StaticNew(void)

{
  ArtifactMidasTouchProperties *this;
  
  this = ::operator_new(0x150);
  ArtifactMidasTouchProperties(this);
  return this;
}


/* ArtifactMidasTouchProperties::~ArtifactMidasTouchProperties() */

void __thiscall
ArtifactMidasTouchProperties::~ArtifactMidasTouchProperties(ArtifactMidasTouchProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0668fc20;
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactMidasTouchProperties::~ArtifactMidasTouchProperties() */

void __thiscall
ArtifactMidasTouchProperties::~ArtifactMidasTouchProperties(ArtifactMidasTouchProperties *this)

{
  ~ArtifactMidasTouchProperties(this);
  AK::FreeHook(this);
  return;
}

