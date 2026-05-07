// Class: UIPartyAssist


/* UIPartyAssist::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIPartyAssist::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPartyAssist::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIPartyAssist::ScrollTargetReached(UIPartyAssist *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UIPartyAssist::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIPartyAssist::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPartyAssist::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UIPartyAssist::ScrollTargetInterrupted(UIPartyAssist *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* UIPartyAssist::TabSelectionChanged(int) */

int UIPartyAssist::TabSelectionChanged(int param_1)

{
  return param_1;
}


/* non-virtual thunk to UIPartyAssist::TabSelectionChanged(int) */

void __thiscall UIPartyAssist::TabSelectionChanged(UIPartyAssist *this,int param_1)

{
  TabSelectionChanged((int)this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::GetLayoutName() */

void __thiscall UIPartyAssist::GetLayoutName(UIPartyAssist *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPartyAssistMain");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIPartyAssist::CloseMainTips() */

void __thiscall UIPartyAssist::CloseMainTips(UIPartyAssist *this)

{
  if (*(long *)(this + 0x158) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x158))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x158));
    *(undefined8 *)(this + 0x158) = 0;
  }
  return;
}


/* UIPartyAssist::~UIPartyAssist() */

void __thiscall UIPartyAssist::~UIPartyAssist(UIPartyAssist *this)

{
  *(undefined ***)this = &PTR_GetClass_069f0000;
  *(undefined **)(this + 0x138) = &DAT_069f03b0;
  *(undefined **)(this + 0xd8) = &DAT_069f0368;
  *(undefined ***)(this + 0x140) = &PTR__UIPartyAssist_069f03c8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<UIPartyAssist>::~UISingletonDialog((UISingletonDialog<UIPartyAssist> *)this);
  return;
}


/* non-virtual thunk to UIPartyAssist::~UIPartyAssist() */

void __thiscall UIPartyAssist::~UIPartyAssist(UIPartyAssist *this)

{
  ~UIPartyAssist(this + -0x140);
  return;
}


/* UIPartyAssist::~UIPartyAssist() */

void __thiscall UIPartyAssist::~UIPartyAssist(UIPartyAssist *this)

{
  ~UIPartyAssist(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIPartyAssist::~UIPartyAssist() */

void __thiscall UIPartyAssist::~UIPartyAssist(UIPartyAssist *this)

{
  ~UIPartyAssist(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::UpdateTimer() */

void __thiscall UIPartyAssist::UpdateTimer(UIPartyAssist *this)

{
  UIWidgetText *pUVar1;
  long lVar2;
  long lVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_ActivityTimeLeft");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    lVar2 = LawnApp::GetRealServerTime(gLawnApp);
    lVar3 = *(long *)(this + 0x148);
    LawnApp::GetRealBeijingTime(gLawnApp);
    if (lVar3 - lVar2 < 1) {
      std::string::string(asStack_18,"[CORNUCOPIA_ACTIVITY_TIME_OVER]");
      StringHelper::ToStringValue(asStack_18);
      PuzzleTip::SetTip(pUVar1,asStack_10);
      FUN_05476c50(asStack_10);
      std::string::~string(asStack_18);
      nop();
    }
    else {
      TimeUtil::GetTimeCountdownFormat((TimeUtil *)asStack_10,(float)(lVar3 - lVar2),0);
      PuzzleTip::SetTip(pUVar1,asStack_10);
      FUN_05476c50(asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPartyAssist::Update() */

void __thiscall UIPartyAssist::Update(UIPartyAssist *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateTimer(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::GoToPresentShop(UIMessageBox*, int) */

void __thiscall
UIPartyAssist::GoToPresentShop(UIPartyAssist *this,UIMessageBox *param_1,int param_2)

{
  UITabControl *this_00;
  UITabContent *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::ShowMainTips() */

void __thiscall UIPartyAssist::ShowMainTips(UIPartyAssist *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x158) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x158) = this_00;
    TodStringTranslate(L"[PARTY_ASSIST_TIPS_DESC]");
    TodStringTranslate(L"[REVIVE_TIP]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x158);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,CloseMainTips);
    Sexy::Delegate0::Delegate0<UIPartyAssist,void(UIPartyAssist::*)()>(aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x158));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x158));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x158));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x158));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::ShowNotEnough() */

void __thiscall UIPartyAssist::ShowNotEnough(UIPartyAssist *this)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    std::string::string(asStack_50,"[PARTY_ASSIST_TICKETS_NOT_ENOUGH]");
    StringHelper::ToStringValue(asStack_50);
    std::string::~string(asStack_50);
    nop();
    UIMessageBox::SetMessage(this_00,awStack_58,awStack_60);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string(asStack_50);
    nop();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,GoToPresentShop);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<UIPartyAssist,void(UIPartyAssist::*)(UIMessageBox*,int)>(aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(awStack_58);
    FUN_05476c50(awStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::ShowResetTips() */

void __thiscall UIPartyAssist::ShowResetTips(UIPartyAssist *this)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    std::string::string(asStack_50,"[PARTY_ASSIST_RESET]");
    StringHelper::ToStringValue(asStack_50);
    std::string::~string(asStack_50);
    nop();
    UIMessageBox::SetMessage(this_00,awStack_58,awStack_60);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string(asStack_50);
    nop();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,Reset);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<UIPartyAssist,void(UIPartyAssist::*)(UIMessageBox*,int)>(aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(awStack_58);
    FUN_05476c50(awStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPartyAssist::UIPartyAssist() */

void __thiscall UIPartyAssist::UIPartyAssist(UIPartyAssist *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UIPartyAssist>::UISingletonDialog((UISingletonDialog<UIPartyAssist> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  this[0x160] = (UIPartyAssist)0x1;
  *(undefined ***)this = &PTR_GetClass_069f0000;
  *(undefined **)(this + 0xd8) = &DAT_069f0368;
  *(undefined **)(this + 0x138) = &DAT_069f03b0;
  *(undefined ***)(this + 0x140) = &PTR__UIPartyAssist_069f03c8;
  this[0x174] = (UIPartyAssist)0x1;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x170) = uVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UIPartyAssist,void(UIPartyAssist::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::Reset(UIMessageBox*, int) */

void __thiscall UIPartyAssist::Reset(UIPartyAssist *this,UIMessageBox *param_1,int param_2)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [2960];
  string asStack_158 [336];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId(a_Stack_ce8);
    FUN_04ea3720(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_00,asStack_158,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId(a_Stack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::InitFinalBonusHeadicon(std::string, std::string, bool) */

void __thiscall
UIPartyAssist::InitFinalBonusHeadicon
          (UIPartyAssist *this,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  string *psVar6;
  PlantAnimRig *this_00;
  UIWidgetAnim *this_01;
  long lVar7;
  char *__nptr;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PlantBgContainer");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = FUN_0547419c(param_2);
  if (cVar1 == '\0') {
    psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
    this_00 = (PlantAnimRig *)CreateStandalonePlantAnimRig(asStack_10,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (param_4 != '\0') {
      (**(code **)(*plVar5 + 0x80))(plVar5,1,1);
    }
    this_01 = ::operator_new(0x118);
    UIWidgetAnim::UIWidgetAnim(this_01);
    uVar2 = FUN_04ea3948(0);
    uVar3 = FUN_04ea3948(0x14);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,uVar2,uVar3,(int)plVar5[10],*(undefined4 *)((long)plVar5 + 0x54));
    this_01[0x59] = (UIWidgetAnim)0x0;
    UIWidgetAnim::SetAnimRig(this_01,(PopAnimRig *)this_00);
    FUN_04ea28d8(this_01 + 0xe8);
    Sexy::FastCurve::SetOutRange((FastCurve *)asStack_10,1.3,1.3);
    FUN_04ea1d8c(this_01 + 0xe0,asStack_10);
    std::string::string(asStack_10,"idle");
    UIWidgetAnim::SetLabel((string *)this_01);
    std::string::~string(asStack_10);
    nop();
    lVar7 = FUN_04ea1d88(*(undefined8 *)(this_01 + 0xd8));
    if (lVar7 != 0) {
      __nptr = (char *)FUN_0547429c(param_3);
      iVar4 = atoi(__nptr);
      PlantAnimRig::SetAvatarIndex(this_00,iVar4);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
      PlantAnimRig::ShowAvatarLayers(this_00,asStack_10,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  else {
    (**(code **)(*plVar5 + 0x80))(plVar5,1,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::Assist() */

void __thiscall UIPartyAssist::Assist(UIPartyAssist *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PartyAssistMainData *pPVar4;
  PartyAssistMgr *this_01;
  int *piVar5;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  UIMessageBox *pUVar6;
  Image *pIVar7;
  long lVar8;
  wstring awStack_168 [8];
  wstring awStack_160 [8];
  wstring awStack_158 [8];
  wstring awStack_150 [24];
  Delegate2<UIMessageBox*,int> aDStack_138 [48];
  PartyAssistMainData aPStack_108 [24];
  int local_f0;
  undefined8 local_e8;
  int local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
  pPVar4 = (PartyAssistMainData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  PartyAssistMainData::PartyAssistMainData(aPStack_108,pPVar4);
  if (local_28 == 0) {
    this_01 = (PartyAssistMgr *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
    cVar2 = PartyAssistMgr::ShouldChooseFinalBonus(this_01);
    if (cVar2 == '\0') {
      piVar5 = (int *)FUN_04ea2364(local_e8,(long)local_f0);
      iVar1 = *piVar5;
      this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
      *(int *)(this + 0x178) = iVar1;
      iVar3 = PlayerInfo::GetMaterialNum(this_03,0x5b2d);
      if (iVar3 < iVar1) {
        ShowNotEnough(this);
      }
      else {
        pUVar6 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar6 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(pUVar6,6);
          TodStringTranslate(L"[REVIVE_TIP]");
          FUN_05478178(awStack_150,L"[PARTY_ASSIST_BUY_CONFIRM]",awStack_168);
          TodReplaceNumberString(awStack_150,L"{NUMS}",iVar1);
          FUN_05476c50(awStack_150);
          nop();
          UIMessageBox::SetMessage(pUVar6,awStack_158,awStack_160);
          std::string::string((string *)awStack_150,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
          pIVar7 = (Image *)StringHelper::ToImage((string *)awStack_150,false);
          UIMessageBox::SetBackground(pUVar6,pIVar7);
          std::string::~string((string *)awStack_150);
          nop();
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,AssistConfirm);
          Sexy::Delegate2<UIMessageBox*,int>::
          Delegate2<UIPartyAssist,void(UIPartyAssist::*)(UIMessageBox*,int)>
                    (aDStack_138,awStack_150);
          UIMessageBox::SetCallback(pUVar6,aDStack_138);
          FUN_05476c50(awStack_158);
          FUN_05476c50(awStack_160);
        }
      }
    }
    else {
      pUVar6 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      UIMessageBox::SetShowType(pUVar6,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[AUTUMN_HARVEST_SELECT_BONUS_FIRST_TIPS]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(pUVar6,awStack_160,awStack_168);
      std::string::string((string *)awStack_150,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar7 = (Image *)StringHelper::ToImage((string *)awStack_150,false);
      UIMessageBox::SetBackground(pUVar6,pIVar7);
      std::string::~string((string *)awStack_150);
      nop();
      lVar8 = UIMessageBox::GetButtonCancel(pUVar6);
      thunk_FUN_05477b9c(lVar8 + 0xd8,awStack_158);
      FUN_05476c50(awStack_158);
      FUN_05476c50(awStack_160);
      FUN_05476c50(awStack_168);
    }
  }
  else {
    UISingletonDialog<UIPartyAssistWishingPoolSelect>::ShowDialog();
  }
  PartyAssistMainData::~PartyAssistMainData(aPStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::InitPresent() */

void __thiscall UIPartyAssist::InitPresent(UIPartyAssist *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  UIWidgetImage *pUVar13;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  PartyAssistMainData *pPVar14;
  long lVar15;
  PartyTreasureWidget *this_03;
  undefined8 *puVar16;
  ulong uVar17;
  int *piVar18;
  WorldLevelPackageBonusWidget *this_04;
  Image *pIVar19;
  UIWidgetImage *this_05;
  code *pcVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  Insets aIStack_138 [16];
  ulong local_128;
  undefined8 local_120;
  ulong local_118;
  ulong local_110;
  string asStack_108 [200];
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_108,"UIImage_Present_Background");
  pUVar13 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_108);
  std::string::~string(asStack_108);
  nop();
  if (pUVar13 != (UIWidgetImage *)0x0) {
    (**(code **)(*(long *)pUVar13 + 0x80))(pUVar13,1,1);
  }
  uVar23 = 0;
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
  pPVar14 = (PartyAssistMainData *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_end(this_02);
  PartyAssistMainData::PartyAssistMainData((PartyAssistMainData *)asStack_108,pPVar14);
  iVar4 = FUN_04ea3948(5);
  iVar5 = FUN_04ea3948(0x14);
  iVar7 = *(int *)(pUVar13 + 0x50);
  iVar6 = FUN_04ea3948(10);
  Sexy::Insets::Insets(aIStack_138,iVar4,iVar4,iVar7 - iVar5,*(int *)(pUVar13 + 0x54) - iVar6);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_138);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_138);
  iVar7 = FUN_04ea3948(0);
  uVar1 = *(undefined4 *)(this_00 + 0x54);
  iVar4 = (int)((float)*(int *)(this_00 + 0x50) * 0.3030303);
  lVar15 = FUN_04ea239c(local_40,local_38);
  uVar21 = 0;
  if (lVar15 != 0) {
    do {
      uVar21 = 0;
      this_03 = ::operator_new(0x118);
      memset(this_03,0,0x118);
      PartyTreasureWidget::PartyTreasureWidget(this_03);
      iVar5 = FUN_04ea3948(5);
      (**(code **)(*(long *)this_03 + 0x198))
                (this_03,iVar7 + (iVar5 + iVar4) * (int)uVar23,iVar7,iVar4,uVar1);
      (**(code **)(*(long *)this_03 + 0x318))(this_03,uVar23 & 0xffffffff);
      iVar5 = FUN_04ea3948(0xa0);
      Sexy::Insets::Insets((Insets *)&local_128);
      iVar6 = FUN_04ea3948(0x4b);
      iVar8 = FUN_04ea3948(0x28);
      iVar9 = FUN_04ea3948(5);
      iVar10 = FUN_04ea3948(0);
      while( true ) {
        puVar16 = (undefined8 *)FUN_04ea23b0(local_40,uVar23);
        uVar22 = *puVar16;
        uVar17 = FUN_04ea23bc(uVar22,puVar16[1]);
        if (uVar17 <= uVar21) break;
        piVar18 = (int *)FUN_04ea23d0(uVar22,uVar21);
        iVar2 = *piVar18;
        iVar11 = piVar18[1];
        this_04 = ::operator_new(0xf0);
        WorldLevelPackageBonusWidget::WorldLevelPackageBonusWidget(this_04,iVar2,iVar11);
        Sexy::Insets::Insets
                  ((Insets *)&local_118,
                   ((iVar4 + iVar6 * -2) - iVar9) / 2 + ((uint)uVar21 & 1) * (iVar6 + iVar9),
                   iVar5 + iVar8 + iVar10,iVar6,iVar8);
        local_120 = local_110;
        uVar17 = local_120;
        local_120._4_4_ = (undefined4)(local_110 >> 0x20);
        uVar3 = local_120._4_4_;
        local_128 = local_118;
        local_120 = uVar17;
        (**(code **)(*(long *)this_04 + 0x198))
                  (this_04,local_118 & 0xffffffff,local_118 >> 0x20,local_110 & 0xffffffff,uVar3);
        (**(code **)(*(long *)this_03 + 0x60))(this_03,this_04);
        if (uVar21 == 1) {
          uVar21 = 2;
          pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba17b8);
          this_05 = ::operator_new(0x118);
          UIWidgetImage::UIWidgetImage(this_05,pIVar19);
          iVar11 = FUN_04ea3948(0x32);
          iVar2 = *(int *)(this_04 + 0x48);
          iVar12 = FUN_04ea3948(0x17);
          (**(code **)(*(long *)this_05 + 0x198))
                    (this_05,iVar11 + iVar2,*(int *)(this_04 + 0x4c) - iVar12,iVar8,iVar8);
          (**(code **)(*(long *)this_03 + 0x60))(this_03,this_05);
        }
        else {
          uVar21 = uVar21 + 1;
        }
      }
      uVar23 = uVar23 + 1;
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_03);
      uVar21 = FUN_04ea239c(local_40,local_38);
    } while (uVar23 < uVar21);
  }
  iVar5 = FUN_04ea3948(5);
  pcVar20 = *(code **)(*(long *)pUVar13 + 0x60);
  *(int *)(this_01 + 0x50) = iVar7 + (iVar5 + iVar4) * (int)uVar21;
  (*pcVar20)(pUVar13,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  this_01[0x59] = (Widget)0x0;
  PartyAssistMainData::~PartyAssistMainData((PartyAssistMainData *)asStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::RefreshResetButton() */

void __thiscall UIPartyAssist::RefreshResetButton(UIPartyAssist *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PartyAssistMainData *pPVar1;
  PVZ2UIButton *pPVar2;
  string asStack_110 [8];
  PartyAssistMainData aPStack_108 [24];
  int local_f0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
  pPVar1 = (PartyAssistMainData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  PartyAssistMainData::PartyAssistMainData(aPStack_108,pPVar1);
  std::string::string(asStack_110,"UIButton_Reset");
  pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_110);
  std::string::~string(asStack_110);
  nop();
  (**(code **)(*(long *)pPVar2 + 0x158))(pPVar2,4 < local_f0);
  PartyAssistMainData::~PartyAssistMainData(aPStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::RefreshTasks() */

void __thiscall UIPartyAssist::RefreshTasks(UIPartyAssist *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  PartyAssistMainData *pPVar7;
  undefined8 *puVar8;
  PartyTaskWidget *this_03;
  code *pcVar9;
  undefined8 local_138;
  undefined8 local_130;
  Insets aIStack_128 [16];
  Insets aIStack_118 [16];
  string asStack_108 [80];
  undefined8 local_b8;
  undefined8 local_b0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_108,"UIImage_TaskBG");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_108);
  std::string::~string(asStack_108);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x80))(pUVar6,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  iVar2 = FUN_04ea3948(0xf);
  iVar3 = FUN_04ea3948(0x1e);
  Sexy::Insets::Insets
            (aIStack_128,iVar2,iVar2,*(int *)(pUVar6 + 0x50) - iVar3,*(int *)(pUVar6 + 0x54) - iVar3
            );
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_128);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar2 = *(int *)(this_01 + 0x50);
  iVar4 = FUN_04ea3948(0x8c);
  this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
  pPVar7 = (PartyAssistMainData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_02);
  PartyAssistMainData::PartyAssistMainData((PartyAssistMainData *)asStack_108,pPVar7);
  local_138 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_b8);
  local_130 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_b8);
  iVar3 = 0;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_138,(__normal_iterator *)&local_130), bVar1)
  {
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_138);
    this_03 = ::operator_new(0x178);
    memset(this_03,0,0x178);
    PartyTaskWidget::PartyTaskWidget(this_03);
    iVar5 = FUN_04ea3948(10);
    Sexy::Insets::Insets(aIStack_118,0,(iVar5 + iVar4) * iVar3,iVar2,iVar4);
    (**(code **)(*(long *)this_03 + 0x1a0))(this_03,aIStack_118);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_03);
    PartyTaskWidget::InitData(this_03,*puVar8,*(undefined4 *)(puVar8 + 1),iVar3);
    (**(code **)(*(long *)this_03 + 0x318))(this_03,0);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_138);
    iVar3 = iVar3 + 1;
  }
  iVar2 = FUN_04ea3948(10);
  iVar3 = FUN_04ea23dc(local_b8,local_b0);
  pcVar9 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x54) = (iVar2 + iVar4) * iVar3;
  (*pcVar9)(this_00,this_01);
  (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_00);
  PartyAssistMainData::~PartyAssistMainData((PartyAssistMainData *)asStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::InitTasks() */

void __thiscall UIPartyAssist::InitTasks(UIPartyAssist *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  PartyAssistMainData *pPVar7;
  undefined8 *puVar8;
  PartyTaskWidget *this_03;
  code *pcVar9;
  undefined8 uStack_138;
  undefined8 uStack_130;
  Insets aIStack_128 [16];
  Insets aIStack_118 [16];
  string asStack_108 [80];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_108,"UIImage_TaskBG");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_108);
  std::string::~string(asStack_108);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x80))(pUVar6,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  iVar2 = FUN_04ea3948(0xf);
  iVar3 = FUN_04ea3948(0x1e);
  Sexy::Insets::Insets
            (aIStack_128,iVar2,iVar2,*(int *)(pUVar6 + 0x50) - iVar3,*(int *)(pUVar6 + 0x54) - iVar3
            );
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_128);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar2 = *(int *)(this_01 + 0x50);
  iVar4 = FUN_04ea3948(0x8c);
  this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
  pPVar7 = (PartyAssistMainData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_02);
  PartyAssistMainData::PartyAssistMainData((PartyAssistMainData *)asStack_108,pPVar7);
  uStack_138 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&uStack_b8);
  uStack_130 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&uStack_b8);
  iVar3 = 0;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_138,(__normal_iterator *)&uStack_130),
        bVar1) {
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_138)
    ;
    this_03 = ::operator_new(0x178);
    memset(this_03,0,0x178);
    PartyTaskWidget::PartyTaskWidget(this_03);
    iVar5 = FUN_04ea3948(10);
    Sexy::Insets::Insets(aIStack_118,0,(iVar5 + iVar4) * iVar3,iVar2,iVar4);
    (**(code **)(*(long *)this_03 + 0x1a0))(this_03,aIStack_118);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_03);
    PartyTaskWidget::InitData(this_03,*puVar8,*(undefined4 *)(puVar8 + 1),iVar3);
    (**(code **)(*(long *)this_03 + 0x318))(this_03,0);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&uStack_138);
    iVar3 = iVar3 + 1;
  }
  iVar2 = FUN_04ea3948(10);
  iVar3 = FUN_04ea23dc(uStack_b8,uStack_b0);
  pcVar9 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x54) = (iVar2 + iVar4) * iVar3;
  (*pcVar9)(this_00,this_01);
  (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_00);
  PartyAssistMainData::~PartyAssistMainData((PartyAssistMainData *)asStack_108);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::RefreshLevel() */

void __thiscall UIPartyAssist::RefreshLevel(UIPartyAssist *this)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PartyAssistMainData *pPVar2;
  UIWidgetImage *pUVar3;
  UIWidgetText *pUVar4;
  Image *pIVar5;
  string *extraout_x1;
  undefined8 uVar6;
  undefined1 auStack_138 [8];
  string asStack_130 [8];
  string asStack_128 [8];
  string asStack_120 [8];
  string asStack_118 [8];
  string asStack_110 [8];
  PartyAssistMainData aPStack_108 [24];
  uint local_f0;
  Sexy aSStack_50 [44];
  char local_24;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
  pPVar2 = (PartyAssistMainData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  PartyAssistMainData::PartyAssistMainData(aPStack_108,pPVar2);
  std::string::string(asStack_130,"IMAGE_UI_PARTY_ASSIST_PURPLE_");
  nop();
  std::string::string(asStack_128,"IMAGE_UI_PARTY_ASSIST_YELLOW_");
  nop();
  std::string::string(asStack_120,"IMAGE_UI_PARTY_ASSIST_RANK");
  nop();
  std::string::string(asStack_110,"UIImage_CurrentLevel");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_110);
  std::string::~string(asStack_110);
  nop();
  if (pUVar3 != (UIWidgetImage *)0x0) {
    Sexy::StrFormat("%d",asStack_110,(ulong)local_f0);
    std::operator+(asStack_130,asStack_110);
    std::string::~string(asStack_110);
    UIWidgetImage::SetImage(pUVar3,asStack_118);
    std::string::~string(asStack_118);
  }
  std::string::string(asStack_110,"UIImage_NextLevel");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_110);
  std::string::~string(asStack_110);
  nop();
  if (pUVar3 != (UIWidgetImage *)0x0) {
    Sexy::StrFormat("%d",asStack_110,(ulong)(local_f0 + 1));
    std::operator+(asStack_128,asStack_110);
    std::string::~string(asStack_110);
    UIWidgetImage::SetImage(pUVar3,asStack_118);
    std::string::~string(asStack_118);
  }
  std::string::string(asStack_110,"UIImage_Rank");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_110);
  std::string::~string(asStack_110);
  nop();
  if (pUVar3 != (UIWidgetImage *)0x0) {
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,(local_f0 - 5 & 0xfffffffb) == 0 || local_f0 == 2)
    ;
  }
  std::string::string(asStack_110,"UIText_Tips");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_110);
  std::string::~string(asStack_110);
  nop();
  if (pUVar4 != (UIWidgetText *)0x0) {
    FUN_05478178(asStack_110,L"[PARTY_ASSIST_NEXTLEVEL_TIPS]",auStack_138);
    TodReplaceNumberString((wstring *)asStack_110,L"{NUMS}",local_f0 + 1);
    FUN_05476c50(asStack_110);
    nop();
    PuzzleTip::SetTip(pUVar4,asStack_118);
    FUN_05476c50(asStack_118);
  }
  if (local_24 == '\0') {
    cVar1 = FUN_0547419c(aSStack_50);
    if (cVar1 == '\0') {
      uVar6 = 1;
      std::string::string(asStack_110,"UIImage_Plant");
      pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_110);
      std::string::~string(asStack_110);
      nop();
      if (pUVar3 != (UIWidgetImage *)0x0) {
        uVar6 = 1;
        (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,1);
        Sexy::StringToUpper(aSStack_50,extraout_x1);
        std::operator+("IMAGE_UI_HEADSHOT_BIGPLANT_",asStack_118);
        pIVar5 = (Image *)StringHelper::ToImage(asStack_110,false);
        std::string::~string(asStack_110);
        std::string::~string(asStack_118);
        UIWidgetImage::SetImage(pUVar3,pIVar5);
      }
      goto LAB_04ea9b70;
    }
  }
  std::string::string(asStack_110,"UIImage_Plant");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_110);
  std::string::~string(asStack_110);
  nop();
  uVar6 = 0;
  if (pUVar3 != (UIWidgetImage *)0x0) {
    uVar6 = 0;
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
  }
LAB_04ea9b70:
  std::string::string(asStack_110,"PlantShadow");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_110);
  std::string::~string(asStack_110);
  nop();
  if (pUVar3 != (UIWidgetImage *)0x0) {
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,uVar6);
  }
  std::string::~string(asStack_120);
  std::string::~string(asStack_128);
  std::string::~string(asStack_130);
  PartyAssistMainData::~PartyAssistMainData(aPStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::UpdateLevel() */

void __thiscall UIPartyAssist::UpdateLevel(UIPartyAssist *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PartyAssistMainData *pPVar1;
  UIWidgetImage *this_01;
  float fVar2;
  string asStack_120 [8];
  string asStack_118 [8];
  string asStack_110 [8];
  PartyAssistMainData aPStack_108 [24];
  int local_f0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
  pPVar1 = (PartyAssistMainData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  PartyAssistMainData::PartyAssistMainData(aPStack_108,pPVar1);
  std::string::string(asStack_120,"IMAGE_UI_GENERIC_NUMBER_");
  nop();
  std::string::string(asStack_110,"UIImage_NextLevel");
  this_01 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_110);
  std::string::~string(asStack_110);
  nop();
  if (this_01 != (UIWidgetImage *)0x0) {
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x170) < fVar2) {
      this[0x174] = (UIPartyAssist)((byte)this[0x174] ^ 1);
      fVar2 = (float)PVZ_T();
      *(float *)(this + 0x170) = fVar2 + 1.0;
    }
    Sexy::StrFormat("%d%s",asStack_110,(ulong)(local_f0 + 1),&DAT_055923fe);
    std::operator+(asStack_120,asStack_110);
    std::string::~string(asStack_110);
    UIWidgetImage::SetImage(this_01,asStack_118);
    std::string::~string(asStack_118);
  }
  std::string::~string(asStack_120);
  PartyAssistMainData::~PartyAssistMainData(aPStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::RefreshTickets() */

void __thiscall UIPartyAssist::RefreshTickets(UIPartyAssist *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PartyAssistMainData *pPVar1;
  UIWidgetText *this_01;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  string asStack_110 [8];
  PartyAssistMainData aPStack_108 [104];
  int local_a0 [38];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
  pPVar1 = (PartyAssistMainData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  PartyAssistMainData::PartyAssistMainData(aPStack_108,pPVar1);
  std::string::string(asStack_110,"UIText_Ticket");
  this_01 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_110);
  std::string::~string(asStack_110);
  nop();
  if (this_01 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_a0);
    UIWidgetText::SetString(this_01,asStack_110);
    std::string::~string(asStack_110);
  }
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  PlayerInfo::SetMaterialNum(this_03,0x5b2d,local_a0[0]);
  PartyAssistMainData::~PartyAssistMainData(aPStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::AssistConfirm(UIMessageBox*, int) */

void __thiscall UIPartyAssist::AssistConfirm(UIPartyAssist *this,UIMessageBox *param_1,int param_2)

{
  string *this_00;
  string *psVar1;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2952];
  string asStack_160 [344];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    __n = auStack_d48;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    psVar1 = asStack_d40;
    std::string::string(asStack_ce8,"selectGift");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_ce8);
    std::string::append(this_00,"",(size_t)psVar1);
    std::string::~string(asStack_ce8);
    nop();
    std::string::string(asStack_d40,"ecn");
    psVar1 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)amStack_d18,asStack_d40);
    DString::DString((DString *)asStack_ce8,*(int *)(this + 0x178));
    __s = (char *)DString::c_str((DString *)asStack_ce8);
    std::string::append(psVar1,__s,(size_t)__n);
    DString::~DString((DString *)asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_04ea377c(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_160,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::ChangeBonusInfo(bool) */

void __thiscall UIPartyAssist::ChangeBonusInfo(UIPartyAssist *this,bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  PVZ2UIButton *pPVar7;
  PVZ2UIButton *pPVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PartyAssistMainData *pPVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  UIWidgetText *pUVar12;
  UIScrollControl *this_01;
  long lVar13;
  long *plVar14;
  Widget *this_02;
  int *piVar15;
  PartyAssistBonusWidget *this_03;
  PartyAssistBonusInfo *pPVar16;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_04;
  int iVar17;
  int iVar18;
  string asStack_128 [8];
  undefined8 local_120;
  undefined8 local_118;
  string asStack_108 [136];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_80 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this[0x160] = (UIPartyAssist)((byte)this[0x160] ^ 1);
  }
  std::string::string(asStack_108,"UIButton_NextLevelBonus");
  pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_108);
  std::string::~string(asStack_108);
  nop();
  std::string::string(asStack_108,"UIButton_AllBonus");
  pPVar8 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_108);
  std::string::~string(asStack_108);
  nop();
  (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,(byte)this[0x160] ^ 1);
  (**(code **)(*(long *)pPVar8 + 0x158))(pPVar8,this[0x160]);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
  pPVar9 = (PartyAssistMainData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  PartyAssistMainData::PartyAssistMainData((PartyAssistMainData *)asStack_108,pPVar9);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_120);
  if (this[0x160] == (UIPartyAssist)0x0) {
    this_04 = avStack_80;
  }
  else {
    this_04 = avStack_68;
  }
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin(this_04);
  uVar11 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end(this_04);
  std::vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>>::
  assign<__gnu_cxx::__normal_iterator<PartyAssistBonusInfo*,std::vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>>>,void>
            ((vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>> *)&local_120,uVar10,
             uVar11);
  iVar4 = FUN_04ea236c(local_120,local_118);
  std::string::string(asStack_128,"UIText_BonusTips");
  pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_128);
  std::string::~string(asStack_128);
  nop();
  if (pUVar12 != (UIWidgetText *)0x0) {
    (**(code **)(*(long *)pUVar12 + 0x158))(pUVar12,iVar4 == 0);
  }
  std::string::string(asStack_128,"UIScroll_0");
  this_01 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,asStack_128);
  std::string::~string(asStack_128);
  nop();
  lVar13 = AccessoryContent::GetDisplayImage((AccessoryContent *)this_01);
  *(undefined4 *)(lVar13 + 0x50) = *(undefined4 *)(this_01 + 0x50);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,1);
  iVar5 = FUN_04ea3948(5);
  iVar2 = *(int *)(this_01 + 0x54);
  iVar6 = FUN_04ea3948(0x14);
  plVar14 = *(long **)(this + 0x168);
  iVar3 = iVar2 - iVar6;
  iVar2 = iVar2 + iVar5 * -2;
  if (plVar14 == (long *)0x0) {
    this_02 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_02);
    *(Widget **)(this + 0x168) = this_02;
  }
  else {
    (**(code **)(*plVar14 + 0x80))(plVar14,1,1);
    this_02 = *(Widget **)(this + 0x168);
  }
  iVar1 = iVar5 + iVar2;
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,0,0,iVar5 + iVar1 * iVar4,*(undefined4 *)(this_01 + 0x54));
  if (0 < iVar4) {
    iVar18 = 0;
    lVar13 = 0;
    iVar17 = 0;
    do {
      while (this[0x160] == (UIPartyAssist)0x0) {
        piVar15 = (int *)FUN_04ea2394(local_120,lVar13);
        this_03 = (PartyAssistBonusWidget *)
                  PartyAssistBonusWidget::CreateUIRewardFrame(*piVar15,piVar15[1],true);
        (**(code **)(*(long *)this_03 + 0x198))(this_03,iVar18,iVar6,iVar3,iVar3);
        pPVar16 = (PartyAssistBonusInfo *)FUN_04ea2394(local_120,lVar13);
        PartyAssistBonusWidget::Init(this_03,pPVar16);
LAB_04eaebcc:
        lVar13 = lVar13 + 1;
        (**(code **)(**(long **)(this + 0x168) + 0x60))(*(long **)(this + 0x168),this_03);
        iVar18 = iVar18 + iVar5 + iVar3;
        iVar17 = iVar17 + iVar1;
        if (iVar4 <= (int)lVar13) goto LAB_04eaebfc;
      }
      if (lVar13 == 0) {
        piVar15 = (int *)FUN_04ea2394(local_120,0);
        this_03 = (PartyAssistBonusWidget *)
                  PartyAssistRewardFrame::CreateUIRewardFrame(*piVar15,piVar15[1],true);
        (**(code **)(*(long *)this_03 + 0x198))(this_03,0,iVar5,iVar2,iVar2);
        FUN_04ea1d60(this_03 + 0x164,1);
        FUN_04ea1d68(this_03 + 0x160,0);
        goto LAB_04eaebcc;
      }
      piVar15 = (int *)FUN_04ea2394(local_120,lVar13);
      lVar13 = lVar13 + 1;
      plVar14 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar15,piVar15[1],true);
      (**(code **)(*plVar14 + 0x198))(plVar14,iVar17,iVar5,iVar2,iVar2);
      (**(code **)(**(long **)(this + 0x168) + 0x60))(*(long **)(this + 0x168),plVar14);
      iVar18 = iVar18 + iVar5 + iVar3;
      iVar17 = iVar17 + iVar1;
    } while ((int)lVar13 < iVar4);
  }
LAB_04eaebfc:
  (**(code **)(*(long *)this_01 + 0x60))(this_01,*(undefined8 *)(this + 0x168));
  std::vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>>::~vector
            ((vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>> *)&local_120);
  PartyAssistMainData::~PartyAssistMainData((PartyAssistMainData *)asStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPartyAssist::ButtonDepress(int) */

void __thiscall UIPartyAssist::ButtonDepress(UIPartyAssist *this,int param_1)

{
  switch(param_1) {
  case 1000:
    UISingletonDialog<UIPartyAssist>::CloseDialog();
    return;
  case 0x3e9:
    Assist(this);
    return;
  case 0x3ea:
    ShowResetTips(this);
    return;
  case 0x3eb:
    ShowMainTips(this);
    return;
  case 0x3ec:
  case 0x3ed:
    ChangeBonusInfo(this,true);
    return;
  default:
    return;
  }
}


/* non-virtual thunk to UIPartyAssist::ButtonDepress(int) */

void __thiscall UIPartyAssist::ButtonDepress(UIPartyAssist *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::InitAssist() */

void __thiscall UIPartyAssist::InitAssist(UIPartyAssist *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PartyAssistMainData *pPVar1;
  string asStack_118 [8];
  string asStack_110 [8];
  PartyAssistMainData aPStack_108 [184];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
  pPVar1 = (PartyAssistMainData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  PartyAssistMainData::PartyAssistMainData(aPStack_108,pPVar1);
  FUN_05475d88(asStack_118,auStack_50);
  FUN_05475d88(asStack_110,auStack_48);
  InitFinalBonusHeadicon(this,asStack_118,asStack_110,0);
  std::string::~string(asStack_110);
  std::string::~string(asStack_118);
  RefreshLevel(this);
  RefreshResetButton(this);
  RefreshTickets(this);
  ChangeBonusInfo(this,false);
  PartyAssistMainData::~PartyAssistMainData(aPStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::Refresh() */

void __thiscall UIPartyAssist::Refresh(UIPartyAssist *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PartyAssistMainData *pPVar1;
  string asStack_118 [8];
  string asStack_110 [8];
  PartyAssistMainData aPStack_108 [184];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RefreshTickets(this);
  RefreshResetButton(this);
  RefreshLevel(this);
  ChangeBonusInfo(this,false);
  RefreshTasks(this);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
  pPVar1 = (PartyAssistMainData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  PartyAssistMainData::PartyAssistMainData(aPStack_108,pPVar1);
  FUN_05475d88(asStack_118,auStack_50);
  FUN_05475d88(asStack_110,auStack_48);
  InitFinalBonusHeadicon(this,asStack_118,asStack_110,1);
  std::string::~string(asStack_110);
  std::string::~string(asStack_118);
  PartyAssistMainData::~PartyAssistMainData(aPStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::NotifyRefreshActivityList(bool, std::set<int, std::less<int>, std::allocator<int>
   > const&) */

void __thiscall
UIPartyAssist::NotifyRefreshActivityList(UIPartyAssist *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  PartyAssistMgr *this_00;
  int local_194;
  undefined8 local_190;
  ActiveItem aAStack_188 [8];
  undefined4 local_180;
  char local_170;
  undefined8 local_108 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_194 = 0x2a79;
    local_190 = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_194);
    local_108[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_190,(rbtree_iterator *)local_108);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_04ea1d74(local_180);
      if ((cVar2 != '\0') && (local_170 != '\0')) {
        PartyAssistMainData::PartyAssistMainData((PartyAssistMainData *)local_108);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_188,(RtObject *)local_108);
        if (cVar2 != '\0') {
          this_00 = (PartyAssistMgr *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
          PartyAssistMgr::LoadData(this_00,(PartyAssistMainData *)local_108);
          Refresh(this);
        }
        PartyAssistMainData::~PartyAssistMainData((PartyAssistMainData *)local_108);
      }
      ActiveItem::~ActiveItem(aAStack_188);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssist::OnCreate() */

void __thiscall UIPartyAssist::OnCreate(UIPartyAssist *this)

{
  int iVar1;
  Widget *pWVar2;
  UITabControl *this_00;
  char *__s;
  TGALogMgr *this_01;
  DString *__n;
  DString aDStack_c8 [16];
  string asStack_b8 [48];
  ActiveItem aAStack_88 [80];
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_b8,"Background_0");
  pWVar2 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_b8);
  std::string::~string(asStack_b8);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar2,true);
  InitAssist(this);
  InitPresent(this);
  InitTasks(this);
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  *(undefined8 *)(this + 0x148) = local_38;
  __n = aDStack_c8;
  std::string::string(asStack_b8,"UITabControl_0");
  this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_b8);
  std::string::~string(asStack_b8);
  nop();
  if (this_00 != (UITabControl *)0x0) {
    UITabControl::SetListener(this_00,(TabControlListener *)(this + 0x138));
  }
  TGASecretStore::TGASecretStore((TGASecretStore *)asStack_b8);
  DString::DString(aDStack_c8,6);
  __s = (char *)DString::c_str(aDStack_c8);
  std::string::append(asStack_b8,__s,(size_t)__n);
  DString::~DString(aDStack_c8);
  this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogPartyAssistData(this_01,(TGAPartyAssistData *)asStack_b8);
  DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_b8);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

