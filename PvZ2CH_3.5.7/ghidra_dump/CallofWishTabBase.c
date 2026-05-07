// Class: CallofWishTabBase


/* CallofWishTabBase::SetSelect(bool) */

void __thiscall CallofWishTabBase::SetSelect(CallofWishTabBase *this,bool param_1)

{
  char cVar1;
  long *plVar2;
  PVZ2UIButton *this_00;
  
  this_00 = *(PVZ2UIButton **)(this + 0x10);
  if ((this_00 != (PVZ2UIButton *)0x0) && (*(long *)(this + 0x18) != 0)) {
    if ((param_1) && (cVar1 = FUN_039d2748(this_00[0x1a8]), cVar1 == '\0')) {
      PVZ2UIButton::SetRadioButtonSelected(this_00);
    }
    plVar2 = *(long **)(this + 0x28);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x158))(plVar2,param_1);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTabBase::GetTabContent() */

void __thiscall CallofWishTabBase::GetTabContent(CallofWishTabBase *this)

{
  undefined8 uVar1;
  Dialog *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(Dialog **)(this + 0x18);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Widget_Content");
  uVar1 = UI::Dialog::GetWidget(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTabBase::AddExternalWidget(Sexy::Widget*) */

void __thiscall CallofWishTabBase::AddExternalWidget(CallofWishTabBase *this,Widget *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x20] == (CallofWishTabBase)0x0) {
    *(Widget **)(this + 0x28) = param_1;
    plVar1 = (long *)GetTabContent(this);
    plVar3 = *(long **)(this + 0x28);
    pcVar2 = *(code **)(*plVar3 + 0x1a0);
    Sexy::Insets::Insets(aIStack_18,0,0,(int)plVar1[10],*(int *)((long)plVar1 + 0x54));
    (*pcVar2)(plVar3,aIStack_18);
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined8 *)(this + 0x28));
    this[0x20] = (CallofWishTabBase)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTabBase::CallofWishTabBase(int, UI::Dialog*) */

void __thiscall
CallofWishTabBase::CallofWishTabBase(CallofWishTabBase *this,int param_1,Dialog *param_2)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_nop_066f17b0;
  *(Dialog **)(this + 0x18) = param_2;
  this[0x20] = (CallofWishTabBase)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  if (param_2 != (Dialog *)0x0) {
    Sexy::StrFormat("UIButton_%d",asStack_10);
    pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>(param_2,asStack_10);
    *(PVZ2UIButton **)(this + 0x10) = pPVar1;
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

