// Class: TouchCloseContainer


/* TouchCloseContainer::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
TouchCloseContainer::DrawAll(TouchCloseContainer *this,ModalFlags *param_1,Graphics *param_2)

{
  if (this[0x100] != (TouchCloseContainer)0x0) {
    LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  }
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  return;
}


/* TouchCloseContainer::~TouchCloseContainer() */

void __thiscall TouchCloseContainer::~TouchCloseContainer(TouchCloseContainer *this)

{
  *(undefined ***)this = &PTR_GetClass_06961880;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TouchCloseContainer::~TouchCloseContainer() */

void __thiscall TouchCloseContainer::~TouchCloseContainer(TouchCloseContainer *this)

{
  ~TouchCloseContainer(this);
  AK::FreeHook(this);
  return;
}


/* TouchCloseContainer::TouchCloseContainer() */

void __thiscall TouchCloseContainer::TouchCloseContainer(TouchCloseContainer *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06961880;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0xe0));
  this[0x100] = (TouchCloseContainer)0x0;
  *(undefined4 *)(this + 0xd8) = 0;
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  return;
}


/* TouchCloseContainer::TouchEnded(Sexy::Touch const&) */

void __thiscall TouchCloseContainer::TouchEnded(TouchCloseContainer *this,Touch *param_1)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this_00;
  long lVar3;
  
  if (*(int *)(this + 0xd4) == (int)*(undefined8 *)param_1) {
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0xe0));
    if (bVar1) {
      std::function<void()>::operator()((function<void()> *)(this + 0xe0));
    }
    UIUtil::CloseDialog((Widget *)this);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar3 = ProfileMgr::GetCurrentProfile(this_00);
    iVar2 = FUN_04b4bb60(*(undefined4 *)(lVar3 + 0x40));
    if ((iVar2 == 0x3c) && (*(int *)(this + 0xd8) != -1)) {
      if (*(int *)(this + 0xd8) == 0) {
        MessageRouter::Broadcast((_func_void *)gMessageRouter);
        return;
      }
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
      return;
    }
  }
  return;
}

