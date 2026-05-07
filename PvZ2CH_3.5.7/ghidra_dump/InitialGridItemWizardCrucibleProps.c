// Class: InitialGridItemWizardCrucibleProps


/* InitialGridItemWizardCrucibleProps::GetModuleClass() const */

long * InitialGridItemWizardCrucibleProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (InitialGridItemWizardCrucible::sClass != (long *)0x0) {
    return InitialGridItemWizardCrucible::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  InitialGridItemWizardCrucible::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"InitialGridItemWizardCrucible",uVar2,InitialGridItemWizardCrucible::StaticNew);
  InitialGridItemWizardCrucible::StaticClassInit();
  return InitialGridItemWizardCrucible::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialGridItemWizardCrucibleProps::StaticClassInit() */

void InitialGridItemWizardCrucibleProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"WizardCrucibleDescribe");
    (*pcVar3)(plVar2,asStack_10,FUN_04c89018,0x1c,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"InitialGridItemWizardCrucibleProps");
    (*pcVar3)(plVar2,asStack_10,FUN_04c89d10,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InitialGridItemWizardCrucibleProps::StaticGetClass() */

long * InitialGridItemWizardCrucibleProps::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"InitialGridItemWizardCrucibleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InitialGridItemWizardCrucibleProps::GetClass() const */

long * InitialGridItemWizardCrucibleProps::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"InitialGridItemWizardCrucibleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InitialGridItemWizardCrucibleProps::InitialGridItemWizardCrucibleProps() */

void __thiscall
InitialGridItemWizardCrucibleProps::InitialGridItemWizardCrucibleProps
          (InitialGridItemWizardCrucibleProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06994890;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* InitialGridItemWizardCrucibleProps::StaticNew() */

InitialGridItemWizardCrucibleProps * InitialGridItemWizardCrucibleProps::StaticNew(void)

{
  InitialGridItemWizardCrucibleProps *this;
  
  this = ::operator_new(0x58);
  InitialGridItemWizardCrucibleProps(this);
  return this;
}


/* InitialGridItemWizardCrucibleProps::~InitialGridItemWizardCrucibleProps() */

void __thiscall
InitialGridItemWizardCrucibleProps::~InitialGridItemWizardCrucibleProps
          (InitialGridItemWizardCrucibleProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06994890;
  std::vector<WizardCrucibleDescribe,std::allocator<WizardCrucibleDescribe>>::~vector
            ((vector<WizardCrucibleDescribe,std::allocator<WizardCrucibleDescribe>> *)(this + 0x40))
  ;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* InitialGridItemWizardCrucibleProps::~InitialGridItemWizardCrucibleProps() */

void __thiscall
InitialGridItemWizardCrucibleProps::~InitialGridItemWizardCrucibleProps
          (InitialGridItemWizardCrucibleProps *this)

{
  ~InitialGridItemWizardCrucibleProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialGridItemWizardCrucibleProps::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
InitialGridItemWizardCrucibleProps::GatherResourceRequirements
          (InitialGridItemWizardCrucibleProps *this,set *param_1)

{
  string *psVar1;
  GridItemType *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  std::string::string(asStack_10,"wizard_crucible");
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  this_00 = (GridItemType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  GridItemType::AddResourceRequirements(this_00,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

