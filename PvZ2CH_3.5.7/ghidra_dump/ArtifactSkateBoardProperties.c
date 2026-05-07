// Class: ArtifactSkateBoardProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSkateBoardProperties::StaticClassInit() */

void ArtifactSkateBoardProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactSkateBoardProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03730240,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSkateBoardProperties::StaticGetClass() */

long * ArtifactSkateBoardProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSkateBoardProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSkateBoardProperties::GetClass() const */

long * ArtifactSkateBoardProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSkateBoardProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSkateBoardProperties::ArtifactSkateBoardProperties() */

void __thiscall
ArtifactSkateBoardProperties::ArtifactSkateBoardProperties(ArtifactSkateBoardProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0668fdd0;
  return;
}


/* ArtifactSkateBoardProperties::StaticNew() */

ArtifactSkateBoardProperties * ArtifactSkateBoardProperties::StaticNew(void)

{
  ArtifactSkateBoardProperties *this;
  
  this = ::operator_new(0x150);
  ArtifactSkateBoardProperties(this);
  return this;
}


/* ArtifactSkateBoardProperties::~ArtifactSkateBoardProperties() */

void __thiscall
ArtifactSkateBoardProperties::~ArtifactSkateBoardProperties(ArtifactSkateBoardProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0668fdd0;
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactSkateBoardProperties::~ArtifactSkateBoardProperties() */

void __thiscall
ArtifactSkateBoardProperties::~ArtifactSkateBoardProperties(ArtifactSkateBoardProperties *this)

{
  ~ArtifactSkateBoardProperties(this);
  AK::FreeHook(this);
  return;
}

