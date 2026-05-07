// Class: ServerTime


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServerTime::GetServerTimeS() */

void __thiscall ServerTime::GetServerTimeS(ServerTime *this)

{
  tm *ptVar1;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x30));
  if (*(long *)(this + 0x18) == 0) {
    ptVar1 = (tm *)0x0;
  }
  else {
    ptVar1 = localtime((time_t *)(this + 0x18));
  }
  Sexy::AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(ptVar1);
}


/* ServerTime::ValidServerTime() */

bool __thiscall ServerTime::ValidServerTime(ServerTime *this)

{
  return 0 < *(long *)(this + 0x18);
}


/* ServerTime::RemoveNetConnectUI() */

void __thiscall ServerTime::RemoveNetConnectUI(ServerTime *this)

{
  if (this[99] != (ServerTime)0x0) {
    LawnApp::KillNetConnectingUI(gLawnApp);
  }
  this[99] = (ServerTime)0x0;
  return;
}


/* ServerTime::ServerTime() */

void __thiscall ServerTime::ServerTime(ServerTime *this)

{
  Sexy::NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)this);
  *(undefined ***)this = &PTR_ToString_06934600;
  Set8BytesTo0(this + 0x10);
  Sexy::CritSect::CritSect((CritSect *)(this + 0x30));
  this[0x58] = (ServerTime)0x0;
  *(undefined2 *)(this + 0x60) = 0;
  this[0x62] = (ServerTime)0x0;
  this[99] = (ServerTime)0x0;
  *(undefined4 *)(this + 0x5c) = 0;
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0x68));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServerTime::~ServerTime() */

void __thiscall ServerTime::~ServerTime(ServerTime *this)

{
  bool bVar1;
  long *plVar2;
  list<CServerTimeHandler*,std::allocator<CServerTimeHandler*>> *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (list<CServerTimeHandler*,std::allocator<CServerTimeHandler*>> *)(this + 0x68);
  *(undefined ***)this = &PTR_ToString_06934600;
  local_18 = FUN_04a4aa68(*(undefined8 *)(this + 0x68));
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)this_00);
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar1
        ) {
    plVar2 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 8))();
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  std::list<CServerTimeHandler*,std::allocator<CServerTimeHandler*>>::clear(this_00);
  std::list<CServerTimeHandler*,std::allocator<CServerTimeHandler*>>::~list(this_00);
  EA::Thread::Mutex::~Mutex((Mutex *)(this + 0x30));
  std::string::~string((string *)(this + 0x10));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ServerTime::Init() */

void __thiscall ServerTime::Init(ServerTime *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = GetTimeServerConfig(false);
  cVar1 = _NetworkEventConfig::HasStageURL();
  lVar2 = lVar2 + 0x10;
  if (cVar1 != '\0') {
    lVar2 = _NetworkEventConfig::GetStageURL();
  }
  thunk_FUN_05475e00(this + 0x10,lVar2);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  uVar3 = Android::Util::GetElapsedRealtime();
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x62] = (ServerTime)0x0;
  this[99] = (ServerTime)0x0;
  return;
}


/* ServerTime::Instance() */

ServerTime * ServerTime::Instance(void)

{
  ServerTime *this;
  
  if (s_pServerTime != (ServerTime *)0x0) {
    return s_pServerTime;
  }
  this = ::operator_new(0x78);
  ServerTime(this);
  s_pServerTime = this;
  Init(this);
  return s_pServerTime;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServerTime::ProcessHandler(bool) */

void __thiscall ServerTime::ProcessHandler(ServerTime *this,bool param_1)

{
  list<CServerTimeHandler*,std::allocator<CServerTimeHandler*>> *this_00;
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (list<CServerTimeHandler*,std::allocator<CServerTimeHandler*>> *)(this + 0x68);
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04a4aa68(*(undefined8 *)(this + 0x68));
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)this_00);
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar1
        ) {
    puVar2 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    plVar4 = (long *)*puVar2;
    uVar3 = std::list<CServerTimeHandler*,std::allocator<CServerTimeHandler*>>::size(this_00);
    Sexy::OutputDebugStrF((wchar_t *)"handle process : %d",uVar3);
    if (plVar4 != (long *)0x0) {
      Sexy::OutputDebugStrF((wchar_t *)"handle process : OnServerTimeGet");
      (**(code **)(*plVar4 + 0x10))(plVar4,param_1,*(undefined8 *)(this + 0x18));
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  std::list<CServerTimeHandler*,std::allocator<CServerTimeHandler*>>::clear(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServerTime::ServiceRequestCompleted(Sexy::StructuredData const*, void const*) */

void ServerTime::ServiceRequestCompleted(StructuredData *param_1,void *param_2)

{
  bool bVar1;
  Value *this;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  AutoCrit aAStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"ServerTime::ServiceRequestCompleted");
  Sexy::AutoCrit::AutoCrit(aAStack_18,(CritSect *)(param_1 + 0x30));
  param_1[0x62] = (StructuredData)0x0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  RemoveNetConnectUI((ServerTime *)param_1);
  this = (Value *)Sexy::StructuredData::ValueForPath(param_2,"$.d");
  if (this != (Value *)0x0) {
    pcVar2 = (char *)Sexy::StructuredData::Value::StringForName(this,"t","");
    std::string::string(asStack_10,pcVar2);
    nop();
    bVar1 = std::operator==(asStack_10,"");
    if ((!bVar1) && (uVar3 = FUN_05474178(asStack_10), 0x12 < uVar3)) {
      pcVar2 = (char *)FUN_0547429c(asStack_10);
      uVar4 = GetTimeTime(pcVar2);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      if (*(code **)(param_1 + 8) != (code *)0x0) {
        (**(code **)(param_1 + 8))(0,uVar4);
        *(undefined8 *)(param_1 + 8) = 0;
      }
      uVar4 = Android::Util::GetElapsedRealtime();
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      MessageRouter::Post((_func_void *)gMessageRouter);
      *(undefined2 *)(param_1 + 0x60) = 0;
      param_1[0x58] = (StructuredData)0x1;
      *(undefined4 *)(param_1 + 0x5c) = 0x44160000;
      ProcessHandler((ServerTime *)param_1,true);
      std::string::~string(asStack_10);
      Sexy::AutoCrit::~AutoCrit(aAStack_18);
      goto LAB_04a4b0ac;
    }
    std::string::~string(asStack_10);
  }
  Sexy::AutoCrit::~AutoCrit(aAStack_18);
LAB_04a4b0ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ServerTime::SetServerTime(std::string const&) */

void __thiscall ServerTime::SetServerTime(ServerTime *this,string *param_1)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_05474178(param_1);
  if (uVar1 < 0x13) {
    return;
  }
  pcVar2 = (char *)FUN_0547429c(param_1);
  uVar3 = GetTimeTime(pcVar2);
  *(undefined8 *)(this + 0x18) = uVar3;
  if (*(code **)(this + 8) != (code *)0x0) {
    (**(code **)(this + 8))(0,uVar3);
    *(undefined8 *)(this + 8) = 0;
  }
  uVar3 = Android::Util::GetElapsedRealtime();
  *(undefined8 *)(this + 0x20) = uVar3;
  MessageRouter::Post((_func_void *)gMessageRouter);
  *(undefined2 *)(this + 0x60) = 0;
  this[0x58] = (ServerTime)0x1;
  *(undefined4 *)(this + 0x5c) = 0x44160000;
  ProcessHandler(this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServerTime::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void ServerTime::ServiceRequestFailed(StructuredData *param_1,void *param_2)

{
  char cVar1;
  short sVar2;
  long lVar3;
  int iVar4;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"ServerTime::ServiceRequestFailed");
  Sexy::AutoCrit::AutoCrit(aAStack_10,(CritSect *)(param_1 + 0x30));
  param_1[0x62] = (StructuredData)0x0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  RemoveNetConnectUI((ServerTime *)param_1);
  lVar3 = GetTimeServerConfig(false);
  cVar1 = _NetworkEventConfig::HasStageURL();
  lVar3 = lVar3 + 0x10;
  if (cVar1 != '\0') {
    lVar3 = _NetworkEventConfig::GetStageURL();
  }
  thunk_FUN_05475e00(param_1 + 0x10,lVar3);
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(0xffffffff,0);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  sVar2 = *(short *)(param_1 + 0x60);
  iVar4 = (int)sVar2;
  param_1[0x58] = (StructuredData)0x0;
  if (sVar2 < 5) {
    sVar2 = sVar2 + 1;
  }
  else {
    sVar2 = 5;
    iVar4 = 4;
  }
  *(short *)(param_1 + 0x60) = sVar2;
  *(float *)(param_1 + 0x5c) = (float)*(int *)(&DAT_05754f00 + (long)iVar4 * 4);
  ProcessHandler((ServerTime *)param_1,false);
  Sexy::AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServerTime::StartRequest() */

void __thiscall ServerTime::StartRequest(ServerTime *this)

{
  NetworkServiceManager *this_00;
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x2c) < 1) {
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    Sexy::StructuredData::StructuredData(aSStack_80);
    Sexy::StructuredData::BeginObject(aSStack_80);
    Sexy::StructuredData::AddString(aSStack_80,"trace","TimeServerTrace");
    Sexy::StructuredData::AddString(aSStack_80,"url",(string *)(this + 0x10));
    Sexy::StructuredData::BeginObject(aSStack_80,"formData");
    Sexy::StructuredData::AddString(aSStack_80,"req","I4");
    Sexy::StructuredData::EndObject(aSStack_80);
    Sexy::StructuredData::EndObject(aSStack_80);
    this_00 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
    Sexy::NetworkServiceManager::MakeRequest(this_00,aSStack_80,(NetworkServiceListener *)this,this)
    ;
    Sexy::StructuredData::~StructuredData(aSStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServerTime::GetServerTime(void (*)(int, long)) */

void __thiscall ServerTime::GetServerTime(ServerTime *this,_func_void_int_long *param_1)

{
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x30));
  *(_func_void_int_long **)(this + 8) = param_1;
  if (*(long *)(this + 0x18) == 0) {
    StartRequest(this);
  }
  else {
    (*param_1)(0,*(long *)(this + 0x18));
    *(undefined8 *)(this + 8) = 0;
  }
  Sexy::AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServerTime::Update(float) */

void __thiscall ServerTime::Update(ServerTime *this,float param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  iVar2 = *(int *)(this + 0x28) + 1;
  *(int *)(this + 0x28) = iVar2;
  local_8 = ___stack_chk_guard;
  *(float *)(this + 0x5c) = *(float *)(this + 0x5c) - param_1;
  if (*(long *)(this + 0x18) == 0) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if ((cVar1 == '\0') || (0.0 < *(float *)(this + 0x5c))) {
      iVar2 = *(int *)(this + 0x28);
    }
    else {
      StartRequest(this);
      iVar2 = *(int *)(this + 0x28);
      *(undefined4 *)(this + 0x5c) = 0x44160000;
    }
  }
  if ((0x1d < iVar2) && (*(long *)(this + 0x18) != 0)) {
    *(undefined4 *)(this + 0x28) = 0;
    lVar3 = Android::Util::GetElapsedRealtime();
    lVar5 = *(long *)(this + 0x20);
    uVar4 = FUN_04a4a7f4();
    *(undefined8 *)(this + 0x20) = uVar4;
    Sexy::AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x30));
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + (lVar3 - lVar5);
    Sexy::AutoCrit::~AutoCrit(aAStack_10);
    if (*(float *)(this + 0x5c) <= 0.0) {
      StartRequest(this);
      *(undefined4 *)(this + 0x5c) = 0x44160000;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServerTime::StartRequest(bool) */

void __thiscall ServerTime::StartRequest(ServerTime *this,bool param_1)

{
  LawnApp *this_00;
  char cVar1;
  NetworkServiceManager *this_01;
  string asStack_88 [8];
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 == '\0') {
    *(undefined8 *)(this + 0x18) = 0;
    Sexy::OutputDebugStrF((wchar_t *)"ServerTime StartRequest connect error");
    ProcessHandler(this,false);
  }
  else {
    Sexy::OutputDebugStrF((wchar_t *)"ServerTime StartRequest");
    this[0x62] = (ServerTime)0x1;
    Sexy::StructuredData::StructuredData(aSStack_80);
    Sexy::StructuredData::BeginObject(aSStack_80);
    Sexy::StructuredData::AddString(aSStack_80,"trace","TimeServerTrace");
    Sexy::StructuredData::AddString(aSStack_80,"url",(string *)(this + 0x10));
    Sexy::StructuredData::BeginObject(aSStack_80,"formData");
    Sexy::StructuredData::AddString(aSStack_80,"req","I4");
    Sexy::StructuredData::EndObject(aSStack_80);
    Sexy::StructuredData::EndObject(aSStack_80);
    this_01 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
    Sexy::NetworkServiceManager::MakeRequest(this_01,aSStack_80,(NetworkServiceListener *)this,this)
    ;
    this_00 = gLawnApp;
    if (param_1) {
      std::string::string(asStack_88,"[NET_CONNECTING]");
      LawnApp::ShowNetConnectingUI(this_00,asStack_88);
      std::string::~string(asStack_88);
      nop();
      this[99] = (ServerTime)0x1;
    }
    Sexy::StructuredData::~StructuredData(aSStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServerTime::GetServerTimeFromNet(CServerTimeHandler*, bool) */

void __thiscall
ServerTime::GetServerTimeFromNet(ServerTime *this,CServerTimeHandler *param_1,bool param_2)

{
  CServerTimeHandler *local_18;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  Sexy::AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x30));
  std::list<CServerTimeHandler*,std::allocator<CServerTimeHandler*>>::push_back
            ((list<CServerTimeHandler*,std::allocator<CServerTimeHandler*>> *)(this + 0x68),
             &local_18);
  if (this[0x62] == (ServerTime)0x0) {
    StartRequest(this,param_2);
  }
  Sexy::AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

