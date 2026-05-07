// Class: ArtifactSwarmProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSwarmProperties::StaticClassInit() */

void ArtifactSwarmProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactSwarmProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_037647e0,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSwarmProperties::StaticGetClass() */

long * ArtifactSwarmProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSwarmProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSwarmProperties::GetClass() const */

long * ArtifactSwarmProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSwarmProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSwarmProperties::ArtifactSwarmProperties() */

void __thiscall ArtifactSwarmProperties::ArtifactSwarmProperties(ArtifactSwarmProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06695660;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x150));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x158));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x160));
  return;
}


/* ArtifactSwarmProperties::StaticNew() */

ArtifactSwarmProperties * ArtifactSwarmProperties::StaticNew(void)

{
  ArtifactSwarmProperties *this;
  
  this = ::operator_new(0x168);
  ArtifactSwarmProperties(this);
  return this;
}


/* ArtifactSwarmProperties::~ArtifactSwarmProperties() */

void __thiscall ArtifactSwarmProperties::~ArtifactSwarmProperties(ArtifactSwarmProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06695660;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x158));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactSwarmProperties::~ArtifactSwarmProperties() */

void __thiscall ArtifactSwarmProperties::~ArtifactSwarmProperties(ArtifactSwarmProperties *this)

{
  ~ArtifactSwarmProperties(this);
  AK::FreeHook(this);
  return;
}

