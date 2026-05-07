// Class: FestivalGameTabUI


/* FestivalGameTabUI::~FestivalGameTabUI() */

void __thiscall FestivalGameTabUI::~FestivalGameTabUI(FestivalGameTabUI *this)

{
  *(undefined ***)this = &PTR__FestivalGameTabUI_0671f080;
  nop();
  return;
}


/* FestivalGameTabUI::~FestivalGameTabUI() */

void __thiscall FestivalGameTabUI::~FestivalGameTabUI(FestivalGameTabUI *this)

{
  ~FestivalGameTabUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGameTabUI::SetSelect(bool) */

void __thiscall FestivalGameTabUI::SetSelect(FestivalGameTabUI *this,bool param_1)

{
  PVZ2UIButton *pPVar1;
  long *plVar2;
  Dialog *pDVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FestivalEventTabBase::SetSelect((FestivalEventTabBase *)this,param_1);
  pDVar3 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_10,"Btn_Goto");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>(pDVar3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar1 + 0x158))(pPVar1,0);
  pDVar3 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_10,"Btn_Check");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>(pDVar3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar1 + 0x158))(pPVar1,0);
  pDVar3 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_10,"Tab1_Cost_Back");
  plVar2 = (long *)UI::Dialog::GetWidget(pDVar3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*plVar2 + 0x158))(plVar2,0);
  plVar2 = *(long **)(this + 0x28);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FestivalGameTabUI::FestivalGameTabUI(int, UI::Dialog*) */

void __thiscall
FestivalGameTabUI::FestivalGameTabUI(FestivalGameTabUI *this,int param_1,Dialog *param_2)

{
  FestivalEventTabBase::FestivalEventTabBase((FestivalEventTabBase *)this,param_1,param_2);
  this[0x30] = (FestivalGameTabUI)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__FestivalGameTabUI_0671f080;
  return;
}

