// Class: OppoNewerNewLoginTabUI


/* OppoNewerNewLoginTabUI::~OppoNewerNewLoginTabUI() */

void __thiscall OppoNewerNewLoginTabUI::~OppoNewerNewLoginTabUI(OppoNewerNewLoginTabUI *this)

{
  *(undefined ***)this = &PTR__OppoNewerNewLoginTabUI_066bfb60;
  nop();
  return;
}


/* OppoNewerNewLoginTabUI::~OppoNewerNewLoginTabUI() */

void __thiscall OppoNewerNewLoginTabUI::~OppoNewerNewLoginTabUI(OppoNewerNewLoginTabUI *this)

{
  ~OppoNewerNewLoginTabUI(this);
  AK::FreeHook(this);
  return;
}


/* OppoNewerNewLoginTabUI::AddExternalWidget(Sexy::Widget*) */

void __thiscall
OppoNewerNewLoginTabUI::AddExternalWidget(OppoNewerNewLoginTabUI *this,Widget *param_1)

{
  int iVar1;
  long *plVar2;
  
  if (this[0x30] == (OppoNewerNewLoginTabUI)0x0) {
    plVar2 = *(long **)(this + 0x20);
    *(Widget **)(this + 0x28) = param_1;
    iVar1 = FUN_038ff3b8(0x14);
    (**(code **)(*plVar2 + 0x198))(plVar2,0,0,(int)plVar2[10],iVar1 + *(int *)((long)plVar2 + 0x54))
    ;
    plVar2 = (long *)ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
    (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined8 *)(this + 0x20));
    (**(code **)(**(long **)(this + 0x20) + 0x60))
              (*(long **)(this + 0x20),*(undefined8 *)(this + 0x28));
    this[0x30] = (OppoNewerNewLoginTabUI)0x1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerNewLoginTabUI::SetSelect(bool) */

void __thiscall OppoNewerNewLoginTabUI::SetSelect(OppoNewerNewLoginTabUI *this,bool param_1)

{
  PVZ2UIButton *pPVar1;
  long *plVar2;
  Dialog *pDVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  OppoNewerTabBase::SetSelect((OppoNewerTabBase *)this,param_1);
  pDVar3 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_10,"Btn_Goto");
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


/* OppoNewerNewLoginTabUI::OppoNewerNewLoginTabUI(int, UI::Dialog*) */

void __thiscall
OppoNewerNewLoginTabUI::OppoNewerNewLoginTabUI
          (OppoNewerNewLoginTabUI *this,int param_1,Dialog *param_2)

{
  OppoNewerTabBase::OppoNewerTabBase((OppoNewerTabBase *)this,param_1,param_2);
  this[0x30] = (OppoNewerNewLoginTabUI)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__OppoNewerNewLoginTabUI_066bfb60;
  return;
}

