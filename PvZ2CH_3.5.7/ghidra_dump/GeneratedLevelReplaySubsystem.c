// Class: GeneratedLevelReplaySubsystem


/* GeneratedLevelReplaySubsystem::GetFinalScore() */

void __thiscall GeneratedLevelReplaySubsystem::GetFinalScore(GeneratedLevelReplaySubsystem *this)

{
  FUN_0384a068(*(undefined4 *)(this + 0x28));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneratedLevelReplaySubsystem::StaticClassInit() */

void GeneratedLevelReplaySubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneratedLevelReplaySubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_0384b048,0xa8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneratedLevelReplaySubsystem::StaticGetClass() */

long * GeneratedLevelReplaySubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneratedLevelReplaySubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneratedLevelReplaySubsystem::GetClass() const */

long * GeneratedLevelReplaySubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneratedLevelReplaySubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneratedLevelReplaySubsystem::calcRatio(float, float, float) */

float GeneratedLevelReplaySubsystem::calcRatio(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = (float)Sexy::Rand(param_3 - param_2);
  return param_2 + param_1 + fVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneratedLevelReplaySubsystem::generateReplayLinearEarlyPeak() */

void __thiscall
GeneratedLevelReplaySubsystem::generateReplayLinearEarlyPeak(GeneratedLevelReplaySubsystem *this)

{
  GeneratedLevelReplaySubsystem *pGVar1;
  undefined4 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)Sexy::Rand(20.0);
  fVar4 = fVar4 + 20.0;
  fVar5 = (float)Sexy::Rand(60.0);
  fVar6 = (float)Sexy::Rand(60.0);
  if (*(int *)(this + 0xa4) == 0) {
    fVar5 = (float)Sexy::Rand(55.0);
    fVar5 = fVar5 + 30.0;
    fVar6 = (float)Sexy::Rand(30.0);
    fVar9 = 0.85;
    fVar6 = fVar6 + 20.0;
  }
  else {
    fVar5 = fVar5 + 60.0;
    fVar6 = fVar6 + 30.0;
    fVar9 = 0.9;
  }
  pGVar1 = this + 0x30;
  std::string::string(asStack_10,"");
  LevelReplayData::AddEvent(fVar4,pGVar1,0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar3 = JoustPropertySheet::GetProperties();
  uVar2 = RandRangeInt((int)*(float *)(lVar3 + 0x20),(int)*(float *)(lVar3 + 0x24));
  *(undefined4 *)(this + 0xa0) = uVar2;
  do {
    fVar7 = (float)calcRatio(fVar9,-0.2,0.05);
    if (((fVar5 < fVar4) && (fVar4 < fVar6 + fVar5)) &&
       (fVar8 = (float)calcRatio(1.2,-0.2,0.2), fVar7 < fVar8)) {
      fVar7 = fVar7 + (1.0 - ABS((fVar4 - (fVar5 + fVar6 * 0.5)) * (1.0 / (fVar6 * 0.5)))) *
                      (fVar8 - fVar7);
    }
    std::string::string(asStack_10,"");
    LevelReplayData::AddEvent(fVar7,pGVar1,3,asStack_10);
    std::string::~string(asStack_10);
    nop();
    fVar7 = (float)Sexy::Rand(*(float *)(lVar3 + 0x14) - *(float *)(lVar3 + 0x10));
    fVar7 = fVar7 + *(float *)(lVar3 + 0x10);
    std::string::string(asStack_10,"");
    fVar4 = fVar4 + fVar7;
    LevelReplayData::AddEvent(fVar7,pGVar1,0,asStack_10);
    std::string::~string(asStack_10);
    nop();
  } while (fVar4 < 1800.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneratedLevelReplaySubsystem::loadReplay() */

void __thiscall GeneratedLevelReplaySubsystem::loadReplay(GeneratedLevelReplaySubsystem *this)

{
  GeneratedLevelReplaySubsystem *pGVar1;
  undefined4 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  fVar4 = (float)Sexy::Rand(20.0);
  fVar4 = fVar4 + 20.0;
  fVar5 = (float)Sexy::Rand(60.0);
  fVar6 = (float)Sexy::Rand(60.0);
  if (*(int *)(this + 0xa4) == 0) {
    fVar5 = (float)Sexy::Rand(55.0);
    fVar5 = fVar5 + 30.0;
    fVar6 = (float)Sexy::Rand(30.0);
    fVar9 = 0.85;
    fVar6 = fVar6 + 20.0;
  }
  else {
    fVar5 = fVar5 + 60.0;
    fVar6 = fVar6 + 30.0;
    fVar9 = 0.9;
  }
  pGVar1 = this + 0x30;
  std::string::string(asStack_10,"");
  LevelReplayData::AddEvent(fVar4,pGVar1,0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar3 = JoustPropertySheet::GetProperties();
  uVar2 = RandRangeInt((int)*(float *)(lVar3 + 0x20),(int)*(float *)(lVar3 + 0x24));
  *(undefined4 *)(this + 0xa0) = uVar2;
  do {
    fVar7 = (float)calcRatio(fVar9,-0.2,0.05);
    if (((fVar5 < fVar4) && (fVar4 < fVar6 + fVar5)) &&
       (fVar8 = (float)calcRatio(1.2,-0.2,0.2), fVar7 < fVar8)) {
      fVar7 = fVar7 + (1.0 - ABS((fVar4 - (fVar5 + fVar6 * 0.5)) * (1.0 / (fVar6 * 0.5)))) *
                      (fVar8 - fVar7);
    }
    std::string::string(asStack_10,"");
    LevelReplayData::AddEvent(fVar7,pGVar1,3,asStack_10);
    std::string::~string(asStack_10);
    nop();
    fVar7 = (float)Sexy::Rand(*(float *)(lVar3 + 0x14) - *(float *)(lVar3 + 0x10));
    fVar7 = fVar7 + *(float *)(lVar3 + 0x10);
    std::string::string(asStack_10,"");
    fVar4 = fVar4 + fVar7;
    LevelReplayData::AddEvent(fVar7,pGVar1,0,asStack_10);
    std::string::~string(asStack_10);
    nop();
  } while (fVar4 < 1800.0);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneratedLevelReplaySubsystem::calcCurrentMinScore() */

int __thiscall
GeneratedLevelReplaySubsystem::calcCurrentMinScore(GeneratedLevelReplaySubsystem *this)

{
  int iVar1;
  JoustGameModule *this_00;
  long lVar2;
  long lVar3;
  float fVar4;
  
  this_00 = (JoustGameModule *)JoustUtils::GetJoustGameModule();
  lVar2 = JoustGameModule::GetMaxLevelTime(this_00);
  iVar1 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_0384b5e8(this + 0x14);
    fVar4 = (float)NEON_fminnm((float)lVar3 / (float)lVar2,0x3f800000);
    iVar1 = (int)(fVar4 * (float)*(int *)(this + 0xa0));
  }
  return iVar1;
}


/* GeneratedLevelReplaySubsystem::GeneratedLevelReplaySubsystem() */

void __thiscall
GeneratedLevelReplaySubsystem::GeneratedLevelReplaySubsystem(GeneratedLevelReplaySubsystem *this)

{
  DataDrivenLevelReplaySubsystem::DataDrivenLevelReplaySubsystem
            ((DataDrivenLevelReplaySubsystem *)this);
  *(undefined ***)this = &PTR_GetClass_066a7a30;
  JoustPlayerData::JoustPlayerData((JoustPlayerData *)(this + 0x78));
  *(undefined4 *)(this + 0xa4) = 1;
  return;
}


/* GeneratedLevelReplaySubsystem::StaticNew() */

GeneratedLevelReplaySubsystem * GeneratedLevelReplaySubsystem::StaticNew(void)

{
  GeneratedLevelReplaySubsystem *this;
  
  this = ::operator_new(0xa8);
  GeneratedLevelReplaySubsystem(this);
  return this;
}


/* GeneratedLevelReplaySubsystem::generateNextScore(float) */

void __thiscall
GeneratedLevelReplaySubsystem::generateNextScore(GeneratedLevelReplaySubsystem *this,float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar1 = FUN_0384a068(*(undefined4 *)(this + 0x28));
  lVar4 = JoustUtils::GetScoringSystem();
  iVar2 = FUN_0384a060(*(undefined4 *)(lVar4 + 0x14));
  iVar3 = calcCurrentMinScore(this);
  if (iVar3 < iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 < (int)((float)iVar2 * param_1)) {
    iVar3 = (int)((float)iVar2 * param_1);
  }
  LevelReplaySubsystem::setCurrentScore((LevelReplaySubsystem *)this,iVar3);
  return;
}


/* GeneratedLevelReplaySubsystem::~GeneratedLevelReplaySubsystem() */

void __thiscall
GeneratedLevelReplaySubsystem::~GeneratedLevelReplaySubsystem(GeneratedLevelReplaySubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_066a7a30;
  JoustPlayerData::~JoustPlayerData((JoustPlayerData *)(this + 0x78));
  DataDrivenLevelReplaySubsystem::~DataDrivenLevelReplaySubsystem
            ((DataDrivenLevelReplaySubsystem *)this);
  return;
}


/* GeneratedLevelReplaySubsystem::~GeneratedLevelReplaySubsystem() */

void __thiscall
GeneratedLevelReplaySubsystem::~GeneratedLevelReplaySubsystem(GeneratedLevelReplaySubsystem *this)

{
  ~GeneratedLevelReplaySubsystem(this);
  AK::FreeHook(this);
  return;
}

