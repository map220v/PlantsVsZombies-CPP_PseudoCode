// Class: DefaultTabUI


/* DefaultTabUI::~DefaultTabUI() */

void __thiscall DefaultTabUI::~DefaultTabUI(DefaultTabUI *this)

{
  *(undefined ***)this = &PTR__DefaultTabUI_06721d00;
  nop();
  return;
}


/* DefaultTabUI::~DefaultTabUI() */

void __thiscall DefaultTabUI::~DefaultTabUI(DefaultTabUI *this)

{
  ~DefaultTabUI(this);
  AK::FreeHook(this);
  return;
}


/* DefaultTabUI::AddExternalWidget(Sexy::Widget*) */

void __thiscall DefaultTabUI::AddExternalWidget(DefaultTabUI *this,Widget *param_1)

{
  long *plVar1;
  
  if (this[0x30] == (DefaultTabUI)0x0) {
    *(Widget **)(this + 0x28) = param_1;
    plVar1 = *(long **)(this + 0x20);
    (**(code **)(*plVar1 + 0x198))(plVar1,0,0,(int)plVar1[10],*(undefined4 *)((long)plVar1 + 0x54));
    plVar1 = (long *)ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined8 *)(this + 0x20));
    (**(code **)(**(long **)(this + 0x20) + 0x60))
              (*(long **)(this + 0x20),*(undefined8 *)(this + 0x28));
    this[0x30] = (DefaultTabUI)0x1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DefaultTabUI::SetSelect(bool) */

void __thiscall DefaultTabUI::SetSelect(DefaultTabUI *this,bool param_1)

{
  PVZ2UIButton *pPVar1;
  long *plVar2;
  Dialog *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FestivalEventTabBase::SetSelect((FestivalEventTabBase *)this,param_1);
  this_00 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_10,"Btn_Goto");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar1 + 0x158))(pPVar1,0);
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


/* DefaultTabUI::DefaultTabUI(int, UI::Dialog*) */

void __thiscall DefaultTabUI::DefaultTabUI(DefaultTabUI *this,int param_1,Dialog *param_2)

{
  FestivalEventTabBase::FestivalEventTabBase((FestivalEventTabBase *)this,param_1,param_2);
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (DefaultTabUI)0x0;
  *(undefined ***)this = &PTR__DefaultTabUI_06721d00;
  return;
}

