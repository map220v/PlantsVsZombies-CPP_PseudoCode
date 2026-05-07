// Class: ActionClearFakeGem


/* ActionClearFakeGem::~ActionClearFakeGem() */

void __thiscall ActionClearFakeGem::~ActionClearFakeGem(ActionClearFakeGem *this)

{
  *(undefined ***)this = &PTR_GetClass_06859b40;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionClearFakeGem::~ActionClearFakeGem() */

void __thiscall ActionClearFakeGem::~ActionClearFakeGem(ActionClearFakeGem *this)

{
  ~ActionClearFakeGem(this);
  AK::FreeHook(this);
  return;
}


/* ActionClearFakeGem::Start() */

void __thiscall ActionClearFakeGem::Start(ActionClearFakeGem *this)

{
  int iVar1;
  PlayerInfo *this_00;
  
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  if ((this_00 != (PlayerInfo *)0x0) &&
     (iVar1 = PlayerInfo::GetNumGems(this_00,false), 0x1869e < iVar1)) {
    PlayerInfo::SetGems(this_00,0);
    PlayerInfo::SetGiveGems(this_00,0);
    PlayerInfo::ClearPlantStarLevel(this_00);
    PlayerInfo::SAVE_PROFILE(this_00);
  }
  this[9] = (ActionClearFakeGem)0x1;
  return;
}


/* ActionClearFakeGem::StaticGetClass() */

long * ActionClearFakeGem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionClearFakeGem",uVar2,StaticNew);
  return sClass;
}


/* ActionClearFakeGem::GetClass() const */

long * ActionClearFakeGem::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionClearFakeGem",uVar2,StaticNew);
  return sClass;
}


/* ActionClearFakeGem::ActionClearFakeGem() */

void __thiscall ActionClearFakeGem::ActionClearFakeGem(ActionClearFakeGem *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859b40;
  return;
}


/* ActionClearFakeGem::StaticNew() */

ActionClearFakeGem * ActionClearFakeGem::StaticNew(void)

{
  ActionClearFakeGem *this;
  
  this = ::operator_new(0x18);
  ActionClearFakeGem(this);
  return this;
}


/* ActionClearFakeGem::CreateIfNeed() */

undefined8 ActionClearFakeGem::CreateIfNeed(void)

{
  ActionClearFakeGem *this;
  
  this = ::operator_new(0x18);
  *(undefined8 *)this = 0;
  this[8] = (ActionClearFakeGem)0x0;
  this[9] = (ActionClearFakeGem)0x0;
  this[10] = (ActionClearFakeGem)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  ActionClearFakeGem(this);
  return 0;
}

