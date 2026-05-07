// Class: PennyGiftBoxTabBase


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxTabBase::AddExternalWidget(Sexy::Widget*) */

void __thiscall PennyGiftBoxTabBase::AddExternalWidget(PennyGiftBoxTabBase *this,Widget *param_1)

{
  long *plVar1;
  code *pcVar2;
  Dialog *this_00;
  long *plVar3;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x20] == (PennyGiftBoxTabBase)0x0) {
    *(Widget **)(this + 0x28) = param_1;
    this_00 = *(Dialog **)(this + 0x18);
    std::string::string(asStack_18,"Widget_Content");
    plVar1 = (long *)UI::Dialog::GetWidget(this_00,asStack_18);
    std::string::~string(asStack_18);
    nop();
    plVar3 = *(long **)(this + 0x28);
    pcVar2 = *(code **)(*plVar3 + 0x1a0);
    Sexy::Insets::Insets((Insets *)asStack_18,0,0,(int)plVar1[10],*(int *)((long)plVar1 + 0x54));
    (*pcVar2)(plVar3,asStack_18);
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined8 *)(this + 0x28));
    this[0x20] = (PennyGiftBoxTabBase)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyGiftBoxTabBase::SetSelect(bool) */

void __thiscall PennyGiftBoxTabBase::SetSelect(PennyGiftBoxTabBase *this,bool param_1)

{
  char cVar1;
  long *plVar2;
  PVZ2UIButton *this_00;
  
  if (param_1) {
    this_00 = *(PVZ2UIButton **)(this + 0x10);
    cVar1 = FUN_04e76c70(this_00[0x1a8]);
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
/* PennyGiftBoxTabBase::PennyGiftBoxTabBase(int, UI::Dialog*) */

void __thiscall
PennyGiftBoxTabBase::PennyGiftBoxTabBase(PennyGiftBoxTabBase *this,int param_1,Dialog *param_2)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 8) = param_1;
  *(undefined ***)this = &PTR_nop_069e7df0;
  *(Dialog **)(this + 0x18) = param_2;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x20] = (PennyGiftBoxTabBase)0x0;
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

