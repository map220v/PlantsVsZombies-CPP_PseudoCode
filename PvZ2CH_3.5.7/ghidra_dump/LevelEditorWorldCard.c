// Class: LevelEditorWorldCard


/* LevelEditorWorldCard::~LevelEditorWorldCard() */

void __thiscall LevelEditorWorldCard::~LevelEditorWorldCard(LevelEditorWorldCard *this)

{
  *(undefined ***)this = &PTR_GetClass_06962280;
  std::string::~string((string *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorWorldCard::~LevelEditorWorldCard() */

void __thiscall LevelEditorWorldCard::~LevelEditorWorldCard(LevelEditorWorldCard *this)

{
  ~LevelEditorWorldCard(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorWorldCard::LevelEditorWorldCard() */

void __thiscall LevelEditorWorldCard::LevelEditorWorldCard(LevelEditorWorldCard *this)

{
  Sexy::Widget::Widget((Widget *)this);
  this[0xd1] = (LevelEditorWorldCard)0x0;
  *(undefined ***)this = &PTR_GetClass_06962280;
  Set8BytesTo0(this + 0xd8);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  return;
}


/* LevelEditorWorldCard::TouchEnded(Sexy::Touch const&) */

void __thiscall LevelEditorWorldCard::TouchEnded(LevelEditorWorldCard *this,Touch *param_1)

{
  if (*(int *)(this + 0xe0) != (int)*(undefined8 *)param_1) {
    return;
  }
  LevelEditorWorldSelect::SetSelectStage
            (*(LevelEditorWorldSelect **)(this + 0xf0),(string *)(this + 0xd8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWorldCard::Init(LevelEditorWorldSelect*, std::string const&) */

void __thiscall
LevelEditorWorldCard::Init
          (LevelEditorWorldCard *this,LevelEditorWorldSelect *param_1,string *param_2)

{
  undefined8 uVar1;
  string *extraout_x1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(this + 0xd8,param_2);
  *(LevelEditorWorldSelect **)(this + 0xf0) = param_1;
  Sexy::StringToUpper((Sexy *)param_2,extraout_x1);
  std::operator+("IMAGE_UI_LEVELEDITOR_WORLD_",asStack_18);
  uVar1 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0xe8) = uVar1;
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorWorldCard::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorWorldCard::Draw(LevelEditorWorldCard *this,Graphics *param_1)

{
  Image *pIVar1;
  
  if (*(Image **)(this + 0xe8) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xe8),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (this[0xd1] == (LevelEditorWorldCard)0x0) {
    return;
  }
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85e40);
  Sexy::Graphics::DrawImage(param_1,pIVar1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}

