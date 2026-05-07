// Class: OfflineBoardMgr


/* OfflineBoardMgr::OfflineBoardMgr() */

void __thiscall OfflineBoardMgr::OfflineBoardMgr(OfflineBoardMgr *this)

{
  undefined **__n;
  
  Sexy::NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)this);
  Sexy::LazySingleton<OfflineBoardMgr>::LazySingleton((LazySingleton<OfflineBoardMgr> *)(this + 8));
  __n = &PTR_ToString_06936450;
  *(undefined ***)this = &PTR_ToString_06936450;
  *(undefined ***)(this + 8) = &PTR__OfflineBoardMgr_069364b8;
  Set8BytesTo0((string *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x10) = 0;
  std::string::append((string *)(this + 0x18),"",(size_t)__n);
  return;
}


/* OfflineBoardMgr::~OfflineBoardMgr() */

void __thiscall OfflineBoardMgr::~OfflineBoardMgr(OfflineBoardMgr *this)

{
  *(undefined ***)this = &PTR_ToString_06936450;
  *(undefined ***)(this + 8) = &PTR__OfflineBoardMgr_069364b8;
  std::vector<OfflineNoticeInfo,std::allocator<OfflineNoticeInfo>>::~vector
            ((vector<OfflineNoticeInfo,std::allocator<OfflineNoticeInfo>> *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  Sexy::LazySingleton<OfflineBoardMgr>::~LazySingleton((LazySingleton<OfflineBoardMgr> *)(this + 8))
  ;
  return;
}


/* non-virtual thunk to OfflineBoardMgr::~OfflineBoardMgr() */

void __thiscall OfflineBoardMgr::~OfflineBoardMgr(OfflineBoardMgr *this)

{
  ~OfflineBoardMgr(this + -8);
  return;
}


/* OfflineBoardMgr::~OfflineBoardMgr() */

void __thiscall OfflineBoardMgr::~OfflineBoardMgr(OfflineBoardMgr *this)

{
  ~OfflineBoardMgr(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to OfflineBoardMgr::~OfflineBoardMgr() */

void __thiscall OfflineBoardMgr::~OfflineBoardMgr(OfflineBoardMgr *this)

{
  ~OfflineBoardMgr(this + -8);
  return;
}


/* OfflineBoardMgr::OnTotalRequestFinished() */

void __thiscall OfflineBoardMgr::OnTotalRequestFinished(OfflineBoardMgr *this)

{
  char cVar1;
  OfflineBoard *this_00;
  
  cVar1 = std::vector<OfflineNoticeInfo,std::allocator<OfflineNoticeInfo>>::empty
                    ((vector<OfflineNoticeInfo,std::allocator<OfflineNoticeInfo>> *)(this + 0x20));
  if ((cVar1 == '\0') &&
     (this_00 = (OfflineBoard *)UISingletonDialog<OfflineBoard>::ShowDialog(),
     this_00 != (OfflineBoard *)0x0)) {
    OfflineBoard::InitInfoList(this_00,(vector *)(this + 0x20));
    return;
  }
  return;
}


/* OfflineBoardMgr::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void __thiscall
OfflineBoardMgr::ServiceRequestFailed(OfflineBoardMgr *this,StructuredData *param_1,void *param_2)

{
  if (param_2 != this) {
    return;
  }
  OnTotalRequestFinished(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfflineBoardMgr::TryRequest() */

void __thiscall OfflineBoardMgr::TryRequest(OfflineBoardMgr *this)

{
  PVZDB *pPVar1;
  RtName *this_00;
  long lVar2;
  char *pcVar3;
  NetworkServiceManager *this_01;
  string asStack_98 [8];
  string asStack_90 [8];
  RtId aRStack_88 [8];
  RtName aRStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this_00 = (RtName *)PVZDB::GetTable(pPVar1,0x3b);
  Sexy::RtName::RtName(aRStack_80,L"UpdateServerConfig");
  Sexy::RtDbTable::GetIdForAlias(this_00);
  Sexy::RtDbTable::GetObjectForId((RtDbTable *)this_00,aRStack_88);
  nop();
  Sexy::RtId::~RtId(aRStack_88);
  Sexy::RtName::~RtName(aRStack_80);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  lVar2 = FUN_05474184(asStack_98);
  pcVar3 = (char *)FUN_05474ee8(asStack_98,lVar2 + -1);
  if (*pcVar3 != '/') {
    FUN_05475ad8(asStack_98,&DAT_055a4690);
  }
  FUN_05475ad8(asStack_98,"profile/");
  Sexy::StrFormat("pvz2_nb_%d.txt",asStack_90,(ulong)(*(int *)(this + 0x10) + 1));
  Sexy::StructuredData::StructuredData((StructuredData *)aRStack_80);
  Sexy::StructuredData::BeginObject((StructuredData *)aRStack_80);
  FUN_031dcc6c(aRStack_88,asStack_98,asStack_90);
  Sexy::StructuredData::AddString((StructuredData *)aRStack_80,"url",(string *)aRStack_88);
  std::string::~string((string *)aRStack_88);
  Sexy::StructuredData::AddInteger((StructuredData *)aRStack_80,"timeout",10);
  Sexy::StructuredData::EndObject((StructuredData *)aRStack_80);
  this_01 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
  Sexy::NetworkServiceManager::MakeRequest
            (this_01,(StructuredData *)aRStack_80,(NetworkServiceListener *)this,this);
  Sexy::StructuredData::~StructuredData((StructuredData *)aRStack_80);
  std::string::~string(asStack_90);
  std::string::~string(asStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OfflineBoardMgr::CheckForNotice() */

void __thiscall OfflineBoardMgr::CheckForNotice(OfflineBoardMgr *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  std::vector<OfflineNoticeInfo,std::allocator<OfflineNoticeInfo>>::clear
            ((vector<OfflineNoticeInfo,std::allocator<OfflineNoticeInfo>> *)(this + 0x20));
  TryRequest(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfflineBoardMgr::OnRequestFinished(std::string) */

void __thiscall OfflineBoardMgr::OnRequestFinished(OfflineBoardMgr *this,string *param_2)

{
  int iVar1;
  bool bVar2;
  string *extraout_x1;
  wstring awStack_30 [8];
  undefined1 auStack_28 [8];
  uint local_20 [2];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(param_2,"");
  if (!bVar2) {
    OfflineNoticeInfo::OfflineNoticeInfo((OfflineNoticeInfo *)local_20);
    local_20[0] = *(uint *)(this + 0x10);
    Sexy::StrFormat(L"[OFFLINE_BOARD_TITLE_%d]",awStack_30,(ulong)local_20[0]);
    TodStringTranslate(awStack_30);
    FUN_054766c8(auStack_18,auStack_28);
    FUN_05476c50(auStack_28);
    FUN_05476c50(awStack_30);
    Sexy::UTF8StringToWString((Sexy *)param_2,extraout_x1);
    FUN_054766c8(auStack_10,auStack_28);
    FUN_05476c50(auStack_28);
    std::vector<OfflineNoticeInfo,std::allocator<OfflineNoticeInfo>>::push_back
              ((vector<OfflineNoticeInfo,std::allocator<OfflineNoticeInfo>> *)(this + 0x20),
               (OfflineNoticeInfo *)local_20);
    iVar1 = *(int *)(this + 0x10);
    *(int *)(this + 0x10) = iVar1 + 1;
    if (iVar1 + 1 < 2) {
      TryRequest(this);
    }
    else {
      OnTotalRequestFinished(this);
    }
    OfflineNoticeInfo::~OfflineNoticeInfo((OfflineNoticeInfo *)local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfflineBoardMgr::ServiceRequestCompleted(Sexy::StructuredData const*, void const*) */

void __thiscall
OfflineBoardMgr::ServiceRequestCompleted
          (OfflineBoardMgr *this,StructuredData *param_1,void *param_2)

{
  long lVar1;
  char *__s;
  undefined1 *__n;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == this) {
    lVar1 = Sexy::StructuredData::IntegerForPath(param_1,"$.statusCode",-1);
    if ((lVar1 == 200) || (lVar1 == -1)) {
      Set8BytesTo0(asStack_18);
      __n = &DAT_055923fe;
      __s = (char *)Sexy::StructuredData::StringForPath(param_1,"$.response","");
      std::string::append(asStack_18,__s,(size_t)__n);
      FUN_05475d88(asStack_10,asStack_18);
      OnRequestFinished(param_2,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
    }
    else {
      (**(code **)(*(long *)param_2 + 0x38))(param_2,param_1,param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

