// Class: ArtifactProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactProperties::StaticClassInit() */

void ArtifactProperties::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArtifactStageData");
    (*pcVar3)(plVar2,asStack_10,FUN_03723de0,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArtifactProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_0378cf28,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactProperties::StaticGetClass() */

long * ArtifactProperties::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactProperties::GetClass() const */

long * ArtifactProperties::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactProperties::ArtifactProperties() */

void __thiscall ArtifactProperties::ArtifactProperties(ArtifactProperties *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0668a890;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xc0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  Set8BytesTo0(this + 0xe8);
  Set8BytesTo0(this + 0xf0);
  Set8BytesTo0(this + 0x100);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x128));
  this[0x120] = (ArtifactProperties)0x1;
  return;
}


/* ArtifactProperties::StaticNew() */

ArtifactProperties * ArtifactProperties::StaticNew(void)

{
  ArtifactProperties *this;
  
  this = ::operator_new(0x150);
  ArtifactProperties(this);
  return this;
}


/* ArtifactProperties::~ArtifactProperties() */

void __thiscall ArtifactProperties::~ArtifactProperties(ArtifactProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0668a890;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x128));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x108));
  std::string::~string((string *)(this + 0x100));
  std::string::~string((string *)(this + 0xf0));
  std::string::~string((string *)(this + 0xe8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  std::vector<PlantBoost,std::allocator<PlantBoost>>::~vector
            ((vector<PlantBoost,std::allocator<PlantBoost>> *)(this + 0xc0));
  std::vector<PlantBoost,std::allocator<PlantBoost>>::~vector
            ((vector<PlantBoost,std::allocator<PlantBoost>> *)(this + 0xa8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x90));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x78));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x60));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x48));
  std::vector<ArtifactStageData,std::allocator<ArtifactStageData>>::~vector
            ((vector<ArtifactStageData,std::allocator<ArtifactStageData>> *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* ArtifactProperties::~ArtifactProperties() */

void __thiscall ArtifactProperties::~ArtifactProperties(ArtifactProperties *this)

{
  ~ArtifactProperties(this);
  AK::FreeHook(this);
  return;
}

