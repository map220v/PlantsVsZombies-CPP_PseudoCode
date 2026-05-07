// Class: SecretStoreText


/* SecretStoreText::~SecretStoreText() */

void __thiscall SecretStoreText::~SecretStoreText(SecretStoreText *this)

{
  *(undefined ***)this = &PTR_GetClass_06774860;
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* SecretStoreText::~SecretStoreText() */

void __thiscall SecretStoreText::~SecretStoreText(SecretStoreText *this)

{
  ~SecretStoreText(this);
  AK::FreeHook(this);
  return;
}


/* SecretStoreText::SecretStoreText() */

void __thiscall SecretStoreText::SecretStoreText(SecretStoreText *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06774860;
  FUN_05476574(this + 0xd8);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  Sexy::Color::Color((Color *)(this + 0xec),0);
  return;
}


/* SecretStoreText::SecretStoreText(std::wstring const&) */

void __thiscall SecretStoreText::SecretStoreText(SecretStoreText *this,wstring *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06774860;
  FUN_05477b24(this + 0xd8,param_1);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  Sexy::Color::Color((Color *)(this + 0xec),0);
  return;
}

