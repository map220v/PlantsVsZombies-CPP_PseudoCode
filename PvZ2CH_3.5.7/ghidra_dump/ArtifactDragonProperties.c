// Class: ArtifactDragonProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragonProperties::StaticClassInit() */

void ArtifactDragonProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactDragonProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03762178,0x188,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactDragonProperties::StaticGetClass() */

long * ArtifactDragonProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactDragonProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactDragonProperties::GetClass() const */

long * ArtifactDragonProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactDragonProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactDragonProperties::ArtifactDragonProperties() */

void __thiscall ArtifactDragonProperties::ArtifactDragonProperties(ArtifactDragonProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined ***)this = &PTR_GetClass_06694020;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x15c));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x168));
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  return;
}


/* ArtifactDragonProperties::StaticNew() */

ArtifactDragonProperties * ArtifactDragonProperties::StaticNew(void)

{
  ArtifactDragonProperties *this;
  
  this = ::operator_new(0x188);
  ArtifactDragonProperties(this);
  return this;
}


/* ArtifactDragonProperties::~ArtifactDragonProperties() */

void __thiscall ArtifactDragonProperties::~ArtifactDragonProperties(ArtifactDragonProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06694020;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactDragonProperties::~ArtifactDragonProperties() */

void __thiscall ArtifactDragonProperties::~ArtifactDragonProperties(ArtifactDragonProperties *this)

{
  ~ArtifactDragonProperties(this);
  AK::FreeHook(this);
  return;
}

