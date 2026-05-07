// Class: ResilienceIntroWidget


/* ResilienceIntroWidget::~ResilienceIntroWidget() */

void __thiscall ResilienceIntroWidget::~ResilienceIntroWidget(ResilienceIntroWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06a215e0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ResilienceIntroWidget::~ResilienceIntroWidget() */

void __thiscall ResilienceIntroWidget::~ResilienceIntroWidget(ResilienceIntroWidget *this)

{
  ~ResilienceIntroWidget(this);
  AK::FreeHook(this);
  return;
}


/* ResilienceIntroWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall ResilienceIntroWidget::TouchEnded(ResilienceIntroWidget *this,Touch *param_1)

{
  int iVar1;
  
  if ((this[0x10c] != (ResilienceIntroWidget)0x0) &&
     (*(int *)(this + 0xd4) == (int)*(undefined8 *)param_1)) {
    LawnApp::KillGameMaskUI(gLawnApp);
    iVar1 = FUN_04f638bc(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xf0));
    if (iVar1 != 0) {
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0xd8));
    }
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x68))(*(long **)(gLawnApp + 0x360),this);
    Sexy::WidgetManager::RemoveBaseModal(*(WidgetManager **)(gLawnApp + 0x360),(Widget *)this);
    (**(code **)(*(long *)gLawnApp + 0x150))(gLawnApp,this);
    return;
  }
  return;
}


/* ResilienceIntroWidget::ResilienceIntroWidget() */

void __thiscall ResilienceIntroWidget::ResilienceIntroWidget(ResilienceIntroWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06a215e0;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0xd8),(DummyInit *)0x0);
  this[0x10c] = (ResilienceIntroWidget)0x0;
  *(undefined4 *)(this + 0x108) = 0x3fc00000;
  return;
}


/* ResilienceIntroWidget::Init(Sexy::Delegate0) */

void __thiscall ResilienceIntroWidget::Init(ResilienceIntroWidget *this,Delegate2 *param_2)

{
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),this);
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),(Widget *)this);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))(*(long **)(gLawnApp + 0x360),this);
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0xd8),param_2);
  return;
}


/* ResilienceIntroWidget::Update() */

void __thiscall ResilienceIntroWidget::Update(ResilienceIntroWidget *this)

{
  float fVar1;
  float fVar2;
  
  Sexy::WidgetContainer::Update((WidgetContainer *)this);
  fVar1 = (float)PVZ_Dt();
  fVar2 = *(float *)(this + 0x108);
  *(float *)(this + 0x108) = fVar2 - fVar1;
  if (fVar2 - fVar1 < 0.0) {
    this[0x10c] = (ResilienceIntroWidget)0x1;
  }
  return;
}

