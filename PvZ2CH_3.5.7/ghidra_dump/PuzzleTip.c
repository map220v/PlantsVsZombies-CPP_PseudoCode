// Class: PuzzleTip


/* PuzzleTip::SetTip(std::wstring) */

void PuzzleTip::SetTip(long param_1)

{
  thunk_FUN_05477b9c(param_1 + 0xd8);
  return;
}


/* PuzzleTip::SetBGImage(Sexy::Image*) */

void __thiscall PuzzleTip::SetBGImage(PuzzleTip *this,Image *param_1)

{
  *(Image **)(this + 0xf0) = param_1;
  return;
}


/* PuzzleTip::SetFont(Sexy::PrimeTypeface*) */

void __thiscall PuzzleTip::SetFont(PuzzleTip *this,PrimeTypeface *param_1)

{
  *(PrimeTypeface **)(this + 0xf8) = param_1;
  return;
}


/* PuzzleTip::SetDrawJustification(DrawStringJustification) */

void __thiscall PuzzleTip::SetDrawJustification(PuzzleTip *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x110) = param_2;
  return;
}


/* PuzzleTip::SetColor(int, Sexy::Color const&) */

void __thiscall PuzzleTip::SetColor(PuzzleTip *this,int param_1,Color *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x100) = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x108) = uVar1;
  return;
}


/* PuzzleTip::SetWrapped(bool) */

void __thiscall PuzzleTip::SetWrapped(PuzzleTip *this,bool param_1)

{
  this[0x114] = (PuzzleTip)param_1;
  return;
}


/* PuzzleTip::~PuzzleTip() */

void __thiscall PuzzleTip::~PuzzleTip(PuzzleTip *this)

{
  *(undefined ***)this = &PTR_GetClass_06987650;
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PuzzleTip::~PuzzleTip() */

void __thiscall PuzzleTip::~PuzzleTip(PuzzleTip *this)

{
  ~PuzzleTip(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleTip::Draw(Sexy::Graphics*) */

void __thiscall PuzzleTip::Draw(PuzzleTip *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xe0));
  Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf0));
  uVar1 = *(undefined8 *)(this + 0xf8);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x100));
  WriteWordInRect(param_1,this + 0xd8,(Insets *)(this + 0xe0),uVar1,aIStack_18,
                  *(undefined4 *)(this + 0x110),this[0x114]);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleTip::PuzzleTip() */

void __thiscall PuzzleTip::PuzzleTip(PuzzleTip *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06987650;
  FUN_05476574(this + 0xd8);
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  Sexy::Color::Color((Color *)(this + 0x100));
  FUN_054772c4(this + 0xd8,&DAT_056f11a8);
  Sexy::Insets::Insets((Insets *)&local_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  *(undefined8 *)(this + 0xe0) = local_18;
  *(undefined8 *)(this + 0xe8) = uStack_10;
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b90878);
  *(undefined8 *)(this + 0xf0) = uVar2;
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  *(undefined8 *)(this + 0xf8) = uVar2;
  Sexy::Color::Color((Color *)&local_18,1);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x100) = local_18;
  *(undefined8 *)(this + 0x108) = uStack_10;
  *(undefined4 *)(this + 0x110) = 5;
  this[0x114] = (PuzzleTip)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PuzzleTip::Resize(Sexy::TRect<int> const&) */

void __thiscall PuzzleTip::Resize(PuzzleTip *this,TRect *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xe8) = uVar1;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  return;
}

