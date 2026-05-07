// Class: SavedLevelReplaySubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SavedLevelReplaySubsystem::StaticClassInit() */

void SavedLevelReplaySubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"SavedLevelReplaySubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_0384ae34,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SavedLevelReplaySubsystem::StaticGetClass() */

long * SavedLevelReplaySubsystem::StaticGetClass(void)

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
  uVar2 = DataDrivenLevelReplaySubsystem::StaticGetClass();
  (*pcVar3)(plVar1,"SavedLevelReplaySubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SavedLevelReplaySubsystem::GetClass() const */

long * SavedLevelReplaySubsystem::GetClass(void)

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
  uVar2 = DataDrivenLevelReplaySubsystem::StaticGetClass();
  (*pcVar3)(plVar1,"SavedLevelReplaySubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SavedLevelReplaySubsystem::SavedLevelReplaySubsystem() */

void __thiscall
SavedLevelReplaySubsystem::SavedLevelReplaySubsystem(SavedLevelReplaySubsystem *this)

{
  DataDrivenLevelReplaySubsystem::DataDrivenLevelReplaySubsystem
            ((DataDrivenLevelReplaySubsystem *)this);
  *(undefined ***)this = &PTR_GetClass_066a7940;
  return;
}


/* SavedLevelReplaySubsystem::StaticNew() */

SavedLevelReplaySubsystem * SavedLevelReplaySubsystem::StaticNew(void)

{
  SavedLevelReplaySubsystem *this;
  
  this = ::operator_new(0x78);
  SavedLevelReplaySubsystem(this);
  return this;
}


/* SavedLevelReplaySubsystem::~SavedLevelReplaySubsystem() */

void __thiscall
SavedLevelReplaySubsystem::~SavedLevelReplaySubsystem(SavedLevelReplaySubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_066a7940;
  DataDrivenLevelReplaySubsystem::~DataDrivenLevelReplaySubsystem
            ((DataDrivenLevelReplaySubsystem *)this);
  return;
}


/* SavedLevelReplaySubsystem::~SavedLevelReplaySubsystem() */

void __thiscall
SavedLevelReplaySubsystem::~SavedLevelReplaySubsystem(SavedLevelReplaySubsystem *this)

{
  ~SavedLevelReplaySubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SavedLevelReplaySubsystem::loadReplay() */

void __thiscall SavedLevelReplaySubsystem::loadReplay(SavedLevelReplaySubsystem *this)

{
  byte bVar1;
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = JoustUtils::HasLevelHumanReplay();
  if (bVar1 != 0) {
    JoustUtils::GetLevelHumanReplay((JoustUtils *)(ulong)bVar1);
    LevelReplayData::ImportFromBinary((LevelReplayData *)(this + 0x30),aBStack_38);
    Sexy::Buffer::~Buffer(aBStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

