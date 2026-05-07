// Class: PlaybackProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackProperties::StaticClassInit() */

void PlaybackProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlaybackProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04ac3ae4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlaybackProperties::StaticGetClass() */

long * PlaybackProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlaybackProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlaybackProperties::GetClass() const */

long * PlaybackProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PlaybackProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlaybackProperties::GetModuleClass() const */

long * PlaybackProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PlaybackModule::sClass != (long *)0x0) {
    return PlaybackModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PlaybackModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PlaybackModule",uVar2,PlaybackModule::StaticNew);
  PlaybackModule::StaticClassInit();
  return PlaybackModule::sClass;
}


/* PlaybackProperties::PlaybackProperties() */

void __thiscall PlaybackProperties::PlaybackProperties(PlaybackProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06948f70;
  return;
}


/* PlaybackProperties::StaticNew() */

PlaybackProperties * PlaybackProperties::StaticNew(void)

{
  PlaybackProperties *this;
  
  this = ::operator_new(0x40);
  PlaybackProperties(this);
  return this;
}


/* PlaybackProperties::~PlaybackProperties() */

void __thiscall PlaybackProperties::~PlaybackProperties(PlaybackProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06948f70;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PlaybackProperties::~PlaybackProperties() */

void __thiscall PlaybackProperties::~PlaybackProperties(PlaybackProperties *this)

{
  ~PlaybackProperties(this);
  AK::FreeHook(this);
  return;
}

