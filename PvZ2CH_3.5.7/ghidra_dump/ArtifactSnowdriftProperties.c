// Class: ArtifactSnowdriftProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSnowdriftProperties::StaticClassInit() */

void ArtifactSnowdriftProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactSnowdriftProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_037642cc,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSnowdriftProperties::StaticGetClass() */

long * ArtifactSnowdriftProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSnowdriftProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSnowdriftProperties::GetClass() const */

long * ArtifactSnowdriftProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSnowdriftProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSnowdriftProperties::ArtifactSnowdriftProperties() */

void __thiscall
ArtifactSnowdriftProperties::ArtifactSnowdriftProperties(ArtifactSnowdriftProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06691d10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x150));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x158));
  return;
}


/* ArtifactSnowdriftProperties::StaticNew() */

ArtifactSnowdriftProperties * ArtifactSnowdriftProperties::StaticNew(void)

{
  ArtifactSnowdriftProperties *this;
  
  this = ::operator_new(0x160);
  ArtifactSnowdriftProperties(this);
  return this;
}


/* ArtifactSnowdriftProperties::~ArtifactSnowdriftProperties() */

void __thiscall
ArtifactSnowdriftProperties::~ArtifactSnowdriftProperties(ArtifactSnowdriftProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06691d10;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x158));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactSnowdriftProperties::~ArtifactSnowdriftProperties() */

void __thiscall
ArtifactSnowdriftProperties::~ArtifactSnowdriftProperties(ArtifactSnowdriftProperties *this)

{
  ~ArtifactSnowdriftProperties(this);
  AK::FreeHook(this);
  return;
}

