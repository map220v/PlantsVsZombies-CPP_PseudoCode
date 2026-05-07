// Class: RiftOutro


/* RiftOutro::onBoardFadeDone() */

void RiftOutro::onBoardFadeDone(void)

{
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  Board::DestroyAllCreatures();
  Board::NotifyOutroComplete(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftOutro::StaticClassInit() */

void RiftOutro::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftOutro");
    (*pcVar2)(plVar1,asStack_10,FUN_0368db84,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftOutro::StaticGetClass() */

long * RiftOutro::StaticGetClass(void)

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
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"RiftOutro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftOutro::onFailedResponse() */

void __thiscall RiftOutro::onFailedResponse(RiftOutro *this)

{
  *(undefined4 *)(this + 0x30) = 1;
  return;
}


/* RiftOutro::recordZombossData() */

void __thiscall RiftOutro::recordZombossData(RiftOutro *this)

{
  undefined1 uVar1;
  int iVar2;
  PlayerInfo *this_00;
  
  uVar1 = false;
  if (this[0x38] != (RiftOutro)0x0) {
    uVar1 = RiftUtils::IsZombossLevelVictory();
  }
  iVar2 = RiftUtils::GetDifficultyForNextLevel();
  RiftUtils::AddZombossWinLossRecord((bool)uVar1,iVar2);
  if (*(int *)(this + 0x34) != 0) {
    return;
  }
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  PlayerInfo::IncrementZombossFightCount(this_00);
  return;
}


/* RiftOutro::showZombossPrize() */

void __thiscall RiftOutro::showZombossPrize(RiftOutro *this)

{
  *(undefined4 *)(this + 0x30) = 8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftOutro::startBoardFade() */

void __thiscall RiftOutro::startBoardFade(RiftOutro *this)

{
  undefined8 uVar1;
  Insets aIStack_60 [16];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x30) = 9;
  local_8 = ___stack_chk_guard;
  uVar1 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Insets::Insets(aIStack_60,0xff,0xff,0xff,0xff);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBoardFadeDone);
  Sexy::Delegate0::Delegate0<RiftOutro,void(RiftOutro::*)()>(aDStack_38,aCStack_50);
  Board::StartBoardFade((Board *)0x3f800000,uVar1,aIStack_60,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftOutro::PennyPerkChooseEnd() */

void __thiscall RiftOutro::PennyPerkChooseEnd(RiftOutro *this)

{
  undefined8 uVar1;
  Insets aIStack_60 [16];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long lStack_8;
  
  *(undefined4 *)(this + 0x30) = 9;
  lStack_8 = ___stack_chk_guard;
  uVar1 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Insets::Insets(aIStack_60,0xff,0xff,0xff,0xff);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBoardFadeDone);
  Sexy::Delegate0::Delegate0<RiftOutro,void(RiftOutro::*)()>(aDStack_38,aCStack_50);
  Board::StartBoardFade((Board *)0x3f800000,uVar1,aIStack_60,aDStack_38);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftOutro::dealPostEndPlay(bool) */

void __thiscall RiftOutro::dealPostEndPlay(RiftOutro *this,bool param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  string asStack_30 [8];
  undefined4 local_28;
  int iStack_24;
  int local_20;
  int local_1c;
  uint local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RiftUtils::IsPlayingZombossLevel();
  if (cVar1 != '\0') {
    recordZombossData(this);
  }
  RiftPostEndPlay::RiftPostEndPlay((RiftPostEndPlay *)&local_28);
  local_20 = RiftUtils::GetDifficultyForNextLevel();
  local_20 = local_20 + 1;
  uVar3 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(asStack_30,uVar3);
  iVar2 = RiftUtils::GetRiftWorldIndexOfLevel(asStack_30);
  cVar1 = RiftUtils::IsPlayingZombossLevel();
  if (cVar1 != '\0') {
    iVar2 = local_20 + -1;
  }
  iStack_24 = iVar2;
  cVar1 = RiftUtils::IsPlayingZombossLevel();
  local_28 = 2;
  if (cVar1 == '\0') {
    local_28 = 1;
  }
  uStack_14 = CONCAT31(uStack_14._1_3_,1);
  local_10 = RiftUtils::GetZombossRewardRatio();
  local_18 = (uint)param_1;
  cVar1 = RiftUtils::IsRiftTimedLevel();
  if (cVar1 == '\0') {
    fVar4 = (float)PVZ_T();
    local_1c = 0;
    fVar4 = fVar4 - *(float *)(*(long *)(gLawnApp + 0x9f0) + 0x114);
    if (param_1 == 0) goto LAB_0368e448;
  }
  else {
    Sexy::LazySingleton<RiftValidateMgr>::GetInstance();
    fVar4 = (float)RiftValidateMgr::GetLevelUsedTime();
    local_1c = 0;
    if (!param_1) goto LAB_0368e448;
  }
  local_1c = RiftUtils::GetCurrentLevelScore(fVar4);
LAB_0368e448:
  iVar2 = RiftUtils::GetCurrentLevelMaxScore();
  if (iVar2 < local_1c) {
    local_1c = iVar2;
  }
  local_40 = CONCAT44(uStack_14,local_18);
  local_50 = CONCAT44(iStack_24,local_28);
  uStack_48 = CONCAT44(local_1c,local_20);
  local_38 = local_10;
  RiftUtils::SendPost_EndPlay(&local_50);
  RiftUtils::SetEndLevelScore(local_1c);
  RiftUtils::SetLevelTime(fVar4);
  Sexy::OutputDebugStrF((wchar_t *)"RiftOutro::sendPostEndPlay");
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftOutro::sendPostEndPlay(bool) */

void __thiscall RiftOutro::sendPostEndPlay(RiftOutro *this,bool param_1)

{
  char cVar1;
  
  cVar1 = RiftUtils::IsRiftTimedLevel();
  if (cVar1 == '\0') {
    dealPostEndPlay(this,param_1);
    return;
  }
  this[0xa9] = (RiftOutro)0x1;
  this[0xa8] = (RiftOutro)param_1;
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* RiftOutro::startWinOutro() */

void __thiscall RiftOutro::startWinOutro(RiftOutro *this)

{
  int iVar1;
  PennyTaskManager *this_00;
  
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  this[0x38] = (RiftOutro)0x1;
  this_00 = (PennyTaskManager *)Sexy::LazySingleton<PennyTaskManager>::GetInstancePtr();
  iVar1 = RiftUtils::GetCurrentZPS();
  PennyTaskManager::SetPennyZPS(this_00,iVar1);
  sendPostEndPlay(this,true);
  return;
}


/* RiftOutro::onRiftTimedEventGamePlaySend() */

void __thiscall RiftOutro::onRiftTimedEventGamePlaySend(RiftOutro *this)

{
  if (this[0xa9] == (RiftOutro)0x0) {
    return;
  }
  this[0xa9] = (RiftOutro)0x0;
  dealPostEndPlay(this,(bool)this[0xa8]);
  return;
}


/* RiftOutro::startLossOutro() */

void __thiscall RiftOutro::startLossOutro(RiftOutro *this)

{
  MessageRouter::Broadcast<bool,bool>((MessageRouter *)gMessageRouter,Message::RiftEndOfMatch,false)
  ;
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  this[0x38] = (RiftOutro)0x0;
  sendPostEndPlay(this,false);
  return;
}


/* RiftOutro::RiftOutro() */

void __thiscall RiftOutro::RiftOutro(RiftOutro *this)

{
  undefined4 uVar1;
  
  OutroModule::OutroModule((OutroModule *)this);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_0667ce30;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x38] = (RiftOutro)0x0;
  this[0x39] = (RiftOutro)0x0;
  this[0x3a] = (RiftOutro)0x0;
  ZombossProgressDisplayData::ZombossProgressDisplayData
            ((ZombossProgressDisplayData *)(this + 0x40));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x90));
  this[0xa8] = (RiftOutro)0x0;
  this[0xa9] = (RiftOutro)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  uVar1 = RiftUtils::GetZombossAttemptsMade();
  *(undefined4 *)(this + 0x34) = uVar1;
  return;
}


/* RiftOutro::StaticNew() */

RiftOutro * RiftOutro::StaticNew(void)

{
  RiftOutro *this;
  
  this = ::operator_new(0xb0);
  RiftOutro(this);
  return this;
}


/* RiftOutro::CheckPopPennyPerkBattleStatementChooseUI() */

void __thiscall RiftOutro::CheckPopPennyPerkBattleStatementChooseUI(RiftOutro *this)

{
  int iVar1;
  BonusChallengeModule *this_00;
  long lVar2;
  
  this_00 = BoardHelpers::GetLevelModuleByClass<BonusChallengeModule>();
  if ((this_00 != (BonusChallengeModule *)0x0) &&
     (iVar1 = BonusChallengeModule::CalcCompletedActiveChallenges(this_00), 0 < iVar1)) {
    UISingletonDialog<PennyPerkBattleStatementChooseUI>::ShowDialog();
    lVar2 = UISingletonDialog<PennyPerkBattleStatementChooseUI>::GetSingletonPtr();
    FUN_0368cff0(lVar2 + 0x180,this);
    return;
  }
  startBoardFade(this);
  return;
}


/* RiftOutro::onZombossResultsScreenDismissed() */

void __thiscall RiftOutro::onZombossResultsScreenDismissed(RiftOutro *this)

{
  AdaptorJoustLeagueInfoScreen::onClose(*(AdaptorJoustLeagueInfoScreen **)(this + 0x28));
  *(undefined8 *)(this + 0x28) = 0;
  CheckPopPennyPerkBattleStatementChooseUI(this);
  return;
}


/* RiftOutro::onResultsScreenDismissed() */

void __thiscall RiftOutro::onResultsScreenDismissed(RiftOutro *this)

{
  AdaptorJoustWinStreakDialog::Close(*(AdaptorJoustWinStreakDialog **)(this + 0x18));
  *(undefined8 *)(this + 0x18) = 0;
  CheckPopPennyPerkBattleStatementChooseUI(this);
  return;
}


/* RiftOutro::onPerkScreenDismissed() */

void __thiscall RiftOutro::onPerkScreenDismissed(RiftOutro *this)

{
  AdaptorJoustWinStreakDialog::Close(*(AdaptorJoustWinStreakDialog **)(this + 0x20));
  *(undefined8 *)(this + 0x20) = 0;
  CheckPopPennyPerkBattleStatementChooseUI(this);
  return;
}


/* RiftOutro::~RiftOutro() */

void __thiscall RiftOutro::~RiftOutro(RiftOutro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667ce30;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  AwardDiffSet::~AwardDiffSet((AwardDiffSet *)(this + 0x90));
  ZombossProgressDisplayData::~ZombossProgressDisplayData
            ((ZombossProgressDisplayData *)(this + 0x40));
  OutroModule::~OutroModule((OutroModule *)this);
  return;
}


/* RiftOutro::~RiftOutro() */

void __thiscall RiftOutro::~RiftOutro(RiftOutro *this)

{
  ~RiftOutro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftOutro::showZombossResultsScreen(bool) */

void __thiscall RiftOutro::showZombossResultsScreen(RiftOutro *this,bool param_1)

{
  AdaptorRiftResultsScreen *this_00;
  char *pcVar1;
  RtMixedPtr aRStack_b8 [8];
  RtId aRStack_b0 [8];
  string asStack_a8 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_a0 [72];
  AdaptorRiftResultsScreenParams local_58;
  RiftOutro local_57;
  RtReflectionDelegate<Sexy::Delegate1<Plant*>> aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x30) = 7;
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x188);
  AdaptorRiftResultsScreen::AdaptorRiftResultsScreen(this_00);
  *(AdaptorRiftResultsScreen **)(this + 0x18) = this_00;
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_00);
  AdaptorRiftResultsScreenParams::AdaptorRiftResultsScreenParams(&local_58);
  local_57 = this[0x39];
  local_58 = (AdaptorRiftResultsScreenParams)param_1;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_b8);
  std::string::string(asStack_a8,"onResultZombossNormalDismissed");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_a0,aRStack_b0,asStack_a8);
  RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
            (aRStack_50,(RtReflectionDelegate *)aRStack_a0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_a0);
  std::string::~string(asStack_a8);
  nop();
  Sexy::RtId::~RtId(aRStack_b0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
  AdaptorRiftResultsScreen::SetParams(*(AdaptorRiftResultsScreen **)(this + 0x18),&local_58);
  AdaptorRiftResultsScreenParams::~AdaptorRiftResultsScreenParams(&local_58);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Rift_Battle_Zomboss_Won");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftOutro::showResultsScreen(bool) */

void __thiscall RiftOutro::showResultsScreen(RiftOutro *this,bool param_1)

{
  char cVar1;
  AdaptorRiftResultsScreen *this_00;
  char *pcVar2;
  RtMixedPtr aRStack_b8 [8];
  RtId aRStack_b0 [8];
  string asStack_a8 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_a0 [72];
  AdaptorRiftResultsScreenParams local_58;
  RiftOutro local_57;
  RtReflectionDelegate<Sexy::Delegate1<Plant*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x30) = 4;
  this_00 = ::operator_new(0x188);
  AdaptorRiftResultsScreen::AdaptorRiftResultsScreen(this_00);
  *(AdaptorRiftResultsScreen **)(this + 0x18) = this_00;
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_00);
  AdaptorRiftResultsScreenParams::AdaptorRiftResultsScreenParams(&local_58);
  local_57 = this[0x39];
  local_58 = (AdaptorRiftResultsScreenParams)param_1;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_b8);
  std::string::string(asStack_a8,"onResultsScreenDismissed");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_a0,aRStack_b0,asStack_a8);
  RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
            (aRStack_50,(RtReflectionDelegate *)aRStack_a0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_a0);
  std::string::~string(asStack_a8);
  nop();
  Sexy::RtId::~RtId(aRStack_b0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
  AdaptorRiftResultsScreen::SetParams(*(AdaptorRiftResultsScreen **)(this + 0x18),&local_58);
  cVar1 = RiftUtils::ShouldGiveFirstClearRewards();
  if (cVar1 != '\0') {
    RiftUtils::GiveFirstClearRewards();
  }
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Rift_Battle_Won");
  AdaptorRiftResultsScreenParams::~AdaptorRiftResultsScreenParams(&local_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftOutro::showPerkScreen() */

void __thiscall RiftOutro::showPerkScreen(RiftOutro *this)

{
  AdaptorRiftPerkProgressScreen *this_00;
  char *pcVar1;
  RtMixedPtr aRStack_b0 [8];
  RtId aRStack_a8 [8];
  string asStack_a0 [8];
  AdaptorRiftPerkProgressScreenParams aAStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x30) = 6;
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x168);
  AdaptorRiftPerkProgressScreen::AdaptorRiftPerkProgressScreen(this_00);
  *(AdaptorRiftPerkProgressScreen **)(this + 0x20) = this_00;
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_00);
  AdaptorRiftPerkProgressScreenParams::AdaptorRiftPerkProgressScreenParams(aAStack_98);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_b0);
  std::string::string(asStack_a0,"onPerkScreenDismissed");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_50,aRStack_a8,asStack_a0);
  RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)aAStack_98,
             (RtReflectionDelegate *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_a0);
  nop();
  Sexy::RtId::~RtId(aRStack_a8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
  AdaptorRiftPerkProgressScreen::SetParams
            (*(AdaptorRiftPerkProgressScreen **)(this + 0x20),aAStack_98);
  AdaptorRiftPerkProgressScreen::AnimateProgressBar
            (*(AdaptorRiftPerkProgressScreen **)(this + 0x20));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Perk_Update");
  std::_Destroy<RtReflectionDelegate<Sexy::Delegate1<bool>>>((RtReflectionDelegate *)aAStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftOutro::onResultZombossNormalDismissed() */

void __thiscall RiftOutro::onResultZombossNormalDismissed(RiftOutro *this)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  AdaptorRiftZombossProgress *this_00;
  undefined1 auVar4 [16];
  bool local_15a;
  bool local_159;
  bool local_158;
  bool bStack_157;
  bool bStack_156;
  bool bStack_155;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  RtMixedPtr aRStack_148 [8];
  RtId aRStack_140 [8];
  _Bit_reference local_138 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_128 [72];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d7;
  RtReflectionDelegate<Sexy::Delegate1<Plant*>> aRStack_d0 [120];
  ZombossProgressDisplayData aZStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AdaptorJoustWinStreakDialog::Close(*(AdaptorJoustWinStreakDialog **)(this + 0x18));
  *(undefined8 *)(this + 0x18) = 0;
  local_138 = (_Bit_reference  [16])FUN_0368d184(*(undefined8 *)(this + 0x68));
  bVar1 = std::_Bit_reference::operator_cast_to_bool(local_138);
  auVar4 = FUN_0368d184(*(undefined8 *)(this + 0x68),1);
  local_138 = (_Bit_reference  [16])auVar4;
  bVar2 = std::_Bit_reference::operator_cast_to_bool(local_138);
  auVar4 = FUN_0368d184(*(undefined8 *)(this + 0x68),2);
  local_138 = (_Bit_reference  [16])auVar4;
  bVar3 = std::_Bit_reference::operator_cast_to_bool(local_138);
  RiftUtils::GetZombossWinLossData(0,&bStack_157,&local_15a,&iStack_154);
  RiftUtils::GetZombossWinLossData(1,&bStack_156,&local_159,&iStack_150);
  RiftUtils::GetZombossWinLossData(2,&bStack_155,&local_158,&iStack_14c);
  if ((bVar2 && bVar1) && (bVar3)) {
    this_00 = ::operator_new(0x230);
    AdaptorRiftZombossProgress::AdaptorRiftZombossProgress(this_00);
    *(AdaptorRiftZombossProgress **)(this + 0x28) = this_00;
    AdaptorRiftZombossProgressParams::AdaptorRiftZombossProgressParams
              ((AdaptorRiftZombossProgressParams *)&local_e0);
    local_e0 = *(undefined4 *)(this + 0x34);
    local_dc = RiftUtils::GetDifficultyForNextLevel();
    local_d7 = 1;
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_148);
    std::string::string((string *)local_138,"onZombossResultsScreenDismissed");
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_128,aRStack_140,local_138);
    RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
              (aRStack_d0,(RtReflectionDelegate *)aRStack_128);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_128);
    std::string::~string((string *)local_138);
    nop();
    Sexy::RtId::~RtId(aRStack_140);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_148);
    ZombossProgressDisplayData::operator=(aZStack_58,(ZombossProgressDisplayData *)(this + 0x40));
    AdaptorRiftZombossProgress::SetParams
              (*(AdaptorRiftZombossProgress **)(this + 0x28),
               (AdaptorRiftZombossProgressParams *)&local_e0);
    HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x28));
    AdaptorRiftZombossProgressParams::~AdaptorRiftZombossProgressParams
              ((AdaptorRiftZombossProgressParams *)&local_e0);
  }
  else {
    CheckPopPennyPerkBattleStatementChooseUI(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftOutro::registerForEvents() */

void __thiscall RiftOutro::registerForEvents(RiftOutro *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startWinOutro);
  Sexy::Delegate0::Delegate0<RiftOutro,void(RiftOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startLossOutro);
  Sexy::Delegate0::Delegate0<RiftOutro,void(RiftOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLossOutroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<RiftOutro,void(RiftOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRiftNetworkResponse);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::Subscribe<int,int,Sexy::CBMemberTranslatorX<RiftOutro,void(RiftOutro::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::RiftNetworkResponseReceived,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRiftTimedEventGamePlaySend);
  Sexy::Delegate0::Delegate0<RiftOutro,void(RiftOutro::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::RiftTimedEventGamePlaySend,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftOutro::onUpdate() */

void __thiscall RiftOutro::onUpdate(RiftOutro *this)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  vector *pvVar4;
  int *piVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  UIPopChestWidget *this_00;
  ulong uVar9;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  long local_8;
  
  iVar1 = *(int *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 2) {
    *(undefined4 *)(this + 0x30) = 10;
    if (this[0x38] == (RiftOutro)0x0) {
      *(undefined4 *)(this + 0x30) = 3;
    }
    else {
      pvVar4 = (vector *)RiftUtils::GetLevelEndFirstClearRewards();
      std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::vector
                ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)&local_88,pvVar4);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_70);
      uVar9 = 0;
      while( true ) {
        uVar2 = local_88;
        uVar7 = FUN_0368d004(local_88,local_80);
        if (uVar7 <= uVar9) break;
        piVar5 = (int *)FUN_0368d010(uVar2,uVar9);
        ProfileChangeItemAmount(*piVar5,piVar5[1],false);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
        Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_38);
        puVar6 = (undefined4 *)FUN_0368d010(local_88,uVar9);
        local_38 = *puVar6;
        local_34 = puVar6[1];
        std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
                  ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_70,
                   (S2C_BonusInfo *)&local_38);
        uVar9 = uVar9 + 1;
      }
      lVar8 = FUN_0368d018(local_70,local_68);
      if (lVar8 == 0) {
        *(undefined4 *)(this + 0x30) = 3;
      }
      else {
        std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
                  ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_38,
                   (vector *)&local_70);
        this_00 = (UIPopChestWidget *)
                  UIPopChestWidget::Create
                            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_38);
        std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
                  ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_38);
        FUN_0368d45c(afStack_58,this_00,this);
        UIPopChestWidget::setEndCallBack(this_00,(function *)afStack_58);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
      }
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
                ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_70);
      std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::~vector
                ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)&local_88);
    }
  }
  else if (iVar1 == 3) {
    cVar3 = RiftUtils::IsPlayingZombossLevel();
    if (cVar3 == '\0') {
      showResultsScreen(this,(bool)this[0x38]);
    }
    else {
      showZombossResultsScreen(this,(bool)this[0x38]);
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(this + 0x30) = 2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftOutro::awardZombossPrize() */

void RiftOutro::awardZombossPrize(void)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long in_x0;
  CoinBank *this;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  AwardSet *extraout_x1;
  int in_w3;
  GeneralAwardSet aGStack_88 [32];
  GeneralAwardSet aGStack_68 [32];
  GeneralAwardSet aGStack_48 [32];
  AwardDiffSet aAStack_28 [32];
  long local_8;
  
  uVar1 = *(uint *)(in_x0 + 0x34);
  local_8 = ___stack_chk_guard;
  bVar2 = *(byte *)(in_x0 + 0x38);
  bVar3 = (bool)RiftUtils::GetDifficultyForNextLevel();
  RiftUtils::CalcZombossFlattenedBaseAwardSet((RiftUtils *)(ulong)uVar1,(uint)bVar2,bVar3,in_w3);
  uVar1 = *(uint *)(in_x0 + 0x34);
  bVar2 = *(byte *)(in_x0 + 0x38);
  bVar3 = (bool)RiftUtils::GetDifficultyForNextLevel();
  RiftUtils::CalcZombossFlattenedVictoryAwardSet((RiftUtils *)(ulong)uVar1,(uint)bVar2,bVar3,in_w3);
  GeneralAwardSet::GeneralAwardSet(aGStack_48,aGStack_88);
  if (*(char *)(in_x0 + 0x38) != '\0') {
    GeneralAwardSet::Add(aGStack_48,(AwardSet *)aGStack_68);
    GeneralAwardSet::GenerateFlattenedAwardSet(aGStack_48,extraout_x1);
    GeneralAwardSet::operator=(aGStack_48,(GeneralAwardSet *)aAStack_28);
    GeneralAwardSet::~GeneralAwardSet((GeneralAwardSet *)aAStack_28);
  }
  AwardDiffSet::AwardDiffSet(aAStack_28,(AwardSet *)aGStack_48);
  AwardDiffSet::operator=((AwardDiffSet *)(in_x0 + 0x90),aAStack_28);
  AwardDiffSet::~AwardDiffSet(aAStack_28);
  iVar5 = *(int *)(in_x0 + 0x34);
  iVar4 = Reflection::RFunctionType::StaticGetTypeCategory();
  if (iVar4 + -1 <= iVar5) {
    RiftUtils::ClearZombossWinLossRecord();
    iVar5 = RiftUtils::GetZombossSignalResetValue();
    RiftUtils::ResetZombossSignalWithAdditionalValue(iVar5);
    RiftUtils::FlagZombossCompletion();
  }
  std::string::string((string *)aAStack_28,"UICoinBank");
  UIWidget::GetWidgetBySheetName((string *)aAStack_28);
  nop();
  std::string::~string((string *)aAStack_28);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this != (CoinBank *)0x0) {
    iVar5 = PlayerInfo::GetNumCoins(this_01,false);
    CoinBank::SetFakeCurrencyAmount(this,iVar5);
  }
  nop();
  GeneralAwardSet::~GeneralAwardSet(aGStack_48);
  GeneralAwardSet::~GeneralAwardSet(aGStack_68);
  GeneralAwardSet::~GeneralAwardSet(aGStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftOutro::tryAwardRiftWin() */

void __thiscall RiftOutro::tryAwardRiftWin(RiftOutro *this)

{
  char cVar1;
  RiftOutro RVar2;
  int iVar3;
  ProfileMgr *this_00;
  bool local_6a;
  bool local_69;
  bool local_68;
  bool local_67;
  bool local_66;
  bool local_65;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  ZombossProgressDisplayData aZStack_58 [40];
  vector<bool,std::allocator<bool>> avStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RiftUtils::IsPlayingZombossLevel();
  if ((cVar1 == '\0') && (this[0x38] != (RiftOutro)0x0)) {
    cVar1 = RiftUtils::ShouldUseZPSBackupReward();
    if (cVar1 == '\0') {
      iVar3 = RiftUtils::GetDifficultyForNextLevel();
      RiftUtils::CalcZPSSignalGained(iVar3);
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::GetCurrentProfile(this_00);
      nop();
      RVar2 = (RiftOutro)RiftUtils::IsZombossUnlocked();
      this[0x39] = RVar2;
    }
    else {
      nop();
    }
  }
  cVar1 = RiftUtils::IsPlayingZombossLevel();
  if (cVar1 != '\0') {
    RiftUtils::GetZombossWinLossData(0,&local_6a,&local_69,&iStack_64);
    RiftUtils::GetZombossWinLossData(1,&local_68,&local_67,&iStack_60);
    RiftUtils::GetZombossWinLossData(2,&local_66,&local_65,&iStack_5c);
    ZombossProgressDisplayData::ZombossProgressDisplayData(aZStack_58);
    std::vector<bool,std::allocator<bool>>::push_back
              ((vector<bool,std::allocator<bool>> *)aZStack_58,local_69);
    std::vector<bool,std::allocator<bool>>::push_back
              ((vector<bool,std::allocator<bool>> *)aZStack_58,local_67);
    std::vector<bool,std::allocator<bool>>::push_back
              ((vector<bool,std::allocator<bool>> *)aZStack_58,local_65);
    std::vector<bool,std::allocator<bool>>::push_back(avStack_30,local_6a);
    std::vector<bool,std::allocator<bool>>::push_back(avStack_30,local_68);
    std::vector<bool,std::allocator<bool>>::push_back(avStack_30,local_66);
    ZombossProgressDisplayData::operator=((ZombossProgressDisplayData *)(this + 0x40),aZStack_58);
    awardZombossPrize();
    ZombossProgressDisplayData::~ZombossProgressDisplayData(aZStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftOutro::tryAward() */

void __thiscall RiftOutro::tryAward(RiftOutro *this)

{
  if (this[0x3a] == (RiftOutro)0x0) {
    tryAwardRiftWin(this);
  }
  this[0x3a] = (RiftOutro)0x1;
  return;
}


/* RiftOutro::onSuccessResponse() */

void __thiscall RiftOutro::onSuccessResponse(RiftOutro *this)

{
  tryAward(this);
  if (this[0x38] != (RiftOutro)0x0) {
    MessageRouter::Broadcast<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::RiftEndOfMatch,true);
  }
  *(undefined4 *)(this + 0x30) = 1;
  return;
}


/* RiftOutro::onRiftNetworkResponse(int, int) */

void __thiscall RiftOutro::onRiftNetworkResponse(RiftOutro *this,int param_1,int param_2)

{
  Sexy::OutputDebugStrF((wchar_t *)"RiftOutro::onRiftNetworkResponse context=%d status=%d");
  if (param_1 == 7) {
    if (param_2 == 2) {
      onSuccessResponse(this);
      return;
    }
    if (param_2 == 4) {
      JoustUtils::ShowJoustNetworkIssuePopup(1,7);
      return;
    }
  }
  return;
}

