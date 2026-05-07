// Class: ActionNewplayerActivityCollectionActivate


/* ActionNewplayerActivityCollectionActivate::~ActionNewplayerActivityCollectionActivate() */

void __thiscall
ActionNewplayerActivityCollectionActivate::~ActionNewplayerActivityCollectionActivate
          (ActionNewplayerActivityCollectionActivate *this)

{
  *(undefined ***)this = &PTR_GetClass_0685b0c0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionNewplayerActivityCollectionActivate::~ActionNewplayerActivityCollectionActivate() */

void __thiscall
ActionNewplayerActivityCollectionActivate::~ActionNewplayerActivityCollectionActivate
          (ActionNewplayerActivityCollectionActivate *this)

{
  ~ActionNewplayerActivityCollectionActivate(this);
  AK::FreeHook(this);
  return;
}


/* ActionNewplayerActivityCollectionActivate::StaticGetClass() */

long * ActionNewplayerActivityCollectionActivate::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionNewplayerActivityCollectionActivate",uVar2,StaticNew);
  return sClass;
}


/* ActionNewplayerActivityCollectionActivate::GetClass() const */

long * ActionNewplayerActivityCollectionActivate::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionNewplayerActivityCollectionActivate",uVar2,StaticNew);
  return sClass;
}


/* ActionNewplayerActivityCollectionActivate::ActionNewplayerActivityCollectionActivate() */

void __thiscall
ActionNewplayerActivityCollectionActivate::ActionNewplayerActivityCollectionActivate
          (ActionNewplayerActivityCollectionActivate *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685b0c0;
  return;
}


/* ActionNewplayerActivityCollectionActivate::StaticNew() */

ActionNewplayerActivityCollectionActivate *
ActionNewplayerActivityCollectionActivate::StaticNew(void)

{
  ActionNewplayerActivityCollectionActivate *this;
  
  this = ::operator_new(0x18);
  ActionNewplayerActivityCollectionActivate(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionNewplayerActivityCollectionActivate::CreateIfNeed(bool&) */

void ActionNewplayerActivityCollectionActivate::CreateIfNeed(bool *param_1)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  ActionNewplayerActivityCollectionActivate *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    if (this_00 != (PlayerInfo *)0x0) {
      std::string::string(asStack_10,"egypt2");
      cVar1 = PlayerInfo::GetLevelCompleted(this_00,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (cVar1 != '\0') {
        this_01 = ::operator_new(0x18);
        *(undefined8 *)this_01 = 0;
        this_01[8] = (ActionNewplayerActivityCollectionActivate)0x0;
        this_01[9] = (ActionNewplayerActivityCollectionActivate)0x0;
        this_01[10] = (ActionNewplayerActivityCollectionActivate)0x0;
        *(undefined4 *)(this_01 + 0xc) = 0;
        *(undefined4 *)(this_01 + 0x10) = 0;
        ActionNewplayerActivityCollectionActivate(this_01);
        goto LAB_04555e88;
      }
    }
  }
  this_01 = (ActionNewplayerActivityCollectionActivate *)0x0;
LAB_04555e88:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionNewplayerActivityCollectionActivate::Start() */

void __thiscall
ActionNewplayerActivityCollectionActivate::Start(ActionNewplayerActivityCollectionActivate *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  DNetwork *pDVar4;
  string asStack_e08 [8];
  function<bool(Sexy::Touch_const&)> afStack_e00 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_de0 [48];
  ActivityCollectionData aAStack_db0 [64];
  int local_d70;
  ActiveItem aAStack_d68 [8];
  undefined4 local_d60;
  char local_d50;
  string asStack_ce8 [2072];
  string asStack_4d0 [936];
  string asStack_128 [16];
  string asStack_118 [16];
  string asStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_de0);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  ActivityCollectionData::ActivityCollectionData(aAStack_db0);
  cVar1 = ActiveItem::GetDataSerialized(aAStack_d68,(RtObject *)aAStack_db0);
  cVar2 = FUN_0454b298(local_d60);
  if ((((cVar2 != '\0') && (cVar1 != '\0')) && (local_d50 != '\0')) && (local_d70 != 0)) {
    std::string::string(asStack_ce8,"egypt2");
    cVar1 = PlayerInfo::GetLevelCompleted(this_01,asStack_ce8);
    std::string::~string(asStack_ce8);
    nop();
    if (cVar1 != '\0') {
      cVar1 = ActivityCollectionData::IsActivityClose(aAStack_db0,0x2a7b);
      if (cVar1 == '\0') {
        pDVar4 = (DNetwork *)DSingleton<DNetwork>::getInstance();
        _PacketId::_PacketId((_PacketId *)asStack_ce8);
        FUN_0454da90(afStack_e00,this);
        std::string::string(asStack_e08,"[NET_CONNECTING]");
        DNetwork::requestMsg
                  (pDVar4,asStack_128,(map *)amStack_de0,30.0,(function *)afStack_e00,true,true,
                   asStack_e08,0);
        std::string::~string(asStack_e08);
        nop();
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_e00);
        _PacketId::~_PacketId((_PacketId *)asStack_ce8);
      }
      cVar1 = ActivityCollectionData::IsActivityClose(aAStack_db0,0x2a4c);
      if (cVar1 == '\0') {
        pDVar4 = (DNetwork *)DSingleton<DNetwork>::getInstance();
        _PacketId::_PacketId((_PacketId *)asStack_ce8);
        FUN_0454daec(afStack_e00,this);
        std::string::string(asStack_e08,"[NET_CONNECTING]");
        DNetwork::requestMsg
                  (pDVar4,asStack_4d0,(map *)amStack_de0,30.0,(function *)afStack_e00,true,true,
                   asStack_e08,0);
        std::string::~string(asStack_e08);
        nop();
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_e00);
        _PacketId::~_PacketId((_PacketId *)asStack_ce8);
      }
      cVar1 = ActivityCollectionData::IsActivityClose(aAStack_db0,0x2a7c);
      if (cVar1 == '\0') {
        pDVar4 = (DNetwork *)DSingleton<DNetwork>::getInstance();
        _PacketId::_PacketId((_PacketId *)asStack_ce8);
        FUN_0454db48(afStack_e00,this);
        std::string::string(asStack_e08,"[NET_CONNECTING]");
        DNetwork::requestMsg
                  (pDVar4,asStack_108,(map *)amStack_de0,30.0,(function *)afStack_e00,true,true,
                   asStack_e08,0);
        std::string::~string(asStack_e08);
        nop();
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_e00);
        _PacketId::~_PacketId((_PacketId *)asStack_ce8);
      }
    }
    std::string::string(asStack_ce8,"egypt8");
    cVar1 = PlayerInfo::GetLevelCompleted(this_01,asStack_ce8);
    std::string::~string(asStack_ce8);
    nop();
    if (cVar1 != '\0') {
      cVar1 = ActivityCollectionData::IsActivityClose(aAStack_db0,0x2a7d);
      if (cVar1 == '\0') {
        pDVar4 = (DNetwork *)DSingleton<DNetwork>::getInstance();
        _PacketId::_PacketId((_PacketId *)asStack_ce8);
        FUN_0454dba4(afStack_e00,this);
        std::string::string(asStack_e08,"[NET_CONNECTING]");
        DNetwork::requestMsg
                  (pDVar4,asStack_118,(map *)amStack_de0,30.0,(function *)afStack_e00,true,true,
                   asStack_e08,0);
        std::string::~string(asStack_e08);
        nop();
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_e00);
        _PacketId::~_PacketId((_PacketId *)asStack_ce8);
      }
    }
  }
  this[9] = (ActionNewplayerActivityCollectionActivate)0x1;
  ActivityCollectionData::~ActivityCollectionData(aAStack_db0);
  ActiveItem::~ActiveItem(aAStack_d68);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_de0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

