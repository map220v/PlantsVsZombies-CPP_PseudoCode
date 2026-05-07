// Class: CommonBonusUI


/* CommonBonusUI::HideAllButtonAndAnims() */

void __thiscall CommonBonusUI::HideAllButtonAndAnims(CommonBonusUI *this)

{
  this[0x158] = (CommonBonusUI)0x0;
  return;
}


/* CommonBonusUI::RecoverAllButtonAndAnims() */

void __thiscall CommonBonusUI::RecoverAllButtonAndAnims(CommonBonusUI *this)

{
  this[0x158] = (CommonBonusUI)0x1;
  return;
}


/* CommonBonusUI::SetChestAward(std::vector<LotteryBonus, std::allocator<LotteryBonus> > const&) */

void __thiscall CommonBonusUI::SetChestAward(CommonBonusUI *this,vector *param_1)

{
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::operator=
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x140),param_1);
  return;
}


/* CommonBonusUI::SetSubmitDelegate(Sexy::Delegate0) */

void __thiscall CommonBonusUI::SetSubmitDelegate(CommonBonusUI *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1c0),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonBonusUI::InitShiningAnims() */

void __thiscall CommonBonusUI::InitShiningAnims(CommonBonusUI *this)

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
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x1f0);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_20,(float)(*(int *)(this + 0x18c) + *(int *)(this + 0x194) / 2),
             (float)(*(int *)(this + 400) + *(int *)(this + 0x198) / 2));
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
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x220);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonBonusUI::InitView() */

void __thiscall CommonBonusUI::InitView(CommonBonusUI *this)

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
  Delegate0 aDStack_a8 [48];
  PVZ2UIImage aPStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  this[0x59] = (CommonBonusUI)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92e30);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar12 = (int)((double)iVar3 * 0.7);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92e30);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
  iVar5 = FUN_04c5abdc(500);
  iVar3 = FUN_04c5abdc(0x15e);
  iVar2 = iVar3 - iVar4 / 2;
  iVar7 = *(int *)(this + 0x54) - iVar3 >> 1;
  iVar3 = iVar7 + iVar4 / 2;
  iVar6 = *(int *)(this + 0x50) - iVar5 >> 1;
  iVar1 = iVar6 + iVar5 / 2;
  Sexy::Insets::Insets((Insets *)&local_40,iVar6,iVar3,iVar5,iVar2);
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  Sexy::Insets::Insets((Insets *)&local_40,iVar6,iVar3,iVar5,iVar2);
  *(undefined8 *)(this + 0x15c) = local_40;
  *(undefined8 *)(this + 0x164) = uStack_38;
  iVar6 = FUN_04c5abdc(3);
  Sexy::Insets::Insets((Insets *)&local_40,(iVar1 - iVar12 / 2) - iVar6,iVar7,iVar12,iVar4);
  *(undefined8 *)(this + 0x17c) = local_40;
  *(undefined8 *)(this + 0x184) = uStack_38;
  iVar7 = FUN_04c5abdc(5);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x17c),*(int *)(this + 0x180) - iVar7,iVar12,iVar4)
  ;
  *(undefined8 *)(this + 0x18c) = local_40;
  *(undefined8 *)(this + 0x194) = uStack_38;
  TodStringTranslate(L"[GEILIVABLE_LOTTERY_BONUS_TITLE]");
  FUN_054766c8(this + 0x1a0,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  iVar7 = FUN_04c5abdc(0);
  iVar6 = FUN_04c5abdc(0x5a);
  Sexy::Insets::Insets((Insets *)&local_40,iVar7,iVar7,iVar6,iVar6);
  *(undefined8 *)(this + 0x16c) = local_40;
  *(undefined8 *)(this + 0x174) = uStack_38;
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93100);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93100);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar9);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar1 - (int)((double)iVar7 * 2.5) / 2,
             (iVar3 + iVar2) - (int)((double)iVar6 * 0.8) / 2,(int)((double)iVar7 * 2.5),
             (int)((double)iVar6 * 0.8));
  pPVar13 = *(PVZ2UIButton **)(this + 0x1b8);
  *(undefined8 *)(this + 0x1a8) = local_40;
  *(undefined8 *)(this + 0x1b0) = uStack_38;
  if (pPVar13 == (PVZ2UIButton *)0x0) {
    TodStringTranslate(L"[SALES_REWARD_BOX_CLOSE]");
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar13 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar13,0x6e,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,
               (Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x1b8) = pPVar13;
    FUN_05476c50(aPStack_78);
    pPVar13 = *(PVZ2UIButton **)(this + 0x1b8);
    if (pPVar13 == (PVZ2UIButton *)0x0) goto LAB_04c5b6d0;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b93100,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b93268,3);
  PVZ2UIButton::SetDialogStates(pPVar13,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x1b8) + 0x1a0))(*(long **)(this + 0x1b8),this + 0x1a8);
  plVar11 = *(long **)(this + 0x1b8);
  pcVar14 = *(code **)(*plVar11 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar14)(plVar11,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1b8));
LAB_04c5b6d0:
  Sexy::Delegate0::Delegate0(aDStack_a8,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1c0),(Delegate2 *)aDStack_a8);
  InitShiningAnims(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonBonusUI::CommonBonusUI() */

void __thiscall CommonBonusUI::CommonBonusUI(CommonBonusUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  *(undefined ***)this = &PTR_GetClass_0698c700;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_0698ca40;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  this[0x158] = (CommonBonusUI)0x0;
  Sexy::Insets::Insets((Insets *)(this + 0x15c));
  Sexy::Insets::Insets((Insets *)(this + 0x16c));
  Sexy::Insets::Insets((Insets *)(this + 0x17c));
  Sexy::Insets::Insets((Insets *)(this + 0x18c));
  FUN_05476574(this + 0x1a0);
  Sexy::Insets::Insets((Insets *)(this + 0x1a8));
  *(undefined8 *)(this + 0x1b8) = 0;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x1c0),(DummyInit *)0x0);
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1f0));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x220));
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::clear
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x128));
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
/* CommonBonusUI::GetRewardImage(int) */

void __thiscall CommonBonusUI::GetRewardImage(CommonBonusUI *this,int param_1)

{
  long lVar1;
  long lVar2;
  GAME_ITEM_INFO aGStack_38 [32];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92d68);
  if (param_1 == 0x62df) {
    lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92eb0);
    goto LAB_04c5b994;
  }
  if (param_1 < 0x62e0) {
    if (param_1 == 0xbc0) {
      lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92e88);
      goto LAB_04c5b994;
    }
    if (param_1 == 0xfad) {
      lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92de0);
      goto LAB_04c5b994;
    }
  }
  else {
    if (param_1 == 0xcc3e) {
      lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92d18);
      goto LAB_04c5b994;
    }
    if (param_1 == 999999) {
      lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93158);
      goto LAB_04c5b994;
    }
    if (param_1 == 0xcc3d) {
      lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92f88);
      goto LAB_04c5b994;
    }
  }
  GetGameItemInfo(param_1,0x7fffffff,0);
  lVar2 = StringHelper::ToImage(asStack_18,false);
  if (lVar2 == 0) {
    lVar2 = lVar1;
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
LAB_04c5b994:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonBonusUI::~CommonBonusUI() */

void __thiscall CommonBonusUI::~CommonBonusUI(CommonBonusUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_0698ca40;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0698c700;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Sales_Effect");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x220));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1f0));
  FUN_05476c50(this + 0x1a0);
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x140));
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x128));
  PopingWidget::~PopingWidget((PopingWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CommonBonusUI::~CommonBonusUI() */

void __thiscall CommonBonusUI::~CommonBonusUI(CommonBonusUI *this)

{
  ~CommonBonusUI(this);
  AK::FreeHook(this);
  return;
}


/* CommonBonusUI::SetAward(std::vector<LotteryBonus, std::allocator<LotteryBonus> > const&) */

void __thiscall CommonBonusUI::SetAward(CommonBonusUI *this,vector *param_1)

{
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::operator=
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x128),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonBonusUI::ButtonDepress(int) */

void __thiscall CommonBonusUI::ButtonDepress(CommonBonusUI *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  ulong uVar4;
  UIChestAward *this_00;
  CommonUIManager *this_01;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 local_48;
  undefined4 local_44;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_40 [24];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x6e) {
    iVar2 = FUN_04c5a944(*(undefined8 *)(this + 0x1c8),*(undefined8 *)(this + 0x1d8));
    if (iVar2 == 0) {
      cVar1 = std::vector<LotteryBonus,std::allocator<LotteryBonus>>::empty
                        ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x140));
    }
    else {
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x1c0));
      cVar1 = std::vector<LotteryBonus,std::allocator<LotteryBonus>>::empty
                        ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x140));
    }
    if (cVar1 == '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_40);
      uVar5 = 0;
      while( true ) {
        uVar6 = *(undefined8 *)(this + 0x140);
        uVar4 = FUN_04c5a960(uVar6,*(undefined8 *)(this + 0x148));
        if (uVar4 <= uVar5) break;
        puVar3 = (undefined4 *)FUN_04c5a974(uVar6,uVar5);
        local_48 = *puVar3;
        local_44 = puVar3[1];
        std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::push_back
                  ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)avStack_40,
                   (ChestAwardContent *)&local_48);
        uVar5 = uVar5 + 1;
      }
      std::string::string((string *)&local_48,"effects/ChestHardLevel_Chest");
      this_00 = (UIChestAward *)UIChestAward::create(avStack_40,(string *)&local_48);
      std::string::~string((string *)&local_48);
      nop();
      FUN_04c5ab80(afStack_28,this_00);
      UIChestAward::setEndCallBack(this_00,(function *)afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::~vector
                ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)avStack_40);
    }
    else {
      this_01 = (CommonUIManager *)Sexy::LazySingleton<CommonUIManager>::GetInstance();
      CommonUIManager::CloseBonus(this_01);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CommonBonusUI::ButtonDepress(int) */

void __thiscall CommonBonusUI::ButtonDepress(CommonBonusUI *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}


/* CommonBonusUI::Update() */

void __thiscall CommonBonusUI::Update(CommonBonusUI *this)

{
  char cVar1;
  
  PopingWidget::Update((PopingWidget *)this);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x220));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x220));
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1f0));
  if (cVar1 == '\0') {
    return;
  }
  EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x1f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonBonusUI::Draw(Sexy::Graphics*) */

void __thiscall CommonBonusUI::Draw(CommonBonusUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  Image *pIVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  cVar5 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x220));
  if (cVar5 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x220),param_1);
  }
  PopingWidget::GetMainRect();
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93180);
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,aIStack_18,uVar8);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92e30);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x17c));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar8,aIStack_18);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x1a0,this + 0x18c,uVar8,aIStack_18,5,1);
  if (this[0x158] != (CommonBonusUI)0x0) {
    uVar13 = 0;
    uVar9 = FUN_04c5a960(*(undefined8 *)(this + 0x128),*(undefined8 *)(this + 0x130));
    if (uVar9 != 0) {
      do {
        iVar3 = 0;
        if (uVar9 + 1 != 0) {
          iVar3 = (int)((ulong)(long)*(int *)(this + 0x168) / (uVar9 + 1));
        }
        iVar1 = *(int *)(this + 0x178);
        iVar2 = *(int *)(this + 0x160);
        iVar4 = (*(int *)(this + 0x15c) + *(int *)(this + 0x164) / 2) - *(int *)(this + 0x174) / 2;
        iVar3 = iVar3 + (int)uVar13 * iVar3;
        iVar6 = FUN_04c5abdc(0x5a);
        Sexy::Insets::Insets((Insets *)&local_38,iVar4,(iVar3 + iVar2) - iVar1 / 2,iVar6,iVar6);
        iVar1 = *(int *)(this + 0x178);
        iVar2 = *(int *)(this + 0x160);
        iVar6 = FUN_04c5abdc(0x2d);
        iVar7 = FUN_04c5abdc(0x5a);
        Sexy::Insets::Insets(aIStack_28,iVar4,((iVar3 + iVar2) - iVar1 / 2) + iVar6,iVar7,iVar6);
        pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93218);
        Sexy::Graphics::DrawImage(param_1,pIVar10,local_38,local_34,local_30,local_2c);
        piVar11 = (int *)FUN_04c5a974(*(undefined8 *)(this + 0x128),uVar13);
        pIVar10 = (Image *)GetRewardImage(this,*piVar11);
        Sexy::Graphics::DrawImage(param_1,pIVar10,local_38,local_34,local_30,local_2c);
        uVar8 = *(undefined8 *)(this + 0x128);
        lVar12 = FUN_04c5a974(uVar8,uVar13);
        if (1 < *(int *)(lVar12 + 4)) {
          Sexy::StrFormat("X %d",aIStack_18);
          Sexy::ToWString((string *)aIStack_18);
          std::string::~string((string *)aIStack_18);
          uVar8 = PrimeText_PotentialTypeface::Typeface
                            (PrimeText_Game::Typeface_FZShaoEr_24_Outline);
          Sexy::Color::Color((Color *)aIStack_18,1);
          WriteWordInRect(param_1,auStack_40,aIStack_28,uVar8,aIStack_18,5,1);
          FUN_05476c50(auStack_40);
          uVar8 = *(undefined8 *)(this + 0x128);
        }
        uVar13 = uVar13 + 1;
        uVar9 = FUN_04c5a960(uVar8,*(undefined8 *)(this + 0x130));
      } while (uVar13 < uVar9);
    }
  }
  cVar5 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1f0));
  if (cVar5 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x1f0),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

