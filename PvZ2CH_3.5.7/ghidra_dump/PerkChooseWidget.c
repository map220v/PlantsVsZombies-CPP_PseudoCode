// Class: PerkChooseWidget


/* PerkChooseWidget::TouchBegan(Sexy::Touch const&) */

void __thiscall PerkChooseWidget::TouchBegan(PerkChooseWidget *this,Touch *param_1)

{
  *(int *)(this + 0x128) = (int)*(undefined8 *)param_1;
  return;
}


/* PerkChooseWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall PerkChooseWidget::TouchEnded(PerkChooseWidget *this,Touch *param_1)

{
  if ((*(int *)(this + 0x128) == (int)*(undefined8 *)param_1) &&
     (*(PennyPerkBattleStatementChooseUI **)(this + 0x140) !=
      (PennyPerkBattleStatementChooseUI *)0x0)) {
    PennyPerkBattleStatementChooseUI::SetChooseIndex
              (*(PennyPerkBattleStatementChooseUI **)(this + 0x140),*(int *)(this + 0x148));
    return;
  }
  return;
}


/* PerkChooseWidget::~PerkChooseWidget() */

void __thiscall PerkChooseWidget::~PerkChooseWidget(PerkChooseWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069b9850;
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)(this + 0x130));
  FUN_05476c50(this + 0x100);
  FUN_05476c50(this + 0xe0);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PerkChooseWidget::~PerkChooseWidget() */

void __thiscall PerkChooseWidget::~PerkChooseWidget(PerkChooseWidget *this)

{
  ~PerkChooseWidget(this);
  AK::FreeHook(this);
  return;
}


/* PerkChooseWidget::PerkChooseWidget(int, PerkData, PennyPerkBattleStatementChooseUI*) */

void __thiscall
PerkChooseWidget::PerkChooseWidget
          (PerkChooseWidget *this,undefined4 param_1,DrZomibeLevelData *param_3,undefined8 param_4)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069b9850;
  FUN_05476574(this + 0xd8);
  FUN_05476574(this + 0xe0);
  FUN_05476574(this + 0x100);
  PerkData::PerkData((PerkData *)(this + 0x130));
  Sexy::Color::Color((Color *)(this + 0x150));
  *(undefined4 *)(this + 0x148) = param_1;
  DrZomibeLevelData::operator=((DrZomibeLevelData *)(this + 0x130),param_3);
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = param_4;
  this[0x14c] = (PerkChooseWidget)0x0;
  FUN_054772c4(this + 0xd8,&DAT_056f11a8);
  FUN_054772c4(this + 0xe0,&DAT_056f11a8);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  FUN_054772c4(this + 0x100,&DAT_056f11a8);
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PerkChooseWidget::InitView() */

void __thiscall PerkChooseWidget::InitView(PerkChooseWidget *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  Dialog *pDVar5;
  undefined1 auVar6 [16];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar5 = *(Dialog **)(this + 0x140);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x130);
  std::string::string(asStack_10,"ItemName");
  uVar2 = UI::Dialog::GetWidget(pDVar5,asStack_10);
  *(undefined8 *)(this + 0x110) = uVar2;
  std::string::~string(asStack_10);
  nop();
  pDVar5 = *(Dialog **)(this + 0x140);
  std::string::string(asStack_10,"ItemDescription");
  uVar2 = UI::Dialog::GetWidget(pDVar5,asStack_10);
  *(undefined8 *)(this + 0x118) = uVar2;
  std::string::~string(asStack_10);
  nop();
  pDVar5 = *(Dialog **)(this + 0x140);
  std::string::string(asStack_10,"ItemBg");
  uVar2 = UI::Dialog::GetWidget(pDVar5,asStack_10);
  *(undefined8 *)(this + 0x120) = uVar2;
  std::string::~string(asStack_10);
  nop();
  auVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Sexy::StringToUpper((Sexy *)(auVar6._0_8_ + 0x10),auVar6._8_8_);
  std::operator+("[PERK_NAME_",asStack_18);
  std::operator+(asStack_10,"]");
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  StringHelper::ToStringValue(asStack_20);
  FUN_054766c8(this + 0xd8,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::string(asStack_10,"IMAGE_UI_PERKS_PERK_BG");
  uVar2 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0xe8) = uVar2;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_UI_PERKS_ENTRY_BKGD_SHINE");
  uVar2 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0xf0) = uVar2;
  std::string::~string(asStack_10);
  nop();
  iVar1 = *(int *)(this + 0x138);
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  (**(code **)(*plVar3 + 0x80))(asStack_10,plVar3,iVar1);
  FUN_054766c8(this + 0xe0,asStack_10);
  FUN_05476c50(asStack_10);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  uVar2 = StringHelper::ToImage((string *)(lVar4 + 0x28),false);
  *(undefined8 *)(this + 0xf8) = uVar2;
  Sexy::StrFormat(L"LV.%d",asStack_10,(ulong)(iVar1 + 1));
  FUN_054766c8(this + 0x100,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::string(asStack_10,"IMAGE_UI_PERKS_SELECT");
  uVar2 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0x108) = uVar2;
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x150) = 0xff;
  *(undefined4 *)(this + 0x154) = 0xb0;
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PerkChooseWidget::Draw(Sexy::Graphics*) */

void __thiscall PerkChooseWidget::Draw(PerkChooseWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  Image *pIVar8;
  SalesProgressBar *this_00;
  long lVar9;
  LotteryResultProgressBar *this_01;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(Image **)(this + 0xe8) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xe8),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  lVar9 = *(long *)(this + 0x110);
  iVar1 = FUN_04d88d74(*(undefined4 *)(lVar9 + 0x48));
  iVar2 = FUN_04d88d78(*(undefined4 *)(lVar9 + 0x4c));
  iVar3 = FUN_04d88d7c(*(undefined4 *)(lVar9 + 0x50));
  iVar4 = FUN_04d88d80(*(undefined4 *)(lVar9 + 0x54));
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x150));
  WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar7,aIStack_18,5,1);
  if (this[0x14c] != (PerkChooseWidget)0x0) {
    pIVar8 = *(Image **)(this + 0x108);
    if (pIVar8 != (Image *)0x0) {
      iVar2 = FUN_04d891a0(0xfffffff6);
      iVar3 = FUN_04d891a0(0xffffffec);
      iVar4 = FUN_04d891a0(0x14);
      iVar1 = *(int *)(this + 0x50);
      iVar5 = FUN_04d891a0(0x28);
      Sexy::Graphics::DrawImage
                (param_1,pIVar8,iVar2,iVar3,iVar4 + iVar1,iVar5 + *(int *)(this + 0x54));
    }
  }
  this_01 = *(LotteryResultProgressBar **)(this + 0xf8);
  if (this_01 != (LotteryResultProgressBar *)0x0) {
    lVar9 = *(long *)(this + 0x120);
    iVar1 = FUN_04d88d74(*(undefined4 *)(lVar9 + 0x48));
    iVar2 = FUN_04d88d7c(*(undefined4 *)(lVar9 + 0x50));
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar4 = FUN_04d88d78(*(undefined4 *)(*(long *)(this + 0x120) + 0x4c));
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xf8));
    this_00 = *(SalesProgressBar **)(this + 0xf8);
    iVar6 = SalesProgressBar::GetCurrentLevel(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)this_00,iVar1 + (iVar2 + iVar3 * -2) / 2,iVar4,iVar5 << 1,iVar6 << 1
              );
  }
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b98618);
  lVar9 = *(long *)(this + 0x120);
  iVar1 = FUN_04d88d74(*(undefined4 *)(lVar9 + 0x48));
  iVar2 = FUN_04d88d7c(*(undefined4 *)(lVar9 + 0x50));
  iVar3 = FUN_04d891a0(0x3c);
  iVar4 = FUN_04d88d78(*(undefined4 *)(lVar9 + 0x4c));
  iVar5 = FUN_04d891a0(0x23);
  Sexy::Graphics::DrawImage(param_1,pIVar8,(iVar1 + iVar2) - iVar3,iVar4 + iVar5,iVar3,iVar3);
  lVar9 = *(long *)(this + 0x120);
  iVar1 = FUN_04d88d74(*(undefined4 *)(lVar9 + 0x48));
  iVar2 = FUN_04d88d7c(*(undefined4 *)(lVar9 + 0x50));
  iVar3 = FUN_04d891a0(0x3c);
  iVar4 = FUN_04d88d78(*(undefined4 *)(lVar9 + 0x4c));
  iVar5 = FUN_04d891a0(0x23);
  Sexy::Insets::Insets(aIStack_28,(iVar1 + iVar2) - iVar3,iVar4 + iVar5,iVar3,iVar3);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x100,aIStack_28,uVar7,aIStack_18,5,1);
  lVar9 = *(long *)(this + 0x118);
  iVar1 = FUN_04d88d74(*(undefined4 *)(lVar9 + 0x48));
  iVar2 = FUN_04d88d78(*(undefined4 *)(lVar9 + 0x4c));
  iVar3 = FUN_04d88d7c(*(undefined4 *)(lVar9 + 0x50));
  iVar4 = FUN_04d88d80(*(undefined4 *)(lVar9 + 0x54));
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x150));
  WriteWordInRect(param_1,this + 0xe0,aIStack_28,uVar7,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

