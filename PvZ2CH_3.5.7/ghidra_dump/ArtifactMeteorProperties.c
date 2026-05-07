// Class: ArtifactMeteorProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMeteorProperties::StaticClassInit() */

void ArtifactMeteorProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactMeteorProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03761960,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMeteorProperties::StaticGetClass() */

long * ArtifactMeteorProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMeteorProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMeteorProperties::GetClass() const */

long * ArtifactMeteorProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMeteorProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMeteorProperties::ArtifactMeteorProperties() */

void __thiscall ArtifactMeteorProperties::ArtifactMeteorProperties(ArtifactMeteorProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0668ba90;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x150));
  DVec3::DVec3((DVec3 *)(this + 0x158));
  *(undefined4 *)(this + 0x168) = 0x3f800000;
  *(undefined4 *)(this + 0x164) = 0x42340000;
  return;
}


/* ArtifactMeteorProperties::StaticNew() */

ArtifactMeteorProperties * ArtifactMeteorProperties::StaticNew(void)

{
  ArtifactMeteorProperties *this;
  
  this = ::operator_new(0x170);
  ArtifactMeteorProperties(this);
  return this;
}


/* ArtifactMeteorProperties::~ArtifactMeteorProperties() */

void __thiscall ArtifactMeteorProperties::~ArtifactMeteorProperties(ArtifactMeteorProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0668ba90;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactMeteorProperties::~ArtifactMeteorProperties() */

void __thiscall ArtifactMeteorProperties::~ArtifactMeteorProperties(ArtifactMeteorProperties *this)

{
  ~ArtifactMeteorProperties(this);
  AK::FreeHook(this);
  return;
}

