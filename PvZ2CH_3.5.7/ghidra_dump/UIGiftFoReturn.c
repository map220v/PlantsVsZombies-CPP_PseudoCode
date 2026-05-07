// Class: UIGiftFoReturn


/* UIGiftFoReturn::SetIntegral(int) */

void __thiscall UIGiftFoReturn::SetIntegral(UIGiftFoReturn *this,int param_1)

{
  *(int *)(this + 0x188) = param_1;
  return;
}


/* UIGiftFoReturn::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIGiftFoReturn::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIGiftFoReturn::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIGiftFoReturn::ScrollTargetReached(UIGiftFoReturn *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIGiftFoReturn::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIGiftFoReturn::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIGiftFoReturn::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UIGiftFoReturn::ScrollTargetInterrupted(UIGiftFoReturn *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGiftFoReturn::GetLayoutName() */

void __thiscall UIGiftFoReturn::GetLayoutName(UIGiftFoReturn *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIGiftFoReturn");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIGiftFoReturn::closeDescriptionWidget() */

void __thiscall UIGiftFoReturn::closeDescriptionWidget(UIGiftFoReturn *this)

{
  if (*(long *)(this + 0x140) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x140))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x140));
    *(undefined8 *)(this + 0x140) = 0;
  }
  return;
}


/* UIGiftFoReturn::GetSignState(int) */

undefined4 __thiscall UIGiftFoReturn::GetSignState(UIGiftFoReturn *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(this + 0x184) < param_1) && (uVar1 = 2, *(int *)(this + 0x184) + 1 == param_1)) {
    uVar1 = 2;
    if (*(int *)(this + 0x180) == 0) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGiftFoReturn::Update() */

void __thiscall UIGiftFoReturn::Update(UIGiftFoReturn *this)

{
  UIWidgetText *pUVar1;
  long lVar2;
  long lVar3;
  string asStack_18 [8];
  TimeUtil aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  std::string::string(asStack_18,"UIText_Timer");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  TimeUtil::GetTimeCountdown(3,0x2a76);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
  PuzzleTip::SetTip(pUVar1,aTStack_10);
  FUN_05476c50(aTStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Tab3_Timer");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  lVar3 = *(long *)(this + 0x220);
  lVar2 = LawnApp::GetRealServerTime(gLawnApp);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,(float)(lVar3 - lVar2),0);
  PuzzleTip::SetTip(pUVar1,aTStack_10);
  FUN_05476c50(aTStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGiftFoReturn::showDescriptionWidget() */

void __thiscall UIGiftFoReturn::showDescriptionWidget(UIGiftFoReturn *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x140) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x140) = this_00;
    TodStringTranslate(L"[GIFT_RETURN_DESCRIPTION]");
    TodStringTranslate(L"[GIFT_RETURN_DESCRIPTION_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x140);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<UIGiftFoReturn,void(UIGiftFoReturn::*)()>(aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x140));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGiftFoReturn::ButtonDepress(int) */

void __thiscall UIGiftFoReturn::ButtonDepress(UIGiftFoReturn *this,int param_1)

{
  TGALogMgr *this_00;
  size_t __n;
  TGASecretStore aTStack_38 [48];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xb) {
    showDescriptionWidget(this);
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<UIGiftFoReturn>::CloseDialog();
  }
  else if (param_1 == 0x14d) {
    __n = ___stack_chk_guard;
    UISingletonDialog<UIUpdateNews>::ShowDialog();
    TGASecretStore::TGASecretStore(aTStack_38);
    std::string::append((string *)aTStack_38,"3",__n);
    this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogGiftReturnData(this_00,(TGAGiftReturnData *)aTStack_38);
    DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIGiftFoReturn::ButtonDepress(int) */

void __thiscall UIGiftFoReturn::ButtonDepress(UIGiftFoReturn *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGiftFoReturn::RefreshTaskReward() */

void __thiscall UIGiftFoReturn::RefreshTaskReward(UIGiftFoReturn *this)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  UIWidgetImage *pUVar10;
  UIWidgetImage *pUVar11;
  UIWidgetText *pUVar12;
  ulong uVar13;
  int *piVar14;
  UtilEasyDisplayWidget *this_00;
  long *plVar15;
  UIWidgetText *this_01;
  float *pfVar16;
  code *pcVar17;
  undefined4 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  float fVar22;
  UIGiftFoReturn *local_b0;
  undefined8 uStack_a8;
  UtilEasyDisplayWidget *local_a0;
  UIGiftFoReturn *local_90;
  undefined8 uStack_88;
  UIWidgetImage *local_80;
  undefined4 local_70 [2];
  float local_68 [4];
  UIGiftFoReturn *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  UIWidgetImage *local_48;
  UIGiftFoReturn *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  UtilEasyDisplayWidget *local_30;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  uVar19 = 0;
  uVar20 = *(undefined8 *)(this + 0x1a8);
  uVar18 = 0;
  local_8 = ___stack_chk_guard;
  lVar8 = FUN_0348a090(uVar20,*(undefined8 *)(this + 0x1b0));
  if (lVar8 != 0) {
    do {
      uVar1 = (int)uVar19 + 1;
      puVar9 = (uint *)FUN_0348a0c0(uVar20,uVar19);
      Sexy::StrFormat("UIImage_Tab2_RewardBack%d",(string *)local_68,(ulong)uVar1);
      pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_68);
      std::string::~string((string *)local_68);
      Sexy::StrFormat("UIImage_Tab2_RewardGot%d",(string *)local_68,(ulong)uVar1);
      pUVar11 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_68);
      std::string::~string((string *)local_68);
      Sexy::StrFormat("UIText_Tab2_Cond%d",(string *)local_68,(ulong)uVar1);
      pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_68);
      std::string::~string((string *)local_68);
      if (pUVar10 != (UIWidgetImage *)0x0) {
        (**(code **)(*(long *)pUVar10 + 0x80))(pUVar10,1,1);
        cVar4 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                          ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(puVar9 + 2));
        if (cVar4 == '\0') {
          piVar14 = (int *)FUN_03489ff8(*(undefined8 *)(puVar9 + 2),0);
          plVar15 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar14,0,false);
          uVar5 = FUN_0348b398(10);
          iVar6 = FUN_0348b398(0x14);
          (**(code **)(*plVar15 + 0x198))
                    (plVar15,uVar5,uVar5,*(int *)(pUVar10 + 0x54) - iVar6,
                     *(int *)(pUVar10 + 0x54) - iVar6);
          (**(code **)(*(long *)pUVar10 + 0x60))(pUVar10,plVar15);
          lVar8 = FUN_03489ff8(*(undefined8 *)(puVar9 + 2),0);
          Sexy::StrFormat("X%d",(string *)local_70,(ulong)*(uint *)(lVar8 + 4));
          Sexy::ToWString((string *)local_70);
          this_01 = ::operator_new(0x108);
          UIWidgetText::UIWidgetText(this_01,(wstring *)local_68);
          FUN_05476c50((string *)local_68);
          std::string::~string((string *)local_70);
          iVar6 = FUN_0348b398(10);
          (**(code **)(*(long *)this_01 + 0x198))
                    (this_01,0,0,*(int *)(pUVar10 + 0x50) - iVar6,*(undefined4 *)(pUVar10 + 0x54));
          pcVar17 = *(code **)(*(long *)this_01 + 0x170);
          Sexy::Color::Color((Color *)local_68,4);
          (*pcVar17)(this_01,0,(string *)local_68);
          FUN_03489fb4(this_01 + 0xe0,4);
          uVar20 = PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_FZCuYuan_19_Outline);
          FUN_03489fac(this_01 + 0xe8,uVar20);
          lVar8 = *(long *)pUVar10;
          this_01[0x6d] = (UIWidgetText)0x0;
          (**(code **)(lVar8 + 0x60))(pUVar10,this_01);
        }
        if ((puVar9[8] == 0) && ((int)*puVar9 <= *(int *)(this + 0x188))) {
          this_00 = ::operator_new(0x118);
          UtilEasyDisplayWidget::UtilEasyDisplayWidget(this_00);
          (**(code **)(*(long *)this_00 + 0x198))
                    (this_00,0,0,*(undefined4 *)(pUVar10 + 0x50),*(undefined4 *)(pUVar10 + 0x54));
          uStack_88 = CONCAT44(uStack_4c,uVar18);
          local_90 = this;
          local_80 = pUVar10;
          local_58 = this;
          local_50 = uVar18;
          local_48 = pUVar10;
          FUN_0348b338(afStack_28,&local_90);
          UtilEasyDisplayWidget::SetDrawFunction(this_00,afStack_28);
          std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
          uStack_a8 = CONCAT44(uStack_34,uVar18);
          local_b0 = this;
          local_a0 = this_00;
          local_40 = this;
          local_38 = uVar18;
          local_30 = this_00;
          FUN_0348b0b0(afStack_28,&local_b0);
          UtilEasyDisplayWidget::SetTouchFunction(this_00,afStack_28);
          std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
          (**(code **)(*(long *)pUVar10 + 0x60))(pUVar10,this_00);
        }
      }
      if (pUVar11 != (UIWidgetImage *)0x0) {
        uVar1 = puVar9[8];
        pUVar11[0x6d] = (UIWidgetImage)0x0;
        if (uVar1 == 0) {
          (**(code **)(*(long *)pUVar11 + 0x158))(pUVar11);
        }
        else {
          (**(code **)(*(long *)pUVar11 + 0x158))(pUVar11,1);
        }
      }
      if (pUVar12 != (UIWidgetText *)0x0) {
        Sexy::StrFormat("X%d",(string *)local_70,(ulong)*puVar9);
        Sexy::ToWString((string *)local_70);
        PuzzleTip::SetTip(pUVar12,(string *)local_68);
        FUN_05476c50((string *)local_68);
        std::string::~string((string *)local_70);
      }
      uVar19 = uVar19 + 1;
      uVar20 = *(undefined8 *)(this + 0x1a8);
      uVar18 = (undefined4)uVar19;
      uVar13 = FUN_0348a090(uVar20,*(undefined8 *)(this + 0x1b0));
    } while (uVar19 < uVar13);
  }
  fVar22 = 0.0;
  lVar21 = 0;
  std::string::string((string *)local_68,"UIImage_Tab2_Progress_Bar");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_68);
  std::string::~string((string *)local_68);
  nop();
  std::string::string((string *)local_68,"UIImage_Tab2_Progress_Fill");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_68);
  std::string::~string((string *)local_68);
  nop();
  uVar20 = *(undefined8 *)(this + 0x1a8);
  lVar8 = FUN_0348a090(uVar20,*(undefined8 *)(this + 0x1b0));
  if (lVar8 != 0) {
    do {
      iVar6 = *(int *)(this + 0x188);
      piVar14 = (int *)FUN_0348a0c0(uVar20,lVar21);
      iVar2 = *piVar14;
      fVar3 = 0.14285715;
      if (iVar6 < iVar2) {
        iVar7 = 0;
        if ((int)lVar21 != 0) {
          piVar14 = (int *)FUN_0348a0c0(uVar20,lVar21 + -1);
          iVar7 = *piVar14;
        }
        if (iVar7 == iVar2) goto LAB_0348e028;
        local_70[0] = 0;
        local_68[0] = (float)(iVar6 - iVar7) / (float)(iVar2 - iVar7);
        pfVar16 = eastl::max_alt<float>((float *)local_70,local_68);
        fVar3 = *pfVar16 * 0.14285715;
      }
      fVar22 = fVar22 + fVar3;
      lVar21 = lVar21 + 1;
    } while (lVar21 != lVar8);
  }
  *(int *)(pUVar11 + 0x50) = (int)(fVar22 * (float)*(int *)(pUVar10 + 0x50));
LAB_0348e028:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UIGiftFoReturn::~UIGiftFoReturn() */

void __thiscall UIGiftFoReturn::~UIGiftFoReturn(UIGiftFoReturn *this)

{
  *(undefined ***)this = &PTR_GetClass_066410c0;
  *(undefined **)(this + 0xd8) = &DAT_06641420;
  *(undefined ***)(this + 0x138) = &PTR__UIGiftFoReturn_06641468;
  GiftFoReturnData::~GiftFoReturnData((GiftFoReturnData *)(this + 0x148));
  UISingletonDialog<UIGiftFoReturn>::~UISingletonDialog((UISingletonDialog<UIGiftFoReturn> *)this);
  return;
}


/* non-virtual thunk to UIGiftFoReturn::~UIGiftFoReturn() */

void __thiscall UIGiftFoReturn::~UIGiftFoReturn(UIGiftFoReturn *this)

{
  ~UIGiftFoReturn(this + -0x138);
  return;
}


/* UIGiftFoReturn::~UIGiftFoReturn() */

void __thiscall UIGiftFoReturn::~UIGiftFoReturn(UIGiftFoReturn *this)

{
  ~UIGiftFoReturn(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIGiftFoReturn::~UIGiftFoReturn() */

void __thiscall UIGiftFoReturn::~UIGiftFoReturn(UIGiftFoReturn *this)

{
  ~UIGiftFoReturn(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGiftFoReturn::RefreshTask() */

void __thiscall UIGiftFoReturn::RefreshTask(UIGiftFoReturn *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UIWidgetImage *pUVar7;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long lVar8;
  GiftFoReturnTaskWidget *this_02;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  GiftFoReturnTaskInfo *pGVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  Insets aIStack_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  string asStack_38 [48];
  long local_8;
  
  uVar16 = 0;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"UIImage_Tab2_BG1");
  iVar15 = 0;
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  (**(code **)(*(long *)pUVar7 + 0x80))(pUVar7,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar1 = FUN_0348b398(0);
  iVar2 = FUN_0348b398(0x14);
  iVar3 = FUN_0348b398(0x28);
  Sexy::Insets::Insets
            (aIStack_60,iVar1,iVar2,*(int *)(pUVar7 + 0x50),*(int *)(pUVar7 + 0x54) - iVar3);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_60);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar3 = FUN_0348b398(0x14);
  iVar4 = FUN_0348b398(0);
  iVar5 = FUN_0348b398(10);
  iVar2 = *(int *)(this_01 + 0x50);
  iVar6 = FUN_0348b398(100);
  iVar1 = Sexy::LazySingleton<GiftFoReturnTaskManager>::GetInstancePtr();
  HappyVaseBreakerTaskManager::GetTasksByGroupID(iVar1 + 8,true);
  lVar8 = FUN_0348a040(local_50,local_48);
  iVar1 = iVar4;
  if (lVar8 != 0) {
    do {
      this_02 = ::operator_new(0x1a0);
      GiftFoReturnTaskWidget::GiftFoReturnTaskWidget(this_02);
      (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar3,iVar1,iVar2 + iVar3 * -2,iVar6);
      puVar9 = (undefined8 *)FUN_0348a04c(local_50,uVar16);
      (**(code **)(*(long *)this_02 + 0x318))(this_02,*puVar9);
      uVar10 = *(undefined8 *)(this + 400);
      uVar14 = 0;
      do {
        uVar13 = FUN_0348a054(uVar10,*(undefined8 *)(this + 0x198));
        if (uVar13 <= uVar14) goto LAB_03490b44;
        plVar11 = (long *)FUN_0348a04c(local_50,uVar16);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar11 + 0x20));
        uVar10 = *(undefined8 *)(this + 400);
        pGVar12 = (GiftFoReturnTaskInfo *)FUN_0348a084(uVar10,uVar14);
        uVar14 = uVar14 + 1;
      } while (*(int *)(lVar8 + 8) != *(int *)(pGVar12 + 0x20));
      GiftFoReturnTaskInfo::GiftFoReturnTaskInfo((GiftFoReturnTaskInfo *)asStack_38,pGVar12);
      GiftFoReturnTaskWidget::SetTaskData(this_02,asStack_38);
      PlantWarsStarRewardData::~PlantWarsStarRewardData((PlantWarsStarRewardData *)asStack_38);
LAB_03490b44:
      uVar16 = uVar16 + 1;
      iVar1 = iVar1 + iVar5 + iVar6;
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
      iVar15 = *(int *)(this_02 + 0x4c) + *(int *)(this_02 + 0x54);
      uVar14 = FUN_0348a040(local_50,local_48);
    } while (uVar16 < uVar14);
  }
  lVar8 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = iVar4 + iVar15;
  (**(code **)(lVar8 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)pUVar7 + 0x60))(pUVar7,this_00);
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UIGiftFoReturn::InitTab2() */

void __thiscall UIGiftFoReturn::InitTab2(UIGiftFoReturn *this)

{
  RefreshTask(this);
  RefreshTaskReward(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGiftFoReturn::InitTab3() */

void __thiscall UIGiftFoReturn::InitTab3(UIGiftFoReturn *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UIWidgetImage *pUVar8;
  ulong uVar9;
  GiftFoReturnBundleWidget *this_00;
  vector *pvVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  ulong uVar14;
  int iVar15;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_Tab3_BG");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar1 = FUN_0348b398(0x1e);
  iVar2 = FUN_0348b398(10);
  iVar3 = FUN_0348b398(0xb4);
  iVar4 = FUN_0348b398(0xaa);
  uVar9 = FUN_0348a0cc(*(undefined8 *)(this + 0x1c0),*(undefined8 *)(this + 0x1c8));
  iVar5 = FUN_03489fd0(*(undefined8 *)(this + 0x1d8),*(undefined8 *)(this + 0x1e0));
  iVar6 = FUN_03489fd0(*(undefined8 *)(this + 0x1f0),*(undefined8 *)(this + 0x1f8));
  iVar7 = FUN_03489fd0(*(undefined8 *)(this + 0x208),*(undefined8 *)(this + 0x210));
  iVar15 = (int)uVar9;
  if ((iVar15 == iVar6 && iVar15 == iVar5) && (iVar15 == iVar7)) {
    for (uVar14 = 0; uVar14 < uVar9; uVar14 = uVar14 + 1) {
      this_00 = ::operator_new(0x130);
      GiftFoReturnBundleWidget::GiftFoReturnBundleWidget(this_00);
      iVar5 = (int)(uVar14 / 3);
      (**(code **)(*(long *)this_00 + 0x198))
                (this_00,iVar1 + (iVar1 + iVar3) * ((int)uVar14 + iVar5 * -3),
                 iVar2 + (iVar2 + iVar4) * iVar5,iVar3,iVar4);
      pvVar10 = (vector *)FUN_0348a0e0(*(undefined8 *)(this + 0x1c0),uVar14);
      piVar11 = (int *)FUN_0348a0ec(*(undefined8 *)(this + 0x1d8),uVar14);
      piVar12 = (int *)FUN_0348a0ec(*(undefined8 *)(this + 0x1f0),uVar14);
      piVar13 = (int *)FUN_0348a0ec(*(undefined8 *)(this + 0x208),uVar14);
      GiftFoReturnBundleWidget::InitView(this_00,(int)uVar14,pvVar10,*piVar11,*piVar12,*piVar13);
      (**(code **)(*(long *)pUVar8 + 0x60))(pUVar8,this_00);
      uVar9 = FUN_0348a0cc(*(undefined8 *)(this + 0x1c0),*(undefined8 *)(this + 0x1c8));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGiftFoReturn::RefreshSign() */

void __thiscall UIGiftFoReturn::RefreshSign(UIGiftFoReturn *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  UIWidgetImage *pUVar9;
  GiftFoReturnSignInfo *pGVar10;
  ulong uVar11;
  GiftFoReturnSignWidget *this_00;
  int iVar12;
  ulong uVar13;
  string asStack_10 [8];
  long local_8;
  
  uVar13 = 0;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_Tab1_BG1");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  while( true ) {
    iVar12 = (int)uVar13;
    uVar11 = FUN_0348a004(*(undefined8 *)(this + 0x168),*(undefined8 *)(this + 0x170));
    if (uVar11 <= uVar13) break;
    this_00 = ::operator_new(0x150);
    GiftFoReturnSignWidget::GiftFoReturnSignWidget(this_00);
    iVar1 = FUN_0348b398(0xf);
    iVar2 = FUN_0348b398(0x78);
    iVar3 = FUN_0348b398(0x82);
    iVar4 = FUN_0348b398(10);
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,iVar1 + (iVar12 % 3) * (iVar1 + iVar2),iVar1 + (iVar12 / 3) * (iVar3 + iVar4)
               ,iVar2);
    if (uVar13 == 6) {
      uVar5 = FUN_0348b398(0x1a4);
      uVar6 = FUN_0348b398(0xf);
      uVar7 = FUN_0348b398(0xe1);
      uVar8 = FUN_0348b398(0x10e);
      (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar5,uVar6,uVar7,uVar8);
    }
    pGVar10 = (GiftFoReturnSignInfo *)FUN_0348a034(*(undefined8 *)(this + 0x168),uVar13);
    uVar13 = uVar13 + 1;
    iVar1 = GetSignState(this,iVar12 + 1);
    GiftFoReturnSignWidget::InitView(this_00,iVar12,pGVar10,iVar1);
    (**(code **)(*(long *)pUVar9 + 0x60))(pUVar9,this_00);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGiftFoReturn::InitTab1() */

void __thiscall UIGiftFoReturn::InitTab1(UIGiftFoReturn *this)

{
  UIWidgetText *pUVar1;
  ProfileMgr *this_00;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RefreshSign(this);
  std::string::string(asStack_10,"UIText_Welcome1");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  FUN_05478178(awStack_18,L"[GIFT_FOR_RETURN_WELCOME_1]",auStack_28);
  PlayerInfo::AM_GetName();
  TodReplaceString(awStack_18,L"{NAME}",awStack_20);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_20);
  FUN_05476c50(awStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGiftFoReturn::RequestTaskIntegralReward(int) */

void __thiscall UIGiftFoReturn::RequestTaskIntegralReward(UIGiftFoReturn *this,int param_1)

{
  string *this_00;
  undefined8 uVar1;
  DNetwork *this_01;
  string *__n;
  int local_d54 [5];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2920];
  string asStack_180 [376];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d54[0] = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n = asStack_d40;
  std::string::string(asStack_ce8,"t");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  std::string::append(this_00,"1",(size_t)__n);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"index");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d54);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_0348b280(afStack_d38,this,local_d54[0]);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_180,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UIGiftFoReturn::RequestTaskIntegralReward(UIGiftFoReturn *this,int param_1)

{
  string *this_00;
  undefined8 uVar1;
  DNetwork *this_01;
  string *__n;
  int aiStack_d54 [5];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2920];
  string asStack_180 [376];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  aiStack_d54[0] = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n = asStack_d40;
  std::string::string(asStack_ce8,"t");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  std::string::append(this_00,"1",(size_t)__n);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"index");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)aiStack_d54);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_0348b280(afStack_d38,this,aiStack_d54[0]);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_180,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGiftFoReturn::InitView() */

void __thiscall UIGiftFoReturn::InitView(UIGiftFoReturn *this)

{
  char cVar1;
  int iVar2;
  UITabControl *this_00;
  UITabContent *pUVar3;
  string asStack_90 [8];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03489fc4(local_80);
  if (((cVar1 != '\0') && (local_70 != '\0')) &&
     (cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x148)), cVar1 != '\0'))
  {
    InitTab1(this);
    InitTab2(this);
    InitTab3(this);
    s_tipsStatus = *(int *)(this + 0x180) == 0;
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::UpdateGiftFoReturnSignDays,
               *(int *)(this + 0x184));
    if ((*(int *)(this + 0x180) != 0) || (6 < *(int *)(this + 0x184))) {
      std::string::string(asStack_90,"UITabControl_0");
      this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_90);
      std::string::~string(asStack_90);
      nop();
      if (this_00 != (UITabControl *)0x0) {
        pUVar3 = (UITabContent *)UITabControl::GetTab(this_00,2);
        UITabControl::SetTabSelected(this_00,pUVar3);
      }
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
/* UIGiftFoReturn::OnCreate() */

void __thiscall UIGiftFoReturn::OnCreate(UIGiftFoReturn *this)

{
  UIWidgetBackground *pUVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  lVar2 = Sexy::LazySingleton<GiftFoReturnTaskManager>::GetInstancePtr();
  GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar2 + 8));
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGiftFoReturn::GetHasTips() */

void UIGiftFoReturn::GetHasTips(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ActiveItem aAStack_188 [8];
  undefined4 local_180;
  char local_170;
  GiftFoReturnData aGStack_108 [56];
  int local_d0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03489fc4(local_180);
  if ((cVar1 != '\0') && (local_170 != '\0')) {
    GiftFoReturnData::GiftFoReturnData(aGStack_108);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_188,(RtObject *)aGStack_108);
    cVar1 = s_tipsStatus;
    if ((cVar2 != '\0') && ((local_d0 == 0 && (s_tipsStatus != '\0')))) {
      GiftFoReturnData::~GiftFoReturnData(aGStack_108);
      goto LAB_03492af8;
    }
    GiftFoReturnData::~GiftFoReturnData(aGStack_108);
  }
  lVar4 = Sexy::LazySingleton<GiftFoReturnTaskManager>::GetInstancePtr();
  cVar1 = HappyVaseBreakerTaskManager::HaveCompletedTask((HappyVaseBreakerTaskManager *)(lVar4 + 8))
  ;
LAB_03492af8:
  ActiveItem::~ActiveItem(aAStack_188);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* UIGiftFoReturn::UIGiftFoReturn() */

void __thiscall UIGiftFoReturn::UIGiftFoReturn(UIGiftFoReturn *this)

{
  UISingletonDialog<UIGiftFoReturn>::UISingletonDialog((UISingletonDialog<UIGiftFoReturn> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_066410c0;
  *(undefined **)(this + 0xd8) = &DAT_06641420;
  *(undefined ***)(this + 0x138) = &PTR__UIGiftFoReturn_06641468;
  GiftFoReturnData::GiftFoReturnData((GiftFoReturnData *)(this + 0x148));
  return;
}

