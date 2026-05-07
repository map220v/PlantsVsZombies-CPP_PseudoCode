// Class: LimitedSummonTabBase


/* LimitedSummonTabBase::SetSelect(bool) */

void __thiscall LimitedSummonTabBase::SetSelect(LimitedSummonTabBase *this,bool param_1)

{
  char cVar1;
  long *plVar2;
  PVZ2UIButton *this_00;
  
  if (param_1) {
    this_00 = *(PVZ2UIButton **)(this + 0x10);
    cVar1 = FUN_039994c4(this_00[0x1a8]);
    if (cVar1 == '\0') {
      PVZ2UIButton::SetRadioButtonSelected(this_00);
    }
  }
  plVar2 = *(long **)(this + 0x28);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonTabBase::LimitedSummonTabBase(int, UI::Dialog*) */

void __thiscall
LimitedSummonTabBase::LimitedSummonTabBase(LimitedSummonTabBase *this,int param_1,Dialog *param_2)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 8) = param_1;
  *(undefined ***)this = &PTR_nop_066e1740;
  *(Dialog **)(this + 0x18) = param_2;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x20] = (LimitedSummonTabBase)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  Sexy::StrFormat("UIButton_%d",asStack_10);
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>(param_2,asStack_10);
  *(PVZ2UIButton **)(this + 0x10) = pPVar1;
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

