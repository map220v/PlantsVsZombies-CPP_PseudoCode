// Class: ActionShowRatingDialog


/* ActionShowRatingDialog::~ActionShowRatingDialog() */

void __thiscall ActionShowRatingDialog::~ActionShowRatingDialog(ActionShowRatingDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_06858d40;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionShowRatingDialog::~ActionShowRatingDialog() */

void __thiscall ActionShowRatingDialog::~ActionShowRatingDialog(ActionShowRatingDialog *this)

{
  ~ActionShowRatingDialog(this);
  AK::FreeHook(this);
  return;
}


/* ActionShowRatingDialog::Start() */

void __thiscall ActionShowRatingDialog::Start(ActionShowRatingDialog *this)

{
  nop();
  this[9] = (ActionShowRatingDialog)0x1;
  return;
}


/* ActionShowRatingDialog::StaticGetClass() */

long * ActionShowRatingDialog::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionShowRatingDialog",uVar2,StaticNew);
  return sClass;
}


/* ActionShowRatingDialog::GetClass() const */

long * ActionShowRatingDialog::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionShowRatingDialog",uVar2,StaticNew);
  return sClass;
}


/* ActionShowRatingDialog::ActionShowRatingDialog() */

void __thiscall ActionShowRatingDialog::ActionShowRatingDialog(ActionShowRatingDialog *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858d40;
  return;
}


/* ActionShowRatingDialog::StaticNew() */

ActionShowRatingDialog * ActionShowRatingDialog::StaticNew(void)

{
  ActionShowRatingDialog *this;
  
  this = ::operator_new(0x18);
  ActionShowRatingDialog(this);
  return this;
}

