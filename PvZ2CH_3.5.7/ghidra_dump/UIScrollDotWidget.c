// Class: UIScrollDotWidget


/* UIScrollDotWidget::~UIScrollDotWidget() */

void __thiscall UIScrollDotWidget::~UIScrollDotWidget(UIScrollDotWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06990bf0;
  RechargeBundleDotWidget::~RechargeBundleDotWidget((RechargeBundleDotWidget *)this);
  return;
}


/* UIScrollDotWidget::~UIScrollDotWidget() */

void __thiscall UIScrollDotWidget::~UIScrollDotWidget(UIScrollDotWidget *this)

{
  ~UIScrollDotWidget(this);
  AK::FreeHook(this);
  return;
}


/* UIScrollDotWidget::UIScrollDotWidget(int) */

void __thiscall UIScrollDotWidget::UIScrollDotWidget(UIScrollDotWidget *this,int param_1)

{
  RechargeBundleDotWidget::RechargeBundleDotWidget((RechargeBundleDotWidget *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_06990bf0;
  return;
}


/* UIScrollDotWidget::Draw(Sexy::Graphics*) */

void __thiscall UIScrollDotWidget::Draw(UIScrollDotWidget *this,Graphics *param_1)

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
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93568);
      Sexy::Graphics::DrawImage(param_1,pIVar4,iVar3,0);
      pLVar5 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93568);
      iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
      iVar2 = FUN_04c61824(10);
      iVar3 = iVar3 + iVar1 + iVar2;
    } while (iVar6 < *(int *)(this + 0xd8));
  }
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93568);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  iVar1 = FUN_04c61824(10);
  iVar6 = *(int *)(this + 0xd4);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93a70);
  Sexy::Graphics::DrawImage(param_1,pIVar4,(iVar3 + iVar1) * iVar6,0);
  return;
}

