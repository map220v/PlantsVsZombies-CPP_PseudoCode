// Class: ActivityCollectionTabBase


/* ActivityCollectionTabBase::ActivityCollectionTabBase() */

void __thiscall
ActivityCollectionTabBase::ActivityCollectionTabBase(ActivityCollectionTabBase *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_nop_066256e0;
  this[0x20] = (ActivityCollectionTabBase)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (ActivityCollectionTabBase)0x1;
  return;
}


/* ActivityCollectionTabBase::InitView(int, PVZ2UIButton*, Sexy::Widget*) */

void __thiscall
ActivityCollectionTabBase::InitView
          (ActivityCollectionTabBase *this,int param_1,PVZ2UIButton *param_2,Widget *param_3)

{
  *(int *)(this + 8) = param_1;
  *(PVZ2UIButton **)(this + 0x10) = param_2;
  *(Widget **)(this + 0x18) = param_3;
  return;
}


/* ActivityCollectionTabBase::SetSelect(bool) */

void __thiscall ActivityCollectionTabBase::SetSelect(ActivityCollectionTabBase *this,bool param_1)

{
  char cVar1;
  long *plVar2;
  PVZ2UIButton *this_00;
  
  this_00 = *(PVZ2UIButton **)(this + 0x10);
  if (this_00 != (PVZ2UIButton *)0x0) {
    if ((param_1) && (cVar1 = FUN_0341e944(this_00[0x1a8]), cVar1 == '\0')) {
      PVZ2UIButton::SetRadioButtonSelected(this_00);
    }
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x158))(plVar2,param_1);
    }
  }
  return;
}


/* ActivityCollectionTabBase::SetTabContainer(ActivityCollectionContainer*) */

void __thiscall
ActivityCollectionTabBase::SetTabContainer
          (ActivityCollectionTabBase *this,ActivityCollectionContainer *param_1)

{
  *(ActivityCollectionContainer **)(this + 0x28) = param_1;
  return;
}

