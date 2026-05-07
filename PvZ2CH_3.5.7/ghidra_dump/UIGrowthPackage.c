// Class: UIGrowthPackage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrowthPackage::GetLayoutName() */

void __thiscall UIGrowthPackage::GetLayoutName(UIGrowthPackage *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIGrowthPackage");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrowthPackage::Update() */

void __thiscall UIGrowthPackage::Update(UIGrowthPackage *this)

{
  UIWidgetText *pUVar1;
  string asStack_18 [8];
  TimeUtil aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  std::string::string(asStack_18,"UIText_Package_Timer");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  TimeUtil::GetTimeCountdown(1,-1);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
  PuzzleTip::SetTip(pUVar1,aTStack_10);
  FUN_05476c50(aTStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Activity_Timer");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  TimeUtil::GetTimeCountdown(3,0x2a60);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
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
/* UIGrowthPackage::ButtonDepress(int) */

void __thiscall UIGrowthPackage::ButtonDepress(UIGrowthPackage *this,int param_1)

{
  ActivityDescriptionManager *this_00;
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x21) {
    this_00 = (ActivityDescriptionManager *)
              Sexy::LazySingleton<ActivityDescriptionManager>::GetInstancePtr();
    TodStringTranslate(L"[GROWTH_PACKAGE_DESCRIPTION]");
    TodStringTranslate(L"[GROWTH_PACKAGE_DESCRIPTION_TITLE]");
    ActivityDescriptionManager::ShowDescription(this_00,awStack_18,awStack_10);
    FUN_05476c50(awStack_10);
    FUN_05476c50(awStack_18);
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<UIGrowthPackage>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIGrowthPackage::ButtonDepress(int) */

void __thiscall UIGrowthPackage::ButtonDepress(UIGrowthPackage *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrowthPackage::RefreshProgressBar() */

void __thiscall UIGrowthPackage::RefreshProgressBar(UIGrowthPackage *this)

{
  int iVar1;
  int iVar2;
  UIWidgetImage *pUVar3;
  UIWidgetImage *this_00;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_10,"UIImage_Progress_Back");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"UIImage_Progress_Bar");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_10);
  std::string::~string((string *)local_10);
  uVar7 = 0;
  nop();
  uVar8 = *(undefined8 *)(this + 0x180);
  uVar4 = FUN_03a44940(uVar8,*(undefined8 *)(this + 0x188));
  iVar1 = *(int *)(this + 0x14c);
  fVar9 = 1.0 / (float)uVar4;
  if (uVar4 != 0) {
    do {
      piVar5 = (int *)FUN_03a44968(uVar8,uVar7);
      iVar6 = (int)uVar7;
      if (iVar1 < *piVar5) {
        if (iVar6 == 0) goto LAB_03a45338;
        if (uVar4 <= uVar7) goto LAB_03a45300;
        piVar5 = (int *)FUN_03a44968(uVar8,(long)(iVar6 + -1));
        iVar2 = *piVar5;
        piVar5 = (int *)FUN_03a44968(uVar8,uVar7);
        fVar9 = (fVar9 * (float)(iVar1 - iVar2)) / (float)(*piVar5 - iVar2) + fVar9 * (float)iVar6;
        goto LAB_03a45358;
      }
      uVar7 = uVar7 + 1;
    } while (uVar4 != uVar7);
    if (iVar6 != -1) goto LAB_03a45300;
  }
LAB_03a45338:
  piVar5 = (int *)FUN_03a44968(uVar8,0);
  fVar9 = ((float)iVar1 * fVar9) / (float)*piVar5;
LAB_03a45358:
  if (fVar9 < 1.0) {
    if (fVar9 < _FUN_03a453fc) {
      local_10[0] = 2;
      UIWidgetImage::SetImageType(this_00,(string *)local_10,0.0);
    }
    else {
      local_10[0] = 5;
      UIWidgetImage::SetImageType(this_00,(string *)local_10,0.0);
    }
    *(int *)(this_00 + 0x50) = (int)(fVar9 * (float)*(int *)(pUVar3 + 0x50));
  }
LAB_03a45300:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrowthPackage::AddIntegral(int) */

void __thiscall UIGrowthPackage::AddIntegral(UIGrowthPackage *this,int param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  UIWidgetText *this_00;
  ulong uVar3;
  undefined8 uVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar3 = 0;
  uVar4 = *(undefined8 *)(this + 0x1b0);
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x14c) = *(int *)(this + 0x14c) + param_1;
  uVar1 = FUN_03a44970(uVar4,*(undefined8 *)(this + 0x1b8));
  if (uVar1 != 0) {
    do {
      puVar2 = (undefined8 *)FUN_03a4497c(uVar4,uVar3);
      if ((GrowthPackageRewardButton *)*puVar2 != (GrowthPackageRewardButton *)0x0) {
        GrowthPackageRewardButton::UpdateButtonState
                  ((GrowthPackageRewardButton *)*puVar2,*(int *)(this + 0x14c));
        uVar4 = *(undefined8 *)(this + 0x1b0);
        uVar1 = FUN_03a44970(uVar4,*(undefined8 *)(this + 0x1b8));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  std::string::string(asStack_18,"UIText_Coin");
  this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x14c));
  UIWidgetText::SetString(this_00,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  RefreshProgressBar(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrowthPackage::ObtainReward(int) */

void __thiscall UIGrowthPackage::ObtainReward(UIGrowthPackage *this,int param_1)

{
  UIWidgetImage *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("UIImage_Reward_Finish%d",asStack_10,(ulong)(param_1 + 1));
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  if (pUVar1 != (UIWidgetImage *)0x0) {
    pUVar1[0x6d] = (UIWidgetImage)0x0;
    (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrowthPackage::InitBundle() */

void __thiscall UIGrowthPackage::InitBundle(UIGrowthPackage *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UIWidgetImage *pUVar5;
  ulong uVar6;
  ulong uVar7;
  GrowthPackageBundle *this_00;
  vector *pvVar8;
  int *piVar9;
  long lVar10;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_03a44d08(0xf);
  iVar4 = FUN_03a44d08(10);
  std::string::string(asStack_10,"UIImage_Package_Background");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar1 = *(int *)(pUVar5 + 0x50);
  iVar2 = *(int *)(pUVar5 + 0x54);
  uVar6 = FUN_03a44918(*(undefined8 *)(this + 0x168),*(undefined8 *)(this + 0x170));
  uVar7 = FUN_03a448e0(*(undefined8 *)(this + 0x150),*(undefined8 *)(this + 0x158));
  if (uVar7 <= uVar6) {
    iVar1 = (iVar1 + iVar3 * -4) / 3;
    for (uVar7 = 0; uVar7 < uVar6; uVar7 = uVar7 + 1) {
      this_00 = ::operator_new(0xf0);
      GrowthPackageBundle::GrowthPackageBundle(this_00);
      (**(code **)(*(long *)this_00 + 0x198))
                (this_00,iVar3 + (iVar3 + iVar1) * (int)uVar7,iVar4,iVar1,iVar2 + iVar4 * -2);
      pvVar8 = (vector *)FUN_03a4492c(*(undefined8 *)(this + 0x168),uVar7);
      piVar9 = (int *)FUN_03a44938(*(undefined8 *)(this + 0x150),uVar7);
      GrowthPackageBundle::InitData(this_00,(int)uVar7,pvVar8,*piVar9);
      lVar10 = *(long *)pUVar5;
      this_00[0x59] = (GrowthPackageBundle)0x0;
      (**(code **)(lVar10 + 0x60))(pUVar5,this_00);
      uVar6 = FUN_03a44918(*(undefined8 *)(this + 0x168),*(undefined8 *)(this + 0x170));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIGrowthPackage::UIGrowthPackage() */

void __thiscall UIGrowthPackage::UIGrowthPackage(UIGrowthPackage *this)

{
  UISingletonDialog<UIGrowthPackage>::UISingletonDialog((UISingletonDialog<UIGrowthPackage> *)this);
  *(undefined ***)this = &PTR_GetClass_06706b60;
  *(undefined **)(this + 0xd8) = &DAT_06706eb0;
  GrowthPackageData::GrowthPackageData((GrowthPackageData *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  return;
}


/* UIGrowthPackage::~UIGrowthPackage() */

void __thiscall UIGrowthPackage::~UIGrowthPackage(UIGrowthPackage *this)

{
  *(undefined ***)this = &PTR_GetClass_06706b60;
  *(undefined **)(this + 0xd8) = &DAT_06706eb0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<GrowthPackageRewardButton*,std::allocator<GrowthPackageRewardButton*>>::~vector
            ((vector<GrowthPackageRewardButton*,std::allocator<GrowthPackageRewardButton*>> *)
             (this + 0x1b0));
  GrowthPackageData::~GrowthPackageData((GrowthPackageData *)(this + 0x138));
  UISingletonDialog<UIGrowthPackage>::~UISingletonDialog((UISingletonDialog<UIGrowthPackage> *)this)
  ;
  return;
}


/* UIGrowthPackage::~UIGrowthPackage() */

void __thiscall UIGrowthPackage::~UIGrowthPackage(UIGrowthPackage *this)

{
  ~UIGrowthPackage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrowthPackage::InitReward() */

void __thiscall UIGrowthPackage::InitReward(UIGrowthPackage *this)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  UIWidgetImage *pUVar4;
  int *piVar5;
  long *plVar6;
  GrowthPackageRewardButton *pGVar7;
  undefined8 uVar8;
  UIWidgetText *this_00;
  ActivityTypeID *pAVar9;
  ulong uVar10;
  ulong uVar11;
  code *pcVar12;
  GrowthPackageRewardButton *local_20;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_03a44940(*(undefined8 *)(this + 0x180),*(undefined8 *)(this + 0x188));
  uVar11 = 0;
  if (lVar3 != 0) {
    do {
      uVar1 = uVar11 + 1;
      Sexy::StrFormat("UIImage_Reward_Back%d",asStack_18,uVar1);
      pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
      std::string::~string(asStack_18);
      if (pUVar4 != (UIWidgetImage *)0x0) {
        lVar3 = FUN_03a44968(*(undefined8 *)(this + 0x180),uVar11);
        piVar5 = (int *)FUN_03a4490c(*(undefined8 *)(lVar3 + 8),0);
        plVar6 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar5,piVar5[1],false);
        iVar2 = *(int *)(pUVar4 + 0x54);
        (**(code **)(*plVar6 + 0x198))(plVar6,*(int *)(pUVar4 + 0x50) / 2 - iVar2 / 2,0,iVar2,iVar2)
        ;
        (**(code **)(*(long *)pUVar4 + 0x60))(pUVar4,plVar6);
        pGVar7 = ::operator_new(0xe8);
        GrowthPackageRewardButton::GrowthPackageRewardButton(pGVar7);
        pcVar12 = *(code **)(*(long *)pGVar7 + 0x1a0);
        local_20 = pGVar7;
        Sexy::Insets::Insets
                  ((Insets *)asStack_18,0,0,*(int *)(pUVar4 + 0x50),*(int *)(pUVar4 + 0x54));
        (*pcVar12)(pGVar7,asStack_18);
        pGVar7 = local_20;
        piVar5 = (int *)FUN_03a44968(*(undefined8 *)(this + 0x180),uVar11);
        GrowthPackageRewardButton::InitData(pGVar7,(int)uVar11,piVar5[1] == 1,*piVar5);
        (**(code **)(*(long *)local_20 + 0x158))(local_20,0);
        (**(code **)(*(long *)pUVar4 + 0x60))(pUVar4,local_20);
        std::vector<GrowthPackageRewardButton*,std::allocator<GrowthPackageRewardButton*>>::
        push_back((vector<GrowthPackageRewardButton*,std::allocator<GrowthPackageRewardButton*>> *)
                  (this + 0x1b0),&local_20);
      }
      Sexy::StrFormat("UIImage_Reward_Finish%d",asStack_18,uVar1);
      pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
      std::string::~string(asStack_18);
      if (pUVar4 != (UIWidgetImage *)0x0) {
        uVar8 = *(undefined8 *)(this + 0x180);
        pUVar4[0x6d] = (UIWidgetImage)0x0;
        lVar3 = FUN_03a44968(uVar8,uVar11);
        (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,*(int *)(lVar3 + 4) == 1);
      }
      Sexy::StrFormat("UIText_Step%d",asStack_18,uVar1);
      this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
      std::string::~string(asStack_18);
      if (this_00 != (UIWidgetText *)0x0) {
        pAVar9 = (ActivityTypeID *)FUN_03a44968(*(undefined8 *)(this + 0x180),uVar11);
        std::to_string<ActivityTypeID>(pAVar9);
        UIWidgetText::SetString(this_00,asStack_18);
        std::string::~string(asStack_18);
      }
      uVar10 = FUN_03a44940(*(undefined8 *)(this + 0x180),*(undefined8 *)(this + 0x188));
      uVar11 = uVar1;
    } while (uVar1 < uVar10);
  }
  AddIntegral(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrowthPackage::Init() */

void __thiscall UIGrowthPackage::Init(UIGrowthPackage *this)

{
  char cVar1;
  int iVar2;
  UIWidgetText *this_00;
  string asStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03a448d4(local_80);
  if (((cVar1 != '\0') && (local_70 != '\0')) &&
     (cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x138)), cVar1 != '\0'))
  {
    std::string::string(asStack_98,"UIText_Coin");
    this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_98);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x14c));
    UIWidgetText::SetString(this_00,asStack_90);
    std::string::~string(asStack_90);
    std::string::~string(asStack_98);
    nop();
    InitBundle(this);
    InitReward(this);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrowthPackage::OnCreate() */

void __thiscall UIGrowthPackage::OnCreate(UIGrowthPackage *this)

{
  uint uVar1;
  UIWidgetBackground *pUVar2;
  TGALogMgr *pTVar3;
  size_t __n;
  TGASecretStore aTStack_68 [8];
  undefined1 auStack_60 [40];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_38,"Background_0");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  uVar1 = (*(int *)(this + 0x50) - *(int *)(pUVar2 + 0x50)) / 2;
  __n = (size_t)uVar1;
  *(uint *)(pUVar2 + 0x48) = uVar1;
  Init(this);
  TGASecretStore::TGASecretStore(aTStack_68);
  std::string::append((string *)aTStack_68,"1",__n);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x14c));
  FUN_05474278(auStack_60,asStack_38);
  std::string::~string(asStack_38);
  pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGASecretStore::TGASecretStore((TGASecretStore *)asStack_38,aTStack_68);
  TGALogMgr::LogGrowthPackage(pTVar3,asStack_38);
  DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_38);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

