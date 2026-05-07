// Class: UIRenaissanceChallenge


/* UIRenaissanceChallenge::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIRenaissanceChallenge::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIRenaissanceChallenge::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIRenaissanceChallenge::ScrollTargetReached(UIRenaissanceChallenge *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UIRenaissanceChallenge::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIRenaissanceChallenge::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIRenaissanceChallenge::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIRenaissanceChallenge::ScrollTargetInterrupted(UIRenaissanceChallenge *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallenge::GetLayoutName() */

void __thiscall UIRenaissanceChallenge::GetLayoutName(UIRenaissanceChallenge *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIRenaissanceChallenge");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIRenaissanceChallenge::~UIRenaissanceChallenge() */

void __thiscall UIRenaissanceChallenge::~UIRenaissanceChallenge(UIRenaissanceChallenge *this)

{
  *(undefined ***)this = &PTR_GetClass_067139d0;
  *(undefined **)(this + 0x138) = &DAT_06713d80;
  *(undefined **)(this + 0xd8) = &DAT_06713d38;
  *(undefined ***)(this + 0x140) = &PTR__UIRenaissanceChallenge_06713d98;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<UIRenaissanceChallenge>::~UISingletonDialog
            ((UISingletonDialog<UIRenaissanceChallenge> *)this);
  return;
}


/* non-virtual thunk to UIRenaissanceChallenge::~UIRenaissanceChallenge() */

void __thiscall UIRenaissanceChallenge::~UIRenaissanceChallenge(UIRenaissanceChallenge *this)

{
  ~UIRenaissanceChallenge(this + -0x140);
  return;
}


/* UIRenaissanceChallenge::~UIRenaissanceChallenge() */

void __thiscall UIRenaissanceChallenge::~UIRenaissanceChallenge(UIRenaissanceChallenge *this)

{
  ~UIRenaissanceChallenge(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIRenaissanceChallenge::~UIRenaissanceChallenge() */

void __thiscall UIRenaissanceChallenge::~UIRenaissanceChallenge(UIRenaissanceChallenge *this)

{
  ~UIRenaissanceChallenge(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallenge::updateTime() */

void __thiscall UIRenaissanceChallenge::updateTime(UIRenaissanceChallenge *this)

{
  UIWidgetText *pUVar1;
  int iVar2;
  float fVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Time");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  fVar3 = (float)TimeUtil::GetTimeCountdown(3,0x2a09);
  iVar2 = (int)fVar3;
  FUN_05476574(auStack_20);
  if (iVar2 == 0x7fffffff) {
    TodStringTranslate(L"[UNLIMITED]");
    FUN_054766c8(auStack_20,asStack_10);
    FUN_05476c50(asStack_10);
  }
  else {
    if (iVar2 < 0x15181) {
      if (iVar2 < 0xe11) {
        if (iVar2 < 1) goto LAB_03aae60c;
        FUN_05478178(asStack_10,L"[MIN_SEC]",auStack_28);
        TodReplaceNumberString((wstring *)asStack_10,L"{NUM1}",iVar2 / 0x3c);
        FUN_05476c50(asStack_10);
        nop();
        iVar2 = iVar2 % 0x3c;
      }
      else {
        FUN_05478178(asStack_10,L"[HOUR_MIN]",auStack_28);
        TodReplaceNumberString((wstring *)asStack_10,L"{NUM1}",iVar2 / 0xe10);
        FUN_05476c50(asStack_10);
        nop();
        iVar2 = (iVar2 % 0xe10) / 0x3c;
      }
    }
    else {
      FUN_05478178(asStack_10,L"[DAY_HOUR]",auStack_28);
      TodReplaceNumberString((wstring *)asStack_10,L"{NUM1}",iVar2 / 0x15180);
      FUN_05476c50(asStack_10);
      nop();
      iVar2 = (iVar2 % 0x15180) / 0xe10;
    }
    TodReplaceNumberString(awStack_18,L"{NUM2}",iVar2);
    FUN_054766c8(auStack_20,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
  }
LAB_03aae60c:
  if (pUVar1 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar1,auStack_20);
  }
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIRenaissanceChallenge::Update() */

void __thiscall UIRenaissanceChallenge::Update(UIRenaissanceChallenge *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  updateTime(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallenge::ButtonDepress(int) */

void __thiscall UIRenaissanceChallenge::ButtonDepress(UIRenaissanceChallenge *this,int param_1)

{
  UITabControl *this_00;
  UITabContent *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x7b) {
    std::string::string(asStack_10,"UITabControl_0");
    this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pUVar1 = (UITabContent *)UITabControl::GetTab(this_00,3);
    UITabControl::SetTabSelected(this_00,pUVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIRenaissanceChallenge::ButtonDepress(int) */

void __thiscall UIRenaissanceChallenge::ButtonDepress(UIRenaissanceChallenge *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallenge::updateMaterial() */

void __thiscall UIRenaissanceChallenge::updateMaterial(UIRenaissanceChallenge *this)

{
  UIWidgetText *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  undefined4 local_18 [2];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Mat");
  this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (UIWidgetText *)0x0) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    local_18[0] = PlayerInfo::GetMaterialNum(this_02,DAT_06a884dc);
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_18);
    UIWidgetText::SetString(this_00,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallenge::onBuyGacha(int) */

void UIRenaissanceChallenge::onBuyGacha(int param_1)

{
  UIWidgetText *this;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined4 auStack_18 [2];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Mat");
  this = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)(ulong)(uint)param_1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this != (UIWidgetText *)0x0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    auStack_18[0] = PlayerInfo::GetMaterialNum(this_01,DAT_06a884dc);
    std::to_string<ActivityTypeID>((ActivityTypeID *)auStack_18);
    UIWidgetText::SetString(this,asStack_10);
    std::string::~string(asStack_10);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIRenaissanceChallenge::UIRenaissanceChallenge() */

void __thiscall UIRenaissanceChallenge::UIRenaissanceChallenge(UIRenaissanceChallenge *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UIRenaissanceChallenge>::UISingletonDialog
            ((UISingletonDialog<UIRenaissanceChallenge> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  this[0x148] = (UIRenaissanceChallenge)0x0;
  *(undefined ***)this = &PTR_GetClass_067139d0;
  *(undefined ***)(this + 0x140) = &PTR__UIRenaissanceChallenge_06713d98;
  *(undefined **)(this + 0xd8) = &DAT_06713d38;
  *(undefined **)(this + 0x138) = &DAT_06713d80;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnShopBuyFinish);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<UIRenaissanceChallenge,void(UIRenaissanceChallenge::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBuyGacha);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UIRenaissanceChallenge,void(UIRenaissanceChallenge::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyRenaiEgg,&local_70);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallenge::requestShopInfo() */

void __thiscall UIRenaissanceChallenge::requestShopInfo(UIRenaissanceChallenge *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [1752];
  string asStack_610 [1544];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  updateMaterial(this);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_03aacfc4(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_610,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId(a_Stack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIRenaissanceChallenge::TabSelectionChanged(int) */

void __thiscall
UIRenaissanceChallenge::TabSelectionChanged(UIRenaissanceChallenge *this,int param_1)

{
  if ((param_1 - 2U < 2) && (this[0x148] == (UIRenaissanceChallenge)0x0)) {
    requestShopInfo(this);
    return;
  }
  return;
}


/* non-virtual thunk to UIRenaissanceChallenge::TabSelectionChanged(int) */

void __thiscall
UIRenaissanceChallenge::TabSelectionChanged(UIRenaissanceChallenge *this,int param_1)

{
  TabSelectionChanged(this + -0x138,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallenge::initShop(std::vector<RenaissanceChallengeRewardItemData,
   std::allocator<RenaissanceChallengeRewardItemData> > const&) */

void __thiscall UIRenaissanceChallenge::initShop(UIRenaissanceChallenge *this,vector *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UIWidgetImage *pUVar5;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  RenaissanceChallengeRewardWidget *this_02;
  RenaissanceChallengeRewardItemData *pRVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  int iVar10;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIImage_Rewards");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar5 + 0x80))(pUVar5,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,this_00);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,0,*(undefined4 *)(pUVar5 + 0x50),*(undefined4 *)(pUVar5 + 0x54));
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(pUVar5 + 0x50),*(undefined4 *)(pUVar5 + 0x54));
  iVar3 = FUN_03aad07c(0x14);
  iVar4 = FUN_03aad07c(10);
  iVar2 = (*(int *)(this_00 + 0x50) + iVar3 * -4) / 3;
  iVar1 = (iVar4 * -3 + *(int *)(this_00 + 0x54)) / 2;
  uVar8 = 0;
  while( true ) {
    iVar10 = (int)uVar8;
    uVar7 = FUN_03aac268(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar7 <= uVar8) break;
    Sexy::Insets::Insets
              ((Insets *)asStack_18,iVar3 + (iVar2 + iVar3) * (iVar10 % 3),
               iVar4 + (iVar1 + iVar4) * (iVar10 / 3),iVar2,iVar1);
    this_02 = ::operator_new(0x130);
    RenaissanceChallengeRewardWidget::RenaissanceChallengeRewardWidget(this_02);
    (**(code **)(*(long *)this_02 + 0x1a0))(this_02,asStack_18);
    pRVar6 = (RenaissanceChallengeRewardItemData *)FUN_03aac298(*(undefined8 *)param_1,uVar8);
    RenaissanceChallengeRewardWidget::setData(this_02,iVar10,pRVar6);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    uVar8 = uVar8 + 1;
  }
  uVar8 = uVar7 / 3;
  if (uVar7 != uVar8 * 3) {
    uVar8 = uVar8 + 1;
  }
  pcVar9 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x54) = (int)uVar8 * (iVar1 + iVar3);
  (*pcVar9)(this_00,this_01);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallenge::initEntrance() */

void __thiscall UIRenaissanceChallenge::initEntrance(UIRenaissanceChallenge *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  TGALogMgr *pTVar10;
  char *__s;
  RenaissanceChallengeActivityWidget *this_04;
  undefined8 *puVar11;
  uint uVar12;
  code *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined4 local_190 [12];
  RenaissanceChallengeActivityData aRStack_160 [24];
  undefined8 local_148;
  undefined8 local_140;
  TGAAnniversaryTreasureData aTStack_128 [16];
  undefined1 auStack_118 [64];
  string asStack_d8 [80];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  size_t __n;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03aac1c4(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    RenaissanceChallengeActivityData::RenaissanceChallengeActivityData(aRStack_160);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aRStack_160);
    if (cVar1 != '\0') {
      uVar14 = 0;
      iVar16 = 0;
      std::string::string(asStack_d8,"UIImage_Activity");
      pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_d8);
      std::string::~string(asStack_d8);
      nop();
      (**(code **)(*(long *)pUVar6 + 0x80))(pUVar6,1,1);
      this_00 = ::operator_new(0x248);
      PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
      (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_00);
      uVar3 = FUN_03aad07c(10);
      iVar2 = FUN_03aad07c(0x14);
      (**(code **)(*(long *)this_00 + 0x198))
                (this_00,0,uVar3,*(undefined4 *)(pUVar6 + 0x50),*(int *)(pUVar6 + 0x54) - iVar2);
      Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
      this_01 = ::operator_new(0xd8);
      Sexy::Widget::Widget(this_01);
      (**(code **)(*(long *)this_01 + 0x198))
                (this_01,0,0,*(undefined4 *)(pUVar6 + 0x50),*(undefined4 *)(pUVar6 + 0x54));
      lVar7 = LawnApp::GetRealBeijingTime(gLawnApp);
      Sexy::OutputDebugStrF((wchar_t *)"nowtime %d",lVar7);
      uVar15 = local_148;
      lVar8 = FUN_03aac1f0(local_148,local_140);
      iVar2 = 0;
      if (lVar8 != 0) {
        do {
          lVar8 = FUN_03aac220(uVar15,uVar14);
          lVar8 = TimeUtil::FormatTimeToTimeStamp(*(int *)(lVar8 + 8));
          iVar16 = iVar2;
          if (lVar7 <= lVar8) {
            iVar4 = FUN_03aad07c(10);
            iVar16 = *(int *)(this_00 + 0x54);
            iVar5 = FUN_03aad07c(0x14);
            Sexy::Insets::Insets
                      ((Insets *)asStack_d8,iVar4,
                       (int)(((double)iVar4 + (double)iVar16 * 0.37037037037037035) * (double)iVar2)
                       ,*(int *)(this_00 + 0x50) - iVar5,(int)((double)iVar16 * 0.37037037037037035)
                      );
            this_04 = ::operator_new(0x178);
            RenaissanceChallengeActivityWidget::RenaissanceChallengeActivityWidget(this_04);
            (**(code **)(*(long *)this_04 + 0x1a0))(this_04,asStack_d8);
            puVar11 = (undefined8 *)FUN_03aac220(local_148,uVar14);
            RenaissanceChallengeActivityWidget::setData
                      (this_04,*puVar11,*(undefined4 *)(puVar11 + 1),uVar14 & 0xffffffff);
            (**(code **)(*(long *)this_01 + 0x60))(this_01,this_04);
            iVar16 = iVar2 + 1;
          }
          uVar15 = local_148;
          uVar14 = uVar14 + 1;
          uVar9 = FUN_03aac1f0(local_148,local_140);
          iVar2 = iVar16;
        } while (uVar14 < uVar9);
      }
      iVar2 = FUN_03aad07c(10);
      pcVar13 = *(code **)(*(long *)this_00 + 0x60);
      uVar12 = (uint)((double)iVar2 + (double)*(int *)(this_00 + 0x54) * 0.37037037037037035);
      __n = (size_t)uVar12;
      *(uint *)(this_01 + 0x54) = iVar2 + uVar12 * iVar16;
      (*pcVar13)(this_00,this_01);
      TGAAnniversaryTreasureData::TGAAnniversaryTreasureData(aTStack_128);
      std::string::append((string *)aTStack_128,"1",__n);
      this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
      local_190[0] = PlayerInfo::GetMaterialNum(this_03,DAT_06a884dc);
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_190);
      FUN_05474278(auStack_118,asStack_d8);
      std::string::~string(asStack_d8);
      pTVar10 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGAAnniversaryTreasureData::TGAAnniversaryTreasureData
                ((TGAAnniversaryTreasureData *)asStack_d8,aTStack_128);
      TGALogMgr::LogFoolChallenge(pTVar10,asStack_d8);
      TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData
                ((TGAAnniversaryTreasureData *)asStack_d8);
      TGASecretStore::TGASecretStore((TGASecretStore *)local_190);
      DString::DString((DString *)asStack_d8,1);
      __s = (char *)DString::c_str((DString *)asStack_d8);
      std::string::append((string *)local_190,__s,__n);
      DString::~DString((DString *)asStack_d8);
      pTVar10 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGASecretStore::TGASecretStore((TGASecretStore *)asStack_d8,(TGASecretStore *)local_190);
      TGALogMgr::LogRenaissanceChallenge(pTVar10,asStack_d8);
      DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_d8);
      DropGroupNode::~DropGroupNode((DropGroupNode *)local_190);
      TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData(aTStack_128);
    }
    RenaissanceChallengeActivityData::~RenaissanceChallengeActivityData(aRStack_160);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallenge::OnCreate() */

void __thiscall UIRenaissanceChallenge::OnCreate(UIRenaissanceChallenge *this)

{
  UITabControl *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"UITabControl_0");
  this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UITabControl::SetListener(this_00,(TabControlListener *)(this + 0x138));
  initEntrance(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRenaissanceChallenge::OnShopBuyFinish(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
UIRenaissanceChallenge::OnShopBuyFinish
          (UIRenaissanceChallenge *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  DaveTreasureDataManager *this_02;
  TGALogMgr *pTVar2;
  char *pcVar3;
  GAME_ITEM_INFO *__n;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_f0 [24];
  TGASecretStore aTStack_d8 [8];
  string asStack_d0 [8];
  string asStack_c8 [32];
  TGAAnniversaryTreasureData aTStack_a8 [16];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [40];
  GAME_ITEM_INFO aGStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1) && (*(int *)(param_2 + 0x14) == 5)) && (*(int *)(param_2 + 0x20) == DAT_06a884dc))
  {
    ProfileChangeItemAmount(*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_58);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    local_104 = PlayerInfo::GetMaterialNum(this_01,DAT_06a884dc);
    iVar1 = PlayerInfo::GetMaterialNum(this_01,DAT_06a884dc);
    iVar1 = iVar1 - *(int *)(param_2 + 0x24);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    PlayerInfo::SetMaterialNum(this_01,DAT_06a884dc,iVar1);
    requestShopInfo(this);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_f0);
    local_f8 = 0;
    local_100 = *(undefined4 *)(param_2 + 0x18);
    local_fc = *(undefined4 *)(param_2 + 0x1c);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_f0,
               (LotteryBonus *)&local_100);
    this_02 = (DaveTreasureDataManager *)
              Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aGStack_58);
    __n = aGStack_58;
    DaveTreasureDataManager::ShowBonus(this_02,(vector *)avStack_f0,(vector *)aGStack_58);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)aGStack_58);
    TGAAnniversaryTreasureData::TGAAnniversaryTreasureData(aTStack_a8);
    std::string::append((string *)aTStack_a8,"3",(size_t)__n);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_104);
    FUN_05474278(auStack_98,aGStack_58);
    std::string::~string((string *)aGStack_58);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(param_2 + 0x18));
    FUN_05474278(auStack_90,aGStack_58);
    std::string::~string((string *)aGStack_58);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(param_2 + 0x1c));
    FUN_05474278(auStack_88,aGStack_58);
    std::string::~string((string *)aGStack_58);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(param_2 + 0x24));
    FUN_05474278(auStack_80,aGStack_58);
    std::string::~string((string *)aGStack_58);
    pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAAnniversaryTreasureData::TGAAnniversaryTreasureData
              ((TGAAnniversaryTreasureData *)aGStack_58,aTStack_a8);
    TGALogMgr::LogFoolChallenge(pTVar2,aGStack_58);
    TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData
              ((TGAAnniversaryTreasureData *)aGStack_58);
    TGASecretStore::TGASecretStore(aTStack_d8);
    DString::DString((DString *)aGStack_58,5);
    pcVar3 = (char *)DString::c_str((DString *)aGStack_58);
    std::string::append((string *)aTStack_d8,pcVar3,(size_t)__n);
    DString::~DString((DString *)aGStack_58);
    DString::DString((DString *)aGStack_58,*(int *)(param_2 + 0x18));
    pcVar3 = (char *)DString::c_str((DString *)aGStack_58);
    std::string::append(asStack_d0,pcVar3,(size_t)__n);
    DString::~DString((DString *)aGStack_58);
    DString::DString((DString *)aGStack_58,*(int *)(param_2 + 0x1c));
    pcVar3 = (char *)DString::c_str((DString *)aGStack_58);
    std::string::append(asStack_c8,pcVar3,(size_t)__n);
    DString::~DString((DString *)aGStack_58);
    pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGASecretStore::TGASecretStore((TGASecretStore *)aGStack_58,aTStack_d8);
    TGALogMgr::LogRenaissanceChallenge(pTVar2,aGStack_58);
    DropGroupNode::~DropGroupNode((DropGroupNode *)aGStack_58);
    DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_d8);
    TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData(aTStack_a8);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_f0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

