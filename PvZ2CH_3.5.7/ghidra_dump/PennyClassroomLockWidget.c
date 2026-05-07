// Class: PennyClassroomLockWidget


/* PennyClassroomLockWidget::~PennyClassroomLockWidget() */

void __thiscall PennyClassroomLockWidget::~PennyClassroomLockWidget(PennyClassroomLockWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069ce210;
  FUN_05476c50(this + 0xe0);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PennyClassroomLockWidget::~PennyClassroomLockWidget() */

void __thiscall PennyClassroomLockWidget::~PennyClassroomLockWidget(PennyClassroomLockWidget *this)

{
  ~PennyClassroomLockWidget(this);
  AK::FreeHook(this);
  return;
}


/* PennyClassroomLockWidget::PennyClassroomLockWidget() */

void __thiscall PennyClassroomLockWidget::PennyClassroomLockWidget(PennyClassroomLockWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069ce210;
  FUN_05476574(this + 0xd8);
  FUN_05476574(this + 0xe0);
  FUN_054772c4(this + 0xd8,&DAT_056f11a8);
  FUN_054772c4(this + 0xe0,&DAT_056f11a8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomLockWidget::Draw(Sexy::Graphics*) */

void __thiscall PennyClassroomLockWidget::Draw(PennyClassroomLockWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  undefined8 uVar7;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c570);
  Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c6b8);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c6b8);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar2 = *(int *)(this + 0x50);
  iVar3 = *(int *)(this + 0x54);
  iVar1 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  iVar1 = iVar1 >> 2;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c6b8);
  Sexy::Graphics::DrawImage(param_1,pIVar6,(iVar2 - iVar4) / 2,iVar1,iVar4,iVar5);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50),iVar5);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color(aCStack_18,2);
  WriteWordInRect(param_1,this + 0xe0,aIStack_28,uVar7,aCStack_18,5,1);
  Sexy::Insets::Insets
            (aIStack_28,0,iVar5 + iVar1 * 2,*(int *)(this + 0x50),
             (*(int *)(this + 0x54) + iVar1 * -2) - iVar5);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar7,aCStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

