// Class: ActionFestivalEntrancePrompt


/* ActionFestivalEntrancePrompt::~ActionFestivalEntrancePrompt() */

void __thiscall
ActionFestivalEntrancePrompt::~ActionFestivalEntrancePrompt(ActionFestivalEntrancePrompt *this)

{
  *(undefined ***)this = &PTR_GetClass_06858c40;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionFestivalEntrancePrompt::~ActionFestivalEntrancePrompt() */

void __thiscall
ActionFestivalEntrancePrompt::~ActionFestivalEntrancePrompt(ActionFestivalEntrancePrompt *this)

{
  ~ActionFestivalEntrancePrompt(this);
  AK::FreeHook(this);
  return;
}


/* ActionFestivalEntrancePrompt::ActionFestivalEntrancePrompt() */

void __thiscall
ActionFestivalEntrancePrompt::ActionFestivalEntrancePrompt(ActionFestivalEntrancePrompt *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858c40;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


/* ActionFestivalEntrancePrompt::StaticNew() */

ActionFestivalEntrancePrompt * ActionFestivalEntrancePrompt::StaticNew(void)

{
  ActionFestivalEntrancePrompt *this;
  
  this = ::operator_new(0x18);
  ActionFestivalEntrancePrompt(this);
  return this;
}


/* ActionFestivalEntrancePrompt::StaticGetClass() */

long * ActionFestivalEntrancePrompt::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionFestivalEntrancePrompt",uVar2,StaticNew);
  return sClass;
}


/* ActionFestivalEntrancePrompt::GetClass() const */

long * ActionFestivalEntrancePrompt::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionFestivalEntrancePrompt",uVar2,StaticNew);
  return sClass;
}

