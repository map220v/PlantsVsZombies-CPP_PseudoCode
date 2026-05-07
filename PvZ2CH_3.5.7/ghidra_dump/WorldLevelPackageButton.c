// Class: WorldLevelPackageButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageButton::WorldLevelPackageButton(int) */

void __thiscall
WorldLevelPackageButton::WorldLevelPackageButton(WorldLevelPackageButton *this,int param_1)

{
  undefined **__n;
  undefined1 auStack_58 [8];
  wstring awStack_50 [8];
  Color aCStack_48 [16];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_50,&DAT_056f11a8,auStack_58);
  Sexy::Color::Color(aCStack_48,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)(this + 0x300),awStack_50,aCStack_48);
  FUN_05476c50(awStack_50);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined ***)this = &PTR_GetClass_06868760;
  __n = &PTR_ButtonPress_06868ae8;
  *(undefined ***)(this + 0x198) = &PTR__WorldLevelPackageButton_06868ac0;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06868ae8;
  FUN_05476574(this + 0x330);
  FUN_05476574(this + 0x338);
  FUN_05476574(this + 0x340);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x348),(DummyInit *)0x0);
  Set8BytesTo0((string *)(this + 0x380));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x390));
  FUN_054772c4(this + 0x330,&DAT_056f11a8);
  FUN_054772c4(this + 0x338,&DAT_056f11a8);
  FUN_054772c4(this + 0x340,&DAT_056f11a8);
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x348),(Delegate2 *)aDStack_38);
  *(undefined4 *)(this + 0x378) = 0;
  *(undefined4 *)(this + 0x388) = 0;
  std::string::append((string *)(this + 0x380),"",(size_t)__n);
  this[0x59] = (WorldLevelPackageButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldLevelPackageButton::~WorldLevelPackageButton() */

void __thiscall WorldLevelPackageButton::~WorldLevelPackageButton(WorldLevelPackageButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06868760;
  *(undefined ***)(this + 0x198) = &PTR__WorldLevelPackageButton_06868ac0;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06868ae8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x390));
  std::string::~string((string *)(this + 0x380));
  FUN_05476c50(this + 0x340);
  FUN_05476c50(this + 0x338);
  FUN_05476c50(this + 0x330);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to WorldLevelPackageButton::~WorldLevelPackageButton() */

void __thiscall WorldLevelPackageButton::~WorldLevelPackageButton(WorldLevelPackageButton *this)

{
  ~WorldLevelPackageButton(this + -0x198);
  return;
}


/* WorldLevelPackageButton::~WorldLevelPackageButton() */

void __thiscall WorldLevelPackageButton::~WorldLevelPackageButton(WorldLevelPackageButton *this)

{
  ~WorldLevelPackageButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldLevelPackageButton::~WorldLevelPackageButton() */

void __thiscall WorldLevelPackageButton::~WorldLevelPackageButton(WorldLevelPackageButton *this)

{
  ~WorldLevelPackageButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageButton::InitView() */

void __thiscall WorldLevelPackageButton::InitView(WorldLevelPackageButton *this)

{
  Sexy *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  vector *pvVar11;
  long lVar12;
  int *piVar13;
  WorldLevelPackageBonusWidget *this_01;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  wstring local_60 [4];
  undefined4 uStack_5c;
  undefined4 local_54;
  ulong local_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  string asStack_28 [8];
  undefined8 local_20;
  long local_8;
  
  this_00 = (Sexy *)(this + 0x380);
  *(int *)(this + 0x378) = *(int *)(this + 0xd4) + -2000;
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
  RechargeDailySignActivityManager::GetBannerImageName();
  FUN_05474278(this_00,asStack_28);
  std::string::~string(asStack_28);
  uVar10 = Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
  FUN_05475d88((string *)&local_40,this_00);
  WorldLevelPackageManager::GetWorldLevelPackageData(asStack_28,uVar10,(string *)&local_40);
  std::string::~string((string *)&local_40);
  pvVar11 = (vector *)FUN_045aa678(local_20,(long)*(int *)(this + 0x378));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_40,pvVar11);
  uVar14 = *(uint *)(this + 0x378);
  if (uVar14 == 0) {
    uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b157d0);
    uVar14 = *(uint *)(this + 0x378);
    *(undefined8 *)(this + 0x328) = uVar10;
  }
  else if (uVar14 == 1) {
    uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b15860);
    uVar14 = *(uint *)(this + 0x378);
    *(undefined8 *)(this + 0x328) = uVar10;
  }
  else if (uVar14 == 2) {
    uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b157f8);
    uVar14 = *(uint *)(this + 0x378);
    *(undefined8 *)(this + 0x328) = uVar10;
  }
  lVar12 = FUN_045aa678(local_20,(long)(int)uVar14);
  *(undefined4 *)(this + 0x388) = *(undefined4 *)(lVar12 + 0x1c);
  Sexy::StrFormat("IMAGE_UI_WORLD_LEVEL_PACKAGE_BG_%d",asStack_80,(ulong)uVar14);
  auVar15 = StringHelper::ToImage(asStack_80,false);
  *(long *)(this + 0x308) = auVar15._0_8_;
  Sexy::StringToUpper(this_00,auVar15._8_8_);
  uVar10 = FUN_0547429c((string *)&local_50);
  Sexy::StrFormat("IMAGE_UI_WORLD_LEVEL_PACKAGE_ICON_%s%d",asStack_78,uVar10,
                  (ulong)*(uint *)(this + 0x378));
  std::string::~string((string *)&local_50);
  uVar10 = StringHelper::ToImage(asStack_78,false);
  *(undefined8 *)(this + 0x310) = uVar10;
  std::string::string((string *)&local_50,"IMAGE_UI_GENERIC_RED_COUNTDOWN_BG");
  uVar10 = StringHelper::ToImage((string *)&local_50,false);
  *(undefined8 *)(this + 0x318) = uVar10;
  std::string::~string((string *)&local_50);
  nop();
  Sexy::StrFormat("IMAGE_UI_WORLD_LEVEL_PACKAGE_PRICE_%d",asStack_70,(ulong)*(uint *)(this + 0x378))
  ;
  uVar10 = StringHelper::ToImage(asStack_70,false);
  *(undefined8 *)(this + 800) = uVar10;
  Sexy::StrFormat("[WORLD_LEVEL_PACKAGE_%d]",asStack_68,(ulong)*(uint *)(this + 0x378));
  StringHelper::ToStringValue(asStack_68);
  FUN_054766c8(this + 0x330,(string *)&local_50);
  FUN_05476c50((string *)&local_50);
  FUN_05478178(local_60,L"[WORLD_LEVEL_PACKAGE_LIMIT_BUY_DESC]",auStack_88);
  TodReplaceNumberString(local_60,L"{NUMS}",*(int *)(this + 0x388));
  FUN_054766c8(this + 0x340,(string *)&local_50);
  FUN_05476c50((string *)&local_50);
  FUN_05476c50(local_60);
  nop();
  iVar3 = FUN_045aaddc(0x1e);
  iVar4 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x310));
  iVar4 = iVar3 * 2 + iVar4;
  iVar5 = FUN_045aa680(local_40,local_38);
  Sexy::Insets::Insets((Insets *)local_60);
  iVar6 = FUN_045aaddc(0x4b);
  iVar7 = FUN_045aaddc(0x28);
  iVar8 = FUN_045aaddc(5);
  iVar9 = FUN_045aaddc(0);
  iVar3 = *(int *)(this + 0x50);
  if (0 < iVar5) {
    lVar12 = 0;
    do {
      uVar14 = (uint)lVar12;
      piVar13 = (int *)FUN_045aa694(local_40,lVar12);
      iVar1 = *piVar13;
      iVar2 = piVar13[1];
      this_01 = ::operator_new(0xf0);
      WorldLevelPackageBonusWidget::WorldLevelPackageBonusWidget(this_01,iVar1,iVar2);
      if ((uVar14 == 2) && (iVar5 == 3)) {
        Sexy::Insets::Insets
                  ((Insets *)&local_50,(*(int *)(this + 0x50) - iVar6) / 2,iVar4 + iVar7 + iVar9,
                   iVar6,iVar7);
      }
      else {
        Sexy::Insets::Insets
                  ((Insets *)&local_50,
                   ((iVar3 + iVar6 * -2) - iVar8) / 2 + (uVar14 & 1) * (iVar6 + iVar8),
                   iVar4 + ((int)uVar14 >> 1) * (iVar7 + iVar9),iVar6,iVar7);
      }
      lVar12 = lVar12 + 1;
      uStack_5c = (undefined4)(local_50 >> 0x20);
      local_54 = (undefined4)(uStack_48 >> 0x20);
      (**(code **)(*(long *)this_01 + 0x198))
                (this_01,local_50 & 0xffffffff,uStack_5c,uStack_48 & 0xffffffff,local_54);
      (**(code **)(*(long *)this + 0x60))(this,this_01);
    } while ((int)lVar12 < iVar5);
  }
  std::string::~string(asStack_68);
  std::string::~string(asStack_70);
  std::string::~string(asStack_78);
  std::string::~string(asStack_80);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_40);
  WorldLevelPackageData::~WorldLevelPackageData((WorldLevelPackageData *)asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldLevelPackageButton::ButtonDepress(int) */

void __thiscall WorldLevelPackageButton::ButtonDepress(WorldLevelPackageButton *this,int param_1)

{
  int iVar1;
  UIWorldLevelPackageDetail *pUVar2;
  
  if (*(int *)(this + 0xd4) != param_1) {
    return;
  }
  iVar1 = FUN_045aa590(*(undefined8 *)(this + 0x350),*(undefined8 *)(this + 0x360));
  if (iVar1 == 0) {
    pUVar2 = (UIWorldLevelPackageDetail *)UISingletonDialog<UIWorldLevelPackageDetail>::ShowDialog()
    ;
    UIWorldLevelPackageDetail::InitView(pUVar2,*(int *)(this + 0x378));
    return;
  }
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x348));
  pUVar2 = (UIWorldLevelPackageDetail *)UISingletonDialog<UIWorldLevelPackageDetail>::ShowDialog();
  UIWorldLevelPackageDetail::InitView(pUVar2,*(int *)(this + 0x378));
  return;
}


/* non-virtual thunk to WorldLevelPackageButton::ButtonDepress(int) */

void __thiscall WorldLevelPackageButton::ButtonDepress(WorldLevelPackageButton *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageButton::Draw(Sexy::Graphics*) */

void __thiscall WorldLevelPackageButton::Draw(WorldLevelPackageButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  SalesProgressBar *pSVar7;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::Draw((PVZ2UIButton *)this,param_1);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x308));
  pSVar7 = *(SalesProgressBar **)(this + 0x308);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar7);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
  Sexy::Graphics::DrawImage(param_1,(Image *)pSVar7,(TRect *)aIStack_28,(TRect *)aIStack_18);
  iVar1 = FUN_045aaddc(0x28);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),iVar1);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x330,aIStack_28,uVar6,aIStack_18,5,1);
  iVar4 = *(int *)(this + 0x50);
  iVar3 = FUN_045aaddc(0x1e);
  iVar5 = iVar4 * 3;
  iVar2 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar4 = iVar5;
  }
  Sexy::Insets::Insets(aIStack_28,iVar2 >> 2,iVar1,iVar4 >> 2,iVar3);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x318));
  pSVar7 = *(SalesProgressBar **)(this + 0x318);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar2,iVar4);
  Sexy::Graphics::DrawImage(param_1,(Image *)pSVar7,(TRect *)aIStack_28,(TRect *)aIStack_18);
  uVar6 = Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
  FUN_05475d88(aIStack_28,this + 0x380);
  UIWorldLevelPackageDetail::GetLevelPackageCountdownStr
            (aIStack_18,uVar6,aIStack_28,*(undefined4 *)(this + 0x378),3);
  FUN_054766c8(this + 0x338,aIStack_18);
  FUN_05476c50(aIStack_18);
  std::string::~string((string *)aIStack_28);
  iVar2 = *(int *)(this + 0x50);
  iVar4 = FUN_045aaddc(10);
  iVar5 = FUN_045aaddc(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar2 / 2 + iVar4,iVar1,iVar2 / 2 - iVar4,iVar5);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x338,aIStack_28,uVar6,aIStack_18,3,1);
  iVar2 = FUN_045aaddc(0x1e);
  iVar1 = iVar1 + iVar2;
  iVar2 = *(int *)(this + 0x50);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x310));
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x310));
  iVar3 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x310));
  Sexy::Insets::Insets(aIStack_28,(iVar2 - iVar4) / 2,iVar1,iVar5,iVar3);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x310));
  pSVar7 = *(SalesProgressBar **)(this + 0x310);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar2,iVar4);
  Sexy::Graphics::DrawImage(param_1,(Image *)pSVar7,(TRect *)aIStack_28,(TRect *)aIStack_18);
  iVar2 = *(int *)(this + 0x50);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x328));
  iVar5 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x328));
  Sexy::Insets::Insets(aIStack_28,(iVar2 << 2) / 5,iVar1,iVar4,iVar5);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x328));
  pSVar7 = *(SalesProgressBar **)(this + 0x328);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar2,iVar4);
  Sexy::Graphics::DrawImage(param_1,(Image *)pSVar7,(TRect *)aIStack_28,(TRect *)aIStack_18);
  iVar2 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x310));
  iVar4 = FUN_045aaddc(0x4b);
  iVar1 = iVar1 + iVar2 + iVar4;
  iVar4 = FUN_045aaddc(10);
  iVar5 = FUN_045aaddc(0x14);
  iVar2 = *(int *)(this + 0x50);
  iVar3 = FUN_045aaddc(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar4,iVar1,iVar2 - iVar5,iVar3);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 800));
  pSVar7 = *(SalesProgressBar **)(this + 800);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar2,iVar4);
  Sexy::Graphics::DrawImage(param_1,(Image *)pSVar7,(TRect *)aIStack_28,(TRect *)aIStack_18);
  iVar2 = FUN_045aaddc(0x1e);
  Sexy::Insets::Insets(aIStack_28,0,iVar1 + iVar2,*(int *)(this + 0x50),iVar2);
  uVar6 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,0);
  WriteWordInRect(param_1,this + 0x340,aIStack_28,uVar6,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

