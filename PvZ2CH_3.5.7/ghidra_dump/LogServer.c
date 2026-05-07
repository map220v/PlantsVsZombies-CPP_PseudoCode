// Class: LogServer


/* LogServer::LogServer() */

void __thiscall LogServer::LogServer(LogServer *this)

{
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x78);
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* LogServer::~LogServer() */

void __thiscall LogServer::~LogServer(LogServer *this)

{
  std::string::~string((string *)(this + 0x78));
  std::string::~string((string *)(this + 8));
  return;
}


/* LogServer::Init() */

int __thiscall LogServer::Init(LogServer *this)

{
  int iVar1;
  undefined8 uVar2;
  size_t in_x2;
  
  std::string::append((string *)(this + 8),"pvz2logandroid.intelligent.popcap.com.cn",in_x2);
  *(undefined2 *)this = 0x10fa;
  Sexy::LaunchThread(Thread_fun,this,2);
  uVar2 = FUN_0547429c((string *)(this + 8));
  iVar1 = printf("LogServer::Init() ip = %s",uVar2);
  return iVar1;
}


/* LogServer::Init(char const*, unsigned short) */

void __thiscall LogServer::Init(LogServer *this,char *param_1,ushort param_2)

{
  int iVar1;
  TcpClient *this_00;
  StreamBuffer *this_01;
  void *__s;
  
  this_00 = ::operator_new(0x10);
  TcpClient::TcpClient(this_00);
  *(TcpClient **)(this + 0x10) = this_00;
  this_01 = ::operator_new(0x18);
  StreamBuffer::StreamBuffer(this_01,0x2000);
  *(StreamBuffer **)(this + 0x18) = this_01;
  __s = operator_new__(0x2000);
  *(void **)(this + 0x80) = __s;
  memset(__s,0,0x2000);
  iVar1 = TcpClient::InitSocket(*(TcpClient **)(this + 0x10),param_1,param_2);
  if (iVar1 < 0) {
    puts(" erro =================  tcp socket init failed");
  }
  pthread_cond_init((pthread_cond_t *)(this + 0x20),(pthread_condattr_t *)0x0);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x50),(pthread_mutexattr_t *)0x0);
  this[0x88] = (LogServer)0x0;
  this[0x89] = (LogServer)0x1;
  return;
}


/* LogServer::InitNetSocket() */

undefined8 __thiscall LogServer::InitNetSocket(LogServer *this)

{
  char *pcVar1;
  hostent *phVar2;
  
  pcVar1 = (char *)FUN_0547429c(this + 8);
  phVar2 = gethostbyname(pcVar1);
  if (phVar2 != (hostent *)0x0) {
    pcVar1 = inet_ntoa((in_addr)*(in_addr_t *)*phVar2->h_addr_list);
    Init(this,pcVar1,*(ushort *)this);
    return 1;
  }
  puts("LogServer::Init() failed");
  return 0;
}


/* LogServer::SendMsg(char const*, unsigned short) */

undefined1 __thiscall LogServer::SendMsg(LogServer *this,char *param_1,ushort param_2)

{
  undefined1 uVar1;
  
  if ((*(long *)(this + 0x10) != 0) && (*(long *)(this + 0x18) != 0)) {
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
    uVar1 = StreamBuffer::PushAPacket(*(StreamBuffer **)(this + 0x18),param_1,param_2);
    pthread_cond_signal((pthread_cond_t *)(this + 0x20));
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
    return uVar1;
  }
  return 0;
}


/* LogServer::SendMsg() */

void __thiscall LogServer::SendMsg(LogServer *this)

{
  LogServer *pLVar1;
  ushort uVar2;
  char *pcVar3;
  
  if (((*(long *)(this + 0x10) != 0) && (*(long *)(this + 0x18) != 0)) &&
     (this[0x88] == (LogServer)0x0)) {
    pLVar1 = this + 0x78;
    FUN_05475ad8(pLVar1,&DAT_0559c978);
    pcVar3 = (char *)FUN_0547429c(pLVar1);
    uVar2 = FUN_05474178(pLVar1);
    SendMsg(this,pcVar3,uVar2);
    FUN_05474ff8(pLVar1);
    return;
  }
  return;
}


/* LogServer::Stop() */

int __thiscall LogServer::Stop(LogServer *this)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
  this[0x88] = (LogServer)0x1;
  pthread_cond_signal((pthread_cond_t *)(this + 0x20));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
  iVar1 = puts("log stop");
  return iVar1;
}


/* LogServer::Clean() */

void __thiscall LogServer::Clean(LogServer *this)

{
  ColourFit *this_00;
  StreamBuffer *this_01;
  TcpClient *this_02;
  
  this_01 = *(StreamBuffer **)(this + 0x18);
  if (this_01 != (StreamBuffer *)0x0) {
    StreamBuffer::~StreamBuffer(this_01);
    AK::FreeHook(this_01);
    *(undefined8 *)(this + 0x18) = 0;
  }
  this_02 = *(TcpClient **)(this + 0x10);
  if (this_02 == (TcpClient *)0x0) {
    this_00 = *(ColourFit **)(this + 0x80);
    if (this_00 == (ColourFit *)0x0) {
      return;
    }
  }
  else {
    TcpClient::~TcpClient(this_02);
    AK::FreeHook(this_02);
    *(undefined8 *)(this + 0x10) = 0;
    this_00 = *(ColourFit **)(this + 0x80);
    if (this_00 == (ColourFit *)0x0) {
      return;
    }
  }
  EATextSquish::ColourFit::~ColourFit(this_00);
  *(undefined8 *)(this + 0x80) = 0;
  return;
}


/* LogServer::Start() */

int __thiscall LogServer::Start(LogServer *this)

{
  int iVar1;
  
  Init(this);
  iVar1 = puts("log start ");
  return iVar1;
}


/* LogServer::Instance() */

LogServer * LogServer::Instance(void)

{
  LogServer *this;
  
  if (s_pLogServer != (LogServer *)0x0) {
    return s_pLogServer;
  }
  this = ::operator_new(0x90);
  LogServer(this);
  s_pLogServer = this;
  return this;
}


/* LogServer::AppendMsg(std::string) */

long LogServer::AppendMsg(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    thunk_FUN_054757c0(param_1 + 0x78);
    FUN_05475ad8(param_1 + 0x78,&DAT_055e9e80);
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LogServer::SendFakderNewUUI(std::string const&, std::string const&) */

void __thiscall LogServer::SendFakderNewUUI(LogServer *this,string *param_1,string *param_2)

{
  undefined8 uVar1;
  Util *this_00;
  LogServer *this_01;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Instance();
  std::string::string(asStack_28,"fakernew_1");
  uVar1 = AppendMsg(uVar1,asStack_28);
  FUN_05475d88(asStack_20,param_1);
  uVar1 = AppendMsg(uVar1,asStack_20);
  FUN_05475d88(asStack_18,Sexy::gSexyAppBase + 0x3d0);
  uVar1 = AppendMsg(uVar1,asStack_18);
  FUN_05475d88(asStack_10,param_2);
  AppendMsg(uVar1,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  nop();
  this_00 = (Util *)Instance();
  Android::Util::GetPackageName(this_00);
  AppendMsg(this_00,asStack_10);
  std::string::~string(asStack_10);
  this_01 = (LogServer *)Instance();
  SendMsg(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LogServer::SendFakeInfo(std::string const&, int, int, int, int) */

void __thiscall
LogServer::SendFakeInfo
          (LogServer *this,string *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Util *this_00;
  LogServer *this_01;
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_2);
  uVar2 = Instance();
  std::string::string(asStack_198,"fake_1");
  uVar2 = AppendMsg(uVar2,asStack_198);
  FUN_05475d88(asStack_190,param_1);
  uVar2 = AppendMsg(uVar2,asStack_190);
  FUN_05475d88(asStack_188,Sexy::gSexyAppBase + 0x3d0);
  uVar2 = AppendMsg(uVar2,asStack_188);
  FUN_05462824(asStack_180,auStack_178);
  AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  std::string::~string(asStack_198);
  nop();
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_3);
  uVar2 = Instance();
  FUN_05462824(asStack_180,auStack_178);
  AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_4);
  uVar2 = Instance();
  FUN_05462824(asStack_180,auStack_178);
  AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_5);
  uVar2 = Instance();
  FUN_05462824(asStack_180,auStack_178);
  AppendMsg(uVar2,asStack_180);
  std::string::~string(asStack_180);
  this_00 = (Util *)Instance();
  Android::Util::GetPackageName(this_00);
  AppendMsg(this_00,asStack_180);
  std::string::~string(asStack_180);
  this_01 = (LogServer *)Instance();
  SendMsg(this_01);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LogServer::DeermineBlock() */

void __thiscall LogServer::DeermineBlock(LogServer *this)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  uint local_4c;
  undefined1 auStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x10) == 0) {
LAB_04a49d74:
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  __mutex = (pthread_mutex_t *)(this + 0x50);
  pthread_mutex_lock(__mutex);
  local_4c = 0;
  do {
    lVar1 = StreamBuffer::GetBufReadStart(*(StreamBuffer **)(this + 0x18),&local_4c);
    if (lVar1 == 0) {
      if (this[0x88] != (LogServer)0x0) goto LAB_04a49d40;
    }
    else {
      if (this[0x88] == (LogServer)0x0) {
        pthread_mutex_unlock(__mutex);
        goto LAB_04a49d74;
      }
LAB_04a49d40:
      if (local_4c == 0) {
        Clean(this);
                    /* WARNING: Subroutine does not return */
        pthread_exit(auStack_48);
      }
    }
    pthread_cond_wait((pthread_cond_t *)(this + 0x20),__mutex);
  } while( true );
}


/* LogServer::Update() */

LogServer * __thiscall LogServer::Update(LogServer *this)

{
  int iVar1;
  uint uVar2;
  LogServer *pLVar3;
  
  pLVar3 = this;
  if ((*(long *)(this + 0x10) != 0) && (*(long *)(this + 0x18) != 0)) {
    DeermineBlock(this);
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
    iVar1 = StreamBuffer::CheckGetAPackage
                      (*(StreamBuffer **)(this + 0x18),(char *)(*(long *)(this + 0x80) + 2),0x1ffe);
    uVar2 = pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
    pLVar3 = (LogServer *)(ulong)uVar2;
    if (0 < iVar1) {
      pLVar3 = (LogServer *)
               TcpClient::SentMsg(*(TcpClient **)(this + 0x10),*(char **)(this + 0x80),
                                  (short)iVar1 + 2);
      return pLVar3;
    }
  }
  return pLVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LogServer::updateLogServerAddress() */

void __thiscall LogServer::updateLogServerAddress(LogServer *this)

{
  LogServer *pLVar1;
  PVZDB *pPVar2;
  RtName *this_00;
  long extraout_x0;
  undefined8 uVar3;
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  pLVar1 = this + 8;
  local_8 = ___stack_chk_guard;
  pPVar2 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this_00 = (RtName *)PVZDB::GetTable(pPVar2,0x3b);
  Sexy::RtName::RtName(aRStack_18,L"LogServerConfig");
  Sexy::RtDbTable::GetIdForAlias(this_00);
  Sexy::RtDbTable::GetObjectForId((RtDbTable *)this_00,aRStack_20);
  nop();
  Sexy::RtId::~RtId(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  thunk_FUN_05475e00(pLVar1,extraout_x0 + 0x10);
  *(short *)this = (short)*(undefined4 *)(extraout_x0 + 0x18);
  uVar3 = FUN_0547429c(pLVar1);
  printf("LogServer::updateLogServerAddress() ip = %s",uVar3);
  uVar3 = FUN_0547429c(pLVar1);
  Sexy::OutputDebugStrF((wchar_t *)"LogServer::updateLogServerAddress() ip = %s",uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

