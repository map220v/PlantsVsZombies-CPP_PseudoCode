// Class: ActionAllowUserInput


/* ActionAllowUserInput::~ActionAllowUserInput() */

void __thiscall ActionAllowUserInput::~ActionAllowUserInput(ActionAllowUserInput *this)

{
  *(undefined ***)this = &PTR_GetClass_068583c0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionAllowUserInput::~ActionAllowUserInput() */

void __thiscall ActionAllowUserInput::~ActionAllowUserInput(ActionAllowUserInput *this)

{
  ~ActionAllowUserInput(this);
  AK::FreeHook(this);
  return;
}


/* ActionAllowUserInput::ActionAllowUserInput() */

void __thiscall ActionAllowUserInput::ActionAllowUserInput(ActionAllowUserInput *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  this[0x14] = (ActionAllowUserInput)0x1;
  *(undefined ***)this = &PTR_GetClass_068583c0;
  return;
}


/* ActionAllowUserInput::StaticNew() */

ActionAllowUserInput * ActionAllowUserInput::StaticNew(void)

{
  ActionAllowUserInput *this;
  
  this = ::operator_new(0x18);
  ActionAllowUserInput(this);
  return this;
}


/* ActionAllowUserInput::ActionAllowUserInput(bool) */

void __thiscall ActionAllowUserInput::ActionAllowUserInput(ActionAllowUserInput *this,bool param_1)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  this[0x14] = (ActionAllowUserInput)param_1;
  *(undefined ***)this = &PTR_GetClass_068583c0;
  return;
}


/* ActionAllowUserInput::Start() */

void __thiscall ActionAllowUserInput::Start(ActionAllowUserInput *this)

{
  long lVar1;
  
  lVar1 = LawnApp::GetWorldMap(gLawnApp);
  FUN_0454b284(lVar1 + 0x356,this[0x14]);
  this[9] = (ActionAllowUserInput)0x1;
  return;
}


/* ActionAllowUserInput::StaticGetClass() */

long * ActionAllowUserInput::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionAllowUserInput",uVar2,StaticNew);
  return sClass;
}


/* ActionAllowUserInput::GetClass() const */

long * ActionAllowUserInput::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionAllowUserInput",uVar2,StaticNew);
  return sClass;
}


/* ActionAllowUserInput::CreateIfNeed(bool&, bool) */

ActionAllowUserInput * ActionAllowUserInput::CreateIfNeed(bool *param_1,bool param_2)

{
  ActionAllowUserInput *this;
  
  this = ::operator_new(0x18);
  ActionAllowUserInput(this,param_2);
  return this;
}

