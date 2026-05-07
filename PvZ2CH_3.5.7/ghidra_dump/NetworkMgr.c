// Class: NetworkMgr


/* NetworkMgr::GetNewNetWorkProcess() */

undefined8 __thiscall NetworkMgr::GetNewNetWorkProcess(NetworkMgr *this)

{
  return *(undefined8 *)(this + 0x30);
}


/* NetworkMgr::NetworkMgr() */

void __thiscall NetworkMgr::NetworkMgr(NetworkMgr *this)

{
  Sexy::CritSect::CritSect((CritSect *)(this + 8));
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  gNetworkMgr = this;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  return;
}


/* NetworkMgr::Instance() */

NetworkMgr * NetworkMgr::Instance(void)

{
  NetworkMgr *this;
  
  if (s_pNetworkMgr != (NetworkMgr *)0x0) {
    return s_pNetworkMgr;
  }
  this = ::operator_new(0x60);
  NetworkMgr(this);
  s_pNetworkMgr = this;
  return this;
}


/* NetworkMgr::~NetworkMgr() */

void __thiscall NetworkMgr::~NetworkMgr(NetworkMgr *this)

{
  long *plVar1;
  StreamBuffer *this_00;
  
  gNetworkMgr = 0;
  if (*(void **)(this + 0x38) != (void *)0x0) {
    AK::FreeHook(*(void **)(this + 0x38));
    *(undefined8 *)(this + 0x38) = 0;
  }
  this_00 = *(StreamBuffer **)this;
  if (this_00 == (StreamBuffer *)0x0) {
    plVar1 = *(long **)(this + 0x30);
    if (plVar1 == (long *)0x0) {
      EA::Thread::Mutex::~Mutex((Mutex *)(this + 8));
      return;
    }
  }
  else {
    StreamBuffer::~StreamBuffer(this_00);
    AK::FreeHook(this_00);
    *(undefined8 *)this = 0;
    plVar1 = *(long **)(this + 0x30);
    if (plVar1 == (long *)0x0) goto LAB_031882a4;
  }
  (**(code **)(*plVar1 + 8))();
  *(undefined8 *)(this + 0x30) = 0;
LAB_031882a4:
  EA::Thread::Mutex::~Mutex((Mutex *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkMgr::ReceivedMsgCallback(unsigned char const*, int) */

void NetworkMgr::ReceivedMsgCallback(uchar *param_1,int param_2)

{
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (gNetworkMgr != (undefined8 *)0x0) {
    Sexy::AutoCrit::AutoCrit(aAStack_10,(CritSect *)(gNetworkMgr + 1));
    StreamBuffer::PushAPacket((StreamBuffer *)*gNetworkMgr,(char *)param_1,param_2);
    Sexy::AutoCrit::~AutoCrit(aAStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkMgr::Init() */

undefined8 __thiscall NetworkMgr::Init(NetworkMgr *this)

{
  void *pvVar1;
  StreamBuffer *this_00;
  androidNetworkMsgProcess *this_01;
  Sexy *this_02;
  ulong uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(this + 0x40) = 0x100000;
  pvVar1 = operator_new__(0x100000);
  *(void **)(this + 0x38) = pvVar1;
  this_00 = ::operator_new(0x18);
  StreamBuffer::StreamBuffer(this_00,0x100000);
  *(StreamBuffer **)this = this_00;
  if (*(long *)(this + 0x38) == 0) {
    uVar3 = 0xfffffffd;
  }
  else {
    this_01 = ::operator_new(0xe58);
    androidNetworkMsgProcess::androidNetworkMsgProcess(this_01);
    *(androidNetworkMsgProcess **)(this + 0x30) = this_01;
    (**(code **)(*(long *)this_01 + 0x10))(this_01);
    this_02 = (Sexy *)INetworkMsgProcess::RegisterCommonMessages
                                (*(INetworkMsgProcess **)(this + 0x30));
    uVar2 = Sexy::SexyTime(this_02);
    *(undefined4 *)(this + 0x58) = 0;
    uVar3 = 1;
    *(ulong *)(this + 0x50) = uVar2 / 1000;
  }
  return uVar3;
}


/* NetworkMgr::UpdateNetTime() */

void __thiscall NetworkMgr::UpdateNetTime(NetworkMgr *this)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(this + 0x58) + 1 < 0x1e) {
    *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
    return;
  }
  *(undefined4 *)(this + 0x58) = 0;
  uVar1 = Sexy::SexyTime((Sexy *)this);
  lVar2 = *(long *)(this + 0x50);
  *(ulong *)(this + 0x50) = uVar1 / 1000;
  *(ulong *)(this + 0x48) = (*(long *)(this + 0x48) - lVar2) + uVar1 / 1000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkMgr::Update() */

void __thiscall NetworkMgr::Update(NetworkMgr *this)

{
  char cVar1;
  int iVar2;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  NetworkItemMgr *pNVar3;
  long lVar4;
  float fVar5;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NetworkMgr *)Instance();
  this_01 = (INetworkMsgProcess *)GetNewNetWorkProcess(this_00);
  cVar1 = LawnApp::IsNetworkModuleOK();
  if ((this_01 != (INetworkMsgProcess *)0x0) && (cVar1 != '\0')) {
    if (*(code **)(*(long *)this_01 + 0x28) == INetworkMsgProcess::IsLogined) {
      cVar1 = INetworkMsgProcess::IsLogined(this_01);
    }
    else {
      cVar1 = (**(code **)(*(long *)this_01 + 0x28))();
    }
    if (cVar1 != '\0') {
      pNVar3 = (NetworkItemMgr *)Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
      cVar1 = NetworkItemMgr::NeedSync(pNVar3);
      if (cVar1 != '\0') {
        pNVar3 = (NetworkItemMgr *)Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
        NetworkItemMgr::DoSync(pNVar3);
      }
      lVar4 = LawnApp::GetWorldMap(gLawnApp);
      if (lVar4 != 0) {
        if (*(float *)(this + 0x5c) <= 0.0) {
          INetworkMsgProcess::flushCache();
          *(undefined4 *)(this + 0x5c) = 0x41f00000;
        }
        fVar5 = (float)PVZ_Dt();
        *(float *)(this + 0x5c) = *(float *)(this + 0x5c) - fVar5;
      }
    }
  }
  UpdateNetTime(this);
  Sexy::AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 8));
  iVar2 = StreamBuffer::CheckGetAPackage
                    (*(StreamBuffer **)this,*(char **)(this + 0x38),*(uint *)(this + 0x40));
  Sexy::AutoCrit::~AutoCrit(aAStack_10);
  if (0 < iVar2) {
    (**(code **)(**(long **)(this + 0x30) + 0x18))
              (*(long **)(this + 0x30),*(undefined8 *)(this + 0x38),iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkMgr::UpdateNetTime(std::string const&) */

void __thiscall NetworkMgr::UpdateNetTime(NetworkMgr *this,string *param_1)

{
  char cVar1;
  Value *this_00;
  long lVar2;
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StructuredData::StructuredData(aSStack_80);
  cVar1 = StringHelper::ReadJson(param_1,aSStack_80);
  if (cVar1 == '\0') {
    Sexy::OutputDebugStrF
              ((wchar_t *)"json parser failed [%s:%d]\n",
               "./../../../PvZ2/gameNetWork/NetworkMgr.cpp",0x94);
  }
  else {
    this_00 = (Value *)Sexy::StructuredData::ValueForPath(aSStack_80,"$.d");
    if ((this_00 != (Value *)0x0) &&
       (lVar2 = Sexy::StructuredData::Value::IntegerForName(this_00,"t",-1), lVar2 != -1)) {
      *(long *)(this + 0x48) = lVar2;
      Sexy::StructuredData::~StructuredData(aSStack_80);
      goto LAB_03188760;
    }
  }
  Sexy::StructuredData::~StructuredData(aSStack_80);
LAB_03188760:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

