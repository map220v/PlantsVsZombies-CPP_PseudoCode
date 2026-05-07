// Class: RankTitleWidget


/* RankTitleWidget::~RankTitleWidget() */

void __thiscall RankTitleWidget::~RankTitleWidget(RankTitleWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0694d7d0;
  FUN_05476c50(this + 0xf8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RankTitleWidget::~RankTitleWidget() */

void __thiscall RankTitleWidget::~RankTitleWidget(RankTitleWidget *this)

{
  ~RankTitleWidget(this);
  AK::FreeHook(this);
  return;
}


/* RankTitleWidget::RankTitleWidget(PvpRankDlg*) */

void __thiscall RankTitleWidget::RankTitleWidget(RankTitleWidget *this,PvpRankDlg *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0694d7d0;
  FUN_05476574(this + 0xf8);
  *(undefined4 *)(this + 0x108) = 0;
  *(PvpRankDlg **)(this + 0xd8) = param_1;
  FUN_054772c4(this + 0xf8,&DAT_056f11a8);
  *(undefined8 *)(this + 0x100) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RankTitleWidget::SetLeagueInfo(S2C_PVP_LeagueInfo const&) */

void __thiscall RankTitleWidget::SetLeagueInfo(RankTitleWidget *this,S2C_PVP_LeagueInfo *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_10 [8];
  long local_8;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xe8) = uVar2;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0x10);
  getRankTile(*(int *)(this + 0x108),(S2C_PVP_LeagueInfo *)(this + 0xe0));
  FUN_054766c8(this + 0xf8,auStack_10);
  FUN_05476c50(auStack_10);
  iVar1 = FUN_04aeb77c(*(undefined4 *)(this + 0xe0));
  if (iVar1 == 1) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81a98);
    *(undefined8 *)(this + 0x100) = uVar2;
  }
  else if (iVar1 == 2) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81b38);
    *(undefined8 *)(this + 0x100) = uVar2;
  }
  else if (iVar1 == 3) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81b60);
    *(undefined8 *)(this + 0x100) = uVar2;
  }
  else if (iVar1 == 4) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81bc0);
    *(undefined8 *)(this + 0x100) = uVar2;
  }
  else if (iVar1 == 5) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81cf0);
    *(undefined8 *)(this + 0x100) = uVar2;
  }
  else if (iVar1 == 6) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81c68);
    *(undefined8 *)(this + 0x100) = uVar2;
  }
  else if (iVar1 == 7) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81cc8);
    *(undefined8 *)(this + 0x100) = uVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RankTitleWidget::Draw(Sexy::Graphics*) */

void __thiscall RankTitleWidget::Draw(RankTitleWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  Image *pIVar8;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  Sexy aSStack_38 [8];
  wstring awStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x108) == 1) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81d18;
  }
  else {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81d68;
  }
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  iVar1 = FUN_04aeba90(10);
  iVar2 = FUN_04aeba90(0x3c);
  iVar3 = FUN_04aeba90(0x14);
  iVar5 = *(int *)(this + 0x50);
  iVar4 = FUN_04aeba90(0x46);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar5 - iVar3,*(int *)(this + 0x54) - iVar4);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81b88);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  pIVar8 = *(Image **)(this + 0x100);
  if (pIVar8 != (Image *)0x0) {
    iVar5 = FUN_04aeba90(1);
    iVar1 = FUN_04aeba90(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar5,iVar5,iVar1,iVar1);
  }
  iVar5 = FUN_04aeba90(0x2d);
  iVar1 = FUN_04aeba90(3);
  iVar2 = FUN_04aeba90(0xaa);
  iVar3 = FUN_04aeba90(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar5,iVar1,iVar2,iVar3);
  uVar6 = PrimeText_Game::Typeface_FZCuYuan_20;
  Sexy::Insets::Insets(aIStack_18,0x11,0x1d,0,0xff);
  WriteWordInRect(param_1,this + 0xf8,aIStack_28,uVar6,aIStack_18,5,1);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81a48);
  iVar5 = FUN_04aeba90(0x2d);
  iVar1 = FUN_04aeba90(0x19);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar5,iVar1);
  Sexy::StrFormat("%d-%d",aSStack_38,(ulong)*(uint *)(this + 0xe4),(ulong)*(uint *)(this + 0xe8));
  Sexy::ToSexyString(aSStack_38,extraout_x1);
  iVar5 = FUN_04aeba90(0x5a);
  iVar1 = FUN_04aeba90(0x1e);
  iVar2 = FUN_04aeba90(100);
  iVar3 = FUN_04aeba90(0x19);
  Sexy::Insets::Insets(aIStack_28,iVar5,iVar1,iVar2,iVar3);
  uVar6 = PrimeText_Game::Typeface_FZCuYuan_20;
  Sexy::Insets::Insets(aIStack_18,0x11,0x1d,0,0xff);
  WriteWordInRect(param_1,awStack_30,aIStack_28,uVar6,aIStack_18,5,1);
  FUN_05476c50(awStack_30);
  std::string::~string((string *)aSStack_38);
  if (*(int *)(this + 0x108) == 1) {
    lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar5 = FUN_04aeb7d0(*(undefined4 *)(lVar7 + 0x18));
    if (0 < iVar5) {
      TodStringTranslate(L"[PVP_RANK_WIN_CUR_DES]");
      lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar5 = FUN_04aeb7d4(*(undefined4 *)(lVar7 + 0x24c));
      TodReplaceNumberString(awStack_30,L"{NUMBER1}",iVar5);
      FUN_054766c8(awStack_30,aIStack_18);
      FUN_05476c50(aIStack_18);
      lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar5 = FUN_04aeb7d8(*(undefined4 *)(lVar7 + 0x250));
      TodReplaceNumberString(awStack_30,L"{NUMBER2}",iVar5);
      FUN_054766c8(awStack_30,aIStack_18);
      FUN_05476c50(aIStack_18);
      iVar1 = FUN_04aeba90(10);
      iVar2 = FUN_04aeba90(0x46);
      iVar3 = FUN_04aeba90(0x14);
      iVar5 = *(int *)(this + 0x50);
      iVar4 = FUN_04aeba90(0x19);
      Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar5 - iVar3,iVar4);
      uVar6 = PrimeText_Game::Typeface_FZCuYuan_32_HardShadow;
      Sexy::Insets::Insets(aIStack_18,0x11,0x1d,0,0xff);
      WriteWordInRect(param_1,awStack_30,aIStack_28,uVar6,aIStack_18,5,1);
      FUN_05476c50(awStack_30);
      goto LAB_04aee044;
    }
  }
  TodStringTranslate(L"[PVP_RANK_WIN_DES]");
  iVar1 = FUN_04aeba90(10);
  iVar2 = FUN_04aeba90(0x46);
  iVar3 = FUN_04aeba90(0x14);
  iVar5 = *(int *)(this + 0x50);
  iVar4 = FUN_04aeba90(0x19);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar5 - iVar3,iVar4);
  uVar6 = PrimeText_Game::Typeface_FZCuYuan_32_HardShadow;
  Sexy::Insets::Insets(aIStack_18,0x11,0x1d,0,0xff);
  WriteWordInRect(param_1,awStack_30,aIStack_28,uVar6,aIStack_18,5,1);
  FUN_05476c50(awStack_30);
LAB_04aee044:
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81b10);
  iVar5 = FUN_04aeba90(0x14);
  iVar1 = FUN_04aeba90(100);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar5,iVar1);
  Sexy::StrFormat("%d",aSStack_38,(ulong)*(uint *)(this + 0xec));
  Sexy::ToSexyString(aSStack_38,extraout_x1_00);
  iVar5 = FUN_04aeba90(0x32);
  iVar1 = FUN_04aeba90(0x6e);
  iVar2 = FUN_04aeba90(0x3c);
  iVar3 = FUN_04aeba90(0x19);
  Sexy::Insets::Insets(aIStack_28,iVar5,iVar1,iVar2,iVar3);
  uVar6 = PrimeText_Game::Typeface_FZCuYuan_32_HardShadow;
  Sexy::Insets::Insets(aIStack_18,0x11,0x1d,0,0xff);
  WriteWordInRect(param_1,awStack_30,aIStack_28,uVar6,aIStack_18,5,1);
  FUN_05476c50(awStack_30);
  std::string::~string((string *)aSStack_38);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81c40);
  iVar5 = FUN_04aeba90(0x6e);
  iVar1 = FUN_04aeba90(100);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar5,iVar1);
  Sexy::StrFormat("%d",aSStack_38,(ulong)*(uint *)(this + 0xf0));
  Sexy::ToSexyString(aSStack_38,extraout_x1_01);
  iVar5 = FUN_04aeba90(0x8c);
  iVar1 = FUN_04aeba90(0x6e);
  iVar2 = FUN_04aeba90(0x3c);
  iVar3 = FUN_04aeba90(0x19);
  Sexy::Insets::Insets(aIStack_28,iVar5,iVar1,iVar2,iVar3);
  uVar6 = PrimeText_Game::Typeface_FZCuYuan_32_HardShadow;
  Sexy::Insets::Insets(aIStack_18,0x11,0x1d,0,0xff);
  WriteWordInRect(param_1,awStack_30,aIStack_28,uVar6,aIStack_18,5,1);
  FUN_05476c50(awStack_30);
  std::string::~string((string *)aSStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

