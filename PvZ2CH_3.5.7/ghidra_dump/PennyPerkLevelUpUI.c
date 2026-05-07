// Class: PennyPerkLevelUpUI


/* PennyPerkLevelUpUI::~PennyPerkLevelUpUI() */

void __thiscall PennyPerkLevelUpUI::~PennyPerkLevelUpUI(PennyPerkLevelUpUI *this)

{
  *(undefined ***)this = &PTR_GetClass_069b9b70;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069b9e98;
  FUN_05476c50(this + 0xf8);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PennyPerkLevelUpUI::~PennyPerkLevelUpUI() */

void __thiscall PennyPerkLevelUpUI::~PennyPerkLevelUpUI(PennyPerkLevelUpUI *this)

{
  ~PennyPerkLevelUpUI(this);
  AK::FreeHook(this);
  return;
}


/* PennyPerkLevelUpUI::PennyPerkLevelUpUI(PerkData, PennyPerkBattleStatementChooseUI*, int) */

void __thiscall
PennyPerkLevelUpUI::PennyPerkLevelUpUI
          (PennyPerkLevelUpUI *this,DrZomibeLevelData *param_2,undefined8 param_3,undefined4 param_4
          )

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069b9b70;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069b9e98;
  PerkData::PerkData((PerkData *)(this + 0xe0));
  FUN_05476574(this + 0xf8);
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  Sexy::Insets::Insets((Insets *)(this + 0x138));
  DrZomibeLevelData::operator=((DrZomibeLevelData *)(this + 0xe0),param_2);
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x110) = param_3;
  *(undefined4 *)(this + 0x100) = param_4;
  *(undefined8 *)(this + 0x108) = 0;
  return;
}


/* PennyPerkLevelUpUI::ButtonDepress(int) */

void __thiscall PennyPerkLevelUpUI::ButtonDepress(PennyPerkLevelUpUI *this,int param_1)

{
  RiftOutro *this_00;
  
  if (param_1 != 0x3e9) {
    return;
  }
  UISingletonDialog<PennyPerkBattleStatementChooseUI>::CloseDialog();
  this_00 = (RiftOutro *)FUN_04d88d90(*(undefined8 *)(*(long *)(this + 0x110) + 0x180));
  RiftOutro::PennyPerkChooseEnd(this_00);
  return;
}


/* non-virtual thunk to PennyPerkLevelUpUI::ButtonDepress(int) */

void __thiscall PennyPerkLevelUpUI::ButtonDepress(PennyPerkLevelUpUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkLevelUpUI::InitView() */

void __thiscall PennyPerkLevelUpUI::InitView(PennyPerkLevelUpUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  PVZ2UIButton *pPVar12;
  PVZ2UIButton *pPVar13;
  undefined8 uVar14;
  long *plVar15;
  Dialog *pDVar16;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  pDVar16 = *(Dialog **)(this + 0x110);
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_40,"Item");
  lVar11 = UI::Dialog::GetWidget(pDVar16,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pDVar16 = *(Dialog **)(this + 0x110);
  std::string::string((string *)&local_40,"ConfirmBtn");
  pPVar12 = UI::Dialog::GetWidget<PVZ2UIButton>(pDVar16,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  iVar1 = FUN_04d891a0(0x14);
  iVar2 = FUN_04d88d74(*(undefined4 *)(lVar11 + 0x48));
  iVar3 = FUN_04d88d7c(*(undefined4 *)(lVar11 + 0x50));
  iVar4 = FUN_04d88d78(*(undefined4 *)(lVar11 + 0x4c));
  Sexy::Insets::Insets((Insets *)&local_40,(iVar2 - iVar3) - iVar1,iVar4,iVar3,iVar3);
  *(undefined8 *)(this + 0x118) = local_40;
  *(undefined8 *)(this + 0x120) = uStack_38;
  iVar2 = FUN_04d88d74(*(undefined4 *)(lVar11 + 0x48));
  iVar3 = FUN_04d88d7c(*(undefined4 *)(lVar11 + 0x50));
  iVar4 = FUN_04d88d78(*(undefined4 *)(lVar11 + 0x4c));
  Sexy::Insets::Insets((Insets *)&local_40,(iVar2 + iVar3) - iVar1,iVar4,iVar3,iVar3);
  *(undefined8 *)(this + 0x128) = local_40;
  *(undefined8 *)(this + 0x130) = uStack_38;
  iVar2 = FUN_04d88d74(*(undefined4 *)(lVar11 + 0x48));
  iVar3 = FUN_04d891a0(0xf);
  iVar4 = FUN_04d88d78(*(undefined4 *)(lVar11 + 0x4c));
  iVar5 = FUN_04d88d7c(*(undefined4 *)(lVar11 + 0x50));
  iVar6 = FUN_04d891a0(0x1e);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(iVar2 + iVar3) - iVar1,iVar4 + iVar5 / 2,iVar5 - iVar6,iVar3);
  *(undefined8 *)(this + 0x138) = local_40;
  *(undefined8 *)(this + 0x140) = uStack_38;
  FUN_05478178(awStack_78,L"[DIALOG_STRING_OK]",auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar13,0x3e9,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x108) = pPVar13;
  FUN_05476c50(awStack_78);
  nop();
  pPVar13 = *(PVZ2UIButton **)(this + 0x108);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b98438,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b98410,2);
  PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar15 = *(long **)(this + 0x108);
  uVar7 = *(undefined4 *)(pPVar12 + 0x48);
  *(undefined1 *)((long)plVar15 + 0x59) = 0;
  uVar7 = FUN_04d88d74(uVar7);
  uVar8 = FUN_04d88d78(*(undefined4 *)(pPVar12 + 0x4c));
  uVar9 = FUN_04d88d7c(*(undefined4 *)(pPVar12 + 0x50));
  uVar10 = FUN_04d88d80(*(undefined4 *)(pPVar12 + 0x54));
  (**(code **)(*plVar15 + 0x198))(plVar15,uVar7,uVar8,uVar9,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  uVar14 = StringHelper::ToImage((string *)(lVar11 + 0x28),false);
  *(undefined8 *)(this + 0xf0) = uVar14;
  Sexy::StrFormat(L"LV.%d",(string *)&local_40,(ulong)(*(int *)(this + 0x100) + 1));
  FUN_054766c8(this + 0xf8,(string *)&local_40);
  FUN_05476c50((string *)&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkLevelUpUI::Draw(Sexy::Graphics*) */

void __thiscall PennyPerkLevelUpUI::Draw(PennyPerkLevelUpUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Image *pIVar9;
  undefined8 uVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(LotteryResultProgressBar **)(this + 0xf0) != (LotteryResultProgressBar *)0x0) {
    iVar1 = *(int *)(this + 0x120);
    iVar2 = *(int *)(this + 0x118);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xf0));
    iVar3 = *(int *)(this + 0x124);
    iVar8 = *(int *)(this + 0x11c);
    iVar5 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xf0));
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xf0));
    pSVar12 = *(SalesProgressBar **)(this + 0xf0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar12);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pSVar12,iVar2 + (iVar1 + iVar4 * -2) / 2,
               iVar8 + (iVar3 + iVar5 * -2) / 2,iVar6 << 1,iVar7 << 1);
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b98618);
    iVar1 = *(int *)(this + 0x118);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xf0));
    iVar4 = FUN_04d891a0(10);
    iVar2 = *(int *)(this + 0x124);
    iVar3 = *(int *)(this + 0x11c);
    iVar5 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xf0));
    iVar6 = FUN_04d891a0(0x14);
    iVar7 = FUN_04d891a0(0x3c);
    Sexy::Graphics::DrawImage
              (param_1,pIVar9,(iVar1 + iVar8 * 2) - iVar4,iVar3 + (iVar2 + iVar5 * -2) / 2 + iVar6,
               iVar7,iVar7);
    iVar1 = *(int *)(this + 0x118);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xf0));
    iVar4 = FUN_04d891a0(10);
    iVar2 = *(int *)(this + 0x124);
    iVar3 = *(int *)(this + 0x11c);
    iVar5 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xf0));
    iVar6 = FUN_04d891a0(0x14);
    iVar7 = FUN_04d891a0(0x3c);
    Sexy::Insets::Insets
              (aIStack_28,(iVar1 + iVar8 * 2) - iVar4,iVar3 + (iVar2 + iVar5 * -2) / 2 + iVar6,iVar7
               ,iVar7);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0xf8,aIStack_28,uVar10,aCStack_18,5,1);
    if (*(LotteryResultProgressBar **)(this + 0xf0) != (LotteryResultProgressBar *)0x0) {
      iVar1 = *(int *)(this + 0x130);
      iVar2 = *(int *)(this + 0x128);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xf0))
      ;
      iVar3 = *(int *)(this + 0x134);
      iVar8 = *(int *)(this + 300);
      iVar5 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xf0));
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xf0))
      ;
      pSVar12 = *(SalesProgressBar **)(this + 0xf0);
      iVar7 = SalesProgressBar::GetCurrentLevel(pSVar12);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pSVar12,iVar2 + (iVar1 + iVar4 * -2) / 2,
                 iVar8 + (iVar3 + iVar5 * -2) / 2,iVar6 << 1,iVar7 << 1);
      pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b98460);
      iVar1 = *(int *)(this + 0x128);
      iVar8 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xf0))
      ;
      iVar4 = FUN_04d891a0(10);
      iVar2 = *(int *)(this + 0x134);
      iVar3 = *(int *)(this + 300);
      iVar5 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xf0));
      iVar6 = FUN_04d891a0(0x14);
      iVar7 = FUN_04d891a0(0x3c);
      Sexy::Graphics::DrawImage
                (param_1,pIVar9,(iVar1 + iVar8 * 2) - iVar4,iVar3 + (iVar2 + iVar5 * -2) / 2 + iVar6
                 ,iVar7,iVar7);
    }
  }
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b98698);
  iVar1 = *(int *)(this + 0x140);
  iVar2 = *(int *)(this + 0x138);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b98698);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar3 = *(int *)(this + 0x13c);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b98698);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b98698);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar2 + (iVar1 - iVar8) / 2,iVar3,iVar4,iVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

