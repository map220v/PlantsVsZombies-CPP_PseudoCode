// Class: SmokePollutionModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SmokePollutionModuleProperties::StaticClassInit() */

void SmokePollutionModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"SmokeManholeInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_038f15bc,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SmokePollutionModuleProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_038f27dc,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SmokePollutionModuleProperties::StaticGetClass() */

long * SmokePollutionModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SmokePollutionModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SmokePollutionModuleProperties::GetClass() const */

long * SmokePollutionModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"SmokePollutionModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SmokePollutionModuleProperties::GetModuleClass() const */

long * SmokePollutionModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SmokeManholeModule::sClass != (long *)0x0) {
    return SmokeManholeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SmokeManholeModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"SmokeManholeModule",uVar2,SmokeManholeModule::StaticNew);
  SmokeManholeModule::StaticClassInit();
  return SmokeManholeModule::sClass;
}


/* SmokePollutionModuleProperties::SmokePollutionModuleProperties() */

void __thiscall
SmokePollutionModuleProperties::SmokePollutionModuleProperties(SmokePollutionModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066be690;
  Set8BytesTo0(this + 0x40);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  *(undefined4 *)(this + 0x60) = 0;
  return;
}


/* SmokePollutionModuleProperties::StaticNew() */

SmokePollutionModuleProperties * SmokePollutionModuleProperties::StaticNew(void)

{
  SmokePollutionModuleProperties *this;
  
  this = ::operator_new(0x68);
  SmokePollutionModuleProperties(this);
  return this;
}


/* SmokePollutionModuleProperties::~SmokePollutionModuleProperties() */

void __thiscall
SmokePollutionModuleProperties::~SmokePollutionModuleProperties
          (SmokePollutionModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066be690;
  std::
  vector<SmokePollutionModuleProperties::SmokeManholeInfo,std::allocator<SmokePollutionModuleProperties::SmokeManholeInfo>>
  ::~vector((vector<SmokePollutionModuleProperties::SmokeManholeInfo,std::allocator<SmokePollutionModuleProperties::SmokeManholeInfo>>
             *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* SmokePollutionModuleProperties::~SmokePollutionModuleProperties() */

void __thiscall
SmokePollutionModuleProperties::~SmokePollutionModuleProperties
          (SmokePollutionModuleProperties *this)

{
  ~SmokePollutionModuleProperties(this);
  AK::FreeHook(this);
  return;
}

