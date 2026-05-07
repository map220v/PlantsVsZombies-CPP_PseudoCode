// Class: NewerPresentText


/* NewerPresentText::~NewerPresentText() */

void __thiscall NewerPresentText::~NewerPresentText(NewerPresentText *this)

{
  *(undefined ***)this = &PTR_GetClass_06778540;
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NewerPresentText::~NewerPresentText() */

void __thiscall NewerPresentText::~NewerPresentText(NewerPresentText *this)

{
  ~NewerPresentText(this);
  AK::FreeHook(this);
  return;
}


/* NewerPresentText::NewerPresentText() */

void __thiscall NewerPresentText::NewerPresentText(NewerPresentText *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06778540;
  FUN_05476574(this + 0xd8);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  Sexy::Color::Color((Color *)(this + 0xec),0);
  return;
}


/* NewerPresentText::NewerPresentText(std::wstring const&) */

void __thiscall NewerPresentText::NewerPresentText(NewerPresentText *this,wstring *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06778540;
  FUN_05477b24(this + 0xd8,param_1);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  Sexy::Color::Color((Color *)(this + 0xec),0);
  return;
}

