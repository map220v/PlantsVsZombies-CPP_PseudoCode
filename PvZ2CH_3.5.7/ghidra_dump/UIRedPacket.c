// Class: UIRedPacket


/* UIRedPacket::onMsgErrorRequest(int, std::string const&) */

int UIRedPacket::onMsgErrorRequest(int param_1,string *param_2)

{
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacket::Initialize() */

void __thiscall UIRedPacket::Initialize(UIRedPacket *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (m_eventType == 0) {
    std::string::string(asStack_10,"UIRedPacket");
    DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
  }
  else if (m_eventType == 1) {
    std::string::string(asStack_10,"UIDumpling");
    DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
  }
  s_isActive = 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIRedPacket::UIRedPacket() */

void __thiscall UIRedPacket::UIRedPacket(UIRedPacket *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined ***)this = &PTR_GetClass_06771210;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  this[0x140] = (UIRedPacket)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UIRedPacket,void(UIRedPacket::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* UIRedPacket::create(bool, FestivalEventType) */

UIRedPacket * UIRedPacket::create(undefined1 param_1,undefined4 param_2)

{
  UIRedPacket *this;
  
  if (s_pWidgetHandler != (UIRedPacket *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x148);
  UIRedPacket(this);
  m_eventType = param_2;
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_1);
  s_pWidgetHandler = this;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacket::updateNewNetInfo() */

void __thiscall UIRedPacket::updateNewNetInfo(UIRedPacket *this)

{
  exception_ptr *this_00;
  bool bVar1;
  long *plVar2;
  DTransformNode *pDVar3;
  DTransformNode *this_01;
  vector *pvVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (exception_ptr *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  pcVar6 = *(code **)(*plVar2 + 0x58);
  std::string::string((string *)&local_10,"frame_open");
  pDVar3 = (DTransformNode *)(*pcVar6)(plVar2,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  pcVar6 = *(code **)(*plVar2 + 0x58);
  std::string::string((string *)&local_10,"frame_open2");
  this_01 = (DTransformNode *)(*pcVar6)(plVar2,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if (*(code **)(*(long *)pDVar3 + 0x228) == DTransformNode::getChildren) {
    pvVar4 = (vector *)DTransformNode::getChildren(pDVar3);
  }
  else {
    pvVar4 = (vector *)(**(code **)(*(long *)pDVar3 + 0x228))();
  }
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(pvVar4);
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar4);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar5 + 0xd8))((long *)*puVar5,0);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (*(code **)(*(long *)this_01 + 0x228) == DTransformNode::getChildren) {
    pvVar4 = (vector *)DTransformNode::getChildren(this_01);
  }
  else {
    pvVar4 = (vector *)(**(code **)(*(long *)this_01 + 0x228))();
  }
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(pvVar4);
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar4);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar5 + 0xd8))((long *)*puVar5,0);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  (**(code **)(*(long *)pDVar3 + 0xd8))(pDVar3,0);
  (**(code **)(*(long *)this_01 + 0xd8))(this_01,bVar1);
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  pcVar6 = *(code **)(*plVar2 + 0x58);
  std::string::string((string *)&local_10,"frame");
  pDVar3 = (DTransformNode *)(*pcVar6)(plVar2,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if (*(code **)(*(long *)pDVar3 + 0x228) == DTransformNode::getChildren) {
    pvVar4 = (vector *)DTransformNode::getChildren(pDVar3);
  }
  else {
    pvVar4 = (vector *)(**(code **)(*(long *)pDVar3 + 0x228))();
  }
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(pvVar4);
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar4);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar5 + 0xd8))((long *)*puVar5,0);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  (**(code **)(*(long *)pDVar3 + 0xd8))(pDVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacket::setUnactive() */

void __thiscall UIRedPacket::setUnactive(UIRedPacket *this)

{
  undefined *puVar1;
  DTimerManager *this_00;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  string asStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_60 = local_28;
  local_70 = local_38;
  uStack_68 = uStack_30;
  MessageRouter::
  Unsubscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UIRedPacket,void(UIRedPacket::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMsgErrorRequest);
  local_90 = local_20;
  uStack_88 = uStack_18;
  local_80 = local_10;
  MessageRouter::
  Unsubscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<UIRedPacket,void(UIRedPacket::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_90);
  this_00 = (DTimerManager *)DTimerManager::getInstane();
  std::string::string(asStack_40,"UIRedPacket");
  DTimerManager::removeTimer(this_00,asStack_40);
  std::string::~string(asStack_40);
  nop();
  s_isActive = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacket::~UIRedPacket() */

void __thiscall UIRedPacket::~UIRedPacket(UIRedPacket *this)

{
  DNetwork *pDVar1;
  _PacketId a_Stack_ce8 [1264];
  string asStack_7f8 [8];
  string asStack_7f0 [2024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06771210;
  setUnactive(this);
  s_pWidgetHandler = 0;
  pDVar1 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  DNetwork::removeRequestMsg(pDVar1,asStack_7f8);
  _PacketId::~_PacketId(a_Stack_ce8);
  pDVar1 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  DNetwork::removeRequestMsg(pDVar1,asStack_7f0);
  _PacketId::~_PacketId(a_Stack_ce8);
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIRedPacket::~UIRedPacket() */

void __thiscall UIRedPacket::~UIRedPacket(UIRedPacket *this)

{
  ~UIRedPacket(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacket::requestGetMsg() */

void __thiscall UIRedPacket::requestGetMsg(UIRedPacket *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [1272];
  string asStack_7f0 [2024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_03d80ea4(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_7f0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId(a_Stack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacket::requestNetwork() */

void UIRedPacket::requestNetwork(void)

{
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  wchar_t local_30;
  wchar_t local_2c;
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  if (m_eventType == L'\0') {
    local_30 = L'⨇';
    local_2c = L'\x01';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,&local_30,&local_2c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
               (pair *)apStack_28);
  }
  else if (m_eventType == L'\x01') {
    local_30 = L'⧂';
    local_2c = m_eventType;
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,&local_30,&local_2c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
               (pair *)apStack_28);
  }
  this = (NetworkMgr *)NetworkMgr::Instance();
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
  INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacket::UserInit() */

void __thiscall UIRedPacket::UserInit(UIRedPacket *this)

{
  exception_ptr *this_00;
  char cVar1;
  int iVar2;
  string *psVar3;
  DTouchLayer *pDVar4;
  code *pcVar5;
  string asStack_b0 [8];
  function<bool(Sexy::Touch_const&)> afStack_a8 [32];
  function<bool(Sexy::Touch_const&)> afStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  this_00 = (exception_ptr *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  requestNetwork();
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_b0,"root/menu/btnClose");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string(asStack_b0);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    pcVar5 = *(code **)(*(long *)pDVar4 + 0x350);
    FUN_03d80f00(afStack_88,this);
    (*pcVar5)(pDVar4,afStack_88);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_88);
  }
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_b0,"root/menu/btnAct1");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string(asStack_b0);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    pcVar5 = *(code **)(*(long *)pDVar4 + 0x350);
    FUN_03d80f5c(afStack_88,this);
    (*pcVar5)(pDVar4,afStack_88);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_88);
    (**(code **)(*(long *)pDVar4 + 0xd8))(pDVar4,0);
  }
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_b0,"root/menu/btnAct2");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string(asStack_b0);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_03d7e454(local_80);
    if ((cVar1 == '\0') || (local_70 == '\0')) {
      (**(code **)(*(long *)pDVar4 + 0xd8))(pDVar4,0);
    }
    else {
      (**(code **)(*(long *)pDVar4 + 0xd8))(pDVar4,1);
    }
    pcVar5 = *(code **)(*(long *)pDVar4 + 0x350);
    FUN_03d80fb8(afStack_a8,this);
    (*pcVar5)(pDVar4,afStack_a8);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_a8);
    (**(code **)(*(long *)pDVar4 + 0xd8))(pDVar4,0);
    ActiveItem::~ActiveItem((ActiveItem *)afStack_88);
  }
  if (m_eventType == 0) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    std::string::string(asStack_b0,"root/detail_group/menu2/btnSmallRedPack");
    pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
    std::string::~string(asStack_b0);
    nop();
    if (pDVar4 != (DTouchLayer *)0x0) {
      pcVar5 = *(code **)(*(long *)pDVar4 + 0x350);
      FUN_03d81014(afStack_88,this);
      (*pcVar5)(pDVar4,afStack_88);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_88);
    }
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    std::string::string(asStack_b0,"root/detail_group/menu2/btnBigRedPack");
    pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
    std::string::~string(asStack_b0);
    nop();
    if (pDVar4 == (DTouchLayer *)0x0) goto LAB_03d84888;
    pcVar5 = *(code **)(*(long *)pDVar4 + 0x350);
    FUN_03d81070(afStack_88,this);
  }
  else {
    if (m_eventType != 1) goto LAB_03d84888;
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    std::string::string(asStack_b0,"root/detail_group/menu2/btnSmallDumpling");
    pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
    std::string::~string(asStack_b0);
    nop();
    if (pDVar4 != (DTouchLayer *)0x0) {
      pcVar5 = *(code **)(*(long *)pDVar4 + 0x350);
      FUN_03d810cc(afStack_88,this);
      (*pcVar5)(pDVar4,afStack_88);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_88);
    }
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    std::string::string(asStack_b0,"root/detail_group/menu2/btnBigDumpling");
    pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
    std::string::~string(asStack_b0);
    nop();
    if (pDVar4 == (DTouchLayer *)0x0) goto LAB_03d84888;
    pcVar5 = *(code **)(*(long *)pDVar4 + 0x350);
    FUN_03d81128(afStack_88,this);
  }
  (*pcVar5)(pDVar4,afStack_88);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_88);
LAB_03d84888:
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_b0,"root/menu/btnUpArrow");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string(asStack_b0);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    pcVar5 = *(code **)(*(long *)pDVar4 + 0x350);
    FUN_03d81184(afStack_88,this);
    (*pcVar5)(pDVar4,afStack_88);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_88);
    (**(code **)(*(long *)pDVar4 + 0xd8))(pDVar4,0);
  }
  updateNewNetInfo(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacket::requestOpenRedPacket(int, int) */

void __thiscall UIRedPacket::requestOpenRedPacket(UIRedPacket *this,int param_1,int param_2)

{
  string *psVar1;
  char *pcVar2;
  DNetwork *this_00;
  undefined1 *__n;
  undefined1 *__n_00;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [1264];
  string asStack_7f8 [2032];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n_00 = auStack_d48;
  __n = __n_00;
  std::string::string(asStack_d40,"q");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_2);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"t");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_1);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n_00);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_03d80d90(afStack_d38,this,CONCAT44(param_2,param_1));
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_7f8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacket::requestOpenNewRedPacket(int) */

void __thiscall UIRedPacket::requestOpenNewRedPacket(UIRedPacket *this,int param_1)

{
  TGALogMgr *this_00;
  string *psVar1;
  char *pcVar2;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 *__n_00;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  string asStack_d18 [48];
  DString aDStack_ce8 [1400];
  string asStack_770 [1896];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n_00 = auStack_d48;
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  DString::DString(aDStack_ce8,param_1);
  DString::operator_cast_to_string(aDStack_ce8);
  TGALogMgr::LogSegments(this_00,0x273f,2,asStack_d18);
  std::string::~string(asStack_d18);
  DString::~DString(aDStack_ce8);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)asStack_d18);
  __n = __n_00;
  std::string::string(asStack_d40,"on");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)asStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_1);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"ai");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)asStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,0x2a07);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n_00);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_03d80dec(afStack_d38,this,param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_770,(map *)asStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)asStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacket::requestOpenDumpling(int) */

void __thiscall UIRedPacket::requestOpenDumpling(UIRedPacket *this,int param_1)

{
  string *psVar1;
  char *pcVar2;
  DNetwork *this_00;
  undefined1 *__n;
  undefined1 *__n_00;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [1400];
  string asStack_770 [1896];
  long local_8;
  
  __n_00 = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n = __n_00;
  std::string::string(asStack_d40,"on");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_1);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"ai");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,0x29c2);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n_00);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_03d80e48(afStack_d38,this,param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_770,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacket::updateRedPacketCount() */

void __thiscall UIRedPacket::updateRedPacketCount(UIRedPacket *this)

{
  exception_ptr *this_00;
  int *piVar1;
  string *psVar2;
  DTouchLayer *pDVar3;
  char *pcVar4;
  code *pcVar5;
  undefined4 local_18 [4];
  long local_8;
  
  local_18[0] = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (exception_ptr *)(this + 0xd8);
  piVar1 = eastl::max_alt<int>((int *)(this + 0x13c),(int *)local_18);
  *(int *)(this + 0x13c) = *piVar1;
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)local_18,"smallRedPackCount");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string((string *)local_18);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    std::string::string((string *)local_18,"RedPackCountText");
    pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar3);
    std::string::~string((string *)local_18);
    nop();
    if (pDVar3 != (DTouchLayer *)0x0) {
      pcVar5 = *(code **)(*(long *)pDVar3 + 0x338);
      DString::Format(&DAT_055fea88,(string *)local_18,(ulong)*(uint *)(this + 0x13c));
      pcVar4 = DString::operator_cast_to_char_((DString *)local_18);
      (*pcVar5)(pDVar3,pcVar4);
      DString::~DString((DString *)local_18);
    }
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)local_18,"bigRedPackCount");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string((string *)local_18);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    std::string::string((string *)local_18,"RedPackCountText");
    pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar3);
    std::string::~string((string *)local_18);
    nop();
    if (pDVar3 != (DTouchLayer *)0x0) {
      pcVar5 = *(code **)(*(long *)pDVar3 + 0x338);
      DString::Format(&DAT_055fea88,(string *)local_18,(ulong)*(uint *)(this + 0x13c));
      pcVar4 = DString::operator_cast_to_char_((DString *)local_18);
      (*pcVar5)(pDVar3,pcVar4);
      DString::~DString((DString *)local_18);
    }
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)local_18,"btnSmallRedPack");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string((string *)local_18);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar3 + 0x338))(pDVar3,0 < *(int *)(this + 0x13c));
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)local_18,"btnBigRedPack");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string((string *)local_18);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar3 + 0x338))(pDVar3,9 < *(int *)(this + 0x13c));
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)local_18,"textBigRedPackOpen");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string((string *)local_18);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    pcVar5 = *(code **)(*(long *)pDVar3 + 0x338);
    DString::Format(&DAT_055feae0,(string *)local_18,10);
    pcVar4 = DString::operator_cast_to_char_((DString *)local_18);
    (*pcVar5)(pDVar3,pcVar4);
    DString::~DString((DString *)local_18);
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)local_18,"textSmallRedPackOpen");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string((string *)local_18);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    pcVar5 = *(code **)(*(long *)pDVar3 + 0x338);
    DString::Format(&DAT_055feae0,(string *)local_18,1);
    pcVar4 = DString::operator_cast_to_char_((DString *)local_18);
    (*pcVar5)(pDVar3,pcVar4);
    DString::~DString((DString *)local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacket::updateNetInfo(S2C_RedPackMsg*) */

void UIRedPacket::updateNetInfo(S2C_RedPackMsg *param_1)

{
  bool bVar1;
  long *plVar2;
  DTransformNode *this;
  DTransformNode *this_00;
  vector *pvVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(param_1 + 0xd8));
  pcVar5 = *(code **)(*plVar2 + 0x58);
  std::string::string((string *)&local_10,"frame_open");
  this = (DTransformNode *)(*pcVar5)(plVar2,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(param_1 + 0xd8));
  pcVar5 = *(code **)(*plVar2 + 0x58);
  std::string::string((string *)&local_10,"frame_open2");
  this_00 = (DTransformNode *)(*pcVar5)(plVar2,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  updateRedPacketCount((UIRedPacket *)param_1);
  if (*(code **)(*(long *)this + 0x228) == DTransformNode::getChildren) {
    pvVar3 = (vector *)DTransformNode::getChildren(this);
  }
  else {
    pvVar3 = (vector *)(**(code **)(*(long *)this + 0x228))();
  }
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(pvVar3);
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar3);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar4 + 0xd8))((long *)*puVar4,0);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (*(code **)(*(long *)this_00 + 0x228) == DTransformNode::getChildren) {
    pvVar3 = (vector *)DTransformNode::getChildren(this_00);
  }
  else {
    pvVar3 = (vector *)(**(code **)(*(long *)this_00 + 0x228))();
  }
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(pvVar3);
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar3);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar4 + 0xd8))((long *)*puVar4,0);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacket::updateDumplingCount() */

void __thiscall UIRedPacket::updateDumplingCount(UIRedPacket *this)

{
  exception_ptr *this_00;
  int *piVar1;
  string *psVar2;
  DTouchLayer *pDVar3;
  char *pcVar4;
  code *pcVar5;
  undefined4 local_18 [4];
  long local_8;
  
  local_18[0] = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (exception_ptr *)(this + 0xd8);
  piVar1 = eastl::max_alt<int>((int *)(this + 0x13c),(int *)local_18);
  *(int *)(this + 0x13c) = *piVar1;
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)local_18,"smallDumplingCount");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string((string *)local_18);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    std::string::string((string *)local_18,"DumplingCountText");
    pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar3);
    std::string::~string((string *)local_18);
    nop();
    if (pDVar3 != (DTouchLayer *)0x0) {
      pcVar5 = *(code **)(*(long *)pDVar3 + 0x338);
      DString::Format(&DAT_055fea88,(string *)local_18,(ulong)*(uint *)(this + 0x13c));
      pcVar4 = DString::operator_cast_to_char_((DString *)local_18);
      (*pcVar5)(pDVar3,pcVar4);
      DString::~DString((DString *)local_18);
    }
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)local_18,"bigDumplingCount");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string((string *)local_18);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    std::string::string((string *)local_18,"DumplingCountText");
    pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar3);
    std::string::~string((string *)local_18);
    nop();
    if (pDVar3 != (DTouchLayer *)0x0) {
      pcVar5 = *(code **)(*(long *)pDVar3 + 0x338);
      DString::Format(&DAT_055fea88,(string *)local_18,(ulong)*(uint *)(this + 0x13c));
      pcVar4 = DString::operator_cast_to_char_((DString *)local_18);
      (*pcVar5)(pDVar3,pcVar4);
      DString::~DString((DString *)local_18);
    }
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)local_18,"btnSmallDumpling");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string((string *)local_18);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar3 + 0x338))(pDVar3,0 < *(int *)(this + 0x13c));
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)local_18,"btnBigDumpling");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string((string *)local_18);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar3 + 0x338))(pDVar3,9 < *(int *)(this + 0x13c));
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)local_18,"textBigDumplingOpen");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string((string *)local_18);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    pcVar5 = *(code **)(*(long *)pDVar3 + 0x338);
    DString::Format(&DAT_055feae0,(string *)local_18,10);
    pcVar4 = DString::operator_cast_to_char_((DString *)local_18);
    (*pcVar5)(pDVar3,pcVar4);
    DString::~DString((DString *)local_18);
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)local_18,"textSmallDumplingOpen");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string((string *)local_18);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    pcVar5 = *(code **)(*(long *)pDVar3 + 0x338);
    DString::Format(&DAT_055feae0,(string *)local_18,1);
    pcVar4 = DString::operator_cast_to_char_((DString *)local_18);
    (*pcVar5)(pDVar3,pcVar4);
    DString::~DString((DString *)local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRedPacket::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>, std::allocator<int>
   > const&) */

void __thiscall
UIRedPacket::onNotifyRefreshActivityList(UIRedPacket *this,bool param_1,set *param_2)

{
  LawnApp *pLVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  PVZ2UIDialog *pPVar5;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined4 local_100 [2];
  undefined8 local_f8 [3];
  undefined8 local_e0 [4];
  undefined4 local_c0;
  Delegate0 aDStack_b8 [48];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (!param_1) {
    FUN_05478178((wstring *)local_f8,&DAT_056f11a8,auStack_108);
    FUN_05478178((wstring *)local_e0,L"[REWARD_GET_TIP_FAILED]",local_100);
    pPVar5 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_f8,(wstring *)local_e0)
    ;
    FUN_05476c50((wstring *)local_e0);
    nop();
    FUN_05476c50((wstring *)local_f8);
    nop();
    FUN_05478178((wstring *)local_f8,L"[BUTTON_OK]",local_100);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
              ((Delegate0 *)aAStack_88,(wstring *)local_e0);
    PVZ2UIDialog::AddButton(pPVar5,(wstring *)local_f8,(Delegate0 *)aAStack_88,1);
    FUN_05476c50((wstring *)local_f8);
    nop();
    goto LAB_03d87558;
  }
  local_100[0] = 0x2a07;
  local_f8[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)local_100);
  local_e0[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
  bVar2 = eastl::operator!=((rbtree_iterator *)local_f8,(rbtree_iterator *)local_e0);
  if (bVar2) {
    iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar4);
    if (local_70 != '\0') {
      OpenRedPackInfo::OpenRedPackInfo((OpenRedPackInfo *)local_e0);
      cVar3 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_e0);
      if (cVar3 == '\0') {
LAB_03d87628:
        pLVar1 = gLawnApp;
        FUN_05478178((wstring *)local_100,&DAT_056f11a8,auStack_110);
        FUN_05478178((rbtree_iterator *)local_f8,L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_108);
        pPVar5 = (PVZ2UIDialog *)
                 LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_100,(wstring *)local_f8);
        FUN_05476c50((rbtree_iterator *)local_f8);
        nop();
        FUN_05476c50((wstring *)local_100);
        nop();
        FUN_05478178((wstring *)local_100,L"[BUTTON_OK]",auStack_108);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                  (aDStack_b8,(rbtree_iterator *)local_f8);
        PVZ2UIDialog::AddButton(pPVar5,(wstring *)local_100,aDStack_b8,1);
        FUN_05476c50((wstring *)local_100);
        nop();
      }
      else {
        *(undefined4 *)(this + 0x13c) = local_c0;
        updateRedPacketCount(this);
      }
LAB_03d876fc:
      OpenRedPackInfo::~OpenRedPackInfo((OpenRedPackInfo *)local_e0);
      ActiveItem::~ActiveItem(aAStack_88);
      goto LAB_03d87558;
    }
  }
  else {
    local_100[0] = 0x29c2;
    local_f8[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                            ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)local_100
                            );
    local_e0[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar2 = eastl::operator!=((rbtree_iterator *)local_f8,(rbtree_iterator *)local_e0);
    if (!bVar2) goto LAB_03d87558;
    iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar4);
    if (local_70 != '\0') {
      OpenRedPackInfo::OpenRedPackInfo((OpenRedPackInfo *)local_e0);
      cVar3 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_e0);
      if (cVar3 == '\0') goto LAB_03d87628;
      *(undefined4 *)(this + 0x13c) = local_c0;
      updateDumplingCount(this);
      goto LAB_03d876fc;
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
LAB_03d87558:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIRedPacket::isActive() */

undefined1 UIRedPacket::isActive(void)

{
  return s_isActive;
}

