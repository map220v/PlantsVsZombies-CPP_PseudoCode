// Class: QuickFinishWidget


/* QuickFinishWidget::~QuickFinishWidget() */

void __thiscall QuickFinishWidget::~QuickFinishWidget(QuickFinishWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069772a0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* QuickFinishWidget::~QuickFinishWidget() */

void __thiscall QuickFinishWidget::~QuickFinishWidget(QuickFinishWidget *this)

{
  ~QuickFinishWidget(this);
  AK::FreeHook(this);
  return;
}


/* QuickFinishWidget::QuickFinishWidget() */

void __thiscall QuickFinishWidget::QuickFinishWidget(QuickFinishWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_069772a0;
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  return;
}


/* QuickFinishWidget::TouchEnded(Sexy::Touch const&) */

void QuickFinishWidget::TouchEnded(Touch *param_1)

{
  UIBossMedalLottery *this;
  
  if (*(RtObject **)(param_1 + 0xd8) != (RtObject *)0x0) {
    this = Sexy::RtObject::Cast<UIBossMedalLottery>(*(RtObject **)(param_1 + 0xd8));
    UIBossMedalLottery::QuickFinish(this);
    return;
  }
  return;
}

