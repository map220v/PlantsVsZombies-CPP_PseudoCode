// Class: NewPlantUIUtils


/* NewPlantUIUtils::IsProfessionValue(NewPlantUISortType) */

bool NewPlantUIUtils::IsProfessionValue(int param_1)

{
  if (param_1 != 0x12) {
    return param_1 < 6;
  }
  return true;
}


/* NewPlantUIUtils::GetPlantProfessionValue(NewPlantUISortType) */

undefined4 NewPlantUIUtils::GetPlantProfessionValue(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 < 0x13) {
    uVar1 = *(undefined4 *)(&DAT_057512f0 + (ulong)param_1 * 4);
  }
  return uVar1;
}


/* NewPlantUIUtils::GetPlantRareValue(NewPlantUISortType) */

undefined4 NewPlantUIUtils::GetPlantRareValue(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 - 6U < 0xe) {
    uVar1 = *(undefined4 *)(&DAT_05751340 + (ulong)(param_1 - 6U) * 4);
  }
  return uVar1;
}


/* NewPlantUIUtils::GetPlantTagValue(NewPlantUISortType) */

undefined4 NewPlantUIUtils::GetPlantTagValue(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 - 0xbU < 6) {
    uVar1 = *(undefined4 *)(&DAT_057512d0 + (ulong)(param_1 - 0xbU) * 4);
  }
  return uVar1;
}


/* NewPlantUIUtils::IsRareValue(NewPlantUISortType) */

bool NewPlantUIUtils::IsRareValue(int param_1)

{
  if (param_1 != 0x13) {
    return param_1 - 6U < 5;
  }
  return true;
}


/* NewPlantUIUtils::IsTagValue(NewPlantUISortType) */

bool NewPlantUIUtils::IsTagValue(int param_1)

{
  return param_1 - 0xbU < 6;
}


/* NewPlantUIUtils::GetTagColorByPlant(int) */

undefined1 NewPlantUIUtils::GetTagColorByPlant(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 6;
  if ((((param_1 < 0x24) && (uVar1 = 5, param_1 < 0x22)) && (uVar1 = 4, param_1 < 0x20)) &&
     ((uVar1 = 3, param_1 < 0x1a && (uVar1 = 2, param_1 < 0x10)))) {
    return 4 < param_1;
  }
  return uVar1;
}


/* NewPlantUIUtils::GetSpecialTagColorByPlant(int) */

undefined4 NewPlantUIUtils::GetSpecialTagColorByPlant(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 6;
  if ((((param_1 < 10) && (uVar1 = 3, param_1 < 8)) && (uVar1 = 5, param_1 < 6)) &&
     (uVar1 = 2, param_1 < 4)) {
    uVar1 = 4;
    if (param_1 < 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlantUIUtils::GetTotalPlantNum() */

void NewPlantUIUtils::GetTotalPlantNum(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  NameMapperBase *this_00;
  ulong uVar4;
  int iVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  Magento *local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  Magento::GetPlantLevelUp(___stack_chk_guard);
  while( true ) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    uVar3 = FUN_033bd468(*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x68));
    if (uVar3 <= uVar4) break;
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    this = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_033bd474(*(undefined8 *)(lVar2 + 0x60),uVar4);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    FUN_05475d88(asStack_10,lVar2 + 0x80);
    this_00 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    iVar1 = NameMapperBase::GetIdForName(this_00,asStack_10);
    if (iVar1 == -1) {
      std::string::~string(asStack_10);
      uVar4 = uVar4 + 1;
    }
    else {
      iVar5 = iVar5 + 1;
      std::string::~string(asStack_10);
      uVar4 = uVar4 + 1;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlantUIUtils::GetAvatarDescription(int) */

void __thiscall NewPlantUIUtils::GetAvatarDescription(NewPlantUIUtils *this,int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  NameMapperBase *pNVar4;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  long lVar6;
  ulong uVar7;
  string *psVar8;
  bool extraout_w1;
  ulong uVar9;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar4 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
  iVar3 = (int)this;
  cVar1 = NameMapperBase::ContainsId(pNVar4,iVar3);
  if (cVar1 == '\0') {
    pNVar4 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar4,iVar3);
    if (cVar1 != '\0') {
      NewAvatar::GetAvatarInfoByAvatarId(iVar3);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Sexy::ToWString((string *)(lVar6 + 0x50));
      TodStringTranslate(awStack_10);
      FUN_05476c50(awStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      goto LAB_033c20ec;
    }
  }
  else {
    iVar3 = AvatarNameMapperServerID::GetInstance();
    uVar9 = 0;
    NameMapperBase::GetNameForId(iVar3);
    Magento::GetPlantPieceProductsData((Magento *)0x1,extraout_w1);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar2) {
      while( true ) {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        uVar7 = FUN_033bd468(*(undefined8 *)(lVar6 + 0x60),*(undefined8 *)(lVar6 + 0x68));
        if (uVar7 <= uVar9) break;
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_033bd474(*(undefined8 *)(lVar6 + 0x60),uVar9);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
        cVar1 = std::operator==((string *)(lVar6 + 0x80),asStack_20);
        if (cVar1 != '\0') {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_033bd474(*(undefined8 *)(lVar6 + 0x60),uVar9);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
          psVar8 = (string *)FUN_033bd488(*(undefined8 *)(lVar6 + 0x38),0);
          Sexy::ToWString(psVar8);
          TodStringTranslate(awStack_10);
          FUN_05476c50(awStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          std::string::~string(asStack_20);
          goto LAB_033c20ec;
        }
        uVar9 = uVar9 + 1;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_20);
  }
  FUN_05476574();
LAB_033c20ec:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlantUIUtils::GetAccessoryContentImage(int) */

void __thiscall NewPlantUIUtils::GetAccessoryContentImage(NewPlantUIUtils *this,int param_1)

{
  CachedUIResourcePtr *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  switch((ulong)this & 0xffffffff) {
  case 0:
    this_00 = (CachedUIResourcePtr *)&DAT_06a9dfe8;
    break;
  case 1:
    this_00 = (CachedUIResourcePtr *)&DAT_06a9d710;
    break;
  case 2:
  case 4:
    this_00 = (CachedUIResourcePtr *)&DAT_06a9df80;
    break;
  case 3:
    this_00 = (CachedUIResourcePtr *)&DAT_06a9dd00;
    break;
  case 5:
    this_00 = (CachedUIResourcePtr *)&DAT_06a9def8;
    break;
  default:
    this_00 = (CachedUIResourcePtr *)&DAT_06a9d660;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this_00);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlantUIUtils::IsPlantFavourite(std::string const&) */

void NewPlantUIUtils::IsPlantFavourite(string *param_1)

{
  bool bVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)LocalProfileSaveData::GetSeedChooserFavorites(pPVar2);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_033c93d0(uVar3,uVar4,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlantUIUtils::GetUnlockedPlantNum() */

void NewPlantUIUtils::GetUnlockedPlantNum(void)

{
  undefined4 uVar1;
  ProfileMgr *this;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::GetUnlockedPlantList();
  uVar1 = FUN_033bd47c(local_20,local_18);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlantUIUtils::IsSamePlantTag(NewPlantUISortType, Sexy::RtWeakPtr<PlantType const>) */

void NewPlantUIUtils::IsSamePlantTag(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = GetPlantTagValue();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  uVar4 = FUN_033c4444(*(undefined8 *)(lVar3 + 0xf0));
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  uVar5 = FUN_033c4494(*(undefined8 *)(lVar3 + 0xf8));
  local_18 = FUN_033ca884(uVar4,uVar5,uVar2);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  local_10 = FUN_033c4494(*(undefined8 *)(lVar3 + 0xf8));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlantUIUtils::IsWaterPlant(Sexy::RtWeakPtr<PlantType const>) */

void NewPlantUIUtils::IsWaterPlant(RtWeakPtr<Sexy::ResourceInfo> *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  uVar3 = FUN_033c4444(*(undefined8 *)(lVar2 + 0xf0));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  uVar4 = FUN_033c4494(*(undefined8 *)(lVar2 + 0xf8));
  local_18 = FUN_033caaf4(uVar3,uVar4);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  local_10 = FUN_033c4494(*(undefined8 *)(lVar2 + 0xf8));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlantUIUtils::GetPlantTargetValueRank(int, int) */

void NewPlantUIUtils::GetPlantTargetValueRank(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  RtWeakPtr aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [24];
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  iVar2 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_20);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    std::vector<PlantAttributeInfo,std::allocator<PlantAttributeInfo>>::vector
              ((vector<PlantAttributeInfo,std::allocator<PlantAttributeInfo>> *)asStack_20,
               (vector *)(lVar4 + 0xd8));
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)asStack_20);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)asStack_20);
    local_30 = FUN_033c9b34(uVar5,uVar6,param_2);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (bVar1) {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      uVar7 = *(undefined4 *)(lVar4 + 4);
      std::vector<PlantAttributeInfo,std::allocator<PlantAttributeInfo>>::~vector
                ((vector<PlantAttributeInfo,std::allocator<PlantAttributeInfo>> *)asStack_20);
    }
    else {
      std::vector<PlantAttributeInfo,std::allocator<PlantAttributeInfo>>::~vector
                ((vector<PlantAttributeInfo,std::allocator<PlantAttributeInfo>> *)asStack_20);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlantUIUtils::GetSortValue(NewPlantUISortValue, int) */

void NewPlantUIUtils::GetSortValue(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 0:
    uVar3 = GetPlantTargetValueRank(param_2,0);
    break;
  case 1:
    uVar3 = GetPlantTargetValueRank(param_2,1);
    break;
  case 2:
    uVar3 = GetPlantTargetValueRank(param_2,2);
    break;
  case 3:
    uVar3 = GetPlantTargetValueRank(param_2,3);
    break;
  case 4:
    uVar3 = GetPlantTargetValueRank(param_2,4);
    break;
  case 5:
    uVar3 = GetPlantTargetValueRank(param_2,5);
    break;
  default:
    iVar2 = PlantNameMapperServerID::GetInstance();
    uVar3 = 0;
    NameMapperBase::GetNameForId(iVar2);
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    cVar1 = PlayerInfo::GetIsPlantUnlocked(this_00,asStack_10);
    if (cVar1 != '\0') {
      uVar3 = PlayerInfo::GetPlantStarLevel(this_00,asStack_10,false);
    }
    std::string::~string(asStack_10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlantUIUtils::GetProductByName(std::string const&) */

void __thiscall NewPlantUIUtils::GetProductByName(NewPlantUIUtils *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  RtWeakPtr<PowerPropertySheet> *this_00;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<MagentoProductProps>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<MagentoProductProps>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<MagentoProductProps>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<MagentoProductProps>>>>
                     *)AdaptorNewPlantUIEntryScreen::PlantProductMap,(string *)this);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)AdaptorNewPlantUIEntryScreen::PlantProductMap);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar4 + 8));
  }
  else {
    pcVar3 = (char *)FUN_0547429c(this);
    GetProductData(1,pcVar3);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_10);
    if (bVar2) {
      this_00 = (RtWeakPtr<PowerPropertySheet> *)
                std::
                map<std::string,Sexy::RtWeakPtr<MagentoProductProps>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<MagentoProductProps>>>>
                ::operator[]((map<std::string,Sexy::RtWeakPtr<MagentoProductProps>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<MagentoProductProps>>>>
                              *)AdaptorNewPlantUIEntryScreen::PlantProductMap,(string *)this);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)&local_10);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)&DAT_06a9db80);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlantUIUtils::GetAvatarProductByName(std::string const&) */

void __thiscall NewPlantUIUtils::GetAvatarProductByName(NewPlantUIUtils *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  RtWeakPtr<PowerPropertySheet> *this_00;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,Sexy::RtWeakPtr<MagentoProductProps>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<MagentoProductProps>>>>
             ::find((map<std::string,Sexy::RtWeakPtr<MagentoProductProps>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<MagentoProductProps>>>>
                     *)AdaptorNewPlantUIEntryScreen::PlantAvatarProductMap,(string *)this);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)AdaptorNewPlantUIEntryScreen::PlantAvatarProductMap);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar4 + 8));
  }
  else {
    pcVar3 = (char *)FUN_0547429c(this);
    GetProductData(8,pcVar3);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_10);
    if (bVar2) {
      this_00 = (RtWeakPtr<PowerPropertySheet> *)
                std::
                map<std::string,Sexy::RtWeakPtr<MagentoProductProps>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<MagentoProductProps>>>>
                ::operator[]((map<std::string,Sexy::RtWeakPtr<MagentoProductProps>,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtWeakPtr<MagentoProductProps>>>>
                              *)AdaptorNewPlantUIEntryScreen::PlantAvatarProductMap,(string *)this);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)&local_10);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)&DAT_06a9db80);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlantUIUtils::canPlantUnlockAvatar(std::string) */

void NewPlantUIUtils::canPlantUnlockAvatar(string *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *__s;
  ProfileMgr *this;
  PlayerInfo *pPVar4;
  long lVar5;
  string *extraout_x1;
  undefined1 uVar6;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)FUN_0547429c();
  std::string::string(asStack_10,__s);
  GetAvatarProductByName((NewPlantUIUtils *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    cVar2 = PlayerInfo::IsPlantAvatarUnLocked(pPVar4,param_1,0,0);
    uVar6 = 1;
    if (cVar2 == '\0') {
      iVar3 = PlayerInfo::GetAvatarPiecesCount(pPVar4,param_1,0,0);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      if (*(int *)(lVar5 + 0x90) <= iVar3) goto LAB_033d10a8;
    }
    cVar2 = NewAvatar::IsAnyNewAvatarPieceFull(param_1);
    if (cVar2 != '\0') goto LAB_033d10a8;
  }
  uVar6 = 0;
LAB_033d10a8:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlantUIUtils::addSeedPacketEntry(AdaptorSeedPacketConfig&) */

void NewPlantUIUtils::addSeedPacketEntry(AdaptorSeedPacketConfig *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ProfileMgr *this;
  Magento *this_00;
  long lVar7;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar8;
  NameMapperBase *this_01;
  string *psVar9;
  PlantType *pPVar10;
  int *piVar11;
  MagentoProductProps *this_02;
  char *__s;
  ulong uVar12;
  string *extraout_x1;
  undefined4 uVar13;
  ulong uVar14;
  int local_84;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  string asStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr aRStack_68 [8];
  string asStack_60 [8];
  GachaItemInfo aGStack_58 [4];
  undefined4 local_54;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  uint local_28;
  uint local_24;
  string asStack_20 [8];
  uint local_18;
  uint local_14;
  uint local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (Magento *)ProfileMgr::GetCurrentProfile(this);
  uVar14 = 0;
  Magento::GetPlantLevelUp(this_00);
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
  lVar7 = FUN_033bd468(*(undefined8 *)(lVar7 + 0x60),*(undefined8 *)(lVar7 + 0x68));
  if (lVar7 != 0) {
    do {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
      pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_033bd474(*(undefined8 *)(lVar7 + 0x60),uVar14);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
      FUN_05475d88(asStack_78,lVar7 + 0x80);
      this_01 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
      iVar5 = NameMapperBase::GetIdForName(this_01,asStack_78);
      if (iVar5 == -1) {
        std::string::~string(asStack_78);
      }
      else {
        psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
        local_84 = PlayerInfo::GetPlantStarLevel((PlayerInfo *)this_00,asStack_78,false);
        pPVar10 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        lVar7 = PlantType::GetProps(pPVar10);
        piVar11 = eastl::max_alt<int>(&local_84,(int *)(lVar7 + 0x28));
        iVar1 = *piVar11;
        local_84 = iVar1;
        GachaItemInfo::GachaItemInfo(aGStack_58);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
        pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_033bd474(*(undefined8 *)(lVar7 + 0x60),uVar14)
        ;
        this_02 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
        MagentoProductProps::GetCurrentLevelPriceData(this_02,iVar1,(LevelUpPriceData *)aGStack_58);
        AdaptorSeedPacketEntryConfig::AdaptorSeedPacketEntryConfig
                  ((AdaptorSeedPacketEntryConfig *)&local_40);
        local_40 = iVar5;
        local_38 = PlayerInfo::GetPlantStarLevel((PlayerInfo *)this_00,asStack_78,false);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_70);
        uVar13 = 0;
        if (bVar2) {
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
          uVar13 = *(undefined4 *)(lVar7 + 0xd0);
        }
        local_3c = uVar13;
        local_34 = PlayerInfo::GetPlantPieceCount((PlayerInfo *)this_00,asStack_78,false);
        iVar5 = local_38;
        pPVar10 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        lVar7 = PlantType::GetProps(pPVar10);
        if (iVar5 < *(int *)(lVar7 + 0x2c)) {
          local_30 = local_54;
        }
        uVar6 = 0;
        local_2c = 0 < local_38;
        iVar5 = PlantNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar5);
        FUN_05474278(asStack_20,asStack_60);
        std::string::~string(asStack_60);
        local_28 = PlayerInfo::GetIsPlantUnlocked((PlayerInfo *)this_00,asStack_20);
        local_28 = local_28 & 0xff;
        local_24 = LocalProfileSaveData::IsSeedChooserFavorite((PlayerInfo *)this_00,asStack_20);
        local_24 = local_24 & 0xff;
        __s = (char *)FUN_0547429c(asStack_20);
        std::string::string(asStack_60,__s);
        GetProductByName((NewPlantUIUtils *)asStack_60,extraout_x1);
        std::string::~string(asStack_60);
        nop();
        cVar3 = PlayerInfo::GetIsPlantUnlocked((PlayerInfo *)this_00,asStack_20);
        if (cVar3 == '\0') {
          iVar5 = PlayerInfo::GetPlantPieceCount((PlayerInfo *)this_00,asStack_20,false);
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
          uVar6 = (uint)(*(int *)(lVar7 + 0x90) <= iVar5);
        }
        cVar3 = PlayerInfo::GetIsPlantUnlocked((PlayerInfo *)this_00,asStack_20);
        if (cVar3 == '\0') {
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
          local_30 = *(undefined4 *)(lVar7 + 0x90);
        }
        local_14 = uVar6;
        cVar3 = canPlantLevelUp(aRStack_68,false,true);
        uVar6 = 0;
        if (cVar3 != '\0') {
          bVar4 = PlayerInfo::GetIsPlantUnlocked((PlayerInfo *)this_00,asStack_20);
          uVar6 = (uint)bVar4;
        }
        local_18 = uVar6;
        FUN_05475d88(asStack_60,asStack_78);
        local_10 = canPlantUnlockAvatar(asStack_60);
        local_10 = local_10 & 0xff;
        std::string::~string(asStack_60);
        std::vector<AdaptorSeedPacketEntryConfig,std::allocator<AdaptorSeedPacketEntryConfig>>::
        push_back((vector<AdaptorSeedPacketEntryConfig,std::allocator<AdaptorSeedPacketEntryConfig>>
                   *)param_1,(AdaptorSeedPacketEntryConfig *)&local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        AdaptorSeedPacketEntryConfig::~AdaptorSeedPacketEntryConfig
                  ((AdaptorSeedPacketEntryConfig *)&local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
        std::string::~string(asStack_78);
      }
      uVar14 = uVar14 + 1;
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
      uVar12 = FUN_033bd468(*(undefined8 *)(lVar7 + 0x60),*(undefined8 *)(lVar7 + 0x68));
    } while (uVar14 < uVar12);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlantUIUtils::buildSeedPacketInfo() */

void __thiscall NewPlantUIUtils::buildSeedPacketInfo(NewPlantUIUtils *this)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this_00;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  PIInterpolator *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::PIInterpolator::PIInterpolator(in_x8);
  addSeedPacketEntry((AdaptorSeedPacketConfig *)in_x8);
  AdaptorSeedPacketConfig::Order((AdaptorSeedPacketConfig *)in_x8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_033bd358(*(undefined4 *)(lVar3 + 0x40));
  if ((iVar2 == 0x1d) || (iVar2 == 0x18)) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)in_x8);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)in_x8);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      bVar1 = std::operator==((string *)(lVar3 + 0x20),"cactus");
      if (bVar1) {
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)in_x8);
        uVar5 = __gnu_cxx::
                __normal_iterator<Sexy::Touch*,std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>>
                ::operator+((__normal_iterator<Sexy::Touch*,std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>>
                             *)&local_18,1);
        std::
        rotate<__gnu_cxx::__normal_iterator<AdaptorSeedPacketEntryConfig*,std::vector<AdaptorSeedPacketEntryConfig,std::allocator<AdaptorSeedPacketEntryConfig>>>>
                  (uVar4,local_18,uVar5);
        break;
      }
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

