// Class: LimitLotteryBonusUI


/* LimitLotteryBonusUI::ButtonDepress(int) */

LimitLotteryBonusUI * __thiscall
LimitLotteryBonusUI::ButtonDepress(LimitLotteryBonusUI *this,int param_1)

{
  long lVar1;
  UILimitLottery *this_00;
  LimitLotteryBonusUI *pLVar2;
  UILimitLotteryPage *this_01;
  
  if (param_1 == 400) {
    lVar1 = UISingletonDialog<UILimitLottery>::GetSingletonPtr();
    if (lVar1 != 0) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      MessageRouter::Post((_func_void *)gMessageRouter);
      this_00 = (UILimitLottery *)UISingletonDialog<UILimitLottery>::GetSingletonPtr();
      pLVar2 = (LimitLotteryBonusUI *)UILimitLottery::CloseBonusEffect(this_00);
      return pLVar2;
    }
    lVar1 = UISingletonDialog<UILimitLotteryPage>::GetSingletonPtr();
    this = (LimitLotteryBonusUI *)0x0;
    if (lVar1 != 0) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      MessageRouter::Post((_func_void *)gMessageRouter);
      this_01 = (UILimitLotteryPage *)UISingletonDialog<UILimitLotteryPage>::GetSingletonPtr();
      pLVar2 = (LimitLotteryBonusUI *)UILimitLotteryPage::CloseBonusEffect(this_01);
      return pLVar2;
    }
  }
  return this;
}


/* non-virtual thunk to LimitLotteryBonusUI::ButtonDepress(int) */

void __thiscall LimitLotteryBonusUI::ButtonDepress(LimitLotteryBonusUI *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryBonusUI::Draw(Sexy::Graphics*) */

void __thiscall LimitLotteryBonusUI::Draw(LimitLotteryBonusUI *this,Graphics *param_1)

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
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe618);
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,aIStack_18,uVar2);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe690);
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
/* LimitLotteryBonusUI::InitView() */

void __thiscall LimitLotteryBonusUI::InitView(LimitLotteryBonusUI *this)

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
  
  this[0x59] = (LimitLotteryBonusUI)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe690);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar12 = (int)((double)iVar3 * 0.7);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe690);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
  iVar5 = FUN_0398a1f8(500);
  iVar3 = FUN_0398a1f8(0x15e);
  iVar2 = iVar3 - iVar4 / 2;
  iVar7 = *(int *)(this + 0x54) - iVar3 >> 1;
  iVar6 = *(int *)(this + 0x50) - iVar5 >> 1;
  iVar3 = iVar7 + iVar4 / 2;
  iVar1 = iVar6 + iVar5 / 2;
  Sexy::Insets::Insets((Insets *)&local_40,iVar6,iVar3,iVar5,iVar2);
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  iVar6 = FUN_0398a1f8(3);
  Sexy::Insets::Insets((Insets *)&local_40,(iVar1 - iVar12 / 2) - iVar6,iVar7,iVar12,iVar4);
  *(undefined8 *)(this + 0x138) = local_40;
  *(undefined8 *)(this + 0x140) = uStack_38;
  iVar7 = FUN_0398a1f8(5);
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
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe6b8);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe6b8);
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
    if (pPVar13 == (PVZ2UIButton *)0x0) goto LAB_03990efc;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06abe6b8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06abe468,3);
  PVZ2UIButton::SetDialogStates(pPVar13,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x180) + 0x1a0))(*(long **)(this + 0x180),this + 0x170);
  plVar11 = *(long **)(this + 0x180);
  pcVar14 = *(code **)(*plVar11 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar14)(plVar11,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x180));
LAB_03990efc:
  AdsLotteryBonusUI::InitShiningAnims((AdsLotteryBonusUI *)this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryBonusUI::LimitLotteryBonusUI() */

void __thiscall LimitLotteryBonusUI::LimitLotteryBonusUI(LimitLotteryBonusUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  *(undefined ***)this = &PTR_GetClass_066de6f0;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_066dea30;
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
/* LimitLotteryBonusUI::~LimitLotteryBonusUI() */

void __thiscall LimitLotteryBonusUI::~LimitLotteryBonusUI(LimitLotteryBonusUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_066dea30;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066de6f0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Sales_Effect");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1d0));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1a0));
  std::vector<LimitLotteryItem*,std::allocator<LimitLotteryItem*>>::~vector
            ((vector<LimitLotteryItem*,std::allocator<LimitLotteryItem*>> *)(this + 0x188));
  FUN_05476c50(this + 0x158);
  PopingWidget::~PopingWidget((PopingWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitLotteryBonusUI::~LimitLotteryBonusUI() */

void __thiscall LimitLotteryBonusUI::~LimitLotteryBonusUI(LimitLotteryBonusUI *this)

{
  ~LimitLotteryBonusUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryBonusUI::InitBonus(std::vector<LotteryBonus, std::allocator<LotteryBonus> >&) */

void __thiscall LimitLotteryBonusUI::InitBonus(LimitLotteryBonusUI *this,vector *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  LimitLotteryItem *pLVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  undefined8 local_68;
  undefined8 local_60;
  LimitLotteryItem *local_58;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = FUN_03989200(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if (lVar6 != 0) {
    PopingWidget::GetMainRect();
    iVar3 = FUN_0398a1f8(0x28);
    iVar4 = FUN_0398a1f8(0x46);
    iVar5 = FUN_0398a1f8(8);
    uVar7 = FUN_03989200(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar7 < 5) {
      iVar10 = (int)uVar7;
      iVar11 = iVar10 + -1;
    }
    else {
      iVar11 = 4;
      iVar10 = 5;
    }
    iVar12 = 0;
    fVar13 = (float)std::ceil((float)uVar7 * 0.2);
    iVar4 = ((local_34 + iVar4 * -2) - iVar5) / 2;
    *(int *)(this + 0x130) = iVar4;
    *(int *)(this + 0x134) = iVar4;
    iVar1 = local_38 + iVar3 * -2 + iVar4 * -5;
    iVar3 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar3 = iVar1;
    }
    *(int *)(this + 300) =
         local_3c + (local_34 - (((int)fVar13 + -1) * iVar5 + (int)fVar13 * iVar4)) / 2;
    *(int *)(this + 0x128) = local_40 + (local_38 - ((iVar3 >> 2) * iVar11 + iVar10 * iVar4)) / 2;
    std::vector<LimitLotteryItem*,std::allocator<LimitLotteryItem*>>::clear
              ((vector<LimitLotteryItem*,std::allocator<LimitLotteryItem*>> *)(this + 0x188));
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_1);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar2)
    {
      puVar8 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68)
      ;
      local_4c = *puVar8;
      local_48 = puVar8[1];
      local_50 = iVar12;
      Sexy::Insets::Insets
                (aIStack_30,
                 *(int *)(this + 0x128) + (iVar12 % 5) * (*(int *)(this + 0x130) + (iVar3 >> 2)),
                 *(int *)(this + 300) + (iVar12 / 5) * (*(int *)(this + 0x134) + iVar5),
                 *(int *)(this + 0x130),*(int *)(this + 0x134));
      pLVar9 = ::operator_new(0x368);
      iVar4 = iVar12 + 0x1a4;
      iVar12 = iVar12 + 1;
      LimitLotteryItem::LimitLotteryItem(pLVar9,iVar4);
      local_58 = pLVar9;
      (**(code **)(*(long *)pLVar9 + 0x1a0))(pLVar9,aIStack_30);
      pLVar9 = local_58;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      LimitLotteryItem::SetlotteryInfo
                (pLVar9,(LimitLotteryItemInfo *)&local_50,(vector *)avStack_20);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
      (**(code **)(*(long *)this + 0x60))(this,local_58);
      std::vector<LimitLotteryItem*,std::allocator<LimitLotteryItem*>>::push_back
                ((vector<LimitLotteryItem*,std::allocator<LimitLotteryItem*>> *)(this + 0x188),
                 &local_58);
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

