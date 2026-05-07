// Class: ManholePipelineModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipelineModuleProperties::StaticClassInit() */

void ManholePipelineModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ManholePipelineInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_038ebb6c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ManholePipelineModuleProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_038ed0c8,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ManholePipelineModuleProperties::StaticGetClass() */

long * ManholePipelineModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ManholePipelineModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ManholePipelineModuleProperties::GetClass() const */

long * ManholePipelineModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ManholePipelineModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ManholePipelineModuleProperties::GetModuleClass() const */

long * ManholePipelineModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ManholePipelineModule::sClass != (long *)0x0) {
    return ManholePipelineModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ManholePipelineModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"ManholePipelineModule",uVar2,ManholePipelineModule::StaticNew);
  ManholePipelineModule::StaticClassInit();
  return ManholePipelineModule::sClass;
}


/* ManholePipelineModuleProperties::ManholePipelineModuleProperties() */

void __thiscall
ManholePipelineModuleProperties::ManholePipelineModuleProperties
          (ManholePipelineModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066bdf70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* ManholePipelineModuleProperties::StaticNew() */

ManholePipelineModuleProperties * ManholePipelineModuleProperties::StaticNew(void)

{
  ManholePipelineModuleProperties *this;
  
  this = ::operator_new(0x68);
  ManholePipelineModuleProperties(this);
  return this;
}


/* ManholePipelineModuleProperties::~ManholePipelineModuleProperties() */

void __thiscall
ManholePipelineModuleProperties::~ManholePipelineModuleProperties
          (ManholePipelineModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066bdf70;
  std::
  vector<ManholePipelineModuleProperties::ManholePipelineInfo,std::allocator<ManholePipelineModuleProperties::ManholePipelineInfo>>
  ::~vector((vector<ManholePipelineModuleProperties::ManholePipelineInfo,std::allocator<ManholePipelineModuleProperties::ManholePipelineInfo>>
             *)(this + 0x48));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ManholePipelineModuleProperties::~ManholePipelineModuleProperties() */

void __thiscall
ManholePipelineModuleProperties::~ManholePipelineModuleProperties
          (ManholePipelineModuleProperties *this)

{
  ~ManholePipelineModuleProperties(this);
  AK::FreeHook(this);
  return;
}

