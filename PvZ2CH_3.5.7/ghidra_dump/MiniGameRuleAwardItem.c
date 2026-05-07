// Class: MiniGameRuleAwardItem


/* MiniGameRuleAwardItem::~MiniGameRuleAwardItem() */

void __thiscall MiniGameRuleAwardItem::~MiniGameRuleAwardItem(MiniGameRuleAwardItem *this)

{
  MiniGameRuleAwardItem *pMVar1;
  
  pMVar1 = this + 0xf8;
  *(undefined ***)this = &PTR_GetClass_0693f090;
  do {
    pMVar1 = pMVar1 + -8;
    FUN_05476c50(pMVar1);
  } while (this + 0xe0 != pMVar1);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* MiniGameRuleAwardItem::~MiniGameRuleAwardItem() */

void __thiscall MiniGameRuleAwardItem::~MiniGameRuleAwardItem(MiniGameRuleAwardItem *this)

{
  ~MiniGameRuleAwardItem(this);
  AK::FreeHook(this);
  return;
}


/* MiniGameRuleAwardItem::MiniGameRuleAwardItem() */

void __thiscall MiniGameRuleAwardItem::MiniGameRuleAwardItem(MiniGameRuleAwardItem *this)

{
  MiniGameRuleAwardItem *pMVar1;
  MiniGameRuleAwardItem *pMVar2;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0693f090;
  FUN_05476574(this + 0xd8);
  pMVar2 = this + 0xe0;
  do {
    pMVar1 = pMVar2 + 8;
    FUN_05476574(pMVar2);
    pMVar2 = pMVar1;
  } while (pMVar1 != this + 0xf8);
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameRuleAwardItem::Draw(Sexy::Graphics*) */

void __thiscall MiniGameRuleAwardItem::Draw(MiniGameRuleAwardItem *this,Graphics *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  Image *pIVar7;
  SalesProgressBar *pSVar8;
  uint uVar9;
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04a80f20(10);
  Sexy::Insets::Insets(aIStack_38,0x60,0x42,0x1e,0xff);
  iVar3 = FUN_04a80f20(0x96);
  Sexy::Insets::Insets(aIStack_28,iVar2,0,iVar3,*(int *)(this + 0x54));
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_20;
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar1,aIStack_18,3,1);
  iVar3 = FUN_04a80f20(0x78);
  iVar4 = FUN_04a80f20(0x3c);
  Sexy::Insets::Insets(aIStack_28,iVar2 + iVar3,0,iVar4,*(int *)(this + 0x54));
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_20;
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  WriteWordInRect(param_1,this + 0xe0,aIStack_28,uVar1,aIStack_18,4,1);
  iVar4 = FUN_04a80f20(0x3c);
  uVar9 = iVar2 + iVar3 + iVar4;
  if (*(long *)(this + 0xf8) != 0) {
    Sexy::OutputDebugStrF
              ((wchar_t *)"luaMiniGameUI:RefreshTabDesc, draw item award image 0, iX : %d",
               (ulong)uVar9);
    iVar2 = *(int *)(this + 0x54);
    pSVar8 = *(SalesProgressBar **)(this + 0xf8);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar8);
    Sexy::Graphics::DrawImage(param_1,(Image *)pSVar8,uVar9,(iVar2 - iVar3) / 2);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xf8));
    uVar9 = uVar9 + iVar2;
    uVar5 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xf8));
    uVar6 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xf8));
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "luaMiniGameUI:RefreshTabDesc, draw item award image 0, width : %d, height : %d",
               uVar5 & 0xffffffff,uVar6 & 0xffffffff);
    Sexy::OutputDebugStrF
              ((wchar_t *)"luaMiniGameUI:RefreshTabDesc, draw item award image 0, iX : %d\n",
               (ulong)uVar9);
    iVar4 = FUN_04a80f20(0x3c);
  }
  iVar2 = FUN_04a80f20(10);
  Sexy::Insets::Insets(aIStack_28,uVar9 + iVar2,0,iVar4,*(int *)(this + 0x54));
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_20;
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  WriteWordInRect(param_1,this + 0xe8,aIStack_28,uVar1,aIStack_18,4,1);
  iVar3 = FUN_04a80f20(0x3c);
  uVar9 = uVar9 + iVar2 + iVar3;
  if (*(long *)(this + 0x100) != 0) {
    Sexy::OutputDebugStrF
              ((wchar_t *)"luaMiniGameUI:RefreshTabDesc, draw item award image 0, iX : %d\n",
               (ulong)uVar9);
    iVar2 = *(int *)(this + 0x54);
    pSVar8 = *(SalesProgressBar **)(this + 0x100);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar8);
    Sexy::Graphics::DrawImage(param_1,(Image *)pSVar8,uVar9,(iVar2 - iVar3) / 2);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x100));
    uVar9 = uVar9 + iVar2;
    uVar5 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x100));
    uVar6 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x100));
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "luaMiniGameUI:RefreshTabDesc, draw item award image 1, width : %d, height : %d",
               uVar5 & 0xffffffff,uVar6 & 0xffffffff);
    Sexy::OutputDebugStrF
              ((wchar_t *)"luaMiniGameUI:RefreshTabDesc, draw item award image 1, iX : %d\n",
               (ulong)uVar9);
    iVar3 = FUN_04a80f20(0x3c);
  }
  iVar2 = FUN_04a80f20(10);
  Sexy::Insets::Insets(aIStack_28,uVar9 + iVar2,0,iVar3,*(int *)(this + 0x54));
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_20;
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  WriteWordInRect(param_1,this + 0xf0,aIStack_28,uVar1,aIStack_18,4,1);
  iVar3 = FUN_04a80f20(0x3c);
  uVar9 = uVar9 + iVar2 + iVar3;
  if (*(long *)(this + 0x108) != 0) {
    Sexy::OutputDebugStrF
              ((wchar_t *)"luaMiniGameUI:RefreshTabDesc, draw item award image 2, iX : %d\n",
               (ulong)uVar9);
    iVar2 = *(int *)(this + 0x54);
    pSVar8 = *(SalesProgressBar **)(this + 0x108);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar8);
    Sexy::Graphics::DrawImage(param_1,(Image *)pSVar8,uVar9,(iVar2 - iVar3) / 2);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x108));
    uVar5 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x108));
    uVar6 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x108));
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "luaMiniGameUI:RefreshTabDesc, draw item award image 2, width : %d, height : %d",
               uVar5 & 0xffffffff,uVar6 & 0xffffffff);
    Sexy::OutputDebugStrF
              ((wchar_t *)"luaMiniGameUI:RefreshTabDesc, draw item award image 2, iX : %d\n",
               (ulong)(uVar9 + iVar2));
  }
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e970);
  iVar2 = FUN_04a80f20(2);
  Sexy::Graphics::DrawImage
            (param_1,pIVar7,0,*(int *)(this + 0x54) - iVar2,*(int *)(this + 0x50),iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

