// Class: AdsLotteryBonusUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsLotteryBonusUI::InitShiningAnims() */

void __thiscall AdsLotteryBonusUI::InitShiningAnims(AdsLotteryBonusUI *this)

{
  EffectAnim_UIAnim *pEVar1;
  char cVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x1a0);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_20,(float)(*(int *)(this + 0x148) + *(int *)(this + 0x150) / 2),
             (float)(*(int *)(this + 0x14c) + *(int *)(this + 0x154) / 2));
  std::string::string(asStack_10,"POPANIM_EFFECTS_SALES_REWARD_POPING");
  EffectAnim_UIAnim::InitUIAnim(0x3fc7bb30,local_20,local_1c,pEVar1,asStack_10,1);
  std::string::~string(asStack_10);
  nop();
  cVar2 = EffectAnim_UIAnim::IsValid(pEVar1);
  if (cVar2 != '\0') {
    std::string::string((string *)&local_18,"effect_on");
    std::string::string(asStack_10,"effect_fullscreen_star");
    EffectAnim_UIAnim::PlayOnceThenLoop(pEVar1,(FastCurve *)&local_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string((string *)&local_18);
    nop();
  }
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x1d0);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,(float)(*(int *)(gLawnApp + 0xd4) / 2),
             (float)(*(int *)(gLawnApp + 0xd8) / 2));
  std::string::string(asStack_10,"POPANIM_EFFECTS_SALES_REWARD_POPED");
  EffectAnim_UIAnim::InitUIAnim(0x3fc7bb30,local_18,local_14,pEVar1,asStack_10,1);
  std::string::~string(asStack_10);
  nop();
  cVar2 = EffectAnim_UIAnim::IsValid(pEVar1);
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"effects_behind");
    EffectAnim_UIAnim::PlayLoop(pEVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* AdsLotteryBonusUI::Update() */

void __thiscall AdsLotteryBonusUI::Update(AdsLotteryBonusUI *this)

{
  char cVar1;
  
  PopingWidget::Update((PopingWidget *)this);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1d0));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x1d0));
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1a0));
  if (cVar1 == '\0') {
    return;
  }
  EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x1a0));
  return;
}


/* AdsLotteryBonusUI::ButtonDepress(int) */

void __thiscall AdsLotteryBonusUI::ButtonDepress(AdsLotteryBonusUI *this,int param_1)

{
  UIAdsLottery *this_00;
  
  if (param_1 != 400) {
    return;
  }
  this_00 = (UIAdsLottery *)UISingletonDialog<UIAdsLottery>::GetSingletonPtr();
  UIAdsLottery::CloseBonusUI(this_00);
  return;
}


/* non-virtual thunk to AdsLotteryBonusUI::ButtonDepress(int) */

void __thiscall AdsLotteryBonusUI::ButtonDepress(AdsLotteryBonusUI *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsLotteryBonusUI::InitView() */

void __thiscall AdsLotteryBonusUI::InitView(AdsLotteryBonusUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *pLVar8;
  SalesProgressBar *pSVar9;
  undefined8 uVar10;
  long *plVar11;
  int iVar12;
  PVZ2UIButton *pPVar13;
  code *pcVar14;
  PVZ2UIImage aPStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  this[0x59] = (AdsLotteryBonusUI)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0088);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar12 = (int)((double)iVar3 * 0.7);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0088);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
  iVar5 = FUN_039b9128(500);
  iVar3 = FUN_039b9128(0x15e);
  iVar2 = iVar3 - iVar4 / 2;
  iVar7 = *(int *)(this + 0x54) - iVar3 >> 1;
  iVar6 = *(int *)(this + 0x50) - iVar5 >> 1;
  iVar3 = iVar7 + iVar4 / 2;
  iVar1 = iVar6 + iVar5 / 2;
  Sexy::Insets::Insets((Insets *)&local_40,iVar6,iVar3,iVar5,iVar2);
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  iVar6 = FUN_039b9128(3);
  Sexy::Insets::Insets((Insets *)&local_40,(iVar1 - iVar12 / 2) - iVar6,iVar7,iVar12,iVar4);
  *(undefined8 *)(this + 0x138) = local_40;
  *(undefined8 *)(this + 0x140) = uStack_38;
  iVar7 = FUN_039b9128(5);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x138),*(int *)(this + 0x13c) - iVar7,iVar12,iVar4)
  ;
  *(undefined8 *)(this + 0x148) = local_40;
  *(undefined8 *)(this + 0x150) = uStack_38;
  TodStringTranslate(L"[GEILIVABLE_LOTTERY_BONUS_TITLE]");
  FUN_054766c8(this + 0x158,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0260);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0260);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar9);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar1 - (int)((double)iVar7 * 2.5) / 2,
             (iVar3 + iVar2) - (int)((double)iVar6 * 0.8) / 2,(int)((double)iVar7 * 2.5),
             (int)((double)iVar6 * 0.8));
  pPVar13 = *(PVZ2UIButton **)(this + 0x180);
  *(undefined8 *)(this + 0x170) = local_40;
  *(undefined8 *)(this + 0x178) = uStack_38;
  if (pPVar13 == (PVZ2UIButton *)0x0) {
    TodStringTranslate(L"[SALES_REWARD_BOX_CLOSE]");
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar13 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar13,400,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,(Color *)&local_40
              );
    *(PVZ2UIButton **)(this + 0x180) = pPVar13;
    FUN_05476c50(aPStack_78);
    pPVar13 = *(PVZ2UIButton **)(this + 0x180);
    if (pPVar13 == (PVZ2UIButton *)0x0) goto LAB_039ba13c;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ac0260,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac0328,3);
  PVZ2UIButton::SetDialogStates(pPVar13,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x180) + 0x1a0))(*(long **)(this + 0x180),this + 0x170);
  plVar11 = *(long **)(this + 0x180);
  pcVar14 = *(code **)(*plVar11 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar14)(plVar11,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x180));
LAB_039ba13c:
  InitShiningAnims(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsLotteryBonusUI::AdsLotteryBonusUI() */

void __thiscall AdsLotteryBonusUI::AdsLotteryBonusUI(AdsLotteryBonusUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  *(undefined ***)this = &PTR_GetClass_066e95e0;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_066e9920;
  Sexy::Insets::Insets((Insets *)(this + 0x138));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  FUN_05478178(this + 0x158,&DAT_056f11a8,asStack_10);
  nop();
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  *(undefined8 *)(this + 0x180) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x188));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1a0));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1d0));
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Sales_Effect");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsLotteryBonusUI::Draw(Sexy::Graphics*) */

void __thiscall AdsLotteryBonusUI::Draw(AdsLotteryBonusUI *this,Graphics *param_1)

{
  char cVar1;
  undefined8 uVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1d0));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x1d0),param_1);
  }
  PopingWidget::GetMainRect();
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0288);
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,aIStack_18,uVar2);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0088);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x138));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_18);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x158,this + 0x148,uVar2,aIStack_18,5,1);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1a0));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x1a0),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsLotteryBonusUI::~AdsLotteryBonusUI() */

void __thiscall AdsLotteryBonusUI::~AdsLotteryBonusUI(AdsLotteryBonusUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_066e9920;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066e95e0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Sales_Effect");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1d0));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1a0));
  std::vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>>::~vector
            ((vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>> *)(this + 0x188));
  FUN_05476c50(this + 0x158);
  PopingWidget::~PopingWidget((PopingWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdsLotteryBonusUI::~AdsLotteryBonusUI() */

void __thiscall AdsLotteryBonusUI::~AdsLotteryBonusUI(AdsLotteryBonusUI *this)

{
  ~AdsLotteryBonusUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdsLotteryBonusUI::InitBonus(std::vector<LotteryBonus, std::allocator<LotteryBonus> >&) */

void __thiscall AdsLotteryBonusUI::InitBonus(AdsLotteryBonusUI *this,vector *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  undefined8 local_40;
  undefined8 local_38;
  UIRewardFrameSelect *local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = FUN_039b8cd0(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if (lVar6 != 0) {
    PopingWidget::GetMainRect();
    iVar3 = FUN_039b9128(0x28);
    iVar4 = FUN_039b9128(0x46);
    iVar5 = FUN_039b9128(8);
    uVar7 = FUN_039b8cd0(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar7 < 5) {
      iVar9 = (int)uVar7;
      iVar10 = iVar9 + -1;
    }
    else {
      iVar10 = 4;
      iVar9 = 5;
    }
    iVar11 = 0;
    fVar12 = (float)std::ceil((float)uVar7 * 0.2);
    iVar4 = ((local_1c + iVar4 * -2) - iVar5) / 2;
    *(int *)(this + 0x130) = iVar4;
    *(int *)(this + 0x134) = iVar4;
    iVar1 = local_20 + iVar3 * -2 + iVar4 * -5;
    iVar3 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar3 = iVar1;
    }
    *(int *)(this + 300) =
         local_24 + (local_1c - (((int)fVar12 + -1) * iVar5 + (int)fVar12 * iVar4)) / 2;
    *(int *)(this + 0x128) = local_28 + (local_20 - ((iVar3 >> 2) * iVar10 + iVar9 * iVar4)) / 2;
    std::vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>>::clear
              ((vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>> *)(this + 0x188));
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_1);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      piVar8 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      iVar4 = iVar11 / 5;
      iVar10 = iVar11 % 5;
      iVar11 = iVar11 + 1;
      Sexy::Insets::Insets
                (aIStack_18,
                 *(int *)(this + 0x128) + iVar10 * (*(int *)(this + 0x130) + (iVar3 >> 2)),
                 *(int *)(this + 300) + iVar4 * (*(int *)(this + 0x134) + iVar5),
                 *(int *)(this + 0x130),*(int *)(this + 0x134));
      local_30 = (UIRewardFrameSelect *)
                 UIRewardFrameSelect::CreateUIRewardFrame(*piVar8,piVar8[1],true);
      (**(code **)(*(long *)local_30 + 0x1a0))(local_30,aIStack_18);
      (**(code **)(*(long *)this + 0x60))(this,local_30);
      std::vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>>::push_back
                ((vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>> *)(this + 0x188)
                 ,&local_30);
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_40);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

