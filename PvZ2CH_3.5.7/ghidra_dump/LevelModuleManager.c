// Class: LevelModuleManager


/* LevelModuleManager::OnLoadStarted() */

void __thiscall LevelModuleManager::OnLoadStarted(LevelModuleManager *this)

{
  Sexy::Event0::operator()((Event0 *)(this + 0x88));
  return;
}


/* LevelModuleManager::OnLoadComplete() */

void __thiscall LevelModuleManager::OnLoadComplete(LevelModuleManager *this)

{
  Sexy::Event0::operator()((Event0 *)(this + 0xa8));
  return;
}


/* LevelModuleManager::OnLevelInit() */

void __thiscall LevelModuleManager::OnLevelInit(LevelModuleManager *this)

{
  Sexy::Event0::operator()((Event0 *)(this + 200));
  return;
}


/* LevelModuleManager::OnIntroStarted() */

void __thiscall LevelModuleManager::OnIntroStarted(LevelModuleManager *this)

{
  Sexy::Event0::operator()((Event0 *)(this + 0xe8));
  return;
}


/* LevelModuleManager::OnGameplayStarted() */

void __thiscall LevelModuleManager::OnGameplayStarted(LevelModuleManager *this)

{
  Sexy::Event0::operator()((Event0 *)(this + 0x108));
  return;
}


/* LevelModuleManager::OnGameplayUpdate() */

void __thiscall LevelModuleManager::OnGameplayUpdate(LevelModuleManager *this)

{
  Sexy::Event0::operator()((Event0 *)(this + 0x128));
  return;
}


/* LevelModuleManager::OnGameplayRealUpdate() */

void __thiscall LevelModuleManager::OnGameplayRealUpdate(LevelModuleManager *this)

{
  Sexy::Event0::operator()((Event0 *)(this + 0x148));
  return;
}


/* LevelModuleManager::OnGameplayEnded() */

void __thiscall LevelModuleManager::OnGameplayEnded(LevelModuleManager *this)

{
  Sexy::Event0::operator()((Event0 *)(this + 0x168));
  return;
}


/* LevelModuleManager::OnWinOutroStarted() */

void __thiscall LevelModuleManager::OnWinOutroStarted(LevelModuleManager *this)

{
  Sexy::Event0::operator()((Event0 *)(this + 0x188));
  return;
}


/* LevelModuleManager::OnLossOutroStarted() */

void __thiscall LevelModuleManager::OnLossOutroStarted(LevelModuleManager *this)

{
  Sexy::Event0::operator()((Event0 *)(this + 0x1a8));
  return;
}


/* LevelModuleManager::OnLossImminent() */

void __thiscall LevelModuleManager::OnLossImminent(LevelModuleManager *this)

{
  Sexy::Event0::operator()((Event0 *)(this + 0x1c8));
  return;
}


/* LevelModuleManager::OnLevelEnded() */

void __thiscall LevelModuleManager::OnLevelEnded(LevelModuleManager *this)

{
  Sexy::Event0::operator()((Event0 *)(this + 0x1e8));
  return;
}


/* WaveGeneratorModule* LevelModuleManager::GetModuleByClass<WaveGeneratorModule>() */

WaveGeneratorModule * __thiscall
LevelModuleManager::GetModuleByClass<WaveGeneratorModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  WaveGeneratorModule *extraout_x0;
  
  pRVar1 = (RtClass *)WaveGeneratorModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (WaveGeneratorModule *)0x0;
}


/* WaveManagerModule* LevelModuleManager::GetModuleByClass<WaveManagerModule>() */

WaveManagerModule * __thiscall
LevelModuleManager::GetModuleByClass<WaveManagerModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  WaveManagerModule *extraout_x0;
  
  pRVar1 = (RtClass *)WaveManagerModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (WaveManagerModule *)0x0;
}


/* SeedBankModule* LevelModuleManager::GetModuleByClass<SeedBankModule>() */

SeedBankModule * __thiscall
LevelModuleManager::GetModuleByClass<SeedBankModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  SeedBankModule *extraout_x0;
  
  pRVar1 = (RtClass *)SeedBankModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (SeedBankModule *)0x0;
}


/* SingleHandedModule* LevelModuleManager::GetModuleByClass<SingleHandedModule>() */

SingleHandedModule * __thiscall
LevelModuleManager::GetModuleByClass<SingleHandedModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  SingleHandedModule *extraout_x0;
  
  pRVar1 = (RtClass *)SingleHandedModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (SingleHandedModule *)0x0;
}


/* LastStandMinigameModule* LevelModuleManager::GetModuleByClass<LastStandMinigameModule>() */

LastStandMinigameModule * __thiscall
LevelModuleManager::GetModuleByClass<LastStandMinigameModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  LastStandMinigameModule *extraout_x0;
  
  pRVar1 = (RtClass *)LastStandMinigameModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (LastStandMinigameModule *)0x0;
}


/* ZombossLastStandMinigameModule*
   LevelModuleManager::GetModuleByClass<ZombossLastStandMinigameModule>() */

ZombossLastStandMinigameModule * __thiscall
LevelModuleManager::GetModuleByClass<ZombossLastStandMinigameModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  ZombossLastStandMinigameModule *extraout_x0;
  
  pRVar1 = (RtClass *)ZombossLastStandMinigameModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (ZombossLastStandMinigameModule *)0x0;
}


/* PooyanModule* LevelModuleManager::GetModuleByClass<PooyanModule>() */

PooyanModule * __thiscall
LevelModuleManager::GetModuleByClass<PooyanModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  PooyanModule *extraout_x0;
  
  pRVar1 = (RtClass *)PooyanModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (PooyanModule *)0x0;
}


/* HardLevelModule* LevelModuleManager::GetModuleByClass<HardLevelModule>() */

HardLevelModule * __thiscall
LevelModuleManager::GetModuleByClass<HardLevelModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  HardLevelModule *extraout_x0;
  
  pRVar1 = (RtClass *)HardLevelModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (HardLevelModule *)0x0;
}


/* LevelModuleManager::OnPauseStateChange(bool) */

void __thiscall LevelModuleManager::OnPauseStateChange(LevelModuleManager *this,bool param_1)

{
  Sexy::Event1<bool>::operator()((Event1<bool> *)(this + 0x248),param_1);
  return;
}


/* LevelModuleManager::AddToRenderQueue(RenderQueue*) */

void __thiscall LevelModuleManager::AddToRenderQueue(LevelModuleManager *this,RenderQueue *param_1)

{
  Sexy::Event1<RenderQueue*>::operator()((Event1<RenderQueue*> *)(this + 0x2a8),param_1);
  return;
}


/* LevelModuleManager::AddToUIRenderQueue(RenderQueue*) */

void __thiscall
LevelModuleManager::AddToUIRenderQueue(LevelModuleManager *this,RenderQueue *param_1)

{
  Sexy::Event1<RenderQueue*>::operator()((Event1<RenderQueue*> *)(this + 0x2c8),param_1);
  return;
}


/* ArenaBattleModule* LevelModuleManager::GetModuleByClass<ArenaBattleModule>() */

ArenaBattleModule * __thiscall
LevelModuleManager::GetModuleByClass<ArenaBattleModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  ArenaBattleModule *extraout_x0;
  
  pRVar1 = (RtClass *)ArenaBattleModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (ArenaBattleModule *)0x0;
}


/* PlantTrialModule* LevelModuleManager::GetModuleByClass<PlantTrialModule>() */

PlantTrialModule * __thiscall
LevelModuleManager::GetModuleByClass<PlantTrialModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  PlantTrialModule *extraout_x0;
  
  pRVar1 = (RtClass *)PlantTrialModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (PlantTrialModule *)0x0;
}


/* SkyCityStage* LevelModuleManager::GetModuleByClass<SkyCityStage>() */

SkyCityStage * __thiscall
LevelModuleManager::GetModuleByClass<SkyCityStage>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  SkyCityStage *extraout_x0;
  
  pRVar1 = (RtClass *)SkyCityStage::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (SkyCityStage *)0x0;
}


/* ChallengeModule* LevelModuleManager::GetModuleByClass<ChallengeModule>() */

ChallengeModule * __thiscall
LevelModuleManager::GetModuleByClass<ChallengeModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  ChallengeModule *extraout_x0;
  
  pRVar1 = (RtClass *)ChallengeModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (ChallengeModule *)0x0;
}


/* SunDropperModule* LevelModuleManager::GetModuleByClass<SunDropperModule>() */

SunDropperModule * __thiscall
LevelModuleManager::GetModuleByClass<SunDropperModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  SunDropperModule *extraout_x0;
  
  pRVar1 = (RtClass *)SunDropperModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (SunDropperModule *)0x0;
}


/* LawnMowerModule* LevelModuleManager::GetModuleByClass<LawnMowerModule>() */

LawnMowerModule * __thiscall
LevelModuleManager::GetModuleByClass<LawnMowerModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  LawnMowerModule *extraout_x0;
  
  pRVar1 = (RtClass *)LawnMowerModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (LawnMowerModule *)0x0;
}


/* BombModule* LevelModuleManager::GetModuleByClass<BombModule>() */

BombModule * __thiscall LevelModuleManager::GetModuleByClass<BombModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  BombModule *extraout_x0;
  
  pRVar1 = (RtClass *)BombModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (BombModule *)0x0;
}


/* BeghouledModule* LevelModuleManager::GetModuleByClass<BeghouledModule>() */

BeghouledModule * __thiscall
LevelModuleManager::GetModuleByClass<BeghouledModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  BeghouledModule *extraout_x0;
  
  pRVar1 = (RtClass *)BeghouledModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (BeghouledModule *)0x0;
}


/* SunBombChallengeModule* LevelModuleManager::GetModuleByClass<SunBombChallengeModule>() */

SunBombChallengeModule * __thiscall
LevelModuleManager::GetModuleByClass<SunBombChallengeModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  SunBombChallengeModule *extraout_x0;
  
  pRVar1 = (RtClass *)SunBombChallengeModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (SunBombChallengeModule *)0x0;
}


/* OutroModule* LevelModuleManager::GetModuleByClass<OutroModule>() */

OutroModule * __thiscall LevelModuleManager::GetModuleByClass<OutroModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  OutroModule *extraout_x0;
  
  pRVar1 = (RtClass *)OutroModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (OutroModule *)0x0;
}


/* StatueMazeModule* LevelModuleManager::GetModuleByClass<StatueMazeModule>() */

StatueMazeModule * __thiscall
LevelModuleManager::GetModuleByClass<StatueMazeModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  StatueMazeModule *extraout_x0;
  
  pRVar1 = (RtClass *)StatueMazeModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (StatueMazeModule *)0x0;
}


/* EliminateModule* LevelModuleManager::GetModuleByClass<EliminateModule>() */

EliminateModule * __thiscall
LevelModuleManager::GetModuleByClass<EliminateModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  EliminateModule *extraout_x0;
  
  pRVar1 = (RtClass *)EliminateModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (EliminateModule *)0x0;
}


/* LevelModuleManager::LevelModuleManager() */

void __thiscall LevelModuleManager::LevelModuleManager(LevelModuleManager *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0678d7d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x50));
  Sexy::Event0::Event0((Event0 *)(this + 0x88));
  Sexy::Event0::Event0((Event0 *)(this + 0xa8));
  Sexy::Event0::Event0((Event0 *)(this + 200));
  Sexy::Event0::Event0((Event0 *)(this + 0xe8));
  Sexy::Event0::Event0((Event0 *)(this + 0x108));
  Sexy::Event0::Event0((Event0 *)(this + 0x128));
  Sexy::Event0::Event0((Event0 *)(this + 0x148));
  Sexy::Event0::Event0((Event0 *)(this + 0x168));
  Sexy::Event0::Event0((Event0 *)(this + 0x188));
  Sexy::Event0::Event0((Event0 *)(this + 0x1a8));
  Sexy::Event0::Event0((Event0 *)(this + 0x1c8));
  Sexy::Event0::Event0((Event0 *)(this + 0x1e8));
  Sexy::Event0::Event0((Event0 *)(this + 0x208));
  Sexy::Event0::Event0((Event0 *)(this + 0x228));
  Sexy::Event1<bool>::Event1((Event1<bool> *)(this + 0x248));
  Sexy::Event0wRet<2,bool>::Event0wRet((Event0wRet<2,bool> *)(this + 0x268));
  Sexy::Event0wRet<8,bool>::Event0wRet((Event0wRet<8,bool> *)(this + 0x288));
  Sexy::Event1<RenderQueue*>::Event1((Event1<RenderQueue*> *)(this + 0x2a8));
  Sexy::Event1<RenderQueue*>::Event1((Event1<RenderQueue*> *)(this + 0x2c8));
  this[0x80] = (LevelModuleManager)0x0;
  return;
}


/* LevelModuleManager::GetPreventSave() */

void __thiscall LevelModuleManager::GetPreventSave(LevelModuleManager *this)

{
  Sexy::Event0wRet<8,bool>::operator()((Event0wRet<8,bool> *)(this + 0x288));
  return;
}


/* LevelModuleManager::GetWinConditionsSatisfied() */

void __thiscall LevelModuleManager::GetWinConditionsSatisfied(LevelModuleManager *this)

{
  Sexy::Event0wRet<2,bool>::operator()((Event0wRet<2,bool> *)(this + 0x268));
  return;
}


/* PlantfoodPurchaseTutorialIntro*
   LevelModuleManager::GetModuleByClass<PlantfoodPurchaseTutorialIntro>() */

PlantfoodPurchaseTutorialIntro * __thiscall
LevelModuleManager::GetModuleByClass<PlantfoodPurchaseTutorialIntro>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  PlantfoodPurchaseTutorialIntro *extraout_x0;
  
  pRVar1 = (RtClass *)PlantfoodPurchaseTutorialIntro::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (PlantfoodPurchaseTutorialIntro *)0x0;
}


/* RunningSubwayModule* LevelModuleManager::GetModuleByClass<RunningSubwayModule>() */

RunningSubwayModule * __thiscall
LevelModuleManager::GetModuleByClass<RunningSubwayModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  RunningSubwayModule *extraout_x0;
  
  pRVar1 = (RtClass *)RunningSubwayModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (RunningSubwayModule *)0x0;
}


/* LevelModuleManager::RegisterOnUpdate(Sexy::Delegate0) */

void __thiscall LevelModuleManager::RegisterOnUpdate(LevelModuleManager *this,Delegate0 *param_2)

{
  Sexy::Event0::operator+=((Event0 *)(this + 0x208),param_2);
  return;
}


/* LevelModuleManager::RegisterOnGameplayStarted(Sexy::Delegate0) */

void __thiscall
LevelModuleManager::RegisterOnGameplayStarted(LevelModuleManager *this,Delegate0 *param_2)

{
  Sexy::Event0::operator+=((Event0 *)(this + 0x108),param_2);
  return;
}


/* LevelModuleManager::RegisterOnLoadComplete(Sexy::Delegate0) */

void __thiscall
LevelModuleManager::RegisterOnLoadComplete(LevelModuleManager *this,Delegate0 *param_2)

{
  Sexy::Event0::operator+=((Event0 *)(this + 0xa8),param_2);
  return;
}


/* LevelModuleManager::RegisterOnIntroStarted(Sexy::Delegate0) */

void __thiscall
LevelModuleManager::RegisterOnIntroStarted(LevelModuleManager *this,Delegate0 *param_2)

{
  Sexy::Event0::operator+=((Event0 *)(this + 0xe8),param_2);
  return;
}


/* LevelModuleManager::RegisterAddToRenderQueue(Sexy::Delegate1<RenderQueue*>) */

void __thiscall
LevelModuleManager::RegisterAddToRenderQueue(LevelModuleManager *this,Delegate1 *param_2)

{
  Sexy::Event1<RenderQueue*>::operator+=((Event1<RenderQueue*> *)(this + 0x2a8),param_2);
  return;
}


/* LevelModuleManager::RegisterWinCondition(Sexy::Delegate0wRet<bool>) */

void __thiscall
LevelModuleManager::RegisterWinCondition(LevelModuleManager *this,Delegate0wRet *param_2)

{
  Sexy::Event0wRet<8,bool>::operator+=((Event0wRet<8,bool> *)(this + 0x268),param_2);
  return;
}


/* LevelModuleManager::RegisterCanPreventSave(Sexy::Delegate0wRet<bool>) */

void __thiscall
LevelModuleManager::RegisterCanPreventSave(LevelModuleManager *this,Delegate0wRet *param_2)

{
  Sexy::Event0wRet<8,bool>::operator+=((Event0wRet<8,bool> *)(this + 0x288),param_2);
  return;
}


/* UnchartedBoostModule* LevelModuleManager::GetModuleByClass<UnchartedBoostModule>() */

UnchartedBoostModule * __thiscall
LevelModuleManager::GetModuleByClass<UnchartedBoostModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  UnchartedBoostModule *extraout_x0;
  
  pRVar1 = (RtClass *)UnchartedBoostModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (UnchartedBoostModule *)0x0;
}


/* LevelModuleManager::RegisterOnGameplayEnded(Sexy::Delegate0) */

void __thiscall
LevelModuleManager::RegisterOnGameplayEnded(LevelModuleManager *this,Delegate0 *param_2)

{
  Sexy::Event0::operator+=((Event0 *)(this + 0x168),param_2);
  return;
}


/* LevelModuleManager::RegisterOnGameplayRealUpdate(Sexy::Delegate0) */

void __thiscall
LevelModuleManager::RegisterOnGameplayRealUpdate(LevelModuleManager *this,Delegate0 *param_2)

{
  Sexy::Event0::operator+=((Event0 *)(this + 0x148),param_2);
  return;
}


/* LevelModuleManager::RegisterOnLevelInit(Sexy::Delegate0) */

void __thiscall LevelModuleManager::RegisterOnLevelInit(LevelModuleManager *this,Delegate0 *param_2)

{
  Sexy::Event0::operator+=((Event0 *)(this + 200),param_2);
  return;
}


/* LevelModuleManager::RegisterOnWinOutroStarted(Sexy::Delegate0) */

void __thiscall
LevelModuleManager::RegisterOnWinOutroStarted(LevelModuleManager *this,Delegate0 *param_2)

{
  Sexy::Event0::operator+=((Event0 *)(this + 0x188),param_2);
  return;
}


/* LevelModuleManager::RegisterOnLossOutroStarted(Sexy::Delegate0) */

void __thiscall
LevelModuleManager::RegisterOnLossOutroStarted(LevelModuleManager *this,Delegate0 *param_2)

{
  Sexy::Event0::operator+=((Event0 *)(this + 0x1a8),param_2);
  return;
}


/* LevelModuleManager::RegisterOnGameplayUpdate(Sexy::Delegate0) */

void __thiscall
LevelModuleManager::RegisterOnGameplayUpdate(LevelModuleManager *this,Delegate0 *param_2)

{
  Sexy::Event0::operator+=((Event0 *)(this + 0x128),param_2);
  return;
}


/* NewPVPGameModule* LevelModuleManager::GetModuleByClass<NewPVPGameModule>() */

NewPVPGameModule * __thiscall
LevelModuleManager::GetModuleByClass<NewPVPGameModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  NewPVPGameModule *extraout_x0;
  
  pRVar1 = (RtClass *)NewPVPGameModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (NewPVPGameModule *)0x0;
}


/* LevelModuleManager::RegisterOnLevelEnded(Sexy::Delegate0) */

void __thiscall
LevelModuleManager::RegisterOnLevelEnded(LevelModuleManager *this,Delegate0 *param_2)

{
  Sexy::Event0::operator+=((Event0 *)(this + 0x1e8),param_2);
  return;
}


/* CardGameBoardModule* LevelModuleManager::GetModuleByClass<CardGameBoardModule>() */

CardGameBoardModule * __thiscall
LevelModuleManager::GetModuleByClass<CardGameBoardModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  CardGameBoardModule *extraout_x0;
  
  pRVar1 = (RtClass *)CardGameBoardModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (CardGameBoardModule *)0x0;
}


/* LevelModuleManager::RegisterOnLoadStarted(Sexy::Delegate0) */

void __thiscall
LevelModuleManager::RegisterOnLoadStarted(LevelModuleManager *this,Delegate0 *param_2)

{
  Sexy::Event0::operator+=((Event0 *)(this + 0x88),param_2);
  return;
}


/* CardGameZombiesAteYourBaseModule*
   LevelModuleManager::GetModuleByClass<CardGameZombiesAteYourBaseModule>() */

CardGameZombiesAteYourBaseModule * __thiscall
LevelModuleManager::GetModuleByClass<CardGameZombiesAteYourBaseModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  CardGameZombiesAteYourBaseModule *extraout_x0;
  
  pRVar1 = (RtClass *)CardGameZombiesAteYourBaseModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (CardGameZombiesAteYourBaseModule *)0x0;
}


/* SecurityGourdModule* LevelModuleManager::GetModuleByClass<SecurityGourdModule>() */

SecurityGourdModule * __thiscall
LevelModuleManager::GetModuleByClass<SecurityGourdModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  SecurityGourdModule *extraout_x0;
  
  pRVar1 = (RtClass *)SecurityGourdModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (SecurityGourdModule *)0x0;
}


/* BonusChallengeModule* LevelModuleManager::GetModuleByClass<BonusChallengeModule>() */

BonusChallengeModule * __thiscall
LevelModuleManager::GetModuleByClass<BonusChallengeModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  BonusChallengeModule *extraout_x0;
  
  pRVar1 = (RtClass *)BonusChallengeModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (BonusChallengeModule *)0x0;
}


/* ZombossRiftBattleModule* LevelModuleManager::GetModuleByClass<ZombossRiftBattleModule>() */

ZombossRiftBattleModule * __thiscall
LevelModuleManager::GetModuleByClass<ZombossRiftBattleModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  ZombossRiftBattleModule *extraout_x0;
  
  pRVar1 = (RtClass *)ZombossRiftBattleModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (ZombossRiftBattleModule *)0x0;
}


/* StarChallengeModule* LevelModuleManager::GetModuleByClass<StarChallengeModule>() */

StarChallengeModule * __thiscall
LevelModuleManager::GetModuleByClass<StarChallengeModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  StarChallengeModule *extraout_x0;
  
  pRVar1 = (RtClass *)StarChallengeModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (StarChallengeModule *)0x0;
}


/* BoardTimer* LevelModuleManager::GetModuleByClass<BoardTimer>() */

BoardTimer * __thiscall LevelModuleManager::GetModuleByClass<BoardTimer>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  BoardTimer *extraout_x0;
  
  pRVar1 = (RtClass *)BoardTimer::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (BoardTimer *)0x0;
}


/* ZombossBattleModule* LevelModuleManager::GetModuleByClass<ZombossBattleModule>() */

ZombossBattleModule * __thiscall
LevelModuleManager::GetModuleByClass<ZombossBattleModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  ZombossBattleModule *extraout_x0;
  
  pRVar1 = (RtClass *)ZombossBattleModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (ZombossBattleModule *)0x0;
}


/* LevelMutatorRiftTimedToolModule*
   LevelModuleManager::GetModuleByClass<LevelMutatorRiftTimedToolModule>() */

LevelMutatorRiftTimedToolModule * __thiscall
LevelModuleManager::GetModuleByClass<LevelMutatorRiftTimedToolModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  LevelMutatorRiftTimedToolModule *extraout_x0;
  
  pRVar1 = (RtClass *)LevelMutatorRiftTimedToolModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (LevelMutatorRiftTimedToolModule *)0x0;
}


/* LevelMutatorRiftTimedSunModule*
   LevelModuleManager::GetModuleByClass<LevelMutatorRiftTimedSunModule>() */

LevelMutatorRiftTimedSunModule * __thiscall
LevelModuleManager::GetModuleByClass<LevelMutatorRiftTimedSunModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  LevelMutatorRiftTimedSunModule *extraout_x0;
  
  pRVar1 = (RtClass *)LevelMutatorRiftTimedSunModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (LevelMutatorRiftTimedSunModule *)0x0;
}


/* LevelMutatorStartingPlantfoodModule*
   LevelModuleManager::GetModuleByClass<LevelMutatorStartingPlantfoodModule>() */

LevelMutatorStartingPlantfoodModule * __thiscall
LevelModuleManager::GetModuleByClass<LevelMutatorStartingPlantfoodModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  LevelMutatorStartingPlantfoodModule *extraout_x0;
  
  pRVar1 = (RtClass *)LevelMutatorStartingPlantfoodModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (LevelMutatorStartingPlantfoodModule *)0x0;
}


/* PlantCooldownModifierModule* LevelModuleManager::GetModuleByClass<PlantCooldownModifierModule>()
    */

PlantCooldownModifierModule * __thiscall
LevelModuleManager::GetModuleByClass<PlantCooldownModifierModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  PlantCooldownModifierModule *extraout_x0;
  
  pRVar1 = (RtClass *)PlantCooldownModifierModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (PlantCooldownModifierModule *)0x0;
}


/* LevelMutatorSeedSlotCountModule*
   LevelModuleManager::GetModuleByClass<LevelMutatorSeedSlotCountModule>() */

LevelMutatorSeedSlotCountModule * __thiscall
LevelModuleManager::GetModuleByClass<LevelMutatorSeedSlotCountModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  LevelMutatorSeedSlotCountModule *extraout_x0;
  
  pRVar1 = (RtClass *)LevelMutatorSeedSlotCountModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (LevelMutatorSeedSlotCountModule *)0x0;
}


/* LevelMutatorPowerupSetModule*
   LevelModuleManager::GetModuleByClass<LevelMutatorPowerupSetModule>() */

LevelMutatorPowerupSetModule * __thiscall
LevelModuleManager::GetModuleByClass<LevelMutatorPowerupSetModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  LevelMutatorPowerupSetModule *extraout_x0;
  
  pRVar1 = (RtClass *)LevelMutatorPowerupSetModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (LevelMutatorPowerupSetModule *)0x0;
}


/* LevelMutatorMaxSunModule* LevelModuleManager::GetModuleByClass<LevelMutatorMaxSunModule>() */

LevelMutatorMaxSunModule * __thiscall
LevelModuleManager::GetModuleByClass<LevelMutatorMaxSunModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  LevelMutatorMaxSunModule *extraout_x0;
  
  pRVar1 = (RtClass *)LevelMutatorMaxSunModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (LevelMutatorMaxSunModule *)0x0;
}


/* LevelMutatorMowerSpawnModule*
   LevelModuleManager::GetModuleByClass<LevelMutatorMowerSpawnModule>() */

LevelMutatorMowerSpawnModule * __thiscall
LevelModuleManager::GetModuleByClass<LevelMutatorMowerSpawnModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  LevelMutatorMowerSpawnModule *extraout_x0;
  
  pRVar1 = (RtClass *)LevelMutatorMowerSpawnModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (LevelMutatorMowerSpawnModule *)0x0;
}


/* LevelMutatorZombieCountdownFirstWaveSecsModule*
   LevelModuleManager::GetModuleByClass<LevelMutatorZombieCountdownFirstWaveSecsModule>() */

LevelMutatorZombieCountdownFirstWaveSecsModule * __thiscall
LevelModuleManager::GetModuleByClass<LevelMutatorZombieCountdownFirstWaveSecsModule>
          (LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  LevelMutatorZombieCountdownFirstWaveSecsModule *extraout_x0;
  
  pRVar1 = (RtClass *)LevelMutatorZombieCountdownFirstWaveSecsModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (LevelMutatorZombieCountdownFirstWaveSecsModule *)0x0;
}


/* LevelMutatorZombieLevelModule*
   LevelModuleManager::GetModuleByClass<LevelMutatorZombieLevelModule>() */

LevelMutatorZombieLevelModule * __thiscall
LevelModuleManager::GetModuleByClass<LevelMutatorZombieLevelModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  LevelMutatorZombieLevelModule *extraout_x0;
  
  pRVar1 = (RtClass *)LevelMutatorZombieLevelModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (LevelMutatorZombieLevelModule *)0x0;
}


/* LevelMutatorZombieGeneralLevelModule*
   LevelModuleManager::GetModuleByClass<LevelMutatorZombieGeneralLevelModule>() */

LevelMutatorZombieGeneralLevelModule * __thiscall
LevelModuleManager::GetModuleByClass<LevelMutatorZombieGeneralLevelModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  LevelMutatorZombieGeneralLevelModule *extraout_x0;
  
  pRVar1 = (RtClass *)LevelMutatorZombieGeneralLevelModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (LevelMutatorZombieGeneralLevelModule *)0x0;
}


/* LevelMutatorSunDropperModule*
   LevelModuleManager::GetModuleByClass<LevelMutatorSunDropperModule>() */

LevelMutatorSunDropperModule * __thiscall
LevelModuleManager::GetModuleByClass<LevelMutatorSunDropperModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  LevelMutatorSunDropperModule *extraout_x0;
  
  pRVar1 = (RtClass *)LevelMutatorSunDropperModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (LevelMutatorSunDropperModule *)0x0;
}


/* LevelMutatorStartSunModule* LevelModuleManager::GetModuleByClass<LevelMutatorStartSunModule>() */

LevelMutatorStartSunModule * __thiscall
LevelModuleManager::GetModuleByClass<LevelMutatorStartSunModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  LevelMutatorStartSunModule *extraout_x0;
  
  pRVar1 = (RtClass *)LevelMutatorStartSunModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (LevelMutatorStartSunModule *)0x0;
}


/* StarChallengeLevelTimer* LevelModuleManager::GetModuleByClass<StarChallengeLevelTimer>() */

StarChallengeLevelTimer * __thiscall
LevelModuleManager::GetModuleByClass<StarChallengeLevelTimer>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  StarChallengeLevelTimer *extraout_x0;
  
  pRVar1 = (RtClass *)StarChallengeLevelTimer::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (StarChallengeLevelTimer *)0x0;
}


/* LevelMutatorRiftZombossPhasesModule*
   LevelModuleManager::GetModuleByClass<LevelMutatorRiftZombossPhasesModule>() */

LevelMutatorRiftZombossPhasesModule * __thiscall
LevelModuleManager::GetModuleByClass<LevelMutatorRiftZombossPhasesModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  LevelMutatorRiftZombossPhasesModule *extraout_x0;
  
  pRVar1 = (RtClass *)LevelMutatorRiftZombossPhasesModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (LevelMutatorRiftZombossPhasesModule *)0x0;
}


/* LevelBasedModifier_ImmunityModule*
   LevelModuleManager::GetModuleByClass<LevelBasedModifier_ImmunityModule>() */

LevelBasedModifier_ImmunityModule * __thiscall
LevelModuleManager::GetModuleByClass<LevelBasedModifier_ImmunityModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  LevelBasedModifier_ImmunityModule *extraout_x0;
  
  pRVar1 = (RtClass *)LevelBasedModifier_ImmunityModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (LevelBasedModifier_ImmunityModule *)0x0;
}


/* LevelModuleManager::RegisterOnLossAversionUpsellUpdate(Sexy::Delegate0) */

void __thiscall
LevelModuleManager::RegisterOnLossAversionUpsellUpdate(LevelModuleManager *this,Delegate0 *param_2)

{
  Sexy::Event0::operator+=((Event0 *)(this + 0x228),param_2);
  return;
}


/* RiftTimedEventModule* LevelModuleManager::GetModuleByClass<RiftTimedEventModule>() */

RiftTimedEventModule * __thiscall
LevelModuleManager::GetModuleByClass<RiftTimedEventModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  RiftTimedEventModule *extraout_x0;
  
  pRVar1 = (RtClass *)RiftTimedEventModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (RiftTimedEventModule *)0x0;
}


/* SeedRainModule* LevelModuleManager::GetModuleByClass<SeedRainModule>() */

SeedRainModule * __thiscall
LevelModuleManager::GetModuleByClass<SeedRainModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  SeedRainModule *extraout_x0;
  
  pRVar1 = (RtClass *)SeedRainModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (SeedRainModule *)0x0;
}


/* ArtifactModule* LevelModuleManager::GetModuleByClass<ArtifactModule>() */

ArtifactModule * __thiscall
LevelModuleManager::GetModuleByClass<ArtifactModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  ArtifactModule *extraout_x0;
  
  pRVar1 = (RtClass *)ArtifactModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (ArtifactModule *)0x0;
}


/* RunningSubwayStage* LevelModuleManager::GetModuleByClass<RunningSubwayStage>() */

RunningSubwayStage * __thiscall
LevelModuleManager::GetModuleByClass<RunningSubwayStage>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  RunningSubwayStage *extraout_x0;
  
  pRVar1 = (RtClass *)RunningSubwayStage::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (RunningSubwayStage *)0x0;
}


/* ArenaPlantModule* LevelModuleManager::GetModuleByClass<ArenaPlantModule>() */

ArenaPlantModule * __thiscall
LevelModuleManager::GetModuleByClass<ArenaPlantModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  ArenaPlantModule *extraout_x0;
  
  pRVar1 = (RtClass *)ArenaPlantModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (ArenaPlantModule *)0x0;
}


/* IntroArenaTutorialBattleModule*
   LevelModuleManager::GetModuleByClass<IntroArenaTutorialBattleModule>() */

IntroArenaTutorialBattleModule * __thiscall
LevelModuleManager::GetModuleByClass<IntroArenaTutorialBattleModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  IntroArenaTutorialBattleModule *extraout_x0;
  
  pRVar1 = (RtClass *)IntroArenaTutorialBattleModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (IntroArenaTutorialBattleModule *)0x0;
}


/* LevelScoringModule* LevelModuleManager::GetModuleByClass<LevelScoringModule>() */

LevelScoringModule * __thiscall
LevelModuleManager::GetModuleByClass<LevelScoringModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  LevelScoringModule *extraout_x0;
  
  pRVar1 = (RtClass *)LevelScoringModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (LevelScoringModule *)0x0;
}


/* LevelModuleManager::RegisterAddToUIRenderQueue(Sexy::Delegate1<RenderQueue*>) */

void __thiscall
LevelModuleManager::RegisterAddToUIRenderQueue(LevelModuleManager *this,Delegate1 *param_2)

{
  Sexy::Event1<RenderQueue*>::operator+=((Event1<RenderQueue*> *)(this + 0x2c8),param_2);
  return;
}


/* JoustGameModule* LevelModuleManager::GetModuleByClass<JoustGameModule>() */

JoustGameModule * __thiscall
LevelModuleManager::GetModuleByClass<JoustGameModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  JoustGameModule *extraout_x0;
  
  pRVar1 = (RtClass *)JoustGameModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (JoustGameModule *)0x0;
}


/* MiniGamePerksModule* LevelModuleManager::GetModuleByClass<MiniGamePerksModule>() */

MiniGamePerksModule * __thiscall
LevelModuleManager::GetModuleByClass<MiniGamePerksModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  MiniGamePerksModule *extraout_x0;
  
  pRVar1 = (RtClass *)MiniGamePerksModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (MiniGamePerksModule *)0x0;
}


/* PVZ1CopycatsModule* LevelModuleManager::GetModuleByClass<PVZ1CopycatsModule>() */

PVZ1CopycatsModule * __thiscall
LevelModuleManager::GetModuleByClass<PVZ1CopycatsModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  PVZ1CopycatsModule *extraout_x0;
  
  pRVar1 = (RtClass *)PVZ1CopycatsModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (PVZ1CopycatsModule *)0x0;
}


/* SoccerGameModule* LevelModuleManager::GetModuleByClass<SoccerGameModule>() */

SoccerGameModule * __thiscall
LevelModuleManager::GetModuleByClass<SoccerGameModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  SoccerGameModule *extraout_x0;
  
  pRVar1 = (RtClass *)SoccerGameModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (SoccerGameModule *)0x0;
}


/* TimeEnergyModule* LevelModuleManager::GetModuleByClass<TimeEnergyModule>() */

TimeEnergyModule * __thiscall
LevelModuleManager::GetModuleByClass<TimeEnergyModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  TimeEnergyModule *extraout_x0;
  
  pRVar1 = (RtClass *)TimeEnergyModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (TimeEnergyModule *)0x0;
}


/* WhackAMoleModule* LevelModuleManager::GetModuleByClass<WhackAMoleModule>() */

WhackAMoleModule * __thiscall
LevelModuleManager::GetModuleByClass<WhackAMoleModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  WhackAMoleModule *extraout_x0;
  
  pRVar1 = (RtClass *)WhackAMoleModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (WhackAMoleModule *)0x0;
}


/* ScaledBoardModule* LevelModuleManager::GetModuleByClass<ScaledBoardModule>() */

ScaledBoardModule * __thiscall
LevelModuleManager::GetModuleByClass<ScaledBoardModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  ScaledBoardModule *extraout_x0;
  
  pRVar1 = (RtClass *)ScaledBoardModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (ScaledBoardModule *)0x0;
}


/* MinigameWhackAZombieModule* LevelModuleManager::GetModuleByClass<MinigameWhackAZombieModule>() */

MinigameWhackAZombieModule * __thiscall
LevelModuleManager::GetModuleByClass<MinigameWhackAZombieModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  MinigameWhackAZombieModule *extraout_x0;
  
  pRVar1 = (RtClass *)MinigameWhackAZombieModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (MinigameWhackAZombieModule *)0x0;
}


/* ArcadeModule* LevelModuleManager::GetModuleByClass<ArcadeModule>() */

ArcadeModule * __thiscall
LevelModuleManager::GetModuleByClass<ArcadeModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  ArcadeModule *extraout_x0;
  
  pRVar1 = (RtClass *)ArcadeModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (ArcadeModule *)0x0;
}


/* BeghouledZombieSpawnerModule*
   LevelModuleManager::GetModuleByClass<BeghouledZombieSpawnerModule>() */

BeghouledZombieSpawnerModule * __thiscall
LevelModuleManager::GetModuleByClass<BeghouledZombieSpawnerModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  BeghouledZombieSpawnerModule *extraout_x0;
  
  pRVar1 = (RtClass *)BeghouledZombieSpawnerModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (BeghouledZombieSpawnerModule *)0x0;
}


/* DangerRoomModule* LevelModuleManager::GetModuleByClass<DangerRoomModule>() */

DangerRoomModule * __thiscall
LevelModuleManager::GetModuleByClass<DangerRoomModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  DangerRoomModule *extraout_x0;
  
  pRVar1 = (RtClass *)DangerRoomModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (DangerRoomModule *)0x0;
}


/* GravestoneModule* LevelModuleManager::GetModuleByClass<GravestoneModule>() */

GravestoneModule * __thiscall
LevelModuleManager::GetModuleByClass<GravestoneModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  GravestoneModule *extraout_x0;
  
  pRVar1 = (RtClass *)GravestoneModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (GravestoneModule *)0x0;
}


/* RenaiStage* LevelModuleManager::GetModuleByClass<RenaiStage>() */

RenaiStage * __thiscall LevelModuleManager::GetModuleByClass<RenaiStage>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  RenaiStage *extraout_x0;
  
  pRVar1 = (RtClass *)RenaiStage::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (RenaiStage *)0x0;
}


/* BronzeModule* LevelModuleManager::GetModuleByClass<BronzeModule>() */

BronzeModule * __thiscall
LevelModuleManager::GetModuleByClass<BronzeModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  BronzeModule *extraout_x0;
  
  pRVar1 = (RtClass *)BronzeModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (BronzeModule *)0x0;
}


/* EnergyGridModule* LevelModuleManager::GetModuleByClass<EnergyGridModule>() */

EnergyGridModule * __thiscall
LevelModuleManager::GetModuleByClass<EnergyGridModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  EnergyGridModule *extraout_x0;
  
  pRVar1 = (RtClass *)EnergyGridModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (EnergyGridModule *)0x0;
}


/* OakTrainModule* LevelModuleManager::GetModuleByClass<OakTrainModule>() */

OakTrainModule * __thiscall
LevelModuleManager::GetModuleByClass<OakTrainModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  OakTrainModule *extraout_x0;
  
  pRVar1 = (RtClass *)OakTrainModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (OakTrainModule *)0x0;
}


/* SnakeModule* LevelModuleManager::GetModuleByClass<SnakeModule>() */

SnakeModule * __thiscall LevelModuleManager::GetModuleByClass<SnakeModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  SnakeModule *extraout_x0;
  
  pRVar1 = (RtClass *)SnakeModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (SnakeModule *)0x0;
}


/* TideModule* LevelModuleManager::GetModuleByClass<TideModule>() */

TideModule * __thiscall LevelModuleManager::GetModuleByClass<TideModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  TideModule *extraout_x0;
  
  pRVar1 = (RtClass *)TideModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (TideModule *)0x0;
}


/* CustomLevelEncourageModule* LevelModuleManager::GetModuleByClass<CustomLevelEncourageModule>() */

CustomLevelEncourageModule * __thiscall
LevelModuleManager::GetModuleByClass<CustomLevelEncourageModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  CustomLevelEncourageModule *extraout_x0;
  
  pRVar1 = (RtClass *)CustomLevelEncourageModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (CustomLevelEncourageModule *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::StaticClassInit() */

void LevelModuleManager::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelModuleManager");
    (*pcVar2)(plVar1,asStack_10,FUN_03e7310c,0x2e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelModuleManager::StaticGetClass() */

long * LevelModuleManager::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelModuleManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelModuleManager::GetClass() const */

long * LevelModuleManager::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelModuleManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelModuleManager::OnLossAversionUpsellUpdate() */

void __thiscall LevelModuleManager::OnLossAversionUpsellUpdate(LevelModuleManager *this)

{
  Sexy::Event0::operator()((Event0 *)(this + 0x228));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::gatherModuleInstanceAndPropertySheetResources(LevelModule*,
   std::set<std::string, std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
LevelModuleManager::gatherModuleInstanceAndPropertySheetResources
          (LevelModuleManager *this,LevelModule *param_1,set *param_2)

{
  long *plVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::GetPropsPtr(param_1);
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  (**(code **)(*plVar1 + 0x78))(plVar1,param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::createLevelModule(Sexy::RtWeakPtr<LevelModuleProperties const>) */

void __thiscall
LevelModuleManager::createLevelModule(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  LevelModule *extraout_x0;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  uVar2 = (**(code **)(*plVar1 + 0x80))();
  GameObject::Create(uVar2,0x34);
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
  LevelModule::InitializeModule(extraout_x0,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}


/* LevelModuleManager::GetStageModule() */

void __thiscall LevelModuleManager::GetStageModule(LevelModuleManager *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e71f90(*(undefined8 *)(this + 8),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::GetTrialDataInTheLevel() */

void LevelModuleManager::GetTrialDataInTheLevel(void)

{
  string *psVar1;
  LawnApp *pLVar2;
  char cVar3;
  int iVar4;
  PlantTrialConfig *pPVar5;
  undefined8 uVar6;
  long lVar7;
  ProfileMgr *this;
  PlayerInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  pLVar2 = gLawnApp;
  local_8 = ___stack_chk_guard;
  pPVar5 = (PlantTrialConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
  uVar6 = Board::GetLevel(*(Board **)(pLVar2 + 0x9f0));
  FUN_05475d88(asStack_10,uVar6);
  lVar7 = PlantTrialConfig::GetTrialDataByLevelName(pPVar5,asStack_10);
  std::string::~string(asStack_10);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if ((this_00 != (PlayerInfo *)0x0) && (lVar7 != 0)) {
    psVar1 = (string *)(lVar7 + 8);
    cVar3 = PlayerInfo::GetIsPlantUnlocked(this_00,psVar1);
    if (((cVar3 == '\0') ||
        (iVar4 = PlayerInfo::GetPlantStarLevel(this_00,psVar1,false), iVar4 < *(int *)(lVar7 + 0x48)
        )) && (cVar3 = PlayerInfo::IsPlantOnlyNameExist(this_00,psVar1), cVar3 == '\0'))
    goto LAB_03e726f0;
  }
  lVar7 = 0;
LAB_03e726f0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar7);
  }
  return;
}


/* LevelModuleManager::AddRiftThemeModule() */

void LevelModuleManager::AddRiftThemeModule(void)

{
  RiftThemeMgr *this;
  
  this = (RiftThemeMgr *)Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
  RiftThemeMgr::AddThemeModuleIfNeeded(this);
  return;
}


/* LevelModuleManager::AddArtifactModuleIfNeeded() */

void LevelModuleManager::AddArtifactModuleIfNeeded(void)

{
  Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::AddArtifactModuleIfNeeded();
  return;
}


/* LevelModuleManager::AddHeroPlantModulesIfNeeded() */

void LevelModuleManager::AddHeroPlantModulesIfNeeded(void)

{
  Sexy::LazySingleton<HeroPlantMgr>::GetInstance();
  HeroPlantMgr::AddHeroPlantModuleIfNeeded();
  return;
}


/* LevelModuleManager::AddMiniGamePerksModuleIfNeeded() */

void LevelModuleManager::AddMiniGamePerksModuleIfNeeded(void)

{
  Sexy::LazySingleton<MiniGamePerkMgr>::GetInstance();
  MiniGamePerkMgr::AddMiniGamePerksModuleIfNeeded();
  return;
}


/* LevelModuleManager::GetModuleByClass(Sexy::RtClass*) */

ResourceInfo * __thiscall
LevelModuleManager::GetModuleByClass(LevelModuleManager *this,RtClass *param_1)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  do {
    uVar6 = *(undefined8 *)(this + 8);
    uVar3 = FUN_03e71f98(uVar6,*(undefined8 *)(this + 0x10));
    uVar1 = uVar5 + 1;
    if (uVar3 <= uVar5) {
      return (ResourceInfo *)0x0;
    }
    this_00 = (RtWeakPtr *)FUN_03e71f90(uVar6,uVar5);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    uVar5 = uVar1;
  } while ((pRVar4 == (ResourceInfo *)0x0) ||
          (cVar2 = (**(code **)(*(long *)pRVar4 + 0x20))(pRVar4,param_1), cVar2 == '\0'));
  return pRVar4;
}


/* LevelModuleManager::StaticNew() */

LevelModuleManager * LevelModuleManager::StaticNew(void)

{
  LevelModuleManager *this;
  
  this = ::operator_new(0x2e8);
  LevelModuleManager(this);
  return this;
}


/* LevelModuleManager::~LevelModuleManager() */

void __thiscall LevelModuleManager::~LevelModuleManager(LevelModuleManager *this)

{
  *(undefined ***)this = &PTR_GetClass_0678d7d0;
  Sexy::Event1<RenderQueue*>::~Event1((Event1<RenderQueue*> *)(this + 0x2c8));
  Sexy::Event1<RenderQueue*>::~Event1((Event1<RenderQueue*> *)(this + 0x2a8));
  Sexy::Event0wRet<8,bool>::~Event0wRet((Event0wRet<8,bool> *)(this + 0x288));
  Sexy::Event0wRet<2,bool>::~Event0wRet((Event0wRet<2,bool> *)(this + 0x268));
  Sexy::Event1<bool>::~Event1((Event1<bool> *)(this + 0x248));
  Sexy::Event0::~Event0((Event0 *)(this + 0x228));
  Sexy::Event0::~Event0((Event0 *)(this + 0x208));
  Sexy::Event0::~Event0((Event0 *)(this + 0x1e8));
  Sexy::Event0::~Event0((Event0 *)(this + 0x1c8));
  Sexy::Event0::~Event0((Event0 *)(this + 0x1a8));
  Sexy::Event0::~Event0((Event0 *)(this + 0x188));
  Sexy::Event0::~Event0((Event0 *)(this + 0x168));
  Sexy::Event0::~Event0((Event0 *)(this + 0x148));
  Sexy::Event0::~Event0((Event0 *)(this + 0x128));
  Sexy::Event0::~Event0((Event0 *)(this + 0x108));
  Sexy::Event0::~Event0((Event0 *)(this + 0xe8));
  Sexy::Event0::~Event0((Event0 *)(this + 200));
  Sexy::Event0::~Event0((Event0 *)(this + 0xa8));
  Sexy::Event0::~Event0((Event0 *)(this + 0x88));
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x50));
  std::vector<LevelModule*,std::allocator<LevelModule*>>::~vector
            ((vector<LevelModule*,std::allocator<LevelModule*>> *)(this + 0x38));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20));
  std::vector<Sexy::RtWeakPtr<LevelModule>,std::allocator<Sexy::RtWeakPtr<LevelModule>>>::~vector
            ((vector<Sexy::RtWeakPtr<LevelModule>,std::allocator<Sexy::RtWeakPtr<LevelModule>>> *)
             (this + 8));
  nop();
  return;
}


/* LevelModuleManager::~LevelModuleManager() */

void __thiscall LevelModuleManager::~LevelModuleManager(LevelModuleManager *this)

{
  ~LevelModuleManager(this);
  AK::FreeHook(this);
  return;
}


/* LevelModuleManager::PostLoad() */

void __thiscall LevelModuleManager::PostLoad(LevelModuleManager *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TrialData *pTVar3;
  PlantTrialConfig *this_00;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x20));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x20));
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::
  insert<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x50),
             uVar1,uVar2);
  pTVar3 = (TrialData *)GetTrialDataInTheLevel();
  if (pTVar3 != (TrialData *)0x0) {
    this_00 = (PlantTrialConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
    PlantTrialConfig::SetTrialDataCache(this_00,pTVar3);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::gatherModuleResources(LevelModule*, std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) */

void __thiscall
LevelModuleManager::gatherModuleResources
          (LevelModuleManager *this,LevelModule *param_1,set *param_2)

{
  long *plVar1;
  long lVar2;
  char *__s;
  ResourceManager *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x80))(param_1,param_2);
  LevelModule::GetPropsPtr(param_1);
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  (**(code **)(*plVar1 + 0x78))(plVar1,param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar2 = (*(code *)**(undefined8 **)param_1)(param_1);
  __s = (char *)FUN_03e71f5c(*(undefined8 *)(lVar2 + 8));
  this_00 = *(ResourceManager **)(gLawnApp + 0x848);
  std::string::string((string *)aRStack_10,__s);
  lVar2 = Sexy::ResourceManager::GetResourceGroupNamed(this_00,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  if (lVar2 != 0) {
    std::string::string((string *)aRStack_10,__s);
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_2,
               (string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::IsLoadComplete() */

void __thiscall LevelModuleManager::IsLoadComplete(LevelModuleManager *this)

{
  LawnApp *this_00;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  uVar2 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                     (this + 0x50));
  uVar3 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)(this + 0x50));
  std::vector<std::string,std::allocator<std::string>>::
  vector<std::_Rb_tree_const_iterator<std::string>,void>(avStack_20,uVar2,uVar3,auStack_28);
  uVar1 = LawnApp::IsGroupLoadComplete(this_00,(vector *)avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::CompleteLoad() */

void __thiscall LevelModuleManager::CompleteLoad(LevelModuleManager *this)

{
  LawnApp *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  uVar1 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                     (this + 0x50));
  uVar2 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)(this + 0x50));
  std::vector<std::string,std::allocator<std::string>>::
  vector<std::_Rb_tree_const_iterator<std::string>,void>(avStack_20,uVar1,uVar2,auStack_28);
  LawnApp::FinalizeGroupLoads(this_00,(vector *)avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::Unload() */

void __thiscall LevelModuleManager::Unload(LevelModuleManager *this)

{
  set<std::string,std::less<std::string>,std::allocator<std::string>> *this_00;
  LawnApp *this_01;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  this_01 = gLawnApp;
  this_00 = (set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  uVar1 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin(this_00);
  uVar2 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)this_00);
  std::vector<std::string,std::allocator<std::string>>::
  vector<std::_Rb_tree_const_iterator<std::string>,void>(avStack_20,uVar1,uVar2,auStack_28);
  LawnApp::DeleteGroups(this_01,(vector *)avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::clear(this_00);
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::IncreaseRefCounts() */

void __thiscall LevelModuleManager::IncreaseRefCounts(LevelModuleManager *this)

{
  LawnApp *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  uVar1 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                     (this + 0x50));
  uVar2 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)(this + 0x50));
  std::vector<std::string,std::allocator<std::string>>::
  vector<std::_Rb_tree_const_iterator<std::string>,void>(avStack_20,uVar1,uVar2,auStack_28);
  LawnApp::LoadGroups(this_00,(vector *)avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::ReduceRefCounts() */

void __thiscall LevelModuleManager::ReduceRefCounts(LevelModuleManager *this)

{
  LawnApp *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  uVar1 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                     (this + 0x50));
  uVar2 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)(this + 0x50));
  std::vector<std::string,std::allocator<std::string>>::
  vector<std::_Rb_tree_const_iterator<std::string>,void>(avStack_20,uVar1,uVar2,auStack_28);
  LawnApp::DeleteGroups(this_00,(vector *)avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::UnloadAllZombies() */

void __thiscall LevelModuleManager::UnloadAllZombies(LevelModuleManager *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  LawnApp *this_01;
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  string *psVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      lVar3 = FUN_05474374(uVar2,"Zombie",0);
      this_01 = gLawnApp;
      if (lVar3 == -1) break;
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      LawnApp::DeleteGroup(this_01,psVar4);
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      std::set<std::string,std::less<std::string>,std::allocator<std::string>>::erase
                ((string *)(this + 0x50));
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<std::string,std::allocator<std::string>>::erase
                           ((vector<std::string,std::allocator<std::string>> *)this_00,local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    FUN_03e727cc((__normal_iterator *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::AddModuleFromProperties(Sexy::RtWeakPtr<LevelModuleProperties const>) */

void __thiscall
LevelModuleManager::AddModuleFromProperties(LevelModuleManager *this,RtWeakPtrBase *param_2)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_2);
  createLevelModule(this,aRStack_20);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<LevelModule>,std::allocator<Sexy::RtWeakPtr<LevelModule>>>::push_back
            ((vector<Sexy::RtWeakPtr<LevelModule>,std::allocator<Sexy::RtWeakPtr<LevelModule>>> *)
             (this + 8),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::AddPlantTrialModule() */

void __thiscall LevelModuleManager::AddPlantTrialModule(LevelModuleManager *this)

{
  TrialData *pTVar1;
  PlantTrialConfig *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pTVar1 = (TrialData *)GetTrialDataInTheLevel();
  if (pTVar1 != (TrialData *)0x0) {
    LawnApp::GetPlantTrialConfig(gLawnApp);
    TwinsAssistPerson::GetPopAnimRig();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    AddModuleFromProperties(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    this_00 = (PlantTrialConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
    PlantTrialConfig::SetTrialDataCache(this_00,pTVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::AddHardLevelModule() */

void __thiscall LevelModuleManager::AddHardLevelModule(LevelModuleManager *this)

{
  bool bVar1;
  undefined8 uVar2;
  RtId aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"HardLevelProps");
  PVZDB::GetIdByAlias(aRStack_28,uVar2,0x14,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
    AddModuleFromProperties(this,aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtId::~RtId(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::AddCardGameModulesIfNeeded() */

void LevelModuleManager::AddCardGameModulesIfNeeded(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  LevelModuleManager *pLVar4;
  RtId aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CardGameUtils::IsPlayingCardGame();
  if (cVar1 != '\0') {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::RtName::RtName(aRStack_18,L"CardGameBoardModuleProps");
    PVZDB::GetIdByAlias(aRStack_28,uVar3,0x14,aRStack_18);
    Sexy::RtName::~RtName(aRStack_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
    if (bVar2) {
      pLVar4 = (LevelModuleManager *)
               FUN_03e71f70(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
      AddModuleFromProperties(pLVar4,aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    Sexy::RtId::~RtId(aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::AddNewPVPGameModulesIfNeeded() */

void LevelModuleManager::AddNewPVPGameModulesIfNeeded(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  LevelModuleManager *pLVar4;
  RtId aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 != '\0') {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::RtName::RtName(aRStack_18,L"NewPVPGameModuleProps");
    PVZDB::GetIdByAlias(aRStack_28,uVar3,0x14,aRStack_18);
    Sexy::RtName::~RtName(aRStack_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
    if (bVar2) {
      pLVar4 = (LevelModuleManager *)
               FUN_03e71f70(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
      AddModuleFromProperties(pLVar4,aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    Sexy::RtId::~RtId(aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::addInitializedLevelModule(LevelModule*) */

void LevelModuleManager::addInitializedLevelModule(LevelModule *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<LevelModule>,std::allocator<Sexy::RtWeakPtr<LevelModule>>>::push_back
            ((vector<Sexy::RtWeakPtr<LevelModule>,std::allocator<Sexy::RtWeakPtr<LevelModule>>> *)
             (param_1 + 8),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::StartLoad() */

void __thiscall LevelModuleManager::StartLoad(LevelModuleManager *this)

{
  set<std::string,std::less<std::string>,std::allocator<std::string>> *this_00;
  vector<std::string,std::allocator<std::string>> *this_01;
  LawnApp *this_02;
  RtWeakPtr *this_03;
  ResourceInfo *pRVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  this_00 = (set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 8);
    uVar2 = FUN_03e71f98(uVar5,*(undefined8 *)(this + 0x10));
    this_02 = gLawnApp;
    if (uVar2 <= uVar4) break;
    this_03 = (RtWeakPtr *)FUN_03e71f90(uVar5,uVar4);
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_03);
    gatherModuleResources(this,(LevelModule *)pRVar1,(set *)this_00);
    uVar4 = uVar4 + 1;
  }
  this_01 = (vector<std::string,std::allocator<std::string>> *)(this + 0x20);
  uVar5 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin(this_00);
  uVar3 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)this_00);
  std::vector<std::string,std::allocator<std::string>>::
  vector<std::_Rb_tree_const_iterator<std::string>,void>
            ((vector<std::string,std::allocator<std::string>> *)local_20,uVar5,uVar3,
             (__normal_iterator *)&local_28);
  LawnApp::PrepareLoadGroups(this_02,(vector *)local_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_20);
  std::vector<std::string,std::allocator<std::string>>::clear(this_01);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_01);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_20,(__normal_iterator *)&local_28);
  uVar5 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin(this_00);
  uVar3 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)this_00);
  std::vector<std::string,std::allocator<std::string>>::
  insert<std::_Rb_tree_const_iterator<std::string>,void>(this_01,local_20[0],uVar5,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::OnUpdate() */

void __thiscall LevelModuleManager::OnUpdate(LevelModuleManager *this)

{
  set<std::string,std::less<std::string>,std::allocator<std::string>> *this_00;
  vector<std::string,std::allocator<std::string>> *this_01;
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  LevelModule *pLVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  undefined8 local_50 [3];
  undefined8 local_38 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Event0::operator()((Event0 *)(this + 0x208));
  uVar5 = *(undefined8 *)(this + 0x38);
  uVar1 = FUN_03e71fa4(uVar5,*(undefined8 *)(this + 0x40));
  if (uVar1 != 0) {
    this_00 = (set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x50);
    uVar4 = 0;
    while (uVar4 < uVar1) {
      puVar2 = (undefined8 *)FUN_03e71f80(uVar5);
      pLVar6 = (LevelModule *)*puVar2;
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)local_38);
      gatherModuleResources(this,pLVar6,(set *)local_38);
      uVar5 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                        ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                         local_38);
      uVar3 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)local_38);
      std::vector<std::string,std::allocator<std::string>>::
      vector<std::_Rb_tree_const_iterator<std::string>,void>
                ((vector *)local_50,uVar5,uVar3,aRStack_58);
      LawnApp::LoadGroups(gLawnApp,(vector *)local_50);
      uVar5 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                        ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                         local_38);
      uVar3 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)local_38);
      std::set<std::string,std::less<std::string>,std::allocator<std::string>>::
      insert<std::_Rb_tree_const_iterator<std::string>>(this_00,uVar5,uVar3);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_60);
      std::vector<Sexy::RtWeakPtr<LevelModule>,std::allocator<Sexy::RtWeakPtr<LevelModule>>>::
      push_back((vector<Sexy::RtWeakPtr<LevelModule>,std::allocator<Sexy::RtWeakPtr<LevelModule>>> *
                )(this + 8),(RtWeakPtr *)aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)local_50);
      std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
                ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)local_38);
      uVar5 = *(undefined8 *)(this + 0x38);
      uVar1 = FUN_03e71fa4(uVar5,*(undefined8 *)(this + 0x40));
      uVar4 = uVar4 + 1;
    }
    this_01 = (vector<std::string,std::allocator<std::string>> *)(this + 0x20);
    std::vector<std::string,std::allocator<std::string>>::clear(this_01);
    local_50[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)this_01);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)local_38,(__normal_iterator *)local_50);
    uVar5 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin(this_00)
    ;
    uVar3 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)this_00);
    std::vector<std::string,std::allocator<std::string>>::
    insert<std::_Rb_tree_const_iterator<std::string>,void>(this_01,local_38[0],uVar5,uVar3);
    std::vector<LevelModule*,std::allocator<LevelModule*>>::clear
              ((vector<LevelModule*,std::allocator<LevelModule*>> *)(this + 0x38));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::AddRuntimeModuleFromProperties(Sexy::RtWeakPtr<LevelModuleProperties const>)
    */

void __thiscall
LevelModuleManager::AddRuntimeModuleFromProperties(LevelModuleManager *this,RtWeakPtrBase *param_2)

{
  LevelModule *local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  local_18 = (LevelModule *)createLevelModule(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::vector<LevelModule*,std::allocator<LevelModule*>>::push_back
            ((vector<LevelModule*,std::allocator<LevelModule*>> *)(this + 0x38),&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::AddVictoryModule(Sexy::RtWeakPtr<LevelDefinition>) */

void __thiscall
LevelModuleManager::AddVictoryModule
          (LevelModuleManager *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  long lVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(lVar1 + 0x70));
  AddRuntimeModuleFromProperties(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::AddLossModule(OutroType, Sexy::RtWeakPtr<LevelDefinition>) */

void __thiscall
LevelModuleManager::AddLossModule
          (LevelModuleManager *this,undefined8 param_2,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03e72c5c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar3 + 0x78));
  if ((lVar2 == 0) && (cVar1 != '\0')) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(lVar2 + 0x78));
    AddRuntimeModuleFromProperties(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::createAndInitializeLevelModule(Sexy::RtWeakPtr<LevelModuleProperties const>,
   std::vector<LevelModule*, std::allocator<LevelModule*> >&) const */

void __thiscall
LevelModuleManager::createAndInitializeLevelModule
          (LevelModuleManager *this,RtMixedPtrBase *param_2,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_3)

{
  LevelModule *pLVar1;
  char cVar2;
  bool bVar3;
  RtObject *this_00;
  long *plVar4;
  undefined8 uVar5;
  LevelModule *extraout_x0;
  RtWeakPtrBase *pRVar6;
  undefined8 uVar7;
  LevelModule *local_60;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar2 != '\0') {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar3 = Sexy::RtObject::IsA<LevelModuleProperties>(this_00);
    if (bVar3) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      uVar5 = (**(code **)(*plVar4 + 0x80))();
      GameObject::Create(uVar5,0x34);
      nop();
      local_60 = extraout_x0;
      std::vector<LevelModule*,std::allocator<LevelModule*>>::push_back
                ((vector<LevelModule*,std::allocator<LevelModule*>> *)avStack_38,&local_60);
      pLVar1 = local_60;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)param_2);
      LevelModule::InitializeModule(pLVar1,aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
      (**(code **)(*(long *)local_60 + 0x78))(local_60,aRStack_20);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aRStack_20);
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aRStack_20);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48),
            bVar3) {
        pRVar6 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,pRVar6);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_58);
        createAndInitializeLevelModule(this,(RtWeakPtr<Sexy::SoundResource> *)&local_40,avStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58)
        ;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
      }
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(param_3);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_40,(__normal_iterator *)&local_48);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_38);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_38);
      std::vector<LevelModule*,std::allocator<LevelModule*>>::
      insert<__gnu_cxx::__normal_iterator<LevelModule**,std::vector<LevelModule*,std::allocator<LevelModule*>>>,void>
                ((vector<LevelModule*,std::allocator<LevelModule*>> *)param_3,local_40,uVar5,uVar7);
      std::
      vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
      ::~vector((vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
                 *)aRStack_20);
    }
  }
  std::vector<LevelModule*,std::allocator<LevelModule*>>::~vector
            ((vector<LevelModule*,std::allocator<LevelModule*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::createAndInitializeLevelModulePVZ1Mode(Sexy::RtWeakPtr<LevelModuleProperties
   const>, std::vector<LevelModule*, std::allocator<LevelModule*> >&, std::vector<bool,
   std::allocator<bool> >) const */

void __thiscall
LevelModuleManager::createAndInitializeLevelModulePVZ1Mode
          (LevelModuleManager *this,RtMixedPtrBase *param_2,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_3,vector<bool,std::allocator<bool>> *param_4)

{
  LevelModule *pLVar1;
  char cVar2;
  bool bVar3;
  RtObject *this_00;
  long *plVar4;
  undefined8 uVar5;
  LevelModule *extraout_x0;
  BaseChallengeModule *pBVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  RtWeakPtrBase *pRVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  LevelModule *local_68;
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar2 != '\0') {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar3 = Sexy::RtObject::IsA<LevelModuleProperties>(this_00);
    if (bVar3) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      uVar5 = (**(code **)(*plVar4 + 0x80))();
      GameObject::Create(uVar5,0x34);
      nop();
      local_68 = extraout_x0;
      std::vector<LevelModule*,std::allocator<LevelModule*>>::push_back
                ((vector<LevelModule*,std::allocator<LevelModule*>> *)avStack_38,&local_68);
      pLVar1 = local_68;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)param_2);
      LevelModule::InitializeModule(pLVar1,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      if ((local_68 == (LevelModule *)0x0) ||
         (pBVar6 = Sexy::RtObject::Cast<BaseChallengeModule>((RtObject *)local_68),
         pBVar6 == (BaseChallengeModule *)0x0)) {
        (**(code **)(*(long *)local_68 + 0x78))
                  (local_68,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
        local_58 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_20);
        local_50 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
        while( true ) {
          bVar3 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
          if (!bVar3) break;
          pRVar10 = (RtWeakPtrBase *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,pRVar10);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_48,(RtWeakPtrBase *)aRStack_60);
          createAndInitializeLevelModule(this,(RtWeakPtr<Sexy::SoundResource> *)local_48,avStack_38)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
        }
      }
      else {
        uVar11 = 0;
        (**(code **)(*(long *)local_68 + 0x78))
                  (local_68,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
        lVar7 = FUN_03e71fb0(local_20,local_18);
        if (lVar7 != 0) {
          do {
            uVar8 = std::vector<bool,std::allocator<bool>>::size(param_4);
            if (uVar11 < uVar8) {
              auVar12 = FUN_03e72188(*(undefined8 *)param_4,uVar11);
              local_48 = auVar12;
              bVar3 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_48);
              if (bVar3) {
                pRVar10 = (RtWeakPtrBase *)FUN_03e71fbc(local_20,uVar11);
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)local_48,pRVar10);
                createAndInitializeLevelModule(this,(_Bit_reference *)local_48,avStack_38);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
              }
            }
            uVar11 = uVar11 + 1;
            uVar8 = FUN_03e71fb0(local_20,local_18);
          } while (uVar11 < uVar8);
        }
      }
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(param_3);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)local_48,(__normal_iterator *)&local_50);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_38);
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_38);
      std::vector<LevelModule*,std::allocator<LevelModule*>>::
      insert<__gnu_cxx::__normal_iterator<LevelModule**,std::vector<LevelModule*,std::allocator<LevelModule*>>>,void>
                ((vector<LevelModule*,std::allocator<LevelModule*>> *)param_3,local_48._0_8_,uVar5,
                 uVar9);
      std::
      vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
      ::~vector((vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
                 *)&local_20);
    }
  }
  std::vector<LevelModule*,std::allocator<LevelModule*>>::~vector
            ((vector<LevelModule*,std::allocator<LevelModule*>> *)avStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleManager::InitializeFromLevel(Sexy::RtWeakPtr<LevelDefinition>, bool) */

void __thiscall
LevelModuleManager::InitializeFromLevel
          (LevelModuleManager *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,char param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  RtWeakPtrBase *pRVar7;
  undefined8 *puVar8;
  ulong uVar9;
  LevelModule *this_00;
  PVZ1ModeUtils *this_01;
  LevelBasedModifierModuleMgr *this_02;
  ulong uVar10;
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [3];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [24];
  undefined8 local_30 [5];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)(lVar6 + 0x68));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_48);
  AddModuleFromProperties(this,(RtWeakPtr<Sexy::SoundResource> *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  cVar2 = RiftUtils::IsPlayingRiftLevel();
  if (cVar2 != '\0') {
    Sexy::RtName::RtName((RtName *)aRStack_48,L"DefaultBoardTimer");
    Sexy::RtName::RtName((RtName *)local_30,L"LevelModules");
    Sexy::RtId::RtId((RtId *)local_60,(RtName *)aRStack_48,(RtName *)local_30);
    Sexy::RtName::~RtName((RtName *)local_30);
    Sexy::RtName::~RtName((RtName *)aRStack_48);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_30);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)local_60);
    createAndInitializeLevelModule(this,aRStack_48,(RtWeakPtr<Sexy::SoundResource> *)local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    FUN_03e71f80(local_30[0],0);
    addInitializedLevelModule((LevelModule *)this);
    std::vector<LevelModule*,std::allocator<LevelModule*>>::~vector
              ((vector<LevelModule*,std::allocator<LevelModule*>> *)local_30);
    Sexy::RtId::~RtId((RtId *)local_60);
  }
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,(RtWeakPtrBase *)(lVar6 + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_60);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_80);
  if (cVar2 != '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_80);
    createAndInitializeLevelModule
              (this,(RtWeakPtr<Sexy::SoundResource> *)local_30,
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
    FUN_03e71f80(local_60[0],0);
    addInitializedLevelModule((LevelModule *)this);
  }
  puVar1 = gMessageRouter;
  uVar10 = 0;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)param_2);
  MessageRouter::Broadcast<Sexy::RtWeakPtr<LevelDefinition>&,Sexy::RtWeakPtr<LevelDefinition>>
            ((MessageRouter *)puVar1,Message::InitializingModuleManagerForLevelDefinition,
             (RtWeakPtr<Sexy::SoundResource> *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_48);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  lVar6 = FUN_03e71f74(*(undefined8 *)(lVar6 + 0x88),*(undefined8 *)(lVar6 + 0x90));
  if (lVar6 != 0) {
    do {
      bVar4 = false;
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      pRVar7 = (RtWeakPtrBase *)FUN_03e71f88(*(undefined8 *)(lVar6 + 0x88),uVar10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_78,pRVar7);
      local_70 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aRStack_48);
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aRStack_48);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68),
            bVar3) {
        puVar8 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
        LevelModule::GetPropsPtr((LevelModule *)*puVar8);
        cVar2 = Sexy::RtWeakPtrBase::operator==
                          ((RtWeakPtrBase *)local_30,(RtWeakPtrBase *)aRStack_78);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
        if (cVar2 != '\0') {
          bVar4 = true;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
      }
      if (!bVar4) {
        cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
        if (cVar2 == '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_78);
          createAndInitializeLevelModule(this,(RtWeakPtr<Sexy::SoundResource> *)local_30,aRStack_48)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30)
          ;
        }
        else {
          this_01 = (PVZ1ModeUtils *)
                    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                              ((RtWeakPtr<Sexy::SoundResource> *)&local_68,
                               (RtWeakPtrBase *)aRStack_78);
          PVZ1ModeUtils::GetLevelChallengeChoose(this_01);
          createAndInitializeLevelModulePVZ1Mode
                    (this,(exception_ptr *)&local_68,aRStack_48,
                     (RtWeakPtr<Sexy::SoundResource> *)local_30);
          std::vector<bool,std::allocator<bool>>::~vector
                    ((vector<bool,std::allocator<bool>> *)local_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        }
      }
      uVar10 = uVar10 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      uVar9 = FUN_03e71f74(*(undefined8 *)(lVar6 + 0x88),*(undefined8 *)(lVar6 + 0x90));
    } while (uVar10 < uVar9);
  }
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_48);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)aRStack_48);
  while (bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)local_30)
        , bVar4) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    addInitializedLevelModule((LevelModule *)this);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
  }
  AddPlantTrialModule(this);
  if (param_3 != '\0') {
    AddHardLevelModule(this);
  }
  cVar2 = RiftUtils::IsPlayingRiftLevel();
  if ((((cVar2 != '\0') || (cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level(), cVar2 != '\0')) ||
      (cVar2 = PlantWarsUtils::IsPlayingPlantWarsLevel(), cVar2 != '\0')) ||
     ((cVar2 = PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel(), cVar2 != '\0' &&
      (iVar5 = PVZ2UnchartedModeUtils::GetUnchartedWorldType(), iVar5 == 3)))) {
    AddRiftThemeModule();
  }
  cVar2 = RiftUtils::IsRiftTimedLevel();
  if (cVar2 != '\0') {
    Sexy::LazySingleton<RiftValidateMgr>::GetInstance();
    RiftValidateMgr::AddTimerModuleIfNeeded();
  }
  cVar2 = PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel();
  if ((cVar2 != '\0') &&
     (((cVar2 = PVZ2UnchartedModeUtils::IsUnchartedBirthday(), cVar2 != '\0' ||
       (cVar2 = PVZ2UnchartedModeUtils::IsAnniversarySelectLevel(), cVar2 != '\0')) ||
      (iVar5 = PVZ2UnchartedModeUtils::GetUnchartedWorldType(), iVar5 == 3)))) {
    this_02 = (LevelBasedModifierModuleMgr *)
              Sexy::LazySingleton<LevelBasedModifierModuleMgr>::GetInstance();
    LevelBasedModifierModuleMgr::SyncCollections(this_02);
  }
  AddArtifactModuleIfNeeded();
  AddCardGameModulesIfNeeded();
  AddNewPVPGameModulesIfNeeded();
  AddHeroPlantModulesIfNeeded();
  AddMiniGamePerksModuleIfNeeded();
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 8));
  while (bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)local_30)
        , bVar4) {
    pRVar7 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_70,pRVar7);
    this_00 = (LevelModule *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    LevelModule::PostInitialize(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
  }
  std::vector<LevelModule*,std::allocator<LevelModule*>>::~vector
            ((vector<LevelModule*,std::allocator<LevelModule*>> *)aRStack_48);
  std::vector<LevelModule*,std::allocator<LevelModule*>>::~vector
            ((vector<LevelModule*,std::allocator<LevelModule*>> *)local_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* BaseChallengeModule* LevelModuleManager::GetModuleByClass<BaseChallengeModule>() */

BaseChallengeModule * __thiscall
LevelModuleManager::GetModuleByClass<BaseChallengeModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  BaseChallengeModule *extraout_x0;
  
  pRVar1 = (RtClass *)BaseChallengeModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (BaseChallengeModule *)0x0;
}


/* TowerDefendModule* LevelModuleManager::GetModuleByClass<TowerDefendModule>() */

TowerDefendModule * __thiscall
LevelModuleManager::GetModuleByClass<TowerDefendModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  TowerDefendModule *extraout_x0;
  
  pRVar1 = (RtClass *)TowerDefendModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (TowerDefendModule *)0x0;
}


/* PennyClassroomModule* LevelModuleManager::GetModuleByClass<PennyClassroomModule>() */

PennyClassroomModule * __thiscall
LevelModuleManager::GetModuleByClass<PennyClassroomModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  PennyClassroomModule *extraout_x0;
  
  pRVar1 = (RtClass *)PennyClassroomModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (PennyClassroomModule *)0x0;
}


/* PresetPlantModule* LevelModuleManager::GetModuleByClass<PresetPlantModule>() */

PresetPlantModule * __thiscall
LevelModuleManager::GetModuleByClass<PresetPlantModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  PresetPlantModule *extraout_x0;
  
  pRVar1 = (RtClass *)PresetPlantModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (PresetPlantModule *)0x0;
}


/* ProtectThePlantChallengeModule*
   LevelModuleManager::GetModuleByClass<ProtectThePlantChallengeModule>() */

ProtectThePlantChallengeModule * __thiscall
LevelModuleManager::GetModuleByClass<ProtectThePlantChallengeModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  ProtectThePlantChallengeModule *extraout_x0;
  
  pRVar1 = (RtClass *)ProtectThePlantChallengeModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (ProtectThePlantChallengeModule *)0x0;
}


/* EvilDaveModule* LevelModuleManager::GetModuleByClass<EvilDaveModule>() */

EvilDaveModule * __thiscall
LevelModuleManager::GetModuleByClass<EvilDaveModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  EvilDaveModule *extraout_x0;
  
  pRVar1 = (RtClass *)EvilDaveModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (EvilDaveModule *)0x0;
}


/* BesiegeModule* LevelModuleManager::GetModuleByClass<BesiegeModule>() */

BesiegeModule * __thiscall
LevelModuleManager::GetModuleByClass<BesiegeModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  BesiegeModule *extraout_x0;
  
  pRVar1 = (RtClass *)BesiegeModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (BesiegeModule *)0x0;
}


/* MagnifyingGrassTutorialIntro*
   LevelModuleManager::GetModuleByClass<MagnifyingGrassTutorialIntro>() */

MagnifyingGrassTutorialIntro * __thiscall
LevelModuleManager::GetModuleByClass<MagnifyingGrassTutorialIntro>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  MagnifyingGrassTutorialIntro *extraout_x0;
  
  pRVar1 = (RtClass *)MagnifyingGrassTutorialIntro::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (MagnifyingGrassTutorialIntro *)0x0;
}


/* HeroPlantModule* LevelModuleManager::GetModuleByClass<HeroPlantModule>() */

HeroPlantModule * __thiscall
LevelModuleManager::GetModuleByClass<HeroPlantModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  HeroPlantModule *extraout_x0;
  
  pRVar1 = (RtClass *)HeroPlantModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (HeroPlantModule *)0x0;
}


/* IntroSingleHanded* LevelModuleManager::GetModuleByClass<IntroSingleHanded>() */

IntroSingleHanded * __thiscall
LevelModuleManager::GetModuleByClass<IntroSingleHanded>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  IntroSingleHanded *extraout_x0;
  
  pRVar1 = (RtClass *)IntroSingleHanded::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (IntroSingleHanded *)0x0;
}


/* RenaiModule* LevelModuleManager::GetModuleByClass<RenaiModule>() */

RenaiModule * __thiscall LevelModuleManager::GetModuleByClass<RenaiModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  RenaiModule *extraout_x0;
  
  pRVar1 = (RtClass *)RenaiModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (RenaiModule *)0x0;
}


/* VaseBreakerModule* LevelModuleManager::GetModuleByClass<VaseBreakerModule>() */

VaseBreakerModule * __thiscall
LevelModuleManager::GetModuleByClass<VaseBreakerModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  VaseBreakerModule *extraout_x0;
  
  pRVar1 = (RtClass *)VaseBreakerModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (VaseBreakerModule *)0x0;
}


/* RiftThemeBlizzard* LevelModuleManager::GetModuleByClass<RiftThemeBlizzard>() */

RiftThemeBlizzard * __thiscall
LevelModuleManager::GetModuleByClass<RiftThemeBlizzard>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  RiftThemeBlizzard *extraout_x0;
  
  pRVar1 = (RtClass *)RiftThemeBlizzard::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (RiftThemeBlizzard *)0x0;
}


/* MiniGameChallengeModule* LevelModuleManager::GetModuleByClass<MiniGameChallengeModule>() */

MiniGameChallengeModule * __thiscall
LevelModuleManager::GetModuleByClass<MiniGameChallengeModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  MiniGameChallengeModule *extraout_x0;
  
  pRVar1 = (RtClass *)MiniGameChallengeModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (MiniGameChallengeModule *)0x0;
}


/* BossKillTimeChallengeModule* LevelModuleManager::GetModuleByClass<BossKillTimeChallengeModule>()
    */

BossKillTimeChallengeModule * __thiscall
LevelModuleManager::GetModuleByClass<BossKillTimeChallengeModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  BossKillTimeChallengeModule *extraout_x0;
  
  pRVar1 = (RtClass *)BossKillTimeChallengeModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (BossKillTimeChallengeModule *)0x0;
}


/* VolcanoSnowBattleModule* LevelModuleManager::GetModuleByClass<VolcanoSnowBattleModule>() */

VolcanoSnowBattleModule * __thiscall
LevelModuleManager::GetModuleByClass<VolcanoSnowBattleModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  VolcanoSnowBattleModule *extraout_x0;
  
  pRVar1 = (RtClass *)VolcanoSnowBattleModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (VolcanoSnowBattleModule *)0x0;
}


/* ArmrackModule* LevelModuleManager::GetModuleByClass<ArmrackModule>() */

ArmrackModule * __thiscall
LevelModuleManager::GetModuleByClass<ArmrackModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  ArmrackModule *extraout_x0;
  
  pRVar1 = (RtClass *)ArmrackModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (ArmrackModule *)0x0;
}


/* SpeedUpTileModule* LevelModuleManager::GetModuleByClass<SpeedUpTileModule>() */

SpeedUpTileModule * __thiscall
LevelModuleManager::GetModuleByClass<SpeedUpTileModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  SpeedUpTileModule *extraout_x0;
  
  pRVar1 = (RtClass *)SpeedUpTileModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (SpeedUpTileModule *)0x0;
}


/* CamelMinigameModule* LevelModuleManager::GetModuleByClass<CamelMinigameModule>() */

CamelMinigameModule * __thiscall
LevelModuleManager::GetModuleByClass<CamelMinigameModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  CamelMinigameModule *extraout_x0;
  
  pRVar1 = (RtClass *)CamelMinigameModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (CamelMinigameModule *)0x0;
}


/* ChristmasProtectIntro* LevelModuleManager::GetModuleByClass<ChristmasProtectIntro>() */

ChristmasProtectIntro * __thiscall
LevelModuleManager::GetModuleByClass<ChristmasProtectIntro>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  ChristmasProtectIntro *extraout_x0;
  
  pRVar1 = (RtClass *)ChristmasProtectIntro::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (ChristmasProtectIntro *)0x0;
}


/* ZombossBattleIntro* LevelModuleManager::GetModuleByClass<ZombossBattleIntro>() */

ZombossBattleIntro * __thiscall
LevelModuleManager::GetModuleByClass<ZombossBattleIntro>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  ZombossBattleIntro *extraout_x0;
  
  pRVar1 = (RtClass *)ZombossBattleIntro::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (ZombossBattleIntro *)0x0;
}


/* ZombossMechLastStandIntro* LevelModuleManager::GetModuleByClass<ZombossMechLastStandIntro>() */

ZombossMechLastStandIntro * __thiscall
LevelModuleManager::GetModuleByClass<ZombossMechLastStandIntro>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  ZombossMechLastStandIntro *extraout_x0;
  
  pRVar1 = (RtClass *)ZombossMechLastStandIntro::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (ZombossMechLastStandIntro *)0x0;
}


/* GlacierModule* LevelModuleManager::GetModuleByClass<GlacierModule>() */

GlacierModule * __thiscall
LevelModuleManager::GetModuleByClass<GlacierModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  GlacierModule *extraout_x0;
  
  pRVar1 = (RtClass *)GlacierModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (GlacierModule *)0x0;
}


/* FishingModule* LevelModuleManager::GetModuleByClass<FishingModule>() */

FishingModule * __thiscall
LevelModuleManager::GetModuleByClass<FishingModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  FishingModule *extraout_x0;
  
  pRVar1 = (RtClass *)FishingModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (FishingModule *)0x0;
}


/* VaseBreakerFlowModule* LevelModuleManager::GetModuleByClass<VaseBreakerFlowModule>() */

VaseBreakerFlowModule * __thiscall
LevelModuleManager::GetModuleByClass<VaseBreakerFlowModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  VaseBreakerFlowModule *extraout_x0;
  
  pRVar1 = (RtClass *)VaseBreakerFlowModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (VaseBreakerFlowModule *)0x0;
}


/* RiverCrossingModule* LevelModuleManager::GetModuleByClass<RiverCrossingModule>() */

RiverCrossingModule * __thiscall
LevelModuleManager::GetModuleByClass<RiverCrossingModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  RiverCrossingModule *extraout_x0;
  
  pRVar1 = (RtClass *)RiverCrossingModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (RiverCrossingModule *)0x0;
}


/* VictoryOutroModule* LevelModuleManager::GetModuleByClass<VictoryOutroModule>() */

VictoryOutroModule * __thiscall
LevelModuleManager::GetModuleByClass<VictoryOutroModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  VictoryOutroModule *extraout_x0;
  
  pRVar1 = (RtClass *)VictoryOutroModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (VictoryOutroModule *)0x0;
}


/* PVPSeedBankModule* LevelModuleManager::GetModuleByClass<PVPSeedBankModule>() */

PVPSeedBankModule * __thiscall
LevelModuleManager::GetModuleByClass<PVPSeedBankModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  PVPSeedBankModule *extraout_x0;
  
  pRVar1 = (RtClass *)PVPSeedBankModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (PVPSeedBankModule *)0x0;
}


/* IntroWorldCup* LevelModuleManager::GetModuleByClass<IntroWorldCup>() */

IntroWorldCup * __thiscall
LevelModuleManager::GetModuleByClass<IntroWorldCup>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  IntroWorldCup *extraout_x0;
  
  pRVar1 = (RtClass *)IntroWorldCup::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (IntroWorldCup *)0x0;
}


/* CardGameRoundModule* LevelModuleManager::GetModuleByClass<CardGameRoundModule>() */

CardGameRoundModule * __thiscall
LevelModuleManager::GetModuleByClass<CardGameRoundModule>(LevelModuleManager *this)

{
  RtClass *pRVar1;
  long lVar2;
  CardGameRoundModule *extraout_x0;
  
  pRVar1 = (RtClass *)CardGameRoundModule::StaticGetClass();
  lVar2 = GetModuleByClass(this,pRVar1);
  if (lVar2 != 0) {
    nop();
    return extraout_x0;
  }
  return (CardGameRoundModule *)0x0;
}

