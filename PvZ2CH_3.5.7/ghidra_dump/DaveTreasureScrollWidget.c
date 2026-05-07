// Class: DaveTreasureScrollWidget


/* DaveTreasureScrollWidget::~DaveTreasureScrollWidget() */

void __thiscall DaveTreasureScrollWidget::~DaveTreasureScrollWidget(DaveTreasureScrollWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066f64b0;
  *(undefined **)(this + 0xd8) = &DAT_066f67d8;
  PVZ2UIScrollingWidget::~PVZ2UIScrollingWidget((PVZ2UIScrollingWidget *)this);
  return;
}


/* DaveTreasureScrollWidget::~DaveTreasureScrollWidget() */

void __thiscall DaveTreasureScrollWidget::~DaveTreasureScrollWidget(DaveTreasureScrollWidget *this)

{
  ~DaveTreasureScrollWidget(this);
  AK::FreeHook(this);
  return;
}


/* DaveTreasureScrollWidget::DaveTreasureScrollWidget(Sexy::ScrollWidgetListener*) */

void __thiscall
DaveTreasureScrollWidget::DaveTreasureScrollWidget
          (DaveTreasureScrollWidget *this,ScrollWidgetListener *param_1)

{
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget((PVZ2UIScrollingWidget *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_066f64b0;
  *(undefined **)(this + 0xd8) = &DAT_066f67d8;
  return;
}

