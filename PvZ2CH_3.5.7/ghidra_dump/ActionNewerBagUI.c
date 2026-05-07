// Class: ActionNewerBagUI


/* ActionNewerBagUI::~ActionNewerBagUI() */

void __thiscall ActionNewerBagUI::~ActionNewerBagUI(ActionNewerBagUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06858ac0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionNewerBagUI::~ActionNewerBagUI() */

void __thiscall ActionNewerBagUI::~ActionNewerBagUI(ActionNewerBagUI *this)

{
  ~ActionNewerBagUI(this);
  AK::FreeHook(this);
  return;
}


/* ActionNewerBagUI::Start() */

void __thiscall ActionNewerBagUI::Start(ActionNewerBagUI *this)

{
  LawnApp::ShowGetNewerBagUI(gLawnApp,true,true);
  this[9] = (ActionNewerBagUI)0x1;
  return;
}


/* ActionNewerBagUI::StaticGetClass() */

long * ActionNewerBagUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionNewerBagUI",uVar2,StaticNew);
  return sClass;
}


/* ActionNewerBagUI::GetClass() const */

long * ActionNewerBagUI::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionNewerBagUI",uVar2,StaticNew);
  return sClass;
}


/* ActionNewerBagUI::ActionNewerBagUI() */

void __thiscall ActionNewerBagUI::ActionNewerBagUI(ActionNewerBagUI *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858ac0;
  return;
}


/* ActionNewerBagUI::StaticNew() */

ActionNewerBagUI * ActionNewerBagUI::StaticNew(void)

{
  ActionNewerBagUI *this;
  
  this = ::operator_new(0x18);
  ActionNewerBagUI(this);
  return this;
}

