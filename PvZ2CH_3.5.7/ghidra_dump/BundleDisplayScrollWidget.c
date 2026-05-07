// Class: BundleDisplayScrollWidget


/* BundleDisplayScrollWidget::~BundleDisplayScrollWidget() */

void __thiscall
BundleDisplayScrollWidget::~BundleDisplayScrollWidget(BundleDisplayScrollWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0692b6c0;
  *(undefined **)(this + 0xd8) = &DAT_0692b9e8;
  PVZ2UIScrollingWidget::~PVZ2UIScrollingWidget((PVZ2UIScrollingWidget *)this);
  return;
}


/* BundleDisplayScrollWidget::~BundleDisplayScrollWidget() */

void __thiscall
BundleDisplayScrollWidget::~BundleDisplayScrollWidget(BundleDisplayScrollWidget *this)

{
  ~BundleDisplayScrollWidget(this);
  AK::FreeHook(this);
  return;
}


/* BundleDisplayScrollWidget::BundleDisplayScrollWidget(Sexy::ScrollWidgetListener*) */

void __thiscall
BundleDisplayScrollWidget::BundleDisplayScrollWidget
          (BundleDisplayScrollWidget *this,ScrollWidgetListener *param_1)

{
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget((PVZ2UIScrollingWidget *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_0692b6c0;
  *(undefined **)(this + 0xd8) = &DAT_0692b9e8;
  return;
}

