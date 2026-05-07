// Class: EASquaredRewardHelper


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredRewardHelper::ShowCoinRewardsForAdCompletion(EASquaredAdFinishedReason::EASquaredAdFinishedReason,
   int) */

void EASquaredRewardHelper::ShowCoinRewardsForAdCompletion(int param_1,undefined4 param_2)

{
  TimeChallengeEndLevelUI *this;
  PVZ2UIAwardScreen *this_00;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    sm_numCoinsToRewardForCompletion = param_2;
    this_00 = ::operator_new(0x1a0);
    PVZ2UIAwardScreen::PVZ2UIAwardScreen(this_00);
    m_awardScreen = this_00;
    PVZ2UIAwardScreen::ShowAwardScreen(this_00);
    PVZ2UIAwardScreen::SetBackgroundType(m_awardScreen,1);
    PirateStage::ShowGuides((PirateStage *)m_awardScreen,true);
    this = (TimeChallengeEndLevelUI *)m_awardScreen;
    local_40 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)onCoinAwardScreenDismissed);
    Sexy::Delegate0::Delegate0<void(*)()>(aDStack_38,(CBFunctionTranslatorX *)&local_40);
    TimeChallengeEndLevelUI::SetContinueCallBack(this,aDStack_38);
    PVZ2UIAwardScreen::Start(m_awardScreen);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredRewardHelper::onCoinAwardScreenDismissed() */

void EASquaredRewardHelper::onCoinAwardScreenDismissed(void)

{
  char *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (m_awardScreen != (PVZ2UIAwardScreen *)0x0) {
    PVZ2UIAwardScreen::KillAwardScreen(m_awardScreen);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,m_awardScreen);
  }
  if (0 < sm_numCoinsToRewardForCompletion) {
    std::string::string(asStack_10,"");
    AwardsGranter::GiveAward(0xb,asStack_10,sm_numCoinsToRewardForCompletion,9,1);
    std::string::~string(asStack_10);
    nop();
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Give_Coins");
    sm_numCoinsToRewardForCompletion = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

