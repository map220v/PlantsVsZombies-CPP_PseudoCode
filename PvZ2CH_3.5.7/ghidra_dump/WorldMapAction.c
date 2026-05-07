// Class: WorldMapAction


/* WorldMapAction::Init() */

void __thiscall WorldMapAction::Init(WorldMapAction *this)

{
  this[8] = (WorldMapAction)0x1;
  (**(code **)(*(long *)this + 0x48))();
  return;
}


/* WorldMapAction::~WorldMapAction() */

void __thiscall WorldMapAction::~WorldMapAction(WorldMapAction *this)

{
  *(undefined ***)this = &PTR_GetClass_06858340;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  nop();
  return;
}


/* WorldMapAction::~WorldMapAction() */

void __thiscall WorldMapAction::~WorldMapAction(WorldMapAction *this)

{
  ~WorldMapAction(this);
  AK::FreeHook(this);
  return;
}


/* WorldMapAction::WorldMapAction() */

void __thiscall WorldMapAction::WorldMapAction(WorldMapAction *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  this[8] = (WorldMapAction)0x0;
  this[9] = (WorldMapAction)0x0;
  *(undefined ***)this = &PTR_GetClass_06858340;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  return;
}


/* WorldMapAction::StaticNew() */

WorldMapAction * WorldMapAction::StaticNew(void)

{
  WorldMapAction *this;
  
  this = ::operator_new(0x18);
  WorldMapAction(this);
  return this;
}


/* WorldMapAction::StaticGetClass() */

long * WorldMapAction::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMapAction",uVar2,StaticNew);
  return sClass;
}


/* WorldMapAction::GetClass() const */

long * WorldMapAction::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMapAction",uVar2,StaticNew);
  return sClass;
}


/* WorldMapAction::DisableInput() */

void __thiscall WorldMapAction::DisableInput(WorldMapAction *this)

{
  WorldMapAction WVar1;
  WorldMap *this_00;
  
  this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  WVar1 = (WorldMapAction)WorldMap::IsUserInputEnabled(this_00);
  this[10] = WVar1;
  FUN_0454b284(this_00 + 0x356,0);
  return;
}


/* WorldMapAction::RestorePrevInput() */

void __thiscall WorldMapAction::RestorePrevInput(WorldMapAction *this)

{
  long lVar1;
  
  lVar1 = LawnApp::GetWorldMap(gLawnApp);
  FUN_0454b284(lVar1 + 0x356,this[10]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapAction::GetActionName() */

void WorldMapAction::GetActionName(void)

{
  long lVar1;
  undefined8 *in_x0;
  long lVar2;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  lVar2 = (**(code **)*in_x0)();
  __s = (char *)FUN_0454b224(*(undefined8 *)(lVar2 + 8));
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

