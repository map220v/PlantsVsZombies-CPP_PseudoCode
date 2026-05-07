// Class: ArtifactTridentProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTridentProperties::StaticClassInit() */

void ArtifactTridentProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactTridentProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_037626c8,0x158,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactTridentProperties::StaticGetClass() */

long * ArtifactTridentProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactTridentProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactTridentProperties::GetClass() const */

long * ArtifactTridentProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactTridentProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactTridentProperties::ArtifactTridentProperties() */

void __thiscall
ArtifactTridentProperties::ArtifactTridentProperties(ArtifactTridentProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06694770;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x150));
  return;
}


/* ArtifactTridentProperties::StaticNew() */

ArtifactTridentProperties * ArtifactTridentProperties::StaticNew(void)

{
  ArtifactTridentProperties *this;
  
  this = ::operator_new(0x158);
  ArtifactTridentProperties(this);
  return this;
}


/* ArtifactTridentProperties::~ArtifactTridentProperties() */

void __thiscall
ArtifactTridentProperties::~ArtifactTridentProperties(ArtifactTridentProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06694770;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactTridentProperties::~ArtifactTridentProperties() */

void __thiscall
ArtifactTridentProperties::~ArtifactTridentProperties(ArtifactTridentProperties *this)

{
  ~ArtifactTridentProperties(this);
  AK::FreeHook(this);
  return;
}

