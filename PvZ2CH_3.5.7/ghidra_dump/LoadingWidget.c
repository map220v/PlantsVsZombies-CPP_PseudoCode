// Class: LoadingWidget


/* LoadingWidget::~LoadingWidget() */

void __thiscall LoadingWidget::~LoadingWidget(LoadingWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06974fd0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LoadingWidget::~LoadingWidget() */

void __thiscall LoadingWidget::~LoadingWidget(LoadingWidget *this)

{
  ~LoadingWidget(this);
  AK::FreeHook(this);
  return;
}


/* LoadingWidget::Draw(Sexy::Graphics*) */

void __thiscall LoadingWidget::Draw(LoadingWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *this_00;
  
  *(double *)(this + 0xd8) = *(double *)(this + 0xd8) - 0.1;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b892e0);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar2 = *(int *)(this + 0x54);
  iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
  Sexy::Graphics::DrawImageRotated
            (param_1,(Image *)this_00,(iVar1 - iVar3) / 2,(iVar2 - iVar4) / 2,
             *(double *)(this + 0xd8),(TRect *)0x0);
  return;
}


/* LoadingWidget::LoadingWidget() */

void __thiscall LoadingWidget::LoadingWidget(LoadingWidget *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SalesProgressBar *this_00;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06974fd0;
  *(undefined8 *)(this + 0xd8) = 0;
  iVar1 = FUN_04ba1e78(100);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b892e0);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar3 = FUN_04ba1e78(0x14);
  Sexy::Widget::Resize((Widget *)this,0,0,iVar1,iVar2 + iVar3);
  return;
}

