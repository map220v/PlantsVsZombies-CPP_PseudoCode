// Class: UtilEasyDisplayWidget


/* UtilEasyDisplayWidget::TouchBegan(Sexy::Touch const&) */

void __thiscall UtilEasyDisplayWidget::TouchBegan(UtilEasyDisplayWidget *this,Touch *param_1)

{
  *(int *)(this + 0xd4) = (int)*(undefined8 *)param_1;
  return;
}


/* UtilEasyDisplayWidget::SetDrawFunction(std::function<void (Sexy::Graphics*)>) */

void __thiscall
UtilEasyDisplayWidget::SetDrawFunction(UtilEasyDisplayWidget *this,function *param_2)

{
  std::function<void(Sexy::Graphics*)>::operator=
            ((function<void(Sexy::Graphics*)> *)(this + 0xf8),param_2);
  return;
}


/* UtilEasyDisplayWidget::SetTouchFunction(std::function<void ()>) */

void __thiscall
UtilEasyDisplayWidget::SetTouchFunction(UtilEasyDisplayWidget *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0xd8),param_2);
  return;
}


/* UtilEasyDisplayWidget::~UtilEasyDisplayWidget() */

void __thiscall UtilEasyDisplayWidget::~UtilEasyDisplayWidget(UtilEasyDisplayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06a28b40;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0xf8));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UtilEasyDisplayWidget::~UtilEasyDisplayWidget() */

void __thiscall UtilEasyDisplayWidget::~UtilEasyDisplayWidget(UtilEasyDisplayWidget *this)

{
  ~UtilEasyDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* UtilEasyDisplayWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall UtilEasyDisplayWidget::TouchEnded(UtilEasyDisplayWidget *this,Touch *param_1)

{
  if (*(int *)(this + 0xd4) != (int)*(undefined8 *)param_1) {
    return;
  }
  std::function<void()>::operator()((function<void()> *)(this + 0xd8));
  return;
}


/* UtilEasyDisplayWidget::Draw(Sexy::Graphics*) */

void __thiscall UtilEasyDisplayWidget::Draw(UtilEasyDisplayWidget *this,Graphics *param_1)

{
  std::function<void(Sexy::Graphics*)>::operator()
            ((function<void(Sexy::Graphics*)> *)(this + 0xf8),param_1);
  return;
}


/* UtilEasyDisplayWidget::UtilEasyDisplayWidget() */

void __thiscall UtilEasyDisplayWidget::UtilEasyDisplayWidget(UtilEasyDisplayWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06a28b40;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0xd8));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0xf8));
  FUN_04fb0f30((function<void(Sexy::Graphics*)> *)(this + 0xd8));
  FUN_04fb0ebc((function<void(Sexy::Graphics*)> *)(this + 0xf8));
  return;
}

