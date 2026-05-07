// Class: ArtifactWeatherMonkeyProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWeatherMonkeyProperties::StaticClassInit() */

void ArtifactWeatherMonkeyProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactWeatherMonkeyProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03763bb0,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWeatherMonkeyProperties::StaticGetClass() */

long * ArtifactWeatherMonkeyProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactWeatherMonkeyProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactWeatherMonkeyProperties::GetClass() const */

long * ArtifactWeatherMonkeyProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactWeatherMonkeyProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactWeatherMonkeyProperties::ArtifactWeatherMonkeyProperties() */

void __thiscall
ArtifactWeatherMonkeyProperties::ArtifactWeatherMonkeyProperties
          (ArtifactWeatherMonkeyProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined4 *)(this + 0x154) = 2;
  *(undefined ***)this = &PTR_GetClass_06690130;
  *(undefined4 *)(this + 0x150) = 0x40400000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x158));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x160));
  *(undefined4 *)(this + 0x168) = 0x41700000;
  return;
}


/* ArtifactWeatherMonkeyProperties::StaticNew() */

ArtifactWeatherMonkeyProperties * ArtifactWeatherMonkeyProperties::StaticNew(void)

{
  ArtifactWeatherMonkeyProperties *this;
  
  this = ::operator_new(0x170);
  ArtifactWeatherMonkeyProperties(this);
  return this;
}


/* ArtifactWeatherMonkeyProperties::~ArtifactWeatherMonkeyProperties() */

void __thiscall
ArtifactWeatherMonkeyProperties::~ArtifactWeatherMonkeyProperties
          (ArtifactWeatherMonkeyProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06690130;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x158));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactWeatherMonkeyProperties::~ArtifactWeatherMonkeyProperties() */

void __thiscall
ArtifactWeatherMonkeyProperties::~ArtifactWeatherMonkeyProperties
          (ArtifactWeatherMonkeyProperties *this)

{
  ~ArtifactWeatherMonkeyProperties(this);
  AK::FreeHook(this);
  return;
}

