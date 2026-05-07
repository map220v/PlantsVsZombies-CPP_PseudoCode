// Class: ActionDangerRoomSpecialOfferCheck


/* ActionDangerRoomSpecialOfferCheck::~ActionDangerRoomSpecialOfferCheck() */

void __thiscall
ActionDangerRoomSpecialOfferCheck::~ActionDangerRoomSpecialOfferCheck
          (ActionDangerRoomSpecialOfferCheck *this)

{
  *(undefined ***)this = &PTR_GetClass_0685ac40;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionDangerRoomSpecialOfferCheck::~ActionDangerRoomSpecialOfferCheck() */

void __thiscall
ActionDangerRoomSpecialOfferCheck::~ActionDangerRoomSpecialOfferCheck
          (ActionDangerRoomSpecialOfferCheck *this)

{
  ~ActionDangerRoomSpecialOfferCheck(this);
  AK::FreeHook(this);
  return;
}


/* ActionDangerRoomSpecialOfferCheck::StaticGetClass() */

long * ActionDangerRoomSpecialOfferCheck::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionDangerRoomSpecialOfferCheck",uVar2,StaticNew);
  return sClass;
}


/* ActionDangerRoomSpecialOfferCheck::GetClass() const */

long * ActionDangerRoomSpecialOfferCheck::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionDangerRoomSpecialOfferCheck",uVar2,StaticNew);
  return sClass;
}


/* ActionDangerRoomSpecialOfferCheck::ActionDangerRoomSpecialOfferCheck() */

void __thiscall
ActionDangerRoomSpecialOfferCheck::ActionDangerRoomSpecialOfferCheck
          (ActionDangerRoomSpecialOfferCheck *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685ac40;
  return;
}


/* ActionDangerRoomSpecialOfferCheck::StaticNew() */

ActionDangerRoomSpecialOfferCheck * ActionDangerRoomSpecialOfferCheck::StaticNew(void)

{
  ActionDangerRoomSpecialOfferCheck *this;
  
  this = ::operator_new(0x18);
  ActionDangerRoomSpecialOfferCheck(this);
  return this;
}


/* ActionDangerRoomSpecialOfferCheck::CreateIfNeed(bool&) */

ActionDangerRoomSpecialOfferCheck * ActionDangerRoomSpecialOfferCheck::CreateIfNeed(bool *param_1)

{
  ActionDangerRoomSpecialOfferCheck *this;
  
  if (*param_1 == false) {
    this = ::operator_new(0x18);
    this[8] = (ActionDangerRoomSpecialOfferCheck)0x0;
    this[9] = (ActionDangerRoomSpecialOfferCheck)0x0;
    this[10] = (ActionDangerRoomSpecialOfferCheck)0x0;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined8 *)this = 0;
    ActionDangerRoomSpecialOfferCheck(this);
    return this;
  }
  return (ActionDangerRoomSpecialOfferCheck *)0x0;
}


/* ActionDangerRoomSpecialOfferCheck::Start() */

void ActionDangerRoomSpecialOfferCheck::Start(void)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  int local_8;
  undefined4 uStack_4;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  cVar1 = CheckShowDangerRoomSpecialOfferUI(pPVar2);
  if (cVar1 == '\0') {
    return;
  }
  PlayerInfo::GetDangerRoomSpecialOfferSaveData();
  local_8 = local_8 + 1;
  local_30 = CONCAT44(uStack_4,local_8);
  local_40 = local_18;
  uStack_38 = uStack_10;
  PlayerInfo::SetDangerRoomSpecialOfferSaveData(pPVar2,&local_40,1);
  DangerRoomSpecialOfferUI::RequestNetwork();
  lVar3 = Sexy::LazySingleton<DangerRoomOfferMgr>::GetInstance();
  FUN_0454b354(lVar3 + 0x28);
  return;
}

