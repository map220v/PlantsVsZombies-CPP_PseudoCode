// Class: ArtifactEvolutionProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactEvolutionProperties::StaticClassInit() */

void ArtifactEvolutionProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactEvolutionProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03743198,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactEvolutionProperties::StaticGetClass() */

long * ArtifactEvolutionProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactEvolutionProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactEvolutionProperties::GetClass() const */

long * ArtifactEvolutionProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactEvolutionProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactEvolutionProperties::ArtifactEvolutionProperties() */

void __thiscall
ArtifactEvolutionProperties::ArtifactEvolutionProperties(ArtifactEvolutionProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06691a80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  return;
}


/* ArtifactEvolutionProperties::StaticNew() */

ArtifactEvolutionProperties * ArtifactEvolutionProperties::StaticNew(void)

{
  ArtifactEvolutionProperties *this;
  
  this = ::operator_new(0x168);
  ArtifactEvolutionProperties(this);
  return this;
}


/* ArtifactEvolutionProperties::~ArtifactEvolutionProperties() */

void __thiscall
ArtifactEvolutionProperties::~ArtifactEvolutionProperties(ArtifactEvolutionProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06691a80;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x150));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactEvolutionProperties::~ArtifactEvolutionProperties() */

void __thiscall
ArtifactEvolutionProperties::~ArtifactEvolutionProperties(ArtifactEvolutionProperties *this)

{
  ~ArtifactEvolutionProperties(this);
  AK::FreeHook(this);
  return;
}

