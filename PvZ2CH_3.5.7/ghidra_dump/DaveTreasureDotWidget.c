// Class: DaveTreasureDotWidget


/* DaveTreasureDotWidget::~DaveTreasureDotWidget() */

void __thiscall DaveTreasureDotWidget::~DaveTreasureDotWidget(DaveTreasureDotWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066f7c90;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DaveTreasureDotWidget::~DaveTreasureDotWidget() */

void __thiscall DaveTreasureDotWidget::~DaveTreasureDotWidget(DaveTreasureDotWidget *this)

{
  ~DaveTreasureDotWidget(this);
  AK::FreeHook(this);
  return;
}


/* DaveTreasureDotWidget::DaveTreasureDotWidget(int) */

void __thiscall
DaveTreasureDotWidget::DaveTreasureDotWidget(DaveTreasureDotWidget *this,int param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd4) = 0;
  *(int *)(this + 0xd8) = param_1;
  *(undefined ***)this = &PTR_GetClass_066f7c90;
  return;
}


/* DaveTreasureDotWidget::Draw(Sexy::Graphics*) */

void __thiscall DaveTreasureDotWidget::Draw(DaveTreasureDotWidget *this,Graphics *param_1)

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
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2080);
      Sexy::Graphics::DrawImage(param_1,pIVar4,iVar3,0);
      pLVar5 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2080);
      iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
      iVar2 = FUN_039f135c(10);
      iVar3 = iVar3 + iVar1 + iVar2;
    } while (iVar6 < *(int *)(this + 0xd8));
  }
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2080);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  iVar1 = FUN_039f135c(10);
  iVar6 = *(int *)(this + 0xd4);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2500);
  Sexy::Graphics::DrawImage(param_1,pIVar4,(iVar3 + iVar1) * iVar6,0);
  return;
}

