// Class: CustomLevelTutorialSkipWidget


/* CustomLevelTutorialSkipWidget::~CustomLevelTutorialSkipWidget() */

void __thiscall
CustomLevelTutorialSkipWidget::~CustomLevelTutorialSkipWidget(CustomLevelTutorialSkipWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0665de50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0665e178;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CustomLevelTutorialSkipWidget::~CustomLevelTutorialSkipWidget() */

void __thiscall
CustomLevelTutorialSkipWidget::~CustomLevelTutorialSkipWidget(CustomLevelTutorialSkipWidget *this)

{
  ~CustomLevelTutorialSkipWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelTutorialSkipWidget::Init() */

void __thiscall CustomLevelTutorialSkipWidget::Init(CustomLevelTutorialSkipWidget *this)

{
  PVZ2UIButton *pPVar1;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_78,L"[DIALOG_YES_SKIP_TUTORIAL]",auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar1 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar1,0,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar1;
  FUN_05476c50(awStack_78);
  nop();
  pPVar1 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aa71c0,5);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06aa7110,5);
  PVZ2UIButton::SetDialogStates(pPVar1,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0xe0) + 0x198))
            (*(long **)(this + 0xe0),0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelTutorialSkipWidget::CustomLevelTutorialSkipWidget() */

void __thiscall
CustomLevelTutorialSkipWidget::CustomLevelTutorialSkipWidget(CustomLevelTutorialSkipWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_0665de50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0665e178;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0xe8));
  return;
}


/* CustomLevelTutorialSkipWidget::ButtonDepress(int) */

void __thiscall
CustomLevelTutorialSkipWidget::ButtonDepress(CustomLevelTutorialSkipWidget *this,int param_1)

{
  bool bVar1;
  
  if (param_1 == 0) {
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0xe8));
    if (bVar1) {
      std::function<void()>::operator()((function<void()> *)(this + 0xe8));
      return;
    }
  }
  return;
}


/* non-virtual thunk to CustomLevelTutorialSkipWidget::ButtonDepress(int) */

void __thiscall
CustomLevelTutorialSkipWidget::ButtonDepress(CustomLevelTutorialSkipWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* CustomLevelTutorialSkipWidget::SetCallBack(std::function<void ()>) */

void __thiscall
CustomLevelTutorialSkipWidget::SetCallBack(CustomLevelTutorialSkipWidget *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0xe8),param_2);
  return;
}

