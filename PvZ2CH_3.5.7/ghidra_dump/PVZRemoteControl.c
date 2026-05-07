// Class: PVZRemoteControl


/* PVZRemoteControl::PVZRemoteControl() */

void __thiscall PVZRemoteControl::PVZRemoteControl(PVZRemoteControl *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06847aa0;
  return;
}


/* PVZRemoteControl::Play() */

void PVZRemoteControl::Play(void)

{
  return;
}


/* PVZRemoteControl::SetTestMode(bool) */

void __thiscall PVZRemoteControl::SetTestMode(PVZRemoteControl *this,bool param_1)

{
  *(bool *)(gLawnApp + 0x2998) = param_1;
  return;
}


/* PVZRemoteControl::SetRecordingStrings(bool) */

void __thiscall PVZRemoteControl::SetRecordingStrings(PVZRemoteControl *this,bool param_1)

{
  *(bool *)(gLawnApp + 0x2999) = param_1;
  return;
}


/* PVZRemoteControl::GetRsbUsed() */

undefined8 __thiscall PVZRemoteControl::GetRsbUsed(PVZRemoteControl *this)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* PVZRemoteControl::AddSunMoney(int) */

void __thiscall PVZRemoteControl::AddSunMoney(PVZRemoteControl *this,int param_1)

{
  Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),param_1);
  return;
}


/* PVZRemoteControl::SpawnAllPlants() */

void PVZRemoteControl::SpawnAllPlants(void)

{
  if ((gLawnApp != 0) && (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0)) {
    Board::TestSpawnAllPlants(*(Board **)(gLawnApp + 0x9f0));
    return;
  }
  return;
}


/* PVZRemoteControl::SpawnRandomPlants() */

void PVZRemoteControl::SpawnRandomPlants(void)

{
  if ((gLawnApp != 0) && (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0)) {
    Board::TestSpawnRandomPlants(*(Board **)(gLawnApp + 0x9f0));
    return;
  }
  return;
}


/* PVZRemoteControl::KillAllPlants() */

void PVZRemoteControl::KillAllPlants(void)

{
  if ((gLawnApp != 0) && (*(long *)(gLawnApp + 0x9f0) != 0)) {
    Board::DestroyAllPlants();
    return;
  }
  return;
}


/* PVZRemoteControl::KillAllZombies() */

void PVZRemoteControl::KillAllZombies(void)

{
  if ((gLawnApp != 0) && (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0)) {
    Board::DestroyAllZombies(*(Board **)(gLawnApp + 0x9f0));
    return;
  }
  return;
}


/* PVZRemoteControl::ToggleFPSPig() */

void PVZRemoteControl::ToggleFPSPig(void)

{
  if ((gLawnApp != 0) && (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0)) {
    Board::ToggleShowPig(*(Board **)(gLawnApp + 0x9f0));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::LoadLevel(std::string&) */

void __thiscall PVZRemoteControl::LoadLevel(PVZRemoteControl *this,string *param_1)

{
  GameStateMgr *pGVar1;
  string asStack_10 [8];
  long local_8;
  
  pGVar1 = gGameStateMgr;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  GameStateMgr::StartLevel(pGVar1,asStack_10,param_1,0xffffffff,0,0,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZRemoteControl::StartLevel() */

void PVZRemoteControl::StartLevel(void)

{
  Board::StartLevel(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* PVZRemoteControl::PlantFoodAllPlants() */

void PVZRemoteControl::PlantFoodAllPlants(void)

{
  if ((gLawnApp != 0) && (*(long *)(gLawnApp + 0x9f0) != 0)) {
    Board::TestPlantFoodAllPlants();
    return;
  }
  return;
}


/* PVZRemoteControl::MainMenu() */

void PVZRemoteControl::MainMenu(void)

{
  GameStateMgr::ShowMainMenu(gGameStateMgr,0,0);
  return;
}


/* PVZRemoteControl::RemoveMowers() */

void PVZRemoteControl::RemoveMowers(void)

{
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    Board::DestroyAllMowers();
    return;
  }
  return;
}


/* PVZRemoteControl::~PVZRemoteControl() */

void __thiscall PVZRemoteControl::~PVZRemoteControl(PVZRemoteControl *this)

{
  *(undefined ***)this = &PTR_GetClass_06847aa0;
  nop();
  return;
}


/* PVZRemoteControl::~PVZRemoteControl() */

void __thiscall PVZRemoteControl::~PVZRemoteControl(PVZRemoteControl *this)

{
  ~PVZRemoteControl(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::ToggleWavePause() */

void __thiscall PVZRemoteControl::ToggleWavePause(PVZRemoteControl *this)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
    std::string::string(in_x8,"Unable to pause wave, not in a level");
    nop();
  }
  else {
    lVar3 = Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0));
    bVar2 = FUN_04402f14(*(undefined1 *)(lVar3 + 0x45));
    FUN_04402f18((undefined1 *)(lVar3 + 0x45),bVar2 ^ 1);
    if ((bVar2 ^ 1) == 0) {
      std::string::string(in_x8,"Waves have been unpaused");
      nop();
    }
    else {
      std::string::string(in_x8,"Waves have been paused");
      nop();
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZRemoteControl::SetSkipNarration(bool) */

void __thiscall PVZRemoteControl::SetSkipNarration(PVZRemoteControl *this,bool param_1)

{
  long lVar1;
  
  lVar1 = LawnApp::GetNarrationSystem(gLawnApp);
  FUN_0440301c(lVar1 + 0x1b4,param_1);
  return;
}


/* PVZRemoteControl::IsPlaying() */

undefined8 PVZRemoteControl::IsPlaying(void)

{
  undefined8 uVar1;
  
  if ((gLawnApp != 0) && (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0)) {
    uVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
    return uVar1;
  }
  return 0;
}


/* PVZRemoteControl::StaticNew() */

PVZRemoteControl * PVZRemoteControl::StaticNew(void)

{
  PVZRemoteControl *this;
  
  this = ::operator_new(8);
  PVZRemoteControl(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::StaticClassInit() */

void PVZRemoteControl::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZRemoteControl");
    (*pcVar2)(plVar1,asStack_10,FUN_04404ea8,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZRemoteControl::StaticGetClass() */

long * PVZRemoteControl::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZRemoteControl",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZRemoteControl::GetClass() const */

long * PVZRemoteControl::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZRemoteControl",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZRemoteControl::GetPaused() */

undefined8 PVZRemoteControl::GetPaused(void)

{
  undefined8 uVar1;
  
  if ((gLawnApp != 0) && (*(long *)(gLawnApp + 0x9f0) != 0)) {
    uVar1 = FUN_04403014(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x9dc));
    return uVar1;
  }
  return 0;
}


/* PVZRemoteControl::SetPaused(bool) */

void PVZRemoteControl::SetPaused(bool param_1)

{
  long *plVar1;
  
  if ((gLawnApp != 0) && (plVar1 = *(long **)(gLawnApp + 0x9f0), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 800))(plVar1,param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::TogglePause() */

void __thiscall PVZRemoteControl::TogglePause(PVZRemoteControl *this)

{
  long lVar1;
  byte bVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = GetPaused();
  SetPaused((bool)(bVar2 ^ 1));
  if (bVar2 == 0) {
    std::string::string(in_x8,"Game has been paused");
    nop();
  }
  else {
    std::string::string(in_x8,"Game has been unpaused");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZRemoteControl::SetRsbUsed(std::string const&) */

void PVZRemoteControl::SetRsbUsed(string *param_1)

{
  thunk_FUN_05475e00(&mRsbUsed,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::SpawnPlant(std::string&, int, int) */

void PVZRemoteControl::SpawnPlant(string *param_1,int param_2,int param_3)

{
  long lVar1;
  int in_w3;
  string *in_x8;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((gLawnApp == 0) || (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0)) {
    std::string::string(in_x8,"Could not spawn plant.");
    nop();
  }
  else {
    lVar1 = Board::TestSpawnPlant
                      (*(Board **)(gLawnApp + 0x9f0),(string *)(ulong)(uint)param_2,param_3,in_w3);
    if (lVar1 == 0) {
      std::string::string(in_x8,"Could not spawn plant, invalid type.");
      nop();
    }
    else {
      Set8BytesTo0(asStack_20);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtrBase::GetId();
      Sexy::RtId::ToString(aRStack_10,asStack_20,false);
      Sexy::RtId::~RtId(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      FUN_05474148();
      std::string::~string(asStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::SpawnZombie(std::string&) */

void PVZRemoteControl::SpawnZombie(string *param_1)

{
  string *in_x8;
  Board *pBVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((gLawnApp == 0) || (*(string **)(gLawnApp + 0x9f0) == (string *)0x0)) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    Board::GetZombieType(*(string **)(gLawnApp + 0x9f0));
    pBVar1 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
    Board::CheatAddZombie(pBVar1,aRStack_10,0xffffffff,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Set8BytesTo0(asStack_20);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtrBase::GetId();
    Sexy::RtId::ToString((RtId *)aRStack_10,asStack_20,false);
    Sexy::RtId::~RtId((RtId *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    FUN_05474148();
    std::string::~string(asStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::SpawnZombieAtRow(std::string&, int) */

void PVZRemoteControl::SpawnZombieAtRow(string *param_1,int param_2)

{
  undefined8 in_x2;
  string *in_x8;
  Board *pBVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((gLawnApp == 0) || (*(string **)(gLawnApp + 0x9f0) == (string *)0x0)) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    Board::GetZombieType(*(string **)(gLawnApp + 0x9f0));
    pBVar1 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
    Board::CheatAddZombie(pBVar1,aRStack_10,in_x2,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Set8BytesTo0(asStack_20);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtrBase::GetId();
    Sexy::RtId::ToString((RtId *)aRStack_10,asStack_20,false);
    Sexy::RtId::~RtId((RtId *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    FUN_05474148();
    std::string::~string(asStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::SetDebug(std::string&) */

void __thiscall PVZRemoteControl::SetDebug(PVZRemoteControl *this,string *param_1)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    Sexy::StringToLower((Sexy *)param_1,param_1);
    bVar1 = std::operator==(asStack_10,"boxes");
    if (bVar1) {
      *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x8fc) = 4;
    }
    else {
      bVar1 = std::operator==(asStack_10,"life");
      if (bVar1) {
        *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x8fc) = 5;
      }
      else {
        bVar1 = std::operator==(asStack_10,"music");
        if (bVar1) {
          *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x8fc) = 2;
        }
        else {
          bVar1 = std::operator==(asStack_10,"spawn");
          if (bVar1) {
            *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x8fc) = 1;
          }
          else {
            bVar1 = std::operator==(asStack_10,"memory");
            if (bVar1) {
              *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x8fc) = 3;
            }
            else {
              bVar1 = std::operator==(asStack_10,"none");
              if (bVar1) {
                *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x8fc) = 0;
              }
            }
          }
        }
      }
    }
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::RsbPatchFileExists() */

void PVZRemoteControl::RsbPatchFileExists(void)

{
  undefined4 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetFolder(asStack_10,1);
  std::operator+(asStack_10,"patch.rsbpatch");
  std::string::~string(asStack_10);
  uVar1 = (**(code **)(**(long **)(Sexy::gSexyAppBase + 0x28) + 0x110))
                    (*(long **)(Sexy::gSexyAppBase + 0x28),asStack_18,0);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::ApplyRsbPatch() */

void PVZRemoteControl::ApplyRsbPatch(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint extraout_w1;
  string asStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  undefined **local_88;
  RSBPatcher aRStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RsbPatchFileExists();
  if (cVar1 != '\0') {
    GetFolder((string *)&local_88,1);
    std::operator+((string *)&local_88,"patch.rsbpatch");
    std::string::~string((string *)&local_88);
    GetFolder((string *)&local_88,1);
    std::operator+((string *)&local_88,"main.rsb");
    std::string::~string((string *)&local_88);
    GetFolder((string *)&local_88,2);
    std::operator+((string *)&local_88,"new.rsb");
    std::string::~string((string *)&local_88);
    local_88 = &PTR_nop_06847c10;
    Sexy::RSBPatcher::RSBPatcher
              (aRStack_80,Sexy::gSexyAppBase,(IRSBPatcherListener *)&local_88,(void *)0x0);
    Sexy::RSBPatcher::Start(aRStack_80,asStack_98,asStack_a0,asStack_90);
    do {
      Sexy::RSBPatcher::Update(aRStack_80);
      Sexy::SexySleep((Sexy *)0x32,extraout_w1);
      cVar2 = Sexy::RSBPatcher::IsFinished(aRStack_80);
    } while (cVar2 != '\0');
    iVar3 = Sexy::RSBPatcher::GetStatus(aRStack_80);
    if (iVar3 != 2) {
      cVar1 = '\0';
    }
    Sexy::RSBPatcher::~RSBPatcher(aRStack_80);
    std::string::~string(asStack_90);
    std::string::~string(asStack_98);
    std::string::~string(asStack_a0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::RemoveNewRsb() */

void PVZRemoteControl::RemoveNewRsb(void)

{
  char cVar1;
  undefined1 uVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetFolder(asStack_10,2);
  std::operator+(asStack_10,"new.rsb");
  std::string::~string(asStack_10);
  cVar1 = (**(code **)(**(long **)(Sexy::gSexyAppBase + 0x28) + 0x110))
                    (*(long **)(Sexy::gSexyAppBase + 0x28),asStack_18,0);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(**(long **)(Sexy::gSexyAppBase + 0x28) + 0x140))
                      (*(long **)(Sexy::gSexyAppBase + 0x28),asStack_18);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PVZRemoteControl::SetTimeScale(float) */

void PVZRemoteControl::SetTimeScale(float param_1)

{
  long lVar1;
  undefined4 in_register_00005004;
  
  if (param_1 == 0.0) {
    return;
  }
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  FUN_04402f00(CONCAT44(in_register_00005004,param_1),lVar1 + 0x30);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::NextWave() */

void PVZRemoteControl::NextWave(void)

{
  WaveGenerator *this;
  float fVar1;
  float fVar2;
  
  if (((gLawnApp != 0) && (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0)) &&
     (this = (WaveGenerator *)Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0)),
     this != (WaveGenerator *)0x0)) {
    fVar1 = (float)FUN_04402f08(*(undefined4 *)(this + 0x34));
    fVar2 = (float)PVZ_EOT();
    if (fVar2 <= fVar1) {
      WaveGenerator::SpawnNextWaveIn(this,_FUN_04404394);
      return;
    }
    PVZ_T();
    FUN_04402f0c(this + 0x34);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::SetDate(std::string const&) */

void __thiscall PVZRemoteControl::SetDate(PVZRemoteControl *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  TimeMgr *pTVar3;
  long lVar4;
  long lVar5;
  tm local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"default");
  if (bVar1) {
    pTVar3 = (TimeMgr *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    TimeMgr::ClearDateOverride(pTVar3);
  }
  else {
    local_40.tm_zone = (char *)0x0;
    local_40.tm_sec = 0;
    local_40.tm_min = 0;
    local_40.tm_hour = 0;
    local_40.tm_mday = 0;
    local_40.tm_mon = 0;
    local_40.tm_year = 0;
    local_40.tm_wday = 0;
    local_40.tm_yday = 0;
    local_40.tm_isdst = 0;
    local_40._36_4_ = 0;
    local_40.tm_gmtoff = 0;
    cVar2 = DateStringToTM(param_1,&local_40);
    if (cVar2 != '\0') {
      pTVar3 = (TimeMgr *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      lVar4 = Sexy::GetTimegm(&local_40);
      lVar5 = Sexy::GetBJTimeOffset();
      TimeMgr::SetDateOverride(pTVar3,lVar4 - lVar5);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZRemoteControl::AddStars(int) */

void __thiscall PVZRemoteControl::AddStars(PVZRemoteControl *this,int param_1)

{
  ProfileMgr *this_00;
  int iVar1;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar1 = ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::AddStars(iVar1,param_1);
  return;
}


/* PVZRemoteControl::UnlockAllLevels() */

void PVZRemoteControl::UnlockAllLevels(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  ProfileUtils::CompleteAllLevels(true,pPVar1);
  return;
}


/* PVZRemoteControl::ResetPlayer() */

void PVZRemoteControl::ResetPlayer(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  ProfileUtils::ResetPlayerInfo(pPVar1);
  MainMenu();
  return;
}


/* PVZRemoteControl::ReadOnlyMode(bool) */

void __thiscall PVZRemoteControl::ReadOnlyMode(PVZRemoteControl *this,bool param_1)

{
  ProfileMgr *this_00;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::SetReadOnlyMode(this_00,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::SaveStateTo(std::string&) */

void __thiscall PVZRemoteControl::SaveStateTo(PVZRemoteControl *this,string *param_1)

{
  ProfileMgr *this_00;
  ProfileMgr *this_01;
  PlayerInfo *pPVar1;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  Sexy::StringToWString((Sexy *)param_1,param_1);
  ProfileMgr::SaveAs(this_00,pPVar1,awStack_10);
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::LoadProfile(std::string&) */

void __thiscall PVZRemoteControl::LoadProfile(PVZRemoteControl *this,string *param_1)

{
  wstring *pwVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MainMenu();
  pwVar1 = (wstring *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  Sexy::StringToWString((Sexy *)param_1,param_1);
  ProfileMgr::LoadAndSetProfile(pwVar1);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZRemoteControl::SetDroppingSunPaused(bool) */

void __thiscall PVZRemoteControl::SetDroppingSunPaused(PVZRemoteControl *this,bool param_1)

{
  SunDropperModule *this_00;
  
  if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
     (this_00 = (SunDropperModule *)
                FUN_04404a2c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
     this_00 != (SunDropperModule *)0x0)) {
    SunDropperModule::SetPaused(this_00,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::GetEasyPlantingMode() */

void PVZRemoteControl::GetEasyPlantingMode(void)

{
  undefined4 uVar1;
  wchar16 *pwVar2;
  LineBreakCategory *pLVar3;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar3 = aLStack_18;
  local_8 = ___stack_chk_guard;
  pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"FreePlanting");
  uVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar2,(wchar16 *)asStack_10,pLVar3,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::SetEasyPlantingMode(bool) */

void PVZRemoteControl::SetEasyPlantingMode(bool param_1)

{
  string *psVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (gLawnApp != 0) {
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"FreePlanting");
    CheatManager::SetToggleValue(psVar1,SUB81(asStack_10,0));
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::ToggleEasyPlanting() */

void __thiscall PVZRemoteControl::ToggleEasyPlanting(PVZRemoteControl *this)

{
  long lVar1;
  byte bVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = GetEasyPlantingMode();
  SetEasyPlantingMode((bool)(bVar2 ^ 1));
  if (bVar2 == 0) {
    std::string::string(in_x8,"Easy planting turned on.");
    nop();
  }
  else {
    std::string::string(in_x8,"Easy planting turned off.");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::TogglePlantFoodMode() */

void __thiscall PVZRemoteControl::TogglePlantFoodMode(PVZRemoteControl *this)

{
  char cVar1;
  wchar16 *pwVar2;
  LineBreakCategory *pLVar3;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  string *in_x8;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar3 = aLStack_18;
  local_8 = ___stack_chk_guard;
  pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"PlantfoodZombies");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar2,(wchar16 *)asStack_10,pLVar3,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 == '\0') {
    std::string::string(in_x8,"Plantfood Mode has been turned off.");
    nop();
  }
  else {
    std::string::string(in_x8,"Plantfood Mode has been turned on.");
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::ToggleHealthBars() */

void PVZRemoteControl::ToggleHealthBars(void)

{
  wchar16 *pwVar1;
  LineBreakCategory *pLVar2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar2 = aLStack_18;
  local_8 = ___stack_chk_guard;
  pwVar1 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"HealthBars");
  EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
            (pwVar1,(wchar16 *)asStack_10,pLVar2,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZRemoteControl::AddCoins(int) */

void __thiscall PVZRemoteControl::AddCoins(PVZRemoteControl *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  char *pcVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::AM_GetCoins(this_01);
    PlayerInfo::AM_SetCoins(this_01,iVar1 + param_1);
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_Buttonclick");
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::ForceUnloadPlantType(std::string&) */

void PVZRemoteControl::ForceUnloadPlantType(string *param_1)

{
  char cVar1;
  string *psVar2;
  long lVar3;
  Board *this;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((gLawnApp != 0) && (*(long *)(gLawnApp + 0x9f0) != 0)) {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    if (cVar1 != '\0') {
      this = *(Board **)(gLawnApp + 0x9f0);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Board::DeleteResourceGroupForGameplay(this,(string *)(lVar3 + 0x10));
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::GivePacket(std::string&) */

void __thiscall PVZRemoteControl::GivePacket(PVZRemoteControl *this,string *param_1)

{
  int iVar1;
  char cVar2;
  RtObject *this_00;
  ConveyorSeedBank *this_01;
  string *psVar3;
  SeedChooser *this_02;
  long *plVar4;
  int iVar5;
  code *pcVar6;
  RtMixedPtrBase aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (this_00 = (RtObject *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0)),
     this_00 != (RtObject *)0x0)) {
    this_01 = Sexy::RtObject::Cast<ConveyorSeedBank>(this_00);
    if (this_01 == (ConveyorSeedBank *)0x0) {
      psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
      if (cVar2 != '\0') {
        this_02 = (SeedChooser *)Board::GetSeedChooser(*(Board **)(gLawnApp + 0x9f0));
        if (this_02 == (SeedChooser *)0x0) {
          cVar2 = FUN_04403018(this_00[0x199]);
          iVar5 = cVar2 + -1;
          if (0 < cVar2 + -1) {
            do {
              iVar1 = iVar5 + -1;
              UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this_00,iVar5);
              UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this_00,iVar1);
              plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
              pcVar6 = *(code **)(*plVar4 + 0x198);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
              SeedPacket::GetPlantType();
              (*pcVar6)(plVar4,aRStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
              iVar5 = iVar1;
            } while (iVar1 != 0);
          }
          UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this_00,0);
          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          pcVar6 = *(code **)(*plVar4 + 0x198);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_28);
          (*pcVar6)(plVar4,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        }
        else {
          SeedChooser::ForceSelection(this_02,param_1);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
    else {
      ConveyorSeedBank::ForceSpawn(this_01,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::SpawnAllZombies() */

void PVZRemoteControl::SpawnAllZombies(void)

{
  bool bVar1;
  ResourceInfo *pRVar2;
  Board *pBVar3;
  LevelEditorCardPlantInterface aLStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((gLawnApp != 0) && (*(long *)(gLawnApp + 0x9f0) != 0)) {
    LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_18);
    while (bVar1 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                             ((ObjectTypeDirectoryIterator *)aLStack_18), bVar1) {
      ObjectTypeDirectoryIterator<ZombieType>::operator*
                ((ObjectTypeDirectoryIterator<ZombieType> *)aLStack_18);
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if ((pRVar2 != (ResourceInfo *)0x0) && (pRVar2[0xa8] != (ResourceInfo)0x0)) {
        pBVar3 = *(Board **)(gLawnApp + 0x9f0);
        ObjectTypeDirectoryIterator<ZombieType>::operator*
                  ((ObjectTypeDirectoryIterator<ZombieType> *)aLStack_18);
        Board::AddZombie(pBVar3,aRStack_10,0xffffffff,1,0,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
      ObjectTypeDirectoryIterator<PlantType>::operator++
                ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRemoteControl::ForceUnloadResourcesForZombie(std::string&) */

void PVZRemoteControl::ForceUnloadResourcesForZombie(string *param_1)

{
  char cVar1;
  string *psVar2;
  RAttribute *this;
  vector *pvVar3;
  ZombieType *this_00;
  Board *pBVar4;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((gLawnApp != 0) && (*(long *)(gLawnApp + 0x9f0) != 0)) {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar1 == '\0') {
      psVar2 = (string *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
      StageModule::ResolveZombieType(psVar2);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)aRStack_18,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    }
    else {
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    }
    if (cVar1 != '\0') {
      pBVar4 = *(Board **)(gLawnApp + 0x9f0);
      this = (RAttribute *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      pvVar3 = (vector *)Reflection::RAttribute::GetValue(this);
      Board::DeleteResourceGroupsForGameplay(pBVar4,pvVar3);
      pBVar4 = *(Board **)(gLawnApp + 0x9f0);
      this_00 = (ZombieType *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      pvVar3 = (vector *)ZombieType::GetAudioGroups(this_00);
      Board::DeleteResourceGroupsForGameplay(pBVar4,pvVar3);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

