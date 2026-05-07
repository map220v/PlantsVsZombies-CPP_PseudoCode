// Class: UIBossChallengeReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossChallengeReward::GetLayoutName() */

void __thiscall UIBossChallengeReward::GetLayoutName(UIBossChallengeReward *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"BossChallengeReward");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIBossChallengeReward::~UIBossChallengeReward() */

void __thiscall UIBossChallengeReward::~UIBossChallengeReward(UIBossChallengeReward *this)

{
  *(undefined ***)this = &PTR_GetClass_06977990;
  *(undefined **)(this + 0xd8) = &DAT_06977ce0;
  FUN_05476c50(this + 0x150);
  UISingletonDialog<UIBossChallengeReward>::~UISingletonDialog
            ((UISingletonDialog<UIBossChallengeReward> *)this);
  return;
}


/* UIBossChallengeReward::~UIBossChallengeReward() */

void __thiscall UIBossChallengeReward::~UIBossChallengeReward(UIBossChallengeReward *this)

{
  ~UIBossChallengeReward(this);
  AK::FreeHook(this);
  return;
}


/* UIBossChallengeReward::UIBossChallengeReward() */

void __thiscall UIBossChallengeReward::UIBossChallengeReward(UIBossChallengeReward *this)

{
  UISingletonDialog<UIBossChallengeReward>::UISingletonDialog
            ((UISingletonDialog<UIBossChallengeReward> *)this);
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined ***)this = &PTR_GetClass_06977990;
  *(undefined **)(this + 0xd8) = &DAT_06977ce0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x144) = 0xffffffff;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  FUN_05476574(this + 0x150);
  *(undefined8 *)(this + 0x158) = 0;
  return;
}


/* UIBossChallengeReward::ButtonDepress(int) */

void __thiscall UIBossChallengeReward::ButtonDepress(UIBossChallengeReward *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<UIBossChallengeReward>::CloseDialog();
  return;
}


/* non-virtual thunk to UIBossChallengeReward::ButtonDepress(int) */

void __thiscall UIBossChallengeReward::ButtonDepress(UIBossChallengeReward *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossChallengeReward::UpdateInterview() */

void UIBossChallengeReward::UpdateInterview(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Dialog *in_x0;
  UIWidgetText *pUVar5;
  UIHeadshotIcon *this;
  UIWidgetImage *pUVar6;
  wchar_t *pwVar7;
  UserInfo *this_00;
  long *plVar8;
  int in_w3;
  float fVar9;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  iVar2 = *(int *)(in_x0 + 0x138);
  local_8 = ___stack_chk_guard;
  if (iVar2 == 2) {
    if (*(int *)(in_x0 + 0x134) == 0x53fe) {
      pwVar7 = L"[GACHA_ACTIVITY_CLOSED]";
      goto LAB_04bb8a44;
    }
    if (*(int *)(in_x0 + 0x134) == 0x5402) {
      pwVar7 = L"[DAILY_ACHIEVEMENT_GOT]";
      goto LAB_04bb8a44;
    }
    std::string::string(asStack_18,"[BOSS_CHALLENGE_REWARD_FAIL_TIP]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_18,(string *)&DAT_056fda40,
               (wchar_t *)(ulong)*(uint *)(in_x0 + 0x134),in_w3);
    FUN_054766c8(in_x0 + 0x150,asStack_10);
    FUN_05476c50(asStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  else {
    if (iVar2 == 3) {
      TodStringTranslate(L"[BOSS_CHALLENGE_REWARD_RANK_TIP]");
      FUN_05476574(awStack_20);
      if (*(int *)(in_x0 + 0x148) < 0) {
        std::string::string(asStack_18,"[PERCENT]");
        uVar1 = *(uint *)(in_x0 + 0x14c);
        pwVar7 = (wchar_t *)&DAT_056fda40;
      }
      else {
        std::string::string(asStack_18,"[RANK_TEXT]");
        uVar1 = *(int *)(in_x0 + 0x148) + 1;
        pwVar7 = L"{RANK_COUNT}";
      }
      StringHelper::ReplaceNumberString
                ((StringHelper *)asStack_18,(string *)pwVar7,(wchar_t *)(ulong)uVar1,in_w3);
      FUN_054766c8(awStack_20,asStack_10);
      FUN_05476c50(asStack_10);
      std::string::~string(asStack_18);
      nop();
      TodReplaceString(awStack_28,L"{RANK}",awStack_20);
      FUN_054766c8(in_x0 + 0x150,asStack_10);
      FUN_05476c50(asStack_10);
      this_00 = (UserInfo *)DSingleton<UserInfo>::getInstance();
      UserInfo::unlockHeadShotId(this_00,*(int *)(in_x0 + 0x144));
      FUN_05476c50(awStack_20);
      FUN_05476c50(awStack_28);
      goto LAB_04bb87d4;
    }
    if (iVar2 != 1) {
      FUN_05476f98(in_x0 + 0x150);
      *(undefined4 *)(in_x0 + 0x13c) = 0;
      *(undefined4 *)(in_x0 + 0x140) = 0;
      *(undefined4 *)(in_x0 + 0x144) = 0xffffffff;
      goto LAB_04bb87d4;
    }
    pwVar7 = L"[NETWORK_NOT_CONNECTED_TEXT]";
LAB_04bb8a44:
    TodStringTranslate(pwVar7);
    FUN_054766c8(in_x0 + 0x150,asStack_10);
    FUN_05476c50(asStack_10);
  }
  *(undefined4 *)(in_x0 + 0x13c) = 0;
  *(undefined4 *)(in_x0 + 0x140) = 0;
LAB_04bb87d4:
  std::string::string(asStack_10,"TextTip");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>(in_x0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PuzzleTip::SetTip(pUVar5,in_x0 + 0x150);
  this = *(UIHeadshotIcon **)(in_x0 + 0x158);
  if (this == (UIHeadshotIcon *)0x0) {
    plVar8 = (long *)UIHeadshotIcon::create(*(int *)(in_x0 + 0x144));
    *(long **)(in_x0 + 0x158) = plVar8;
    uVar3 = FUN_04bb8668(0x28);
    uVar4 = FUN_04bb8668(0x6e);
    (**(code **)(*plVar8 + 0x1a8))(plVar8,uVar3,uVar4);
    UIHeadshotIcon::setScale(*(UIHeadshotIcon **)(in_x0 + 0x158),0.7,0.7);
    *(uint *)(*(long *)(in_x0 + 0x158) + 0x60) = *(uint *)(*(long *)(in_x0 + 0x158) + 0x60) | 0x10;
    std::string::string(asStack_10,"UIImageBackground");
    plVar8 = (long *)UI::Dialog::GetWidget(in_x0,asStack_10);
    (**(code **)(*plVar8 + 0x60))(plVar8,*(undefined8 *)(in_x0 + 0x158));
    std::string::~string(asStack_10);
    nop();
    this = *(UIHeadshotIcon **)(in_x0 + 0x158);
  }
  UIHeadshotIcon::changeHeadshot(this,*(int *)(in_x0 + 0x144));
  (**(code **)(**(long **)(in_x0 + 0x158) + 0x158))
            (*(long **)(in_x0 + 0x158),~*(uint *)(in_x0 + 0x144) >> 0x1f);
  std::string::string(asStack_10,"ImageGem");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>(in_x0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar2 = FUN_04bb8668(0xa4);
  fVar9 = (float)iVar2;
  if (*(int *)(in_x0 + 0x13c) < 1) {
    (**(code **)(*(long *)pUVar6 + 0x158))(pUVar6,0);
  }
  else {
    (**(code **)(*(long *)pUVar6 + 0x158))(pUVar6,1);
    uVar3 = FUN_04bb8668(0x85);
    (**(code **)(*(long *)pUVar6 + 0x1a8))(pUVar6,(int)fVar9,uVar3);
    iVar2 = FUN_04bb8668(0x89);
    fVar9 = fVar9 + (float)iVar2;
    std::string::string(asStack_10,"TextGemCount");
    pUVar5 = UI::Dialog::GetWidget<UIWidgetText>(in_x0,asStack_10);
    std::string::~string(asStack_10);
    nop();
    Sexy::StrFormat(L"x %d",asStack_10,(ulong)*(uint *)(in_x0 + 0x13c));
    PuzzleTip::SetTip(pUVar5,asStack_10);
    FUN_05476c50(asStack_10);
  }
  std::string::string(asStack_10,"ImageCoin");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>(in_x0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (*(int *)(in_x0 + 0x140) < 1) {
    (**(code **)(*(long *)pUVar6 + 0x158))(pUVar6,0);
  }
  else {
    (**(code **)(*(long *)pUVar6 + 0x158))(pUVar6,1);
    uVar3 = FUN_04bb8668(0x82);
    (**(code **)(*(long *)pUVar6 + 0x1a8))(pUVar6,(int)fVar9,uVar3);
    std::string::string(asStack_10,"TextGoinCount");
    pUVar5 = UI::Dialog::GetWidget<UIWidgetText>(in_x0,asStack_10);
    std::string::~string(asStack_10);
    nop();
    Sexy::StrFormat(L"x %d",asStack_10,(ulong)*(uint *)(in_x0 + 0x140));
    PuzzleTip::SetTip(pUVar5,asStack_10);
    FUN_05476c50(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossChallengeReward::OnNetworkError(int, std::string const&) */

void __thiscall
UIBossChallengeReward::OnNetworkError(UIBossChallengeReward *this,int param_1,string *param_2)

{
  char cVar1;
  _PacketId a_Stack_ce8 [1192];
  string asStack_840 [2104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _PacketId::_PacketId(a_Stack_ce8);
  cVar1 = std::operator==(param_2,asStack_840);
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0x138) = 1;
    UpdateInterview();
  }
  _PacketId::~_PacketId(a_Stack_ce8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossChallengeReward::OnCreate() */

void __thiscall UIBossChallengeReward::OnCreate(UIBossChallengeReward *this)

{
  undefined *puVar1;
  Widget *pWVar2;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string((string *)&local_20,"UIImageBackground");
  pWVar2 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_20);
  UI::Dialog::SetCenter((Dialog *)this,pWVar2,true);
  std::string::~string((string *)&local_20);
  nop();
  *(undefined4 *)(this + 0x138) = 0;
  UpdateInterview();
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestBossChallengeReward(this_01);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBossChallengeReward);
  local_50 = local_28;
  local_60 = local_38;
  uStack_58 = uStack_30;
  MessageRouter::
  Subscribe<int,S2C_BossChallengteReward_const*,Sexy::CBMemberTranslatorX<UIBossChallengeReward,void(UIBossChallengeReward::*)(int,S2C_BossChallengteReward_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyBossChallengeReward,&local_60);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNetworkError);
  local_80 = local_20;
  uStack_78 = uStack_18;
  local_70 = local_10;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<UIBossChallengeReward,void(UIBossChallengeReward::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBossChallengeReward::OnBossChallengeReward(int, S2C_BossChallengteReward const*) */

void __thiscall
UIBossChallengeReward::OnBossChallengeReward
          (UIBossChallengeReward *this,int param_1,S2C_BossChallengteReward *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  vector *pvVar6;
  int *extraout_x1;
  undefined1 auStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  string asStack_38 [24];
  undefined4 local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x90);
    uVar2 = *(undefined4 *)(param_2 + 0x30);
    uVar3 = *(undefined4 *)(param_2 + 0x94);
    uVar4 = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(this + 0x13c) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(this + 0x140) = uVar1;
    *(undefined4 *)(this + 0x148) = uVar2;
    *(undefined4 *)(this + 0x138) = 3;
    *(undefined4 *)(this + 0x144) = uVar3;
    *(undefined4 *)(this + 0x14c) = uVar4;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
    LogGameItemData::LogGameItemData((LogGameItemData *)local_20,0xfad,*(int *)(this + 0x140));
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_50,
               (LogGameItemData *)local_20);
    LogGameItemData::LogGameItemData((LogGameItemData *)local_20,0xbc0,*(int *)(this + 0x13c));
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_50,
               (LogGameItemData *)local_20);
    pvVar6 = (vector *)LawnApp::GetMetricsCollector(gLawnApp);
    MetricsCollector::GetGameItemChangedLog(pvVar6);
    StringHelper::ToString((StringHelper *)(this + 0x144),extraout_x1);
    std::string::string(asStack_38,"Rank_Reward");
    std::string::string(asStack_60,"2");
    FUN_05475d88(asStack_58,asStack_68);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)local_20,asStack_60,2,auStack_78);
    BehaviorLog::event(asStack_38,(vector *)local_20,asStack_70);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)local_20);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
    nop();
    std::string::~string(asStack_38);
    nop();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_38);
    local_20[0] = 1;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)asStack_38,(int *)local_20);
    local_20[0] = 1;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)asStack_38,(int *)local_20);
    local_20[0] = 1;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)asStack_38,(int *)local_20);
    local_20[0] = 1;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)asStack_38,(int *)local_20);
    puVar5 = gMessageRouter;
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)local_20,(vector *)asStack_38);
    MessageRouter::
    Post<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>>
              ((MessageRouter *)puVar5,Message::FiveYearsRushthrough,(LogGameItemData *)local_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_38);
    std::string::~string(asStack_68);
    std::string::~string(asStack_70);
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::~vector
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_50);
  }
  else {
    *(int *)(this + 0x134) = param_1;
    *(undefined4 *)(this + 0x138) = 2;
  }
  UpdateInterview();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

