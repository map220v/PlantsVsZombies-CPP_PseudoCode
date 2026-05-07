// Class: RebateDateMgr


/* RebateDateMgr::GetInstance() */

undefined * RebateDateMgr::GetInstance(void)

{
  return &DAT_06b742e8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RebateDateMgr::GetMaxWorldName() */

void __thiscall RebateDateMgr::GetMaxWorldName(RebateDateMgr *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"egypt");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RebateDateMgr::GetItemName(std::string&, bool) */

void RebateDateMgr::GetItemName(string *param_1,bool param_2)

{
  char cVar1;
  Magento *this;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar2;
  long lVar3;
  ulong uVar4;
  wchar_t *pwVar5;
  string *extraout_x1;
  char in_w2;
  ulong uVar6;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  Sexy aSStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_30,param_2);
  FUN_05478178();
  nop();
  Magento::GetPlantLevelUp(this);
  uVar4 = 0;
  do {
    uVar6 = uVar4;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    uVar4 = FUN_049abe40(*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68));
    if (uVar4 <= uVar6) goto joined_r0x049ac55c;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_049abe4c(*(undefined8 *)(lVar3 + 0x60),uVar6);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    cVar1 = std::operator==((string *)(lVar3 + 0x80),asStack_30);
    uVar4 = uVar6 + 1;
  } while (cVar1 == '\0');
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_049abe4c(*(undefined8 *)(lVar3 + 0x60),uVar6);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
  MagentoProductProps::GetLocalizedShortDescription();
  Sexy::UTF8StringToWString(aSStack_20,extraout_x1);
  TodStringTranslate(awStack_18);
  FUN_054766c8();
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string((string *)aSStack_20);
joined_r0x049ac55c:
  if (in_w2 == '\0') {
    pwVar5 = L"[PIECE]";
  }
  else {
    pwVar5 = L"[AVATAR]";
  }
  TodStringTranslate(pwVar5);
  thunk_FUN_05477668();
  FUN_05476c50(auStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RebateDateMgr::GetRewardConditionWithIndex(int) */

void __thiscall RebateDateMgr::GetRewardConditionWithIndex(RebateDateMgr *this,int param_1)

{
  FilesystemSaveGameContext *this_00;
  vector<RewardCondition,std::allocator<RewardCondition>> *this_01;
  
  this_00 = (FilesystemSaveGameContext *)LawnApp::GetRebateRewardConfig(gLawnApp);
  this_01 = (vector<RewardCondition,std::allocator<RewardCondition>> *)
            Sexy::FilesystemSaveGameContext::GetBuffer(this_00);
  std::vector<RewardCondition,std::allocator<RewardCondition>>::at(this_01,(long)param_1);
  return;
}


/* RebateDateMgr::IsTodayReward(std::string&) */

void RebateDateMgr::IsTodayReward(string *param_1)

{
  ProfileMgr *this;
  string *psVar1;
  long lVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar1 = (string *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = LawnApp::GetRealBeijingTime(gLawnApp);
  PlayerInfo::CheckRebateRecord(psVar1,(float)lVar2);
  return;
}


/* RebateDateMgr::IsPlantOverLevel(std::string&) */

bool __thiscall RebateDateMgr::IsPlantOverLevel(RebateDateMgr *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar2 = PlayerInfo::GetIsPlantUnlocked(this_01,param_1);
  bVar1 = false;
  if (cVar2 != '\0') {
    iVar3 = PlayerInfo::GetPlantStarLevel(this_01,param_1,false);
    bVar1 = 2 < iVar3;
  }
  return bVar1;
}


/* RebateDateMgr::IsPlantValid(std::string&) */

undefined8 __thiscall RebateDateMgr::IsPlantValid(RebateDateMgr *this,string *param_1)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = IsPlantOverLevel(this,param_1);
  if (cVar1 == '\0') {
    cVar1 = IsTodayReward((string *)this);
    if (cVar1 != '\0') {
      return 1;
    }
    cVar1 = PlayerInfo::CheckRebateRecord(this_01,param_1);
    if (cVar1 == '\0') {
      lVar2 = LawnApp::GetRealBeijingTime(gLawnApp);
      PlayerInfo::AddRebateRecord(this_01,param_1,(float)lVar2);
      return 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RebateDateMgr::GetPlantNameFromPool(std::vector<int, std::allocator<int> >&) */

void RebateDateMgr::GetPlantNameFromPool(vector *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  vector<int,std::allocator<int>> *in_x1;
  string *in_x8;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = PlantNameMapperServerID::GetInstance();
  std::vector<int,std::allocator<int>>::at(in_x1,0);
  NameMapperBase::GetNameForId(iVar3);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)in_x1);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)in_x1);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    iVar3 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    FUN_05474278();
    std::string::~string(asStack_10);
    cVar1 = IsTodayReward((string *)param_1);
    if ((cVar1 != '\0') || (cVar1 = IsPlantValid((RebateDateMgr *)param_1,in_x8), cVar1 != '\0'))
    break;
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RebateDateMgr::GetPlantIDFromPool(std::vector<int, std::allocator<int> >&) */

void __thiscall RebateDateMgr::GetPlantIDFromPool(RebateDateMgr *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = PlantNameMapperServerID::GetInstance();
  std::vector<int,std::allocator<int>>::at((vector<int,std::allocator<int>> *)param_1,0);
  NameMapperBase::GetNameForId(iVar3);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    if (!bVar2) {
      puVar4 = (undefined4 *)
               std::vector<int,std::allocator<int>>::at
                         ((vector<int,std::allocator<int>> *)param_1,0);
      uVar5 = *puVar4;
LAB_049acc24:
      std::string::~string(asStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
    puVar4 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    iVar3 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    FUN_05474278(asStack_28,asStack_10);
    std::string::~string(asStack_10);
    cVar1 = IsTodayReward((string *)this);
    if ((cVar1 != '\0') || (cVar1 = IsPlantValid(this,asStack_28), cVar1 != '\0')) {
      uVar5 = *puVar4;
      goto LAB_049acc24;
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RebateDateMgr::GetWorldRewardByWorldName(std::string&) */

void __thiscall RebateDateMgr::GetWorldRewardByWorldName(RebateDateMgr *this,string *param_1)

{
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)LawnApp::GetRebateRewardConfig(gLawnApp);
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)std::
               _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               ::_M_root(this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_01);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_01);
  local_18 = FUN_049ad350(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_01);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RebateDateMgr::GetPlantNameWithWorldName(std::string&) */

void RebateDateMgr::GetPlantNameWithWorldName(string *param_1)

{
  long lVar1;
  long lVar2;
  string *in_x1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  lVar2 = GetWorldRewardByWorldName((RebateDateMgr *)param_1,in_x1);
  if (lVar2 == 0) {
    std::string::string(in_x8,"sunflower");
    nop();
  }
  else {
    GetPlantNameFromPool((vector *)param_1);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RebateDateMgr::GetPLantIDWithWorldName(std::string&) */

undefined8 __thiscall RebateDateMgr::GetPLantIDWithWorldName(RebateDateMgr *this,string *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = GetWorldRewardByWorldName(this,param_1);
  if (lVar1 != 0) {
    uVar2 = GetPlantIDFromPool(this,(vector *)(lVar1 + 8));
    return uVar2;
  }
  return 0x3ea;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RebateDateMgr::IsValidTime() */

void __thiscall RebateDateMgr::IsValidTime(RebateDateMgr *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ActivityConfig *this_00;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = LawnApp::GetRebateRewardConfig(gLawnApp);
  this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
  iVar3 = FUN_049abbe8(*(undefined4 *)(lVar5 + 8));
  iVar4 = FUN_049abbec(*(undefined4 *)(lVar5 + 0xc));
  iVar3 = ActivityConfig::GetCurrentActivityTimeStatus(this_00,iVar3,iVar4);
  GetMaxWorldName(this);
  lVar5 = GetWorldRewardByWorldName(this,asStack_28);
  if (lVar5 == 0) {
    bVar2 = false;
  }
  else {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar5 + 8));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar5 + 8));
    while( true ) {
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
      if (!bVar2) break;
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      iVar4 = PlantNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar4);
      cVar1 = IsPlantOverLevel(this,asStack_10);
      if (cVar1 == '\0') {
        std::string::~string(asStack_10);
        bVar2 = iVar3 == 1;
        break;
      }
      std::string::~string(asStack_10);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_20);
    }
  }
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RebateDateMgr::IsWorldRewardValid(std::string&) */

void __thiscall RebateDateMgr::IsWorldRewardValid(RebateDateMgr *this,string *param_1)

{
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)LawnApp::GetRebateRewardConfig(gLawnApp);
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)std::
               _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               ::_M_root(this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_01);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_01);
  local_18 = FUN_049ad828(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_01);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RebateDateMgr::IsAnyRewardRemain() */

void RebateDateMgr::IsAnyRewardRemain(void)

{
  bool bVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 == (PlayerInfo *)0x0) {
    bVar1 = false;
  }
  else {
    this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)PlayerInfo::GetRebateRewardState(this_00);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_01);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_01);
    local_18 = FUN_049ada60(uVar2,uVar3);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_01);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RebateDateMgr::GetPlantPieceImage(std::string&) */

void __thiscall RebateDateMgr::GetPlantPieceImage(RebateDateMgr *this,string *param_1)

{
  char cVar1;
  string *psVar2;
  long lVar3;
  undefined8 uVar4;
  RtMixedPtrBase aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
  FUN_031f5e7c(asStack_10,"plant_piece_",param_1);
  ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_10);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    uVar4 = StringHelper::ToImage((string *)(lVar3 + 0x60),false);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

