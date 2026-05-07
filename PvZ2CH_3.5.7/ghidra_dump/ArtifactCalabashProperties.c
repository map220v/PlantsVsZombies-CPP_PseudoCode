// Class: ArtifactCalabashProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashProperties::StaticClassInit() */

void ArtifactCalabashProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactCalabashProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0374371c,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCalabashProperties::StaticGetClass() */

long * ArtifactCalabashProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCalabashProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCalabashProperties::GetClass() const */

long * ArtifactCalabashProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCalabashProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCalabashProperties::ArtifactCalabashProperties() */

void __thiscall
ArtifactCalabashProperties::ArtifactCalabashProperties(ArtifactCalabashProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06695300;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  return;
}


/* ArtifactCalabashProperties::StaticNew() */

ArtifactCalabashProperties * ArtifactCalabashProperties::StaticNew(void)

{
  ArtifactCalabashProperties *this;
  
  this = ::operator_new(0x168);
  ArtifactCalabashProperties(this);
  return this;
}


/* ArtifactCalabashProperties::~ArtifactCalabashProperties() */

void __thiscall
ArtifactCalabashProperties::~ArtifactCalabashProperties(ArtifactCalabashProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06695300;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x150));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactCalabashProperties::~ArtifactCalabashProperties() */

void __thiscall
ArtifactCalabashProperties::~ArtifactCalabashProperties(ArtifactCalabashProperties *this)

{
  ~ArtifactCalabashProperties(this);
  AK::FreeHook(this);
  return;
}

