// Class: PresetPlantModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresetPlantModule::StaticClassInit() */

void PresetPlantModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"PresetPlantModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04df45e4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PresetPlantModule::StaticGetClass() */

long * PresetPlantModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PresetPlantModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PresetPlantModule::PresetPlantModule() */

void __thiscall PresetPlantModule::PresetPlantModule(PresetPlantModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_069cf960;
  return;
}


/* PresetPlantModule::StaticNew() */

PresetPlantModule * PresetPlantModule::StaticNew(void)

{
  PresetPlantModule *this;
  
  this = ::operator_new(0x18);
  PresetPlantModule(this);
  return this;
}


/* PresetPlantModule::~PresetPlantModule() */

void __thiscall PresetPlantModule::~PresetPlantModule(PresetPlantModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_069cf960;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* PresetPlantModule::~PresetPlantModule() */

void __thiscall PresetPlantModule::~PresetPlantModule(PresetPlantModule *this)

{
  ~PresetPlantModule(this);
  AK::FreeHook(this);
  return;
}

