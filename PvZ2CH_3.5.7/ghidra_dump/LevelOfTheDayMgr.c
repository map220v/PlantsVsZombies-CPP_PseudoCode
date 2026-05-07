// Class: LevelOfTheDayMgr


/* LevelOfTheDayMgr::CleanTheDayRewardItemPool() */

void __thiscall LevelOfTheDayMgr::CleanTheDayRewardItemPool(LevelOfTheDayMgr *this)

{
  std::vector<TheDayRewardItem,std::allocator<TheDayRewardItem>>::clear
            ((vector<TheDayRewardItem,std::allocator<TheDayRewardItem>> *)(this + 0x10));
  return;
}


/* LevelOfTheDayMgr::AddTheDayRewardItemPool(TheDayRewardItem&) */

void __thiscall
LevelOfTheDayMgr::AddTheDayRewardItemPool(LevelOfTheDayMgr *this,TheDayRewardItem *param_1)

{
  std::vector<TheDayRewardItem,std::allocator<TheDayRewardItem>>::push_back
            ((vector<TheDayRewardItem,std::allocator<TheDayRewardItem>> *)(this + 0x10),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayMgr::GetTotalWeight(std::vector<TheDayRewardItem, std::allocator<TheDayRewardItem>
   >&) */

void __thiscall LevelOfTheDayMgr::GetTotalWeight(LevelOfTheDayMgr *this,vector *param_1)

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
                      *)param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    iVar3 = iVar3 + *(int *)(lVar2 + 0xc);
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
/* LevelOfTheDayMgr::LevelOfTheDayMgr() */

void __thiscall LevelOfTheDayMgr::LevelOfTheDayMgr(LevelOfTheDayMgr *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__LevelOfTheDayMgr_06926ad0;
  std::string::string((string *)(this + 8),"birthz");
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  this[0x28] = (LevelOfTheDayMgr)0x0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x2c) = 1;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDayMgr::GetInstance() */

undefined * LevelOfTheDayMgr::GetInstance(void)

{
  int iVar1;
  
  if (((DAT_06b74c88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b74c88), iVar1 != 0)) {
    LevelOfTheDayMgr((LevelOfTheDayMgr *)&DAT_06b74d28);
    __cxa_guard_release(&DAT_06b74c88);
    __cxa_atexit(~LevelOfTheDayMgr,&DAT_06b74d28,&DAT_06a88000);
    return &DAT_06b74d28;
  }
  return &DAT_06b74d28;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayMgr::GetTheDayItem(std::string) */

void __thiscall LevelOfTheDayMgr::GetTheDayItem(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (0 < lVar2) {
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)LawnApp::GetLevelOfTheDayConfigInfo(gLawnApp);
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_end(this);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_18 = FUN_049bf1c4(uVar3,uVar4,param_2);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar1) {
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      goto LAB_049bf29c;
    }
  }
  uVar3 = 0;
LAB_049bf29c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayMgr::GetCurrentTheDayItem() */

void __thiscall LevelOfTheDayMgr::GetCurrentTheDayItem(LevelOfTheDayMgr *this)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,this + 8);
  uVar1 = GetTheDayItem(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* LevelOfTheDayMgr::IsDataValid() */

bool __thiscall LevelOfTheDayMgr::IsDataValid(LevelOfTheDayMgr *this)

{
  int iVar1;
  int *piVar2;
  ActivityConfig *this_00;
  
  piVar2 = (int *)GetCurrentTheDayItem(this);
  if (piVar2 != (int *)0x0) {
    this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
    iVar1 = ActivityConfig::GetCurrentActivityTimeStatus(this_00,*piVar2,piVar2[1]);
    return iVar1 == 1;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayMgr::GetRealInterval() */

void __thiscall LevelOfTheDayMgr::GetRealInterval(LevelOfTheDayMgr *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string *psVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsDataValid(this);
  if (cVar1 == '\0') {
    iVar3 = -1;
  }
  else {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    GetCurrentTheDayItem(this);
    iVar3 = PlayerInfo::GetBirthZRecordCount(this_01);
    psVar4 = (string *)PlayerInfo::GetLastBirthZRecord(this_01);
    if ((psVar4 == (string *)0x0) || (iVar3 < 1)) {
      iVar3 = 1;
    }
    else {
      LawnApp::GetRealBeijingTime(gLawnApp);
      PlayerInfo::TimeToString((long)this_01);
      bVar2 = std::operator!=(asStack_10,psVar4);
      if (bVar2) {
        iVar3 = iVar3 + 1;
      }
      std::string::~string(asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* LevelOfTheDayMgr::GetCurrentLevelName() */

void __thiscall LevelOfTheDayMgr::GetCurrentLevelName(LevelOfTheDayMgr *this)

{
  int iVar1;
  long lVar2;
  
  iVar1 = GetRealInterval(this);
  lVar2 = GetCurrentTheDayItem(this);
  FUN_049bd8d0(*(undefined8 *)(lVar2 + 0x80),(long)(iVar1 + -1));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayMgr::GetDayInterval() */

void __thiscall LevelOfTheDayMgr::GetDayInterval(LevelOfTheDayMgr *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  time_t __time1;
  uint *puVar3;
  time_t __time0;
  double dVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsDataValid(this);
  if (cVar1 == '\0') {
    iVar2 = -1;
  }
  else {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    __time1 = LawnApp::GetRealBeijingTime(gLawnApp);
    puVar3 = (uint *)GetCurrentTheDayItem(this);
    Sexy::StrFormat("%d",asStack_18,(ulong)*puVar3);
    std::string::string(asStack_10,"%Y%m%d");
    __time0 = PlayerInfo::GetTimeStamp(this_01,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    dVar4 = difftime(__time1,__time0);
    iVar2 = (int)(dVar4 * 1.1574074074074073e-05) + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayMgr::IsTheLastDay() */

void __thiscall LevelOfTheDayMgr::IsTheLastDay(LevelOfTheDayMgr *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_00;
  long lVar5;
  char *__nptr;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = IsDataValid(this);
  bVar1 = false;
  if (cVar2 != '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar5 = ProfileMgr::GetCurrentProfile(this_00);
    bVar1 = false;
    LawnApp::GetRealBeijingTime(gLawnApp);
    PlayerInfo::TimeToString(lVar5);
    __nptr = (char *)FUN_0547429c(asStack_10);
    iVar3 = atoi(__nptr);
    lVar5 = GetCurrentTheDayItem(this);
    if (*(int *)(lVar5 + 4) == iVar3) {
      iVar3 = GetRealInterval(this);
      iVar4 = GetDayInterval(this);
      bVar1 = iVar3 == iVar4;
    }
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayMgr::SpawnEffectFromTop(Sexy::Widget*, int, int) */

void __thiscall
LevelOfTheDayMgr::SpawnEffectFromTop(LevelOfTheDayMgr *this,Widget *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  PopAnimRigWidget *this_00;
  char *pcVar5;
  ResourceInfo *pRVar6;
  RtClass *pRVar7;
  PopAnimRig *this_01;
  RtWeakPtr aRStack_80 [8];
  char *local_78 [3];
  Insets aIStack_60 [40];
  DummyInit aDStack_38 [8];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [28];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = GetCurrentTheDayItem(this);
  if (lVar4 != 0) {
    local_78[0] = "short";
    local_78[1] = "medium";
    local_78[2] = "long";
    Sexy::Insets::Insets(aIStack_60,0,0,*(int *)(param_1 + 0x50),*(int *)(param_1 + 0x54));
    this_00 = ::operator_new(0xf0);
    PopAnimRigWidget::PopAnimRigWidget(this_00,(TRect *)aIStack_60,(PopAnimRig *)0x0);
    (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
    iVar1 = FUN_049bdb40(param_2);
    if (iVar1 < *(int *)(param_1 + 0x50)) {
      iVar3 = -1;
      do {
        do {
          iVar2 = Sexy::Rand(3);
        } while (iVar3 == iVar2);
        pcVar5 = (char *)FUN_0547429c(lVar4 + 0x48);
        CachedUIResourcePtr<Sexy::PopAnim>::CachedUIResourcePtr
                  ((CachedUIResourcePtr<Sexy::PopAnim> *)aIStack_60,pcVar5);
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)aIStack_60);
        CachedUIResourcePtr<Sexy::PopAnim>::~CachedUIResourcePtr
                  ((CachedUIResourcePtr<Sexy::PopAnim> *)aIStack_60);
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_80);
        pRVar7 = (RtClass *)PopAnimRig::StaticGetClass();
        this_01 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar6,pRVar7);
        std::string::string((string *)aIStack_60,local_78[iVar2]);
        Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
        PopAnimRig::PlayAndStop(this_01,aIStack_60,0,aDStack_38);
        std::string::~string((string *)aIStack_60);
        nop();
        Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)aDStack_38);
        FUN_049bdb30((float)iVar1,auStack_30,auStack_24);
        PopAnimRig::SetRenderTransform(this_01,(SexyTransform2D *)aDStack_38);
        PopAnimRigWidget::AddRig(this_00,this_01);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80)
        ;
        iVar3 = FUN_049bdb40(param_3);
        iVar1 = iVar1 + iVar3;
        iVar3 = iVar2;
      } while (iVar1 < *(int *)(param_1 + 0x50));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDayMgr::~LevelOfTheDayMgr() */

void __thiscall LevelOfTheDayMgr::~LevelOfTheDayMgr(LevelOfTheDayMgr *this)

{
  *(undefined ***)this = &PTR__LevelOfTheDayMgr_06926ad0;
  std::vector<TheDayRewardItem,std::allocator<TheDayRewardItem>>::~vector
            ((vector<TheDayRewardItem,std::allocator<TheDayRewardItem>> *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}


/* LevelOfTheDayMgr::~LevelOfTheDayMgr() */

void __thiscall LevelOfTheDayMgr::~LevelOfTheDayMgr(LevelOfTheDayMgr *this)

{
  ~LevelOfTheDayMgr(this);
  AK::FreeHook(this);
  return;
}


/* LevelOfTheDayMgr::InitRewardPool() */

void __thiscall LevelOfTheDayMgr::InitRewardPool(LevelOfTheDayMgr *this)

{
  std::vector<TheDayRewardItem,std::allocator<TheDayRewardItem>>::clear
            ((vector<TheDayRewardItem,std::allocator<TheDayRewardItem>> *)(this + 0x10));
  GetCurrentTheDayItem(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayMgr::RandomInPool(int, std::vector<TheDayRewardItem,
   std::allocator<TheDayRewardItem> >&) */

void __thiscall LevelOfTheDayMgr::RandomInPool(LevelOfTheDayMgr *this,int param_1,vector *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  TheDayRewardItem *pTVar5;
  int iVar6;
  int iVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < param_1) {
    iVar7 = 0;
LAB_049bfbf8:
    do {
      iVar3 = GetTotalWeight(this,param_2);
      uVar4 = Sexy::Rand(iVar3);
      iVar6 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)param_2);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_2);
      iVar3 = 0;
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar2) {
        pTVar5 = (TheDayRewardItem *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        iVar1 = *(int *)(pTVar5 + 0xc);
        if ((iVar6 < iVar3 + iVar1) && (iVar3 <= iVar6)) {
          iVar7 = iVar7 + 1;
          std::vector<TheDayRewardItem,std::allocator<TheDayRewardItem>>::push_back
                    ((vector<TheDayRewardItem,std::allocator<TheDayRewardItem>> *)(this + 0x10),
                     pTVar5);
          if (iVar7 == param_1) goto LAB_049bfc84;
          goto LAB_049bfbf8;
        }
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
        iVar3 = iVar3 + iVar1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != param_1);
  }
LAB_049bfc84:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

