// Class: UITreasurePavilion


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITreasurePavilion::GetLayoutName() */

void __thiscall UITreasurePavilion::GetLayoutName(UITreasurePavilion *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UITreasurePavilion");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UITreasurePavilion::CloseDescriptionWidget() */

void __thiscall UITreasurePavilion::CloseDescriptionWidget(UITreasurePavilion *this)

{
  if (*(long *)(this + 0x1f8) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x1f8))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x1f8));
    *(undefined8 *)(this + 0x1f8) = 0;
  }
  return;
}


/* UITreasurePavilion::CloseTreasurePavilionRewardPool() */

void __thiscall UITreasurePavilion::CloseTreasurePavilionRewardPool(UITreasurePavilion *this)

{
  if (*(long *)(this + 0x200) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x200))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x200));
    *(undefined8 *)(this + 0x200) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITreasurePavilion::Update() */

void __thiscall UITreasurePavilion::Update(UITreasurePavilion *this)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  std::string::string(asStack_10,"UIText_Timer");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    TimeUtil::GetTimeCountdown(3,0x2a81);
    TimeUtil::GetTimeCountdownFormat((TimeUtil *)asStack_10,0);
    PuzzleTip::SetTip(pUVar1,asStack_10);
    FUN_05476c50(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITreasurePavilion::Refresh() */

void __thiscall UITreasurePavilion::Refresh(UITreasurePavilion *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetText *pUVar1;
  undefined4 local_24;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"mat_treasure_pavilion_token");
  local_24 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_20,"UIText_MaterialNum");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_24);
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITreasurePavilion::loadData(TreasurePavilionData const&) */

void __thiscall UITreasurePavilion::loadData(UITreasurePavilion *this,TreasurePavilionData *param_1)

{
  long lVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetImage *pUVar2;
  UIWidgetText *pUVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_28 [8];
  string asStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_034a1780(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  if ((lVar1 == 8) &&
     (lVar1 = FUN_034a15a8(*(undefined8 *)(this + 0x168),*(undefined8 *)(this + 0x170)), lVar1 == 5)
     ) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    uVar8 = 2;
    std::string::string(asStack_10,"mat_treasure_pavilion_token");
    PlayerInfo::SetMaterialNum(this_01,asStack_10,*(int *)(param_1 + 0x14));
    std::string::~string(asStack_10);
    nop();
    Refresh(this);
    std::string::string(asStack_10,"UIImage_Bubble_Mask1");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    lVar1 = FUN_034a17b0(*(undefined8 *)(param_1 + 0x48),0);
    (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,*(int *)(lVar1 + 8) == 0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"UIText_Bubble_Gained1");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    lVar1 = FUN_034a17b0(*(undefined8 *)(param_1 + 0x48),0);
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,*(int *)(lVar1 + 8) == 1);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"UIImage_Bubble_Mask2");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    lVar1 = FUN_034a17b0(*(undefined8 *)(param_1 + 0x48),1);
    (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,*(int *)(lVar1 + 8) == 0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"UIText_Bubble_Gained2");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    lVar1 = FUN_034a17b0(*(undefined8 *)(param_1 + 0x48),1);
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,*(int *)(lVar1 + 8) == 1);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"UIImage_Bubble_Mask3");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"UIText_Bubble_Gained3");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,1);
    std::string::~string(asStack_10);
    nop();
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    uVar4 = FUN_034a1780(uVar9,*(undefined8 *)(param_1 + 0x50));
    if (2 < uVar4) {
      do {
        lVar1 = FUN_034a17b0(uVar9,uVar8);
        if (*(int *)(lVar1 + 8) == 0) {
          std::string::string(asStack_10,"UIImage_Bubble_Mask3");
          pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
          (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,1);
          std::string::~string(asStack_10);
          nop();
          std::string::string(asStack_10,"UIText_Bubble_Gained3");
          pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
          (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
          std::string::~string(asStack_10);
          nop();
          uVar9 = *(undefined8 *)(param_1 + 0x48);
          uVar4 = FUN_034a1780(uVar9,*(undefined8 *)(param_1 + 0x50));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar4);
    }
    std::string::string(asStack_20,"UIText_Bubble_Available1");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
    FUN_05478178(awStack_18,L"[LOTTERY_TIMES_MUST_GET]",auStack_28);
    piVar5 = (int *)FUN_034a17bc(*(undefined8 *)(this + 0x168),0);
    piVar6 = (int *)FUN_034a15b4(*(undefined8 *)(param_1 + 0x18),0);
    TodReplaceNumberString(awStack_18,L"{NUM}",*piVar5 - *piVar6);
    PuzzleTip::SetTip(pUVar3,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    std::string::string(asStack_20,"UIText_Bubble_Available2");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
    FUN_05478178(awStack_18,L"[LOTTERY_TIMES_MUST_GET]",auStack_28);
    piVar5 = (int *)FUN_034a17bc(*(undefined8 *)(this + 0x168),1);
    piVar6 = (int *)FUN_034a15b4(*(undefined8 *)(param_1 + 0x18),1);
    TodReplaceNumberString(awStack_18,L"{NUM}",*piVar5 - *piVar6);
    PuzzleTip::SetTip(pUVar3,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    std::string::string(asStack_20,"UIText_Bubble_Available3");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
    FUN_05478178(awStack_18,L"[LOTTERY_TIMES_MUST_GET]",auStack_28);
    piVar5 = (int *)FUN_034a17bc(*(undefined8 *)(this + 0x168),2);
    piVar6 = (int *)FUN_034a15b4(*(undefined8 *)(param_1 + 0x18),2);
    TodReplaceNumberString(awStack_18,L"{NUM}",*piVar5 - *piVar6);
    PuzzleTip::SetTip(pUVar3,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    std::string::string(asStack_20,"UIText_LotteryTips");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
    FUN_05478178(awStack_18,L"[TREASURE_PAVILION_TIPS]",auStack_28);
    piVar5 = (int *)FUN_034a17bc(*(undefined8 *)(this + 0x168),3);
    piVar6 = (int *)FUN_034a15b4(*(undefined8 *)(param_1 + 0x18),3);
    TodReplaceNumberString(awStack_18,L"{NUM}",*piVar5 - *piVar6);
    PuzzleTip::SetTip(pUVar3,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    uVar4 = 0;
LAB_034a307c:
    uVar8 = FUN_034a1780(uVar9,*(undefined8 *)(param_1 + 0x50));
    if (uVar4 < uVar8) {
      uVar8 = uVar4 + 1;
      Sexy::StrFormat("UIImage_Bubble%d",asStack_10,uVar8);
      pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
      std::string::~string(asStack_10);
      if (pUVar2 != (UIWidgetImage *)0x0) {
        uVar9 = *(undefined8 *)(param_1 + 0x48);
        pUVar2[0x6d] = (UIWidgetImage)0x0;
        lVar1 = FUN_034a17b0(uVar9,uVar4);
        if (*(int *)(lVar1 + 8) != 0) {
          (**(code **)(*(long *)pUVar2 + 0x188))(pUVar2,1);
        }
      }
      Sexy::StrFormat("UIImage_Bubble_Reward%d",asStack_10,uVar8);
      pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
      std::string::~string(asStack_10);
      if (pUVar2 != (UIWidgetImage *)0x0) goto code_r0x034a3104;
      goto LAB_034a3234;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x034a3104:
  (**(code **)(*(long *)pUVar2 + 0x80))(pUVar2,1,1);
  piVar5 = (int *)FUN_034a17b0(*(undefined8 *)(param_1 + 0x48),uVar4);
  plVar7 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar5,piVar5[1],false);
  (**(code **)(*plVar7 + 0x198))
            (plVar7,0,0,*(undefined4 *)(pUVar2 + 0x50),*(undefined4 *)(pUVar2 + 0x54));
  (**(code **)(*(long *)pUVar2 + 0x60))(pUVar2,plVar7);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  lVar1 = FUN_034a17b0(uVar9,uVar4);
  uVar4 = uVar8;
  if (*(int *)(lVar1 + 8) != 0) {
    (**(code **)(*plVar7 + 0x188))(plVar7,1);
LAB_034a3234:
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    uVar4 = uVar8;
  }
  goto LAB_034a307c;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITreasurePavilion::ShowDescriptionWidget() */

void __thiscall UITreasurePavilion::ShowDescriptionWidget(UITreasurePavilion *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x1f8) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x1f8) = this_00;
    TodStringTranslate(L"[TREASURE_PAVILION_DESCRIPTION]");
    TodStringTranslate(L"[TREASURE_PAVILION_DESCRIPTION_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x1f8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,CloseDescriptionWidget);
    Sexy::Delegate0::Delegate0<UITreasurePavilion,void(UITreasurePavilion::*)()>
              (aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1f8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1f8));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x1f8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1f8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UITreasurePavilion::UITreasurePavilion() */

void __thiscall UITreasurePavilion::UITreasurePavilion(UITreasurePavilion *this)

{
  UISingletonDialog<UITreasurePavilion>::UISingletonDialog
            ((UISingletonDialog<UITreasurePavilion> *)this);
  *(undefined ***)this = &PTR_GetClass_066455c0;
  *(undefined **)(this + 0xd8) = &DAT_06645910;
  TreasurePavilionData::TreasurePavilionData((TreasurePavilionData *)(this + 0x138));
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  return;
}


/* UITreasurePavilion::confirmJump(UIMessageBox*, int) */

void __thiscall
UITreasurePavilion::confirmJump(UITreasurePavilion *this,UIMessageBox *param_1,int param_2)

{
  UITreasurePavilionBundle *this_00;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  this_00 = (UITreasurePavilionBundle *)UISingletonDialog<UITreasurePavilionBundle>::ShowDialog();
  UITreasurePavilionBundle::InitView(this_00,(TreasurePavilionData *)(this + 0x138));
  return;
}


/* UITreasurePavilion::~UITreasurePavilion() */

void __thiscall UITreasurePavilion::~UITreasurePavilion(UITreasurePavilion *this)

{
  *(undefined ***)this = &PTR_GetClass_066455c0;
  *(undefined **)(this + 0xd8) = &DAT_06645910;
  TreasurePavilionData::~TreasurePavilionData((TreasurePavilionData *)(this + 0x138));
  UISingletonDialog<UITreasurePavilion>::~UISingletonDialog
            ((UISingletonDialog<UITreasurePavilion> *)this);
  return;
}


/* UITreasurePavilion::~UITreasurePavilion() */

void __thiscall UITreasurePavilion::~UITreasurePavilion(UITreasurePavilion *this)

{
  ~UITreasurePavilion(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITreasurePavilion::lottery(int) */

void __thiscall UITreasurePavilion::lottery(UITreasurePavilion *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *this_02;
  Image *pIVar2;
  long lVar3;
  undefined8 uVar4;
  DNetwork *this_03;
  int iVar5;
  int local_d64 [3];
  wstring awStack_d58 [8];
  string asStack_d50 [8];
  Delegate2<UIMessageBox*,int> aDStack_d48 [48];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [3128];
  string asStack_b0 [168];
  long local_8;
  
  iVar5 = 9;
  if (param_1 == 1) {
    iVar5 = 1;
  }
  local_8 = ___stack_chk_guard;
  local_d64[0] = param_1;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_ce8,"mat_treasure_pavilion_token");
  iVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  if (iVar1 < iVar5) {
    this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_02 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_02,6);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      TodStringTranslate(L"[TREASURE_PAVILION_MAT_NOT_ENOUGH]");
      UIMessageBox::SetMessage(this_02,(wstring *)amStack_d18,awStack_d58);
      std::string::string(asStack_ce8,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar2 = (Image *)StringHelper::ToImage(asStack_ce8,false);
      UIMessageBox::SetBackground(this_02,pIVar2);
      std::string::~string(asStack_ce8);
      nop();
      lVar3 = UIMessageBox::GetButtonOK(this_02);
      thunk_FUN_05477b9c(lVar3 + 0xd8,asStack_d50);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,confirmJump);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<UITreasurePavilion,void(UITreasurePavilion::*)(UIMessageBox*,int)>
                (aDStack_d48,asStack_ce8);
      UIMessageBox::SetCallback(this_02,aDStack_d48);
      FUN_05476c50(amStack_d18);
      FUN_05476c50(asStack_d50);
      FUN_05476c50(awStack_d58);
    }
  }
  else {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d50,"t");
    uVar4 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d50);
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_d64);
    FUN_05474278(uVar4,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d50);
    nop();
    this_03 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_034a1cb8((function<bool(Sexy::Touch_const&)> *)aDStack_d48,this,local_d64[0]);
    std::string::string(asStack_d50,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_03,asStack_b0,(map *)amStack_d18,30.0,(function *)aDStack_d48,true,true,
               asStack_d50,0);
    std::string::~string(asStack_d50);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)aDStack_d48);
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
/* UITreasurePavilion::ShowTreasurePavilionRewardPool() */

void __thiscall UITreasurePavilion::ShowTreasurePavilionRewardPool(UITreasurePavilion *this)

{
  TreasurePavilionRewardPool *this_00;
  wstring awStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x200) == 0) {
    this_00 = ::operator_new(0xe8);
    TreasurePavilionRewardPool::TreasurePavilionRewardPool(this_00);
    *(TreasurePavilionRewardPool **)(this + 0x200) = this_00;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    TodStringTranslate(L"[TREASURE_PAVILION_RARE_1]");
    std::vector<std::wstring,std::allocator<std::wstring>>::push_back
              ((vector<std::wstring,std::allocator<std::wstring>> *)avStack_20,awStack_28);
    FUN_05476c50(awStack_28);
    TodStringTranslate(L"[TREASURE_PAVILION_RARE_2]");
    std::vector<std::wstring,std::allocator<std::wstring>>::push_back
              ((vector<std::wstring,std::allocator<std::wstring>> *)avStack_20,awStack_28);
    FUN_05476c50(awStack_28);
    TodStringTranslate(L"[TREASURE_PAVILION_RARE_3]");
    std::vector<std::wstring,std::allocator<std::wstring>>::push_back
              ((vector<std::wstring,std::allocator<std::wstring>> *)avStack_20,awStack_28);
    FUN_05476c50(awStack_28);
    TodStringTranslate(L"[TREASURE_PAVILION_RARE_4]");
    std::vector<std::wstring,std::allocator<std::wstring>>::push_back
              ((vector<std::wstring,std::allocator<std::wstring>> *)avStack_20,awStack_28);
    FUN_05476c50(awStack_28);
    TreasurePavilionRewardPool::InitView
              (*(TreasurePavilionRewardPool **)(this + 0x200),(vector *)avStack_20,
               (vector *)(this + 0x198));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x200));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x200));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x200));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x200));
    std::vector<std::wstring,std::allocator<std::wstring>>::~vector
              ((vector<std::wstring,std::allocator<std::wstring>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UITreasurePavilion::ButtonDepress(int) */

void __thiscall UITreasurePavilion::ButtonDepress(UITreasurePavilion *this,int param_1)

{
  UITreasurePavilionBundle *this_00;
  
  switch(param_1) {
  case 0x58:
    UISingletonDialog<UITreasurePavilion>::CloseDialog();
    return;
  default:
    return;
  case 0x65:
    ShowDescriptionWidget(this);
    return;
  case 0x66:
    this_00 = (UITreasurePavilionBundle *)UISingletonDialog<UITreasurePavilionBundle>::ShowDialog();
    UITreasurePavilionBundle::InitView(this_00,(TreasurePavilionData *)(this + 0x138));
    return;
  case 0x67:
    ShowTreasurePavilionRewardPool(this);
    return;
  case 0x68:
    lottery(this,1);
    return;
  case 0x69:
    lottery(this,2);
    return;
  }
}


/* non-virtual thunk to UITreasurePavilion::ButtonDepress(int) */

void __thiscall UITreasurePavilion::ButtonDepress(UITreasurePavilion *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITreasurePavilion::InitView() */

void __thiscall UITreasurePavilion::InitView(UITreasurePavilion *this)

{
  char cVar1;
  int iVar2;
  UIWidgetImage *pUVar3;
  UIWidgetText *pUVar4;
  string asStack_90 [8];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_90,"UIImage_Mat1");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_90);
  pUVar3[0x6d] = (UIWidgetImage)0x0;
  std::string::~string(asStack_90);
  nop();
  std::string::string(asStack_90,"UIImage_Mat2");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_90);
  pUVar3[0x6d] = (UIWidgetImage)0x0;
  std::string::~string(asStack_90);
  nop();
  std::string::string(asStack_90,"UIText_MatCost1");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_90);
  pUVar4[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_90);
  nop();
  std::string::string(asStack_90,"UIText_MatCost2");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_90);
  pUVar4[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_90);
  nop();
  std::string::string(asStack_90,"UIText_Lottery1");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_90);
  pUVar4[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_90);
  nop();
  std::string::string(asStack_90,"UIText_Lottery2");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_90);
  pUVar4[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_90);
  nop();
  std::string::string(asStack_90,"UIImage_Discount");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_90);
  pUVar3[0x6d] = (UIWidgetImage)0x0;
  std::string::~string(asStack_90);
  nop();
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_034a159c(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x138));
    if (cVar1 != '\0') {
      loadData(this,(TreasurePavilionData *)(this + 0x138));
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITreasurePavilion::OnCreate() */

void __thiscall UITreasurePavilion::OnCreate(UITreasurePavilion *this)

{
  UIWidgetBackground *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(pUVar1 + 0x48) = 0;
  *(undefined4 *)(pUVar1 + 0x4c) = 0;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

