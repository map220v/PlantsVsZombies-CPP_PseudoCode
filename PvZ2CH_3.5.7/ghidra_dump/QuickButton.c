// Class: QuickButton


/* QuickButton::SetDepressFunction(std::function<void (int)>) */

void __thiscall QuickButton::SetDepressFunction(QuickButton *this,function *param_2)

{
  std::function<void(int)>::operator=((function<void(int)> *)(this + 0x300),param_2);
  return;
}


/* QuickButton::~QuickButton() */

void __thiscall QuickButton::~QuickButton(QuickButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06a29d20;
  *(undefined ***)(this + 0x198) = &PTR__QuickButton_06a2a078;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x300));
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to QuickButton::~QuickButton() */

void __thiscall QuickButton::~QuickButton(QuickButton *this)

{
  ~QuickButton(this + -0x198);
  return;
}


/* QuickButton::~QuickButton() */

void __thiscall QuickButton::~QuickButton(QuickButton *this)

{
  ~QuickButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to QuickButton::~QuickButton() */

void __thiscall QuickButton::~QuickButton(QuickButton *this)

{
  ~QuickButton(this + -0x198);
  return;
}


/* QuickButton::QuickButton(int, Sexy::ButtonListener*, std::wstring const&, Sexy::Color const&) */

void __thiscall
QuickButton::QuickButton
          (QuickButton *this,int param_1,ButtonListener *param_2,wstring *param_3,Color *param_4)

{
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_GetClass_06a29d20;
  *(undefined ***)(this + 0x198) = &PTR__QuickButton_06a2a078;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x300));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickButton::QuickButton() */

void __thiscall QuickButton::QuickButton(QuickButton *this)

{
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,-1,(ButtonListener *)0x0,awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  *(undefined ***)this = &PTR_GetClass_06a29d20;
  *(undefined ***)(this + 0x198) = &PTR__QuickButton_06a2a078;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x300));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* QuickButton::TouchEnded(Sexy::Touch const&) */

void __thiscall QuickButton::TouchEnded(QuickButton *this,Touch *param_1)

{
  QuickButton QVar1;
  bool bVar2;
  long *plVar3;
  
  if ((this[0x1a8] == (QuickButton)0x0) && (*(long *)(this + 0x2b0) == *(long *)param_1)) {
    QVar1 = this[0x2b8];
    *(undefined8 *)(this + 0x2b0) = 0;
    this[0x2b8] = (QuickButton)0x0;
    if (QVar1 != (QuickButton)0x0) {
      if ((this[0x71] != (QuickButton)0x0) && (*(int *)(this + 0x1ac) == 1)) {
        PVZ2UIButton::SetRadioButtonSelected((PVZ2UIButton *)this);
      }
      plVar3 = *(long **)(this + 0x168);
      if (plVar3 == (long *)0x0) {
        bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x300));
        if (bVar2) {
          std::function<void(int)>::operator()
                    ((function<void(int)> *)(this + 0x300),*(int *)(this + 0xd4));
          return;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined4 *)(this + 0xd4));
      }
    }
  }
  return;
}

