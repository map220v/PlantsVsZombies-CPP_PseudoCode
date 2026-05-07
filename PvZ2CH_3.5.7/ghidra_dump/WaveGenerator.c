// Class: WaveGenerator


/* WaveGenerator::GetZombieTypeInWaveByIndex(int, int) */

void WaveGenerator::GetZombieTypeInWaveByIndex(int param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int in_w2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  puVar1 = (undefined8 *)FUN_0329b6c8(*(undefined8 *)((ulong)(uint)param_1 + 0x68),(long)param_2);
  lVar2 = FUN_0329b6d4(*puVar1,(long)in_w2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar2 + 0x38));
  return;
}


/* WaveGenerator::GetZombieLevelInWaveByIndex(int, int) */

undefined4 __thiscall
WaveGenerator::GetZombieLevelInWaveByIndex(WaveGenerator *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_0329b6c8(*(undefined8 *)(this + 0x68),(long)param_1);
  lVar2 = FUN_0329b6d4(*puVar1,(long)param_2);
  return *(undefined4 *)(lVar2 + 0x18);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::StaticClassInit() */

void WaveGenerator::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePoolItem");
    (*pcVar3)(plVar2,asStack_10,FUN_044f84e0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombiePtrBoolPair");
    (*pcVar3)(plVar2,asStack_10,FUN_044f8390,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombiePtrPoolItemVectorPair");
    (*pcVar3)(plVar2,asStack_10,FUN_044f87c0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WaveSpawnItem");
    (*pcVar3)(plVar2,asStack_10,FUN_044f7ddc,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"EventZombieData");
    (*pcVar3)(plVar2,asStack_10,FUN_044f7b34,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"EventZombieWaveData");
    (*pcVar3)(plVar2,asStack_10,FUN_044f89bc,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WaveGenerator");
    (*pcVar3)(plVar2,asStack_10,FUN_044fa554,0x2898,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveGenerator::StaticGetClass() */

long * WaveGenerator::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"WaveGenerator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveGenerator::GetClass() const */

long * WaveGenerator::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"WaveGenerator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveGenerator::PauseNextWave(bool) */

void __thiscall WaveGenerator::PauseNextWave(WaveGenerator *this,bool param_1)

{
  this[0x45] = (WaveGenerator)param_1;
  return;
}


/* WaveGenerator::IsFlagWave(int) */

bool __thiscall WaveGenerator::IsFlagWave(WaveGenerator *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_044f43dc(*(undefined4 *)(this + 0xc));
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = param_1 / iVar2;
  }
  return param_1 - iVar1 * iVar2 == iVar2 + -1;
}


/* WaveGenerator::GetFlagWavesTriggered(int) */

int __thiscall WaveGenerator::GetFlagWavesTriggered(WaveGenerator *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_044f43dc(*(undefined4 *)(this + 0xc));
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = (param_1 + 1) / iVar2;
  }
  return iVar1;
}


/* WaveGenerator::GetTotalFlagWaves() */

int __thiscall WaveGenerator::GetTotalFlagWaves(WaveGenerator *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_044f43dc(*(undefined4 *)(this + 0xc));
  if (0 < iVar2) {
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(this + 0x24) / iVar2;
    }
    return iVar1;
  }
  return 0;
}


/* WaveGenerator::updateLootStats(Loot) */

void __thiscall WaveGenerator::updateLootStats(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(gLawnApp + 0x9f0);
  switch(param_2) {
  case 0:
    *(int *)(lVar1 + 0x85c) = *(int *)(lVar1 + 0x85c) + 1;
    return;
  case 1:
    *(int *)(lVar1 + 0x860) = *(int *)(lVar1 + 0x860) + 1;
    return;
  case 2:
    *(int *)(lVar1 + 0x864) = *(int *)(lVar1 + 0x864) + 1;
    return;
  case 3:
    *(int *)(lVar1 + 0x868) = *(int *)(lVar1 + 0x868) + 1;
    return;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    *(int *)(lVar1 + 0x878) = *(int *)(lVar1 + 0x878) + 1;
    break;
  case 0x10:
    *(int *)(lVar1 + 0x86c) = *(int *)(lVar1 + 0x86c) + 1;
    return;
  case 0x11:
    *(int *)(lVar1 + 0x870) = *(int *)(lVar1 + 0x870) + 1;
    return;
  }
  return;
}


/* WaveGenerator::Initialize(WaveGeneratorProperties const*) */

void __thiscall WaveGenerator::Initialize(WaveGenerator *this,WaveGeneratorProperties *param_1)

{
  *(WaveGeneratorProperties **)(this + 0x2880) = param_1;
  return;
}


/* WaveGenerator::GetWaveDefinition(int) */

undefined8 __thiscall WaveGenerator::GetWaveDefinition(WaveGenerator *this,int param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(this + 0x2880);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x40);
    uVar1 = FUN_044f4544(uVar3,*(undefined8 *)(lVar2 + 0x48));
    if ((ulong)(long)param_1 < uVar1) {
      uVar3 = FUN_044f4564(uVar3,(long)param_1);
      return uVar3;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::GetNumberZombiesInWave(int) */

void __thiscall WaveGenerator::GetNumberZombiesInWave(WaveGenerator *this,int param_1)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  do {
    puVar2 = (undefined8 *)FUN_044f4410(*(undefined8 *)(this + 0x68),(long)param_1);
    lVar3 = FUN_044f441c(*puVar2,uVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)(lVar3 + 0x38));
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      uVar4 = uVar4 & 0xffffffff;
      goto LAB_044f5280;
    }
    uVar4 = uVar4 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  } while (uVar4 != 0x32);
  uVar4 = 0;
LAB_044f5280:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WaveGenerator::SpawnNextWaveIn(float) */

void __thiscall WaveGenerator::SpawnNextWaveIn(WaveGenerator *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x38) = fVar1 + param_1;
  return;
}


/* WaveGenerator::OnLevelStarted() */

void __thiscall WaveGenerator::OnLevelStarted(WaveGenerator *this)

{
  int iVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  
  lVar2 = Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if ((lVar2 == 0) || (iVar1 = FUN_044f43d0(*(undefined4 *)(lVar2 + 0x19c)), iVar1 != 1)) {
    if (*(char *)(*(long *)(this + 0x2880) + 0x8d) == '\0') {
      fVar3 = (float)PVZ_T();
      *(undefined4 *)(this + 0x40) = 0x41900000;
      *(float *)(this + 0x38) = fVar3 + 18.0;
      uVar4 = PVZ_T();
      *(undefined4 *)(this + 0x3c) = uVar4;
      return;
    }
  }
  else if (*(char *)(*(long *)(this + 0x2880) + 0x8d) == '\0') {
    fVar3 = (float)PVZ_T();
    *(undefined4 *)(this + 0x40) = 0x40a00000;
    *(float *)(this + 0x38) = fVar3 + 5.0;
    uVar4 = PVZ_T();
    *(undefined4 *)(this + 0x3c) = uVar4;
    return;
  }
  fVar3 = (float)PVZ_T();
  *(undefined4 *)(this + 0x40) = 0x40000000;
  *(float *)(this + 0x38) = fVar3 + 2.0;
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x3c) = uVar4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::CanZombieSpawnOnLevel(Sexy::RtWeakPtr<ZombieType const>) */

void __thiscall WaveGenerator::CanZombieSpawnOnLevel(WaveGenerator *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
  cVar1 = FUN_044f5b14(aRStack_18,*(undefined8 *)(this + 0x2880));
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    cVar1 = FUN_044f5d6c(aRStack_10,*(undefined8 *)(this + 0x2880));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::GetTotalZombiesHealthInWave(int) */

void __thiscall WaveGenerator::GetTotalZombiesHealthInWave(WaveGenerator *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  int extraout_w1;
  int extraout_w1_00;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  fVar7 = 0.0;
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x29);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail((int)fVar7);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    cVar2 = (**(code **)(*plVar5 + 0x328))();
    if (cVar2 == '\0') {
      uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = Zombie::HasCondition(uVar4,0x65);
      if (cVar2 != '\0') goto LAB_044f6880;
      uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = Zombie::HasCondition(uVar4,0x81);
      if (cVar2 != '\0') goto LAB_044f6880;
      uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = RealObject::IsOnTeam(uVar4,1);
      if (cVar2 != '\0') goto LAB_044f6880;
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      iVar3 = FUN_044f43f8(*(undefined4 *)(lVar6 + 0x2b0));
      if (iVar3 != param_1) goto LAB_044f6880;
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      iVar3 = (**(code **)(*plVar5 + 0x210))();
      fVar7 = fVar7 + (float)iVar3;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      iVar3 = extraout_w1_00;
    }
    else {
LAB_044f6880:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      iVar3 = extraout_w1;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
  } while( true );
}


/* WaveGenerator::OnSandStormSpawned() */

void __thiscall WaveGenerator::OnSandStormSpawned(WaveGenerator *this)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x10);
  if (iVar2 == 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_Zomb_Egypt_Sandstorm_Start");
    iVar2 = *(int *)(this + 0x10);
  }
  *(int *)(this + 0x10) = iVar2 + 1;
  return;
}


/* WaveGenerator::OnSandStormDestroyed() */

void __thiscall WaveGenerator::OnSandStormDestroyed(WaveGenerator *this)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(this + 0x10);
  *(int *)(this + 0x10) = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_Zomb_Egypt_Sandstorm_End");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::nextWaveComing() */

void __thiscall WaveGenerator::nextWaveComing(WaveGenerator *this)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  Board *pBVar4;
  float fVar5;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  iVar3 = *(int *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  if (iVar3 + 1 == *(int *)(this + 0x24)) {
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(auStack_10,L"[WARNING_FINAL_WAVE]",auStack_18);
    Board::DisplayAdviceAgain(pBVar4,auStack_10,0x18,0);
    FUN_05476c50(auStack_10);
    nop();
    fVar5 = (float)PVZ_T();
    *(float *)(this + 0x2c) = fVar5 + 0.6;
    MessageRouter::Post((_func_void *)gMessageRouter);
    iVar3 = *(int *)(this + 0x20);
  }
  if (iVar3 == 0) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_Awooga");
  }
  else {
    cVar1 = IsFlagWave(this,iVar3);
    if (cVar1 != '\0') {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_Siren");
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::SpawnZombiesFromEvent(WaveEventData const*, EventType, int, int, bool,
   Sexy::RtWeakPtr<ZombieType const>, bool) */

void __thiscall
WaveGenerator::SpawnZombiesFromEvent
          (WaveGenerator *this,long param_1,undefined4 param_3,int param_4,uint param_5,char param_6
          ,RtWeakPtrBase *param_7,undefined1 param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  long lVar17;
  EventZombieWaveData *pEVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  int local_394;
  int local_390;
  int local_368;
  int local_364;
  undefined8 local_348;
  int local_310;
  RtWeakPtr<Sexy::SoundResource> aRStack_230 [8];
  undefined4 local_228;
  undefined4 local_224;
  int local_220;
  undefined4 local_21c;
  undefined4 local_218;
  int local_214;
  undefined4 local_210;
  undefined4 local_20c;
  int local_208;
  undefined4 local_204;
  undefined4 local_200;
  int local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  int local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  int local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  int local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  int local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  int local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  int local_19c;
  undefined4 local_198;
  undefined4 local_194;
  int local_190;
  undefined4 local_18c;
  undefined4 local_188;
  int local_184;
  undefined4 local_180;
  undefined4 local_17c;
  int local_178;
  undefined4 local_174;
  undefined4 local_170;
  int local_16c;
  undefined4 local_168;
  undefined4 local_164;
  int local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  undefined4 local_150;
  undefined4 local_14c;
  int local_148;
  undefined4 local_144;
  undefined4 local_140;
  int local_13c;
  undefined4 local_138;
  undefined4 local_134;
  int local_130;
  undefined4 local_12c;
  undefined4 local_128;
  int local_124;
  undefined4 local_120;
  undefined4 local_11c;
  int local_118;
  undefined4 local_114;
  undefined4 local_110;
  int local_10c;
  undefined4 local_108;
  undefined4 local_104;
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_4 == -1) {
    param_4 = *(int *)(this + 0x48) + -1;
    if (*(int *)(this + 0x48) == 0) goto LAB_044fd510;
    param_5 = *(int *)(this + 0x4c) - 1;
    local_394 = *(int *)(this + 0x50);
    if (param_1 == 0) goto LAB_044fdf70;
LAB_044fd130:
    iVar22 = *(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) < 0) {
      iVar22 = local_394;
    }
    if (iVar22 < 1) goto LAB_044fd510;
    local_364 = *(int *)(param_1 + 0xc);
    local_394 = iVar22;
    if (local_364 < 1) {
      iVar14 = *(int *)(param_1 + 8);
      iVar19 = *(int *)(this + 0x58);
      local_364 = *(int *)(this + 0x54);
      if (0 < iVar14) goto LAB_044fd56c;
    }
    else {
      iVar14 = *(int *)(param_1 + 8);
      iVar19 = *(int *)(this + 0x58);
      if (0 < iVar14) {
        local_310 = 0;
        if (local_364 != 0) {
          local_310 = iVar22 / local_364;
        }
        goto joined_r0x044fd598;
      }
    }
    iVar14 = iVar19;
  }
  else {
    local_394 = *(int *)(this + 0x50);
    if (param_1 != 0) goto LAB_044fd130;
LAB_044fdf70:
    if (local_394 < 1) goto LAB_044fd510;
    local_364 = *(int *)(this + 0x54);
    iVar14 = *(int *)(this + 0x58);
  }
LAB_044fd56c:
  if (0 < local_364) {
    local_310 = 0;
    if (local_364 != 0) {
      local_310 = local_394 / local_364;
    }
joined_r0x044fd598:
    if (local_364 == 1) {
      fVar29 = 0.0;
    }
    else {
      fVar29 = ((float)iVar14 * 0.01) / (float)(local_364 + -1);
    }
    uVar1 = (uint)(param_4 < 1) & ~param_5 >> 0x1f;
    iVar22 = 10000;
    iVar14 = iVar22;
    if (uVar1 == 0) {
      iVar14 = 0;
    }
    if ((int)param_5 < 1 || 1 < param_4) {
      iVar22 = 0;
    }
    iVar23 = 10000;
    iVar19 = iVar23;
    if ((int)param_5 < 2 || 2 < param_4) {
      iVar19 = 0;
    }
    local_368 = 0;
    iVar2 = iVar23;
    if ((int)param_5 < 3 || 3 < param_4) {
      iVar2 = 0;
    }
    local_390 = 0;
    iVar3 = iVar23;
    if ((int)param_5 < 4 || 4 < param_4) {
      iVar3 = 0;
    }
    if ((int)param_5 < 5 || 5 < param_4) {
      iVar23 = 0;
    }
    iVar24 = 10000;
    iVar4 = iVar24;
    if ((int)param_5 < 6 || 6 < param_4) {
      iVar4 = 0;
    }
    iVar5 = iVar24;
    if ((int)param_5 < 7 || 7 < param_4) {
      iVar5 = 0;
    }
    iVar6 = iVar24;
    if ((int)param_5 < 8 || 8 < param_4) {
      iVar6 = 0;
    }
    iVar7 = iVar24;
    if (uVar1 == 0) {
      iVar7 = 0;
    }
    iVar8 = iVar24;
    if ((int)param_5 < 1 || 1 < param_4) {
      iVar8 = 0;
    }
    iVar9 = iVar24;
    if ((int)param_5 < 2 || 2 < param_4) {
      iVar9 = 0;
    }
    iVar10 = iVar24;
    if ((int)param_5 < 3 || 3 < param_4) {
      iVar10 = 0;
    }
    if ((int)param_5 < 4 || 4 < param_4) {
      iVar24 = 0;
    }
    iVar25 = 10000;
    iVar11 = iVar25;
    if ((int)param_5 < 5 || 5 < param_4) {
      iVar11 = 0;
    }
    iVar12 = iVar25;
    if ((int)param_5 < 6 || 6 < param_4) {
      iVar12 = 0;
    }
    iVar13 = iVar25;
    if ((int)param_5 < 7 || 7 < param_4) {
      iVar13 = 0;
    }
    if ((int)param_5 < 8 || 8 < param_4) {
      iVar25 = 0;
    }
    uVar28 = *(undefined8 *)(this + 0x98);
    puVar15 = (undefined8 *)FUN_044f4538(uVar28,0);
    if (*(int *)((long)puVar15 + 4) == 0) goto LAB_044fdc3c;
    do {
      puVar15 = (undefined8 *)FUN_044f4538(uVar28,1);
      if (*(int *)((long)puVar15 + 4) == 0) {
        local_348 = 1;
      }
      else {
        puVar15 = (undefined8 *)FUN_044f4538(uVar28,2);
        if (*(int *)((long)puVar15 + 4) == 0) {
          local_348 = 2;
        }
        else {
          puVar15 = (undefined8 *)FUN_044f4538(uVar28,3);
          if (*(int *)((long)puVar15 + 4) == 0) {
            local_348 = 3;
          }
          else {
            puVar15 = (undefined8 *)FUN_044f4538(uVar28,4);
            if (*(int *)((long)puVar15 + 4) == 0) {
              local_348 = 4;
            }
            else {
              puVar15 = (undefined8 *)FUN_044f4538(uVar28,5);
              if (*(int *)((long)puVar15 + 4) == 0) {
                local_348 = 5;
              }
              else {
                puVar15 = (undefined8 *)FUN_044f4538(uVar28,6);
                if (*(int *)((long)puVar15 + 4) == 0) {
                  local_348 = 6;
                }
                else {
                  puVar15 = (undefined8 *)FUN_044f4538(uVar28,7);
                  if (*(int *)((long)puVar15 + 4) == 0) {
                    local_348 = 7;
                  }
                  else {
                    puVar15 = (undefined8 *)FUN_044f4538(uVar28,8);
                    if (*(int *)((long)puVar15 + 4) == 0) {
                      local_348 = 8;
                    }
                    else {
                      puVar15 = (undefined8 *)FUN_044f4538(uVar28,9);
                      if (*(int *)((long)puVar15 + 4) != 0) break;
                      local_348 = 9;
                    }
                  }
                }
              }
            }
          }
        }
      }
      while( true ) {
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar15[2] = 0;
        puVar15[3] = 0;
        puVar15[4] = 0;
        puVar15[5] = 0;
        local_390 = local_390 + local_310;
        if ((local_390 < local_394) && (local_368 == local_364 + -1)) {
          local_310 = local_310 + (local_394 - local_390);
        }
        puVar16 = (undefined4 *)FUN_044f4538(*(undefined8 *)(this + 0x98),local_348);
        puVar16[1] = local_310;
        *puVar16 = param_3;
        fVar27 = (float)PVZ_T();
        uVar28 = *(undefined8 *)(this + 0x98);
        puVar16[3] = fVar29 * (float)local_368 + 0.01 + fVar27;
        lVar17 = FUN_044f4538(uVar28,local_348);
        *(undefined4 *)(lVar17 + 8) = 0x3e800000;
        if (iVar14 == 0) {
          iVar26 = 0;
        }
        else {
          iVar26 = 5;
        }
        local_1f8 = 0;
        local_218 = 1;
        local_200 = 3;
        local_20c = 2;
        local_1f4 = 4;
        if (iVar22 != 0) {
          iVar26 = iVar26 + 5;
        }
        local_1e8 = 0;
        local_1dc = 1;
        local_1c4 = 3;
        local_1c8 = 1;
        local_1d0 = 2;
        local_1d4 = 1;
        local_1e0 = 1;
        local_1ec = 1;
        local_1b8 = 4;
        local_1bc = 1;
        if (iVar19 != 0) {
          iVar26 = iVar26 + 5;
        }
        local_1ac = 0;
        local_1a0 = 1;
        local_188 = 3;
        local_18c = 2;
        local_194 = 2;
        local_198 = 2;
        local_1a4 = 2;
        local_1b0 = 2;
        local_17c = 4;
        local_180 = 2;
        if (iVar2 != 0) {
          iVar26 = iVar26 + 5;
        }
        local_170 = 0;
        local_164 = 1;
        local_14c = 3;
        local_150 = 3;
        local_158 = 2;
        local_15c = 3;
        local_168 = 3;
        local_174 = 3;
        local_140 = 4;
        local_144 = 3;
        if (iVar3 != 0) {
          iVar26 = iVar26 + 5;
        }
        local_134 = 0;
        local_128 = 1;
        local_110 = 3;
        local_114 = 4;
        local_11c = 2;
        local_120 = 4;
        local_12c = 4;
        local_138 = 4;
        local_104 = 4;
        local_108 = 4;
        if (iVar23 != 0) {
          iVar26 = iVar26 + 5;
        }
        local_f8 = 0;
        local_ec = 1;
        local_d4 = 3;
        local_d8 = 5;
        local_e0 = 2;
        local_e4 = 5;
        local_f0 = 5;
        local_fc = 5;
        local_c8 = 4;
        local_cc = 5;
        if (iVar4 != 0) {
          iVar26 = iVar26 + 5;
        }
        local_bc = 0;
        local_b0 = 1;
        local_98 = 3;
        local_9c = 6;
        local_a4 = 2;
        local_a8 = 6;
        local_b4 = 6;
        local_c0 = 6;
        local_8c = 4;
        local_90 = 6;
        if (iVar5 != 0) {
          iVar26 = iVar26 + 5;
        }
        local_80 = 0;
        local_74 = 1;
        local_5c = 3;
        local_60 = 7;
        local_68 = 2;
        local_6c = 7;
        local_78 = 7;
        local_84 = 7;
        local_50 = 4;
        local_54 = 7;
        local_228 = local_1f8;
        local_224 = local_1f8;
        local_220 = iVar14;
        local_21c = local_1f8;
        local_214 = iVar14;
        local_210 = local_1f8;
        local_208 = iVar14;
        local_204 = local_1f8;
        local_1fc = iVar14;
        local_1f0 = iVar14;
        local_1e4 = iVar22;
        local_1d8 = iVar22;
        local_1cc = iVar22;
        local_1c0 = iVar22;
        local_1b4 = iVar22;
        local_1a8 = iVar19;
        local_19c = iVar19;
        local_190 = iVar19;
        local_184 = iVar19;
        local_178 = iVar19;
        local_16c = iVar2;
        local_160 = iVar2;
        local_154 = iVar2;
        local_148 = iVar2;
        local_13c = iVar2;
        local_130 = iVar3;
        local_124 = iVar3;
        local_118 = iVar3;
        local_10c = iVar3;
        local_100 = iVar3;
        local_f4 = iVar23;
        local_e8 = iVar23;
        local_dc = iVar23;
        local_d0 = iVar23;
        local_c4 = iVar23;
        local_b8 = iVar4;
        local_ac = iVar4;
        local_a0 = iVar4;
        local_94 = iVar4;
        local_88 = iVar4;
        local_7c = iVar5;
        local_70 = iVar5;
        local_64 = iVar5;
        local_58 = iVar5;
        local_4c = iVar5;
        local_40 = iVar6;
        local_34 = iVar6;
        local_28 = iVar6;
        local_1c = iVar6;
        local_10 = iVar6;
        if (iVar6 == 0) {
          local_38 = 1;
          local_2c = 2;
          local_48 = 8;
          local_3c = 8;
          local_30 = 8;
          local_24 = 8;
          local_20 = 3;
          local_18 = 8;
          local_14 = 4;
          local_44 = 0;
          if (iVar26 == 0) goto LAB_044fd510;
        }
        else {
          iVar26 = iVar26 + 5;
        }
        local_44 = 0;
        local_38 = 1;
        local_20 = 3;
        local_24 = 8;
        local_2c = 2;
        local_30 = 8;
        local_3c = 8;
        local_48 = 8;
        local_14 = 4;
        local_18 = 8;
        if (0 < local_310) {
          iVar20 = 0;
          iVar21 = 0;
          do {
            iVar20 = iVar20 + 1;
            puVar16 = (undefined4 *)
                      TodPickFromWeightedGridArray((TodWeightedGridArray *)&local_228,0x2d);
            if ((param_6 != '\0') && (puVar16[2] = 0, iVar20 == iVar26)) {
              local_1f8 = 0;
              local_1f4 = 4;
              local_1bc = 1;
              local_1b8 = 4;
              local_17c = 4;
              local_144 = 3;
              local_140 = 4;
              local_180 = 2;
              local_108 = 4;
              iVar20 = 0;
              local_104 = 4;
              local_cc = 5;
              local_c8 = 4;
              local_228 = 0;
              local_224 = 0;
              local_21c = 0;
              local_218 = 1;
              local_210 = 0;
              local_20c = 2;
              local_204 = 0;
              local_200 = 3;
              local_90 = 6;
              local_8c = 4;
              local_50 = 4;
              local_1ec = 1;
              local_1e8 = 0;
              local_1e0 = 1;
              local_1dc = 1;
              local_1d4 = 1;
              local_1d0 = 2;
              local_1c8 = 1;
              local_1c4 = 3;
              local_1b0 = 2;
              local_1ac = 0;
              local_1a4 = 2;
              local_1a0 = 1;
              local_198 = 2;
              local_194 = 2;
              local_18c = 2;
              local_188 = 3;
              local_174 = 3;
              local_170 = 0;
              local_168 = 3;
              local_164 = 1;
              local_15c = 3;
              local_158 = 2;
              local_150 = 3;
              local_14c = 3;
              local_138 = 4;
              local_134 = 0;
              local_12c = 4;
              local_128 = 1;
              local_120 = 4;
              local_11c = 2;
              local_114 = 4;
              local_110 = 3;
              local_fc = 5;
              local_f8 = 0;
              local_f0 = 5;
              local_ec = 1;
              local_e4 = 5;
              local_e0 = 2;
              local_d8 = 5;
              local_d4 = 3;
              local_54 = 7;
              local_c0 = 6;
              local_bc = 0;
              local_b4 = 6;
              local_b0 = 1;
              local_a8 = 6;
              local_a4 = 2;
              local_9c = 6;
              local_98 = 3;
              local_18 = 8;
              local_14 = 4;
              local_84 = 7;
              local_80 = 0;
              local_78 = 7;
              local_74 = 1;
              local_6c = 7;
              local_68 = 2;
              local_60 = 7;
              local_5c = 3;
              local_48 = 8;
              local_44 = 0;
              local_3c = 8;
              local_38 = 1;
              local_30 = 8;
              local_2c = 2;
              local_24 = 8;
              local_20 = 3;
              local_220 = iVar7;
              local_214 = iVar7;
              local_208 = iVar7;
              local_1fc = iVar7;
              local_1f0 = iVar7;
              local_1e4 = iVar8;
              local_1d8 = iVar8;
              local_1cc = iVar8;
              local_1c0 = iVar8;
              local_1b4 = iVar8;
              local_1a8 = iVar9;
              local_19c = iVar9;
              local_190 = iVar9;
              local_184 = iVar9;
              local_178 = iVar9;
              local_16c = iVar10;
              local_160 = iVar10;
              local_154 = iVar10;
              local_148 = iVar10;
              local_13c = iVar10;
              local_130 = iVar24;
              local_124 = iVar24;
              local_118 = iVar24;
              local_10c = iVar24;
              local_100 = iVar24;
              local_f4 = iVar11;
              local_e8 = iVar11;
              local_dc = iVar11;
              local_d0 = iVar11;
              local_c4 = iVar11;
              local_b8 = iVar12;
              local_ac = iVar12;
              local_a0 = iVar12;
              local_94 = iVar12;
              local_88 = iVar12;
              local_7c = iVar13;
              local_70 = iVar13;
              local_64 = iVar13;
              local_58 = iVar13;
              local_4c = iVar13;
              local_40 = iVar25;
              local_34 = iVar25;
              local_28 = iVar25;
              local_1c = iVar25;
              local_10 = iVar25;
            }
            iVar21 = iVar21 + 1;
            pEVar18 = (EventZombieWaveData *)FUN_044f4538(*(undefined8 *)(this + 0x98),local_348);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_230,param_7);
            EventZombieWaveData::ZombieAdd(pEVar18,aRStack_230,puVar16[1],*puVar16,param_8);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_230);
          } while (iVar21 != local_310);
        }
        local_368 = local_368 + 1;
        if (local_364 <= local_368) goto LAB_044fd510;
        uVar28 = *(undefined8 *)(this + 0x98);
        puVar15 = (undefined8 *)FUN_044f4538(uVar28,0);
        if (*(int *)((long)puVar15 + 4) != 0) break;
LAB_044fdc3c:
        local_348 = 0;
      }
    } while( true );
  }
LAB_044fd510:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::SpawnZombiesFromSandStorm(WaveEventData const*) */

void __thiscall WaveGenerator::SpawnZombiesFromSandStorm(WaveGenerator *this,WaveEventData *param_1)

{
  char *pcVar1;
  string *psVar2;
  Board *pBVar3;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Sandstorm");
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(aRStack_10,L"[WARNING_SANDSTORM]",asStack_18);
  Board::DisplayAdviceAgain(pBVar3,aRStack_10,0x11,1);
  FUN_05476c50(aRStack_10);
  nop();
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_18,"mummy");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  SpawnZombiesFromEvent(this,param_1,1,0xffffffff,0xffffffff,1,aRStack_10,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::SpawnZombiesFromRaidingParty(WaveEventData const*) */

void __thiscall
WaveGenerator::SpawnZombiesFromRaidingParty(WaveGenerator *this,WaveEventData *param_1)

{
  string *psVar1;
  Board *pBVar2;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(aRStack_10,L"[WARNING_RAIDINGPARTY]",asStack_18);
  Board::DisplayAdviceAgain(pBVar2,aRStack_10,0x11,1);
  FUN_05476c50(aRStack_10);
  nop();
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_18,"swashbuckler");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  SpawnZombiesFromEvent(this,param_1,2,0,0,1,aRStack_10,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::SpawnWave() */

void __thiscall WaveGenerator::SpawnWave(WaveGenerator *this)

{
  WaveEventData *pWVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uchar uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  WaveDefinition *pWVar13;
  char *pcVar14;
  RtObject *this_00;
  ZombieTarget *pZVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  int *piVar18;
  LevelModuleManager *this_01;
  ArmrackModule *this_02;
  long lVar19;
  StageModule *pSVar20;
  FestivalManager *pFVar21;
  ProfileMgr *this_03;
  PlayerInfo *this_04;
  ActivityConfig *this_05;
  DailySignRewardWithTW *pDVar22;
  ulong uVar23;
  RtMixedPtrBase *this_06;
  RtWeakPtr<Sexy::ResourceInfo> *this_07;
  ZombieType *this_08;
  RtWeakPtrBase *pRVar24;
  SexyVector3 *pSVar25;
  LawnApp *pLVar26;
  code *pcVar27;
  long lVar28;
  ulong uVar29;
  Board *pBVar30;
  long lVar31;
  long *plVar32;
  float fVar33;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  float local_80 [4];
  float local_70;
  float local_6c;
  int aiStack_60 [12];
  int local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pWVar13 = (WaveDefinition *)GetWaveDefinition(this,*(int *)(this + 0x20));
  MessageRouter::Post<int,WaveDefinition_const*,int,WaveDefinition_const*>
            ((MessageRouter *)gMessageRouter,Message::NewWaveStarting,*(int *)(this + 0x20),pWVar13)
  ;
  IsFlagWave(this,*(int *)(this + 0x20));
  lVar31 = (long)*(int *)(this + 0x20);
  pcVar14 = (char *)FUN_044f44c4(*(undefined8 *)(this + 0x80),lVar31);
  bVar2 = *pcVar14 == '\x01';
  if (pWVar13 != (WaveDefinition *)0x0) {
    if (*(int *)(pWVar13 + 8) != -1) {
      *(int *)(this + 0x48) = *(int *)(pWVar13 + 8);
    }
    if (*(int *)(pWVar13 + 0xc) != -1) {
      *(int *)(this + 0x4c) = *(int *)(pWVar13 + 0xc);
    }
    bVar2 = pWVar13[0x24] != (WaveDefinition)0x0 || bVar2;
    *(int *)(this + 100) = *(int *)(this + 100) + *(int *)(pWVar13 + 0x10);
  }
  if (bVar2) {
    pSVar20 = (StageModule *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    iVar10 = StageModule::GetZombieEventType(pSVar20);
    pSVar20 = (StageModule *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    StageModule::PlayZombieEventAudio(pSVar20);
    if (iVar10 == 1) {
      pWVar1 = (WaveEventData *)(pWVar13 + 0x24);
      if (pWVar13 == (WaveDefinition *)0x0) {
        pWVar1 = (WaveEventData *)0x0;
      }
      SpawnZombiesFromSandStorm(this,pWVar1);
      lVar31 = (long)*(int *)(this + 0x20);
    }
    else {
      if (iVar10 == 2) {
        pWVar1 = (WaveEventData *)(pWVar13 + 0x24);
        if (pWVar13 == (WaveDefinition *)0x0) {
          pWVar1 = (WaveEventData *)0x0;
        }
        SpawnZombiesFromRaidingParty(this,pWVar1);
      }
      lVar31 = (long)*(int *)(this + 0x20);
    }
  }
  lVar28 = 0;
  aiStack_60[8] = 0;
  iVar10 = 0;
  aiStack_60[2] = 0;
  aiStack_60[3] = 0;
  aiStack_60[0] = 0;
  aiStack_60[1] = 0;
  aiStack_60[9] = 0;
  aiStack_60[6] = 0;
  aiStack_60[7] = 0;
  aiStack_60[4] = 0;
  aiStack_60[5] = 0;
  while( true ) {
    iVar11 = (int)lVar28;
    puVar17 = (undefined8 *)FUN_044f4410(*(undefined8 *)(this + 0x68),lVar31);
    lVar31 = FUN_044f441c(*puVar17,lVar28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_88,(RtWeakPtrBase *)(lVar31 + 0x38));
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_88);
    if (cVar4 == '\0') break;
    puVar17 = (undefined8 *)FUN_044f4410(*(undefined8 *)(this + 0x68),(long)*(int *)(this + 0x20));
    piVar18 = (int *)FUN_044f441c(*puVar17,lVar28);
    iVar12 = *piVar18;
    switch(iVar12) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      iVar10 = iVar12;
      break;
    case 6:
      pBVar30 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_88);
      iVar10 = Board::PickRowForNewZombie
                         (pBVar30,(RtWeakPtr<Sexy::SoundResource> *)local_30,this + 0xf0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
      puVar17 = (undefined8 *)FUN_044f4410(*(undefined8 *)(this + 0x68),(long)*(int *)(this + 0x20))
      ;
      piVar18 = (int *)FUN_044f441c(*puVar17,lVar28);
      break;
    case 7:
      break;
    default:
      iVar10 = 0;
    }
    iVar8 = piVar18[6];
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
    plVar32 = *(long **)(gLawnApp + 0x9f0);
    pcVar27 = *(code **)(*plVar32 + 0x318);
    local_30[0] = iVar8;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_70,(RtWeakPtrBase *)aRStack_88);
    this_00 = (RtObject *)
              (*pcVar27)(plVar32,(RtWeakPtr<Sexy::SoundResource> *)&local_70,
                         *(undefined4 *)(this + 0x20),(SpawnZombieParams *)local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    puVar17 = (undefined8 *)FUN_044f4410(*(undefined8 *)(this + 0x68),(long)*(int *)(this + 0x20));
    FUN_044f441c(*puVar17,lVar28);
    bVar2 = SUB81(this_00,0);
    Zombie::SetHasPlantFood(bVar2);
    puVar17 = (undefined8 *)FUN_044f4410(*(undefined8 *)(this + 0x68),(long)*(int *)(this + 0x20));
    lVar31 = FUN_044f441c(*puVar17,lVar28);
    Zombie::SetLoot((Zombie *)this_00,*(undefined4 *)(lVar31 + 8));
    lVar31 = FUN_044f6488(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (lVar31 != 0) {
      plVar32 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
      uVar6 = (**(code **)(*plVar32 + 0x48))();
      FUN_044f43f0(this_00 + 0x564,uVar6);
    }
    pLVar26 = gLawnApp;
    cVar4 = LawnApp::IsInModule(gLawnApp,4);
    if (cVar4 != '\0') {
      puVar17 = (undefined8 *)FUN_044f4410(*(undefined8 *)(this + 0x68),(long)*(int *)(this + 0x20))
      ;
      lVar31 = FUN_044f441c(*puVar17,lVar28);
      FUN_044f43f0(this_00 + 0x564,*(undefined4 *)(lVar31 + 0x24));
      puVar17 = (undefined8 *)FUN_044f4410(*(undefined8 *)(this + 0x68),(long)*(int *)(this + 0x20))
      ;
      lVar31 = FUN_044f441c(*puVar17,lVar28);
      Zombie::SetBesiegeRate((Zombie *)this_00,*(float *)(lVar31 + 0x2c));
      puVar17 = (undefined8 *)FUN_044f4410(*(undefined8 *)(this + 0x68),(long)*(int *)(this + 0x20))
      ;
      lVar31 = FUN_044f441c(*puVar17,lVar28);
      Zombie::SetZombieScale((Zombie *)this_00,*(float *)(lVar31 + 0x30));
      puVar17 = (undefined8 *)FUN_044f4410(*(undefined8 *)(this + 0x68),(long)*(int *)(this + 0x20))
      ;
      lVar31 = FUN_044f441c(*puVar17,lVar28);
      Zombie::SetBesiegeHit((Zombie *)this_00,*(int *)(lVar31 + 0x28));
      pLVar26 = gLawnApp;
    }
    Board::GetStage(*(Board **)(pLVar26 + 0x9f0));
    StageModule::GetFlagZombieType();
    cVar4 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)aRStack_88,(RtWeakPtrBase *)&local_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)this_00 + 0x250))(this_00,1);
    }
    DVec3::DVec3((DVec3 *)local_80);
    cVar4 = LawnApp::IsInModule(gLawnApp,4);
    if (cVar4 == '\0') {
      iVar8 = Sexy::MTRand::Next((MTRand *)(this + 0xf0),0x28);
      iVar8 = iVar8 + 0x334;
      iVar9 = BoardTransforms::GridToBoardSpaceY(iVar10);
    }
    else {
      iVar7 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar8 = Sexy::MTRand::Next((MTRand *)(this + 0xf0),0x14);
      iVar9 = BoardTransforms::GridToBoardSpaceY(iVar10);
      iVar8 = iVar8 + (iVar7 * iVar11 + 0x19a) * 2;
    }
    EATextSquish::Vec3::Vec3((Vec3 *)&local_70,(float)iVar8,(float)iVar9,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)local_80,(SexyVector3 *)&local_70);
    local_80[0] = (float)aiStack_60[iVar10] + local_80[0];
    if (*(char *)(*(long *)(this + 0x2880) + 0x8d) == '\0') {
      (**(code **)(*(long *)this_00 + 0x78))(this_00,(DVec3 *)local_80);
      BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
    }
    else {
      DVec3::DVec3((DVec3 *)&local_70);
      puVar17 = (undefined8 *)FUN_044f4410(*(undefined8 *)(this + 0x68),(long)*(int *)(this + 0x20))
      ;
      lVar31 = FUN_044f441c(*puVar17,lVar28);
      iVar8 = BoardTransforms::GridToBoardSpaceX(*(int *)(lVar31 + 0x1c));
      local_70 = (float)iVar8;
      puVar17 = (undefined8 *)FUN_044f4410(*(undefined8 *)(this + 0x68),(long)*(int *)(this + 0x20))
      ;
      lVar31 = FUN_044f441c(*puVar17,lVar28);
      iVar8 = BoardTransforms::GridToBoardSpaceY(*(int *)(lVar31 + 0x20));
      local_6c = (float)iVar8;
      if (this_00 == (RtObject *)0x0) {
        if (iVar12 == 6) goto LAB_044fe9e4;
        Zombie::SetHasPlantFood(false);
        Zombie::SetLoot((Zombie *)0x0,0);
      }
      else {
        bVar3 = Sexy::RtObject::IsA<ZombieTarget>(this_00);
        if (bVar3) {
          pZVar15 = Sexy::RtObject::Cast<ZombieTarget>(this_00);
          puVar17 = (undefined8 *)
                    FUN_044f4410(*(undefined8 *)(this + 0x68),(long)*(int *)(this + 0x20));
          lVar31 = FUN_044f441c(*puVar17,lVar28);
          FUN_044f43fc(*(undefined4 *)(lVar31 + 0x34),pZVar15 + 0x80c);
          if (iVar12 == 6) {
LAB_044fe9e4:
            iVar12 = 10;
            while( true ) {
              iVar8 = RandRangeInt(2,8);
              iVar9 = RandRangeInt(0,4);
              if (iVar11 == 0) break;
              lVar31 = 0;
              bVar3 = false;
              do {
                while( true ) {
                  lVar19 = Board::GetZombieAt(*(Board **)(gLawnApp + 0x9f0),iVar8,iVar9);
                  if (lVar19 != 0) {
                    bVar3 = true;
                  }
                  puVar17 = (undefined8 *)
                            FUN_044f4410(*(undefined8 *)(this + 0x68),(long)*(int *)(this + 0x20));
                  lVar19 = FUN_044f441c(*puVar17,lVar31);
                  if (*(int *)(lVar19 + 0x1c) != iVar8) break;
                  lVar31 = lVar31 + 1;
                  if (*(int *)(lVar19 + 0x20) == iVar9) {
                    bVar3 = true;
                  }
                  if (iVar11 <= (int)lVar31) goto LAB_044feaac;
                }
                lVar31 = lVar31 + 1;
              } while ((int)lVar31 < iVar11);
LAB_044feaac:
              if ((!bVar3) || (iVar12 = iVar12 + -1, iVar12 == 0)) break;
            }
            iVar11 = BoardTransforms::GridToBoardSpaceX(iVar8);
            local_70 = (float)iVar11;
            iVar11 = BoardTransforms::GridToBoardSpaceY(iVar9);
            local_6c = (float)iVar11;
            puVar17 = (undefined8 *)
                      FUN_044f4410(*(undefined8 *)(this + 0x68),(long)*(int *)(this + 0x20));
            lVar31 = FUN_044f441c(*puVar17,lVar28);
            *(int *)(lVar31 + 0x1c) = iVar8;
            *(int *)(lVar31 + 0x20) = iVar9;
            Zombie::SetHasPlantFood(bVar2);
            Zombie::SetLoot((Zombie *)this_00,0);
            if (this_00 == (RtObject *)0x0) {
              Zombie::RiseFromGround((Zombie *)0x0,(SexyVector3 *)&local_70,false);
              goto LAB_044fe63c;
            }
          }
          else {
            Zombie::SetHasPlantFood(bVar2);
            Zombie::SetLoot((Zombie *)this_00,0);
          }
        }
        else {
          if (iVar12 == 6) goto LAB_044fe9e4;
          Zombie::SetHasPlantFood(bVar2);
          Zombie::SetLoot((Zombie *)this_00,0);
        }
        bVar2 = Sexy::RtObject::IsA<ZombieTarget>(this_00);
        if (bVar2) {
          pZVar15 = Sexy::RtObject::Cast<ZombieTarget>(this_00);
          (**(code **)(*(long *)pZVar15 + 0xa08))
                    (pZVar15,(RtWeakPtr<Sexy::SoundResource> *)&local_70);
          goto LAB_044fe63c;
        }
      }
      Zombie::RiseFromGround((Zombie *)this_00,(SexyVector3 *)&local_70,false);
    }
LAB_044fe63c:
    iVar11 = *(int *)(this + 0x20);
    uVar16 = *(undefined8 *)(this + 0x68);
    aiStack_60[iVar10] = aiStack_60[iVar10] + 0x14;
    puVar17 = (undefined8 *)FUN_044f4410(uVar16,(long)iVar11);
    lVar31 = FUN_044f441c(*puVar17,lVar28);
    if (*(char *)(lVar31 + 4) != '\0') {
      *(int *)(this + 100) = *(int *)(this + 100) + -1;
    }
    lVar28 = lVar28 + 1;
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
    if (lVar28 == 0x32) goto LAB_044fe914;
    lVar31 = (long)*(int *)(this + 0x20);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
LAB_044fe914:
  iVar10 = *(int *)(this + 0x20);
  if (iVar10 + 1 == *(int *)(this + 0x24)) {
    iVar10 = 0;
    do {
      pFVar21 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
      uVar16 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
      cVar4 = FestivalManager::IsFestivalLevel(pFVar21,uVar16,iVar10);
      if (cVar4 != '\0') {
        Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
        FUN_044f6494(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
        iVar10 = *(int *)(this + 0x20);
        goto LAB_044fe928;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != 5);
    lVar31 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    cVar4 = *(char *)(lVar31 + 0x112);
    lVar31 = FUN_044f6494(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if ((((lVar31 != 0) && (cVar4 == '\0')) && (*(int *)(pWVar13 + 4) < 1)) &&
       (lVar31 = FUN_044f64a0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)), lVar31 == 0)) {
      this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_04 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
      this_05 = (ActivityConfig *)LawnApp::GetActivityConfig();
      cVar4 = ActivityConfig::IsSpringBossActivated(this_05);
      if ((cVar4 != '\0') && (iVar10 = PlayerInfo::GetSpringBossCount(this_04), 0 < iVar10)) {
        iVar10 = Sexy::Rand(100);
        pDVar22 = (DailySignRewardWithTW *)LawnApp::GetActivityConfig();
        lVar31 = DailySignRewardWithTW::getRewardListData(pDVar22);
        if (iVar10 < *(int *)(lVar31 + 0xc)) {
          std::string::string((string *)local_30,"egypt5");
          cVar4 = PlayerInfo::GetLevelCompleted(this_04,(string *)local_30);
          std::string::~string((string *)local_30);
          nop();
          if (cVar4 != '\0') {
            iVar10 = -1;
            DVec3::DVec3((DVec3 *)&local_70);
            pDVar22 = (DailySignRewardWithTW *)LawnApp::GetActivityConfig();
            lVar31 = DailySignRewardWithTW::getRewardListData(pDVar22);
            uVar29 = 0;
            while( true ) {
              uVar16 = *(undefined8 *)(lVar31 + 0x10);
              uVar23 = FUN_044f44cc(uVar16,*(undefined8 *)(lVar31 + 0x18));
              if (uVar23 <= uVar29) break;
              this_06 = (RtMixedPtrBase *)FUN_044f44d8(uVar16,uVar29);
              cVar4 = Sexy::RtMixedPtrBase::IsValid(this_06);
              if (cVar4 == '\0') {
                uVar29 = uVar29 + 1;
              }
              else {
                this_07 = (RtWeakPtr<Sexy::ResourceInfo> *)
                          FUN_044f44d8(*(undefined8 *)(lVar31 + 0x10),uVar29);
                this_08 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_07);
                ZombieType::EnsureResourceGroupsLoaded(this_08);
                if (iVar10 < 0) {
                  pBVar30 = *(Board **)(gLawnApp + 0x9f0);
                  pRVar24 = (RtWeakPtrBase *)FUN_044f44d8(*(undefined8 *)(lVar31 + 0x10),uVar29);
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                            ((RtWeakPtr<Sexy::SoundResource> *)local_30,pRVar24);
                  iVar10 = Board::PickRowForNewZombie(pBVar30,(string *)local_30,0);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
                  iVar11 = Sexy::MTRand::Next((MTRand *)(this + 0xf0),0x28);
                  iVar12 = BoardTransforms::GridToBoardSpaceY(iVar10);
                  EATextSquish::Vec3::Vec3
                            ((Vec3 *)local_30,(float)(iVar11 + 0x334),(float)iVar12,0.0);
                  Sexy::SexyVector3::operator=((SexyVector3 *)&local_70,(SexyVector3 *)local_30);
                  local_70 = (float)aiStack_60[iVar10] + local_70;
                }
                else {
                  local_70 = local_70 + 20.0;
                }
                plVar32 = *(long **)(gLawnApp + 0x9f0);
                pcVar27 = *(code **)(*plVar32 + 0x318);
                pRVar24 = (RtWeakPtrBase *)FUN_044f44d8(*(undefined8 *)(lVar31 + 0x10),uVar29);
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)local_30,pRVar24);
                pSVar25 = (SexyVector3 *)
                          (*pcVar27)(plVar32,(string *)local_30,*(undefined4 *)(this + 0x20),0);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
                (**(code **)(*(long *)pSVar25 + 0x78))(pSVar25,(DVec3 *)&local_70);
                BoardEntity::PlaceOnBoard(pSVar25);
                uVar29 = uVar29 + 1;
              }
            }
          }
        }
      }
    }
    iVar10 = *(int *)(this + 0x20);
  }
LAB_044fe928:
  cVar4 = IsFlagWave(this,iVar10);
  if (cVar4 != '\0') {
    fVar33 = (float)PVZ_T();
    *(float *)(this + 0x30) = fVar33 + 1.0;
    uVar5 = GetFlagWavesTriggered(this,*(int *)(this + 0x20));
    MessageRouter::Post<int,unsigned_char>
              ((MessageRouter *)gMessageRouter,Message::FlagWaveTriggered,uVar5);
  }
  uVar6 = GetTotalZombiesHealthInWave(this,*(int *)(this + 0x20));
  *(undefined4 *)(this + 0x5c) = uVar6;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
  this_01 = (LevelModuleManager *)FUN_044f43ec(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_02 = LevelModuleManager::GetModuleByClass<ArmrackModule>(this_01);
  if ((this_02 != (ArmrackModule *)0x0) &&
     (iVar10 = FUN_044f43e0(*(undefined4 *)(this + 0x20)), 1 < iVar10)) {
    ArmrackModule::spawnArmrack(this_02,iVar10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WaveGenerator::SpawnZombieWave() */

void __thiscall WaveGenerator::SpawnZombieWave(WaveGenerator *this)

{
  SpawnWave(this);
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::SetNextWaveVisible,false);
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::WavesNotify,*(int *)(this + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::UpdateZombieSpawning() */

void __thiscall WaveGenerator::UpdateZombieSpawning(WaveGenerator *this)

{
  RtMixedPtr<Sexy::Image> *pRVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  EventZombieWaveData *pEVar9;
  LevelModuleManager *this_00;
  BronzeModule *this_01;
  int *piVar10;
  float *pfVar11;
  char *pcVar12;
  long lVar13;
  undefined8 uVar14;
  Plant *this_02;
  BlackHole *pBVar15;
  int extraout_w1;
  bool bVar16;
  long lVar17;
  Board *pBVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_38 [2];
  int local_30 [2];
  float local_28 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x20) == *(int *)(this + 0x24)) {
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::SetNextWaveVisible,false);
  }
  fVar19 = (float)PVZ_T();
  if (*(float *)(this + 0x2c) <= fVar19) {
    uVar20 = PVZ_EOT();
    *(undefined4 *)(this + 0x2c) = uVar20;
    pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar12,"Play_FinalWave");
  }
  lVar17 = 0;
  cVar2 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
  if (cVar2 != '\0') goto LAB_044ff0c4;
LAB_044fefd0:
  do {
    pEVar9 = (EventZombieWaveData *)FUN_044f4538(*(undefined8 *)(this + 0x98),lVar17);
    if (*(int *)(pEVar9 + 4) != 0) {
      cVar2 = Sexy::IsNearZero(*(float *)(pEVar9 + 8),0.001);
      if (cVar2 == '\0') {
        fVar19 = (float)PVZ_T();
        pEVar9 = (EventZombieWaveData *)FUN_044f4538(*(undefined8 *)(this + 0x98),lVar17);
        if (*(float *)(pEVar9 + 0xc) <= fVar19) {
          EventZombieWaveData::ZombieSpawn(pEVar9,*(Board **)(gLawnApp + 0x9f0),1);
          lVar13 = lVar17 + 1;
          lVar17 = FUN_044f4538(*(undefined8 *)(this + 0x98),lVar17);
          *(float *)(lVar17 + 0xc) = *(float *)(lVar17 + 0xc) + *(float *)(lVar17 + 8);
          lVar17 = lVar13;
          if (lVar13 == 10) break;
          goto LAB_044fefd0;
        }
      }
      else {
        EventZombieWaveData::ZombieSpawn(pEVar9,*(Board **)(gLawnApp + 0x9f0),1);
      }
    }
    lVar17 = lVar17 + 1;
  } while (lVar17 != 10);
  fVar19 = (float)PVZ_EOT();
  bVar16 = false;
  if (*(float *)(this + 0x34) < fVar19) {
    fVar21 = (float)PVZ_T();
    if (*(float *)(this + 0x34) <= fVar21) {
      *(float *)(this + 0x34) = fVar19;
      bVar16 = true;
      pBVar18 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178((wstring *)local_28,L"[ADVICE_HUGE_WAVE]",local_30);
      Board::ClearAdvice(pBVar18,(wstring *)local_28);
      FUN_05476c50((wstring *)local_28);
      nop();
      nextWaveComing(this);
      uVar20 = PVZ_T();
      this[0x44] = (WaveGenerator)0x0;
      *(undefined4 *)(this + 0x38) = uVar20;
    }
    else {
      if ((this[0x44] != (WaveGenerator)0x0) ||
         (fVar21 = (float)PVZ_T(), fVar21 + 7.25 <= *(float *)(this + 0x34))) goto LAB_044ff0c4;
      this[0x44] = (WaveGenerator)0x1;
      MessageRouter::Post((_func_void *)gMessageRouter);
      bVar16 = false;
    }
  }
  if (*(int *)(this + 0x20) == *(int *)(this + 0x24)) goto LAB_044ff0c4;
  lVar17 = GetWaveDefinition(this,*(int *)(this + 0x20));
  if (((lVar17 == 0) || (*(char *)(lVar17 + 1) == '\0')) || (*(int *)(this + 0x20) < 1)) {
    fVar21 = (float)PVZ_T();
    fVar23 = *(float *)(this + 0x38);
    fVar22 = *(float *)(this + 0x3c);
    fVar24 = (float)PVZ_T();
    fVar24 = fVar23 - fVar24;
    if ((0.05 < fVar24 && 4.0 < fVar21 - fVar22) && (fVar23 < fVar19)) {
      iVar5 = GetTotalZombiesHealthInWave(this,*(int *)(this + 0x20) + -1);
      iVar4 = *(int *)(this + 0x60);
      if ((iVar5 <= iVar4) && (2.0 < fVar24)) {
        fVar21 = (float)PVZ_T();
        iVar4 = *(int *)(this + 0x60);
        fVar24 = 2.0;
        *(float *)(this + 0x38) = fVar21 + 2.0;
      }
      if ((float)iVar5 < (float)iVar4 * 0.9) {
        MessageRouter::Post<bool,bool>
                  ((MessageRouter *)gMessageRouter,Message::SetNextWaveVisible,true);
      }
    }
    if (fVar24 < *(float *)(this + 0x40) * 0.5) {
LAB_044ff50c:
      MessageRouter::Post<bool,bool>
                ((MessageRouter *)gMessageRouter,Message::SetNextWaveVisible,true);
    }
  }
  else if (this[0x2890] == (WaveGenerator)0x0) {
    iVar4 = GetTotalZombiesHealthInWave(this,*(int *)(this + 0x20) + -1);
    if (iVar4 != 0) goto LAB_044ff0c4;
    uVar14 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable((Iterator *)local_28,uVar14,0x2c);
    while (bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)local_28), bVar3) {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)local_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)local_30);
      Sexy::RtId::~RtId((RtId *)local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
      nop();
      if (*(code **)(*(long *)this_02 + 0x1f8) == Plant::IsInPlantFoodState) {
        cVar2 = Plant::IsInPlantFoodState(this_02);
      }
      else {
        cVar2 = (**(code **)(*(long *)this_02 + 0x1f8))();
      }
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
        Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_28);
        goto LAB_044ff0c4;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)local_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_28);
    if (0 < *(int *)(lVar17 + 4)) {
      pRVar1 = (RtMixedPtr<Sexy::Image> *)(this + 0x2888);
      *(float *)(this + 0x40) = (float)*(int *)(lVar17 + 4) + 8.0;
      fVar21 = (float)PVZ_T();
      *(float *)(this + 0x38) = fVar21 + *(float *)(this + 0x40);
      cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(pRVar1);
      if (cVar2 != '\0') {
        uVar14 = BlackHole::StaticGetClass();
        GameObject::Create(uVar14,0x27);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)pRVar1,(RtWeakPtrBase *)local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
        pBVar15 = (BlackHole *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        std::string::string((string *)local_28,"POPANIM_EFFECTS_BLACK_HOLE");
        BlackHole::InitBlackHoleEffectPam(pBVar15,(Iterator *)local_28);
        std::string::~string((string *)local_28);
        nop();
      }
      pBVar15 = (BlackHole *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      iVar4 = *(int *)(lVar17 + 4);
      iVar5 = BoardTransforms::GridToBoardSpaceX(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
      iVar6 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar7 = BoardTransforms::GridToBoardSpaceY(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) / 2);
      iVar8 = BoardConstants::GRIDSQUARE_HEIGHT();
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)local_28,(float)(iVar5 + iVar6 / 2),(float)(iVar7 - iVar8 / 2));
      BlackHole::dragPlantsToblackHoleDirection(pBVar15,iVar4,(SexyVector2 *)local_28);
    }
    this[0x2890] = (WaveGenerator)0x1;
  }
  else {
    pRVar1 = (RtMixedPtr<Sexy::Image> *)(this + 0x2888);
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(pRVar1);
    if (cVar2 != '\0') {
      uVar14 = BlackHole::StaticGetClass();
      GameObject::Create(uVar14,0x27);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)pRVar1,(RtWeakPtrBase *)local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      pBVar15 = (BlackHole *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      std::string::string((string *)local_28,"POPANIM_EFFECTS_BLACK_HOLE");
      BlackHole::InitBlackHoleEffectPam(pBVar15,(RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      std::string::~string((string *)local_28);
      nop();
    }
    lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    FUN_044f43d4(lVar13 + 0x18,*(undefined4 *)(lVar17 + 4));
    fVar24 = *(float *)(this + 0x38);
    fVar21 = (float)PVZ_T();
    if (fVar24 - fVar21 < (float)*(int *)(lVar17 + 4)) goto LAB_044ff50c;
  }
  fVar24 = *(float *)(this + 0x38);
  fVar21 = (float)PVZ_T();
  if ((bVar16 < (fVar24 - fVar21 <= 0.0)) && (fVar19 <= *(float *)(this + 0x34))) {
    cVar2 = IsFlagWave(this,*(int *)(this + 0x20));
    if (cVar2 != '\0') {
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      if (((*(char *)(*(long *)(this + 0x2880) + 0x8d) == '\0') &&
          (lVar17 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar17 != 0)) &&
         (lVar17 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
         *(char *)(lVar17 + 0x116) == '\0')) {
        pBVar18 = *(Board **)(gLawnApp + 0x9f0);
        FUN_05478178(local_28,L"[ADVICE_HUGE_WAVE]",local_30);
        Board::DisplayAdviceAgain(pBVar18,local_28,0x11,0);
        FUN_05476c50(local_28);
        nop();
      }
      fVar19 = (float)PVZ_T();
      *(float *)(this + 0x34) = fVar19 + 7.5;
      goto LAB_044ff0c4;
    }
    nextWaveComing(this);
  }
  if (0.0 < fVar24 - fVar21) goto LAB_044ff0c4;
  this_00 = (LevelModuleManager *)FUN_044f43ec(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_01 = LevelModuleManager::GetModuleByClass<BronzeModule>(this_00);
  if (this_01 == (BronzeModule *)0x0) {
    SpawnZombieWave(this);
LAB_044ff270:
    iVar4 = *(int *)(this + 0x20);
  }
  else {
    fVar19 = (float)BronzeModule::getBrokenLeftTime(this_01);
    if (0.0 < fVar19) {
      SpawnZombieWave(this);
    }
    fVar19 = (float)BronzeModule::getBrokenLeftTime(this_01);
    if ((0.0 < fVar19) || (iVar4 = BronzeModule::getBronzeStumpSize(this_01), iVar4 != 0))
    goto LAB_044ff270;
    iVar4 = *(int *)(this + 0x24);
    *(int *)(this + 0x20) = iVar4;
  }
  cVar2 = IsFlagWave(this,iVar4);
  if (cVar2 == '\0') {
    fVar19 = (float)RandRangeFloat(0.5,0.65);
    cVar2 = *(char *)(*(long *)(this + 0x2880) + 0x8d);
    *(int *)(this + 0x60) = (int)(fVar19 * (float)*(int *)(this + 0x5c));
    if (cVar2 == '\0') {
      fVar19 = (float)Sexy::MTRand::Next(5.0);
      fVar19 = fVar19 + 20.0;
    }
    else {
      lVar17 = GetWaveDefinition(this,*(int *)(this + 0x20));
      if (lVar17 == 0) {
        fVar19 = 2.0;
      }
      else {
        fVar19 = *(float *)(lVar17 + 0x20);
      }
    }
    *(float *)(this + 0x40) = fVar19;
    fVar19 = (float)PVZ_T();
    *(float *)(this + 0x38) = fVar19 + *(float *)(this + 0x40);
  }
  else {
    *(undefined4 *)(this + 0x60) = 0;
    if (*(char *)(*(long *)(this + 0x2880) + 0x8d) == '\0') {
      fVar19 = (float)PVZ_T();
      *(undefined4 *)(this + 0x40) = 0x420c0000;
      *(float *)(this + 0x38) = fVar19 + 35.0;
    }
    else {
      lVar17 = GetWaveDefinition(this,*(int *)(this + 0x20));
      if (lVar17 == 0) {
        fVar19 = 2.0;
      }
      else {
        fVar19 = *(float *)(lVar17 + 0x20);
      }
      fVar21 = (float)PVZ_T();
      *(float *)(this + 0x40) = fVar19;
      *(float *)(this + 0x38) = fVar21 + fVar19;
    }
  }
  uVar20 = PVZ_T();
  *(undefined4 *)(this + 0x3c) = uVar20;
  this[0x2890] = (WaveGenerator)0x0;
  if ((*(int *)(this + 0x20) == 1) &&
     ((lVar17 = GetWaveDefinition(this,1), lVar17 == 0 || (*(char *)(lVar17 + 1) == '\0')))) {
    MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::SetNextWaveVisible,true)
    ;
  }
  if (this[0x46] != (WaveGenerator)0x0) {
    this[0x46] = (WaveGenerator)0x0;
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::SetNextWaveVisible,false);
  }
  iVar4 = FUN_044f43e0(*(undefined4 *)(this + 0x20));
  iVar5 = FUN_044f43e4(*(undefined4 *)(this + 0x24));
  iVar6 = FUN_044f43e8(*(undefined4 *)(this + 0x5c));
  if (iVar6 != -1) {
    iVar7 = GetTotalZombiesHealthInWave(this,iVar4 + -1);
    local_30[0] = 0;
    local_28[0] = 1.4013e-45;
    piVar10 = eastl::max_alt<int>(local_30,(int *)local_28);
    local_30[0] = iVar5 + -1;
    local_28[0] = 1.4013e-45;
    local_38[0] = (float)(iVar6 + (*piVar10 - iVar7)) / (float)*piVar10;
    piVar10 = eastl::max_alt<int>(local_30,(int *)local_28);
    iVar6 = *piVar10;
    local_28[0] = 1.0;
    pfVar11 = eastl::min_alt<float>(local_38,local_28);
    if (iVar5 == 1) {
      local_30[0] = 100;
    }
    else {
      local_30[0] = (int)((100.0 / (float)iVar6) * (*pfVar11 + (float)(iVar4 + -1)));
    }
    local_28[0] = 1.4013e-43;
    piVar10 = eastl::min_alt<int>(local_30,(int *)local_28);
    MessageRouter::Post<unsigned_char,unsigned_char>
              ((MessageRouter *)gMessageRouter,Message::ProgressMeterSetCurrentDisplayPercentage,
               (uchar)*piVar10);
  }
LAB_044ff0c4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveGenerator::Update() */

void __thiscall WaveGenerator::Update(WaveGenerator *this)

{
  LevelModuleManager *pLVar1;
  EnergyGridModule *this_00;
  
  if (this[0x45] == (WaveGenerator)0x0) {
    UpdateZombieSpawning(this);
    pLVar1 = (LevelModuleManager *)
             FUN_044f43ec(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    this_00 = LevelModuleManager::GetModuleByClass<EnergyGridModule>(pLVar1);
  }
  else {
    pLVar1 = (LevelModuleManager *)
             FUN_044f43ec(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    this_00 = LevelModuleManager::GetModuleByClass<EnergyGridModule>(pLVar1);
  }
  if (this_00 != (EnergyGridModule *)0x0) {
    EnergyGridModule::update(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::PutZombieInWave(Sexy::RtWeakPtr<ZombieType const>, int, ZombiePicker*, bool,
   RowSpawnType, int, int, int, float, int, float, float, int) */

void __thiscall
WaveGenerator::PutZombieInWave
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,WaveGenerator *this,
          RtWeakPtr<Sexy::ResourceInfo> *param_5,int param_6,int *param_7,undefined1 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
          undefined4 param_13,undefined4 param_14)

{
  map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
  *pmVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  ZombieType *this_00;
  int *piVar7;
  undefined8 uVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar4 = (undefined8 *)FUN_044f4410(*(undefined8 *)(this + 0x68),(long)param_6);
  lVar5 = FUN_044f441c(*puVar4,(long)*param_7);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(lVar5 + 0x38),(RtWeakPtr *)param_5);
  puVar4 = (undefined8 *)FUN_044f4410(*(undefined8 *)(this + 0x68),(long)param_6);
  iVar2 = *param_7;
  uVar8 = *puVar4;
  puVar6 = (undefined4 *)FUN_044f441c(uVar8,(long)iVar2);
  *(undefined1 *)(puVar6 + 1) = param_8;
  puVar6[8] = param_12;
  puVar6[9] = param_13;
  iVar2 = iVar2 + 1;
  puVar6[0xd] = param_1;
  *puVar6 = param_9;
  puVar6[6] = param_10;
  puVar6[7] = param_11;
  puVar6[0xb] = param_2;
  puVar6[10] = param_14;
  puVar6[0xc] = param_3;
  *param_7 = iVar2;
  if (iVar2 < 0x32) {
    lVar5 = FUN_044f441c(uVar8,(long)iVar2);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(lVar5 + 0x38),(RtWeakPtr *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  }
  pmVar1 = (map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
            *)(param_7 + 2);
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
  lVar5 = ZombieType::GetProps(this_00);
  param_7[1] = param_7[1] - *(int *)(lVar5 + 0x9c);
  local_18 = std::
             map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
             ::find(pmVar1,(RtWeakPtr *)param_5);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)pmVar1);
  bVar3 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar3) {
    piVar7 = (int *)std::
                    map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
                    ::operator[](pmVar1,(RtWeakPtr *)param_5);
    *piVar7 = *piVar7 + 1;
  }
  else {
    puVar6 = (undefined4 *)
             std::
             map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
             ::operator[](pmVar1,(RtWeakPtr *)param_5);
    *puVar6 = 1;
  }
  pmVar1 = (map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
            *)(param_7 + 0xe);
  local_18 = std::
             map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
             ::find(pmVar1,(RtWeakPtr *)param_5);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)pmVar1);
  bVar3 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar3) {
    piVar7 = (int *)std::
                    map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
                    ::operator[](pmVar1,(RtWeakPtr *)param_5);
    *piVar7 = *piVar7 + 1;
  }
  else {
    puVar6 = (undefined4 *)
             std::
             map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
             ::operator[](pmVar1,(RtWeakPtr *)param_5);
    *puVar6 = 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::PutInMissingZombies(int, ZombiePicker*) */

void __thiscall
WaveGenerator::PutInMissingZombies(WaveGenerator *this,int param_1,ZombiePicker *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  LevelEditorCardPlantInterface aLStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_28);
  while (bVar2 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                           ((ObjectTypeDirectoryIterator *)aLStack_28), bVar2) {
    ObjectTypeDirectoryIterator<ZombieType>::operator*
              ((ObjectTypeDirectoryIterator<ZombieType> *)aLStack_28);
    local_18 = std::
               map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
               ::find((map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
                       *)(param_2 + 8),(RtWeakPtr *)aRStack_20);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(param_2 + 8));
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_20);
      cVar1 = CanZombieSpawnOnLevel(this,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      if ((cVar1 != '\0') &&
         ((*(int *)(this + 8) == 0 ||
          (pcVar3 = (char *)std::
                            map<Sexy::RtWeakPtr<ZombieType_const>,bool,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,bool>>>
                            ::operator[]((map<Sexy::RtWeakPtr<ZombieType_const>,bool,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,bool>>>
                                          *)(this + 0x2850),(RtWeakPtr *)aRStack_20),
          *pcVar3 != '\0')))) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_20);
        PutZombieInWave((WaveGenerator *)0x3fc00000,0,0x3f800000,this,
                        (RtWeakPtr<Sexy::SoundResource> *)&local_10,param_1,param_2,0,6,1,0,0,0,1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_28);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::addDefinedZombiesToWaves(int, ZombiePicker*, int) */

void __thiscall
WaveGenerator::addDefinedZombiesToWaves
          (WaveGenerator *this,int param_1,ZombiePicker *param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  ZombieType *this_00;
  undefined1 uVar4;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetWaveDefinition(this,param_1);
  if (lVar2 != 0) {
    local_20 = FUN_044f5ccc(*(undefined8 *)(lVar2 + 0x38));
    local_18 = FUN_044f5d1c(*(undefined8 *)(lVar2 + 0x40));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1)
    {
      puVar3 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20)
      ;
      uVar4 = *(undefined1 *)(puVar3 + 1);
      if (0 < param_3) {
        this_00 = (ZombieType *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(puVar3 + 4));
        lVar2 = ZombieType::GetProps(this_00);
        if (*(char *)(lVar2 + 0x38) != '\0') {
          param_3 = param_3 + -1;
          uVar4 = 1;
        }
      }
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(puVar3 + 4));
                    /* WARNING: Load size is inaccurate */
      PutZombieInWave(*(WaveGenerator **)(puVar3 + 0xc),puVar3[10],puVar3[0xb],this,aRStack_10,
                      param_1,param_2,uVar4,*puVar3,puVar3[3],puVar3[6],puVar3[7],puVar3[8],
                      puVar3[9]);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::VerifyZombieWaveDistribution() */

void __thiscall WaveGenerator::VerifyZombieWaveDistribution(WaveGenerator *this)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  char *pcVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface
            ((LevelEditorCardPlantInterface *)&local_48);
  while (bVar1 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                           ((ObjectTypeDirectoryIterator *)&local_48), bVar1) {
    ObjectTypeDirectoryIterator<ZombieType>::operator*
              ((ObjectTypeDirectoryIterator<ZombieType> *)&local_48);
    puVar5 = (undefined4 *)
             std::
             map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
             ::operator[]((map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
                           *)amStack_38,(RtWeakPtr *)&local_40);
    *puVar5 = 0;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)&local_48);
  }
  if (0 < *(int *)(this + 0x24)) {
    lVar12 = 0;
LAB_04500610:
    do {
      lVar10 = 0;
      do {
        while( true ) {
          puVar6 = (undefined8 *)FUN_044f4410(*(undefined8 *)(this + 0x68),lVar12);
          lVar7 = FUN_044f441c(*puVar6,lVar10);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)(lVar7 + 0x38));
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_50);
          iVar11 = (int)lVar12;
          if (cVar2 == '\0') {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
            lVar12 = lVar12 + 1;
            if (*(int *)(this + 0x24) <= iVar11 + 1) goto LAB_04500708;
            goto LAB_04500610;
          }
          local_48 = std::
                     map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
                     ::find((map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
                             *)amStack_38,(RtWeakPtr *)aRStack_50);
          local_40 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)amStack_38);
          cVar2 = std::__exception_ptr::operator==
                            ((exception_ptr *)&local_48,(exception_ptr *)&local_40);
          if (cVar2 != '\0') break;
          lVar10 = lVar10 + 1;
          piVar8 = (int *)std::
                          map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
                          ::operator[]((map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
                                        *)amStack_38,(RtWeakPtr *)aRStack_50);
          *piVar8 = *piVar8 + 1;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
          if (lVar10 == 0x32) goto LAB_045006f4;
        }
        lVar10 = lVar10 + 1;
        Set8BytesTo0((LevelEditorCardPlantInterface *)&local_48);
        Sexy::RtMixedPtrBase::GetId();
        Sexy::RtId::ToString((RtId *)&local_40,(string *)&local_48,false);
        Sexy::RtId::~RtId((RtId *)&local_40);
        std::string::~string((string *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
      } while (lVar10 != 0x32);
LAB_045006f4:
      lVar12 = lVar12 + 1;
    } while (iVar11 + 1 < *(int *)(this + 0x24));
  }
LAB_04500708:
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface
            ((LevelEditorCardPlantInterface *)aRStack_50);
  while (bVar1 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                           ((ObjectTypeDirectoryIterator *)aRStack_50), bVar1) {
    ObjectTypeDirectoryIterator<ZombieType>::operator*
              ((ObjectTypeDirectoryIterator<ZombieType> *)aRStack_50);
    ObjectTypeDirectoryIterator<ZombieType>::operator*
              ((ObjectTypeDirectoryIterator<ZombieType> *)aRStack_50);
    bVar3 = FUN_044f5b14((RtWeakPtr<Sexy::ResourceInfo> *)&local_40,*(undefined8 *)(this + 0x2880));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    ObjectTypeDirectoryIterator<ZombieType>::operator*
              ((ObjectTypeDirectoryIterator<ZombieType> *)aRStack_50);
    bVar4 = FUN_044f5d6c((RtWeakPtr<Sexy::ResourceInfo> *)&local_40,*(undefined8 *)(this + 0x2880));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    if (((bVar4 ^ 1) <= bVar3) &&
       ((*(int *)(this + 8) == 0 ||
        (pcVar9 = (char *)std::
                          map<Sexy::RtWeakPtr<ZombieType_const>,bool,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,bool>>>
                          ::operator[]((map<Sexy::RtWeakPtr<ZombieType_const>,bool,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,bool>>>
                                        *)(this + 0x2850),(RtWeakPtr *)&local_48), *pcVar9 != '\0'))
       )) {
      std::
      map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
      ::operator[]((map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
                    *)amStack_38,(RtWeakPtr *)&local_48);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)aRStack_50);
  }
  std::
  map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
  ::~map((map<Sexy::RtWeakPtr<ZombieType_const>,int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,int>>>
          *)amStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WaveGenerator::~WaveGenerator() */

void __thiscall WaveGenerator::~WaveGenerator(WaveGenerator *this)

{
  *(undefined ***)this = &PTR_GetClass_06856ee0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x2888));
  std::
  map<Sexy::RtWeakPtr<ZombieType_const>,bool,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,bool>>>
  ::~map((map<Sexy::RtWeakPtr<ZombieType_const>,bool,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,bool>>>
          *)(this + 0x2850));
  std::
  map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
  ::~map((map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
          *)(this + 0x2820));
  std::
  vector<std::pair<Sexy::RtWeakPtr<ZombieType_const>,bool>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>,bool>>>
  ::~vector((vector<std::pair<Sexy::RtWeakPtr<ZombieType_const>,bool>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>,bool>>>
             *)(this + 0xd8));
  std::
  vector<std::pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
  ::~vector((vector<std::pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
             *)(this + 0xc0));
  std::string::~string((string *)(this + 0xb8));
  std::string::~string((string *)(this + 0xb0));
  std::vector<EventZombieWaveData,std::allocator<EventZombieWaveData>>::~vector
            ((vector<EventZombieWaveData,std::allocator<EventZombieWaveData>> *)(this + 0x98));
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x80));
  std::
  vector<std::vector<WaveSpawnItem,std::allocator<WaveSpawnItem>>,std::allocator<std::vector<WaveSpawnItem,std::allocator<WaveSpawnItem>>>>
  ::~vector((vector<std::vector<WaveSpawnItem,std::allocator<WaveSpawnItem>>,std::allocator<std::vector<WaveSpawnItem,std::allocator<WaveSpawnItem>>>>
             *)(this + 0x68));
  nop();
  return;
}


/* WaveGenerator::~WaveGenerator() */

void __thiscall WaveGenerator::~WaveGenerator(WaveGenerator *this)

{
  ~WaveGenerator(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::PostSerialize(bool) */

void __thiscall WaveGenerator::PostSerialize(WaveGenerator *this,bool param_1)

{
  long lVar1;
  RtWeakPtr *pRVar2;
  vector<ZombiePoolItem,std::allocator<ZombiePoolItem>> *this_00;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  MTRand aMStack_13a0 [5016];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    Sexy::MTRand::MTRand(aMStack_13a0,(string *)(this + 0xb0));
    memcpy(this + 0xf0,aMStack_13a0,0x1398);
    Sexy::MTRand::MTRand(aMStack_13a0,(string *)(this + 0xb8));
    memcpy(this + 0x1488,aMStack_13a0,0x1398);
    std::
    map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
    ::clear((map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
             *)(this + 0x2820));
    std::
    map<Sexy::RtWeakPtr<ZombieType_const>,bool,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,bool>>>
    ::clear((map<Sexy::RtWeakPtr<ZombieType_const>,bool,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,bool>>>
             *)(this + 0x2850));
    uVar6 = *(undefined8 *)(this + 0xc0);
    lVar1 = FUN_044f4434(uVar6,*(undefined8 *)(this + 200));
    if (lVar1 != 0) {
      lVar4 = 0;
      while( true ) {
        pRVar2 = (RtWeakPtr *)FUN_044f445c(uVar6,lVar4);
        this_00 = (vector<ZombiePoolItem,std::allocator<ZombiePoolItem>> *)
                  std::
                  map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                  ::operator[]((map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                                *)(this + 0x2820),pRVar2);
        lVar3 = FUN_044f445c(*(undefined8 *)(this + 0xc0),lVar4);
        std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>::operator=
                  (this_00,(vector *)(lVar3 + 8));
        if (lVar4 + 1 == lVar1) break;
        uVar6 = *(undefined8 *)(this + 0xc0);
        lVar4 = lVar4 + 1;
      }
    }
    uVar6 = *(undefined8 *)(this + 0xd8);
    lVar4 = FUN_044f4464(uVar6,*(undefined8 *)(this + 0xe0));
    lVar1 = 0;
    if (lVar4 != 0) {
      do {
        pRVar2 = (RtWeakPtr *)FUN_044f448c(uVar6,lVar1);
        puVar5 = (undefined1 *)
                 std::
                 map<Sexy::RtWeakPtr<ZombieType_const>,bool,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,bool>>>
                 ::operator[]((map<Sexy::RtWeakPtr<ZombieType_const>,bool,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,bool>>>
                               *)(this + 0x2850),pRVar2);
        uVar6 = *(undefined8 *)(this + 0xd8);
        lVar3 = lVar1 + 1;
        lVar1 = FUN_044f448c(uVar6,lVar1);
        *puVar5 = *(undefined1 *)(lVar1 + 8);
        lVar1 = lVar3;
      } while (lVar3 != lVar4);
    }
  }
  std::
  vector<std::pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
  ::clear((vector<std::pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
           *)(this + 0xc0));
  std::
  vector<std::pair<Sexy::RtWeakPtr<ZombieType_const>,bool>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>,bool>>>
  ::clear((vector<std::pair<Sexy::RtWeakPtr<ZombieType_const>,bool>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>,bool>>>
           *)(this + 0xd8));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* WaveGenerator::pickLootZombie(int, int*) */

long __thiscall WaveGenerator::pickLootZombie(WaveGenerator *this,int param_1,int *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  
  iVar3 = Sexy::Rand(param_1);
  lVar8 = 0;
  iVar9 = 0;
  if (0 < *(int *)(this + 0x24)) {
    do {
      lVar5 = 0;
      do {
        puVar4 = (undefined8 *)FUN_044f4410(*(undefined8 *)(this + 0x68),lVar8);
        lVar1 = lVar5 + 1;
        lVar5 = FUN_044f441c(*puVar4,lVar5);
        cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(lVar5 + 0x38));
        if (cVar2 != '\0') break;
        if (*(int *)(lVar5 + 8) == 0) {
          puVar4 = (undefined8 *)
                   std::
                   map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                   ::operator[]((map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                                 *)(this + 0x2820),(RtWeakPtr *)(lVar5 + 0x38));
          piVar6 = (int *)FUN_044f44e8(*puVar4,lVar8);
          iVar9 = iVar9 + *piVar6;
          if (iVar3 < iVar9) {
            *param_2 = *piVar6;
            return lVar5;
          }
        }
        lVar5 = lVar1;
      } while (lVar1 != 0x32);
      iVar7 = (int)lVar8;
      lVar8 = lVar8 + 1;
    } while (iVar7 + 1 < *(int *)(this + 0x24));
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::assignLoot(Sexy::RtWeakPtr<LootConfig>) */

void __thiscall
WaveGenerator::assignLoot(WaveGenerator *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  string *psVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  if ((*(char *)(lVar2 + 8) == '\0') && (0 < *(int *)(this + 0x24))) {
    lVar2 = 0;
    iVar13 = 0;
LAB_045013c4:
    do {
      lVar10 = 0;
      do {
        while( true ) {
          puVar4 = (undefined8 *)FUN_044f4410(*(undefined8 *)(this + 0x68),lVar2);
          lVar5 = FUN_044f441c(*puVar4,lVar10);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)(lVar5 + 0x38));
          cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)&local_20);
          iVar12 = (int)lVar2;
          if (cVar1 != '\0') {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
            lVar2 = lVar2 + 1;
            if (iVar12 + 1 < *(int *)(this + 0x24)) goto LAB_045013c4;
            goto LAB_04501468;
          }
          if (*(int *)(lVar5 + 8) == 0) break;
          lVar10 = lVar10 + 1;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          if (lVar10 == 0x32) goto LAB_04501454;
        }
        lVar10 = lVar10 + 1;
        puVar4 = (undefined8 *)
                 std::
                 map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                 ::operator[]((map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                               *)(this + 0x2820),(RtWeakPtr *)&local_20);
        piVar3 = (int *)FUN_044f44e8(*puVar4,lVar2);
        iVar13 = iVar13 + *piVar3;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      } while (lVar10 != 0x32);
LAB_04501454:
      lVar2 = lVar2 + 1;
    } while (iVar12 + 1 < *(int *)(this + 0x24));
LAB_04501468:
    if (0 < iVar13) {
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      if (*(double *)(lVar2 + 0x10) == -1.0) {
        fVar14 = ((float)*(int *)(this + 0x24) + -10.0) * 0.33333334 + 4.0;
      }
      else {
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        fVar14 = (float)*(double *)(lVar2 + 0x10);
      }
      uVar11 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      psVar6 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
      LootHelpers::GenerateLootForLevel(psVar6,(double)fVar14,(vector *)&local_20);
      lVar2 = FUN_044f44f4(local_20,local_18);
      if (lVar2 != 0) {
        do {
          if (iVar13 < 1) break;
          local_24 = 0;
          lVar2 = pickLootZombie(this,iVar13,&local_24);
          uVar8 = local_20;
          if (lVar2 != 0) {
            puVar7 = (undefined4 *)FUN_044f4500(local_20,uVar11);
            updateLootStats(this,*puVar7);
            uVar8 = local_20;
            puVar7 = (undefined4 *)FUN_044f4500(local_20,uVar11);
            *(undefined4 *)(lVar2 + 8) = *puVar7;
            iVar13 = iVar13 - local_24;
          }
          uVar11 = uVar11 + 1;
          uVar9 = FUN_044f44f4(uVar8,local_18);
        } while (uVar11 < uVar9);
      }
      std::vector<Loot,std::allocator<Loot>>::~vector
                ((vector<Loot,std::allocator<Loot>> *)&local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::InitZombieSpawnForWaves() */

void __thiscall WaveGenerator::InitZombieSpawnForWaves(WaveGenerator *this)

{
  map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
  *this_00;
  bool bVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  ZombieType *pZVar8;
  long lVar9;
  int *piVar10;
  undefined4 *puVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  LevelEditorCardPlantInterface aLStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_28);
  bVar1 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                    ((ObjectTypeDirectoryIterator *)aLStack_28);
  if (bVar1) {
    do {
      lVar14 = 0;
      this_00 = (map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                 *)(this + 0x2820);
      ObjectTypeDirectoryIterator<ZombieType>::operator*
                ((ObjectTypeDirectoryIterator<ZombieType> *)aLStack_28);
      pcVar4 = (char *)std::
                       map<Sexy::RtWeakPtr<ZombieType_const>,bool,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,bool>>>
                       ::operator[]((map<Sexy::RtWeakPtr<ZombieType_const>,bool,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,bool>>>
                                     *)(this + 0x2850),(RtWeakPtr *)aRStack_20);
      if ((*pcVar4 != '\0') && (iVar13 = 0, 0 < *(int *)(this + 0x24))) {
        do {
          if ((int)lVar14 == 0) {
            puVar5 = (undefined8 *)
                     std::
                     map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                     ::operator[](this_00,(RtWeakPtr *)aRStack_20);
            lVar6 = FUN_044f44e8(*puVar5,0);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)(lVar6 + 0x10),(RtWeakPtr *)aRStack_20);
            puVar5 = (undefined8 *)
                     std::
                     map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                     ::operator[](this_00,(RtWeakPtr *)aRStack_20);
            puVar7 = (undefined4 *)FUN_044f44e8(*puVar5,0);
            pZVar8 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
            lVar6 = ZombieType::GetProps(pZVar8);
            *puVar7 = *(undefined4 *)(lVar6 + 0x9c);
            puVar5 = (undefined8 *)
                     std::
                     map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                     ::operator[](this_00,(RtWeakPtr *)aRStack_20);
            lVar6 = FUN_044f44e8(*puVar5,0);
            pZVar8 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
            lVar9 = ZombieType::GetProps(pZVar8);
            *(undefined4 *)(lVar6 + 4) = *(undefined4 *)(lVar9 + 0xa0);
            puVar5 = (undefined8 *)
                     std::
                     map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                     ::operator[](this_00,(RtWeakPtr *)aRStack_20);
            lVar6 = FUN_044f44e8(*puVar5,0);
            lVar9 = *(long *)(this + 0x2880);
            *(char *)(lVar6 + 8) = (char)iVar13;
            local_18 = FUN_044f59d4(*(undefined8 *)(lVar9 + 0x58));
            local_10 = FUN_044f5a24(*(undefined8 *)(lVar9 + 0x60));
            while (bVar1 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
                  , bVar1) {
              puVar7 = (undefined4 *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
              cVar3 = Sexy::RtWeakPtrBase::operator==
                                ((RtWeakPtrBase *)(puVar7 + 4),(RtWeakPtrBase *)aRStack_20);
              if (cVar3 != '\0') {
                puVar5 = (undefined8 *)
                         std::
                         map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                         ::operator[](this_00,(RtWeakPtr *)aRStack_20);
                puVar11 = (undefined4 *)FUN_044f44e8(*puVar5,0);
                *puVar11 = *puVar7;
                puVar5 = (undefined8 *)
                         std::
                         map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                         ::operator[](this_00,(RtWeakPtr *)aRStack_20);
                lVar6 = FUN_044f44e8(*puVar5,0);
                *(undefined4 *)(lVar6 + 4) = puVar7[1];
                puVar5 = (undefined8 *)
                         std::
                         map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                         ::operator[](this_00,(RtWeakPtr *)aRStack_20);
                lVar6 = FUN_044f44e8(*puVar5,0);
                iVar13 = puVar7[1];
                *(undefined1 *)(lVar6 + 8) = 0;
                if (iVar13 < 1) {
                  if (iVar13 == -1) {
                    pZVar8 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
                    lVar6 = ZombieType::GetProps(pZVar8);
                    bVar1 = 0 < *(int *)(lVar6 + 0xa0);
                    lVar6 = GetWaveDefinition(this,1);
                    if (lVar6 == 0) goto LAB_0450186c;
                    goto LAB_045017a8;
                  }
                  bVar1 = false;
                  lVar6 = GetWaveDefinition(this,1);
                  if (lVar6 != 0) goto LAB_045017a8;
                  goto LAB_04501a84;
                }
                break;
              }
              std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                        ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
            }
            bVar1 = true;
            lVar6 = GetWaveDefinition(this,1);
            if (lVar6 == 0) goto LAB_04501870;
LAB_045017a8:
            local_18 = FUN_044f59d4(*(undefined8 *)(lVar6 + 0x68));
            local_10 = FUN_044f5a24(*(undefined8 *)(lVar6 + 0x70));
            while (bVar2 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
                  , bVar2) {
              lVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
              cVar3 = Sexy::RtWeakPtrBase::operator==
                                ((RtWeakPtrBase *)(lVar9 + 0x10),(RtWeakPtrBase *)aRStack_20);
              if (cVar3 != '\0') {
                bVar1 = false;
              }
              std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                        ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
            }
            local_18 = FUN_044f59d4(*(undefined8 *)(lVar6 + 0x50));
            local_10 = FUN_044f5a24(*(undefined8 *)(lVar6 + 0x58));
            while (bVar2 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
                  , bVar2) {
              puVar7 = (undefined4 *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
              cVar3 = Sexy::RtWeakPtrBase::operator==
                                ((RtWeakPtrBase *)(puVar7 + 4),(RtWeakPtrBase *)aRStack_20);
              if (cVar3 != '\0') {
                if (0 < (int)puVar7[1]) {
LAB_0450199c:
                  puVar5 = (undefined8 *)
                           std::
                           map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                           ::operator[](this_00,(RtWeakPtr *)aRStack_20);
                  puVar11 = (undefined4 *)FUN_044f44e8(*puVar5,lVar14);
                  *puVar11 = *puVar7;
                  puVar5 = (undefined8 *)
                           std::
                           map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                           ::operator[](this_00,(RtWeakPtr *)aRStack_20);
                  lVar6 = FUN_044f44e8(*puVar5,lVar14);
                  *(undefined4 *)(lVar6 + 4) = puVar7[1];
                  puVar5 = (undefined8 *)
                           std::
                           map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                           ::operator[](this_00,(RtWeakPtr *)aRStack_20);
                  lVar6 = FUN_044f44e8(*puVar5,lVar14);
                  *(undefined1 *)(lVar6 + 8) = 1;
                  goto LAB_04501870;
                }
                if (puVar7[1] == -1) {
                  pZVar8 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
                  lVar6 = ZombieType::GetProps(pZVar8);
                  if (0 < *(int *)(lVar6 + 0xa0)) goto LAB_0450199c;
                }
              }
              std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                        ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
            }
LAB_0450186c:
            if (bVar1) goto LAB_04501870;
LAB_04501a84:
            puVar5 = (undefined8 *)
                     std::
                     map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                     ::operator[](this_00,(RtWeakPtr *)aRStack_20);
            lVar6 = FUN_044f44e8(*puVar5,lVar14);
            std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
            _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)(lVar6 + 0x10),(RtWeakPtr *)&local_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          }
          else {
            puVar5 = (undefined8 *)
                     std::
                     map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                     ::operator[](this_00,(RtWeakPtr *)aRStack_20);
            lVar12 = lVar14 + -1;
            lVar6 = FUN_044f44e8(*puVar5,lVar14);
            puVar5 = (undefined8 *)
                     std::
                     map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                     ::operator[](this_00,(RtWeakPtr *)aRStack_20);
            lVar9 = FUN_044f44e8(*puVar5,lVar12);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)(lVar6 + 0x10),(RtWeakPtr *)(lVar9 + 0x10));
            puVar5 = (undefined8 *)
                     std::
                     map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                     ::operator[](this_00,(RtWeakPtr *)aRStack_20);
            puVar7 = (undefined4 *)FUN_044f44e8(*puVar5,lVar14);
            puVar5 = (undefined8 *)
                     std::
                     map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                     ::operator[](this_00,(RtWeakPtr *)aRStack_20);
            puVar11 = (undefined4 *)FUN_044f44e8(*puVar5,lVar12);
            *puVar7 = *puVar11;
            puVar5 = (undefined8 *)
                     std::
                     map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                     ::operator[](this_00,(RtWeakPtr *)aRStack_20);
            lVar6 = FUN_044f44e8(*puVar5,lVar14);
            puVar5 = (undefined8 *)
                     std::
                     map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                     ::operator[](this_00,(RtWeakPtr *)aRStack_20);
            lVar9 = FUN_044f44e8(*puVar5,lVar12);
            *(undefined4 *)(lVar6 + 4) = *(undefined4 *)(lVar9 + 4);
            puVar5 = (undefined8 *)
                     std::
                     map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                     ::operator[](this_00,(RtWeakPtr *)aRStack_20);
            lVar6 = FUN_044f44e8(*puVar5,lVar14);
            puVar5 = (undefined8 *)
                     std::
                     map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                     ::operator[](this_00,(RtWeakPtr *)aRStack_20);
            lVar9 = FUN_044f44e8(*puVar5,lVar12);
            *(undefined1 *)(lVar6 + 8) = *(undefined1 *)(lVar9 + 8);
            lVar6 = GetWaveDefinition(this,(int)lVar14 + 1);
            if (lVar6 != 0) {
              bVar1 = true;
              goto LAB_045017a8;
            }
LAB_04501870:
            puVar5 = (undefined8 *)
                     std::
                     map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                     ::operator[](this_00,(RtWeakPtr *)aRStack_20);
            lVar6 = FUN_044f44e8(*puVar5,lVar14);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)(lVar6 + 0x10),(RtWeakPtr *)aRStack_20);
          }
          puVar5 = (undefined8 *)
                   std::
                   map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                   ::operator[](this_00,(RtWeakPtr *)aRStack_20);
          piVar10 = (int *)FUN_044f44e8(*puVar5,lVar14);
          if (*piVar10 == -1) {
            puVar5 = (undefined8 *)
                     std::
                     map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                     ::operator[](this_00,(RtWeakPtr *)aRStack_20);
            puVar7 = (undefined4 *)FUN_044f44e8(*puVar5,lVar14);
            pZVar8 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
            lVar6 = ZombieType::GetProps(pZVar8);
            *puVar7 = *(undefined4 *)(lVar6 + 0x9c);
          }
          puVar5 = (undefined8 *)
                   std::
                   map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                   ::operator[](this_00,(RtWeakPtr *)aRStack_20);
          lVar6 = FUN_044f44e8(*puVar5,lVar14);
          if (*(int *)(lVar6 + 4) == -1) {
            puVar5 = (undefined8 *)
                     std::
                     map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                     ::operator[](this_00,(RtWeakPtr *)aRStack_20);
            lVar6 = FUN_044f44e8(*puVar5,lVar14);
            pZVar8 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
            lVar9 = ZombieType::GetProps(pZVar8);
            *(undefined4 *)(lVar6 + 4) = *(undefined4 *)(lVar9 + 0xa0);
          }
          lVar14 = lVar14 + 1;
          iVar13 = (int)lVar14;
        } while (iVar13 < *(int *)(this + 0x24));
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      ObjectTypeDirectoryIterator<PlantType>::operator++
                ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_28);
      bVar1 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                        ((ObjectTypeDirectoryIterator *)aLStack_28);
    } while (bVar1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::PickZombieType(int, int, bool) */

void WaveGenerator::PickZombieType(int param_1,int param_2,bool param_3)

{
  map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
  *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  ResourceInfo *this_00;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  char in_w3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  LevelEditorCardPlantInterface aLStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  uVar7 = (uint)param_3;
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  this = (map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
          *)((ulong)(uint)param_1 + 0x2820);
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_50);
  do {
    bVar1 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                      ((ObjectTypeDirectoryIterator *)aLStack_50);
    if (!bVar1) {
      lVar6 = ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::GetSize
                        ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)aPStack_38);
      if (lVar6 == 0) {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (in_x8);
      }
      else {
        ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::PickItem();
      }
LAB_04501e2c:
      ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::~ProbabilitySet
                ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)aPStack_38);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    ObjectTypeDirectoryIterator<ZombieType>::operator*
              ((ObjectTypeDirectoryIterator<ZombieType> *)aLStack_50);
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_48);
    puVar5 = (undefined8 *)
             std::
             map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
             ::operator[](this,(RtWeakPtr *)aRStack_48);
    iVar3 = FUN_044f4508(*puVar5,puVar5[1]);
    if (iVar3 <= (int)uVar7) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      goto LAB_04501e2c;
    }
    puVar5 = (undefined8 *)
             std::
             map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
             ::operator[](this,(RtWeakPtr *)aRStack_48);
    lVar6 = FUN_044f44e8(*puVar5,uVar7);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_40);
    cVar2 = Sexy::RtWeakPtrBase::operator==
                      ((RtWeakPtrBase *)(lVar6 + 0x10),(RtWeakPtrBase *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    if (cVar2 == '\0') {
      if ((*(int *)((ulong)(uint)param_1 + 8) == 0) &&
         (lVar6 = ZombieType::GetProps((ZombieType *)this_00),
         (int)(uVar7 + 1) < *(int *)(lVar6 + 0x98))) {
        puVar5 = (undefined8 *)
                 std::
                 map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                 ::operator[](this,(RtWeakPtr *)aRStack_48);
        lVar6 = FUN_044f44e8(*puVar5,uVar7);
        if (*(char *)(lVar6 + 8) == '\0') goto LAB_04501d30;
      }
      puVar5 = (undefined8 *)
               std::
               map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
               ::operator[](this,(RtWeakPtr *)aRStack_48);
      piVar4 = (int *)FUN_044f44e8(*puVar5,uVar7);
      if ((*piVar4 <= param_2) &&
         ((in_w3 == '\0' ||
          (lVar6 = ZombieType::GetProps((ZombieType *)this_00), *(char *)(lVar6 + 0x38) != '\0'))))
      {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_48);
        puVar5 = (undefined8 *)
                 std::
                 map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                 ::operator[](this,(RtWeakPtr *)aRStack_48);
        lVar6 = FUN_044f44e8(*puVar5,uVar7);
        ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::AddItem
                  ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)aPStack_38,aRStack_40,
                   *(undefined4 *)(lVar6 + 4));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
      }
    }
LAB_04501d30:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_50);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::PickZombieWaves() */

void __thiscall WaveGenerator::PickZombieWaves(WaveGenerator *this)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [3];
  int local_70;
  uint local_6c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombiePicker::ZombiePicker((ZombiePicker *)&local_70);
  ZombiePicker::Init((ZombiePicker *)&local_70);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_88);
  std::vector<int,std::allocator<int>>::resize
            ((vector<int,std::allocator<int>> *)local_88,(long)*(int *)(this + 0x24));
  uVar6 = local_88[0];
  iVar9 = *(int *)(this + 0x24);
  if (iVar9 < 1) {
    iVar12 = *(int *)(this + 100);
    if (iVar12 < 1) goto LAB_04502274;
LAB_04501f70:
    uVar6 = local_88[0];
    iVar10 = *(int *)(this + 0xc);
    iVar14 = iVar10 + -1;
    if (iVar14 < iVar9) {
      do {
        if (iVar12 != 0) {
          iVar12 = iVar12 + -1;
          piVar5 = (int *)FUN_044f44e0(uVar6,(long)iVar14);
          *piVar5 = *piVar5 + 1;
          iVar9 = *(int *)(this + 0x24);
          iVar10 = *(int *)(this + 0xc);
        }
        iVar14 = iVar14 + iVar10;
      } while (iVar14 < iVar9);
      if (iVar12 == 0) goto LAB_04501ff0;
    }
    do {
      uVar6 = Sexy::MTRand::Next((MTRand *)(this + 0xf0),iVar9);
      piVar5 = (int *)FUN_044f44e0(local_88[0],uVar6);
      iVar12 = iVar12 + -1;
      *piVar5 = *piVar5 + 1;
      iVar9 = *(int *)(this + 0x24);
    } while (iVar12 != 0);
  }
  else {
    lVar13 = 0;
    do {
      puVar4 = (undefined4 *)FUN_044f44e0(uVar6,lVar13);
      *puVar4 = 0;
      iVar12 = (int)lVar13;
      lVar13 = lVar13 + 1;
      iVar9 = *(int *)(this + 0x24);
    } while (iVar12 + 1 < iVar9);
    iVar12 = *(int *)(this + 100);
    if (0 < iVar12) goto LAB_04501f70;
  }
LAB_04501ff0:
  if (0 < iVar9) {
    uVar16 = 0;
    iVar9 = 0;
    do {
      uVar15 = uVar16 & 0xffffffff;
      ZombiePicker::InitForWave((ZombiePicker *)&local_70);
      puVar7 = (undefined8 *)FUN_044f4410(*(undefined8 *)(this + 0x68),uVar16);
      lVar13 = FUN_044f441c(*puVar7,0);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_90);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(lVar13 + 0x38),(RtWeakPtr *)&local_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
      iVar14 = (int)uVar16;
      cVar1 = IsFlagWave(this,iVar14);
      iVar12 = *(int *)(this + 0x24);
      pcVar8 = (char *)GetWaveDefinition(this,iVar14);
      if (*(int *)(this + 0x1c) != -1) {
        *(int *)(this + 0x14) = *(int *)(this + 0x1c);
        *(undefined4 *)(this + 0x1c) = 0xffffffff;
      }
      if (pcVar8 == (char *)0x0) {
        iVar11 = *(int *)(this + 0x18);
        local_6c = *(uint *)(this + 0x14);
        iVar10 = *(int *)(this + 0x1c);
      }
      else {
        local_6c = *(uint *)(pcVar8 + 0x14);
        if (local_6c == 0xffffffff) {
          local_6c = *(uint *)(this + 0x14);
          iVar10 = *(int *)(this + 0x1c);
        }
        else {
          iVar10 = -1;
          if (pcVar8[0x1c] == '\0') {
            iVar10 = *(int *)(this + 0x14);
          }
          *(int *)(this + 0x1c) = iVar10;
          *(uint *)(this + 0x14) = local_6c;
        }
        iVar11 = *(int *)(pcVar8 + 0x18);
        if (iVar11 == -1) {
          iVar11 = *(int *)(this + 0x18);
        }
        else {
          *(int *)(this + 0x18) = iVar11;
        }
      }
      *(uint *)(this + 0x14) = iVar11 + local_6c;
      if (iVar10 != -1) {
        *(int *)(this + 0x1c) = iVar11 + iVar10;
      }
      if (cVar1 != '\0') {
        local_6c = (uint)((double)(int)local_6c * 2.5);
        Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
        StageModule::GetFlagZombieType();
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_98);
        if ((cVar1 != '\0') && (*(char *)(*(long *)(this + 0x2880) + 0x8c) == '\0')) {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_90,(RtWeakPtrBase *)&local_98);
          PutZombieInWave((WaveGenerator *)0x3fc00000,0,0x3f800000,this,
                          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                          &local_90,uVar15,(ZombiePicker *)&local_70,0,6,1,0,0,0,1);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      }
      if (pcVar8 != (char *)0x0) {
        if (*pcVar8 != '\0') {
          local_6c = 0;
        }
        iVar9 = *(int *)(pcVar8 + 0x10);
        local_98 = FUN_044f5ccc(*(undefined8 *)(pcVar8 + 0x38));
        local_90 = FUN_044f5d1c(*(undefined8 *)(pcVar8 + 0x40));
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_98,(__normal_iterator *)&local_90),
              bVar2) {
          lVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
          iVar9 = iVar9 - (uint)(*(char *)(lVar13 + 4) != '\0');
          std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_98)
          ;
        }
      }
      piVar5 = (int *)FUN_044f44e0(local_88[0],uVar16);
      iVar9 = iVar9 + *piVar5;
      if (0 < (int)local_6c) {
        if (iVar14 != iVar12 + -1) goto joined_r0x0450218c;
        PutInMissingZombies(this,iVar14,(ZombiePicker *)&local_70);
        while (0 < (int)local_6c) {
joined_r0x0450218c:
          if (0x31 < local_70) break;
          bVar2 = 0 < iVar9;
          iVar9 = iVar9 - (uint)bVar2;
          PickZombieType((int)this,local_6c,SUB81(uVar15,0));
          uVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_98);
          if ((uVar3 & 0xff) == 0) {
            local_6c = uVar3 & 0xff;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
          }
          else {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_90,(RtWeakPtrBase *)&local_98);
            PutZombieInWave((WaveGenerator *)0x3fc00000,0,0x3f800000,this,
                            (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                            &local_90,uVar15,(ZombiePicker *)&local_70,(uint)bVar2,6,1,0,0,0,1);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
          }
        }
      }
      addDefinedZombiesToWaves(this,iVar14,(ZombiePicker *)&local_70,iVar9);
      uVar16 = uVar16 + 1;
    } while (iVar14 + 1 < *(int *)(this + 0x24));
  }
LAB_04502274:
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_88);
  ZombiePicker::~ZombiePicker((ZombiePicker *)&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::InitZombieWavesForCurrentLevel() */

void __thiscall WaveGenerator::InitZombieWavesForCurrentLevel(WaveGenerator *this)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  vector<ZombiePoolItem,std::allocator<ZombiePoolItem>> *this_00;
  undefined1 *puVar4;
  LevelEditorCardPlantInterface aLStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 8) == 0) {
    lVar3 = *(long *)(this + 0x2880);
    if (*(int *)(lVar3 + 0x7c) != -1) {
      *(int *)(this + 0x14) = *(int *)(lVar3 + 0x7c);
    }
    if (*(int *)(lVar3 + 0x78) != -1) {
      *(int *)(this + 0x18) = *(int *)(lVar3 + 0x78);
    }
    if (*(int *)(lVar3 + 0x80) != -1) {
      *(int *)(this + 0x48) = *(int *)(lVar3 + 0x80);
    }
    if (*(int *)(lVar3 + 0x84) != -1) {
      *(int *)(this + 0x4c) = *(int *)(lVar3 + 0x84);
    }
    if (*(int *)(lVar3 + 0x70) != -1) {
      *(int *)(this + 0xc) = *(int *)(lVar3 + 0x70);
    }
    if (*(int *)(lVar3 + 0x88) != -1) {
      *(int *)(this + 0x50) = *(int *)(lVar3 + 0x88);
    }
    if (*(int *)(lVar3 + 0x74) != -1) {
      *(int *)(this + 0x24) = *(int *)(lVar3 + 0x74);
    }
    *(undefined4 *)(this + 100) = 0;
    LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_20);
    while (bVar2 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                             ((ObjectTypeDirectoryIterator *)aLStack_20), bVar2) {
      ObjectTypeDirectoryIterator<ZombieType>::operator*
                ((ObjectTypeDirectoryIterator<ZombieType> *)aLStack_20);
      this_00 = (vector<ZombiePoolItem,std::allocator<ZombiePoolItem>> *)
                std::
                map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                ::operator[]((map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                              *)(this + 0x2820),(RtWeakPtr *)aRStack_18);
      std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>::resize
                (this_00,(long)*(int *)(this + 0x24));
      puVar4 = (undefined1 *)
               std::
               map<Sexy::RtWeakPtr<ZombieType_const>,bool,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,bool>>>
               ::operator[]((map<Sexy::RtWeakPtr<ZombieType_const>,bool,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,bool>>>
                             *)(this + 0x2850),(RtWeakPtr *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      uVar1 = CanZombieSpawnOnLevel(this,aRStack_10);
      *puVar4 = uVar1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      ObjectTypeDirectoryIterator<PlantType>::operator++
                ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_20);
    }
    InitZombieSpawnForWaves(this);
  }
  else {
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::InitZombieWaves(Sexy::RtWeakPtr<LootConfig>) */

void __thiscall WaveGenerator::InitZombieWaves(WaveGenerator *this,RtWeakPtrBase *param_2)

{
  bool bVar1;
  uchar uVar2;
  vector<ZombiePoolItem,std::allocator<ZombiePoolItem>> *this_00;
  uint uVar3;
  undefined4 uVar4;
  LevelEditorCardPlantInterface aLStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_18);
  while( true ) {
    bVar1 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                      ((ObjectTypeDirectoryIterator *)aLStack_18);
    if (!bVar1) break;
    ObjectTypeDirectoryIterator<ZombieType>::operator*
              ((ObjectTypeDirectoryIterator<ZombieType> *)aLStack_18);
    this_00 = (vector<ZombiePoolItem,std::allocator<ZombiePoolItem>> *)
              std::
              map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
              ::operator[]((map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                            *)(this + 0x2820),(RtWeakPtr *)aRStack_10);
    std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>::clear(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_18);
  }
  *(undefined4 *)(this + 0x24) = 10;
  *(undefined4 *)(this + 0xc) = 10;
  *(undefined4 *)(this + 0x50) = 1;
  *(undefined4 *)(this + 0x54) = 1;
  *(undefined4 *)(this + 0x18) = 0x22;
  *(undefined4 *)(this + 0x14) = 100;
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  *(undefined4 *)(this + 0x20) = 0;
  uVar3 = (uint)bVar1;
  *(uint *)(this + 0x58) = uVar3;
  InitZombieWavesForCurrentLevel(this);
  PickZombieWaves(this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,param_2);
  assignLoot(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  *(uint *)(this + 0x20) = uVar3;
  *(uint *)(this + 0x28) = uVar3;
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x60) = 0xffffffff;
  *(uint *)(this + 0x5c) = uVar3;
  *(undefined4 *)(this + 0x38) = uVar4;
  *(undefined4 *)(this + 0x3c) = uVar4;
  *(undefined4 *)(this + 0x40) = uVar4;
  *(undefined4 *)(this + 0x34) = uVar4;
  uVar2 = GetTotalFlagWaves(this);
  MessageRouter::Post<int,unsigned_char>
            ((MessageRouter *)gMessageRouter,Message::ProgressMeterSetFlagCount,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveGenerator::resetDataVectors() */

void __thiscall WaveGenerator::resetDataVectors(WaveGenerator *this)

{
  vector<WaveSpawnItem,std::allocator<WaveSpawnItem>> *this_00;
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  std::
  vector<std::vector<WaveSpawnItem,std::allocator<WaveSpawnItem>>,std::allocator<std::vector<WaveSpawnItem,std::allocator<WaveSpawnItem>>>>
  ::clear((vector<std::vector<WaveSpawnItem,std::allocator<WaveSpawnItem>>,std::allocator<std::vector<WaveSpawnItem,std::allocator<WaveSpawnItem>>>>
           *)(this + 0x68));
  std::vector<unsigned_char,std::allocator<unsigned_char>>::clear
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x80));
  std::vector<EventZombieWaveData,std::allocator<EventZombieWaveData>>::clear
            ((vector<EventZombieWaveData,std::allocator<EventZombieWaveData>> *)(this + 0x98));
  std::
  vector<std::vector<WaveSpawnItem,std::allocator<WaveSpawnItem>>,std::allocator<std::vector<WaveSpawnItem,std::allocator<WaveSpawnItem>>>>
  ::resize((vector<std::vector<WaveSpawnItem,std::allocator<WaveSpawnItem>>,std::allocator<std::vector<WaveSpawnItem,std::allocator<WaveSpawnItem>>>>
            *)(this + 0x68),100);
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x68);
    uVar1 = FUN_044f4494(uVar4,*(undefined8 *)(this + 0x70));
    if (uVar1 <= uVar3) break;
    this_00 = (vector<WaveSpawnItem,std::allocator<WaveSpawnItem>> *)FUN_044f4410(uVar4,uVar3);
    std::vector<WaveSpawnItem,std::allocator<WaveSpawnItem>>::resize(this_00,0x32);
    uVar3 = uVar3 + 1;
  }
  std::vector<unsigned_char,std::allocator<unsigned_char>>::resize
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x80),100);
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x80);
    uVar1 = FUN_044f4404(uVar4,*(undefined8 *)(this + 0x88));
    if (uVar1 <= uVar3) break;
    puVar2 = (undefined1 *)FUN_044f44c4(uVar4,uVar3);
    *puVar2 = 0;
    uVar3 = uVar3 + 1;
  }
  std::vector<EventZombieWaveData,std::allocator<EventZombieWaveData>>::resize
            ((vector<EventZombieWaveData,std::allocator<EventZombieWaveData>> *)(this + 0x98),10);
  return;
}


/* WaveGenerator::WaveGenerator() */

void __thiscall WaveGenerator::WaveGenerator(WaveGenerator *this)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06856ee0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  Set8BytesTo0(this + 0xb0);
  Set8BytesTo0(this + 0xb8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xc0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  Sexy::MTRand::MTRand((MTRand *)(this + 0xf0));
  Sexy::MTRand::MTRand((MTRand *)(this + 0x1488));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x2820));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x2850));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x2888));
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  *(undefined4 *)(this + 0x50) = 1;
  *(undefined4 *)(this + 0xc) = 10;
  *(undefined4 *)(this + 0x54) = 1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  this[0x44] = (WaveGenerator)0x0;
  this[0x45] = (WaveGenerator)0x0;
  this[0x46] = (WaveGenerator)0x0;
  *(undefined4 *)(this + 0x3c) = uVar3;
  *(undefined4 *)(this + 0x38) = uVar3;
  *(undefined4 *)(this + 0x2c) = uVar3;
  *(undefined4 *)(this + 0x40) = uVar3;
  *(undefined4 *)(this + 0x34) = uVar3;
  *(undefined4 *)(this + 0x30) = uVar3;
  resetDataVectors(this);
  uVar1 = operator|(2,8);
  operator|(uVar1,0x10);
  uVar2 = CalcRandomSeed();
  Sexy::MTRand::SRand((MTRand *)(this + 0xf0),uVar2 & 0xffffffff);
  uVar2 = CalcRandomSeed(1);
  Sexy::MTRand::SRand((MTRand *)(this + 0x1488),uVar2 & 0xffffffff);
  *(undefined8 *)(this + 0x2880) = 0;
  this[0x2890] = (WaveGenerator)0x0;
  return;
}


/* WaveGenerator::StaticNew() */

WaveGenerator * WaveGenerator::StaticNew(void)

{
  WaveGenerator *this;
  
  this = ::operator_new(0x2898);
  WaveGenerator(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGenerator::PreSerialize(bool) */

void __thiscall WaveGenerator::PreSerialize(WaveGenerator *this,bool param_1)

{
  bool bVar1;
  vector *pvVar2;
  bool *pbVar3;
  LevelEditorCardPlantInterface aLStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    resetDataVectors(this);
    std::
    map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
    ::clear((map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
             *)(this + 0x2820));
    std::
    map<Sexy::RtWeakPtr<ZombieType_const>,bool,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,bool>>>
    ::clear((map<Sexy::RtWeakPtr<ZombieType_const>,bool,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,bool>>>
             *)(this + 0x2850));
  }
  else {
    Sexy::MTRand::Serialize();
    FUN_05474278(this + 0xb0,asStack_28);
    std::string::~string(asStack_28);
    Sexy::MTRand::Serialize();
    FUN_05474278(this + 0xb8,asStack_28);
    std::string::~string(asStack_28);
    std::
    vector<std::pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
    ::clear((vector<std::pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
             *)(this + 0xc0));
    std::
    vector<std::pair<Sexy::RtWeakPtr<ZombieType_const>,bool>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>,bool>>>
    ::clear((vector<std::pair<Sexy::RtWeakPtr<ZombieType_const>,bool>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>,bool>>>
             *)(this + 0xd8));
    LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_38);
    while (bVar1 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                             ((ObjectTypeDirectoryIterator *)aLStack_38), bVar1) {
      ObjectTypeDirectoryIterator<ZombieType>::operator*
                ((ObjectTypeDirectoryIterator<ZombieType> *)aLStack_38);
      pvVar2 = (vector *)
               std::
               map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
               ::operator[]((map<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                             *)(this + 0x2820),(RtWeakPtr *)aRStack_30);
      std::
      pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>
      ::
      pair<Sexy::RtWeakPtr<ZombieType_const>&,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>&,void>
                ((pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>
                  *)asStack_28,(RtWeakPtr *)aRStack_30,pvVar2);
      std::
      vector<std::pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
      ::push_back((vector<std::pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>>>
                   *)(this + 0xc0),(pair *)asStack_28);
      std::
      pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>
      ::~pair((pair<Sexy::RtWeakPtr<ZombieType_const>const,std::vector<ZombiePoolItem,std::allocator<ZombiePoolItem>>>
               *)asStack_28);
      pbVar3 = (bool *)std::
                       map<Sexy::RtWeakPtr<ZombieType_const>,bool,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,bool>>>
                       ::operator[]((map<Sexy::RtWeakPtr<ZombieType_const>,bool,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,bool>>>
                                     *)(this + 0x2850),(RtWeakPtr *)aRStack_30);
      std::pair<Sexy::RtWeakPtr<ZombieType_const>,bool>::
      pair<Sexy::RtWeakPtr<ZombieType_const>&,bool&,void>
                ((pair<Sexy::RtWeakPtr<ZombieType_const>,bool> *)asStack_28,(RtWeakPtr *)aRStack_30,
                 pbVar3);
      std::
      vector<std::pair<Sexy::RtWeakPtr<ZombieType_const>,bool>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>,bool>>>
      ::push_back((vector<std::pair<Sexy::RtWeakPtr<ZombieType_const>,bool>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>,bool>>>
                   *)(this + 0xd8),(pair *)asStack_28);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)asStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      ObjectTypeDirectoryIterator<PlantType>::operator++
                ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

