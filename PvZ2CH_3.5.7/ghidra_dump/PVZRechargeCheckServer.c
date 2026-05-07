// Class: PVZRechargeCheckServer


/* PVZRechargeCheckServer::PVZRechargeCheckServer() */

void __thiscall PVZRechargeCheckServer::PVZRechargeCheckServer(PVZRechargeCheckServer *this)

{
  Sexy::NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)this);
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR_ToString_06847a40;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x18] = (PVZRechargeCheckServer)0x0;
  return;
}


/* PVZRechargeCheckServer::GetPlayerRechargeAmount() */

int __thiscall PVZRechargeCheckServer::GetPlayerRechargeAmount(PVZRechargeCheckServer *this)

{
  return *(int *)(this + 0xc) + *(int *)(this + 8);
}


/* PVZRechargeCheckServer::ResetGemAmount() */

void __thiscall PVZRechargeCheckServer::ResetGemAmount(PVZRechargeCheckServer *this)

{
  this[0x18] = (PVZRechargeCheckServer)0x0;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0xffffffff;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRechargeCheckServer::OnRequestFinished(std::string) */

void __thiscall
PVZRechargeCheckServer::OnRequestFinished(PVZRechargeCheckServer *this,string *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  Value *this_00;
  long lVar3;
  char *__s;
  string asStack_108 [8];
  string asStack_100 [8];
  string asStack_f8 [8];
  MD5 aMStack_f0 [112];
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"");
  if (bVar1) {
    *(undefined4 *)(this + 0x14) = 0;
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  else {
    Sexy::StructuredData::StructuredData(aSStack_80);
    StringHelper::ReadJson(param_2,aSStack_80);
    this_00 = (Value *)Sexy::StructuredData::ObjectForPath(aSStack_80,"$.d");
    if (this_00 != (Value *)0x0) {
      Sexy::StructuredData::Value::IntegerForPath(this_00,".f",-1);
      uVar2 = FUN_0440212c();
      *(undefined4 *)(this + 0xc) = uVar2;
      Sexy::StructuredData::Value::IntegerForPath(this_00,".c",-1);
      uVar2 = FUN_0440212c();
      *(undefined4 *)(this + 8) = uVar2;
      lVar3 = Sexy::StructuredData::Value::IntegerForPath(this_00,".b",-1);
      this[0x18] = (PVZRechargeCheckServer)(lVar3 == 1);
      __s = (char *)Sexy::StructuredData::Value::StringForPath(this_00,".s","");
      std::string::string(asStack_108,__s);
      nop();
      Sexy::StrFormat("%d%d%dEA82E706D5A67",asStack_100,(ulong)*(uint *)(this + 0xc),
                      (ulong)*(uint *)(this + 8),(ulong)*(uint *)(this + 0x14));
      MD5::MD5(aMStack_f0,asStack_100);
      MD5::toString();
      FUN_05474278(asStack_100,asStack_f8);
      std::string::~string(asStack_f8);
      bVar1 = std::operator==(asStack_108,"");
      if ((bVar1) || (bVar1 = std::operator!=(asStack_108,asStack_100), bVar1)) {
        this[0x18] = (PVZRechargeCheckServer)0x0;
        *(undefined4 *)(this + 0xc) = 0xffffffff;
        *(undefined4 *)(this + 8) = 0xffffffff;
      }
      std::string::~string(asStack_100);
      std::string::~string(asStack_108);
    }
    *(undefined4 *)(this + 0x14) = 0;
    MessageRouter::Post((_func_void *)gMessageRouter);
    Sexy::StructuredData::~StructuredData(aSStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRechargeCheckServer::ServiceRequestCompleted(Sexy::StructuredData const*, void const*) */

void __thiscall
PVZRechargeCheckServer::ServiceRequestCompleted
          (PVZRechargeCheckServer *this,StructuredData *param_1,void *param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  MD5 aMStack_198 [112];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  char acStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == this) {
    pcVar2 = (char *)Sexy::StructuredData::StringForPath(param_1,"$.i","none");
    std::string::string(asStack_1a0,pcVar2);
    bVar1 = std::operator!=("V1",asStack_1a0);
    std::string::~string(asStack_1a0);
    nop();
    if (bVar1) {
      pcVar4 = "PVZRechargeCheckServer::ServiceRequestCompleted reqId = [%s]";
    }
    else {
      pcVar3 = (char *)Sexy::StructuredData::IntegerForPath(param_1,"$.r",-1);
      if (pcVar3 == (char *)0x0) {
        pcVar4 = (char *)Sexy::StructuredData::StringForPath(param_1,"$.e","none");
        memset(acStack_108,0,0x100);
        std::string::string(asStack_1a0,pcVar4);
        bVar1 = std::operator!=("none",asStack_1a0);
        std::string::~string(asStack_1a0);
        nop();
        if (bVar1) {
          std::string::string(asStack_1a0,pcVar2);
          std::operator+("ila&master",asStack_1a0);
          std::string::~string(asStack_1a0);
          nop();
          MD5::MD5(aMStack_198,asStack_1a8);
          MD5::toString();
          FUN_05474278(asStack_1a8,asStack_1a0);
          std::string::~string(asStack_1a0);
          local_128 = 0;
          uStack_120 = 0;
          local_118 = 0;
          uStack_110 = 0;
          lVar5 = FUN_0547429c(asStack_1a8);
          local_128 = *(undefined8 *)(lVar5 + 1);
          uStack_120 = *(undefined8 *)(lVar5 + 9);
          local_118 = *(undefined8 *)(lVar5 + 0x11);
          pcVar2 = (char *)FUN_0547429c(asStack_1a8);
          PCPDecrypt(pcVar4,acStack_108,0x100,pcVar2,(char *)&local_128);
          std::string::~string(asStack_1a8);
        }
        std::string::string(asStack_1a8,acStack_108);
        nop();
        FUN_05475d88(asStack_1a0,asStack_1a8);
        OnRequestFinished(param_2,asStack_1a0);
        std::string::~string(asStack_1a0);
        std::string::~string(asStack_1a8);
        goto LAB_044023fc;
      }
      pcVar4 = "PVZRechargeCheckServer::ServiceRequestCompleted result = [%d]";
      pcVar2 = pcVar3;
    }
    Sexy::OutputDebugStrF((wchar_t *)pcVar4,pcVar2);
    (**(code **)(*(long *)param_2 + 0x38))(param_2,param_1,param_2);
  }
LAB_044023fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZRechargeCheckServer::TryRequest() */

void __thiscall PVZRechargeCheckServer::TryRequest(PVZRechargeCheckServer *this)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  PVZDB *pPVar8;
  RtName *this_00;
  long extraout_x0;
  NetworkServiceManager *this_01;
  size_t __n;
  string asStack_158 [8];
  string asStack_150 [8];
  string asStack_148 [8];
  string asStack_140 [8];
  string asStack_138 [8];
  string asStack_130 [8];
  RtId aRStack_128 [8];
  string asStack_120 [16];
  MD5 aMStack_110 [112];
  string asStack_a0 [120];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x10) < 0) {
    std::string::string(asStack_a0,"");
    OnRequestFinished(this,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
  }
  else {
    std::string::string(asStack_158,"V1");
    nop();
    Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetAccountName();
    uVar3 = time((time_t *)0x0);
    Sexy::SRand(uVar3);
    uVar1 = Sexy::Rand();
    __n = (size_t)uVar1;
    *(uint *)(this + 0x14) = uVar1;
    uVar4 = FUN_0547429c(asStack_150);
    Sexy::StrFormat("%s%dA7198D8B54ABE",asStack_148,uVar4);
    MD5::MD5(aMStack_110,asStack_148);
    MD5::toString();
    FUN_05474278(asStack_148,asStack_a0);
    std::string::~string(asStack_a0);
    Set8BytesTo0(asStack_140);
    std::string::append(asStack_140,"{",__n);
    FUN_031f5e7c(asStack_120," \"uu\" : \"",asStack_150);
    std::operator+(asStack_120,"\",");
    thunk_FUN_054757c0(asStack_140,asStack_a0);
    std::string::~string(asStack_a0);
    std::string::~string(asStack_120);
    FUN_031f5e7c(asStack_120," \"s\" : \"",asStack_148);
    std::operator+(asStack_120,"\",");
    thunk_FUN_054757c0(asStack_140,asStack_a0);
    std::string::~string(asStack_a0);
    std::string::~string(asStack_120);
    Sexy::StrFormat(" \"r\" : %d",asStack_a0,(ulong)*(uint *)(this + 0x14));
    thunk_FUN_054757c0(asStack_140,asStack_a0);
    std::string::~string(asStack_a0);
    FUN_05475ad8(asStack_140,&DAT_05593340);
    FUN_031f5e7c(asStack_138,"ila&master",asStack_158);
    MD5::MD5(aMStack_110,asStack_138);
    MD5::toString();
    FUN_05474278(asStack_138,asStack_a0);
    std::string::~string(asStack_a0);
    local_28 = 0;
    uStack_20 = 0;
    uStack_10 = 0;
    lVar5 = FUN_0547429c(asStack_138);
    local_28 = *(undefined8 *)(lVar5 + 1);
    uStack_20 = *(undefined8 *)(lVar5 + 9);
    local_18 = *(undefined8 *)(lVar5 + 0x11);
    pcVar6 = (char *)FUN_0547429c(asStack_140);
    iVar2 = FUN_05474184(asStack_140);
    pcVar7 = (char *)FUN_0547429c(asStack_138);
    PCPEncryptStr(pcVar6,iVar2,pcVar7,(char *)&local_28);
    Sexy::StructuredData::StructuredData((StructuredData *)asStack_a0);
    Sexy::StructuredData::BeginObject((StructuredData *)asStack_a0);
    pPVar8 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    this_00 = (RtName *)PVZDB::GetTable(pPVar8,0x3b);
    Sexy::RtName::RtName((RtName *)asStack_120,L"RechargeCheckConfig");
    Sexy::RtDbTable::GetIdForAlias(this_00);
    Sexy::RtDbTable::GetObjectForId((RtDbTable *)this_00,aRStack_128);
    nop();
    Sexy::RtId::~RtId(aRStack_128);
    Sexy::RtName::~RtName((RtName *)asStack_120);
    Sexy::StructuredData::AddString
              ((StructuredData *)asStack_a0,"url",(string *)(extraout_x0 + 0x10));
    Sexy::StructuredData::AddInteger((StructuredData *)asStack_a0,"timeout",0x1e);
    Sexy::StructuredData::BeginObject((StructuredData *)asStack_a0,"formData");
    Sexy::StructuredData::AddString((StructuredData *)asStack_a0,"req",asStack_158);
    Sexy::StructuredData::AddString((StructuredData *)asStack_a0,"e",asStack_130);
    Sexy::StructuredData::EndObject((StructuredData *)asStack_a0);
    Sexy::StructuredData::EndObject((StructuredData *)asStack_a0);
    this_01 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
    Sexy::NetworkServiceManager::MakeRequest
              (this_01,(StructuredData *)asStack_a0,(NetworkServiceListener *)this,this);
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
    Sexy::StructuredData::~StructuredData((StructuredData *)asStack_a0);
    std::string::~string(asStack_130);
    std::string::~string(asStack_138);
    std::string::~string(asStack_140);
    std::string::~string(asStack_148);
    std::string::~string(asStack_150);
    std::string::~string(asStack_158);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZRechargeCheckServer::RequestRechargeCheck(int) */

void __thiscall
PVZRechargeCheckServer::RequestRechargeCheck(PVZRechargeCheckServer *this,int param_1)

{
  if (*(int *)(this + 0x14) != 0) {
    return;
  }
  *(int *)(this + 0x10) = param_1;
  TryRequest(this);
  return;
}


/* PVZRechargeCheckServer::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void __thiscall
PVZRechargeCheckServer::ServiceRequestFailed
          (PVZRechargeCheckServer *this,StructuredData *param_1,void *param_2)

{
  if (param_2 != this) {
    return;
  }
  Sexy::OutputDebugStrF((wchar_t *)"PVZRechargeCheckServer::ServiceRequestFailed error");
  TryRequest(param_2);
  return;
}


/* PVZRechargeCheckServer::ServiceRequestCompleted(Sexy::Buffer const*, void const*) */

void __thiscall
PVZRechargeCheckServer::ServiceRequestCompleted
          (PVZRechargeCheckServer *this,Buffer *param_1,void *param_2)

{
  if (param_2 != this) {
    return;
  }
  TryRequest(this);
  return;
}

