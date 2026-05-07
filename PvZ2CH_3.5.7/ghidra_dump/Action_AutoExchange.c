// Class: Action_AutoExchange


/* Action_AutoExchange::~Action_AutoExchange() */

void __thiscall Action_AutoExchange::~Action_AutoExchange(Action_AutoExchange *this)

{
  *(undefined ***)this = &PTR_GetClass_0685a240;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_AutoExchange::~Action_AutoExchange() */

void __thiscall Action_AutoExchange::~Action_AutoExchange(Action_AutoExchange *this)

{
  ~Action_AutoExchange(this);
  AK::FreeHook(this);
  return;
}


/* Action_AutoExchange::StaticGetClass() */

long * Action_AutoExchange::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_AutoExchange",uVar2,StaticNew);
  return sClass;
}


/* Action_AutoExchange::GetClass() const */

long * Action_AutoExchange::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_AutoExchange",uVar2,StaticNew);
  return sClass;
}


/* Action_AutoExchange::Action_AutoExchange() */

void __thiscall Action_AutoExchange::Action_AutoExchange(Action_AutoExchange *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685a240;
  return;
}


/* Action_AutoExchange::StaticNew() */

Action_AutoExchange * Action_AutoExchange::StaticNew(void)

{
  Action_AutoExchange *this;
  
  this = ::operator_new(0x18);
  Action_AutoExchange(this);
  return this;
}


/* Action_AutoExchange::CreateIfNeed(bool&) */

Action_AutoExchange * Action_AutoExchange::CreateIfNeed(bool *param_1)

{
  char cVar1;
  ProfileMgr *this;
  long lVar2;
  Action_AutoExchange *this_00;
  
  if (*param_1 == false) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar2 = ProfileMgr::GetCurrentProfile(this);
    if (((lVar2 != 0) && (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')) &&
       (DAT_06b106c8 == '\0')) {
      DAT_06b106c8 = 1;
      this_00 = ::operator_new(0x18);
      this_00[8] = (Action_AutoExchange)0x0;
      this_00[9] = (Action_AutoExchange)0x0;
      this_00[10] = (Action_AutoExchange)0x0;
      *(undefined4 *)(this_00 + 0xc) = 0;
      *(undefined4 *)(this_00 + 0x10) = 0;
      *(undefined8 *)this_00 = 0;
      Action_AutoExchange(this_00);
      return this_00;
    }
  }
  return (Action_AutoExchange *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_AutoExchange::Start() */

void __thiscall Action_AutoExchange::Start(Action_AutoExchange *this)

{
  DNetwork *pDVar1;
  string asStack_da0 [8];
  function<bool(Sexy::Touch_const&)> afStack_d98 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d78 [48];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d48 [48];
  string asStack_d18 [48];
  _PacketId a_Stack_ce8 [3112];
  string asStack_c0 [24];
  string asStack_a8 [112];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d78);
  pDVar1 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_0454d960(afStack_d98);
  std::string::string(asStack_d18,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (pDVar1,asStack_c0,(map *)amStack_d78,30.0,(function *)afStack_d98,true,true,asStack_d18
             ,0);
  std::string::~string(asStack_d18);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d98);
  _PacketId::~_PacketId(a_Stack_ce8);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d48);
  pDVar1 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_0454d9ac(afStack_d98);
  std::string::string(asStack_d18,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (pDVar1,asStack_a8,(map *)amStack_d48,30.0,(function *)afStack_d98,true,true,asStack_d18
             ,0);
  std::string::~string(asStack_d18);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d98);
  _PacketId::~_PacketId(a_Stack_ce8);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)asStack_d18);
  pDVar1 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_0454d9f8(afStack_d98);
  std::string::string(asStack_da0,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (pDVar1,asStack_38,(map *)asStack_d18,30.0,(function *)afStack_d98,true,true,asStack_da0
             ,0);
  std::string::~string(asStack_da0);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d98);
  _PacketId::~_PacketId(a_Stack_ce8);
  pDVar1 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  std::string::string(asStack_da0,"V1083");
  FUN_0454da44(afStack_d98);
  std::string::string((string *)a_Stack_ce8,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (pDVar1,asStack_da0,(map *)asStack_d18,30.0,(function *)afStack_d98,true,true,
             (string *)a_Stack_ce8,0);
  std::string::~string((string *)a_Stack_ce8);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d98);
  std::string::~string(asStack_da0);
  nop();
  (**(code **)(*(long *)this + 0x58))(this);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)asStack_d18);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d48);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

