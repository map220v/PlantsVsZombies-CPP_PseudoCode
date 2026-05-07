// Class: RechargeBundleDotWidget


/* RechargeBundleDotWidget::~RechargeBundleDotWidget() */

void __thiscall RechargeBundleDotWidget::~RechargeBundleDotWidget(RechargeBundleDotWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0692c7a0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RechargeBundleDotWidget::~RechargeBundleDotWidget() */

void __thiscall RechargeBundleDotWidget::~RechargeBundleDotWidget(RechargeBundleDotWidget *this)

{
  ~RechargeBundleDotWidget(this);
  AK::FreeHook(this);
  return;
}


/* RechargeBundleDotWidget::RechargeBundleDotWidget(int) */

void __thiscall
RechargeBundleDotWidget::RechargeBundleDotWidget(RechargeBundleDotWidget *this,int param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(int *)(this + 0xd8) = param_1;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined ***)this = &PTR_GetClass_0692c7a0;
  return;
}


/* RechargeBundleDotWidget::Draw(Sexy::Graphics*) */

void __thiscall RechargeBundleDotWidget::Draw(RechargeBundleDotWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  LotteryResultProgressBar *pLVar5;
  int iVar6;
  
  nop();
  if (0 < *(int *)(this + 0xd8)) {
    iVar6 = 0;
    iVar3 = 0;
    do {
      iVar6 = iVar6 + 1;
      pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77878);
      Sexy::Graphics::DrawImage(param_1,pIVar4,iVar3,0);
      pLVar5 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77878);
      iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
      iVar2 = FUN_049ec7f8(10);
      iVar3 = iVar3 + iVar1 + iVar2;
    } while (iVar6 < *(int *)(this + 0xd8));
  }
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77878);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  iVar1 = FUN_049ec7f8(10);
  iVar6 = *(int *)(this + 0xd4);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77c70);
  Sexy::Graphics::DrawImage(param_1,pIVar4,(iVar3 + iVar1) * iVar6,0);
  return;
}

