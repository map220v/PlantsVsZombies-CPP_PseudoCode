// Class: PVZ2UISeedChooserPlantPotButton


/* PVZ2UISeedChooserPlantPotButton::MouseDown(int, int, int, int) */

void PVZ2UISeedChooserPlantPotButton::MouseDown(int param_1,int param_2,int param_3,int param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined4 in_w4;
  
  uVar1 = (ulong)(uint)param_1;
  plVar2 = *(long **)(uVar1 + 0x168);
  *(undefined1 *)(uVar1 + 0x2b8) = 1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,*(undefined4 *)(uVar1 + 0xd4),in_w4);
  }
  return;
}


/* PVZ2UISeedChooserPlantPotButton::MouseUp(int, int, int, int) */

void PVZ2UISeedChooserPlantPotButton::MouseUp(int param_1,int param_2,int param_3,int param_4)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = (ulong)(uint)param_1;
  plVar2 = *(long **)(uVar1 + 0x168);
  *(undefined1 *)(uVar1 + 0x2b8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined4 *)(uVar1 + 0xd4));
  }
  return;
}


/* PVZ2UISeedChooserPlantPotButton::~PVZ2UISeedChooserPlantPotButton() */

void __thiscall
PVZ2UISeedChooserPlantPotButton::~PVZ2UISeedChooserPlantPotButton
          (PVZ2UISeedChooserPlantPotButton *this)

{
  *(undefined ***)this = &PTR_GetClass_068397b0;
  *(undefined ***)(this + 0x198) = &PTR__PVZ2UISeedChooserPlantPotButton_06839b08;
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to PVZ2UISeedChooserPlantPotButton::~PVZ2UISeedChooserPlantPotButton() */

void __thiscall
PVZ2UISeedChooserPlantPotButton::~PVZ2UISeedChooserPlantPotButton
          (PVZ2UISeedChooserPlantPotButton *this)

{
  ~PVZ2UISeedChooserPlantPotButton(this + -0x198);
  return;
}


/* PVZ2UISeedChooserPlantPotButton::~PVZ2UISeedChooserPlantPotButton() */

void __thiscall
PVZ2UISeedChooserPlantPotButton::~PVZ2UISeedChooserPlantPotButton
          (PVZ2UISeedChooserPlantPotButton *this)

{
  ~PVZ2UISeedChooserPlantPotButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ2UISeedChooserPlantPotButton::~PVZ2UISeedChooserPlantPotButton() */

void __thiscall
PVZ2UISeedChooserPlantPotButton::~PVZ2UISeedChooserPlantPotButton
          (PVZ2UISeedChooserPlantPotButton *this)

{
  ~PVZ2UISeedChooserPlantPotButton(this + -0x198);
  return;
}


/* PVZ2UISeedChooserPlantPotButton::PVZ2UISeedChooserPlantPotButton(int, Sexy::ButtonListener*,
   std::wstring const&, Sexy::Color const&) */

void __thiscall
PVZ2UISeedChooserPlantPotButton::PVZ2UISeedChooserPlantPotButton
          (PVZ2UISeedChooserPlantPotButton *this,int param_1,ButtonListener *param_2,
          wstring *param_3,Color *param_4)

{
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_GetClass_068397b0;
  *(undefined ***)(this + 0x198) = &PTR__PVZ2UISeedChooserPlantPotButton_06839b08;
  return;
}

