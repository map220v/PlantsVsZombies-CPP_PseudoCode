// Class: PopingBonusUI


/* PopingBonusUI::SetCloseFuction(std::function<void ()>) */

void __thiscall PopingBonusUI::SetCloseFuction(PopingBonusUI *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x1b0),param_2);
  return;
}


/* PopingBonusUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall PopingBonusUI::DrawAll(PopingBonusUI *this,ModalFlags *param_1,Graphics *param_2)

{
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  TenYearRecordInfoPage::DrawAll((TenYearRecordInfoPage *)this,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingBonusUI::HideAllButtonAndAnims() */

void __thiscall PopingBonusUI::HideAllButtonAndAnims(PopingBonusUI *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x188));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x188));
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar2 + 0x158))((long *)*puVar2,0);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  (**(code **)(**(long **)(this + 0x180) + 0x158))(*(long **)(this + 0x180),0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingBonusUI::RecoverAllButtonAndAnims() */

void __thiscall PopingBonusUI::RecoverAllButtonAndAnims(PopingBonusUI *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x188));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x188));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar2 + 0x158))((long *)*puVar2,1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  (**(code **)(**(long **)(this + 0x180) + 0x158))(*(long **)(this + 0x180),1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingBonusUI::InitShiningAnims() */

void __thiscall PopingBonusUI::InitShiningAnims(PopingBonusUI *this)

{
  char cVar1;
  EffectAnim_UIAnim *pEVar2;
  undefined8 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_20,(float)(*(int *)(this + 0x148) + *(int *)(this + 0x150) / 2),
             (float)(*(int *)(this + 0x14c) + *(int *)(this + 0x154) / 2));
  uVar3 = *(undefined8 *)(this + 0x1a0);
  std::string::string(asStack_10,"POPANIM_EFFECTS_SALES_REWARD_POPING");
  EffectAnim_UIAnim::InitUIAnim(0x3fc7bb30,local_20,local_1c,uVar3,asStack_10,1);
  std::string::~string(asStack_10);
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid(*(EffectAnim_UIAnim **)(this + 0x1a0));
  if (cVar1 != '\0') {
    pEVar2 = *(EffectAnim_UIAnim **)(this + 0x1a0);
    std::string::string((string *)&local_18,"effect_on");
    std::string::string(asStack_10,"effect_fullscreen_star");
    EffectAnim_UIAnim::PlayOnceThenLoop(pEVar2,(FastCurve *)&local_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string((string *)&local_18);
    nop();
  }
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,(float)(*(int *)(gLawnApp + 0xd4) / 2),
             (float)(*(int *)(gLawnApp + 0xd8) / 2));
  uVar3 = *(undefined8 *)(this + 0x1a8);
  std::string::string(asStack_10,"POPANIM_EFFECTS_SALES_REWARD_POPED");
  EffectAnim_UIAnim::InitUIAnim(0x3fc7bb30,local_18,local_14,uVar3,asStack_10,1);
  std::string::~string(asStack_10);
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid(*(EffectAnim_UIAnim **)(this + 0x1a8));
  if (cVar1 != '\0') {
    pEVar2 = *(EffectAnim_UIAnim **)(this + 0x1a8);
    std::string::string(asStack_10,"effects_behind");
    EffectAnim_UIAnim::PlayLoop(pEVar2,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PopingBonusUI::ButtonDepress(int) */

void __thiscall PopingBonusUI::ButtonDepress(PopingBonusUI *this,int param_1)

{
  if (param_1 != 0xb) {
    return;
  }
  std::function<void()>::operator()((function<void()> *)(this + 0x1b0));
  return;
}


/* non-virtual thunk to PopingBonusUI::ButtonDepress(int) */

void __thiscall PopingBonusUI::ButtonDepress(PopingBonusUI *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingBonusUI::Draw(Sexy::Graphics*) */

void __thiscall PopingBonusUI::Draw(PopingBonusUI *this,Graphics *param_1)

{
  char cVar1;
  undefined8 uVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid(*(EffectAnim_UIAnim **)(this + 0x1a8));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw(*(EffectAnim_UIAnim **)(this + 0x1a8),param_1);
  }
  PopingWidget::GetMainRect();
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7d40);
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,aIStack_18,uVar2);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7c50);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x138));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_18);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x158,this + 0x148,uVar2,aIStack_18,5,1);
  cVar1 = EffectAnim_UIAnim::IsValid(*(EffectAnim_UIAnim **)(this + 0x1a0));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw(*(EffectAnim_UIAnim **)(this + 0x1a0),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingBonusUI::InitView() */

void __thiscall PopingBonusUI::InitView(PopingBonusUI *this)

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
  
  this[0x59] = (PopingBonusUI)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7c50);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar12 = (int)((double)iVar3 * 0.7);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7c50);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
  iVar5 = FUN_04fada68(500);
  iVar3 = FUN_04fada68(0x15e);
  iVar2 = iVar3 - iVar4 / 2;
  iVar7 = *(int *)(this + 0x54) - iVar3 >> 1;
  iVar6 = *(int *)(this + 0x50) - iVar5 >> 1;
  iVar3 = iVar7 + iVar4 / 2;
  iVar1 = iVar6 + iVar5 / 2;
  Sexy::Insets::Insets((Insets *)&local_40,iVar6,iVar3,iVar5,iVar2);
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  iVar6 = FUN_04fada68(3);
  Sexy::Insets::Insets((Insets *)&local_40,(iVar1 - iVar12 / 2) - iVar6,iVar7,iVar12,iVar4);
  *(undefined8 *)(this + 0x138) = local_40;
  *(undefined8 *)(this + 0x140) = uStack_38;
  iVar7 = FUN_04fada68(5);
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
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7b08);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7b08);
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
              (pPVar13,0xb,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,(Color *)&local_40
              );
    *(PVZ2UIButton **)(this + 0x180) = pPVar13;
    FUN_05476c50(aPStack_78);
    pPVar13 = *(PVZ2UIButton **)(this + 0x180);
    if (pPVar13 == (PVZ2UIButton *)0x0) goto LAB_04fb1d94;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ba7b08,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ba7c10,3);
  PVZ2UIButton::SetDialogStates(pPVar13,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x180) + 0x1a0))(*(long **)(this + 0x180),this + 0x170);
  plVar11 = *(long **)(this + 0x180);
  pcVar14 = *(code **)(*plVar11 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar14)(plVar11,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x180));
LAB_04fb1d94:
  InitShiningAnims(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingBonusUI::PopingBonusUI() */

void __thiscall PopingBonusUI::PopingBonusUI(PopingBonusUI *this)

{
  LawnApp *this_00;
  EffectAnim_UIAnim *pEVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  *(undefined ***)this = &PTR_GetClass_06a29200;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_06a29540;
  Sexy::Insets::Insets((Insets *)(this + 0x138));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  FUN_05478178(this + 0x158,&DAT_056f11a8,asStack_10);
  nop();
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  *(undefined8 *)(this + 0x180) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x188));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x1b0));
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Sales_Effect");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pEVar1 = ::operator_new(0x30);
  EffectAnim_UIAnim::EffectAnim_UIAnim(pEVar1);
  *(EffectAnim_UIAnim **)(this + 0x1a0) = pEVar1;
  pEVar1 = ::operator_new(0x30);
  EffectAnim_UIAnim::EffectAnim_UIAnim(pEVar1);
  *(EffectAnim_UIAnim **)(this + 0x1a8) = pEVar1;
  FUN_04fb0fec((function<void(Sexy::Graphics*)> *)(this + 0x1b0));
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingBonusUI::~PopingBonusUI() */

void __thiscall PopingBonusUI::~PopingBonusUI(PopingBonusUI *this)

{
  LawnApp *this_00;
  EffectAnim_UIAnim *pEVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_06a29540;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06a29200;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Sales_Effect");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pEVar1 = *(EffectAnim_UIAnim **)(this + 0x1a0);
  if (pEVar1 != (EffectAnim_UIAnim *)0x0) {
    EffectAnim_UIAnim::~EffectAnim_UIAnim(pEVar1);
    AK::FreeHook(pEVar1);
  }
  pEVar1 = *(EffectAnim_UIAnim **)(this + 0x1a8);
  if (pEVar1 != (EffectAnim_UIAnim *)0x0) {
    EffectAnim_UIAnim::~EffectAnim_UIAnim(pEVar1);
    AK::FreeHook(pEVar1);
  }
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x1b0));
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


/* PopingBonusUI::~PopingBonusUI() */

void __thiscall PopingBonusUI::~PopingBonusUI(PopingBonusUI *this)

{
  ~PopingBonusUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingBonusUI::InitBonus(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >
   const&) */

void __thiscall PopingBonusUI::InitBonus(PopingBonusUI *this,vector *param_1)

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
  lVar6 = FUN_04fad050(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if (lVar6 != 0) {
    PopingWidget::GetMainRect();
    iVar3 = FUN_04fada68(0x28);
    iVar4 = FUN_04fada68(0x46);
    iVar5 = FUN_04fada68(8);
    uVar7 = FUN_04fad050(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
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
    local_40 = FUN_04fb0e1c(*(undefined8 *)param_1);
    local_38 = FUN_04fb0e6c(*(undefined8 *)(param_1 + 8));
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
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PopingBonusUI::Update() */

void __thiscall PopingBonusUI::Update(PopingBonusUI *this)

{
  char cVar1;
  
  PopingWidget::Update((PopingWidget *)this);
  cVar1 = EffectAnim_UIAnim::IsValid(*(EffectAnim_UIAnim **)(this + 0x1a8));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate(*(EffectAnim_UIAnim **)(this + 0x1a8));
  }
  cVar1 = EffectAnim_UIAnim::IsValid(*(EffectAnim_UIAnim **)(this + 0x1a0));
  if (cVar1 == '\0') {
    return;
  }
  EffectAnim_UIAnim::OnUpdate(*(EffectAnim_UIAnim **)(this + 0x1a0));
  return;
}

