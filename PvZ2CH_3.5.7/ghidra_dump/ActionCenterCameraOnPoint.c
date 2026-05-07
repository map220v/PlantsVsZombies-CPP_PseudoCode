// Class: ActionCenterCameraOnPoint


/* ActionCenterCameraOnPoint::~ActionCenterCameraOnPoint() */

void __thiscall
ActionCenterCameraOnPoint::~ActionCenterCameraOnPoint(ActionCenterCameraOnPoint *this)

{
  *(undefined ***)this = &PTR_GetClass_068584c0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionCenterCameraOnPoint::~ActionCenterCameraOnPoint() */

void __thiscall
ActionCenterCameraOnPoint::~ActionCenterCameraOnPoint(ActionCenterCameraOnPoint *this)

{
  ~ActionCenterCameraOnPoint(this);
  AK::FreeHook(this);
  return;
}


/* ActionCenterCameraOnPoint::StaticGetClass() */

long * ActionCenterCameraOnPoint::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionCenterCameraOnPoint",uVar2,StaticNew);
  return sClass;
}


/* ActionCenterCameraOnPoint::GetClass() const */

long * ActionCenterCameraOnPoint::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionCenterCameraOnPoint",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionCenterCameraOnPoint::Start() */

void __thiscall ActionCenterCameraOnPoint::Start(ActionCenterCameraOnPoint *this)

{
  long lVar1;
  WorldMap *pWVar2;
  FPoint aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pWVar2 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  Sexy::FPoint::FPoint(aFStack_10,(TPoint *)(this + 0x14));
  WorldMap::ScrollToPosition(pWVar2,aFStack_10);
  lVar1 = ___stack_chk_guard;
  this[9] = (ActionCenterCameraOnPoint)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActionCenterCameraOnPoint::ActionCenterCameraOnPoint() */

void __thiscall
ActionCenterCameraOnPoint::ActionCenterCameraOnPoint(ActionCenterCameraOnPoint *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_068584c0;
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x14));
  return;
}


/* ActionCenterCameraOnPoint::StaticNew() */

ActionCenterCameraOnPoint * ActionCenterCameraOnPoint::StaticNew(void)

{
  ActionCenterCameraOnPoint *this;
  
  this = ::operator_new(0x20);
  ActionCenterCameraOnPoint(this);
  return this;
}

