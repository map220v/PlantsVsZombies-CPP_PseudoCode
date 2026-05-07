// Class: DaveTreasureBonusUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureBonusUI::InitShiningAnims() */

void __thiscall DaveTreasureBonusUI::InitShiningAnims(DaveTreasureBonusUI *this)

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
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x1c0);
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
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x1f0);
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
/* DaveTreasureBonusUI::InitView() */

void __thiscall DaveTreasureBonusUI::InitView(DaveTreasureBonusUI *this)

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
  
  this[0x59] = (DaveTreasureBonusUI)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac21f0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar12 = (int)((double)iVar3 * 0.7);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac21f0);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
  iVar5 = FUN_039f135c(500);
  iVar3 = FUN_039f135c(0x15e);
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
  iVar6 = FUN_039f135c(3);
  Sexy::Insets::Insets((Insets *)&local_40,(iVar1 - iVar12 / 2) - iVar6,iVar7,iVar12,iVar4);
  *(undefined8 *)(this + 0x17c) = local_40;
  *(undefined8 *)(this + 0x184) = uStack_38;
  iVar7 = FUN_039f135c(5);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x17c),*(int *)(this + 0x180) - iVar7,iVar12,iVar4)
  ;
  *(undefined8 *)(this + 0x18c) = local_40;
  *(undefined8 *)(this + 0x194) = uStack_38;
  TodStringTranslate(L"[GEILIVABLE_LOTTERY_BONUS_TITLE]");
  FUN_054766c8(this + 0x1a0,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  iVar7 = FUN_039f135c(0);
  iVar6 = FUN_039f135c(0x5a);
  Sexy::Insets::Insets((Insets *)&local_40,iVar7,iVar7,iVar6,iVar6);
  *(undefined8 *)(this + 0x16c) = local_40;
  *(undefined8 *)(this + 0x174) = uStack_38;
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2488);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2488);
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
    if (pPVar13 == (PVZ2UIButton *)0x0) goto LAB_039f366c;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ac2488,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac2218,3);
  PVZ2UIButton::SetDialogStates(pPVar13,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x1b8) + 0x1a0))(*(long **)(this + 0x1b8),this + 0x1a8);
  plVar11 = *(long **)(this + 0x1b8);
  pcVar14 = *(code **)(*plVar11 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar14)(plVar11,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1b8));
LAB_039f366c:
  InitShiningAnims(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureBonusUI::DaveTreasureBonusUI() */

void __thiscall DaveTreasureBonusUI::DaveTreasureBonusUI(DaveTreasureBonusUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  *(undefined ***)this = &PTR_GetClass_066f7fb0;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_066f82f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  this[0x158] = (DaveTreasureBonusUI)0x0;
  Sexy::Insets::Insets((Insets *)(this + 0x15c));
  Sexy::Insets::Insets((Insets *)(this + 0x16c));
  Sexy::Insets::Insets((Insets *)(this + 0x17c));
  Sexy::Insets::Insets((Insets *)(this + 0x18c));
  FUN_05476574(this + 0x1a0);
  Sexy::Insets::Insets((Insets *)(this + 0x1a8));
  *(undefined8 *)(this + 0x1b8) = 0;
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1c0));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1f0));
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::clear
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x128));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Sales_Effect");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NationalCenter");
  LawnApp::LoadGroup(pLVar1,asStack_10);
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
/* DaveTreasureBonusUI::~DaveTreasureBonusUI() */

void __thiscall DaveTreasureBonusUI::~DaveTreasureBonusUI(DaveTreasureBonusUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_066f82f0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066f7fb0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Sales_Effect");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NationalCenter");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1f0));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1c0));
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


/* DaveTreasureBonusUI::~DaveTreasureBonusUI() */

void __thiscall DaveTreasureBonusUI::~DaveTreasureBonusUI(DaveTreasureBonusUI *this)

{
  ~DaveTreasureBonusUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureBonusUI::ButtonDepress(int) */

void __thiscall DaveTreasureBonusUI::ButtonDepress(DaveTreasureBonusUI *this,int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  ulong uVar3;
  UIChestAward *this_00;
  CommonUIManager *this_01;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined4 local_44;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_40 [24];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x6e) {
    cVar1 = std::vector<LotteryBonus,std::allocator<LotteryBonus>>::empty
                      ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x140));
    if (cVar1 == '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_40);
      uVar4 = 0;
      while( true ) {
        uVar5 = *(undefined8 *)(this + 0x140);
        uVar3 = FUN_039f0250(uVar5,*(undefined8 *)(this + 0x148));
        if (uVar3 <= uVar4) break;
        puVar2 = (undefined4 *)FUN_039f0264(uVar5,uVar4);
        local_48 = *puVar2;
        local_44 = puVar2[1];
        std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::push_back
                  ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)avStack_40,
                   (ChestAwardContent *)&local_48);
        uVar4 = uVar4 + 1;
      }
      std::string::string((string *)&local_48,"effects/ChestHardLevel_Chest");
      this_00 = (UIChestAward *)UIChestAward::create(avStack_40,(string *)&local_48);
      std::string::~string((string *)&local_48);
      nop();
      FUN_039f1300(afStack_28,this_00);
      UIChestAward::setEndCallBack(this_00,(function *)afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::~vector
                ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)avStack_40);
    }
    else {
      this_01 = (CommonUIManager *)Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
      CommonUIManager::CloseBonus(this_01);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DaveTreasureBonusUI::ButtonDepress(int) */

void __thiscall DaveTreasureBonusUI::ButtonDepress(DaveTreasureBonusUI *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureBonusUI::SetAward(std::vector<LotteryBonus, std::allocator<LotteryBonus> > const&) */

void __thiscall DaveTreasureBonusUI::SetAward(DaveTreasureBonusUI *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  NameMapperBase *this_00;
  int *piVar4;
  ulong uVar5;
  string *extraout_x0;
  ulong uVar6;
  undefined8 uVar7;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::operator=
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x128),param_1);
  uVar7 = *(undefined8 *)(this + 0x128);
  lVar3 = FUN_039f0250(uVar7,*(undefined8 *)(this + 0x130));
  if (lVar3 != 0) {
    do {
      lVar3 = FUN_039f0264(uVar7,uVar6);
      *(undefined4 *)(lVar3 + 8) = 0;
      this_00 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
      piVar4 = (int *)FUN_039f0264(*(undefined8 *)(this + 0x128),uVar6);
      cVar1 = NameMapperBase::ContainsId(this_00,*piVar4);
      if (cVar1 == '\0') {
        DSingleton<HeadshotConfig>::getInstance();
        nop();
        piVar4 = (int *)FUN_039f0264(*(undefined8 *)(this + 0x128),uVar6);
        DString::DString(aDStack_18,*piVar4);
        DString::operator_cast_to_string(aDStack_18);
        std::string::string(asStack_28,"plant");
        std::string::string(asStack_20,"none");
        DIniFile::getItem(extraout_x0,asStack_30,asStack_28);
        std::string::~string(asStack_20);
        nop();
        std::string::~string(asStack_28);
        nop();
        std::string::~string(asStack_30);
        DString::~DString(aDStack_18);
        bVar2 = std::operator!=(asStack_38,"none");
        if (bVar2) {
          lVar3 = FUN_039f0264(*(undefined8 *)(this + 0x128),uVar6);
          *(undefined4 *)(lVar3 + 8) = 2;
        }
        std::string::~string(asStack_38);
        uVar7 = *(undefined8 *)(this + 0x128);
      }
      else {
        uVar7 = *(undefined8 *)(this + 0x128);
        lVar3 = FUN_039f0264(uVar7,uVar6);
        *(undefined4 *)(lVar3 + 8) = 1;
      }
      uVar6 = uVar6 + 1;
      uVar5 = FUN_039f0250(uVar7,*(undefined8 *)(this + 0x130));
    } while (uVar6 < uVar5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureBonusUI::GetRewardImage(int) */

void __thiscall DaveTreasureBonusUI::GetRewardImage(DaveTreasureBonusUI *this,int param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  string *extraout_x0;
  string *extraout_x1;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  DString aDStack_48 [16];
  GAME_ITEM_INFO aGStack_38 [4];
  int local_34;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2128);
  if (param_1 == 0xcc3d) {
    lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2270);
    goto LAB_039fbb58;
  }
  if (param_1 < 0xcc3e) {
    if (param_1 == 0xbc0) {
      lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac21c8);
      goto LAB_039fbb58;
    }
    if (param_1 == 0xfad) {
      lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2298);
      goto LAB_039fbb58;
    }
  }
  else {
    if (param_1 == 0xf423e) {
      lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2378);
      goto LAB_039fbb58;
    }
    if (param_1 == 999999) {
      lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac20f8);
      goto LAB_039fbb58;
    }
    if (param_1 == 0xcc3e) {
      lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac20d0);
      goto LAB_039fbb58;
    }
  }
  GetGameItemInfo(param_1,0x7fffffff,0);
  if (local_34 == 0x8000) {
    DSingleton<HeadshotConfig>::getInstance();
    nop();
    DString::DString(aDStack_48,param_1);
    DString::operator_cast_to_string(aDStack_48);
    std::string::string(asStack_58,"plant");
    std::string::string(asStack_50,"none");
    DIniFile::getItem(extraout_x0,asStack_60,asStack_58);
    std::string::~string(asStack_50);
    nop();
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    DString::~DString(aDStack_48);
    bVar1 = std::operator!=(asStack_68,"none");
    if (bVar1) {
      Sexy::StringToUpper((Sexy *)asStack_68,extraout_x1);
      std::operator+("IMAGE_UI_HEADSHOTFRAME_HEADSHOT_",asStack_50);
      lVar2 = StringHelper::ToImage((string *)aDStack_48,false);
      std::string::~string((string *)aDStack_48);
      std::string::~string(asStack_50);
    }
    std::string::~string(asStack_68);
    lVar3 = lVar2;
  }
  else {
    lVar3 = StringHelper::ToImage(asStack_18,false);
    if (lVar3 == 0) {
      lVar3 = lVar2;
    }
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
LAB_039fbb58:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureBonusUI::Draw(Sexy::Graphics*) */

void __thiscall DaveTreasureBonusUI::Draw(DaveTreasureBonusUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  Image *pIVar12;
  undefined4 *puVar13;
  int *piVar14;
  long lVar15;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  string asStack_68 [8];
  int iStack_60;
  int iStack_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  cVar5 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1f0));
  if (cVar5 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x1f0),param_1);
  }
  PopingWidget::GetMainRect();
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac21a0);
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,aIStack_18,uVar10);
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac21f0);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x17c));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar10,aIStack_18);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x1a0,this + 0x18c,uVar10,aIStack_18,5,1);
  if (this[0x158] != (DaveTreasureBonusUI)0x0) {
    uVar17 = 0;
    uVar11 = FUN_039f0250(*(undefined8 *)(this + 0x128),*(undefined8 *)(this + 0x130));
    if (uVar11 != 0) {
      do {
        iVar9 = 0;
        if (uVar11 + 1 != 0) {
          iVar9 = (int)((ulong)(long)*(int *)(this + 0x168) / (uVar11 + 1));
        }
        iVar1 = *(int *)(this + 0x178);
        iVar2 = *(int *)(this + 0x160);
        iVar4 = (*(int *)(this + 0x15c) + *(int *)(this + 0x164) / 2) - *(int *)(this + 0x174) / 2;
        iVar9 = iVar9 + (int)uVar17 * iVar9;
        iVar7 = FUN_039f135c(0x5a);
        Sexy::Insets::Insets((Insets *)&local_58,iVar4,(iVar9 + iVar2) - iVar1 / 2,iVar7,iVar7);
        Sexy::Insets::Insets
                  ((Insets *)&local_48,(int)((double)local_58 + (double)local_50 * 0.1),
                   (int)((double)local_54 + (double)local_4c * 0.1),(int)((double)local_50 * 0.8),
                   (int)((double)local_4c * 0.8));
        iVar1 = *(int *)(this + 0x178);
        iVar2 = *(int *)(this + 0x160);
        iVar7 = FUN_039f135c(0x2d);
        iVar8 = FUN_039f135c(0x5a);
        Sexy::Insets::Insets(aIStack_38,iVar4,((iVar9 + iVar2) - iVar1 / 2) + iVar7,iVar8,iVar7);
        pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac24d8);
        Sexy::Graphics::DrawImage(param_1,pIVar12,local_58,local_54,local_50,local_4c);
        puVar13 = (undefined4 *)FUN_039f0264(*(undefined8 *)(this + 0x128),uVar17);
        if (puVar13[2] == 1) {
          iVar9 = PlantChipNameMapperServerID::GetInstance();
          FUN_039f0264(*(undefined8 *)(this + 0x128),uVar17);
          NameMapperBase::GetNameForId(iVar9);
          this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
          this_01 = (RtWeakPtr *)SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,asStack_68);
          fVar19 = ((float)local_40 * 0.9) / (float)*(int *)(this_01 + 0x28);
          fVar18 = ((float)local_3c * 0.9) / (float)*(int *)(this_01 + 0x2c);
          Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_01 + 0x170));
          GetImageOffset(&iStack_60,aIStack_18);
          Sexy::RtId::~RtId((RtId *)aIStack_18);
          UIWidget::ConvertPSDImageOffsetToUISpace(&iStack_60,&iStack_5c,1536.0);
          Sexy::Insets::Insets
                    (aIStack_28,(int)((float)local_48 + (float)*(int *)(this_01 + 0x30) * fVar19),
                     (int)((float)local_44 + (float)*(int *)(this_01 + 0x34) * fVar18),
                     (int)(fVar19 * (float)*(int *)(this_01 + 0x28)),
                     (int)(fVar18 * (float)*(int *)(this_01 + 0x2c)));
          pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
          Sexy::Graphics::DrawImage
                    (param_1,(Image *)pRVar16,(TRect *)aIStack_28,(TRect *)(this_01 + 0x20));
          Sexy::Insets::Insets
                    (aIStack_18,(int)((float)local_48 + (float)*(int *)(this_01 + 0x18) * fVar19),
                     (int)((float)local_44 + (float)*(int *)(this_01 + 0x1c) * fVar18),
                     (int)(fVar19 * (float)*(int *)(this_01 + 0x10)),
                     (int)(fVar18 * (float)*(int *)(this_01 + 0x14)));
          bVar6 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
          if (bVar6) {
            lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar15 + 0x48));
            Sexy::Graphics::DrawImage
                      (param_1,(Image *)pRVar16,(TRect *)aIStack_18,(TRect *)(this_01 + 8));
            std::string::~string(asStack_68);
          }
          else {
            std::string::~string(asStack_68);
          }
        }
        else if (puVar13[2] == 2) {
          uVar3 = *puVar13;
          Sexy::Insets::Insets(aIStack_18,(Insets *)&local_48);
          FUN_039fb3cc(param_1,uVar3,aIStack_18);
        }
        else {
          Sexy::Insets::Insets(aIStack_18,(Insets *)&local_48);
          piVar14 = (int *)FUN_039f0264(*(undefined8 *)(this + 0x128),uVar17);
          uVar10 = GetRewardImage(this,*piVar14);
          DrawAdaptiveImage(param_1,aIStack_18,uVar10);
        }
        uVar10 = *(undefined8 *)(this + 0x128);
        lVar15 = FUN_039f0264(uVar10,uVar17);
        if (1 < *(int *)(lVar15 + 4)) {
          Sexy::StrFormat("x%d",aIStack_18);
          Sexy::ToWString((string *)aIStack_18);
          std::string::~string((string *)aIStack_18);
          uVar10 = PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_FZCuYuan_16_Outline);
          Sexy::Color::Color((Color *)aIStack_18,4);
          WriteWordInRect(param_1,aIStack_28,aIStack_38,uVar10,aIStack_18,5,1);
          FUN_05476c50(aIStack_28);
          uVar10 = *(undefined8 *)(this + 0x128);
        }
        uVar17 = uVar17 + 1;
        uVar11 = FUN_039f0250(uVar10,*(undefined8 *)(this + 0x130));
      } while (uVar17 < uVar11);
    }
  }
  cVar5 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1c0));
  if (cVar5 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x1c0),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTreasureBonusUI::Update() */

void __thiscall DaveTreasureBonusUI::Update(DaveTreasureBonusUI *this)

{
  char cVar1;
  
  PopingWidget::Update((PopingWidget *)this);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1f0));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x1f0));
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1c0));
  if (cVar1 == '\0') {
    return;
  }
  EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x1c0));
  return;
}

