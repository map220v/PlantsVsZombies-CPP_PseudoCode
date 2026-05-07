// Class: SteamStage


/* SteamStage::SteamStage() */

void __thiscall SteamStage::SteamStage(SteamStage *this)

{
  StageModule::StageModule((StageModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06762fb0;
  return;
}


/* SteamStage::StaticNew() */

SteamStage * SteamStage::StaticNew(void)

{
  SteamStage *this;
  
  this = ::operator_new(0xe8);
  SteamStage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SteamStage::StaticClassInit() */

void SteamStage::StaticClassInit(void)

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
    std::string::string(asStack_10,"SteamStage");
    (*pcVar2)(plVar1,asStack_10,FUN_03d03a88,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SteamStage::StaticGetClass() */

long * SteamStage::StaticGetClass(void)

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
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"SteamStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SteamStage::~SteamStage() */

void __thiscall SteamStage::~SteamStage(SteamStage *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06762fb0;
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* SteamStage::~SteamStage() */

void __thiscall SteamStage::~SteamStage(SteamStage *this)

{
  ~SteamStage(this);
  AK::FreeHook(this);
  return;
}

