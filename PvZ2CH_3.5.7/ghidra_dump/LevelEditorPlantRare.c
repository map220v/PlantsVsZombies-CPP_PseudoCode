// Class: LevelEditorPlantRare


/* LevelEditorPlantRare::SetCallBack(std::function<void ()>) */

void __thiscall LevelEditorPlantRare::SetCallBack(LevelEditorPlantRare *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0xe0),param_2);
  return;
}


/* LevelEditorPlantRare::~LevelEditorPlantRare() */

void __thiscall LevelEditorPlantRare::~LevelEditorPlantRare(LevelEditorPlantRare *this)

{
  *(undefined ***)this = &PTR_GetClass_06959f20;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorPlantRare::~LevelEditorPlantRare() */

void __thiscall LevelEditorPlantRare::~LevelEditorPlantRare(LevelEditorPlantRare *this)

{
  ~LevelEditorPlantRare(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorPlantRare::LevelEditorPlantRare() */

void __thiscall LevelEditorPlantRare::LevelEditorPlantRare(LevelEditorPlantRare *this)

{
  Sexy::Widget::Widget((Widget *)this);
  this[0xd1] = (LevelEditorPlantRare)0x1;
  *(undefined ***)this = &PTR_GetClass_06959f20;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0xe0));
  return;
}


/* LevelEditorPlantRare::TouchEnded(Sexy::Touch const&) */

void __thiscall LevelEditorPlantRare::TouchEnded(LevelEditorPlantRare *this,Touch *param_1)

{
  if (*(int *)(this + 0xd4) != (int)*(undefined8 *)param_1) {
    return;
  }
  this[0xd1] = (LevelEditorPlantRare)((byte)this[0xd1] ^ 1);
  std::function<void()>::operator()((function<void()> *)(this + 0xe0));
  return;
}


/* LevelEditorPlantRare::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorPlantRare::Draw(LevelEditorPlantRare *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  iVar1 = *(int *)(this + 0xd8);
  if (iVar1 == 4) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b852b8;
  }
  else if (iVar1 == 3) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85628;
  }
  else if (iVar1 == 2) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b851f0;
  }
  else if (iVar1 == 1) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85470;
  }
  else {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85190;
  }
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  if (this[0xd1] == (LevelEditorPlantRare)0x0) {
    return;
  }
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85538);
  iVar1 = *(int *)(this + 0x50);
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,*(int *)(this + 0x54) - iVar1,iVar1,iVar1);
  return;
}

