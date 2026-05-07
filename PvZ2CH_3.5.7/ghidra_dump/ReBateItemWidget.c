// Class: ReBateItemWidget


/* ReBateItemWidget::~ReBateItemWidget() */

void __thiscall ReBateItemWidget::~ReBateItemWidget(ReBateItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06924960;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::string::~string((string *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ReBateItemWidget::~ReBateItemWidget() */

void __thiscall ReBateItemWidget::~ReBateItemWidget(ReBateItemWidget *this)

{
  ~ReBateItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* ReBateItemWidget::GetPlantPieceImage() */

void __thiscall ReBateItemWidget::GetPlantPieceImage(ReBateItemWidget *this)

{
  RebateDateMgr *this_00;
  
  this_00 = (RebateDateMgr *)RebateDateMgr::GetInstance();
  RebateDateMgr::GetPlantPieceImage(this_00,(string *)(this + 0xd8));
  return;
}


/* ReBateItemWidget::ReBateItemWidget(std::string, int, int, bool) */

void __thiscall
ReBateItemWidget::ReBateItemWidget
          (ReBateItemWidget *this,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          ReBateItemWidget param_5)

{
  int iVar1;
  int iVar2;
  LotteryResultProgressBar *pLVar3;
  SalesProgressBar *pSVar4;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06924960;
  FUN_05475d88(this + 0xd8,param_2);
  this[0xe4] = param_5;
  *(undefined4 *)(this + 0xe0) = param_3;
  *(undefined4 *)(this + 0xe8) = param_4;
  if (param_5 == (ReBateItemWidget)0x0) {
    pLVar3 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b741c0);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar3);
    pSVar4 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b741c0);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar4);
    Sexy::Widget::Resize((Widget *)this,0,0,iVar1,iVar2);
    return;
  }
  pLVar3 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b74108);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar3);
  pSVar4 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b74108);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar4);
  Sexy::Widget::Resize((Widget *)this,0,0,iVar1,iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ReBateItemWidget::DrawNormalContent(Sexy::Graphics*) */

void __thiscall ReBateItemWidget::DrawNormalContent(ReBateItemWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  LotteryResultProgressBar *this_00;
  undefined8 uVar6;
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b74108);
  Sexy::Graphics::DrawImage(param_1,pIVar5,0,0);
  this_00 = (LotteryResultProgressBar *)GetPlantPieceImage(this);
  if (this_00 != (LotteryResultProgressBar *)0x0) {
    iVar1 = *(int *)(this + 0x50);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar2 = *(int *)(this + 0x54);
    iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    Sexy::Graphics::DrawImage(param_1,(Image *)this_00,(iVar1 - iVar3) / 2,(iVar2 - iVar4) / 2);
  }
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
  iVar3 = FUN_049ab108(0x12);
  iVar4 = FUN_049ab108(0x1e);
  iVar1 = *(int *)(this + 0x54);
  iVar2 = *(int *)(this + 0x50);
  Sexy::StrFormat(L"%d",auStack_20,(ulong)*(uint *)(this + 0xe0));
  Sexy::Color::Color(aCStack_18,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)iVar3,(float)(iVar1 - iVar4),(float)iVar2,uVar6,param_1,
             auStack_20,1,aCStack_18,0);
  FUN_05476c50(auStack_20);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  iVar3 = FUN_049ab108(0x19);
  iVar4 = FUN_049ab108(0x3c);
  iVar1 = *(int *)(this + 0x54);
  iVar2 = *(int *)(this + 0x50);
  Sexy::StrFormat(L"X%d",auStack_20,(ulong)*(uint *)(this + 0xe8));
  Sexy::Color::Color(aCStack_18,3);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)iVar3,(float)(iVar1 - iVar4),(float)iVar2,uVar6,param_1,
             auStack_20,1,aCStack_18,0);
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ReBateItemWidget::DrawSpecialContent(Sexy::Graphics*) */

void __thiscall ReBateItemWidget::DrawSpecialContent(ReBateItemWidget *this,Graphics *param_1)

{
  Image *pIVar1;
  
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b741c0);
  Sexy::Graphics::DrawImage(param_1,pIVar1,0,0);
  return;
}


/* ReBateItemWidget::Draw(Sexy::Graphics*) */

void __thiscall ReBateItemWidget::Draw(ReBateItemWidget *this,Graphics *param_1)

{
  nop();
  if (this[0xe4] != (ReBateItemWidget)0x0) {
    DrawSpecialContent(this,param_1);
    return;
  }
  DrawNormalContent(this,param_1);
  return;
}

