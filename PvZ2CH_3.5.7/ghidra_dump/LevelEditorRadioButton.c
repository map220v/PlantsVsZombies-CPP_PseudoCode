// Class: LevelEditorRadioButton


/* LevelEditorRadioButton::SetSwitchRadioFunc(std::function<void (bool)>) */

void __thiscall
LevelEditorRadioButton::SetSwitchRadioFunc(LevelEditorRadioButton *this,function *param_2)

{
  std::function<void(bool)>::operator=((function<void(bool)> *)(this + 0xe0),param_2);
  return;
}


/* LevelEditorRadioButton::~LevelEditorRadioButton() */

void __thiscall LevelEditorRadioButton::~LevelEditorRadioButton(LevelEditorRadioButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06963730;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorRadioButton::~LevelEditorRadioButton() */

void __thiscall LevelEditorRadioButton::~LevelEditorRadioButton(LevelEditorRadioButton *this)

{
  ~LevelEditorRadioButton(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorRadioButton::TouchEnded(Sexy::Touch const&) */

void __thiscall LevelEditorRadioButton::TouchEnded(LevelEditorRadioButton *this,Touch *param_1)

{
  LevelEditorRadioButton LVar1;
  
  if (*(int *)(this + 0xd4) != (int)*(undefined8 *)param_1) {
    return;
  }
  LVar1 = this[0xd8];
  this[0xd8] = (LevelEditorRadioButton)((byte)LVar1 ^ 1);
  std::function<void(bool)>::operator()
            ((function<void(bool)> *)(this + 0xe0),(bool)((byte)LVar1 ^ 1));
  return;
}


/* LevelEditorRadioButton::LevelEditorRadioButton() */

void __thiscall LevelEditorRadioButton::LevelEditorRadioButton(LevelEditorRadioButton *this)

{
  Sexy::Widget::Widget((Widget *)this);
  this[0xd8] = (LevelEditorRadioButton)0x0;
  *(undefined ***)this = &PTR_GetClass_06963730;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0xe0));
  return;
}


/* LevelEditorRadioButton::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorRadioButton::Draw(LevelEditorRadioButton *this,Graphics *param_1)

{
  Image *pIVar1;
  
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85c58);
  Sexy::Graphics::DrawImage(param_1,pIVar1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  if (this[0xd8] == (LevelEditorRadioButton)0x0) {
    return;
  }
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85d10);
  Sexy::Graphics::DrawImage(param_1,pIVar1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}

