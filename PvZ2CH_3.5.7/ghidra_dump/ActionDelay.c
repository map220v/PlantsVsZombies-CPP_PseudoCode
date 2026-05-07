// Class: ActionDelay


/* ActionDelay::~ActionDelay() */

void __thiscall ActionDelay::~ActionDelay(ActionDelay *this)

{
  *(undefined ***)this = &PTR_GetClass_06858440;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionDelay::~ActionDelay() */

void __thiscall ActionDelay::~ActionDelay(ActionDelay *this)

{
  ~ActionDelay(this);
  AK::FreeHook(this);
  return;
}


/* ActionDelay::ActionDelay() */

void __thiscall ActionDelay::ActionDelay(ActionDelay *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858440;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


/* ActionDelay::StaticNew() */

ActionDelay * ActionDelay::StaticNew(void)

{
  ActionDelay *this;
  
  this = ::operator_new(0x18);
  ActionDelay(this);
  return this;
}


/* ActionDelay::ActionDelay(float) */

void __thiscall ActionDelay::ActionDelay(ActionDelay *this,float param_1)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858440;
  *(float *)(this + 0x14) = param_1;
  return;
}


/* ActionDelay::StaticGetClass() */

long * ActionDelay::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionDelay",uVar2,StaticNew);
  return sClass;
}


/* ActionDelay::GetClass() const */

long * ActionDelay::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionDelay",uVar2,StaticNew);
  return sClass;
}


/* ActionDelay::CreateIfNeed(float) */

ActionDelay * ActionDelay::CreateIfNeed(float param_1)

{
  ActionDelay *this;
  
  this = ::operator_new(0x18);
  ActionDelay(this,param_1);
  return this;
}


/* ActionDelay::Start() */

void __thiscall ActionDelay::Start(ActionDelay *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x14) = *(float *)(this + 0x14) + fVar1;
  return;
}


/* ActionDelay::Update() */

void __thiscall ActionDelay::Update(ActionDelay *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x14) <= fVar1) {
    this[9] = (ActionDelay)0x1;
  }
  return;
}

