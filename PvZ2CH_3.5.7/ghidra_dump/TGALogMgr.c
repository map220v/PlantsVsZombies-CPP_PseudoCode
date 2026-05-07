// Class: TGALogMgr


/* TGALogMgr::appendMsg(std::string const&, bool) */

void __thiscall TGALogMgr::appendMsg(TGALogMgr *this,string *param_1,bool param_2)

{
  thunk_FUN_054757c0(this + 0x20);
  if (param_2) {
    return;
  }
  FUN_05475ad8(this + 0x20,&DAT_055e9e80);
  return;
}


/* TGALogMgr::StartOnlineLog() */

void __thiscall TGALogMgr::StartOnlineLog(TGALogMgr *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x60) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::init() */

void __thiscall TGALogMgr::init(TGALogMgr *this)

{
  PVZDB *pPVar1;
  RtName *this_00;
  long lVar2;
  long extraout_x0;
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this_00 = (RtName *)PVZDB::GetTable(pPVar1,0x3b);
  if (this_00 != (RtName *)0x0) {
    Sexy::RtName::RtName(aRStack_18,L"TGALogConfig");
    Sexy::RtDbTable::GetIdForAlias(this_00);
    lVar2 = Sexy::RtDbTable::GetObjectForId((RtDbTable *)this_00,aRStack_20);
    Sexy::RtId::~RtId(aRStack_20);
    Sexy::RtName::~RtName(aRStack_18);
    if ((lVar2 != 0) && (nop(), extraout_x0 != 0)) {
      thunk_FUN_05475e00(this + 0x10,extraout_x0 + 0x10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TGALogMgr::TGALogMgr() */

void __thiscall TGALogMgr::TGALogMgr(TGALogMgr *this)

{
  undefined **__n;
  undefined4 uVar1;
  
  Sexy::NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)this);
  Sexy::LazySingleton<TGALogMgr>::LazySingleton((LazySingleton<TGALogMgr> *)(this + 8));
  __n = &PTR_ToString_06733ee0;
  *(undefined ***)this = &PTR_ToString_06733ee0;
  *(undefined ***)(this + 8) = &PTR__TGALogMgr_06733f48;
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x18));
  Set8BytesTo0((string *)(this + 0x20));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x28));
  Set8BytesTo0((string *)(this + 0x58));
  std::string::append((string *)(this + 0x10),"",(size_t)__n);
  std::string::append((string *)(this + 0x18),"",(size_t)__n);
  std::string::append((string *)(this + 0x20),"",(size_t)__n);
  std::string::append((string *)(this + 0x58),"",(size_t)__n);
  init(this);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 100) = uVar1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x60) = uVar1;
  return;
}


/* TGALogMgr::~TGALogMgr() */

void __thiscall TGALogMgr::~TGALogMgr(TGALogMgr *this)

{
  *(undefined ***)this = &PTR_ToString_06733ee0;
  *(undefined ***)(this + 8) = &PTR__TGALogMgr_06733f48;
  std::string::~string((string *)(this + 0x58));
  std::
  map<int,std::vector<CustomSegment,std::allocator<CustomSegment>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CustomSegment,std::allocator<CustomSegment>>>>>
  ::~map((map<int,std::vector<CustomSegment,std::allocator<CustomSegment>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CustomSegment,std::allocator<CustomSegment>>>>>
          *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  Sexy::LazySingleton<TGALogMgr>::~LazySingleton((LazySingleton<TGALogMgr> *)(this + 8));
  return;
}


/* non-virtual thunk to TGALogMgr::~TGALogMgr() */

void __thiscall TGALogMgr::~TGALogMgr(TGALogMgr *this)

{
  ~TGALogMgr(this + -8);
  return;
}


/* TGALogMgr::~TGALogMgr() */

void __thiscall TGALogMgr::~TGALogMgr(TGALogMgr *this)

{
  ~TGALogMgr(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TGALogMgr::~TGALogMgr() */

void __thiscall TGALogMgr::~TGALogMgr(TGALogMgr *this)

{
  ~TGALogMgr(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::GetSegForId(int, int) */

void TGALogMgr::GetSegForId(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  GriditemBarrelZombieDes *pGVar3;
  long lVar4;
  int in_w2;
  string *in_x8;
  int local_54 [3];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_54[0] = param_2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_48 = std::
             map<int,std::vector<CustomSegment,std::allocator<CustomSegment>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CustomSegment,std::allocator<CustomSegment>>>>>
             ::find((map<int,std::vector<CustomSegment,std::allocator<CustomSegment>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CustomSegment,std::allocator<CustomSegment>>>>>
                     *)((ulong)(uint)param_1 + 0x28),local_54);
  local_30[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)((ulong)(uint)param_1 + 0x28));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)local_30);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
    std::vector<CustomSegment,std::allocator<CustomSegment>>::operator=
              ((vector<CustomSegment,std::allocator<CustomSegment>> *)avStack_20,
               (vector *)(lVar4 + 8));
  }
  cVar2 = std::vector<CustomSegment,std::allocator<CustomSegment>>::empty
                    ((vector<CustomSegment,std::allocator<CustomSegment>> *)avStack_20);
  if (cVar2 == '\0') {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      pGVar3 = (GriditemBarrelZombieDes *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      GriditemBarrelZombieDes::GriditemBarrelZombieDes((GriditemBarrelZombieDes *)local_30,pGVar3);
      if ((int)local_30[0] == in_w2) {
        FUN_05475d88();
        PakRecord::~PakRecord((PakRecord *)local_30);
        goto LAB_03b66194;
      }
      PakRecord::~PakRecord((PakRecord *)local_30);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_40);
    }
  }
  std::string::string(in_x8,"");
  nop();
LAB_03b66194:
  std::vector<CustomSegment,std::allocator<CustomSegment>>::~vector
            ((vector<CustomSegment,std::allocator<CustomSegment>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::clearSegments(int) */

void __thiscall TGALogMgr::clearSegments(TGALogMgr *this,int param_1)

{
  bool bVar1;
  long lVar2;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  local_18 = std::
             map<int,std::vector<CustomSegment,std::allocator<CustomSegment>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CustomSegment,std::allocator<CustomSegment>>>>>
             ::find((map<int,std::vector<CustomSegment,std::allocator<CustomSegment>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CustomSegment,std::allocator<CustomSegment>>>>>
                     *)(this + 0x28),local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x28));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    std::vector<CustomSegment,std::allocator<CustomSegment>>::clear
              ((vector<CustomSegment,std::allocator<CustomSegment>> *)(lVar2 + 8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogSegments(int, int, std::string const&) */

void __thiscall TGALogMgr::LogSegments(TGALogMgr *this,int param_1,int param_2,string *param_3)

{
  vector<CustomSegment,std::allocator<CustomSegment>> *this_00;
  int local_24;
  string asStack_20 [8];
  PakRecord aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24 = param_1;
  this_00 = (vector<CustomSegment,std::allocator<CustomSegment>> *)
            std::
            map<int,std::vector<CustomSegment,std::allocator<CustomSegment>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CustomSegment,std::allocator<CustomSegment>>>>>
            ::operator[]((map<int,std::vector<CustomSegment,std::allocator<CustomSegment>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CustomSegment,std::allocator<CustomSegment>>>>>
                          *)(this + 0x28),&local_24);
  FUN_05475d88(asStack_20,param_3);
  CustomSegment::CustomSegment((CustomSegment *)aPStack_18,param_2,asStack_20);
  std::vector<CustomSegment,std::allocator<CustomSegment>>::push_back
            (this_00,(CustomSegment *)aPStack_18);
  PakRecord::~PakRecord(aPStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::requestSendMsg() */

void __thiscall TGALogMgr::requestSendMsg(TGALogMgr *this)

{
  NetworkServiceManager *this_00;
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StructuredData::StructuredData(aSStack_80);
  Sexy::StructuredData::BeginObject(aSStack_80);
  Sexy::StructuredData::AddString(aSStack_80,"url",(string *)(this + 0x10));
  Sexy::StructuredData::BeginObject(aSStack_80,"postData");
  Sexy::StructuredData::AddString(aSStack_80,"key",(string *)(this + 0x18));
  Sexy::StructuredData::AddString(aSStack_80,"message",(string *)(this + 0x20));
  Sexy::StructuredData::EndObject(aSStack_80);
  Sexy::StructuredData::EndObject(aSStack_80);
  this_00 = (NetworkServiceManager *)Sexy::NetworkServiceManager::DefaultNetworkServiceManager();
  Sexy::NetworkServiceManager::MakeRequest(this_00,aSStack_80,(NetworkServiceListener *)this,this);
  Sexy::StructuredData::~StructuredData(aSStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::sendMsg() */

void TGALogMgr::sendMsg(void)

{
  char cVar1;
  TGALogMgr *in_x0;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  string asStack_10 [8];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)in_x0,___stack_chk_guard,in_x2,in_x3,in_x4);
  if (cVar1 != '\0') {
    std::operator+((string *)(in_x0 + 0x20),"|");
    FUN_05474278(in_x0 + 0x58,asStack_10);
    std::string::~string(asStack_10);
  }
  requestSendMsg(in_x0);
  FUN_05474ff8(in_x0 + 0x20);
  FUN_05474ff8(in_x0 + 0x18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::sendLog(DValue const&) */

void TGALogMgr::sendLog(DValue *param_1)

{
  undefined8 uVar1;
  char cVar2;
  wchar16 *pwVar3;
  vector *pvVar4;
  ulong uVar5;
  exception_ptr *in_x1;
  string *psVar6;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  ulong uVar7;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_03b64234(*(undefined4 *)(in_x1 + 8));
  if (cVar2 != '\0') {
    pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    psVar6 = asStack_28;
    std::string::string((string *)&local_20,"DisableTGALog");
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar3,(wchar16 *)&local_20,(LineBreakCategory *)psVar6,in_x3,in_x4);
    std::string::~string((string *)&local_20);
    nop();
    if (cVar2 == '\0') {
      LogServer::Instance();
      pvVar4 = (vector *)std::__exception_ptr::exception_ptr::_M_get(in_x1);
      std::vector<DValue,std::allocator<DValue>>::vector
                ((vector<DValue,std::allocator<DValue>> *)&local_20,pvVar4);
      uVar7 = 0;
      while( true ) {
        uVar1 = local_20;
        uVar5 = FUN_03b6425c(local_20,local_18);
        if (uVar5 <= uVar7) break;
        FUN_03b64268(uVar1,uVar7);
        ::DValue::asString();
        appendMsg((TGALogMgr *)param_1,asStack_28,uVar7 == uVar5 - 1);
        std::string::~string(asStack_28);
        uVar7 = uVar7 + 1;
      }
      sendMsg();
      std::vector<DValue,std::allocator<DValue>>::~vector
                ((vector<DValue,std::allocator<DValue>> *)&local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::Log(std::string const&, std::vector<std::string, std::allocator<std::string > >
   const&) */

void __thiscall TGALogMgr::Log(TGALogMgr *this,string *param_1,vector *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  Log_TGA aLStack_28 [16];
  DValue aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00((string *)(this + 0x18));
  Log_TGA::Log_TGA(aLStack_28);
  ::DValue::DValue(aDStack_18);
  puVar1 = (undefined8 *)Log_TGA::getLogInfo(aLStack_28,(string *)(this + 0x18),aDStack_18);
  plVar2 = (long *)(**(code **)*puVar1)(puVar1,aDStack_18);
  (**(code **)(*plVar2 + 0x30))(plVar2,param_2,aDStack_18);
  sendLog((DValue *)this);
  ::DValue::~DValue(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::UseLevelItem(std::string const&, int, int) */

void __thiscall TGALogMgr::UseLevelItem(TGALogMgr *this,string *param_1,int param_2,int param_3)

{
  ProfileMgr *this_00;
  BehaviorLog *this_01;
  string asStack_50 [8];
  string asStack_48 [8];
  DString aDStack_40 [16];
  string asStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  DString::DString(aDStack_40,asStack_30);
  std::string::~string(asStack_30);
  DString::operator_cast_to_string(aDStack_40);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_30);
  std::string::~string(asStack_30);
  BehaviorLog::getModeString(this_01);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_50);
  DString::DString((DString *)asStack_30,(param_2 ^ param_2 >> 0x1f) - (param_2 >> 0x1f));
  DString::operator_cast_to_string((DString *)asStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_48);
  std::string::~string(asStack_48);
  DString::~DString((DString *)asStack_30);
  DString::DString((DString *)asStack_30,(param_3 ^ param_3 >> 0x1f) - (param_3 >> 0x1f));
  DString::operator_cast_to_string((DString *)asStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_48);
  std::string::~string(asStack_48);
  DString::~DString((DString *)asStack_30);
  std::string::string(asStack_30,"10005");
  Log(this,asStack_30,(vector *)avStack_20);
  std::string::~string(asStack_30);
  nop();
  std::string::~string(asStack_50);
  DString::~DString(aDStack_40);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogPlantAdventure(int, PlantAdventureInfo, int) */

void __thiscall TGALogMgr::LogPlantAdventure(TGALogMgr *this,int param_1,long param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  char *__s;
  int iVar6;
  DString *__n;
  ulong uVar7;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  string asStack_1a8 [8];
  DString aDStack_1a0 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_190);
  DString::DString(aDStack_1a0,param_1);
  DString::operator_cast_to_string(aDStack_1a0);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_190,asStack_1a8);
  std::string::~string(asStack_1a8);
  DString::~DString(aDStack_1a0);
  DString::DString(aDStack_1a0,*(int *)(param_3 + 4));
  DString::operator_cast_to_string(aDStack_1a0);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_190,asStack_1a8);
  std::string::~string(asStack_1a8);
  DString::~DString(aDStack_1a0);
  std::string::string(asStack_1b8,"");
  nop();
  if (param_4 != 0) {
    Sexy::StrFormat("%02d:%02d:00",aDStack_1a0,(ulong)(uint)((param_4 / 0x3c) % 0x3c),
                    (ulong)(uint)(param_4 % 0x3c));
    FUN_05474278(asStack_1b8,aDStack_1a0);
    std::string::~string((string *)aDStack_1a0);
  }
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_190,asStack_1b8);
  uVar7 = 0;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(param_3 + 0x30));
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(param_3 + 0x30));
  std::sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>(uVar2,uVar3);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string((string *)aDStack_1a0,"");
  FUN_05462980(auStack_178,aDStack_1a0);
  std::string::~string((string *)aDStack_1a0);
  nop();
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  uVar4 = FUN_03b64240(uVar2,*(undefined8 *)(param_3 + 0x38));
  if (uVar4 != 0) {
    do {
      if (uVar7 == uVar4 - 1) {
        piVar5 = (int *)FUN_03b6424c(uVar2,uVar7);
        DString::DString(aDStack_1a0,*piVar5);
        uVar2 = DString::c_str(aDStack_1a0);
        FUN_054603b8(auStack_168,uVar2);
        DString::~DString(aDStack_1a0);
      }
      else {
        piVar5 = (int *)FUN_03b6424c(uVar2,uVar7);
        DString::DString(aDStack_1a0,*piVar5);
        uVar2 = DString::c_str(aDStack_1a0);
        uVar2 = FUN_054603b8(auStack_168,uVar2);
        FUN_054603b8(uVar2,&DAT_05593348);
        DString::~DString(aDStack_1a0);
      }
      uVar7 = uVar7 + 1;
      uVar2 = *(undefined8 *)(param_3 + 0x30);
      uVar4 = FUN_03b64240(uVar2,*(undefined8 *)(param_3 + 0x38));
    } while (uVar7 < uVar4);
  }
  FUN_05462824(aDStack_1a0,auStack_178);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_190,(string *)aDStack_1a0);
  std::string::~string((string *)aDStack_1a0);
  std::string::string((string *)aDStack_1a0,"0");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_190,(string *)aDStack_1a0);
  std::string::~string((string *)aDStack_1a0);
  nop();
  if (param_1 == 3) {
    iVar6 = 0x14;
  }
  else {
    iVar6 = 0;
    if (param_1 == 5) {
      iVar6 = *(int *)(param_3 + 0x18);
    }
  }
  DString::DString(aDStack_1a0,iVar6);
  DString::operator_cast_to_string(aDStack_1a0);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_190,asStack_1a8);
  std::string::~string(asStack_1a8);
  DString::~DString(aDStack_1a0);
  __n = aDStack_1a0;
  std::string::string(asStack_1b0,"");
  nop();
  if (*(int *)(param_3 + 0xc) != -1) {
    DString::DString(aDStack_1a0,*(int *)(param_3 + 0xc));
    __s = (char *)DString::c_str(aDStack_1a0);
    std::string::append(asStack_1b0,__s,(size_t)__n);
    DString::~DString(aDStack_1a0);
  }
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_190,asStack_1b0);
  DString::DString(aDStack_1a0,*(int *)(param_3 + 0x10));
  DString::operator_cast_to_string(aDStack_1a0);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_190,asStack_1a8);
  std::string::~string(asStack_1a8);
  DString::~DString(aDStack_1a0);
  DString::DString(aDStack_1a0,*(int *)(param_3 + 8));
  DString::operator_cast_to_string(aDStack_1a0);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_190,asStack_1a8);
  std::string::~string(asStack_1a8);
  DString::~DString(aDStack_1a0);
  std::string::string((string *)aDStack_1a0,"10007");
  Log(this,(string *)aDStack_1a0,(vector *)avStack_190);
  std::string::~string((string *)aDStack_1a0);
  nop();
  std::string::~string(asStack_1b0);
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_1b8);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_190);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogFirstRecharge(int, std::map<int, int, std::less<int>, std::allocator<std::pair<int
   const, int> > > const&) */

void __thiscall TGALogMgr::LogFirstRecharge(TGALogMgr *this,int param_1,map *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 local_50;
  undefined8 local_48;
  DString aDStack_40 [16];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_40);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  DString::DString(aDStack_30,param_1);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)&local_48);
  std::string::~string((string *)&local_48);
  DString::~DString(aDStack_30);
  local_50 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        param_2);
  local_48 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  iVar4 = 0;
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)&local_48), bVar1
        ) {
    piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
    iVar3 = piVar2[1];
    if (*piVar2 != 0xbc0) {
      DString::DString(aDStack_30,*piVar2);
      DString::operator+=(aDStack_40,aDStack_30);
      DString::~DString(aDStack_30);
      iVar3 = iVar4;
    }
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_50);
    iVar4 = iVar3;
  }
  DString::operator_cast_to_string(aDStack_40);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)aDStack_30);
  std::string::~string((string *)aDStack_30);
  GetSegForId((int)this,0x2718);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)aDStack_30);
  std::string::~string((string *)aDStack_30);
  DString::DString(aDStack_30,iVar4);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)&local_48);
  std::string::~string((string *)&local_48);
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,0x2718);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,(string *)&local_48,(vector *)avStack_20);
  std::string::~string((string *)&local_48);
  DString::~DString(aDStack_30);
  clearSegments(this,0x2718);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  DString::~DString(aDStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogFirstRecharge(TGAFirstRechargeData) */

void __thiscall TGALogMgr::LogFirstRecharge(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  DString::DString(aDStack_30,0x2718);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogDaveTreasure(int, TGALogDaveTreasureData) */

void __thiscall TGALogMgr::LogDaveTreasure(TGALogMgr *this,int param_1,string *param_3)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  DString::DString(aDStack_30,param_1);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x38);
  DString::DString(aDStack_30,0x272f);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogMinigame(int, TGALogMinigameData) */

void __thiscall TGALogMgr::LogMinigame(TGALogMgr *this,int param_1,string *param_3)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  DString::DString(aDStack_30,param_1);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x38);
  DString::DString(aDStack_30,0x272e);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogRechargeReward(int, TGALogRechargeRewardData) */

void __thiscall TGALogMgr::LogRechargeReward(TGALogMgr *this,int param_1,string *param_3)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  DString::DString(aDStack_30,param_1);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x30);
  DString::DString(aDStack_30,0x272d);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogDiamond(std::string, int, int, int, int) */

void __thiscall
TGALogMgr::LogDiamond
          (TGALogMgr *this,string *param_2,int param_3,int param_4,int param_5,int param_6)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  DString::DString(aDStack_30,param_3);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,param_4);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,param_5);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,param_6);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,0x272a);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogPurchase(TGALogPurchaseData) */

void __thiscall TGALogMgr::LogPurchase(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x38);
  DString::DString(aDStack_30,0x2729);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogPlantLevelup(int, TGALogPlantLevelupData) */

void __thiscall TGALogMgr::LogPlantLevelup(TGALogMgr *this,int param_1,string *param_3)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  DString::DString(aDStack_30,param_1);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x38);
  DString::DString(aDStack_30,0x2727);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogLimitedSummon(TGALimitedSummonData const&) */

void __thiscall TGALogMgr::LogLimitedSummon(TGALogMgr *this,TGALimitedSummonData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  DString::DString(aDStack_30,0x277f);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogCarnivalData(TGACarnivalData const&) */

void __thiscall TGALogMgr::LogCarnivalData(TGALogMgr *this,TGACarnivalData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  DString::DString(aDStack_30,0x2780);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogNewYearGoodsData(TGANewYearGoodsData const&) */

void __thiscall TGALogMgr::LogNewYearGoodsData(TGALogMgr *this,TGANewYearGoodsData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  DString::DString(aDStack_30,0x2781);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogGeneEnhancementData(TGAGeneEnhancementData const&) */

void __thiscall TGALogMgr::LogGeneEnhancementData(TGALogMgr *this,TGAGeneEnhancementData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  DString::DString(aDStack_30,0x2783);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogNewuserPresent(int, std::string, std::string, int) */

void __thiscall
TGALogMgr::LogNewuserPresent
          (TGALogMgr *this,int param_1,string *param_3,string *param_4,int param_5)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  DString::DString(aDStack_30,param_1);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_4);
  DString::DString(aDStack_30,param_5);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,0x2723);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogDailySign(int, int, std::string) */

void __thiscall TGALogMgr::LogDailySign(TGALogMgr *this,int param_1,int param_2,string *param_4)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  DString::DString(aDStack_30,param_1);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,param_2);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_4);
  DString::DString(aDStack_30,0x2719);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogCoin(int, int, int) */

void __thiscall TGALogMgr::LogCoin(TGALogMgr *this,int param_1,int param_2,int param_3)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  DString::DString(aDStack_30,param_1);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,param_2);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,param_3);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,0x271d);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogPennyTreasure(int, TGALogPennyTreasureData) */

void __thiscall TGALogMgr::LogPennyTreasure(TGALogMgr *this,int param_1,string *param_3)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  DString::DString(aDStack_30,param_1);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x28);
  DString::DString(aDStack_30,0x271e);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogTravelLog(int, TGALogTravelLogData) */

void __thiscall TGALogMgr::LogTravelLog(TGALogMgr *this,int param_1,string *param_3)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  DString::DString(aDStack_30,param_1);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x28);
  DString::DString(aDStack_30,0x2722);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogPlantTrial(int, int, int, int, int) */

void __thiscall
TGALogMgr::LogPlantTrial
          (TGALogMgr *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  DString::DString(aDStack_30,param_1);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,param_2);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,param_3);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,param_4);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,param_5);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,0x2726);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogTransGenosis(int, TGALogTransGenosisData) */

void __thiscall TGALogMgr::LogTransGenosis(TGALogMgr *this,int param_1,string *param_3)

{
  string *psVar1;
  string *psVar2;
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  DString::DString(aDStack_30,param_1);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  psVar2 = param_3;
  do {
    psVar1 = psVar2 + 8;
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)avStack_20,psVar2);
    psVar2 = psVar1;
  } while (psVar1 != param_3 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,psVar1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x38);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x40);
  DString::DString(aDStack_30,0x271f);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogJoust(int, TGALogJoustData) */

void __thiscall TGALogMgr::LogJoust(TGALogMgr *this,int param_1,string *param_3)

{
  string *psVar1;
  string *psVar2;
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  DString::DString(aDStack_30,param_1);
  DString::operator_cast_to_string(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x38);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x40);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3 + 0x48);
  psVar2 = param_3 + 0x50;
  do {
    psVar1 = psVar2 + 8;
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)avStack_20,psVar2);
    psVar2 = psVar1;
  } while (psVar1 != param_3 + 0x90);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,psVar1);
  DString::DString(aDStack_30,0x2721);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogEndless(TGALogEndlessData) */

void __thiscall TGALogMgr::LogEndless(TGALogMgr *this,string *param_2)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  string asStack_40 [8];
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  this_00 = (vector<std::string,std::allocator<std::string>> *)(param_2 + 0x40);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x38);
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty(this_00);
  if (cVar1 == '\0') {
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    local_30[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)this_00);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)local_30), bVar2)
    {
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      FUN_05475d88(asStack_40,uVar3);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_40);
      std::string::~string(asStack_40);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
  }
  else {
    iVar4 = 8;
    do {
      std::string::string((string *)local_30,"");
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)local_30);
      std::string::~string((string *)local_30);
      nop();
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x58);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x60);
  DString::DString((DString *)local_30,0x2720);
  DString::operator_cast_to_string((DString *)local_30);
  Log(this,(string *)&local_38,(vector *)avStack_20);
  std::string::~string((string *)&local_38);
  DString::~DString((DString *)local_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogPlantSpecialOffer(TGAPlantSpecialOfferData) */

void __thiscall TGALogMgr::LogPlantSpecialOffer(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x30);
  DString::DString(aDStack_30,0x2737);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogLimitedGacha(TGALimitedGachaData) */

void __thiscall TGALogMgr::LogLimitedGacha(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  DString::DString(aDStack_30,0x2735);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogLimitedLottery(TGALimitedLotteryData) */

void __thiscall TGALogMgr::LogLimitedLottery(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x30);
  DString::DString(aDStack_30,0x2734);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogRechargeBundle(TGARechargeBundleData) */

void __thiscall TGALogMgr::LogRechargeBundle(TGALogMgr *this,string *param_2)

{
  int *piVar1;
  char *pcVar2;
  long lVar3;
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  do {
    piVar1 = (int *)FUN_03b64254(*(undefined8 *)(param_2 + 0x30),lVar3);
    if ((*piVar1 == 0) || (piVar1[1] == 0)) {
      std::string::string((string *)aDStack_30,"");
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)aDStack_30)
      ;
      std::string::~string((string *)aDStack_30);
      nop();
      std::string::string((string *)aDStack_30,"");
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)aDStack_30)
      ;
      std::string::~string((string *)aDStack_30);
      nop();
    }
    else {
      DString::DString(aDStack_30,piVar1[1]);
      pcVar2 = (char *)DString::c_str(aDStack_30);
      std::string::string(asStack_38,pcVar2);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
      std::string::~string(asStack_38);
      nop();
      DString::~DString(aDStack_30);
      piVar1 = (int *)FUN_03b64254(*(undefined8 *)(param_2 + 0x30),lVar3);
      DString::DString(aDStack_30,*piVar1);
      pcVar2 = (char *)DString::c_str(aDStack_30);
      std::string::string(asStack_38,pcVar2);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
      std::string::~string(asStack_38);
      nop();
      DString::~DString(aDStack_30);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 5);
  lVar3 = 0;
  do {
    piVar1 = (int *)FUN_03b64254(*(undefined8 *)(param_2 + 0x48),lVar3);
    if ((*piVar1 == 0) || (piVar1[1] == 0)) {
      std::string::string((string *)aDStack_30,"");
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)aDStack_30)
      ;
      std::string::~string((string *)aDStack_30);
      nop();
      std::string::string((string *)aDStack_30,"");
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)aDStack_30)
      ;
      std::string::~string((string *)aDStack_30);
      nop();
    }
    else {
      DString::DString(aDStack_30,piVar1[1]);
      pcVar2 = (char *)DString::c_str(aDStack_30);
      std::string::string(asStack_38,pcVar2);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
      std::string::~string(asStack_38);
      nop();
      DString::~DString(aDStack_30);
      piVar1 = (int *)FUN_03b64254(*(undefined8 *)(param_2 + 0x48),lVar3);
      DString::DString(aDStack_30,*piVar1);
      pcVar2 = (char *)DString::c_str(aDStack_30);
      std::string::string(asStack_38,pcVar2);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
      std::string::~string(asStack_38);
      nop();
      DString::~DString(aDStack_30);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 5);
  DString::DString(aDStack_30,0x2738);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogGroupBuy(TGAGroupBuyData) */

void __thiscall TGALogMgr::LogGroupBuy(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x38);
  DString::DString(aDStack_30,0x2733);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogVaseBreaker(TGAVaseBreakerData) */

void __thiscall TGALogMgr::LogVaseBreaker(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x30);
  DString::DString(aDStack_30,0x2731);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogConsumeReceive(TGAConsumeReceiveData) */

void __thiscall TGALogMgr::LogConsumeReceive(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  DString::DString(aDStack_30,0x2747);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogMinorLottery(TGAMinorLotteryData) */

void __thiscall TGALogMgr::LogMinorLottery(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x38);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x40);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x48);
  DString::DString(aDStack_30,0x273a);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogAD(std::string, std::string, int, std::string, std::string) */

void __thiscall
TGALogMgr::LogAD(TGALogMgr *this,string *param_2,string *param_3,int param_4,string *param_5,
                string *param_6)

{
  char *pcVar1;
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  DString::DString(aDStack_30,param_2);
  pcVar1 = (char *)DString::c_str(aDStack_30);
  std::string::string(asStack_38,pcVar1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  nop();
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3);
  DString::DString(aDStack_30,param_4);
  pcVar1 = (char *)DString::c_str(aDStack_30);
  std::string::string(asStack_38,pcVar1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  nop();
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,param_5);
  pcVar1 = (char *)DString::c_str(aDStack_30);
  std::string::string(asStack_38,pcVar1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  nop();
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,param_6);
  pcVar1 = (char *)DString::c_str(aDStack_30);
  std::string::string(asStack_38,pcVar1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  nop();
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,0x2730);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogAD(std::string, std::string, std::string, std::string, std::string) */

void __thiscall
TGALogMgr::LogAD(TGALogMgr *this,string *param_2,string *param_3,string *param_4,string *param_5,
                string *param_6)

{
  char *pcVar1;
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  DString::DString(aDStack_30,param_2);
  pcVar1 = (char *)DString::c_str(aDStack_30);
  std::string::string(asStack_38,pcVar1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  nop();
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_3);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_4);
  DString::DString(aDStack_30,param_5);
  pcVar1 = (char *)DString::c_str(aDStack_30);
  std::string::string(asStack_38,pcVar1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  nop();
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,param_6);
  pcVar1 = (char *)DString::c_str(aDStack_30);
  std::string::string(asStack_38,pcVar1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_38);
  std::string::~string(asStack_38);
  nop();
  DString::~DString(aDStack_30);
  DString::DString(aDStack_30,0x2730);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogRichMan(TGARichManData) */

void __thiscall TGALogMgr::LogRichMan(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x38);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x40);
  DString::DString(aDStack_30,0x273e);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  clearSegments(this,0x273e);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogLuckBag(TGALuckBagData) */

void __thiscall TGALogMgr::LogLuckBag(TGALogMgr *this,string *param_2)

{
  string *psVar1;
  string *psVar2;
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  psVar2 = param_2 + 8;
  do {
    psVar1 = psVar2 + 8;
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)avStack_20,psVar2);
    psVar2 = psVar1;
  } while (psVar1 != param_2 + 0x38);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,psVar1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x40);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x48);
  DString::DString(aDStack_30,0x273d);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogConsumeReceiveExtra(TGAConsumeReceiveData) */

void __thiscall TGALogMgr::LogConsumeReceiveExtra(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  DString::DString(aDStack_30,0x2746);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogDailySignActivity(TGADailySignActivity) */

void __thiscall TGALogMgr::LogDailySignActivity(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  DString::DString(aDStack_30,0x2743);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogDailyRechargeReward(TGADailyRechargeReward) */

void __thiscall TGALogMgr::LogDailyRechargeReward(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x30);
  DString::DString(aDStack_30,0x2745);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogSecretGacha(TGASecretGacha) */

void __thiscall TGALogMgr::LogSecretGacha(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  DString::DString(aDStack_30,0x274a);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogSecretStore(TGASecretStore) */

void __thiscall TGALogMgr::LogSecretStore(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  DString::DString(aDStack_30,0x2753);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogMysteryStore(TGAMysteryStore) */

void __thiscall TGALogMgr::LogMysteryStore(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  DString::DString(aDStack_30,0x2757);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  clearSegments(this,0x2757);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogPigBank(TGAPigBankData) */

void __thiscall TGALogMgr::LogPigBank(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  DString::DString(aDStack_30,0x2740);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogFestivalRedPacket(TGAFestivalRedPacketData) */

void __thiscall TGALogMgr::LogFestivalRedPacket(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  DString::DString(aDStack_30,0x2741);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogCrack(TGACrackData) */

void __thiscall TGALogMgr::LogCrack(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  DString::DString(aDStack_30,0x2742);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogDangerRoomSpecialOffer(TGADangerRoomSpecialOfferData) */

void __thiscall TGALogMgr::LogDangerRoomSpecialOffer(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  DString::DString(aDStack_30,0x273b);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogOneYuanRedPacket(TGAOneYuanRedPacketData) */

void __thiscall TGALogMgr::LogOneYuanRedPacket(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  DString::DString(aDStack_30,0x273f);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  clearSegments(this,0x273f);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogPlantInfo(TGAPlantData) */

void __thiscall TGALogMgr::LogPlantInfo(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  DString::DString(aDStack_30,0x273c);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogRenaissanceChallenge(TGARenaissanceChallengeData) */

void __thiscall TGALogMgr::LogRenaissanceChallenge(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  DString::DString(aDStack_30,0x274c);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogBossChallenge(TGABossChallengeData) */

void __thiscall TGALogMgr::LogBossChallenge(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x38);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x40);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x48);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x50);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x58);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x60);
  DString::DString(aDStack_30,0x274b);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogHappyVaseBreaker(TGAHappyVaseBreakerData) */

void __thiscall TGALogMgr::LogHappyVaseBreaker(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x30);
  DString::DString(aDStack_30,0x2749);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogRechargeDailySign(TGARechargeDailySignData) */

void __thiscall TGALogMgr::LogRechargeDailySign(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  DString::DString(aDStack_30,0x274e);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogDiscountShop(TGADiscountShopData) */

void __thiscall TGALogMgr::LogDiscountShop(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  DString::DString(aDStack_30,0x274f);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogNewRecallSign(TGANewRecallSignData) */

void __thiscall TGALogMgr::LogNewRecallSign(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  DString::DString(aDStack_30,0x2750);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogNewRecallBank(TGANewRecallBankData) */

void __thiscall TGALogMgr::LogNewRecallBank(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  DString::DString(aDStack_30,0x2751);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogNewRecallBundle(TGANewRecallBundleData) */

void __thiscall TGALogMgr::LogNewRecallBundle(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  DString::DString(aDStack_30,0x2752);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogPennyPursuit(TGAPennyPursuitData) */

void __thiscall TGALogMgr::LogPennyPursuit(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x38);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x40);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x48);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x50);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x58);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x60);
  DString::DString(aDStack_30,0x2754);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogNewPVP(TGANewPVPData) */

void __thiscall TGALogMgr::LogNewPVP(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x38);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x40);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x48);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x50);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x58);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x60);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x68);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x70);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x78);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x80);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x88);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x90);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x98);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0xa0);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0xa8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0xb0);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0xb8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0xc0);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 200);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0xd0);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0xd8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0xe0);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0xe8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0xf0);
  DString::DString(aDStack_30,0x2784);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogNewPVPPlus(TGANewPVPPlusData) */

void __thiscall TGALogMgr::LogNewPVPPlus(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x30);
  DString::DString(aDStack_30,0x2787);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogIOSRealNameLogin() */

void __thiscall TGALogMgr::LogIOSRealNameLogin(TGALogMgr *this)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (DAT_06acc1f0 == '\0') {
    DAT_06acc1f0 = '\x01';
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    DString::DString(aDStack_30,0x2756);
    DString::operator_cast_to_string(aDStack_30);
    Log(this,asStack_38,(vector *)avStack_20);
    std::string::~string(asStack_38);
    DString::~DString(aDStack_30);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogAnniversaryTreasure(TGAAnniversaryTreasureData) */

void __thiscall TGALogMgr::LogAnniversaryTreasure(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x38);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x40);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x48);
  DString::DString(aDStack_30,0x2755);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogMonthlyCardSpecial(TGAMonthlyCardSpecialData) */

void __thiscall TGALogMgr::LogMonthlyCardSpecial(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  DString::DString(aDStack_30,0x2758);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogCustomVoting(TGACustomVoting) */

void __thiscall TGALogMgr::LogCustomVoting(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  DString::DString(aDStack_30,0x2759);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogFightZodiac(TGAFightZodiac) */

void __thiscall TGALogMgr::LogFightZodiac(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x38);
  DString::DString(aDStack_30,0x275a);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogFoolChallenge(TGAFoolData) */

void __thiscall TGALogMgr::LogFoolChallenge(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x38);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x40);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x48);
  DString::DString(aDStack_30,0x275b);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogBag(TGABagData) */

void __thiscall TGALogMgr::LogBag(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  DString::DString(aDStack_30,0x275c);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogAccountRemove(TGAAccountRemove) */

void __thiscall TGALogMgr::LogAccountRemove(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  DString::DString(aDStack_30,0x277a);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogAdsLottery(TGAAdsLotteryData) */

void __thiscall TGALogMgr::LogAdsLottery(TGALogMgr *this,long param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_2 + 8));
  DString::DString(aDStack_30,0x275d);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogTutorial(TGATutorialData) */

void __thiscall TGALogMgr::LogTutorial(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  DString::DString(aDStack_30,0x2760);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogNoviceSevenDays(TGANoviceSevenDaysData) */

void __thiscall TGALogMgr::LogNoviceSevenDays(TGALogMgr *this,string *param_2)

{
  char cVar1;
  long lVar2;
  BigInt *this_00;
  char *__s;
  string asStack_38 [8];
  string asStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  lVar2 = Sexy::LazySingleton<TutorialMgr>::GetInstancePtr();
  if (lVar2 != 0) {
    this_00 = (BigInt *)Sexy::LazySingleton<TutorialMgr>::GetInstancePtr();
    cVar1 = BigInt::IsNegative(this_00);
    if (cVar1 != '\0') {
      __s = "1";
      goto LAB_03b6c1c8;
    }
  }
  __s = "2";
LAB_03b6c1c8:
  std::string::string(asStack_30,__s);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  DString::DString((DString *)asStack_30,0x275f);
  DString::operator_cast_to_string((DString *)asStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString((DString *)asStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogPlayerSurvey(TGAPlayerSurveyData) */

void __thiscall TGALogMgr::LogPlayerSurvey(TGALogMgr *this,string *param_2)

{
  bool bVar1;
  string *psVar2;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_2 + 8));
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(param_2 + 8));
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30)
        , bVar1) {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)avStack_20,psVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  DString::DString((DString *)local_30,0x2762);
  DString::operator_cast_to_string((DString *)local_30);
  Log(this,(string *)&local_38,(vector *)avStack_20);
  std::string::~string((string *)&local_38);
  DString::~DString((DString *)local_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogScrollbanner(TGAScrollbannerData) */

void __thiscall TGALogMgr::LogScrollbanner(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  DString::DString(aDStack_30,0x276a);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogCallofWishDraw(TGACallofWishDraw const&) */

void __thiscall TGALogMgr::LogCallofWishDraw(TGALogMgr *this,TGACallofWishDraw *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  DString::DString(aDStack_30,0x2763);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogCallofWishTask(TGACallofWishTask const&) */

void __thiscall TGALogMgr::LogCallofWishTask(TGALogMgr *this,TGACallofWishTask *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  DString::DString(aDStack_30,0x2764);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogCallofWishDaily(TGACallofWishDaily const&) */

void __thiscall TGALogMgr::LogCallofWishDaily(TGALogMgr *this,TGACallofWishDaily *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  DString::DString(aDStack_30,0x2765);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogCallofWishLimit(TGACallofWishLimit const&) */

void __thiscall TGALogMgr::LogCallofWishLimit(TGALogMgr *this,TGACallofWishLimit *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  DString::DString(aDStack_30,0x2766);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogCallofWishGift(TGACallofWishGift const&) */

void __thiscall TGALogMgr::LogCallofWishGift(TGALogMgr *this,TGACallofWishGift *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  DString::DString(aDStack_30,0x2767);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogCallofWishTrain(TGACallofWishTrain const&) */

void __thiscall TGALogMgr::LogCallofWishTrain(TGALogMgr *this,TGACallofWishTrain *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  DString::DString(aDStack_30,0x2768);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogArtifactPresent(TGAArtifactPresentData) */

void __thiscall TGALogMgr::LogArtifactPresent(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  DString::DString(aDStack_30,0x2761);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogArtifactCultivation(TGArtifactCultivation const&) */

void __thiscall TGALogMgr::LogArtifactCultivation(TGALogMgr *this,TGArtifactCultivation *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  DString::DString(aDStack_30,0x2769);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogPVZ1Mode(TGAPVZ1ModeData const&) */

void __thiscall TGALogMgr::LogPVZ1Mode(TGALogMgr *this,TGAPVZ1ModeData *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  string asStack_40 [8];
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)(param_1 + 0x28));
  if (cVar1 == '\0') {
    local_38 = FUN_03b64558(*(undefined8 *)(param_1 + 0x28));
    local_30[0] = FUN_03b645a8(*(undefined8 *)(param_1 + 0x30));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)local_30), bVar2)
    {
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      FUN_05475d88(asStack_40,uVar3);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_40);
      std::string::~string(asStack_40);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
  }
  else {
    iVar4 = 8;
    do {
      std::string::string((string *)local_30,"");
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)local_30);
      std::string::~string((string *)local_30);
      nop();
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x40));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x48));
  DString::DString((DString *)local_30,0x276b);
  DString::operator_cast_to_string((DString *)local_30);
  Log(this,(string *)&local_38,(vector *)avStack_20);
  std::string::~string((string *)&local_38);
  DString::~DString((DString *)local_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogPVZ1Achievement(TGAPVZ1Achievement const&) */

void __thiscall TGALogMgr::LogPVZ1Achievement(TGALogMgr *this,TGAPVZ1Achievement *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  DString::DString(aDStack_30,0x276c);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogCustomLevel(TGACustomLevelData const&) */

void __thiscall TGALogMgr::LogCustomLevel(TGALogMgr *this,TGACustomLevelData *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  string asStack_40 [8];
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x38));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x40));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x48));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x50));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x58));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x60));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x68));
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)(param_1 + 0x70));
  if (cVar1 == '\0') {
    local_38 = FUN_03b64558(*(undefined8 *)(param_1 + 0x70));
    local_30[0] = FUN_03b645a8(*(undefined8 *)(param_1 + 0x78));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)local_30), bVar2)
    {
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      FUN_05475d88(asStack_40,uVar3);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_40);
      std::string::~string(asStack_40);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
  }
  else {
    iVar4 = 8;
    do {
      std::string::string((string *)local_30,"");
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)local_30);
      std::string::~string((string *)local_30);
      nop();
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  DString::DString((DString *)local_30,0x276d);
  DString::operator_cast_to_string((DString *)local_30);
  Log(this,(string *)&local_38,(vector *)avStack_20);
  std::string::~string((string *)&local_38);
  DString::~DString((DString *)local_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogGoldenEgg(TGAGoldenEgg const&) */

void __thiscall TGALogMgr::LogGoldenEgg(TGALogMgr *this,TGAGoldenEgg *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x38));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x40));
  DString::DString(aDStack_30,0x276e);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogPennyClassroom(TGAPennyClassroomData const&) */

void __thiscall TGALogMgr::LogPennyClassroom(TGALogMgr *this,TGAPennyClassroomData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  DString::DString(aDStack_30,0x2771);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogArborDay(TGAArborDay const&) */

void __thiscall TGALogMgr::LogArborDay(TGALogMgr *this,TGAArborDay *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  DString::DString(aDStack_30,0x2785);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogGetAccessory(TGAccessoryData const&) */

void __thiscall TGALogMgr::LogGetAccessory(TGALogMgr *this,TGAccessoryData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  DString::DString(aDStack_30,0x2770);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogGrowthPackage(TGAGrowthPackage) */

void __thiscall TGALogMgr::LogGrowthPackage(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  DString::DString(aDStack_30,0x2774);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogUncharted(TGAUnchartedData) */

void __thiscall TGALogMgr::LogUncharted(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x30);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x38);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x40);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x48);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x50);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x58);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x60);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x68);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x70);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x78);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x80);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x88);
  DString::DString(aDStack_30,0x2797);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogCardGame(TGACardGameData) */

void __thiscall TGALogMgr::LogCardGame(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 0x20);
  DString::DString(aDStack_30,0x277b);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogCustomLevelShare(TGACustomLevelShareData const&) */

void __thiscall TGALogMgr::LogCustomLevelShare(TGALogMgr *this,TGACustomLevelShareData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  DString::DString(aDStack_30,0x277e);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogOnline(TGAOnlineData) */

void __thiscall TGALogMgr::LogOnline(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  DString::DString(aDStack_30,0x2772);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::UpdateOnlineLog() */

void __thiscall TGALogMgr::UpdateOnlineLog(TGALogMgr *this)

{
  char cVar1;
  size_t in_x2;
  undefined4 uVar2;
  TGABagData aTStack_18 [8];
  TGABagData aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = TimeUtil::CheckTimeEclapse(600.0,*(float *)(this + 0x60));
  if (cVar1 != '\0') {
    TGABagData::TGABagData(aTStack_18);
    std::string::append((string *)aTStack_18,"10",in_x2);
    TGABagData::TGABagData(aTStack_10,aTStack_18);
    LogOnline(this,aTStack_10);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x60) = uVar2;
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::UpdateFrame() */

void __thiscall TGALogMgr::UpdateFrame(TGALogMgr *this)

{
  char cVar1;
  size_t in_x2;
  undefined4 uVar2;
  TGABagData aTStack_18 [8];
  TGABagData aTStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = TimeUtil::CheckTimeEclapse(600.0,*(float *)(this + 0x60));
  if (cVar1 != '\0') {
    TGABagData::TGABagData(aTStack_18);
    std::string::append((string *)aTStack_18,"10",in_x2);
    TGABagData::TGABagData(aTStack_10,aTStack_18);
    LogOnline(this,aTStack_10);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x60) = uVar2;
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_18);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogClearProfile(TGAClearProfileData) */

void __thiscall TGALogMgr::LogClearProfile(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2 + 8);
  DString::DString(aDStack_30,0x2777);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogPlayerReturn(TGAPlayerReturnData) */

void __thiscall TGALogMgr::LogPlayerReturn(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  DString::DString(aDStack_30,0x2773);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogDebugInfo(TGADebugInfoData) */

void __thiscall TGALogMgr::LogDebugInfo(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  DString::DString(aDStack_30,0x2778);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogBattleOrderInfo(TGABattleOrderData const&) */

void __thiscall TGALogMgr::LogBattleOrderInfo(TGALogMgr *this,TGABattleOrderData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x38));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x40));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x48));
  DString::DString(aDStack_30,0x2779);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogCustomLevelAD(TGACustomLevelADData const&) */

void __thiscall TGALogMgr::LogCustomLevelAD(TGALogMgr *this,TGACustomLevelADData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  DString::DString(aDStack_30,0x2776);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogLevelPackageData(TGALevelPackageData const&) */

void __thiscall TGALogMgr::LogLevelPackageData(TGALogMgr *this,TGALevelPackageData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  DString::DString(aDStack_30,0x2786);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  clearSegments(this,0x2786);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogGiftCodeData(std::string const&, std::string const&) */

void __thiscall TGALogMgr::LogGiftCodeData(TGALogMgr *this,string *param_1,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  DString::DString(aDStack_30,0x2788);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogCornucopiaData(TGACornucopiaData const&) */

void __thiscall TGALogMgr::LogCornucopiaData(TGALogMgr *this,TGACornucopiaData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  DString::DString(aDStack_30,0x2789);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogWishingPoolData(TGAWishingPoolData const&) */

void __thiscall TGALogMgr::LogWishingPoolData(TGALogMgr *this,TGAWishingPoolData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  DString::DString(aDStack_30,0x278a);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogDecorateData(TGALogPlantDecorate const&) */

void __thiscall TGALogMgr::LogDecorateData(TGALogMgr *this,TGALogPlantDecorate *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x38));
  DString::DString(aDStack_30,0x2728);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogGiftReturnData(TGAGiftReturnData const&) */

void __thiscall TGALogMgr::LogGiftReturnData(TGALogMgr *this,TGAGiftReturnData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  DString::DString(aDStack_30,0x278b);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogTenYearsData(TGATenYearsData const&) */

void __thiscall TGALogMgr::LogTenYearsData(TGALogMgr *this,TGATenYearsData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  DString::DString(aDStack_30,0x278c);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogInvitationData(TGAInvitationData const&) */

void __thiscall TGALogMgr::LogInvitationData(TGALogMgr *this,TGAInvitationData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  DString::DString(aDStack_30,0x278d);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogAnniversaryNurturingData(TGAAnniversaryNurturingData const&) */

void __thiscall
TGALogMgr::LogAnniversaryNurturingData(TGALogMgr *this,TGAAnniversaryNurturingData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  DString::DString(aDStack_30,0x278e);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogPartyAssistData(TGAPartyAssistData const&) */

void __thiscall TGALogMgr::LogPartyAssistData(TGALogMgr *this,TGAPartyAssistData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  DString::DString(aDStack_30,0x278f);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogNewplayerCollectiontData(TGANewplayerCollectionData const&) */

void __thiscall
TGALogMgr::LogNewplayerCollectiontData(TGALogMgr *this,TGANewplayerCollectionData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  DString::DString(aDStack_30,0x2790);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogDaveKitchenData(TGADaveKitchenData const&) */

void __thiscall TGALogMgr::LogDaveKitchenData(TGALogMgr *this,TGADaveKitchenData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  DString::DString(aDStack_30,0x2792);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogDragonTreasure(TGADragonTreasureData const&) */

void __thiscall TGALogMgr::LogDragonTreasure(TGALogMgr *this,TGADragonTreasureData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x38));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x40));
  DString::DString(aDStack_30,0x2793);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogFirstRechargeNew(TGAFirstRechargeNewData const&) */

void __thiscall TGALogMgr::LogFirstRechargeNew(TGALogMgr *this,TGAFirstRechargeNewData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  DString::DString(aDStack_30,0x2794);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogExchangeAvatar(TGAExchangeAvatarData const&) */

void __thiscall TGALogMgr::LogExchangeAvatar(TGALogMgr *this,TGAExchangeAvatarData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x38));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x40));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x48));
  DString::DString(aDStack_30,0x2798);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogTreasurePavilion(TGATreasurePavilionData const&) */

void __thiscall TGALogMgr::LogTreasurePavilion(TGALogMgr *this,TGATreasurePavilionData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x38));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x40));
  DString::DString(aDStack_30,0x279c);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogPennyGiftBox(TGAPennyGiftBoxData const&) */

void __thiscall TGALogMgr::LogPennyGiftBox(TGALogMgr *this,TGAPennyGiftBoxData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x38));
  DString::DString(aDStack_30,0x279d);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogNFSLinkage(TGANFSLinkageData const&) */

void __thiscall TGALogMgr::LogNFSLinkage(TGALogMgr *this,TGANFSLinkageData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  DString::DString(aDStack_30,0x279e);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogPlantWars(TGAPlantWarsData const&) */

void __thiscall TGALogMgr::LogPlantWars(TGALogMgr *this,TGAPlantWarsData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x38));
  DString::DString(aDStack_30,0x27a2);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogAccumulatedLogin(TGAAccumulatedLoginData const&) */

void __thiscall TGALogMgr::LogAccumulatedLogin(TGALogMgr *this,TGAAccumulatedLoginData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  DString::DString(aDStack_30,0x279f);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogLuckyChest(TGALuckyChestData const&) */

void __thiscall TGALogMgr::LogLuckyChest(TGALogMgr *this,TGALuckyChestData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  DString::DString(aDStack_30,0x27a0);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogLuckyChestShop(TGALuckyChestShopData const&) */

void __thiscall TGALogMgr::LogLuckyChestShop(TGALogMgr *this,TGALuckyChestShopData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  DString::DString(aDStack_30,0x27a1);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogTourismOctoberData(TGATourismOctoberData const&) */

void __thiscall TGALogMgr::LogTourismOctoberData(TGALogMgr *this,TGATourismOctoberData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x38));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x40));
  DString::DString(aDStack_30,0x27a4);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogAutumnHarvest(TGAAutumnHarvestData const&) */

void __thiscall TGALogMgr::LogAutumnHarvest(TGALogMgr *this,TGAAutumnHarvestData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  DString::DString(aDStack_30,0x27a3);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogToyNightData(TGAToyNightData const&) */

void __thiscall TGALogMgr::LogToyNightData(TGALogMgr *this,TGAToyNightData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x30));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x38));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x40));
  DString::DString(aDStack_30,0x27a5);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogMiniGameCollectionData(TGAMiniGameCollectionData const&) */

void __thiscall
TGALogMgr::LogMiniGameCollectionData(TGALogMgr *this,TGAMiniGameCollectionData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x28));
  DString::DString(aDStack_30,0x27a6);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogPlantPediaData(TGAPlantPediaData const&) */

void __thiscall TGALogMgr::LogPlantPediaData(TGALogMgr *this,TGAPlantPediaData *param_1)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,(string *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,
             (string *)(param_1 + 0x18));
  DString::DString(aDStack_30,0x27a7);
  DString::operator_cast_to_string(aDStack_30);
  Log(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogForLogin(std::string const&, std::vector<std::string, std::allocator<std::string >
   > const&) */

void __thiscall TGALogMgr::LogForLogin(TGALogMgr *this,string *param_1,vector *param_2)

{
  long *plVar1;
  Log_TGA aLStack_28 [16];
  DValue aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00((string *)(this + 0x18));
  Log_TGA::Log_TGA(aLStack_28);
  ::DValue::DValue(aDStack_18);
  plVar1 = (long *)Log_TGA::getLogInfo(aLStack_28,(string *)(this + 0x18),aDStack_18);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1,aDStack_18);
  (**(code **)(*plVar1 + 0x30))(plVar1,param_2,aDStack_18);
  sendLog((DValue *)this);
  ::DValue::~DValue(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::LogAppLaunch(TGAAppLaunch) */

void __thiscall TGALogMgr::LogAppLaunch(TGALogMgr *this,string *param_2)

{
  string asStack_38 [8];
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_2);
  DString::DString(aDStack_30,0x277c);
  DString::operator_cast_to_string(aDStack_30);
  LogForLogin(this,asStack_38,(vector *)avStack_20);
  std::string::~string(asStack_38);
  DString::~DString(aDStack_30);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::writeLog(std::string const&) */

void TGALogMgr::writeLog(string *param_1)

{
  string *psVar1;
  string *psVar2;
  uchar *puVar3;
  ulong uVar4;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [48];
  long local_8;
  
  psVar1 = param_1 + 0x58;
  local_8 = ___stack_chk_guard;
  FUN_054757c0(psVar1);
  FUN_05475ad8(psVar1,&DAT_0559c978);
  std::string::string(asStack_48,"");
  nop();
  Android::Resources::GetExternalFilesDirectory(gLawnApp);
  FUN_05474278(asStack_48,asStack_38);
  std::string::~string(asStack_38);
  std::operator+(asStack_48,"/");
  std::operator+(asStack_38,"log_output.txt");
  std::string::~string(asStack_38);
  Sexy::Buffer::Buffer((Buffer *)asStack_38);
  puVar3 = (uchar *)FUN_0547429c(psVar1);
  uVar4 = FUN_05474184(psVar1);
  Sexy::Buffer::WriteBytes((Buffer *)asStack_38,puVar3,uVar4);
  psVar2 = Sexy::gSexyAppBase;
  uVar4 = Sexy::Buffer::GetDataPtr((Buffer *)asStack_38);
  Sexy::Buffer::GetDataLen((Buffer *)asStack_38);
  Sexy::SexyAppBase::WriteBytesToFileEnd(psVar2,asStack_40,uVar4);
  FUN_05474ff8(psVar1);
  Sexy::Buffer::~Buffer((Buffer *)asStack_38);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::ServiceRequestCompleted(Sexy::StructuredData const*, void const*) */

void TGALogMgr::ServiceRequestCompleted(StructuredData *param_1,void *param_2)

{
  byte bVar1;
  long lVar2;
  char *__s;
  StructuredData *in_x2;
  undefined1 *__n;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  string asStack_10 [8];
  LineBreakCategory *local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)param_1,param_2,___stack_chk_guard,in_x3,in_x4);
  if ((param_1 != in_x2) < bVar1) {
    lVar2 = Sexy::StructuredData::IntegerForPath(param_2,"$.statusCode",-1);
    if ((lVar2 == 200) || (lVar2 == -1)) {
      Set8BytesTo0(asStack_10);
      __n = &DAT_055923fe;
      __s = (char *)Sexy::StructuredData::StringForPath(param_2,"$.code","");
      std::string::append(asStack_10,__s,(size_t)__n);
      writeLog((string *)param_1);
      std::string::~string(asStack_10);
    }
    else {
      (**(code **)(*(long *)param_1 + 0x38))(param_1,param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogMgr::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void TGALogMgr::ServiceRequestFailed(StructuredData *param_1,void *param_2)

{
  char cVar1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  string asStack_10 [8];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)param_1,___stack_chk_guard,in_x2,in_x3,in_x4);
  if ((cVar1 != '\0') && (param_1 == (StructuredData *)in_x2)) {
    std::string::string(asStack_10,"failed response");
    writeLog((string *)param_1);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

