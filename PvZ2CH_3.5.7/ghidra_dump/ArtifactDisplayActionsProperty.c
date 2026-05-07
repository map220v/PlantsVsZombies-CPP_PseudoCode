// Class: ArtifactDisplayActionsProperty


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDisplayActionsProperty::StaticClassInit() */

void ArtifactDisplayActionsProperty::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactPlantDisplayInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03725188,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArtifactZombieDisplayInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03724eec,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArtifactDisplayActionInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0375dcd4,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArtifactDisplayActionsProperty");
    (*pcVar3)(plVar2,asStack_10,FUN_0375e474,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactDisplayActionsProperty::StaticGetClass() */

long * ArtifactDisplayActionsProperty::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactDisplayActionsProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactDisplayActionsProperty::GetClass() const */

long * ArtifactDisplayActionsProperty::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactDisplayActionsProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactDisplayActionsProperty::ArtifactDisplayActionsProperty() */

void __thiscall
ArtifactDisplayActionsProperty::ArtifactDisplayActionsProperty(ArtifactDisplayActionsProperty *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0668a800;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* ArtifactDisplayActionsProperty::StaticNew() */

ArtifactDisplayActionsProperty * ArtifactDisplayActionsProperty::StaticNew(void)

{
  ArtifactDisplayActionsProperty *this;
  
  this = ::operator_new(0x28);
  ArtifactDisplayActionsProperty(this);
  return this;
}


/* ArtifactDisplayActionsProperty::~ArtifactDisplayActionsProperty() */

void __thiscall
ArtifactDisplayActionsProperty::~ArtifactDisplayActionsProperty
          (ArtifactDisplayActionsProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_0668a800;
  std::vector<ArtifactDisplayActionInfo,std::allocator<ArtifactDisplayActionInfo>>::~vector
            ((vector<ArtifactDisplayActionInfo,std::allocator<ArtifactDisplayActionInfo>> *)
             (this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* ArtifactDisplayActionsProperty::~ArtifactDisplayActionsProperty() */

void __thiscall
ArtifactDisplayActionsProperty::~ArtifactDisplayActionsProperty
          (ArtifactDisplayActionsProperty *this)

{
  ~ArtifactDisplayActionsProperty(this);
  AK::FreeHook(this);
  return;
}

