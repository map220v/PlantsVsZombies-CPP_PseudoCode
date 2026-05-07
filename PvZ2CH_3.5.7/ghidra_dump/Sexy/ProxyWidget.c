// Class: Sexy::ProxyWidget


/* Sexy::ProxyWidget::Draw(Sexy::Graphics*) */

void __thiscall Sexy::ProxyWidget::Draw(ProxyWidget *this,Graphics *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,param_1,this);
  }
  return;
}


/* Sexy::ProxyWidget::~ProxyWidget() */

void __thiscall Sexy::ProxyWidget::~ProxyWidget(ProxyWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06a35f40;
  Widget::~Widget((Widget *)this);
  return;
}


/* Sexy::ProxyWidget::~ProxyWidget() */

void __thiscall Sexy::ProxyWidget::~ProxyWidget(ProxyWidget *this)

{
  ~ProxyWidget(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::ProxyWidget::ProxyWidget(Sexy::ProxyWidgetListener*) */

void __thiscall Sexy::ProxyWidget::ProxyWidget(ProxyWidget *this,ProxyWidgetListener *param_1)

{
  Widget::Widget((Widget *)this);
  *(ProxyWidgetListener **)(this + 0xd8) = param_1;
  *(undefined ***)this = &PTR_GetClass_06a35f40;
  return;
}

