// Class: ArtifactSoulBellProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSoulBellProperties::StaticClassInit() */

void ArtifactSoulBellProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactSoulBellProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_037aa5dc,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSoulBellProperties::StaticGetClass() */

long * ArtifactSoulBellProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSoulBellProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSoulBellProperties::GetClass() const */

long * ArtifactSoulBellProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSoulBellProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSoulBellProperties::ArtifactSoulBellProperties() */

void __thiscall
ArtifactSoulBellProperties::ArtifactSoulBellProperties(ArtifactSoulBellProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06696220;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  return;
}


/* ArtifactSoulBellProperties::StaticNew() */

ArtifactSoulBellProperties * ArtifactSoulBellProperties::StaticNew(void)

{
  ArtifactSoulBellProperties *this;
  
  this = ::operator_new(0x170);
  ArtifactSoulBellProperties(this);
  return this;
}


/* ArtifactSoulBellProperties::~ArtifactSoulBellProperties() */

void __thiscall
ArtifactSoulBellProperties::~ArtifactSoulBellProperties(ArtifactSoulBellProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06696220;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x158));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactSoulBellProperties::~ArtifactSoulBellProperties() */

void __thiscall
ArtifactSoulBellProperties::~ArtifactSoulBellProperties(ArtifactSoulBellProperties *this)

{
  ~ArtifactSoulBellProperties(this);
  AK::FreeHook(this);
  return;
}

