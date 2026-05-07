// Class: ArtifactCultivationProperty


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationProperty::StaticClassInit() */

void ArtifactCultivationProperty::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactLevelUpPrice");
    (*pcVar3)(plVar2,asStack_10,FUN_03724cbc,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArtifactRankUpPrice");
    (*pcVar3)(plVar2,asStack_10,FUN_03724a20,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArtifactCultivationProperty");
    (*pcVar3)(plVar2,asStack_10,FUN_0375d9a4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCultivationProperty::StaticGetClass() */

long * ArtifactCultivationProperty::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCultivationProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCultivationProperty::GetClass() const */

long * ArtifactCultivationProperty::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCultivationProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCultivationProperty::ArtifactCultivationProperty() */

void __thiscall
ArtifactCultivationProperty::ArtifactCultivationProperty(ArtifactCultivationProperty *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0668a770;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* ArtifactCultivationProperty::StaticNew() */

ArtifactCultivationProperty * ArtifactCultivationProperty::StaticNew(void)

{
  ArtifactCultivationProperty *this;
  
  this = ::operator_new(0x40);
  ArtifactCultivationProperty(this);
  return this;
}


/* ArtifactCultivationProperty::~ArtifactCultivationProperty() */

void __thiscall
ArtifactCultivationProperty::~ArtifactCultivationProperty(ArtifactCultivationProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_0668a770;
  std::vector<ArtifactRankUpPrice,std::allocator<ArtifactRankUpPrice>>::~vector
            ((vector<ArtifactRankUpPrice,std::allocator<ArtifactRankUpPrice>> *)(this + 0x28));
  std::vector<ArtifactLevelUpPrice,std::allocator<ArtifactLevelUpPrice>>::~vector
            ((vector<ArtifactLevelUpPrice,std::allocator<ArtifactLevelUpPrice>> *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* ArtifactCultivationProperty::~ArtifactCultivationProperty() */

void __thiscall
ArtifactCultivationProperty::~ArtifactCultivationProperty(ArtifactCultivationProperty *this)

{
  ~ArtifactCultivationProperty(this);
  AK::FreeHook(this);
  return;
}

