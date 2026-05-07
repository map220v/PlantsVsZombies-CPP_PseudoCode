// Class: ArtifactPrismTowerProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTowerProperties::StaticClassInit() */

void ArtifactPrismTowerProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactPrismTowerProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03742fc4,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactPrismTowerProperties::StaticGetClass() */

long * ArtifactPrismTowerProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactPrismTowerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactPrismTowerProperties::GetClass() const */

long * ArtifactPrismTowerProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactPrismTowerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactPrismTowerProperties::ArtifactPrismTowerProperties() */

void __thiscall
ArtifactPrismTowerProperties::ArtifactPrismTowerProperties(ArtifactPrismTowerProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06691060;
  Set8BytesTo0(this + 0x150);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  return;
}


/* ArtifactPrismTowerProperties::StaticNew() */

ArtifactPrismTowerProperties * ArtifactPrismTowerProperties::StaticNew(void)

{
  ArtifactPrismTowerProperties *this;
  
  this = ::operator_new(0x170);
  ArtifactPrismTowerProperties(this);
  return this;
}


/* ArtifactPrismTowerProperties::~ArtifactPrismTowerProperties() */

void __thiscall
ArtifactPrismTowerProperties::~ArtifactPrismTowerProperties(ArtifactPrismTowerProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06691060;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x158));
  std::string::~string((string *)(this + 0x150));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactPrismTowerProperties::~ArtifactPrismTowerProperties() */

void __thiscall
ArtifactPrismTowerProperties::~ArtifactPrismTowerProperties(ArtifactPrismTowerProperties *this)

{
  ~ArtifactPrismTowerProperties(this);
  AK::FreeHook(this);
  return;
}

