// Class: TouchWidget


/* TouchWidget::~TouchWidget() */

void __thiscall TouchWidget::~TouchWidget(TouchWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06a28810;
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TouchWidget::~TouchWidget() */

void __thiscall TouchWidget::~TouchWidget(TouchWidget *this)

{
  ~TouchWidget(this);
  AK::FreeHook(this);
  return;
}


/* TouchWidget::TouchWidget() */

void __thiscall TouchWidget::TouchWidget(TouchWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06a28810;
  FUN_05476574(this + 0xd8);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0x3f800000;
  *(undefined4 *)(this + 0xec) = 0x3f800000;
  return;
}


/* TouchWidget::SetDisplayScale(float, float) */

void __thiscall TouchWidget::SetDisplayScale(TouchWidget *this,float param_1,float param_2)

{
  *(float *)(this + 0xe8) = param_1;
  *(float *)(this + 0xec) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TouchWidget::TouchBegan(Sexy::Touch const&) */

void TouchWidget::TouchBegan(Touch *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  StoneLotteryItemTipUI *this_01;
  int iVar4;
  int iVar5;
  long lVar6;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x310))();
  (**(code **)(*(long *)param_1 + 0xd0))(&local_20,param_1);
  this = (LotteryResultProgressBar *)
         CachedUIResourcePtr<Sexy::Image>::operator->
                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7d68);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this);
  iVar5 = (int)((*(float *)(param_1 + 0xe8) + *(float *)(param_1 + 0xe8)) * (float)iVar2);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7d68);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar2 = *(int *)(param_1 + 0x50);
  iVar4 = (int)(*(float *)(param_1 + 0xec) * 0.5 * (float)iVar3);
  iVar3 = FUN_04fada68(5);
  Sexy::Insets::Insets
            (aIStack_18,local_20 + (iVar2 - iVar5) / 2,(local_1c - iVar4) + iVar3,iVar5,iVar4);
  lVar6 = *(long *)(param_1 + 0xe0);
  if (lVar6 == 0) {
    this_01 = ::operator_new(0xe8);
    memset(this_01,0,0xe8);
    StoneLotteryItemTipUI::StoneLotteryItemTipUI(this_01);
    uVar1 = *(uint *)(this_01 + 0x60);
    *(StoneLotteryItemTipUI **)(param_1 + 0xe0) = this_01;
    *(uint *)(this_01 + 0x60) = uVar1 | 0x10;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this_01);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(param_1 + 0xe0));
    lVar6 = *(long *)(param_1 + 0xe0);
  }
  PuzzleTip::SetTip(lVar6,param_1 + 0xd8);
  (**(code **)(**(long **)(param_1 + 0xe0) + 0x1a0))(*(long **)(param_1 + 0xe0),aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TouchWidget::SetTouchDescription(std::wstring const&) */

void TouchWidget::SetTouchDescription(wstring *param_1)

{
  bool bVar1;
  int iVar2;
  PrimeTypeface *this;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  float *pfVar3;
  float fVar4;
  undefined1 auStack_1c [4];
  int local_18;
  float local_14;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05477b9c(param_1 + 0xd8);
  this = (PrimeTypeface *)
         PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7d68);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  FUN_05477b24(local_10,param_1 + 0xd8);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)(int)((float)iVar2 + (float)iVar2),this,local_10,auStack_1c,&local_18);
  FUN_05476c50(local_10);
  fVar4 = (float)Sexy::PrimeTypeface::GetHeight(this);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7d68);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
  local_10[0] = 1.0;
  local_14 = ((float)local_18 + fVar4 * 4.0) / ((float)iVar2 * 0.5);
  pfVar3 = eastl::max_alt<float>(&local_14,local_10);
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(param_1 + 0xec) = *pfVar3;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TouchWidget::SetTouchDescription(std::string const&) */

void __thiscall TouchWidget::SetTouchDescription(TouchWidget *this,string *param_1)

{
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ToWString(param_1);
  TodStringTranslate(awStack_18);
  SetTouchDescription((wstring *)this);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

