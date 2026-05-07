// Class: PlantFamilyMgr


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::onADFinished(int) */

void __thiscall PlantFamilyMgr::onADFinished(PlantFamilyMgr *this,int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x12) {
    std::string::string(asStack_10,"PlantFamilyRefreshAD");
    Cpp2Lua(asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::GetPropertyDisplay(std::string const&, float, int) */

void __thiscall
PlantFamilyMgr::GetPropertyDisplay(PlantFamilyMgr *this,string *param_1,float param_2,int param_3)

{
  wstring *extraout_x1;
  Sexy aSStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StringHelper::ToStringValue((string *)this);
  if ((int)param_1 == 0) {
    Sexy::StrFormat(L" %.2f%%",auStack_10,(double)(param_2 * 100.0));
  }
  else {
    Sexy::StrFormat(L" %d",auStack_10,(ulong)(uint)(int)param_2);
  }
  thunk_FUN_05477668(aSStack_18,auStack_10);
  FUN_05476c50(auStack_10);
  Sexy::WStringToUTF8String(aSStack_18,extraout_x1);
  FUN_05476c50(aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::GetOptionalPropertyDisplay(float, float, float, int) */

void __thiscall
PlantFamilyMgr::GetOptionalPropertyDisplay
          (PlantFamilyMgr *this,float param_1,float param_2,float param_3,int param_4)

{
  wstring *extraout_x1;
  undefined1 auStack_20 [8];
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"[NEXT_LEVEL]");
  StringHelper::ToStringValue(asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05476574(aSStack_18);
  if ((int)this == 0) {
    Sexy::StrFormat(L"%.2f%% ~ ",asStack_10,(double)(param_1 * 100.0));
    FUN_054766c8(aSStack_18,asStack_10);
    FUN_05476c50(asStack_10);
    Sexy::StrFormat(L"%.2f%%(",asStack_10,(double)(param_2 * 100.0));
    thunk_FUN_05477668(aSStack_18,asStack_10);
    FUN_05476c50(asStack_10);
    thunk_FUN_05477668(aSStack_18,auStack_20);
    Sexy::StrFormat(L"%.2f%%)",asStack_10,(double)(param_3 * 100.0));
  }
  else {
    Sexy::StrFormat(L"%d ~ ",asStack_10,(ulong)(uint)(int)param_1);
    FUN_054766c8(aSStack_18,asStack_10);
    FUN_05476c50(asStack_10);
    Sexy::StrFormat(L"%d(",asStack_10,(ulong)(uint)(int)param_2);
    thunk_FUN_05477668(aSStack_18,asStack_10);
    FUN_05476c50(asStack_10);
    thunk_FUN_05477668(aSStack_18,auStack_20);
    Sexy::StrFormat(L"%d)",asStack_10,(ulong)(uint)(int)param_3);
  }
  thunk_FUN_05477668(aSStack_18,asStack_10);
  FUN_05476c50(asStack_10);
  Sexy::WStringToUTF8String(aSStack_18,extraout_x1);
  FUN_05476c50(aSStack_18);
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFamilyMgr::PlantLevelProvideLevel(std::string const&) */

undefined8 PlantFamilyMgr::PlantLevelProvideLevel(string *param_1)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  undefined8 uVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if ((this_00 != (PlayerInfo *)0x0) &&
     (cVar1 = PlayerInfo::GetIsPlantUnlocked(this_00,param_1), cVar1 != '\0')) {
    uVar2 = PlayerInfo::GetPlantStarLevel(this_00,param_1,false);
    return uVar2;
  }
  return 0;
}


/* PlantFamilyMgr::FinishPlantFamilyTutorial() */

void PlantFamilyMgr::FinishPlantFamilyTutorial(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::CompleteTutorial(pPVar1,0x21);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::PlantFamilyIsEnable() */

void PlantFamilyMgr::PlantFamilyIsEnable(void)

{
  undefined4 uVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  std::string::string(asStack_10,"egypt10");
  uVar1 = PlayerInfo::GetLevelCompleted(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::GetPlantFamilyPropertyRare(PlantFamilyBoostPropertySheet*, float) */

void PlantFamilyMgr::GetPlantFamilyPropertyRare
               (PlantFamilyBoostPropertySheet *param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  ulong uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = 0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x40));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x40));
  while ((bVar1 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1
         && (pfVar3 = (float *)std::__exception_ptr::exception_ptr::_M_get
                                         ((exception_ptr *)&local_18), *pfVar3 < param_2))) {
    iVar2 = iVar2 + 1;
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  uVar4 = FUN_03fe4a50(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  if (uVar4 <= (ulong)(long)iVar2) {
    iVar2 = 4;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* PlantFamilyMgr::ShowAD() */

void PlantFamilyMgr::ShowAD(void)

{
  ADManager *pAVar1;
  
  pAVar1 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  ADManager::ShowAD(pAVar1,0x12);
  return;
}


/* PlantFamilyMgr::GetLeftADWatchCount() */

void PlantFamilyMgr::GetLeftADWatchCount(void)

{
  ADManager *pAVar1;
  
  pAVar1 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  ADManager::GetLeftADWatchCount(pAVar1,0x12);
  return;
}


/* PlantFamilyMgr::CanWatchAD() */

void PlantFamilyMgr::CanWatchAD(void)

{
  ADManager *pAVar1;
  
  pAVar1 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  ADManager::CanWatchAD(pAVar1,0x12);
  return;
}


/* PlantFamilyMgr::SetADWatchCount(int) */

void __thiscall PlantFamilyMgr::SetADWatchCount(PlantFamilyMgr *this,int param_1)

{
  ADManager *pAVar1;
  
  pAVar1 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  ADManager::SetADWatchCount(pAVar1,0x12,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::PlantAvatarProvideLevel(std::string const&) */

void PlantFamilyMgr::PlantAvatarProvideLevel(string *param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  NameMapperBase *this_01;
  uint uVar3;
  int local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 == (PlayerInfo *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    cVar1 = PlayerInfo::GetIsPlantUnlocked(this_00,param_1);
    if (cVar1 != '\0') {
      iVar2 = PlayerInfo::GetPlantAvatar((string *)this_00,SUB81(param_1,0));
      uVar3 = (uint)(iVar2 == 0);
    }
    this_01 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetIdForName(this_01,param_1);
    PlayerInfo::GetUnlockedPlantNewAvatar((int)this_00);
    if (local_28[0] != -1) {
      iVar2 = FUN_03fe4a44(local_20,local_18);
      uVar3 = uVar3 + iVar2;
    }
    std::pair<void*const,std::vector<int,std::allocator<int>>>::~pair
              ((pair<void*const,std::vector<int,std::allocator<int>>> *)local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::GetFamilyByID(int) */

void __thiscall PlantFamilyMgr::GetFamilyByID(PlantFamilyMgr *this,int param_1)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this_00;
  PlantFamilyPropertySheet *pPVar3;
  int extraout_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,7);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
LAB_03fe5d4c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pPVar3 = Sexy::RtObject::Cast<PlantFamilyPropertySheet>(this_00);
    if ((pPVar3 != (PlantFamilyPropertySheet *)0x0) && (*(int *)(pPVar3 + 0x10) == (int)this)) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_03fe5d4c;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::IsPlantFamilyActivated(int) */

void PlantFamilyMgr::IsPlantFamilyActivated(int param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  ProfileMgr *this;
  long lVar4;
  string *psVar5;
  undefined1 auVar6 [12];
  RtMixedPtr<Sexy::Image> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  auVar6 = ProfileMgr::GetCurrentProfile(this);
  if (auVar6._0_8_ == (PlayerInfo *)0x0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\0';
    GetFamilyByID((PlantFamilyMgr *)(ulong)(uint)param_1,auVar6._8_4_);
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_20);
    if (cVar1 == '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar4 + 0x30));
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar4 + 0x30));
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            cVar2 = '\0', bVar3) {
        psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        cVar2 = PlayerInfo::GetIsPlantUnlocked(auVar6._0_8_,psVar5);
        if (cVar2 != '\0') break;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::GetFamilyQuality(int) */

void PlantFamilyMgr::GetFamilyQuality(int param_1)

{
  char cVar1;
  ProfileMgr *this;
  long lVar2;
  undefined4 uVar3;
  undefined1 auVar4 [12];
  RtMixedPtr<Sexy::Image> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  auVar4 = ProfileMgr::GetCurrentProfile(this);
  if (auVar4._0_8_ == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    GetFamilyByID((PlantFamilyMgr *)(ulong)(uint)param_1,auVar4._8_4_);
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_10);
    if (cVar1 == '\0') {
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      uVar3 = *(undefined4 *)(lVar2 + 0x28);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::GetActivatedPlantFamilyCount() */

void PlantFamilyMgr::GetActivatedPlantFamilyCount(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  RtObject *this;
  PlantFamilyPropertySheet *pPVar4;
  int extraout_w1;
  int iVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,7);
  while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pPVar4 = Sexy::RtObject::Cast<PlantFamilyPropertySheet>(this);
    if (((pPVar4 != (PlantFamilyPropertySheet *)0x0) && (*(int *)(pPVar4 + 0x10) != -1)) &&
       (cVar1 = IsPlantFamilyActivated(*(int *)(pPVar4 + 0x10)), cVar1 != '\0')) {
      iVar5 = iVar5 + 1;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::GetPlantFamilyBoostPropertySheet(std::string const&) */

void __thiscall
PlantFamilyMgr::GetPlantFamilyBoostPropertySheet(PlantFamilyMgr *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  RtObject *this_00;
  PlantFamilyBoostPropertySheet *pPVar4;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,7);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
LAB_03fe60fc:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    pPVar4 = Sexy::RtObject::Cast<PlantFamilyBoostPropertySheet>(this_00);
    if ((pPVar4 != (PlantFamilyBoostPropertySheet *)0x0) &&
       (cVar2 = std::operator==((string *)(pPVar4 + 0x18),(string *)this), cVar2 != '\0')) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_03fe60fc;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::GetPlantFamilyInfo(int) */

void __thiscall PlantFamilyMgr::GetPlantFamilyInfo(PlantFamilyMgr *this,int param_1)

{
  bool bVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_02;
  PlantFamilyInfo *pPVar2;
  undefined8 uVar3;
  RtObject *this_03;
  PlantFamilyPropertySheet *pPVar4;
  int extraout_w1;
  PlantWarsLevelTeamData *in_x8;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  undefined8 local_60 [4];
  undefined8 local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    this_02 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)PlayerInfo::GetPlantFamilyInfos(this_01);
    local_60[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this_02);
    local_40[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_02);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_60,(__normal_iterator *)local_40), bVar1) {
      pPVar2 = (PlantFamilyInfo *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_60);
      if (*(int *)pPVar2 == (int)this) {
        PlantFamilyInfo::PlantFamilyInfo((PlantFamilyInfo *)in_x8,pPVar2);
        goto LAB_03fe6e74;
      }
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)local_60);
    }
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable((exception_ptr *)local_60,uVar3,7);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)local_60), bVar1) {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)local_60);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)local_40);
      Sexy::RtId::~RtId((RtId *)local_40);
      this_03 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      pPVar4 = Sexy::RtObject::Cast<PlantFamilyPropertySheet>(this_03);
      if ((pPVar4 != (PlantFamilyPropertySheet *)0x0) && (*(int *)(pPVar4 + 0x10) == (int)this)) {
        PlantFamilyInfo::PlantFamilyInfo((PlantFamilyInfo *)local_40);
        local_40[0] = CONCAT44(local_40[0]._4_4_,*(undefined4 *)(pPVar4 + 0x10));
        PlantWarsLevelTeamData::PlantWarsLevelTeamData(in_x8,(PlantWarsLevelTeamData *)local_40);
        PlantFamilyInfo::~PlantFamilyInfo((PlantFamilyInfo *)local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_60);
        goto LAB_03fe6e74;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)local_60,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_60);
  }
  PlantFamilyInfo::PlantFamilyInfo((PlantFamilyInfo *)local_40);
  local_40[0] = CONCAT44(local_40[0]._4_4_,0xffffffff);
  PlantWarsLevelTeamData::PlantWarsLevelTeamData(in_x8,(PlantWarsLevelTeamData *)local_40);
  PlantFamilyInfo::~PlantFamilyInfo((PlantFamilyInfo *)local_40);
LAB_03fe6e74:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFamilyMgr::GetPlantFamilyPropertyMinValue(PlantFamilyBoostPropertySheet*, PlantBoost&) */

undefined4
PlantFamilyMgr::GetPlantFamilyPropertyMinValue
          (PlantFamilyBoostPropertySheet *param_1,PlantBoost *param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  lVar3 = FUN_03fe4a50(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
  if (lVar3 != 0) {
    cVar2 = std::vector<float,std::allocator<float>>::empty
                      ((vector<float,std::allocator<float>> *)(param_2 + 8));
    if (cVar2 != '\0') {
      std::vector<float,std::allocator<float>>::operator=
                ((vector<float,std::allocator<float>> *)(param_2 + 8),(vector *)(param_1 + 0x58));
    }
  }
  uVar6 = *(undefined8 *)(param_2 + 8);
  iVar1 = *(int *)(param_1 + 0x30);
  uVar4 = FUN_03fe4a50(uVar6,*(undefined8 *)(param_2 + 0x10));
  uVar7 = 0;
  if ((ulong)(long)iVar1 <= uVar4) {
    puVar5 = (undefined4 *)FUN_03fe4a5c(0,uVar6,(long)(iVar1 + -1));
    uVar7 = *puVar5;
  }
  return uVar7;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::CheckAndBuildFamilyBoosts(PlantFamilyInfo*) */

void __thiscall
PlantFamilyMgr::CheckAndBuildFamilyBoosts(PlantFamilyMgr *this,PlantFamilyInfo *param_1)

{
  vector<PlantBoost,std::allocator<PlantBoost>> *this_00;
  char cVar1;
  bool bVar2;
  string *psVar3;
  long lVar4;
  RtWeakPtrBase *pRVar5;
  RtObject *this_01;
  PlantFamilyBoostPropertySheet *pPVar6;
  ulong uVar7;
  undefined4 *puVar8;
  vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>> *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  PlantBoost aPStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this_00 = (vector<PlantBoost,std::allocator<PlantBoost>> *)(param_1 + 0x20);
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<PlantBoost,std::allocator<PlantBoost>>::empty(this_00);
  if (cVar1 != '\0') {
    this_02 = (vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>> *)(param_1 + 8);
    GetFamilyByID((PlantFamilyMgr *)(ulong)*(uint *)param_1,(int)param_1);
    cVar1 = std::vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>>::empty(this_02)
    ;
    if (cVar1 == '\0') {
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this_02);
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_02);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48),
            bVar2) {
        psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar4 + 0x60));
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar4 + 0x60));
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
              bVar2) {
          pRVar5 = (RtWeakPtrBase *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar5);
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
          if (bVar2) {
            this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
            pPVar6 = Sexy::RtObject::Cast<PlantFamilyBoostPropertySheet>(this_01);
            if (pPVar6 != (PlantFamilyBoostPropertySheet *)0x0) {
              lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
              cVar1 = std::operator==((string *)(lVar4 + 0x18),psVar3);
              if (cVar1 != '\0') {
                PlantBoost::PlantBoost(aPStack_28,(PlantBoost *)pRVar5);
                lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                lVar4 = FUN_03fe4a50(*(undefined8 *)(lVar4 + 0x58),*(undefined8 *)(lVar4 + 0x60));
                if ((lVar4 != 0) &&
                   (cVar1 = std::vector<float,std::allocator<float>>::empty
                                      ((vector<float,std::allocator<float>> *)&local_20),
                   cVar1 != '\0')) {
                  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                  std::vector<float,std::allocator<float>>::operator=
                            ((vector<float,std::allocator<float>> *)&local_20,
                             (vector *)(lVar4 + 0x58));
                }
                lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                if (0 < *(int *)(lVar4 + 0x30)) {
                  uVar7 = FUN_03fe4a50(local_20,local_18);
                  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                  if ((ulong)(long)(*(int *)(lVar4 + 0x30) + -1) < uVar7) {
                    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                    puVar8 = (undefined4 *)
                             FUN_03fe4a5c(local_20,(long)(*(int *)(lVar4 + 0x30) + -1));
                    *puVar8 = *(undefined4 *)(psVar3 + 8);
                  }
                }
                std::vector<PlantBoost,std::allocator<PlantBoost>>::push_back(this_00,aPStack_28);
                PlantBoost::~PlantBoost(aPStack_28);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
                break;
              }
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          std::move_iterator<SexyURL::KeyedValue*>::operator++
                    ((move_iterator<SexyURL::KeyedValue*> *)&local_40);
        }
        std::move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*>::operator++
                  ((move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*> *)&local_50);
      }
    }
    else {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      PlantBoost::PlantBoost(aPStack_28,(PlantBoost *)(lVar4 + 0x78));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aPStack_28);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      lVar4 = FUN_03fe4a50(*(undefined8 *)(lVar4 + 0x58),*(undefined8 *)(lVar4 + 0x60));
      if (lVar4 != 0) {
        cVar1 = std::vector<float,std::allocator<float>>::empty
                          ((vector<float,std::allocator<float>> *)&local_20);
        if (cVar1 != '\0') {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          std::vector<float,std::allocator<float>>::operator=
                    ((vector<float,std::allocator<float>> *)&local_20,(vector *)(lVar4 + 0x58));
        }
      }
      std::vector<PlantBoost,std::allocator<PlantBoost>>::push_back(this_00,aPStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      PlantBoost::~PlantBoost(aPStack_28);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::PlantFamilyMgr() */

void __thiscall PlantFamilyMgr::PlantFamilyMgr(PlantFamilyMgr *this)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  equal_to aeStack_30 [8];
  allocator aaStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<PlantFamilyMgr>::LazySingleton((LazySingleton<PlantFamilyMgr> *)this);
  *(undefined ***)this = &PTR__PlantFamilyMgr_067affa0;
  std::
  unordered_map<std::string,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>>>>
  ::unordered_map((ulong)(this + 8),(hash *)0xa,aeStack_30,aaStack_28);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onADFinished);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PlantFamilyMgr,void(PlantFamilyMgr::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyADWatchFinish,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::PlantRareProvideLevel(std::string const&) */

void PlantFamilyMgr::PlantRareProvideLevel(string *param_1)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  string *psVar2;
  long lVar3;
  int iVar4;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if ((this_00 == (PlayerInfo *)0x0) ||
     (cVar1 = PlayerInfo::GetIsPlantUnlocked(this_00,param_1), cVar1 == '\0')) {
    iVar4 = 0;
  }
  else {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    iVar4 = 0;
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    if (cVar1 != '\0') {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      iVar4 = *(int *)(lVar3 + 0xd0) + 1;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::GetPlantFamilyLevel(int) */

void PlantFamilyMgr::GetPlantFamilyLevel(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this;
  long lVar6;
  string *psVar7;
  int iVar8;
  undefined1 auVar9 [12];
  RtMixedPtr<Sexy::Image> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsPlantFamilyActivated(param_1);
  if (cVar1 != '\0') {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    auVar9 = ProfileMgr::GetCurrentProfile(this);
    if (auVar9._0_8_ != 0) {
      iVar8 = 0;
      GetFamilyByID((PlantFamilyMgr *)(ulong)(uint)param_1,auVar9._8_4_);
      cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_20);
      if (cVar1 == '\0') {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar6 + 0x30));
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar6 + 0x30));
        iVar8 = 0;
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar2) {
          psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
          ;
          iVar3 = PlantRareProvideLevel(psVar7);
          iVar4 = PlantLevelProvideLevel(psVar7);
          iVar5 = PlantAvatarProvideLevel(psVar7);
          iVar8 = iVar8 + iVar3 + iVar4 + iVar5;
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      goto LAB_03fe7958;
    }
  }
  iVar8 = 0;
LAB_03fe7958:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar8);
  }
  return;
}


/* PlantFamilyMgr::SortFamilyList(PlantFamilyInfo const&, PlantFamilyInfo const&) */

bool PlantFamilyMgr::SortFamilyList(PlantFamilyInfo *param_1,PlantFamilyInfo *param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = IsPlantFamilyActivated(*(int *)param_1);
  uVar4 = IsPlantFamilyActivated(*(int *)param_2);
  uVar4 = uVar4 & 0xff;
  uVar3 = uVar3 & 0xff;
  bVar1 = SBORROW4(uVar3,uVar4);
  bVar2 = (int)(uVar3 - uVar4) < 0;
  if (uVar3 == uVar4) {
    iVar5 = GetFamilyQuality(*(int *)param_1);
    iVar6 = GetFamilyQuality(*(int *)param_2);
    bVar1 = SBORROW4(iVar5,iVar6);
    bVar2 = iVar5 - iVar6 < 0;
    if (iVar5 == iVar6) {
      iVar5 = GetPlantFamilyLevel(*(int *)param_1);
      iVar6 = GetPlantFamilyLevel(*(int *)param_2);
      bVar1 = SBORROW4(iVar5,iVar6);
      bVar2 = iVar5 - iVar6 < 0;
      if (iVar5 == iVar6) {
        return *(int *)param_1 < *(int *)param_2;
      }
    }
  }
  return bVar2 == bVar1;
}


/* PlantFamilyMgr::~PlantFamilyMgr() */

void __thiscall PlantFamilyMgr::~PlantFamilyMgr(PlantFamilyMgr *this)

{
  *(undefined ***)this = &PTR__PlantFamilyMgr_067affa0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::
  unordered_map<std::string,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>>>>
  ::~unordered_map((unordered_map<std::string,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>>>>
                    *)(this + 8));
  Sexy::LazySingleton<PlantFamilyMgr>::~LazySingleton((LazySingleton<PlantFamilyMgr> *)this);
  return;
}


/* PlantFamilyMgr::~PlantFamilyMgr() */

void __thiscall PlantFamilyMgr::~PlantFamilyMgr(PlantFamilyMgr *this)

{
  ~PlantFamilyMgr(this);
  AK::FreeHook(this);
  return;
}


/* PlantFamilyMgr::PlantFamilyReset() */

void __thiscall PlantFamilyMgr::PlantFamilyReset(PlantFamilyMgr *this)

{
  std::
  unordered_map<std::string,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>>>>
  ::clear((unordered_map<std::string,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>>>>
           *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::EnableFamily() */

void __thiscall PlantFamilyMgr::EnableFamily(PlantFamilyMgr *this)

{
  bool bVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_02;
  undefined8 uVar2;
  RtObject *this_03;
  PlantFamilyPropertySheet *pPVar3;
  undefined8 uVar4;
  long lVar5;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c0 [8];
  undefined8 local_b8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_b0 [24];
  Iterator aIStack_98 [32];
  undefined4 local_78 [2];
  vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>> avStack_70 [24];
  vector<PlantBoost,std::allocator<PlantBoost>> avStack_58 [24];
  undefined8 local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_b0);
    this_02 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)PlayerInfo::GetPlantFamilyInfos(this_01);
    uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_98,uVar2,7);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_98), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_98);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_c0,(RtWeakPtrBase *)local_40);
      Sexy::RtId::~RtId((RtId *)local_40);
      this_03 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c0);
      pPVar3 = Sexy::RtObject::Cast<PlantFamilyPropertySheet>(this_03);
      if ((pPVar3 != (PlantFamilyPropertySheet *)0x0) && (0 < *(int *)(pPVar3 + 0x10))) {
        PlantFamilyInfo::PlantFamilyInfo((PlantFamilyInfo *)local_78);
        local_78[0] = *(undefined4 *)(pPVar3 + 0x10);
        uVar2 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_02);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_02);
        PlantFamilyInfo::PlantFamilyInfo((PlantFamilyInfo *)local_40,(PlantFamilyInfo *)local_78);
        local_b8 = FUN_03fe6b10(uVar2,uVar4,(RtId *)local_40);
        std::_Destroy<PlantFamilyInfo>((PlantFamilyInfo *)local_40);
        local_40[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this_02);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b8,(__normal_iterator *)local_40);
        if (bVar1) {
          lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
          std::vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>>::operator=
                    (avStack_70,(vector *)(lVar5 + 8));
          lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
          std::vector<PlantBoost,std::allocator<PlantBoost>>::operator=
                    (avStack_58,(vector *)(lVar5 + 0x20));
        }
        std::vector<PlantFamilyInfo,std::allocator<PlantFamilyInfo>>::push_back
                  ((vector<PlantFamilyInfo,std::allocator<PlantFamilyInfo>> *)avStack_b0,
                   (PlantFamilyInfo *)local_78);
        PlantFamilyInfo::~PlantFamilyInfo((PlantFamilyInfo *)local_78);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c0);
      Sexy::RtDbTable::Iterator::operator++(aIStack_98,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_98);
    std::vector<Sexy::PAObjectDef,std::allocator<Sexy::PAObjectDef>>::swap
              ((vector<Sexy::PAObjectDef,std::allocator<Sexy::PAObjectDef>> *)this_02,
               (vector *)avStack_b0);
    PlayerInfo::SAVE_PROFILE(this_01);
    PlantFamilyReset(this);
    std::vector<PlantFamilyInfo,std::allocator<PlantFamilyInfo>>::~vector
              ((vector<PlantFamilyInfo,std::allocator<PlantFamilyInfo>> *)avStack_b0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::GetPlantFamilyListWithSort() */

void __thiscall PlantFamilyMgr::GetPlantFamilyListWithSort(PlantFamilyMgr *this)

{
  bool bVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_02;
  undefined8 uVar2;
  RtObject *this_03;
  PlantFamilyPropertySheet *pPVar3;
  undefined8 uVar4;
  long lVar5;
  int extraout_w1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  undefined8 local_a0;
  Iterator aIStack_98 [32];
  undefined4 local_78 [2];
  vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>> avStack_70 [24];
  vector<PlantBoost,std::allocator<PlantBoost>> avStack_58 [24];
  undefined8 local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    this_02 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)PlayerInfo::GetPlantFamilyInfos(this_01);
    uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_98,uVar2,7);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_98), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_98);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_a8,(RtWeakPtrBase *)local_40);
      Sexy::RtId::~RtId((RtId *)local_40);
      this_03 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a8);
      pPVar3 = Sexy::RtObject::Cast<PlantFamilyPropertySheet>(this_03);
      if ((pPVar3 != (PlantFamilyPropertySheet *)0x0) && (*(int *)(pPVar3 + 0x10) != -1)) {
        PlantFamilyInfo::PlantFamilyInfo((PlantFamilyInfo *)local_78);
        local_78[0] = *(undefined4 *)(pPVar3 + 0x10);
        uVar2 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_02);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_02);
        PlantFamilyInfo::PlantFamilyInfo((PlantFamilyInfo *)local_40,(PlantFamilyInfo *)local_78);
        local_a0 = FUN_03fe6c98(uVar2,uVar4,(RtId *)local_40);
        std::_Destroy<PlantFamilyInfo>((PlantFamilyInfo *)local_40);
        local_40[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this_02);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_a0,(__normal_iterator *)local_40);
        if (bVar1) {
          lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
          std::vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>>::operator=
                    (avStack_70,(vector *)(lVar5 + 8));
          lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
          std::vector<PlantBoost,std::allocator<PlantBoost>>::operator=
                    (avStack_58,(vector *)(lVar5 + 0x20));
        }
        std::vector<PlantFamilyInfo,std::allocator<PlantFamilyInfo>>::push_back
                  ((vector<PlantFamilyInfo,std::allocator<PlantFamilyInfo>> *)in_x8,
                   (PlantFamilyInfo *)local_78);
        PlantFamilyInfo::~PlantFamilyInfo((PlantFamilyInfo *)local_78);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
      Sexy::RtDbTable::Iterator::operator++(aIStack_98,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_98);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)in_x8);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)in_x8);
    std::
    sort<__gnu_cxx::__normal_iterator<PlantFamilyInfo*,std::vector<PlantFamilyInfo,std::allocator<PlantFamilyInfo>>>,bool(*)(PlantFamilyInfo_const&,PlantFamilyInfo_const&)>
              (uVar2,uVar4,SortFamilyList);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::GetPlantFamilyProperty(int) */

void __thiscall PlantFamilyMgr::GetPlantFamilyProperty(PlantFamilyMgr *this,int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  RtObject *pRVar6;
  PlantFamilyBoostPropertySheet *pPVar7;
  string *psVar8;
  RtWeakPtr *pRVar9;
  PlantFamilyBoostPropertySheet *this_00;
  int extraout_w1;
  size_t __n;
  undefined1 *__n_00;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  PlantFamilyBoostPropertySheet *pPVar10;
  RtMixedPtr<Sexy::Image> aRStack_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0;
  string asStack_a8 [8];
  undefined4 local_a0;
  string asStack_98 [8];
  undefined1 local_90;
  PlantFamilyInfo aPStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_50;
  string asStack_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  PlantFamilyBoostValue aPStack_38 [48];
  long local_8;
  
  __n = 0x6a41000;
  local_8 = ___stack_chk_guard;
  GetPlantFamilyInfo(this,(int)___stack_chk_guard);
  GetFamilyByID((PlantFamilyMgr *)((ulong)this & 0xffffffff),extraout_w1);
  Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_d0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  cVar3 = std::vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>>::empty
                    ((vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>> *)
                     &local_80);
  if (cVar3 == '\0') {
    local_c8 = FUN_03fe541c(local_80);
    local_c0 = FUN_03fe546c(local_78);
    __n_00 = (undefined1 *)register0x00000008;
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_c8,(__normal_iterator *)&local_c0), bVar4)
    {
      pPVar7 = (PlantFamilyBoostPropertySheet *)0x0;
      pPVar10 = (PlantFamilyBoostPropertySheet *)0x0;
      psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
      local_b8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar5 + 0x60));
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar5 + 0x60));
      while (bVar4 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_b8,(__normal_iterator *)&local_50),
            bVar4) {
        pRVar9 = (RtWeakPtr *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
        bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar9);
        if (bVar4) {
          pRVar6 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar9)
          ;
          this_00 = Sexy::RtObject::Cast<PlantFamilyBoostPropertySheet>(pRVar6);
          if (this_00 != (PlantFamilyBoostPropertySheet *)0x0) {
            cVar3 = std::operator==((string *)(this_00 + 0x18),psVar8);
            if (cVar3 != '\0') {
              pPVar10 = Sexy::RtObject::Cast<PlantFamilyBoostPropertySheet>((RtObject *)this_00);
            }
            cVar3 = std::operator==((string *)(this_00 + 0x18),psVar8 + 0x10);
            if (cVar3 != '\0') {
              pPVar7 = Sexy::RtObject::Cast<PlantFamilyBoostPropertySheet>((RtObject *)this_00);
            }
          }
        }
        std::move_iterator<SexyURL::KeyedValue*>::operator++
                  ((move_iterator<SexyURL::KeyedValue*> *)&local_b8);
      }
      PlantFamilyDisplayValue::PlantFamilyDisplayValue((PlantFamilyDisplayValue *)&local_50);
      if (pPVar10 == (PlantFamilyBoostPropertySheet *)0x0) {
        std::string::append((string *)&local_50,"",(size_t)__n_00);
        local_40 = 0;
        uVar1 = 0;
        if (pPVar7 == (PlantFamilyBoostPropertySheet *)0x0) goto LAB_03fe99cc;
LAB_03fe9954:
        local_40 = uVar1;
        GetPropertyDisplay((PlantFamilyMgr *)(pPVar7 + 0x20),
                           (string *)(ulong)*(uint *)(pPVar7 + 0x34),*(float *)(psVar8 + 0x18),
                           (int)__n_00);
        FUN_05474278(asStack_48,(move_iterator<SexyURL::KeyedValue*> *)&local_b8);
        std::string::~string((string *)&local_b8);
        local_3c = GetPlantFamilyPropertyRare(pPVar7,*(float *)(psVar8 + 0x18));
      }
      else {
        GetPropertyDisplay((PlantFamilyMgr *)(pPVar10 + 0x20),
                           (string *)(ulong)*(uint *)(pPVar10 + 0x34),*(float *)(psVar8 + 8),
                           (int)__n_00);
        FUN_05474278((PlantFamilyDisplayValue *)&local_50,
                     (move_iterator<SexyURL::KeyedValue*> *)&local_b8);
        std::string::~string((string *)&local_b8);
        local_40 = GetPlantFamilyPropertyRare(pPVar10,*(float *)(psVar8 + 8));
        uVar1 = local_40;
        if (pPVar7 != (PlantFamilyBoostPropertySheet *)0x0) goto LAB_03fe9954;
LAB_03fe99cc:
        std::string::append(asStack_48,"",(size_t)__n_00);
        local_3c = SUB84(pPVar7,0);
      }
      PlantFamilyBoostValue::operator=(aPStack_38,(PlantFamilyBoostValue *)psVar8);
      std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>::push_back
                ((vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>> *)in_x8,
                 (PlantFamilyDisplayValue *)&local_50);
      PlantFamilyDisplayValue::~PlantFamilyDisplayValue((PlantFamilyDisplayValue *)&local_50);
      std::move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*>::operator++
                ((move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*> *)&local_c8);
    }
  }
  else {
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
    pRVar9 = (RtWeakPtr *)(lVar5 + 0x78);
    bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar9);
    if (!bVar4) {
      PlantFamilyBoostValue::PlantFamilyBoostValue((PlantFamilyBoostValue *)&local_b8);
      thunk_FUN_05475e00((PlantFamilyBoostValue *)&local_b8,0x18);
      local_b0 = (float)GetPlantFamilyPropertyMinValue
                                  ((PlantFamilyBoostPropertySheet *)0x0,(PlantBoost *)pRVar9);
      std::string::append(asStack_a8,"",__n);
      local_a0 = 0;
      std::string::append(asStack_98,"",__n);
      local_90 = bVar4;
      PlantFamilyDisplayValue::PlantFamilyDisplayValue((PlantFamilyDisplayValue *)&local_50);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1000,0x3fe96a4);
      (*pcVar2)();
    }
    pRVar6 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar9);
    pPVar7 = Sexy::RtObject::Cast<PlantFamilyBoostPropertySheet>(pRVar6);
    PlantFamilyBoostValue::PlantFamilyBoostValue((PlantFamilyBoostValue *)&local_b8);
    thunk_FUN_05475e00((PlantFamilyBoostValue *)&local_b8,pPVar7 + 0x18);
    local_b0 = (float)GetPlantFamilyPropertyMinValue(pPVar7,(PlantBoost *)pRVar9);
    std::string::append(asStack_a8,"",__n);
    local_a0 = 0;
    std::string::append(asStack_98,"",__n);
    local_90 = 0;
    PlantFamilyDisplayValue::PlantFamilyDisplayValue((PlantFamilyDisplayValue *)&local_50);
    GetPropertyDisplay((PlantFamilyMgr *)(pPVar7 + 0x20),(string *)(ulong)*(uint *)(pPVar7 + 0x34),
                       local_b0,(int)__n);
    FUN_05474278((PlantFamilyDisplayValue *)&local_50,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    std::string::append(asStack_48,"",__n);
    local_40 = GetPlantFamilyPropertyRare(pPVar7,local_b0);
    local_3c = 0;
    PlantFamilyBoostValue::operator=(aPStack_38,(PlantFamilyBoostValue *)&local_b8);
    std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>::push_back
              ((vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>> *)in_x8,
               (PlantFamilyDisplayValue *)&local_50);
    PlantFamilyDisplayValue::~PlantFamilyDisplayValue((PlantFamilyDisplayValue *)&local_50);
    PlantFamilyBoostValue::~PlantFamilyBoostValue((PlantFamilyBoostValue *)&local_b8);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
  PlantFamilyInfo::~PlantFamilyInfo(aPStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::ClearReplacePropertyByIndex(int) */

void __thiscall PlantFamilyMgr::ClearReplacePropertyByIndex(PlantFamilyMgr *this,int param_1)

{
  bool bVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_02;
  uint *puVar2;
  long lVar3;
  int extraout_w1;
  ulong __n;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    this_02 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)PlayerInfo::GetPlantFamilyInfos(this_01);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_02);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_02);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1)
    {
      puVar2 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      __n = (ulong)*puVar2;
      if (*puVar2 == (uint)this) {
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(puVar2 + 2));
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(puVar2 + 2));
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar1) {
          lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          std::string::append((string *)(lVar3 + 0x10),"",__n);
          *(undefined4 *)(lVar3 + 0x18) = 0;
          std::move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*>::operator++
                    ((move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*> *)&local_18);
        }
        GetPlantFamilyProperty((PlantFamilyMgr *)((ulong)this & 0xffffffff),extraout_w1);
        goto LAB_03fe9a84;
      }
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_28);
    }
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
LAB_03fe9a84:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::GetPlantFamilyOptionalProperty(int) */

void __thiscall PlantFamilyMgr::GetPlantFamilyOptionalProperty(PlantFamilyMgr *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  RtWeakPtr *this_00;
  RtObject *this_01;
  PlantFamilyBoostPropertySheet *pPVar6;
  int extraout_w1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  float fVar7;
  float fVar8;
  float fVar9;
  RtMixedPtr<Sexy::Image> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [8];
  pair<std::string,std::string> apStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetFamilyByID(this,(int)___stack_chk_guard);
  Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar5 + 0x60));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(lVar5 + 0x60));
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  if (bVar3) {
    do {
      this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (!bVar3) {
        GetPlantFamilyLevel((int)this);
        std::pair<std::string,std::string>::pair(apStack_18);
        GetPlantFamilyPropertyMinValue((PlantFamilyBoostPropertySheet *)0x0,(PlantBoost *)this_00);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1000,0x3fe9dd8);
        (*pcVar2)();
      }
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pPVar6 = Sexy::RtObject::Cast<PlantFamilyBoostPropertySheet>(this_01);
      iVar4 = GetPlantFamilyLevel((int)this);
      std::pair<std::string,std::string>::pair(apStack_18);
      fVar7 = (float)GetPlantFamilyPropertyMinValue(pPVar6,(PlantBoost *)this_00);
      iVar1 = *(int *)(pPVar6 + 0x34);
      fVar9 = *(float *)(pPVar6 + 0x38);
      fVar8 = fVar7 + fVar9 * (float)iVar4;
      thunk_FUN_05475e00(apStack_18,pPVar6 + 0x20);
      GetOptionalPropertyDisplay
                ((PlantFamilyMgr *)(ulong)(uint)(int)(float)iVar1,fVar7,fVar8,fVar8 + fVar9,
                 extraout_w1);
      FUN_05474278(auStack_10,asStack_20);
      std::string::~string(asStack_20);
      std::vector<PlantFamilyOptionalDisplayValue,std::allocator<PlantFamilyOptionalDisplayValue>>::
      push_back((vector<PlantFamilyOptionalDisplayValue,std::allocator<PlantFamilyOptionalDisplayValue>>
                 *)in_x8,(PlantFamilyOptionalDisplayValue *)apStack_18);
      Sexy::PACommand::~PACommand((PACommand *)apStack_18);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_30);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    } while (bVar3);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::GetPlantFamily(Sexy::RtWeakPtr<PlantType const>) */

void PlantFamilyMgr::GetPlantFamily
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
               undefined8 param_2,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  bool bVar1;
  char cVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [12];
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  uint *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)PlayerInfo::GetPlantFamilyInfos(this_00);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_01);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_01);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      auVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      GetFamilyByID((PlantFamilyMgr *)(ulong)*auVar6._0_8_,auVar6._8_4_);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
      if (cVar2 != '\0') {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(lVar3 + 0x30));
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(lVar3 + 0x30));
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
        local_18 = std::
                   find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                             (uVar4,uVar5,lVar3 + 8);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        local_10 = (uint *)std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)(lVar3 + 0x30));
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (bVar1) {
          local_10 = auVar6._0_8_;
          std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>::push_back
                    ((vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>> *)param_1,
                     (PlantFamilyInfo **)&local_10);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_30);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::GetPlantFamily(int) */

void PlantFamilyMgr::GetPlantFamily(int param_1)

{
  PlantNameMapperServerID *this;
  int in_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
  PlantNameMapperServerID::GetTypeForID(this,in_w1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  GetPlantFamily(param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::CheckAndBuildFamily(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
PlantFamilyMgr::CheckAndBuildFamily(PlantFamilyMgr *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  bool bVar1;
  long lVar2;
  vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>> *this_00;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  local_28 = std::
             unordered_map<std::string,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>>>>
             ::find((unordered_map<std::string,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>>>>
                     *)(this + 8),(string *)(lVar2 + 8));
  local_20[0] = FUN_03fe62d8();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)local_20);
  if (!bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    this_00 = (vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>> *)
              std::
              unordered_map<std::string,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>>>>
              ::operator[]((unordered_map<std::string,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>>>>
                            *)(this + 8),(string *)(lVar2 + 8));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)param_2);
    GetPlantFamily((vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>> *)local_20,this,
                   (rbtree_iterator *)&local_28);
    std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>::operator=
              (this_00,(vector *)local_20);
    std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>::~vector
              ((vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>> *)local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::GetPlantBoostInFamilyRaw(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
PlantFamilyMgr::GetPlantBoostInFamilyRaw
          (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
          PlantFamilyMgr *this)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  PlantFamilyMgr *this_00;
  RtWeakPtrBase *pRVar5;
  RtObject *this_01;
  PlantFamilyBoostPropertySheet *pPVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  float fVar10;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  string asStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  uVar3 = Sexy::LazySingleton<PlantFamilyMgr>::GetInstancePtr();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)this);
  GetPlantFamily(avStack_20,uVar3,aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    Sexy::LazySingleton<PlantFamilyMgr>::GetInstancePtr();
    cVar2 = PlantFamilyIsEnable();
    if (cVar2 == '\0') break;
    cVar2 = IsPlantFamilyActivated(*(int *)*plVar4);
    if (cVar2 != '\0') {
      this_00 = (PlantFamilyMgr *)Sexy::LazySingleton<PlantFamilyMgr>::GetInstancePtr();
      CheckAndBuildFamilyBoosts(this_00,(PlantFamilyInfo *)*plVar4);
      lVar9 = *plVar4;
      local_48 = FUN_03fe5594(*(undefined8 *)(lVar9 + 0x20));
      local_40 = FUN_03fe55e4(*(undefined8 *)(lVar9 + 0x28));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
            bVar1) {
        pRVar5 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,pRVar5);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
        if (bVar1) {
          this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          pPVar6 = Sexy::RtObject::Cast<PlantFamilyBoostPropertySheet>(this_01);
          if (pPVar6 != (PlantFamilyBoostPropertySheet *)0x0) {
            lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            uVar7 = FUN_03fe4a50(*(undefined8 *)(pRVar5 + 8),*(undefined8 *)(pRVar5 + 0x10));
            if ((ulong)(long)*(int *)(lVar9 + 0x30) <= uVar7) {
              lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
              pfVar8 = (float *)FUN_03fe4a64(*(undefined8 *)(pRVar5 + 8),
                                             (long)(*(int *)(lVar9 + 0x30) + -1));
              fVar10 = *pfVar8;
              Set8BytesTo0(asStack_30);
              lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
              if (*(int *)(lVar9 + 0x34) == 0) {
                Sexy::StrFormat(" %.2f%%",aRStack_28,(double)(fVar10 * 100.0));
              }
              else {
                Sexy::StrFormat(" %d",aRStack_28,(ulong)(uint)(int)fVar10);
              }
              thunk_FUN_054757c0(asStack_30,aRStack_28);
              std::string::~string((string *)aRStack_28);
              std::vector<std::string,std::allocator<std::string>>::push_back
                        ((vector<std::string,std::allocator<std::string>> *)param_1,asStack_30);
              std::string::~string(asStack_30);
            }
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        std::move_iterator<SexyURL::KeyedValue*>::operator++
                  ((move_iterator<SexyURL::KeyedValue*> *)&local_48);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>::~vector
            ((vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::GetPlantBoostInFamily(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
PlantFamilyMgr::GetPlantBoostInFamily
          (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
          PlantFamilyMgr *this)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  PlantFamilyMgr *this_00;
  RtWeakPtrBase *pRVar7;
  RtObject *this_01;
  PlantFamilyBoostPropertySheet *pPVar8;
  ulong uVar9;
  float *pfVar10;
  ResourceInfo *pRVar11;
  long lVar12;
  string *extraout_x1;
  long lVar13;
  long lVar14;
  float fVar15;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  wstring awStack_38 [8];
  Sexy aSStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  lVar13 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  uVar5 = Sexy::LazySingleton<PlantFamilyMgr>::GetInstancePtr();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)this);
  GetPlantFamily(avStack_20,uVar5,aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar2) {
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    Sexy::LazySingleton<PlantFamilyMgr>::GetInstancePtr();
    cVar3 = PlantFamilyIsEnable();
    if (cVar3 == '\0') goto LAB_03fea9fc;
    cVar3 = IsPlantFamilyActivated(*(int *)*plVar6);
    if (cVar3 == '\0') {
      bVar1 = true;
    }
    else {
      this_00 = (PlantFamilyMgr *)Sexy::LazySingleton<PlantFamilyMgr>::GetInstancePtr();
      CheckAndBuildFamilyBoosts(this_00,(PlantFamilyInfo *)*plVar6);
      lVar14 = *plVar6;
      local_50 = FUN_03fe5594(*(undefined8 *)(lVar14 + 0x20));
      local_48 = FUN_03fe55e4(*(undefined8 *)(lVar14 + 0x28));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48),
            bVar2) {
        pRVar7 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,pRVar7);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_40);
        if (bVar2) {
          this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
          pPVar8 = Sexy::RtObject::Cast<PlantFamilyBoostPropertySheet>(this_01);
          if (pPVar8 != (PlantFamilyBoostPropertySheet *)0x0) {
            lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
            uVar9 = FUN_03fe4a50(*(undefined8 *)(pRVar7 + 8),*(undefined8 *)(pRVar7 + 0x10));
            if ((ulong)(long)*(int *)(lVar14 + 0x30) <= uVar9) {
              lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
              pfVar10 = (float *)FUN_03fe4a64(*(undefined8 *)(pRVar7 + 8),
                                              (long)(*(int *)(lVar14 + 0x30) + -1));
              fVar15 = *pfVar10;
              FUN_05476574(awStack_38);
              pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_40);
              uVar4 = GetPlantFamilyPropertyRare((PlantFamilyBoostPropertySheet *)pRVar11,fVar15);
              switch(uVar4) {
              default:
                FUN_054772c4(awStack_38,&DAT_05706fb0);
                break;
              case 1:
                FUN_054772c4(awStack_38,&DAT_0571de80);
                break;
              case 2:
                FUN_054772c4(awStack_38,&DAT_05706fd8);
                break;
              case 3:
                FUN_054772c4(awStack_38,&DAT_05707000);
                break;
              case 4:
                FUN_054772c4(awStack_38,&DAT_05707028);
              }
              lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
              lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
              GetPropertyDisplay((PlantFamilyMgr *)(lVar14 + 0x20),
                                 (string *)(ulong)*(uint *)(lVar12 + 0x34),fVar15,(int)lVar13);
              Sexy::UTF8StringToWString(aSStack_30,extraout_x1);
              thunk_FUN_05477668(awStack_38,aRStack_28);
              FUN_05476c50(aRStack_28);
              std::string::~string((string *)aSStack_30);
              std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                        ((vector<std::wstring,std::allocator<std::wstring>> *)param_1,awStack_38);
              FUN_05476c50(awStack_38);
            }
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        std::move_iterator<SexyURL::KeyedValue*>::operator++
                  ((move_iterator<SexyURL::KeyedValue*> *)&local_50);
      }
      lVar14 = FUN_03fe4a6c(*(undefined8 *)(*plVar6 + 8),*(undefined8 *)(*plVar6 + 0x10));
      if (lVar14 == 0) {
        bVar1 = true;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
  }
  if (bVar1) {
LAB_03fea9fc:
    FUN_05478178(awStack_38,&DAT_05706fb0,aRStack_28);
    nop();
    std::string::string((string *)aSStack_30,"[PLANT_FAMILY_LOCKED]");
    StringHelper::ToStringValue((string *)aSStack_30);
    thunk_FUN_05477668(awStack_38,aRStack_28);
    FUN_05476c50(aRStack_28);
    std::string::~string((string *)aSStack_30);
    nop();
    std::vector<std::wstring,std::allocator<std::wstring>>::push_back
              ((vector<std::wstring,std::allocator<std::wstring>> *)param_1,awStack_38);
    FUN_05476c50(awStack_38);
  }
  std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>::~vector
            ((vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyMgr::GetFamilyBoostForPlant(std::vector<PlantBoost const*, std::allocator<PlantBoost
   const*> >&, int, PlantBoostType) */

void __thiscall
PlantFamilyMgr::GetFamilyBoostForPlant
          (PlantFamilyMgr *this,vector<PlantBoost_const*,std::allocator<PlantBoost_const*>> *param_1
          ,int param_2,int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  PVPManager *this_00;
  PlantNameMapperServerID *this_01;
  long lVar4;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar5;
  undefined8 *puVar6;
  RtWeakPtr *this_02;
  RtMixedPtrBase aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PlantFamilyIsEnable();
  if (cVar1 != '\0') {
    this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar3 = PVPManager::IsLoadServerPlantData(this_00);
    if ((2 < iVar3 - 1U) && (cVar1 = CustomLevelUtils::IsCustomLevel(), cVar1 == '\0')) {
      this_01 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
      PlantNameMapperServerID::GetTypeForID(this_01,param_2);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_38);
        CheckAndBuildFamily(this,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        pvVar5 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)std::
                    unordered_map<std::string,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>>>>
                    ::operator[]((unordered_map<std::string,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<PlantFamilyInfo*,std::allocator<PlantFamilyInfo*>>>>>
                                  *)(this + 8),(string *)(lVar4 + 8));
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(pvVar5);
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(pvVar5);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
              bVar2) {
          puVar6 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
          pvVar5 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)((PlantFamilyInfo *)*puVar6 + 0x20);
          CheckAndBuildFamilyBoosts(this,(PlantFamilyInfo *)*puVar6);
          local_20 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(pvVar5);
          local_18 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(pvVar5);
          while (bVar2 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
                bVar2) {
            this_02 = (RtWeakPtr *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
            bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
            if ((bVar2) &&
               (lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_02),
               *(int *)(lVar4 + 0x10) == param_4)) {
              local_10 = this_02;
              std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>::push_back
                        (param_1,(PlantBoost **)&local_10);
            }
            std::move_iterator<SexyURL::KeyedValue*>::operator++
                      ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

