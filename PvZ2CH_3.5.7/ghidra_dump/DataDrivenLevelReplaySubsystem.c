// Class: DataDrivenLevelReplaySubsystem


/* DataDrivenLevelReplaySubsystem::calculateNextTimeDelta() */

void __thiscall
DataDrivenLevelReplaySubsystem::calculateNextTimeDelta(DataDrivenLevelReplaySubsystem *this)

{
  LevelReplayData::CalculateNextTimeDelta((LevelReplayData *)(this + 0x30),*(int *)(this + 0x70));
  return;
}


/* DataDrivenLevelReplaySubsystem::Clear() */

void __thiscall DataDrivenLevelReplaySubsystem::Clear(DataDrivenLevelReplaySubsystem *this)

{
  LevelReplayData::Clear((LevelReplayData *)(this + 0x30));
  return;
}


/* DataDrivenLevelReplaySubsystem::GetFinalScore() */

ulong __thiscall DataDrivenLevelReplaySubsystem::GetFinalScore(DataDrivenLevelReplaySubsystem *this)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = LevelReplayData::GetLastEvent((LevelReplayData *)(this + 0x30),1);
  if (lVar1 != 0) {
    return (ulong)(uint)(int)*(float *)(lVar1 + 4);
  }
  uVar2 = FUN_0384a068(*(undefined4 *)(this + 0x28));
  return uVar2;
}


/* DataDrivenLevelReplaySubsystem::HasPlantLoadout() */

bool __thiscall
DataDrivenLevelReplaySubsystem::HasPlantLoadout(DataDrivenLevelReplaySubsystem *this)

{
  long lVar1;
  
  lVar1 = FUN_0384a0f0(*(undefined8 *)(this + 0x58),*(undefined8 *)(this + 0x60));
  return lVar1 != 0;
}


/* DataDrivenLevelReplaySubsystem::hasData() */

void __thiscall DataDrivenLevelReplaySubsystem::hasData(DataDrivenLevelReplaySubsystem *this)

{
  LevelReplayData::HasData((LevelReplayData *)(this + 0x30));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DataDrivenLevelReplaySubsystem::StaticClassInit() */

void DataDrivenLevelReplaySubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"DataDrivenLevelReplaySubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_0384bcd8,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DataDrivenLevelReplaySubsystem::StaticGetClass() */

long * DataDrivenLevelReplaySubsystem::StaticGetClass(void)

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
  uVar2 = LevelReplaySubsystem::StaticGetClass();
  (*pcVar3)(plVar1,"DataDrivenLevelReplaySubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DataDrivenLevelReplaySubsystem::GetClass() const */

long * DataDrivenLevelReplaySubsystem::GetClass(void)

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
  uVar2 = LevelReplaySubsystem::StaticGetClass();
  (*pcVar3)(plVar1,"DataDrivenLevelReplaySubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DataDrivenLevelReplaySubsystem::start() */

void __thiscall DataDrivenLevelReplaySubsystem::start(DataDrivenLevelReplaySubsystem *this)

{
  *(undefined4 *)(this + 0x70) = 0;
  LevelReplaySubsystem::start((LevelReplaySubsystem *)this);
  return;
}


/* DataDrivenLevelReplaySubsystem::DataDrivenLevelReplaySubsystem() */

void __thiscall
DataDrivenLevelReplaySubsystem::DataDrivenLevelReplaySubsystem(DataDrivenLevelReplaySubsystem *this)

{
  LevelReplaySubsystem::LevelReplaySubsystem((LevelReplaySubsystem *)this);
  *(undefined ***)this = &PTR_GetClass_066a7850;
  LevelReplayData::LevelReplayData((LevelReplayData *)(this + 0x30));
  return;
}


/* DataDrivenLevelReplaySubsystem::StaticNew() */

DataDrivenLevelReplaySubsystem * DataDrivenLevelReplaySubsystem::StaticNew(void)

{
  DataDrivenLevelReplaySubsystem *this;
  
  this = ::operator_new(0x78);
  DataDrivenLevelReplaySubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DataDrivenLevelReplaySubsystem::processNextEvents(bool) */

void __thiscall
DataDrivenLevelReplaySubsystem::processNextEvents(DataDrivenLevelReplaySubsystem *this,bool param_1)

{
  bool bVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  int local_20;
  float fStack_1c;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = LevelReplayData::GetEventCount((LevelReplayData *)(this + 0x30));
  iVar5 = *(int *)(this + 0x70);
  if (iVar5 < iVar2) {
    do {
      puVar3 = (ulong *)LevelReplayData::GetEvent((LevelReplayData *)(this + 0x30),iVar5);
      uVar4 = *puVar3;
      *(int *)(this + 0x70) = iVar5 + 1;
      LevelReplayEvent::ToString();
      local_20 = (int)uVar4;
      fStack_1c = (float)(uVar4 >> 0x20);
      switch(uVar4 & 0xffffffff) {
      case 0:
        if (!param_1) {
          *(int *)(this + 0x70) = *(int *)(this + 0x70) + -1;
          std::string::~string(asStack_18);
          goto LAB_0384c4fc;
        }
        bVar1 = true;
        LevelReplaySubsystem::updateNextDelta((LevelReplaySubsystem *)this);
        break;
      case 1:
        bVar1 = false;
        LevelReplaySubsystem::setCurrentScore((LevelReplaySubsystem *)this,(int)fStack_1c);
        break;
      case 2:
        bVar1 = false;
        LevelReplaySubsystem::setCurrentMultiplier((LevelReplaySubsystem *)this,(int)fStack_1c);
        break;
      case 3:
        bVar1 = false;
        (**(code **)(*(long *)this + 0xd8))(fStack_1c,this);
        uVar4 = FUN_0384a068(*(undefined4 *)(this + 0x28));
        Sexy::StrFormat(" = %d",asStack_10,uVar4 & 0xffffffff);
        thunk_FUN_054757c0(asStack_18,asStack_10);
        std::string::~string(asStack_10);
        break;
      default:
        bVar1 = false;
      }
      if (local_20 == 0) {
        FUN_05475ad8(asStack_18,&DAT_055ce528);
        std::string::~string(asStack_18);
        iVar5 = *(int *)(this + 0x70);
      }
      else {
        FUN_05475ad8(asStack_18,&DAT_0559c978);
        std::string::~string(asStack_18);
        iVar5 = *(int *)(this + 0x70);
      }
      if (iVar2 <= iVar5) goto LAB_0384c580;
    } while (!bVar1);
  }
  else {
LAB_0384c580:
    FUN_0384a2e8(this + 0x24);
  }
LAB_0384c4fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DataDrivenLevelReplaySubsystem::~DataDrivenLevelReplaySubsystem() */

void __thiscall
DataDrivenLevelReplaySubsystem::~DataDrivenLevelReplaySubsystem
          (DataDrivenLevelReplaySubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_066a7850;
  LevelReplayData::~LevelReplayData((LevelReplayData *)(this + 0x30));
  LevelReplaySubsystem::~LevelReplaySubsystem((LevelReplaySubsystem *)this);
  return;
}


/* DataDrivenLevelReplaySubsystem::~DataDrivenLevelReplaySubsystem() */

void __thiscall
DataDrivenLevelReplaySubsystem::~DataDrivenLevelReplaySubsystem
          (DataDrivenLevelReplaySubsystem *this)

{
  ~DataDrivenLevelReplaySubsystem(this);
  AK::FreeHook(this);
  return;
}

