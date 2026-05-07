// Class: JoustOutro


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustOutro::StaticClassInit() */

void JoustOutro::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustOutro");
    (*pcVar2)(plVar1,asStack_10,FUN_03885f9c,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustOutro::StaticGetClass() */

long * JoustOutro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"JoustOutro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustOutro::giveCrowns() */

int JoustOutro::giveCrowns(void)

{
  int iVar1;
  
  iVar1 = JoustUtils::GetLevelEndCrownAward();
  JoustUtils::CheatPlayerAddCrowns(iVar1);
  return iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustOutro::onJoustNetworkIssueDecision(int, int) */

void __thiscall JoustOutro::onJoustNetworkIssueDecision(JoustOutro *this,int param_1,int param_2)

{
  function<void(Sexy::Graphics*)> afStack_48 [32];
  function<void(Sexy::Graphics*)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    std::function<void(Sexy::Graphics*)>::function(afStack_48);
    std::function<void(Sexy::Graphics*)>::function(afStack_28);
    JoustUtils::SendAPIPostCompleteMatch(afStack_48,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)afStack_48);
  }
  else if (param_2 == 1) {
    Board::NotifyOutroComplete(*(Board **)(gLawnApp + 0x9f0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustOutro::startWinOutro() */

void __thiscall JoustOutro::startWinOutro(JoustOutro *this)

{
  long lVar1;
  function<void(Sexy::Graphics*)> afStack_48 [32];
  function<void(Sexy::Graphics*)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::function<void(Sexy::Graphics*)>::function(afStack_48);
  std::function<void(Sexy::Graphics*)>::function(afStack_28);
  JoustUtils::SendAPIPostCompleteMatch(afStack_48,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_48);
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  lVar1 = ___stack_chk_guard;
  this[0x99] = (JoustOutro)0x1;
  this[0x98] = (JoustOutro)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustOutro::startLossOutro() */

void __thiscall JoustOutro::startLossOutro(JoustOutro *this)

{
  long lVar1;
  function<void(Sexy::Graphics*)> afStack_48 [32];
  function<void(Sexy::Graphics*)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::function<void(Sexy::Graphics*)>::function(afStack_48);
  std::function<void(Sexy::Graphics*)>::function(afStack_28);
  JoustUtils::SendAPIPostCompleteMatch(afStack_48,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_48);
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  JoustUtils::CheatResetWinStreak();
  this[0x99] = (JoustOutro)0x0;
  lVar1 = ___stack_chk_guard;
  this[0x98] = (JoustOutro)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustOutro::recordLevelEnd(bool) */

void JoustOutro::recordLevelEnd(bool param_1)

{
  int iVar1;
  
  iVar1 = giveCrowns();
  MessageRouter::Broadcast<int,int>((MessageRouter *)gMessageRouter,Message::JoustEndOfMatch,iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustOutro::showWinStreakDisplay() */

void __thiscall JoustOutro::showWinStreakDisplay(JoustOutro *this)

{
  AdaptorJoustWinStreakDialog *this_00;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x168);
  memset(this_00,0,0x168);
  AdaptorJoustWinStreakDialog::AdaptorJoustWinStreakDialog(this_00);
  *(AdaptorJoustWinStreakDialog **)(this + 0x20) = this_00;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onWinStreakDismissed");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_50,aRStack_60,asStack_58);
  AdaptorJoustWinStreakDialog::Setup(this_00,(RtReflectionDelegate *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x20));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustOutro::onResultsScreenDismissed() */

void __thiscall JoustOutro::onResultsScreenDismissed(JoustOutro *this)

{
  AdaptorJoustWinStreakDialog::Close(*(AdaptorJoustWinStreakDialog **)(this + 0x18));
  if (*(int *)(this + 0x38) != 0) {
    showWinStreakDisplay(this);
    return;
  }
  Board::NotifyOutroComplete(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustOutro::JoustOutro() */

void __thiscall JoustOutro::JoustOutro(JoustOutro *this)

{
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  OutroModule::OutroModule((OutroModule *)this);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_066aeba0;
  LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType
            ((LevelOfTheDay_RewardItemType *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x80));
  this[0x98] = (JoustOutro)0x0;
  this[0x99] = (JoustOutro)0x0;
  Sexy::PIInterpolator::PIInterpolator(aPStack_20);
  AwardDiffSet::operator=((AwardDiffSet *)(this + 0x80),(AwardDiffSet *)aPStack_20);
  AwardDiffSet::~AwardDiffSet((AwardDiffSet *)aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustOutro::StaticNew() */

JoustOutro * JoustOutro::StaticNew(void)

{
  JoustOutro *this;
  
  this = ::operator_new(0xa0);
  JoustOutro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustOutro::registerForEvents() */

void __thiscall JoustOutro::registerForEvents(JoustOutro *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
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
  Sexy::Delegate0::Delegate0<JoustOutro,void(JoustOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startLossOutro);
  Sexy::Delegate0::Delegate0<JoustOutro,void(JoustOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLossOutroStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onJoustNetworkResponse);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<JoustOutro,void(JoustOutro::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::JoustNetworkResponseReceived,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onJoustNetworkIssueDecision);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<JoustOutro,void(JoustOutro::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::JoustNetworkIssueDecision,&local_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustOutro::onAwardScreenDismissed() */

void __thiscall JoustOutro::onAwardScreenDismissed(JoustOutro *this)

{
  bool bVar1;
  PVZ2UIAwardScreen *this_00;
  long lVar2;
  UIChestAward *this_01;
  LawnApp *pLVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  string asStack_40 [24];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x38) == 0x26) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_40);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x68));
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x68));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1)
    {
      lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      local_48 = *(undefined4 *)(lVar2 + 0x38);
      local_44 = *(undefined4 *)(lVar2 + 0x28);
      std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::push_back
                ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)asStack_40,
                 (ChestAwardContent *)&local_48);
      eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
                ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_58);
    }
    std::string::string((string *)&local_48,"effects/ChestHardLevel_Chest");
    this_01 = (UIChestAward *)
              UIChestAward::create
                        ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_40
                         ,(string *)&local_48);
    std::string::~string((string *)&local_48);
    nop();
    if (this_01 != (UIChestAward *)0x0) {
      FUN_0388598c(afStack_28,this_01);
      UIChestAward::setEndCallBack(this_01,(function *)afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    }
    std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::~vector
              ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)asStack_40);
  }
  else {
    Board::NotifyOutroComplete(*(Board **)(gLawnApp + 0x9f0));
    pLVar3 = gLawnApp;
    this_00 = (PVZ2UIAwardScreen *)
              FUN_0388551c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8));
    if (this_00 != (PVZ2UIAwardScreen *)0x0) {
      PVZ2UIAwardScreen::KillAwardScreen(this_00);
      pLVar3 = gLawnApp;
    }
    std::string::string(asStack_40,"UI_Joust");
    LawnApp::DeleteGroup(pLVar3,asStack_40);
    std::string::~string(asStack_40);
    nop();
    pLVar3 = gLawnApp;
    std::string::string(asStack_40,"UI_TicketBank");
    LawnApp::DeleteGroup(pLVar3,asStack_40);
    std::string::~string(asStack_40);
    nop();
    pLVar3 = gLawnApp;
    std::string::string(asStack_40,"UI_Joust_Reward");
    LawnApp::DeleteGroup(pLVar3,asStack_40);
    std::string::~string(asStack_40);
    nop();
    pLVar3 = gLawnApp;
    std::string::string(asStack_40,"UI_Fragment_Material");
    LawnApp::DeleteGroup(pLVar3,asStack_40);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustOutro::showAwardScreen() */

void __thiscall JoustOutro::showAwardScreen(JoustOutro *this)

{
  LawnApp *pLVar1;
  int iVar2;
  int extraout_w0;
  PVZ2UIAwardScreen *this_00;
  Board *this_01;
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x38) == 0) {
    Board::NotifyOutroComplete(*(Board **)(gLawnApp + 0x9f0));
  }
  else {
    std::string::string(asStack_50,"UI_Joust");
    LawnApp::LoadGroup(pLVar1,asStack_50);
    std::string::~string(asStack_50);
    nop();
    pLVar1 = gLawnApp;
    std::string::string(asStack_50,"UI_TicketBank");
    LawnApp::LoadGroup(pLVar1,asStack_50);
    std::string::~string(asStack_50);
    nop();
    pLVar1 = gLawnApp;
    std::string::string(asStack_50,"UI_Joust_Reward");
    LawnApp::LoadGroup(pLVar1,asStack_50);
    std::string::~string(asStack_50);
    nop();
    pLVar1 = gLawnApp;
    std::string::string(asStack_50,"UI_Fragment_Material");
    LawnApp::LoadGroup(pLVar1,asStack_50);
    std::string::~string(asStack_50);
    nop();
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    this_00 = (PVZ2UIAwardScreen *)FUN_0388551c(*(undefined8 *)(this_01 + 0xac8));
    switch(*(undefined4 *)(this + 0x38)) {
    case 0xb:
      PVZ2UIAwardScreen::AddJoustCoinReward(this_00,*(int *)(this + 0x50));
      break;
    case 0xc:
      PVZ2UIAwardScreen::AddJoustGemReward(this_00,*(int *)(this + 0x50));
      break;
    default:
      Board::NotifyOutroComplete(this_01);
      goto LAB_03886e8c;
    case 0x22:
      PVZ2UIAwardScreen::AddJoustGemReward(this_00,*(int *)(this + 0x50));
      break;
    case 0x23:
      PVZ2UIAwardScreen::AddJoustCHCoinReward(this_00,*(int *)(this + 0x50));
      break;
    case 0x25:
      PVZ2UIAwardScreen::AddJoustCHMaterialReward
                (this_00,*(int *)(this + 0x60),*(int *)(this + 0x50),false);
      break;
    case 0x26:
      iVar2 = FUN_0388557c(*(undefined8 *)(this + 0x68),*(undefined8 *)(this + 0x70));
      PVZ2UIAwardScreen::AddJoustCHChestReward(this_00,iVar2);
    }
    PVZ2UIAwardScreen::ShowAwardScreen(this_00);
    nop();
    UIHappyVaseBreaker::SetResetHammerNeed((UIHappyVaseBreaker *)this_00,extraout_w0);
    iVar2 = PVZ2UIAwardScreen::GetScreenCount(this_00);
    if (iVar2 < 1) {
      onAwardScreenDismissed(this);
    }
    else {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onAwardScreenDismissed);
      Sexy::Delegate0::Delegate0<JoustOutro,void(JoustOutro::*)()>(aDStack_38,asStack_50);
      TimeChallengeEndLevelUI::SetContinueCallBack((TimeChallengeEndLevelUI *)this_00,aDStack_38);
      PVZ2UIAwardScreen::Start(this_00);
    }
  }
LAB_03886e8c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustOutro::onWinStreakDismissed() */

void __thiscall JoustOutro::onWinStreakDismissed(JoustOutro *this)

{
  AdaptorJoustWinStreakDialog::Close(*(AdaptorJoustWinStreakDialog **)(this + 0x20));
  showAwardScreen(this);
  return;
}


/* JoustOutro::~JoustOutro() */

void __thiscall JoustOutro::~JoustOutro(JoustOutro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066aeba0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  AwardDiffSet::~AwardDiffSet((AwardDiffSet *)(this + 0x80));
  std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::~vector
            ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
             (this + 0x68));
  LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType
            ((LevelOfTheDay_RewardItemType *)(this + 0x28));
  OutroModule::~OutroModule((OutroModule *)this);
  return;
}


/* JoustOutro::~JoustOutro() */

void __thiscall JoustOutro::~JoustOutro(JoustOutro *this)

{
  ~JoustOutro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustOutro::giveAwards() */

void __thiscall JoustOutro::giveAwards(JoustOutro *this)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  LevelOfTheDay_RewardItemType *pLVar6;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  LevelOfTheDay_RewardItemType aLStack_48 [16];
  undefined4 local_38;
  undefined4 local_20;
  undefined4 local_10;
  JoustUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  JoustUtils::GetLevelEndStreakRewards(___stack_chk_guard);
  cVar1 = std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
          empty((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *
                )&local_60);
  if (cVar1 == '\0') {
    uVar3 = FUN_0388557c(local_60,local_58);
    if (uVar3 < 2) {
      pLVar6 = (LevelOfTheDay_RewardItemType *)FUN_0388570c(local_60);
      LevelOfTheDay_RewardItemType::operator=((LevelOfTheDay_RewardItemType *)(this + 0x28),pLVar6);
    }
    else {
      LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType(aLStack_48);
      uVar4 = JoustUtils::GetAwardInfoByActId(0x59f5);
      local_38 = (undefined4)uVar4;
      local_10 = (undefined4)((ulong)uVar4 >> 0x20);
      local_20 = (undefined4)uVar3;
      LevelOfTheDay_RewardItemType::operator=
                ((LevelOfTheDay_RewardItemType *)(this + 0x28),aLStack_48);
      std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
      operator=((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *
                )(this + 0x68),(vector *)&local_60);
      LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType(aLStack_48);
    }
    lVar5 = FUN_0388557c(*(undefined8 *)(this + 0x68),*(undefined8 *)(this + 0x70));
    if (lVar5 == 0) {
      ProfileChangeItemAmount(*(int *)(this + 0x60),*(int *)(this + 0x50),false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)aLStack_48);
    }
    else {
      local_70 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x68));
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x68));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68),
            bVar2) {
        lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
        ProfileChangeItemAmount(*(int *)(lVar5 + 0x38),*(int *)(lVar5 + 0x28),false);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)aLStack_48);
        eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
                  ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_70);
      }
    }
    JoustUtils::ClearLevelEndAward();
    std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::~vector
              ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
               &local_60);
  }
  else {
    std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::~vector
              ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
               &local_60);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustOutro::showResultsScreen(bool, int, int) */

void __thiscall JoustOutro::showResultsScreen(JoustOutro *this,bool param_1,int param_2,int param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  AdaptorJoustResultsScreen *this_00;
  long lVar8;
  UINewPVPTopZombieQueue *this_01;
  long lVar9;
  long lVar10;
  NameMapperBase *pNVar11;
  string *psVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  char *pcVar18;
  PlayerInfo *this_02;
  TGALogMgr *pTVar19;
  undefined8 uVar20;
  size_t __n;
  RtMixedPtr *__n_00;
  undefined1 *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  int local_378;
  int local_374 [3];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_368 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_350 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_338 [24];
  RtMixedPtr aRStack_320 [24];
  undefined4 local_308 [6];
  uint local_2f0;
  undefined4 uStack_2ec;
  int local_2e8;
  undefined4 uStack_2e4;
  TGALogJoustData aTStack_2b0 [8];
  string asStack_2a8 [64];
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [64];
  undefined1 auStack_220 [8];
  AdaptorJoustResultsScreenParams local_218 [4];
  undefined4 local_214;
  RtReflectionDelegate<Sexy::Delegate1<Plant*>> aRStack_210 [72];
  undefined1 auStack_1c8 [8];
  int local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 auStack_1a0 [8];
  int local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined8 local_188;
  RtReflectionDelegate<Sexy::Delegate0> aRStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_378 = param_3;
  local_374[0] = param_2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_368);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_350);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_338);
  local_2f0 = (uint)param_1;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_368,(int *)&local_2f0);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_368,local_374);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_368,&local_378);
  iVar5 = JoustUtils::PlayerGetCrowns();
  iVar6 = JoustUtils::GetLevelEndCrownAward();
  local_2f0 = iVar5 - iVar6;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_368,(int *)&local_2f0);
  local_2f0 = JoustUtils::PlayerGetCrowns();
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_368,(int *)&local_2f0);
  this_00 = ::operator_new(0x238);
  AdaptorJoustResultsScreen::AdaptorJoustResultsScreen(this_00);
  *(AdaptorJoustResultsScreen **)(this + 0x18) = this_00;
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_00);
  AdaptorJoustResultsScreen::EnableFullScreenDismiss
            (*(AdaptorJoustResultsScreen **)(this + 0x18),false);
  AdaptorJoustResultsScreenParams::AdaptorJoustResultsScreenParams(local_218);
  local_218[0] = (AdaptorJoustResultsScreenParams)param_1;
  local_214 = JoustUtils::GetLevelEndCrownAward();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_320);
  std::string::string((string *)&local_2f0,"onResultsScreenDismissed");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            (aRStack_178,(RtId *)local_308,(string *)&local_2f0);
  RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
            (aRStack_210,(RtReflectionDelegate *)aRStack_178);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_178);
  std::string::~string((string *)&local_2f0);
  nop();
  Sexy::RtId::~RtId((RtId *)local_308);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_320);
  local_1c0 = local_374[0];
  FUN_054772c4(auStack_1c8,L"[JOUST_LOCAL_PLAYER_NAME]");
  lVar8 = JoustUtils::GetLocalPlayerData();
  local_1bc = *(undefined4 *)(lVar8 + 0xc);
  this_01 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this_01 != (UINewPVPTopZombieQueue *)0x0) {
    cVar2 = FUN_03885520(this_01[0x199]);
    std::vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>>::resize
              ((vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>> *)&local_1b8,
               (long)cVar2);
    if (0 < cVar2) {
      lVar8 = 0;
      do {
        UINewPVPTopZombieQueue::gettItem(this_01,(int)lVar8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_320);
        SeedPacket::GetPlantType();
        uVar13 = FUN_0388553c(local_1b8,lVar8);
        cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_308);
        if (cVar4 == '\0') {
          std::string::string((string *)&local_2f0,"");
          thunk_FUN_05475e00(uVar13,(string *)&local_2f0);
          std::string::~string((string *)&local_2f0);
          nop();
        }
        else {
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)local_308);
          FUN_05475d88((string *)&local_2f0,lVar9 + 8);
          thunk_FUN_05475e00(uVar13,(string *)&local_2f0);
          std::string::~string((string *)&local_2f0);
        }
        lVar9 = FUN_0388553c(local_1b8,lVar8);
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_320);
        uVar7 = FUN_03885518(*(undefined4 *)(lVar10 + 0x1cc));
        *(undefined4 *)(lVar9 + 0xc) = uVar7;
        lVar9 = FUN_0388553c(local_1b8,lVar8);
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_320);
        uVar3 = FUN_03885d58(*(undefined4 *)(lVar10 + 400));
        *(undefined1 *)(lVar9 + 8) = uVar3;
        pNVar11 = (NameMapperBase *)PlantNameMapper::GetInstance();
        lVar9 = lVar8 + 1;
        psVar12 = (string *)FUN_0388553c(local_1b8,lVar8);
        local_2f0 = NameMapperBase::GetIdForName(pNVar11,psVar12);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_350,(int *)&local_2f0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_308);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_320);
        lVar8 = lVar9;
      } while ((int)lVar9 < (int)cVar2);
    }
  }
  auVar22 = JoustUtils::GetCurrentMatch();
  Sexy::ToWString((Sexy *)(auVar22._0_8_ + 0x30),auVar22._8_8_);
  FUN_054766c8(auStack_1a0,(string *)&local_2f0);
  FUN_05476c50((string *)&local_2f0);
  local_194 = *(undefined4 *)(auVar22._0_8_ + 0x38);
  local_198 = local_378;
  puVar14 = (undefined8 *)JoustUtils::GetOpponentLoadout();
  uVar15 = FUN_03885524(*puVar14,puVar14[1]);
  if (uVar15 == 0) {
    iVar5 = JoustUtils::GetPredefinedLoadoutCount();
    auVar23 = Sexy::Rand(iVar5);
    JoustUtils::GetPredefinedLoadout(auVar23._0_8_,auVar23._8_4_);
    uVar15 = FUN_03885568(CONCAT44(uStack_2ec,local_2f0),CONCAT44(uStack_2e4,local_2e8));
    std::vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>>::resize
              ((vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>> *)&local_190,
               uVar15);
    uVar15 = 0;
    while( true ) {
      uVar13 = local_190;
      uVar17 = FUN_03885548(local_190,local_188);
      if (uVar17 <= uVar15) break;
      uVar13 = FUN_0388553c(uVar13,uVar15);
      uVar20 = FUN_03885574(CONCAT44(uStack_2ec,local_2f0),uVar15);
      thunk_FUN_05475e00(uVar13,uVar20);
      lVar8 = FUN_0388553c(local_190,uVar15);
      lVar9 = FUN_03885574(CONCAT44(uStack_2ec,local_2f0),uVar15);
      uVar7 = *(undefined4 *)(lVar9 + 8);
      *(undefined1 *)(lVar8 + 8) = *(undefined1 *)(lVar9 + 0xc);
      *(undefined4 *)(lVar8 + 0xc) = uVar7;
      pNVar11 = (NameMapperBase *)PlantNameMapper::GetInstance();
      psVar12 = (string *)FUN_0388553c(local_190,uVar15);
      local_308[0] = NameMapperBase::GetIdForName(pNVar11,psVar12);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_338,(int *)local_308);
      uVar15 = uVar15 + 1;
    }
    std::vector<PredefinedLoadoutEntry,std::allocator<PredefinedLoadoutEntry>>::~vector
              ((vector<PredefinedLoadoutEntry,std::allocator<PredefinedLoadoutEntry>> *)&local_2f0);
  }
  else {
    std::vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>>::resize
              ((vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>> *)&local_190,
               uVar15);
    uVar15 = 0;
    while( true ) {
      uVar17 = FUN_03885548(local_190,local_188);
      if (uVar17 <= uVar15) break;
      iVar5 = PlantNameMapper::GetInstance();
      FUN_0388555c(*puVar14,uVar15);
      NameMapperBase::GetNameForId(iVar5);
      uVar13 = FUN_0388553c(local_190,uVar15);
      thunk_FUN_05475e00(uVar13,(string *)&local_2f0);
      lVar8 = FUN_0388553c(local_190,uVar15);
      piVar16 = (int *)FUN_0388555c(*puVar14,uVar15);
      iVar5 = piVar16[1];
      *(char *)(lVar8 + 8) = (char)piVar16[2];
      *(int *)(lVar8 + 0xc) = iVar5;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_338,piVar16);
      std::string::~string((string *)&local_2f0);
      uVar15 = uVar15 + 1;
    }
  }
  AdaptorJoustResultsScreen::SetParams(*(AdaptorJoustResultsScreen **)(this + 0x18),local_218);
  puVar1 = gMessageRouter;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)aRStack_320,(vector *)avStack_368);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)local_308,(vector *)avStack_350);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)&local_2f0,(vector *)avStack_338);
  __n_00 = aRStack_320;
  MessageRouter::
  Post<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>,std::vector<int,std::allocator<int>>,std::vector<int,std::allocator<int>>>
            ((MessageRouter *)puVar1,Message::BattleZ,aRStack_320,(RtId *)local_308,
             (string *)&local_2f0);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_2f0);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_308);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aRStack_320);
  TGALogJoustData::TGALogJoustData(aTStack_2b0);
  iVar5 = JoustUtils::PlayerGetLeague();
  DString::DString((DString *)&local_2f0,iVar5);
  pcVar18 = (char *)DString::c_str((DString *)&local_2f0);
  std::string::append((string *)aTStack_2b0,pcVar18,(size_t)__n_00);
  DString::~DString((DString *)&local_2f0);
  if (param_1 == 0) {
    std::string::append(asStack_2a8,"0",0x5593000);
    this_02 = (PlayerInfo *)ProfileUtils::Profile();
    goto joined_r0x03887a54;
  }
  std::string::append(asStack_2a8,"1",0x5593000);
  uVar7 = operator|(0x10,8);
  FUN_05462470(aRStack_178,uVar7);
  std::string::string((string *)&local_2f0,"");
  FUN_05462980(aRStack_178,(string *)&local_2f0);
  std::string::~string((string *)&local_2f0);
  nop();
  switch(*(undefined4 *)(this + 0x38)) {
  case 0xb:
  case 0xc:
  case 0x22:
  case 0x23:
  case 0x25:
    uVar13 = FUN_0546065c(auStack_168,*(undefined4 *)(this + 0x60));
    uVar13 = FUN_054603b8(uVar13,&DAT_05593348);
    FUN_0546065c(uVar13,*(undefined4 *)(this + 0x50));
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x24:
  default:
    FUN_054617bc(aRStack_178);
    goto LAB_038877a0;
  case 0x26:
    uVar7 = FUN_0388557c(*(undefined8 *)(this + 0x68),*(undefined8 *)(this + 0x70));
    uVar13 = FUN_054603b8(auStack_168,"chest");
    uVar13 = FUN_054603b8(uVar13,&DAT_05593348);
    FUN_0546065c(uVar13,uVar7);
  }
  FUN_05462824((string *)&local_2f0,aRStack_178);
  FUN_05474278(auStack_268,(string *)&local_2f0);
  std::string::~string((string *)&local_2f0);
  FUN_054617bc(aRStack_178);
LAB_038877a0:
  this_02 = (PlayerInfo *)ProfileUtils::Profile();
joined_r0x03887a54:
  if (this_02 == (PlayerInfo *)0x0) {
    puVar21 = auStack_260;
    for (uVar15 = 0; uVar13 = local_1b8, uVar17 = FUN_03885548(local_1b8,local_1b0), uVar15 < uVar17
        ; uVar15 = uVar15 + 1) {
      uVar13 = FUN_0388553c(uVar13,uVar15);
      FUN_05475d88((RtId *)local_308,uVar13);
      thunk_FUN_05475e00(puVar21,(RtId *)local_308);
      std::string::~string((string *)local_308);
      puVar21 = puVar21 + 8;
    }
  }
  else {
    puVar21 = auStack_260;
    for (uVar15 = 0; uVar13 = local_1b8, uVar17 = FUN_03885548(local_1b8,local_1b0), uVar15 < uVar17
        ; uVar15 = uVar15 + 1) {
      uVar13 = FUN_0388553c(uVar13,uVar15);
      FUN_05475d88((RtId *)local_308,uVar13);
      uVar17 = PlayerInfo::GetPlantStarLevel(this_02,(string *)local_308,false);
      DString::DString((DString *)&local_2f0);
      __n = FUN_0547429c((RtId *)local_308);
      DString::format((char *)&local_2f0,"Plant_%s_%02d",__n,uVar17 & 0xffffffff);
      pcVar18 = (char *)DString::c_str((DString *)&local_2f0);
      std::string::append((string *)local_308,pcVar18,__n);
      DString::~DString((DString *)&local_2f0);
      thunk_FUN_05475e00(puVar21,(RtId *)local_308);
      std::string::~string((string *)local_308);
      puVar21 = puVar21 + 8;
    }
  }
  iVar5 = PlayerInfo::GetCurrentArtifact(this_02);
  DString::DString((DString *)&local_2f0,iVar5);
  pcVar18 = (char *)DString::c_str((DString *)&local_2f0);
  std::string::string((string *)local_308,pcVar18);
  nop();
  DString::~DString((DString *)&local_2f0);
  PlayerInfo::GetArtifactInfoByID((int)this_02);
  ArtifactInfo::~ArtifactInfo((ArtifactInfo *)&local_2f0);
  FUN_05475ad8((RtId *)local_308,&DAT_05593348);
  DString::DString((DString *)&local_2f0,local_2e8);
  uVar13 = DString::c_str((DString *)&local_2f0);
  FUN_05475ad8((RtId *)local_308,uVar13);
  DString::~DString((DString *)&local_2f0);
  thunk_FUN_05475e00(auStack_220,(RtId *)local_308);
  pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogJoustData::TGALogJoustData((TGALogJoustData *)aRStack_178,aTStack_2b0);
  TGALogMgr::LogJoust(pTVar19,2,aRStack_178);
  TGALogJoustData::~TGALogJoustData((TGALogJoustData *)aRStack_178);
  std::string::~string((string *)local_308);
  TGALogJoustData::~TGALogJoustData(aTStack_2b0);
  AdaptorJoustResultsScreenParams::~AdaptorJoustResultsScreenParams(local_218);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_338);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_350);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_368);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustOutro::onJoustNetworkResponse(int, int) */

void __thiscall JoustOutro::onJoustNetworkResponse(JoustOutro *this,int param_1,int param_2)

{
  JoustOutro JVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  if (param_1 == 4) {
    switch(param_2) {
    case 2:
      giveAwards(this);
      recordLevelEnd(SUB81(this,0));
      JVar1 = this[0x99];
      lVar4 = JoustUtils::GetScoringSystem();
      iVar2 = FUN_03885514(*(undefined4 *)(lVar4 + 0x14));
      iVar3 = JoustUtils::GetOpponentScore();
      showResultsScreen(this,(bool)JVar1,iVar2,iVar3);
      JoustUtils::ClearCurrentMatch();
      return;
    case 3:
      JoustUtils::ShowJoustNetworkIssuePopup(3,4);
      return;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      JoustUtils::ShowJoustNetworkIssuePopup(1,4);
      return;
    }
  }
  return;
}

