// Class: ArtifactGashaponProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponProperties::StaticClassInit() */

void ArtifactGashaponProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactGashaponProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0374a344,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGashaponProperties::StaticGetClass() */

long * ArtifactGashaponProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactGashaponProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGashaponProperties::GetClass() const */

long * ArtifactGashaponProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactGashaponProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGashaponProperties::ArtifactGashaponProperties() */

void __thiscall
ArtifactGashaponProperties::ArtifactGashaponProperties(ArtifactGashaponProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06690b50;
  Set8BytesTo0(this + 0x150);
  Set8BytesTo0(this + 0x158);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  return;
}


/* ArtifactGashaponProperties::StaticNew() */

ArtifactGashaponProperties * ArtifactGashaponProperties::StaticNew(void)

{
  ArtifactGashaponProperties *this;
  
  this = ::operator_new(400);
  ArtifactGashaponProperties(this);
  return this;
}


/* ArtifactGashaponProperties::~ArtifactGashaponProperties() */

void __thiscall
ArtifactGashaponProperties::~ArtifactGashaponProperties(ArtifactGashaponProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06690b50;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x178));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x160));
  std::string::~string((string *)(this + 0x158));
  std::string::~string((string *)(this + 0x150));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactGashaponProperties::~ArtifactGashaponProperties() */

void __thiscall
ArtifactGashaponProperties::~ArtifactGashaponProperties(ArtifactGashaponProperties *this)

{
  ~ArtifactGashaponProperties(this);
  AK::FreeHook(this);
  return;
}

