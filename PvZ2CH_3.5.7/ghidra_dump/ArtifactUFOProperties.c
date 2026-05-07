// Class: ArtifactUFOProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUFOProperties::StaticClassInit() */

void ArtifactUFOProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactUFOProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03742bc4,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactUFOProperties::StaticGetClass() */

long * ArtifactUFOProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactUFOProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactUFOProperties::GetClass() const */

long * ArtifactUFOProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactUFOProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactUFOProperties::ArtifactUFOProperties() */

void __thiscall ArtifactUFOProperties::ArtifactUFOProperties(ArtifactUFOProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06690d00;
  Set8BytesTo0(this + 0x150);
  Set8BytesTo0(this + 0x158);
  Set8BytesTo0(this + 0x160);
  Set8BytesTo0(this + 0x168);
  Set8BytesTo0(this + 0x170);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  return;
}


/* ArtifactUFOProperties::StaticNew() */

ArtifactUFOProperties * ArtifactUFOProperties::StaticNew(void)

{
  ArtifactUFOProperties *this;
  
  this = ::operator_new(0x198);
  ArtifactUFOProperties(this);
  return this;
}


/* ArtifactUFOProperties::~ArtifactUFOProperties() */

void __thiscall ArtifactUFOProperties::~ArtifactUFOProperties(ArtifactUFOProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06690d00;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x178));
  std::string::~string((string *)(this + 0x170));
  std::string::~string((string *)(this + 0x168));
  std::string::~string((string *)(this + 0x160));
  std::string::~string((string *)(this + 0x158));
  std::string::~string((string *)(this + 0x150));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactUFOProperties::~ArtifactUFOProperties() */

void __thiscall ArtifactUFOProperties::~ArtifactUFOProperties(ArtifactUFOProperties *this)

{
  ~ArtifactUFOProperties(this);
  AK::FreeHook(this);
  return;
}

