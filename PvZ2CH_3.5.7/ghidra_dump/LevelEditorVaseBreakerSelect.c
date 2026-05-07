// Class: LevelEditorVaseBreakerSelect


/* LevelEditorVaseBreakerSelect::IsSelected() */

LevelEditorVaseBreakerSelect __thiscall
LevelEditorVaseBreakerSelect::IsSelected(LevelEditorVaseBreakerSelect *this)

{
  return this[0xd8];
}


/* LevelEditorVaseBreakerSelect::SetSelect(bool) */

void __thiscall
LevelEditorVaseBreakerSelect::SetSelect(LevelEditorVaseBreakerSelect *this,bool param_1)

{
  this[0xd8] = (LevelEditorVaseBreakerSelect)param_1;
  return;
}


/* LevelEditorVaseBreakerSelect::~LevelEditorVaseBreakerSelect() */

void __thiscall
LevelEditorVaseBreakerSelect::~LevelEditorVaseBreakerSelect(LevelEditorVaseBreakerSelect *this)

{
  *(undefined ***)this = &PTR_GetClass_0696c840;
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorVaseBreakerSelect::~LevelEditorVaseBreakerSelect() */

void __thiscall
LevelEditorVaseBreakerSelect::~LevelEditorVaseBreakerSelect(LevelEditorVaseBreakerSelect *this)

{
  ~LevelEditorVaseBreakerSelect(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerSelect::LevelEditorVaseBreakerSelect(bool) */

void __thiscall
LevelEditorVaseBreakerSelect::LevelEditorVaseBreakerSelect
          (LevelEditorVaseBreakerSelect *this,bool param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0696c840;
  FUN_05476574(this + 0xe0);
  this[0xd9] = (LevelEditorVaseBreakerSelect)param_1;
  this[0xd8] = (LevelEditorVaseBreakerSelect)0x0;
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  if (param_1) {
    TodStringTranslate(L"[CUSTOM_LEVEL_VASE_BREAKER_PLANT_TITLE]");
  }
  else {
    TodStringTranslate(L"[CUSTOM_LEVEL_VASE_BREAKER_ZOMBIE_TITLE]");
  }
  FUN_054766c8(this + 0xe0,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorVaseBreakerSelect::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorVaseBreakerSelect::TouchEnded(LevelEditorVaseBreakerSelect *this,Touch *param_1)

{
  if (*(int *)(this + 0xd4) != (int)*(undefined8 *)param_1) {
    return;
  }
  this[0xd8] = (LevelEditorVaseBreakerSelect)0x1;
  MessageRouter::Post<bool,bool>
            ((MessageRouter *)gMessageRouter,Message::SetSelectPlantOrZombie,(bool)this[0xd9]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerSelect::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorVaseBreakerSelect::Draw(LevelEditorVaseBreakerSelect *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  undefined8 uVar4;
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  if (this[0xd8] == (LevelEditorVaseBreakerSelect)0x0) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86c48;
  }
  else {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86ab8;
  }
  pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  iVar1 = *(int *)(this + 0x54);
  iVar2 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  Sexy::Graphics::DrawImage(param_1,pIVar3,iVar2 >> 2,iVar2 >> 2,iVar1 / 2,iVar1 / 2);
  iVar2 = *(int *)(this + 0x54);
  Sexy::Insets::Insets(aIStack_18,iVar2,0,*(int *)(this + 0x50) - iVar2,iVar2);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color(aCStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xe0,aIStack_18,uVar4,aCStack_28,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

