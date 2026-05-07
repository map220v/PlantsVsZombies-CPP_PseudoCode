// Class: GameFestivalPanel


/* GameFestivalPanel::~GameFestivalPanel() */

void __thiscall GameFestivalPanel::~GameFestivalPanel(GameFestivalPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_06842fe0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* GameFestivalPanel::~GameFestivalPanel() */

void __thiscall GameFestivalPanel::~GameFestivalPanel(GameFestivalPanel *this)

{
  ~GameFestivalPanel(this);
  AK::FreeHook(this);
  return;
}


/* GameFestivalPanel::GameFestivalPanel() */

void __thiscall GameFestivalPanel::GameFestivalPanel(GameFestivalPanel *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06842fe0;
  return;
}


/* GameFestivalPanel::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
GameFestivalPanel::DrawAll(GameFestivalPanel *this,ModalFlags *param_1,Graphics *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *pPVar4;
  long lVar5;
  Image *pIVar6;
  
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  lVar5 = Sexy::LazySingleton<FestivalManager>::GetInstance();
  iVar2 = FUN_043bae28(*(undefined4 *)(lVar5 + 8));
  if (iVar2 == 0) {
    cVar1 = PlayerInfo::GameFeatureIsUnlocked(pPVar4,0x29);
  }
  else if (iVar2 == 1) {
    cVar1 = PlayerInfo::GameFeatureIsUnlocked(pPVar4,0x2a);
  }
  else if (iVar2 == 2) {
    cVar1 = PlayerInfo::GameFeatureIsUnlocked(pPVar4,0x2b);
  }
  else {
    if (iVar2 != 3) {
      return;
    }
    cVar1 = PlayerInfo::GameFeatureIsUnlocked(pPVar4,0x34);
  }
  if (cVar1 != '\0') {
    return;
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03860);
  iVar2 = FUN_043bb090(0x20c);
  iVar3 = FUN_043bb090(0x11d);
  Sexy::Graphics::DrawImage(param_2,pIVar6,iVar2,iVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameFestivalPanel::Draw(Sexy::Graphics*) */

void __thiscall GameFestivalPanel::Draw(GameFestivalPanel *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  Image *pIVar12;
  LotteryResultProgressBar *pLVar13;
  SalesProgressBar *this_00;
  ProfileMgr *this_01;
  PlayerInfo *pPVar14;
  ulong uVar15;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  iVar1 = *(int *)(this + 0xd4);
  iVar2 = *(int *)(this + 0x50);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03838);
  Sexy::Insets::Insets(aIStack_18,0,iVar1,iVar2,*(int *)(lVar10 + 0x3c));
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03838);
  Draw9SliceImage(param_1,aIStack_18,uVar11);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03a28);
  iVar1 = *(int *)(this + 0x50);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03a28);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar2 = *(int *)(this + 0xd4);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03a28);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar5 = FUN_043bb090(6);
  Sexy::Graphics::DrawImage(param_1,pIVar12,(iVar1 - iVar3) / 2,(iVar2 - iVar4) + iVar5);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b038d8);
  iVar1 = *(int *)(this + 0x50);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b038d8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar2 = *(int *)(this + 0xd4);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03838);
  Sexy::Graphics::DrawImage(param_1,pIVar12,(iVar1 - iVar3) / 2,iVar2 + *(int *)(lVar10 + 0x3c));
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar14 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  FUN_05476574(auStack_30);
  if (pPVar14 != (PlayerInfo *)0x0) {
    lVar10 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    uVar6 = FUN_043bae28(*(undefined4 *)(lVar10 + 8));
    uVar15 = PlayerInfo::GetFestivalGameLeftCount(pPVar14,uVar6);
    Sexy::StrFormat(L"%d",aIStack_18,uVar15 & 0xffffffff);
    FUN_054766c8(auStack_30,aIStack_18);
    FUN_05476c50(aIStack_18);
  }
  iVar1 = *(int *)(this + 0x50);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b038d8);
  iVar2 = *(int *)(lVar10 + 0x38);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b038d8);
  iVar3 = *(int *)(lVar10 + 0x38);
  iVar7 = FUN_043bb090(0x2e);
  iVar4 = *(int *)(this + 0xd4);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03838);
  iVar5 = *(int *)(lVar10 + 0x3c);
  iVar8 = FUN_043bb090(6);
  iVar9 = FUN_043bb090(0x28);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b038d8);
  Sexy::Insets::Insets
            (aIStack_28,(iVar1 - iVar2) / 2 + iVar3 / 2 + iVar7,iVar4 + iVar5 + iVar8,iVar9,
             *(int *)(lVar10 + 0x3c));
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  Sexy::Color::Color((Color *)aIStack_18,4);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar11,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

