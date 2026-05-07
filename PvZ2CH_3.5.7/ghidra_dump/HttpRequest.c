// Class: HttpRequest


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HttpRequest::ServiceRequestCompleted(Sexy::StructuredData const*, void const*) */

void __thiscall
HttpRequest::ServiceRequestCompleted(HttpRequest *this,StructuredData *param_1,void *param_2)

{
  Buffer *this_00;
  int iVar1;
  uchar *puVar2;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == this) {
    this_00 = (Buffer *)((long)param_2 + 8);
    Sexy::AutoCrit::AutoCrit(aAStack_10,(CritSect *)((long)param_2 + 0x38));
    Sexy::Buffer::Clear(this_00);
    Sexy::StructuredData::WriteToBuffer(param_1,this_00);
    puVar2 = (uchar *)Sexy::Buffer::GetDataPtr(this_00);
    iVar1 = Sexy::Buffer::GetDataLen(this_00);
    NetworkMgr::ReceivedMsgCallback(puVar2,iVar1);
    Sexy::AutoCrit::~AutoCrit(aAStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HttpRequest::HttpRequest() */

void __thiscall HttpRequest::HttpRequest(HttpRequest *this)

{
  _NetworkEventConfig a_Stack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)this);
  *(undefined ***)this = &PTR_ToString_06608260;
  Sexy::Buffer::Buffer((Buffer *)(this + 8));
  Sexy::CritSect::CritSect((CritSect *)(this + 0x38));
  Set8BytesTo0(this + 0x60);
  _NetworkEventConfig::_NetworkEventConfig(a_Stack_38);
  thunk_FUN_05475e00(this + 0x60,a_Stack_38);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)a_Stack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HttpRequest::~HttpRequest() */

void __thiscall HttpRequest::~HttpRequest(HttpRequest *this)

{
  *(undefined ***)this = &PTR_ToString_06608260;
  std::string::~string((string *)(this + 0x60));
  EA::Thread::Mutex::~Mutex((Mutex *)(this + 0x38));
  Sexy::Buffer::~Buffer((Buffer *)(this + 8));
  return;
}


/* HttpRequest::~HttpRequest() */

void __thiscall HttpRequest::~HttpRequest(HttpRequest *this)

{
  ~HttpRequest(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HttpRequest::StartRequest(std::string&, std::string&, std::string const&) */

void __thiscall
HttpRequest::StartRequest(HttpRequest *this,string *param_1,string *param_2,string *param_3)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  NetworkServiceManager *this_00;
  string asStack_88 [8];
  StructuredData aSStack_80 [16];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_1);
  if ((cVar1 == '\0') && (pcVar3 = (char *)FUN_05474ee8(param_1,0), *pcVar3 != 'P')) {
    FUN_05475d88(asStack_88,param_3);
    cVar1 = FUN_0547419c(asStack_88);
    if (cVar1 != '\0') {
      _NetworkEventConfig::_NetworkEventConfig((_NetworkEventConfig *)aSStack_80);
      pcVar3 = (char *)FUN_05474ee8(param_1,0);
      if (*pcVar3 == 'P') {
        thunk_FUN_05475e00(asStack_88,auStack_70);
      }
      else {
        pcVar3 = (char *)FUN_05474ee8(param_1,0);
        if (*pcVar3 == 'C') {
          thunk_FUN_05475e00(asStack_88,auStack_68);
        }
        else {
          thunk_FUN_05475e00(asStack_88,aSStack_80);
        }
      }
      TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aSStack_80);
    }
    Sexy::StructuredData::StructuredData(aSStack_80);
    Sexy::StructuredData::BeginObject(aSStack_80);
    Sexy::StructuredData::AddString(aSStack_80,"trace","VerifyReceipt11");
    Sexy::StructuredData::AddString(aSStack_80,"url",asStack_88);
    Sexy::StructuredData::BeginObject(aSStack_80,"formData");
    Sexy::StructuredData::AddString(aSStack_80,"req",param_1);
    Sexy::StructuredData::AddString(aSStack_80,"e",param_2);
    Sexy::StructuredData::AddInteger(aSStack_80,"ev",1);
    Sexy::StructuredData::EndObject(aSStack_80);
    bVar2 = std::operator==(param_1,"V219");
    if (bVar2) {
      Sexy::StructuredData::AddInteger(aSStack_80,"timeout",100);
    }
    Sexy::StructuredData::EndObject(aSStack_80);
    this_00 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
    Sexy::NetworkServiceManager::MakeRequest(this_00,aSStack_80,(NetworkServiceListener *)this,this)
    ;
    Sexy::StructuredData::~StructuredData(aSStack_80);
    std::string::~string(asStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HttpRequest::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void __thiscall
HttpRequest::ServiceRequestFailed(HttpRequest *this,StructuredData *param_1,void *param_2)

{
  Buffer *this_00;
  bool bVar1;
  int iVar2;
  char *__s;
  uchar *puVar3;
  AutoCrit aAStack_d70 [8];
  string asStack_d68 [8];
  StructuredData aSStack_d60 [120];
  _PacketId a_Stack_ce8 [192];
  string asStack_c28 [3104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == this) {
    this_00 = (Buffer *)((long)param_2 + 8);
    _PacketId::_PacketId(a_Stack_ce8);
    Sexy::AutoCrit::AutoCrit(aAStack_d70,(CritSect *)((long)param_2 + 0x38));
    Sexy::Buffer::Clear(this_00);
    Sexy::StructuredData::StructuredData(aSStack_d60);
    Sexy::StructuredData::BeginObject(aSStack_d60);
    __s = (char *)Sexy::StructuredData::StringForPath(param_1,"$.req","");
    std::string::string(asStack_d68,__s);
    nop();
    bVar1 = std::operator!=(asStack_d68,"V202");
    if (bVar1) {
      Sexy::StructuredData::AddString(aSStack_d60,"i",asStack_c28);
    }
    else {
      Sexy::StructuredData::AddString(aSStack_d60,"i",asStack_d68);
    }
    Sexy::StructuredData::AddString(aSStack_d60,"req",asStack_d68);
    Sexy::StructuredData::AddInteger(aSStack_d60,"r",-1);
    Sexy::StructuredData::EndObject(aSStack_d60);
    Sexy::StructuredData::WriteToBuffer(aSStack_d60,this_00);
    puVar3 = (uchar *)Sexy::Buffer::GetDataPtr(this_00);
    iVar2 = Sexy::Buffer::GetDataLen(this_00);
    NetworkMgr::ReceivedMsgCallback(puVar3,iVar2);
    std::string::~string(asStack_d68);
    Sexy::StructuredData::~StructuredData(aSStack_d60);
    Sexy::AutoCrit::~AutoCrit(aAStack_d70);
    _PacketId::~_PacketId(a_Stack_ce8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

