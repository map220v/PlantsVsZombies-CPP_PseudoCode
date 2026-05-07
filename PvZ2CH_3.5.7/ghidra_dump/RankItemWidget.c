// Class: RankItemWidget


/* RankItemWidget::TouchBegan(Sexy::Touch const&) */

void __thiscall RankItemWidget::TouchBegan(RankItemWidget *this,Touch *param_1)

{
  if (this[0xe0] == (RankItemWidget)0x0) {
    *(int *)(this + 0xf8) = (int)*(undefined8 *)param_1;
  }
  return;
}


/* RankItemWidget::~RankItemWidget() */

void __thiscall RankItemWidget::~RankItemWidget(RankItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0694daf0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0694de18;
  std::pair<int_const,std::wstring>::~pair((pair<int_const,std::wstring> *)(this + 0x118));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RankItemWidget::~RankItemWidget() */

void __thiscall RankItemWidget::~RankItemWidget(RankItemWidget *this)

{
  ~RankItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RankItemWidget::RankItemWidget(int, int, PvpRankDlg*) */

void __thiscall
RankItemWidget::RankItemWidget(RankItemWidget *this,int param_1,int param_2,PvpRankDlg *param_3)

{
  ButtonListener *this_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  PVZ2UIButton *pPVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ButtonListener *)(this + 0xd8);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_00);
  this[0xe0] = (RankItemWidget)0x0;
  this[0xe1] = (RankItemWidget)0x0;
  *(undefined ***)this = &PTR_GetClass_0694daf0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0694de18;
  this[0xf4] = (RankItemWidget)0x0;
  *(undefined4 *)(this + 0xf8) = 0;
  S2C_PVP_PreGardenRankInfo::S2C_PVP_PreGardenRankInfo((S2C_PVP_PreGardenRankInfo *)(this + 0x118));
  *(int *)(this + 0xf0) = param_1;
  *(PvpRankDlg **)(this + 0xe8) = param_3;
  *(int *)(this + 0x110) = param_2;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0,this_00,awStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar7;
  FUN_05476c50(awStack_78);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b81c18,5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b81be8,5);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  iVar1 = FUN_04aeba90(0xa0);
  uVar2 = FUN_04aeba90(0x32);
  plVar9 = *(long **)(this + 0x100);
  uVar3 = FUN_04aeba90(0x82);
  iVar4 = FUN_04aeba90(0x46);
  iVar5 = FUN_04aeba90(10);
  (**(code **)(*plVar9 + 0x198))(plVar9,uVar3,iVar4 + iVar5,iVar1,uVar2);
  lVar8 = *(long *)(this + 0x100);
  std::string::string(asStack_40,"[PVP_RANK_SEEOTHERPARK]");
  StringHelper::ToStringValue(asStack_40);
  FUN_054766c8(lVar8 + 0xd8,awStack_78);
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_40);
  nop();
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x100));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,1,this_00,awStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0x108) = pPVar7;
  FUN_05476c50(awStack_78);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0x108);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b81c18,5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b81be8,5);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  plVar9 = *(long **)(this + 0x108);
  iVar4 = FUN_04aeba90(0xb4);
  iVar5 = FUN_04aeba90(0x46);
  iVar6 = FUN_04aeba90(10);
  (**(code **)(*plVar9 + 0x198))(plVar9,iVar4 + iVar1,iVar5 + iVar6,iVar1,uVar2);
  lVar8 = *(long *)(this + 0x108);
  std::string::string(asStack_40,"[PVP_RANK_SEEOTHERARMY]");
  StringHelper::ToStringValue(asStack_40);
  FUN_054766c8(lVar8 + 0xd8,awStack_78);
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_40);
  nop();
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x108));
  (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),0);
  (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RankItemWidget::RankItemWidget(PvpRankDlg*) */

void __thiscall RankItemWidget::RankItemWidget(RankItemWidget *this,PvpRankDlg *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  this[0xe0] = (RankItemWidget)0x1;
  this[0xe1] = (RankItemWidget)0x0;
  this[0xf4] = (RankItemWidget)0x0;
  *(undefined ***)this = &PTR_GetClass_0694daf0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0694de18;
  *(undefined4 *)(this + 0xf8) = 0;
  S2C_PVP_PreGardenRankInfo::S2C_PVP_PreGardenRankInfo((S2C_PVP_PreGardenRankInfo *)(this + 0x118));
  *(undefined8 *)(this + 0x100) = 0;
  *(PvpRankDlg **)(this + 0xe8) = param_1;
  *(undefined8 *)(this + 0x108) = 0;
  return;
}


/* RankItemWidget::onSelected(bool) */

void __thiscall RankItemWidget::onSelected(RankItemWidget *this,bool param_1)

{
  long *plVar1;
  
  if (this[0xe0] == (RankItemWidget)0x0) {
    this[0xf4] = (RankItemWidget)param_1;
    plVar1 = *(long **)(this + 0x100);
    if (param_1) {
      (**(code **)(*plVar1 + 0x158))(plVar1,1);
      (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),1);
      return;
    }
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
    (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
  }
  return;
}


/* RankItemWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall RankItemWidget::TouchEnded(RankItemWidget *this,Touch *param_1)

{
  if ((this[0xe0] == (RankItemWidget)0x0) && (*(int *)(this + 0xf8) == (int)*(undefined8 *)param_1))
  {
    PvpRankDlg::onRowSelected
              (*(PvpRankDlg **)(this + 0xe8),*(int *)(this + 0xf0),*(int *)(this + 0x110));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RankItemWidget::ButtonDepress(int) */

void __thiscall RankItemWidget::ButtonDepress(RankItemWidget *this,int param_1)

{
  PVPManager *this_00;
  long lVar1;
  undefined8 uVar2;
  PvpRankDlg *pPVar3;
  S2C_PVP_RankInfo aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    uVar2 = *(undefined8 *)(this + 0x118);
    this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    PVPManager::RequestGetEditPlant(this_00,(int)uVar2,0,1);
    lVar1 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    FUN_04aeb8f4(lVar1 + 0x221);
  }
  else if ((param_1 == 1) && (pPVar3 = *(PvpRankDlg **)(this + 0xe8), pPVar3 != (PvpRankDlg *)0x0))
  {
    S2C_PVP_RankInfo::S2C_PVP_RankInfo(aSStack_28,(S2C_PVP_RankInfo *)(this + 0x118));
    PvpRankDlg::ViewUserArmy(pPVar3,aSStack_28);
    std::pair<int_const,std::wstring>::~pair((pair<int_const,std::wstring> *)aSStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to RankItemWidget::ButtonDepress(int) */

void __thiscall RankItemWidget::ButtonDepress(RankItemWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RankItemWidget::Draw(Sexy::Graphics*) */

void __thiscall RankItemWidget::Draw(RankItemWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  LotteryResultProgressBar *this_01;
  Image *pIVar7;
  long lVar8;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  if (this[0xe0] == (RankItemWidget)0x0) {
    if (this[0xf4] != (RankItemWidget)0x0) {
      iVar1 = FUN_04aeba90(0x28);
      iVar2 = FUN_04aeba90(0x46);
      iVar3 = FUN_04aeba90(0x50);
      Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(this + 0x50) - iVar3,iVar2);
      uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81ca0);
      Draw9SliceImage(param_1,aIStack_18,uVar6);
    }
    iVar1 = FUN_04aeba90(0x46);
    iVar2 = FUN_04aeba90(10);
    lVar8 = *(long *)(this + 0x118);
    Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar3 = PVPManager::GetPVPProfileId();
    if (lVar8 == iVar3) {
      iVar3 = FUN_04aeba90(5);
      Sexy::Insets::Insets(aIStack_18,0,-iVar2 / 2,*(int *)(this + 0x50) - iVar3,iVar2 + iVar1);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81d40;
    }
    else {
      iVar3 = FUN_04aeba90(5);
      Sexy::Insets::Insets(aIStack_18,0,-iVar2 / 2,*(int *)(this + 0x50) - iVar3,iVar2 + iVar1);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81ac0;
    }
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    Draw9SliceImage(param_1,aIStack_18,uVar6);
    Set8BytesTo0();
    iVar2 = FUN_04aeba90(0xf);
    if (*(uint *)(this + 0x128) < 3) {
      Sexy::StrFormat("IMAGE_UI_DIALOG_ASSET_RANK%d",aIStack_18);
      FUN_05474278(asStack_38,aIStack_18);
      std::string::~string((string *)aIStack_18);
      this_01 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_38,false);
      iVar3 = FUN_04aeba90(0x28);
      if (this_01 != (LotteryResultProgressBar *)0x0) {
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_01);
        iVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_01);
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)this_01,iVar2 + (iVar3 - iVar4) / 2,iVar2 + (iVar3 - iVar5) / 2)
        ;
      }
    }
    else {
      Sexy::StrFormat(L"%d",auStack_30,(ulong)(*(uint *)(this + 0x128) + 1));
      iVar3 = FUN_04aeba90(10);
      iVar4 = FUN_04aeba90(0x28);
      iVar5 = FUN_04aeba90(0x14);
      Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar4,iVar1 - iVar5);
      uVar6 = PrimeText_Game::Typeface_FZCuYuan_32_HardShadow;
      Sexy::Color::Color((Color *)aIStack_18,1);
      WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aIStack_18,5,1);
      FUN_05476c50(auStack_30);
    }
    iVar4 = FUN_04aeba90(0x2d);
    Sexy::ToSexyString((wstring *)(this + 0x120));
    iVar3 = FUN_04aeba90(200);
    Sexy::Insets::Insets(aIStack_28,iVar2 + iVar4,0,iVar3,iVar1);
    uVar6 = PrimeText_Game::Typeface_FZCuYuan_24;
    Sexy::Insets::Insets(aIStack_18,0x4a,0x3c,0,0xff);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aIStack_18,3,1);
    FUN_05476c50(auStack_30);
    iVar3 = FUN_04aeba90(200);
    iVar3 = iVar2 + iVar4 + iVar3;
    TodStringTranslate(L"[PVP_RANK_ATTACK_WINTIMES]");
    iVar2 = FUN_04aeba90(0x5a);
    Sexy::Insets::Insets(aIStack_28,iVar3,0,iVar2,iVar1);
    uVar6 = PrimeText_Game::Typeface_FZCuYuan_20;
    Sexy::Insets::Insets(aIStack_18,0x4a,0x3c,0,0xff);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aIStack_18,3,1);
    FUN_05476c50(auStack_30);
    iVar2 = FUN_04aeba90(0x5a);
    iVar3 = iVar3 + iVar2;
    Sexy::StrFormat(L"%d",auStack_30,(ulong)*(uint *)(this + 300));
    iVar2 = FUN_04aeba90(0x3c);
    Sexy::Insets::Insets(aIStack_28,iVar3,0,iVar2,iVar1);
    uVar6 = PrimeText_Game::Typeface_FZCuYuan_20;
    Sexy::Color::Color((Color *)aIStack_18,3);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aIStack_18,3,1);
    FUN_05476c50(auStack_30);
    iVar2 = FUN_04aeba90(0x3c);
    iVar3 = iVar3 + iVar2;
    TodStringTranslate(L"[PVP_RANK_DEFEND_WINTIMES]");
    iVar2 = FUN_04aeba90(0x5a);
    Sexy::Insets::Insets(aIStack_28,iVar3,0,iVar2,iVar1);
    uVar6 = PrimeText_Game::Typeface_FZCuYuan_20;
    Sexy::Insets::Insets(aIStack_18,0x4a,0x3c,0,0xff);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aIStack_18,3,1);
    FUN_05476c50(auStack_30);
    iVar2 = FUN_04aeba90(0x5a);
    iVar3 = iVar3 + iVar2;
    Sexy::StrFormat(L"%d",auStack_30,(ulong)*(uint *)(this + 0x130));
    iVar2 = FUN_04aeba90(0x3c);
    Sexy::Insets::Insets(aIStack_28,iVar3,0,iVar2,iVar1);
    uVar6 = PrimeText_Game::Typeface_FZCuYuan_20;
    Sexy::Color::Color((Color *)aIStack_18,5);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aIStack_18,3,1);
    FUN_05476c50(auStack_30);
    iVar2 = FUN_04aeba90(0x46);
    iVar3 = iVar3 + iVar2;
    Sexy::StrFormat(L"%d",auStack_30,(ulong)*(uint *)(this + 0x134));
    iVar2 = FUN_04aeba90(0x3c);
    Sexy::Insets::Insets(aIStack_28,iVar3,0,iVar2,iVar1);
    uVar6 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aIStack_18,4,1);
    FUN_05476c50(auStack_30);
    iVar1 = FUN_04aeba90(0x3c);
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81a48);
    iVar2 = FUN_04aeba90(0xf);
    iVar4 = FUN_04aeba90(0x28);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar3 + iVar1,iVar2,iVar4,iVar4);
    std::string::~string(asStack_38);
  }
  else {
    if (this[0xe1] == (RankItemWidget)0x0) {
      TodStringTranslate(L"[PVP_RANK_SHOWMORE]");
    }
    else {
      TodStringTranslate(L"[PVP_RANK_SHOWMOREFINISH]");
    }
    iVar1 = FUN_04aeba90(0);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar6 = PrimeText_Game::Typeface_FZCuYuan_32_HardShadow;
    Sexy::Insets::Insets(aIStack_18,0x4a,0x3c,0,0xff);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aIStack_18,5,1);
    FUN_05476c50(auStack_30);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

