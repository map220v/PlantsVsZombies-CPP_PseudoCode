// Class: NeedPlantModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NeedPlantModule::StaticClassInit() */

void NeedPlantModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"NeedPlantModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04361550,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NeedPlantModule::StaticGetClass() */

long * NeedPlantModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NeedPlantModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NeedPlantModule::NeedPlantModule() */

void __thiscall NeedPlantModule::NeedPlantModule(NeedPlantModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068351d0;
  return;
}


/* NeedPlantModule::StaticNew() */

NeedPlantModule * NeedPlantModule::StaticNew(void)

{
  NeedPlantModule *this;
  
  this = ::operator_new(0x18);
  NeedPlantModule(this);
  return this;
}


/* NeedPlantModule::~NeedPlantModule() */

void __thiscall NeedPlantModule::~NeedPlantModule(NeedPlantModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068351d0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* NeedPlantModule::~NeedPlantModule() */

void __thiscall NeedPlantModule::~NeedPlantModule(NeedPlantModule *this)

{
  ~NeedPlantModule(this);
  AK::FreeHook(this);
  return;
}

