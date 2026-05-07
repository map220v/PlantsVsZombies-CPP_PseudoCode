// Class: MapOverlayWidget


/* MapOverlayWidget::~MapOverlayWidget() */

void __thiscall MapOverlayWidget::~MapOverlayWidget(MapOverlayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06854b90;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* MapOverlayWidget::~MapOverlayWidget() */

void __thiscall MapOverlayWidget::~MapOverlayWidget(MapOverlayWidget *this)

{
  ~MapOverlayWidget(this);
  AK::FreeHook(this);
  return;
}


/* MapOverlayWidget::MapOverlayWidget(UniverseMap*) */

void __thiscall MapOverlayWidget::MapOverlayWidget(MapOverlayWidget *this,UniverseMap *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(UniverseMap **)(this + 0xd8) = param_1;
  *(undefined ***)this = &PTR_GetClass_06854b90;
  return;
}


/* MapOverlayWidget::DrawMapLines(Sexy::Graphics*) */

void __thiscall MapOverlayWidget::DrawMapLines(MapOverlayWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SalesProgressBar *this_00;
  Image *pIVar4;
  
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dbb0);
  iVar1 = SalesProgressBar::GetCurrentLevel(this_00);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dbb0);
  iVar2 = FUN_044d5aa0(200);
  iVar3 = FUN_044d5aa0(300);
  Sexy::Graphics::DrawImage(param_1,pIVar4,iVar2,iVar2,iVar3,iVar1);
  return;
}


/* MapOverlayWidget::Draw(Sexy::Graphics*) */

void __thiscall MapOverlayWidget::Draw(MapOverlayWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SalesProgressBar *this_00;
  Image *pIVar4;
  
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dbb0);
  iVar1 = SalesProgressBar::GetCurrentLevel(this_00);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dbb0);
  iVar2 = FUN_044d5aa0(200);
  iVar3 = FUN_044d5aa0(300);
  Sexy::Graphics::DrawImage(param_1,pIVar4,iVar2,iVar2,iVar3,iVar1);
  return;
}

