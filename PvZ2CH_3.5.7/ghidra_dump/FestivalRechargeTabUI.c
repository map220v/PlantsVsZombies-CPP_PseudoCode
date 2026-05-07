// Class: FestivalRechargeTabUI


/* FestivalRechargeTabUI::~FestivalRechargeTabUI() */

void __thiscall FestivalRechargeTabUI::~FestivalRechargeTabUI(FestivalRechargeTabUI *this)

{
  *(undefined ***)this = &PTR__FestivalRechargeTabUI_0671efe0;
  nop();
  return;
}


/* FestivalRechargeTabUI::~FestivalRechargeTabUI() */

void __thiscall FestivalRechargeTabUI::~FestivalRechargeTabUI(FestivalRechargeTabUI *this)

{
  ~FestivalRechargeTabUI(this);
  AK::FreeHook(this);
  return;
}


/* FestivalRechargeTabUI::AddExternalWidget(Sexy::Widget*) */

void __thiscall
FestivalRechargeTabUI::AddExternalWidget(FestivalRechargeTabUI *this,Widget *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  
  if (this[0x30] == (FestivalRechargeTabUI)0x0) {
    *(Widget **)(this + 0x28) = param_1;
    uVar1 = FUN_03ac4800(0x24e);
    plVar3 = *(long **)(this + 0x20);
    uVar2 = FUN_03ac4800(0x1d6);
    (**(code **)(*plVar3 + 0x198))(plVar3,0,0,uVar1,uVar2);
    plVar3 = (long *)ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
    (**(code **)(*plVar3 + 0x60))(plVar3,*(undefined8 *)(this + 0x20));
    (**(code **)(**(long **)(this + 0x20) + 0x60))
              (*(long **)(this + 0x20),*(undefined8 *)(this + 0x28));
    this[0x30] = (FestivalRechargeTabUI)0x1;
  }
  return;
}


/* FestivalRechargeTabUI::FestivalRechargeTabUI(int, UI::Dialog*) */

void __thiscall
FestivalRechargeTabUI::FestivalRechargeTabUI
          (FestivalRechargeTabUI *this,int param_1,Dialog *param_2)

{
  FestivalEventTabBase::FestivalEventTabBase((FestivalEventTabBase *)this,param_1,param_2);
  this[0x30] = (FestivalRechargeTabUI)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__FestivalRechargeTabUI_0671efe0;
  return;
}

