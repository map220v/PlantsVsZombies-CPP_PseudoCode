// Class: ArtifactSquidProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSquidProperties::StaticClassInit() */

void ArtifactSquidProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactSquidProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03761e4c,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSquidProperties::StaticGetClass() */

long * ArtifactSquidProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSquidProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSquidProperties::GetClass() const */

long * ArtifactSquidProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSquidProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSquidProperties::ArtifactSquidProperties() */

void __thiscall ArtifactSquidProperties::ArtifactSquidProperties(ArtifactSquidProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0668ee40;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x150));
  DVec3::DVec3((DVec3 *)(this + 0x158));
  *(undefined4 *)(this + 0x168) = 0x3f800000;
  *(undefined4 *)(this + 0x164) = 0x42a00000;
  *(undefined4 *)(this + 0x16c) = 0;
  return;
}


/* ArtifactSquidProperties::StaticNew() */

ArtifactSquidProperties * ArtifactSquidProperties::StaticNew(void)

{
  ArtifactSquidProperties *this;
  
  this = ::operator_new(0x170);
  ArtifactSquidProperties(this);
  return this;
}


/* ArtifactSquidProperties::~ArtifactSquidProperties() */

void __thiscall ArtifactSquidProperties::~ArtifactSquidProperties(ArtifactSquidProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0668ee40;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactSquidProperties::~ArtifactSquidProperties() */

void __thiscall ArtifactSquidProperties::~ArtifactSquidProperties(ArtifactSquidProperties *this)

{
  ~ArtifactSquidProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSquidProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string
   >, std::allocator<std::string > >&) const */

void __thiscall
ArtifactSquidProperties::GatherResourceRequirements(ArtifactSquidProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"ZombieBeachOctopusGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

