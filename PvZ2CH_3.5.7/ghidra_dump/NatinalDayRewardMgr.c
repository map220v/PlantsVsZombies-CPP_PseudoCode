// Class: NatinalDayRewardMgr


/* NatinalDayRewardMgr::~NatinalDayRewardMgr() */

void __thiscall NatinalDayRewardMgr::~NatinalDayRewardMgr(NatinalDayRewardMgr *this)

{
  *(undefined ***)this = &PTR__NatinalDayRewardMgr_06927280;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)(this + 8));
  return;
}


/* NatinalDayRewardMgr::~NatinalDayRewardMgr() */

void __thiscall NatinalDayRewardMgr::~NatinalDayRewardMgr(NatinalDayRewardMgr *this)

{
  ~NatinalDayRewardMgr(this);
  AK::FreeHook(this);
  return;
}


/* NatinalDayRewardMgr::NatinalDayRewardMgr() */

void __thiscall NatinalDayRewardMgr::NatinalDayRewardMgr(NatinalDayRewardMgr *this)

{
  *(undefined ***)this = &PTR__NatinalDayRewardMgr_06927280;
  NationalDayRewardItem::NationalDayRewardItem((NationalDayRewardItem *)(this + 8));
  return;
}


/* NatinalDayRewardMgr::GetInstance() */

undefined * NatinalDayRewardMgr::GetInstance(void)

{
  int iVar1;
  
  if (((DAT_06b756b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b756b0), iVar1 != 0)) {
    NatinalDayRewardMgr((NatinalDayRewardMgr *)&DAT_06b75768);
    __cxa_guard_release(&DAT_06b756b0);
    __cxa_atexit(~NatinalDayRewardMgr,&DAT_06b75768,&DAT_06a88000);
    return &DAT_06b75768;
  }
  return &DAT_06b75768;
}


/* NatinalDayRewardMgr::SetRewardItem(NationalRewardFromServer&) */

void __thiscall
NatinalDayRewardMgr::SetRewardItem(NatinalDayRewardMgr *this,NationalRewardFromServer *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x14) = uVar1;
  thunk_FUN_05475e00(this + 8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NatinalDayRewardMgr::TodayInNationalDay(long) */

void __thiscall NatinalDayRewardMgr::TodayInNationalDay(NatinalDayRewardMgr *this,long param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 *puVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)LawnApp::GetNationalDayRewardConfigInfo(gLawnApp);
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_02);
  uVar2 = 0;
  do {
    uVar6 = uVar2;
    uVar7 = *puVar1;
    uVar2 = FUN_049c82a8(uVar7,puVar1[1]);
    if (uVar2 <= uVar6) {
      uVar6 = 0xffffffff;
      goto LAB_049c89fc;
    }
    puVar3 = (uint *)FUN_049c82d0(uVar7,uVar6);
    Sexy::StrFormat("%d",asStack_18,(ulong)*puVar3);
    std::string::string(asStack_10,"%Y%m%d");
    lVar4 = PlayerInfo::GetTimeStamp(this_01,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    Sexy::StrFormat("%d",asStack_18,(ulong)puVar3[1]);
    std::string::string(asStack_10,"%Y%m%d");
    lVar5 = PlayerInfo::GetTimeStamp(this_01,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    uVar2 = uVar6 + 1;
  } while ((lVar5 + 0x15180 < param_1) || (param_1 < lVar4));
  uVar6 = uVar6 & 0xffffffff;
LAB_049c89fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NatinalDayRewardMgr::CalcCurrentActiveIndex(long) */

void __thiscall NatinalDayRewardMgr::CalcCurrentActiveIndex(NatinalDayRewardMgr *this,long param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 *puVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  string asStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)LawnApp::GetNationalDayRewardConfigInfo(gLawnApp);
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_02);
  uVar2 = 0;
  do {
    uVar6 = uVar2;
    uVar7 = *puVar1;
    uVar2 = FUN_049c82a8(uVar7,puVar1[1]);
    if (uVar2 <= uVar6) {
      uVar6 = 0xffffffff;
      goto LAB_049c89fc;
    }
    puVar3 = (uint *)FUN_049c82d0(uVar7,uVar6);
    Sexy::StrFormat("%d",asStack_18,(ulong)*puVar3);
    std::string::string(asStack_10,"%Y%m%d");
    lVar4 = PlayerInfo::GetTimeStamp(this_01,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    Sexy::StrFormat("%d",asStack_18,(ulong)puVar3[1]);
    std::string::string(asStack_10,"%Y%m%d");
    lVar5 = PlayerInfo::GetTimeStamp(this_01,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    uVar2 = uVar6 + 1;
  } while ((lVar5 + 0x15180 < param_1) || (param_1 < lVar4));
  uVar6 = uVar6 & 0xffffffff;
LAB_049c89fc:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* NatinalDayRewardMgr::GetCurrentNationalDayActivityDate() */

undefined8 __thiscall
NatinalDayRewardMgr::GetCurrentNationalDayActivityDate(NatinalDayRewardMgr *this)

{
  int iVar1;
  long lVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar2 = LawnApp::GetRealBeijingTime(gLawnApp);
  iVar1 = CalcCurrentActiveIndex(this,lVar2);
  if (iVar1 != -1) {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)LawnApp::GetNationalDayRewardConfigInfo(gLawnApp);
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_end(this_00);
    uVar4 = FUN_049c82d0(*puVar3,(long)iVar1);
    return uVar4;
  }
  return 0;
}


/* NatinalDayRewardMgr::CanDoNationalActivity() */

bool __thiscall NatinalDayRewardMgr::CanDoNationalActivity(NatinalDayRewardMgr *this)

{
  int iVar1;
  long lVar2;
  ProfileMgr *this_00;
  long lVar3;
  
  lVar2 = LawnApp::GetRealBeijingTime(gLawnApp);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  if ((0 < lVar2) && (iVar1 = TodayInNationalDay(this,lVar2), iVar1 != -1)) {
    iVar1 = PlayerInfo::GetNationalDayGetRewardCount(lVar3);
    return iVar1 < 10;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NatinalDayRewardMgr::GetIntervalTime() */

void __thiscall NatinalDayRewardMgr::GetIntervalTime(NatinalDayRewardMgr *this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 *puVar4;
  ulong uVar5;
  uint *puVar6;
  undefined8 uVar7;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = LawnApp::GetRealBeijingTime(gLawnApp);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (lVar3 < 1) {
    Sexy::OutputDebugStrF((wchar_t *)"nationday iTime <= 0 : %d",lVar3);
    iVar2 = -1;
  }
  else {
    uVar1 = CalcCurrentActiveIndex(this,lVar3);
    if (uVar1 == 0xffffffff) {
      Sexy::OutputDebugStrF((wchar_t *)"nationday iIndex ==-1 : %d",0xffffffff);
      iVar2 = -1;
    }
    else {
      this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)LawnApp::GetNationalDayRewardConfigInfo(gLawnApp);
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_end(this_02);
      uVar7 = *puVar4;
      uVar5 = FUN_049c82a8(uVar7,puVar4[1]);
      if ((ulong)(long)(int)(uVar1 + 1) < uVar5) {
        puVar6 = (uint *)FUN_049c82d0(uVar7,(long)(int)(uVar1 + 1));
        Sexy::StrFormat("%d",asStack_18,(ulong)*puVar6);
        std::string::string(asStack_10,"%Y%m%d");
        iVar2 = PlayerInfo::GetTimeStamp(this_01,asStack_18,asStack_10);
        std::string::~string(asStack_10);
        nop();
        std::string::~string(asStack_18);
        iVar2 = iVar2 - (int)lVar3;
      }
      else {
        Sexy::OutputDebugStrF
                  ((wchar_t *)"nationday iIndex + 1 >= vList.size() : %d, %d",(ulong)uVar1,uVar5);
        iVar2 = -1;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NatinalDayRewardMgr::GetTotalWeight(NationalDayActivityDate*) */

void __thiscall
NatinalDayRewardMgr::GetTotalWeight(NatinalDayRewardMgr *this,NationalDayActivityDate *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x28));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x28));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    iVar3 = iVar3 + *(int *)(lVar2 + 0x10);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NatinalDayRewardMgr::GetRewardItem() */

void __thiscall NatinalDayRewardMgr::GetRewardItem(NatinalDayRewardMgr *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  NationalDayActivityDate *pNVar5;
  long lVar6;
  int iVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar5 = (NationalDayActivityDate *)GetCurrentNationalDayActivityDate(this);
  lVar6 = 0;
  if (pNVar5 != (NationalDayActivityDate *)0x0) {
    iVar3 = GetTotalWeight(this,pNVar5);
    uVar4 = Sexy::Rand(iVar3);
    iVar7 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(pNVar5 + 0x28));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(pNVar5 + 0x28));
    iVar3 = 0;
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      iVar1 = iVar3 + *(int *)(lVar6 + 0x10);
      if ((iVar7 < iVar1) && (iVar3 <= iVar7)) goto LAB_049c8e18;
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
      iVar3 = iVar1;
    }
    lVar6 = 0;
  }
LAB_049c8e18:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar6);
}


/* NatinalDayRewardMgr::SetMyRewardItem(NationalDayRewardItem&) */

void __thiscall
NatinalDayRewardMgr::SetMyRewardItem(NatinalDayRewardMgr *this,NationalDayRewardItem *param_1)

{
  PennyGiftBoxRankItemData::operator=
            ((PennyGiftBoxRankItemData *)(this + 8),(PennyGiftBoxRankItemData *)param_1);
  return;
}

