// Class: WishPanel


/* WishPanel::~WishPanel() */

void __thiscall WishPanel::~WishPanel(WishPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_06843300;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* WishPanel::~WishPanel() */

void __thiscall WishPanel::~WishPanel(WishPanel *this)

{
  ~WishPanel(this);
  AK::FreeHook(this);
  return;
}


/* WishPanel::WishPanel() */

void __thiscall WishPanel::WishPanel(WishPanel *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06843300;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishPanel::Draw(Sexy::Graphics*) */

void __thiscall WishPanel::Draw(WishPanel *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  LotteryResultProgressBar *pLVar7;
  long lVar8;
  undefined8 uVar9;
  SalesProgressBar *this_00;
  Image *local_38;
  int local_28 [4];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03bf8);
  iVar5 = *(int *)(this + 0x50);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03bf8);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar2 = FUN_043bb090(0);
  Sexy::Graphics::DrawImage(param_1,pIVar6,(iVar5 - iVar1) / 2,iVar2);
  iVar5 = *(int *)(this + 0xd4);
  iVar1 = *(int *)(this + 0x50);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03838);
  Sexy::Insets::Insets((Insets *)local_28,0,iVar5,iVar1,*(int *)(lVar8 + 0x3c));
  Sexy::Insets::Insets(aIStack_18,(Insets *)local_28);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03838);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03a28);
  iVar5 = *(int *)(this + 0x50);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03a28);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar1 = *(int *)(this + 0xd4);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03a28);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar4 = FUN_043bb090(6);
  Sexy::Graphics::DrawImage(param_1,pIVar6,(iVar5 - iVar2) / 2,(iVar1 - iVar3) + iVar4);
  lVar8 = Sexy::LazySingleton<FestivalManager>::GetInstance();
  iVar5 = FUN_043bae28(*(undefined4 *)(lVar8 + 8));
  if ((iVar5 == 3) || (iVar5 == 0)) {
    local_38 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b035c8);
    iVar5 = *(int *)(this + 0x50);
  }
  else {
    if (1 < iVar5 - 1U) goto LAB_043c0e04;
    local_38 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03578);
    iVar5 = *(int *)(this + 0x50);
  }
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b035c8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar1 = *(int *)(this + 0xd4);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b035c8);
  iVar2 = *(int *)(lVar8 + 0x3c);
  iVar4 = FUN_043bb090(0x1e);
  Sexy::Graphics::DrawImage(param_1,local_38,(iVar5 - iVar3) / 2,iVar1 + iVar2 * 4 + iVar4);
LAB_043c0e04:
  iVar5 = FUN_043bb090(0x14);
  local_28[0] = local_28[0] + iVar5;
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03838);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

