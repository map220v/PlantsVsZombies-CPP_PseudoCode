// Class: PuzzleRotateItemBase


/* PuzzleRotateItemBase::~PuzzleRotateItemBase() */

void __thiscall PuzzleRotateItemBase::~PuzzleRotateItemBase(PuzzleRotateItemBase *this)

{
  *(undefined ***)this = &PTR__PuzzleRotateItemBase_06986390;
  *(undefined **)(this + 0x10) = &DAT_069863b8;
  *(undefined ***)(this + 0x1a8) = &PTR__PuzzleRotateItemBase_06986710;
  *(undefined ***)(this + 0x310) = &PTR_ButtonPress_06986738;
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)(this + 0x10));
  nop();
  return;
}


/* non-virtual thunk to PuzzleRotateItemBase::~PuzzleRotateItemBase() */

void __thiscall PuzzleRotateItemBase::~PuzzleRotateItemBase(PuzzleRotateItemBase *this)

{
  ~PuzzleRotateItemBase(this + -0x1a8);
  return;
}


/* non-virtual thunk to PuzzleRotateItemBase::~PuzzleRotateItemBase() */

void __thiscall PuzzleRotateItemBase::~PuzzleRotateItemBase(PuzzleRotateItemBase *this)

{
  ~PuzzleRotateItemBase(this + -0x10);
  return;
}


/* PuzzleRotateItemBase::~PuzzleRotateItemBase() */

void __thiscall PuzzleRotateItemBase::~PuzzleRotateItemBase(PuzzleRotateItemBase *this)

{
  ~PuzzleRotateItemBase(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PuzzleRotateItemBase::~PuzzleRotateItemBase() */

void __thiscall PuzzleRotateItemBase::~PuzzleRotateItemBase(PuzzleRotateItemBase *this)

{
  ~PuzzleRotateItemBase(this + -0x1a8);
  return;
}


/* non-virtual thunk to PuzzleRotateItemBase::~PuzzleRotateItemBase() */

void __thiscall PuzzleRotateItemBase::~PuzzleRotateItemBase(PuzzleRotateItemBase *this)

{
  ~PuzzleRotateItemBase(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleRotateItemBase::PuzzleRotateItemBase(int) */

void __thiscall PuzzleRotateItemBase::PuzzleRotateItemBase(PuzzleRotateItemBase *this,int param_1)

{
  bool bVar1;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PuzzleItemBase::PuzzleItemBase((PuzzleItemBase *)this);
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)(this + 0x10),param_1,(ButtonListener *)(this + 0x310),awStack_20,
             aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x310));
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined ***)this = &PTR__PuzzleRotateItemBase_06986390;
  *(undefined **)(this + 0x10) = &DAT_069863b8;
  *(undefined ***)(this + 0x1a8) = &PTR__PuzzleRotateItemBase_06986710;
  *(undefined ***)(this + 0x310) = &PTR_ButtonPress_06986738;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

