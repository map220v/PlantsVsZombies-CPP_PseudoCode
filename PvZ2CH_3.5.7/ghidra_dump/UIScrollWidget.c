// Class: UIScrollWidget


/* UIScrollWidget::~UIScrollWidget() */

void __thiscall UIScrollWidget::~UIScrollWidget(UIScrollWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069908b0;
  *(undefined **)(this + 0xd8) = &DAT_06990bd8;
  PVZ2UIScrollingWidget::~PVZ2UIScrollingWidget((PVZ2UIScrollingWidget *)this);
  return;
}


/* UIScrollWidget::~UIScrollWidget() */

void __thiscall UIScrollWidget::~UIScrollWidget(UIScrollWidget *this)

{
  ~UIScrollWidget(this);
  AK::FreeHook(this);
  return;
}


/* UIScrollWidget::UIScrollWidget(Sexy::ScrollWidgetListener*) */

void __thiscall UIScrollWidget::UIScrollWidget(UIScrollWidget *this,ScrollWidgetListener *param_1)

{
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget((PVZ2UIScrollingWidget *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_069908b0;
  *(undefined **)(this + 0xd8) = &DAT_06990bd8;
  return;
}


/* UIScrollWidget::GetScrollVelocity() */

FPoint * UIScrollWidget::GetScrollVelocity(void)

{
  long in_x0;
  FPoint *in_x8;
  
  Sexy::FPoint::FPoint(in_x8,(TPoint *)(in_x0 + 0x170));
  return in_x8;
}

