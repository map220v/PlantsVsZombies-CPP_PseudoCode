// Class: ArtifactGuitarProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGuitarProperties::StaticClassInit() */

void ArtifactGuitarProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactGuitarProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_037644ac,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGuitarProperties::StaticGetClass() */

long * ArtifactGuitarProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactGuitarProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGuitarProperties::GetClass() const */

long * ArtifactGuitarProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactGuitarProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGuitarProperties::ArtifactGuitarProperties() */

void __thiscall ArtifactGuitarProperties::ArtifactGuitarProperties(ArtifactGuitarProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06692480;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x150));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x158));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  return;
}


/* ArtifactGuitarProperties::StaticNew() */

ArtifactGuitarProperties * ArtifactGuitarProperties::StaticNew(void)

{
  ArtifactGuitarProperties *this;
  
  this = ::operator_new(0x180);
  ArtifactGuitarProperties(this);
  return this;
}


/* ArtifactGuitarProperties::~ArtifactGuitarProperties() */

void __thiscall ArtifactGuitarProperties::~ArtifactGuitarProperties(ArtifactGuitarProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06692480;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x160));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x158));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactGuitarProperties::~ArtifactGuitarProperties() */

void __thiscall ArtifactGuitarProperties::~ArtifactGuitarProperties(ArtifactGuitarProperties *this)

{
  ~ArtifactGuitarProperties(this);
  AK::FreeHook(this);
  return;
}

