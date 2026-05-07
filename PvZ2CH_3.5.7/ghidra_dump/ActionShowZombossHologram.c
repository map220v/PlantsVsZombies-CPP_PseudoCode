// Class: ActionShowZombossHologram


/* ActionShowZombossHologram::~ActionShowZombossHologram() */

void __thiscall
ActionShowZombossHologram::~ActionShowZombossHologram(ActionShowZombossHologram *this)

{
  *(undefined ***)this = &PTR_GetClass_06858640;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionShowZombossHologram::~ActionShowZombossHologram() */

void __thiscall
ActionShowZombossHologram::~ActionShowZombossHologram(ActionShowZombossHologram *this)

{
  ~ActionShowZombossHologram(this);
  AK::FreeHook(this);
  return;
}


/* ActionShowZombossHologram::ActionShowZombossHologram() */

void __thiscall
ActionShowZombossHologram::ActionShowZombossHologram(ActionShowZombossHologram *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_06858640;
  return;
}


/* ActionShowZombossHologram::StaticNew() */

ActionShowZombossHologram * ActionShowZombossHologram::StaticNew(void)

{
  ActionShowZombossHologram *this;
  
  this = ::operator_new(0x20);
  ActionShowZombossHologram(this);
  return this;
}


/* ActionShowZombossHologram::Start() */

void __thiscall ActionShowZombossHologram::Start(ActionShowZombossHologram *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = PopAnimRig::IsPlayingAnything(*(PopAnimRig **)(this + 0x18));
  if (cVar1 == '\0') {
    lVar2 = LawnApp::GetWorldMap(gLawnApp);
    lVar2 = FUN_0454b28c(*(undefined8 *)(lVar2 + 0x2f0));
    EffectAnimRig_ZombossHologram::SelectAndBeginStateForWorld
              (*(EffectAnimRig_ZombossHologram **)(this + 0x18),(string *)(lVar2 + 0x38));
  }
  this[9] = (ActionShowZombossHologram)0x1;
  return;
}


/* ActionShowZombossHologram::StaticGetClass() */

long * ActionShowZombossHologram::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionShowZombossHologram",uVar2,StaticNew);
  return sClass;
}


/* ActionShowZombossHologram::GetClass() const */

long * ActionShowZombossHologram::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionShowZombossHologram",uVar2,StaticNew);
  return sClass;
}

