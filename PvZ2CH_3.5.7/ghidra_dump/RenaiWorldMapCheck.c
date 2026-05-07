// Class: RenaiWorldMapCheck


/* RenaiWorldMapCheck::~RenaiWorldMapCheck() */

void __thiscall RenaiWorldMapCheck::~RenaiWorldMapCheck(RenaiWorldMapCheck *this)

{
  *(undefined ***)this = &PTR_GetClass_0685a940;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* RenaiWorldMapCheck::~RenaiWorldMapCheck() */

void __thiscall RenaiWorldMapCheck::~RenaiWorldMapCheck(RenaiWorldMapCheck *this)

{
  ~RenaiWorldMapCheck(this);
  AK::FreeHook(this);
  return;
}


/* RenaiWorldMapCheck::StaticGetClass() */

long * RenaiWorldMapCheck::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RenaiWorldMapCheck",uVar2,StaticNew);
  return sClass;
}


/* RenaiWorldMapCheck::GetClass() const */

long * RenaiWorldMapCheck::GetClass(void)

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
  (*pcVar3)(plVar1,"RenaiWorldMapCheck",uVar2,StaticNew);
  return sClass;
}


/* RenaiWorldMapCheck::RenaiWorldMapCheck() */

void __thiscall RenaiWorldMapCheck::RenaiWorldMapCheck(RenaiWorldMapCheck *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685a940;
  return;
}


/* RenaiWorldMapCheck::StaticNew() */

RenaiWorldMapCheck * RenaiWorldMapCheck::StaticNew(void)

{
  RenaiWorldMapCheck *this;
  
  this = ::operator_new(0x18);
  RenaiWorldMapCheck(this);
  return this;
}


/* RenaiWorldMapCheck::CreateIfNeed(bool&) */

RenaiWorldMapCheck * RenaiWorldMapCheck::CreateIfNeed(bool *param_1)

{
  ProfileMgr *this;
  long lVar1;
  RenaiWorldMapCheck *this_00;
  
  if ((DAT_06b103c9 == '\0') && (*param_1 == false)) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar1 = ProfileMgr::GetCurrentProfile(this);
    if (lVar1 != 0) {
      if (DAT_06b103c9 == '\0') {
        DAT_06b103c9 = '\x01';
      }
      this_00 = ::operator_new(0x18);
      *(undefined8 *)this_00 = 0;
      this_00[8] = (RenaiWorldMapCheck)0x0;
      this_00[9] = (RenaiWorldMapCheck)0x0;
      this_00[10] = (RenaiWorldMapCheck)0x0;
      *(undefined4 *)(this_00 + 0xc) = 0;
      *(undefined4 *)(this_00 + 0x10) = 0;
      RenaiWorldMapCheck(this_00);
      return this_00;
    }
  }
  return (RenaiWorldMapCheck *)0x0;
}


/* RenaiWorldMapCheck::Start() */

void RenaiWorldMapCheck::Start(void)

{
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long *plVar3;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::GetWorldMapEventStatusByIds(this_00,'\x10',0x22);
    if (iVar1 - 3U < 2) {
      uVar2 = PlayerInfo::GetWorldMapEventStatusByIds(this_00,'\x10',0x19);
      PlayerInfo::SetWorldMapEventStatusByIds(this_00,0x10,0x19,iVar1);
      PlayerInfo::SetWorldMapEventStatusByIds(this_00,0x10,0x1a,uVar2);
      PlayerInfo::SetWorldMapEventStatusByIds(this_00,0x10,0x22,0);
      plVar3 = (long *)LawnApp::GetWorldMap(gLawnApp);
      if (plVar3 != (long *)0x0) {
        PlayerInfo::ResetStarTotal(this_00);
        (**(code **)(*plVar3 + 0x330))(plVar3);
        return;
      }
    }
  }
  return;
}

