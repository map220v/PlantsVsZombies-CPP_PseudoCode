// Class: PlantAccessoryMgr


/* PlantAccessoryMgr::~PlantAccessoryMgr() */

void __thiscall PlantAccessoryMgr::~PlantAccessoryMgr(PlantAccessoryMgr *this)

{
  *(undefined ***)this = &PTR__PlantAccessoryMgr_06609110;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  Sexy::LazySingleton<PlantAccessoryMgr>::~LazySingleton((LazySingleton<PlantAccessoryMgr> *)this);
  return;
}


/* PlantAccessoryMgr::~PlantAccessoryMgr() */

void __thiscall PlantAccessoryMgr::~PlantAccessoryMgr(PlantAccessoryMgr *this)

{
  ~PlantAccessoryMgr(this);
  AK::FreeHook(this);
  return;
}


/* PlantAccessoryMgr::PlantAccessoryMgr() */

void __thiscall PlantAccessoryMgr::PlantAccessoryMgr(PlantAccessoryMgr *this)

{
  Sexy::LazySingleton<PlantAccessoryMgr>::LazySingleton((LazySingleton<PlantAccessoryMgr> *)this);
  *(undefined ***)this = &PTR__PlantAccessoryMgr_06609110;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  return;
}


/* PlantAccessoryMgr::SetCurrentPlantType(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall PlantAccessoryMgr::SetCurrentPlantType(PlantAccessoryMgr *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetPlantDisplayName(int) */

void PlantAccessoryMgr::GetPlantDisplayName(int param_1)

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
  Plant::GetFormattedNameString((Plant *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAccessoryMgr::GetAccessoryForPlant(int) */

int * __thiscall PlantAccessoryMgr::GetAccessoryForPlant(PlantAccessoryMgr *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 *puVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
LAB_03fe2454:
    piVar3 = (int *)0x0;
  }
  else {
    puVar2 = (undefined8 *)PlayerInfo::GetPlantAccessoryInfos(this_01);
    uVar5 = *puVar2;
    iVar1 = FUN_03fe1f50(uVar5,puVar2[1]);
    lVar4 = 0;
    do {
      if (iVar1 <= (int)lVar4) goto LAB_03fe2454;
      piVar3 = (int *)FUN_03fe1f5c(uVar5,lVar4);
      lVar4 = lVar4 + 1;
    } while (*piVar3 != param_1);
  }
  return piVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetAccessoryForPlant(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
PlantAccessoryMgr::GetAccessoryForPlant(PlantAccessoryMgr *this,RtWeakPtrBase *param_2)

{
  int iVar1;
  PlantNameMapperServerID *pPVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  iVar1 = PlantNameMapperServerID::GetIdForType(pPVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  GetAccessoryForPlant(this,iVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::IsTargetAccessoryUsed(int, Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
PlantAccessoryMgr::IsTargetAccessoryUsed(undefined8 param_1_00,int param_1,RtWeakPtrBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  PlantNameMapperServerID *pPVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  undefined8 *puVar4;
  int *piVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  iVar1 = PlantNameMapperServerID::GetIdForType(pPVar3,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 == (PlayerInfo *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = (undefined8 *)PlayerInfo::GetPlantAccessoryInfos(this_00);
    piVar5 = (int *)FUN_03fe1f5c(*puVar4,(long)param_1);
    uVar2 = 3;
    if ((0 < *piVar5) && (uVar2 = 2, iVar1 != *piVar5)) {
      uVar2 = 1;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetBindedPlantTypeForTargetAccessory(int) */

void PlantAccessoryMgr::GetBindedPlantTypeForTargetAccessory(int param_1)

{
  int iVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  undefined8 *puVar2;
  int *piVar3;
  PlantNameMapperServerID *this_01;
  int in_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    puVar2 = (undefined8 *)PlayerInfo::GetPlantAccessoryInfos(this_00);
    piVar3 = (int *)FUN_03fe1f5c(*puVar2,(long)in_w1);
    iVar1 = *piVar3;
    if (iVar1 != -1) {
      this_01 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
      PlantNameMapperServerID::GetTypeForID(this_01,iVar1);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_03fe2630;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
LAB_03fe2630:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAccessoryMgr::GetNumOwnedAccessories() */

void PlantAccessoryMgr::GetNumOwnedAccessories(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::GetAccessoryInfosSize(this_00);
    return;
  }
  return;
}


/* PlantAccessoryMgr::GetOwnedPieces(std::string const&) */

void __thiscall PlantAccessoryMgr::GetOwnedPieces(PlantAccessoryMgr *this,string *param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    PlayerInfo::GetAccessoryPieceCount(this_01,param_1,false);
    return;
  }
  return;
}


/* PlantAccessoryMgr::SoldTargetAccessory(std::string const&, int) */

void __thiscall
PlantAccessoryMgr::SoldTargetAccessory(PlantAccessoryMgr *this,string *param_1,int param_2)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NetworkMgr *this_02;
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    this_02 = (NetworkMgr *)NetworkMgr::Instance();
    plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_02);
    pcVar3 = *(code **)(*plVar1 + 0x478);
    uVar2 = PlayerInfo::GetPlantAccessoryUIdById(this_01,param_2);
    (*pcVar3)(plVar1,1,uVar2);
  }
  return;
}


/* PlantAccessoryMgr::SortOwnedAccessories() */

void PlantAccessoryMgr::SortOwnedAccessories(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::SortPlantAccessoryInfos(this_00);
    return;
  }
  return;
}


/* PlantAccessoryMgr::ResetTargetAccessory(std::string const&, int) */

void __thiscall
PlantAccessoryMgr::ResetTargetAccessory(PlantAccessoryMgr *this,string *param_1,int param_2)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NetworkMgr *this_02;
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_02);
  pcVar3 = *(code **)(*plVar1 + 0x4a8);
  uVar2 = PlayerInfo::GetPlantAccessoryUIdById(this_01,param_2);
  (*pcVar3)(plVar1,uVar2);
  return;
}


/* PlantAccessoryMgr::SteadyTargetAccessory(std::string const&, int) */

void __thiscall
PlantAccessoryMgr::SteadyTargetAccessory(PlantAccessoryMgr *this,string *param_1,int param_2)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NetworkMgr *this_02;
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_02);
  pcVar3 = *(code **)(*plVar1 + 0x498);
  uVar2 = PlayerInfo::GetPlantAccessoryUIdById(this_01,param_2);
  (*pcVar3)(plVar1,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetTargetAccessoryPlantName(int) */

void PlantAccessoryMgr::GetTargetAccessoryPlantName(int param_1)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  undefined8 *puVar1;
  int in_w1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    puVar1 = (undefined8 *)PlayerInfo::GetPlantAccessoryInfos(this_00);
    FUN_03fe1f5c(*puVar1,(long)in_w1);
    GetPlantDisplayName(param_1);
    thunk_FUN_05477b9c();
    FUN_05476c50(auStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAccessoryMgr::GetTargetAccessoryTypeById(int) */

void PlantAccessoryMgr::GetTargetAccessoryTypeById(int param_1)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  undefined8 *puVar1;
  int in_w1;
  
  Set8BytesTo0();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    puVar1 = (undefined8 *)PlayerInfo::GetPlantAccessoryInfos(this_00);
    FUN_03fe1f5c(*puVar1,(long)in_w1);
    thunk_FUN_05475e00();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetAccessoryByType(std::string const&) */

void PlantAccessoryMgr::GetAccessoryByType(string *param_1)

{
  undefined8 uVar1;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtId aRStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(in_x1);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::GetIdByAlias(aRStack_28,uVar1,5,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_28);
  Sexy::RtId::~RtId(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::CanAccessoryBindTargetPlants(int, Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
PlantAccessoryMgr::CanAccessoryBindTargetPlants
          (PlantAccessoryMgr *this,int param_1,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>> *this_02;
  long lVar6;
  string *psVar7;
  ulong uVar8;
  ulong uVar9;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
    uVar1 = 1;
  }
  else {
    this_02 = (vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>> *)
              PlayerInfo::GetPlantAccessoryInfos(this_01);
    cVar2 = std::vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>>::empty(this_02);
    if (cVar2 == '\0') {
      uVar1 = 1;
      lVar6 = FUN_03fe1f5c(*(undefined8 *)this_02,(long)param_1);
      FUN_05475d88(asStack_20,lVar6 + 8);
      GetAccessoryByType((string *)this);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
      if (bVar3) {
        uVar9 = 0;
        while( true ) {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          uVar8 = FUN_03fe1fa0(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x48));
          if (uVar8 <= uVar9) break;
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          psVar7 = (string *)FUN_03fe1fac(*(undefined8 *)(lVar6 + 0x40),uVar9);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
          cVar2 = std::operator==(psVar7,(string *)(lVar6 + 8));
          if (cVar2 != '\0') {
            uVar1 = 5;
            goto LAB_03fe2d1c;
          }
          uVar9 = uVar9 + 1;
        }
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        iVar5 = *(int *)(lVar6 + 0x58);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
        iVar4 = PlayerInfo::GetPlantStarLevel(this_01,(string *)(lVar6 + 8),false);
        if (iVar4 < iVar5) {
          uVar1 = 3;
        }
        else {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_3);
          iVar5 = IsTargetAccessoryUsed(this,param_1,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          if (iVar5 == 1) {
            uVar1 = 2;
          }
          else if (iVar5 == 2) {
            uVar1 = 4;
          }
          else {
            uVar1 = iVar5 != 3;
          }
        }
      }
LAB_03fe2d1c:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      std::string::~string(asStack_20);
    }
    else {
      uVar1 = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::IsTargetPlantDisabled(Sexy::RtWeakPtr<PlantType const>, std::string const&) */

void PlantAccessoryMgr::IsTargetPlantDisabled
               (string *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  GetAccessoryByType(param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    while( true ) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      uVar5 = FUN_03fe1fa0(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x48));
      if (uVar5 <= uVar6) break;
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      psVar3 = (string *)FUN_03fe1fac(*(undefined8 *)(lVar4 + 0x40),uVar6);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar2 = std::operator==(psVar3,(string *)(lVar4 + 8));
      if (cVar2 != '\0') goto LAB_03fe2e4c;
      uVar6 = uVar6 + 1;
    }
  }
  cVar2 = '\0';
LAB_03fe2e4c:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetAccessoryDisplayName(std::string const&) */

void __thiscall PlantAccessoryMgr::GetAccessoryDisplayName(PlantAccessoryMgr *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr aRStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574();
  GetAccessoryByType((string *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    Sexy::ToWString((string *)(lVar2 + 0x10));
    TodStringTranslate(awStack_18);
    FUN_054766c8();
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetAccessoryDescription(std::string const&) */

void __thiscall PlantAccessoryMgr::GetAccessoryDescription(PlantAccessoryMgr *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr aRStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574();
  GetAccessoryByType((string *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    Sexy::ToWString((string *)(lVar2 + 0x18));
    TodStringTranslate(awStack_18);
    FUN_054766c8();
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetAccessoryBoostDescription(std::string const&) */

void __thiscall
PlantAccessoryMgr::GetAccessoryBoostDescription(PlantAccessoryMgr *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr aRStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574();
  GetAccessoryByType((string *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    Sexy::ToWString((string *)(lVar2 + 0x20));
    TodStringTranslate(awStack_18);
    FUN_054766c8();
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetAccessoryDisplayImage(std::string const&) */

void PlantAccessoryMgr::GetAccessoryDisplayImage(string *param_1)

{
  string *psVar1;
  bool bVar2;
  ResourceInfo *pRVar3;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetAccessoryByType(param_1);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  psVar1 = gLawnApp;
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    LawnApp::GetUIImageFromStringId(psVar1);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    pRVar3 = (ResourceInfo *)0x0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetAccessoryUIInfo(std::string const&) */

void __thiscall PlantAccessoryMgr::GetAccessoryUIInfo(PlantAccessoryMgr *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  AccessoryUIInfo *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AccessoryUIInfo::AccessoryUIInfo(in_x8);
  GetAccessoryByType((string *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    thunk_FUN_05475e00();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    thunk_FUN_05475e00(in_x8 + 8,lVar2 + 0x18);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    thunk_FUN_05475e00(in_x8 + 0x10,lVar2 + 0x20);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    thunk_FUN_05475e00(in_x8 + 0x18,lVar2 + 0x28);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined4 *)(in_x8 + 0x20) = *(undefined4 *)(lVar2 + 0x80);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined4 *)(in_x8 + 0x24) = *(undefined4 *)(lVar2 + 0x58);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined4 *)(in_x8 + 0x28) = *(undefined4 *)(lVar2 + 0x78);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined4 *)(in_x8 + 0x2c) = *(undefined4 *)(lVar2 + 0x7c);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined4 *)(in_x8 + 0x30) = *(undefined4 *)(lVar2 + 0x84);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetAccessoryInfoForPlantType(Sexy::RtWeakPtr<PlantType const>) */

void PlantAccessoryMgr::GetAccessoryInfoForPlantType
               (AccessoryUIInfo *param_1,PlantAccessoryMgr *param_2,RtWeakPtrBase *param_3)

{
  long lVar1;
  string asStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AccessoryUIInfo::AccessoryUIInfo(param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,param_3);
  lVar1 = GetAccessoryForPlant(param_2,aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  if (lVar1 != 0) {
    FUN_05475d88(asStack_48,lVar1 + 8);
    GetAccessoryUIInfo(param_2,asStack_48);
    AccessoryUIInfo::operator=(param_1,(AccessoryUIInfo *)aRStack_40);
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aRStack_40);
    std::string::~string(asStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetAccessoryAvatarInfo(std::string const&) */

void __thiscall PlantAccessoryMgr::GetAccessoryAvatarInfo(PlantAccessoryMgr *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  RedeemInfo *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RedeemInfo::RedeemInfo(in_x8);
  GetAccessoryByType((string *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    PlantFamilyOptionalDisplayValue::operator=
              ((PlantFamilyOptionalDisplayValue *)in_x8,
               (PlantFamilyOptionalDisplayValue *)(lVar2 + 0x30));
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetAccessoryRequiredLevel(std::string const&) */

void PlantAccessoryMgr::GetAccessoryRequiredLevel(string *param_1)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  GetAccessoryByType(param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar3 = *(undefined4 *)(lVar2 + 0x58);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::IsAccessoryPiecesFull(std::string const&) */

void __thiscall PlantAccessoryMgr::IsAccessoryPiecesFull(PlantAccessoryMgr *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar3;
  bool bVar4;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  bVar4 = false;
  if (this_01 != (PlayerInfo *)0x0) {
    iVar2 = PlayerInfo::GetAccessoryPieceCount(this_01,param_1,false);
    GetAccessoryByType((string *)this);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
    bVar4 = false;
    if (bVar1) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      bVar4 = *(int *)(lVar3 + 0x78) <= iVar2 && *(int *)(lVar3 + 0x78) != 0;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetAccessoryPurchasePrice(std::string const&) */

void PlantAccessoryMgr::GetAccessoryPurchasePrice(string *param_1)

{
  bool bVar1;
  ProfileMgr *this;
  long lVar2;
  undefined4 uVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    GetAccessoryByType(param_1);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
    if (bVar1) {
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      uVar3 = *(undefined4 *)(lVar2 + 0x7c);
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
/* PlantAccessoryMgr::ExchangeTargetAccessory(std::string const&) */

void __thiscall PlantAccessoryMgr::ExchangeTargetAccessory(PlantAccessoryMgr *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar5;
  NetworkMgr *this_02;
  long *plVar6;
  NameMapperBase *this_03;
  code *pcVar7;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    GetAccessoryByType((string *)this);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      iVar3 = *(int *)(lVar5 + 0x7c);
      iVar2 = PlayerInfo::GetNumCoins(this_01,true);
      if ((iVar2 < iVar3) || (iVar3 = PlayerInfo::SubtractCoins(this_01,iVar3), iVar3 < 0)) {
        LawnApp::ShowGemStoreConfirm(gLawnApp,0,0);
      }
      else {
        this_02 = (NetworkMgr *)NetworkMgr::Instance();
        plVar6 = (long *)NetworkMgr::GetNewNetWorkProcess(this_02);
        pcVar7 = *(code **)(*plVar6 + 0x488);
        this_03 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
        uVar4 = NameMapperBase::GetIdForName(this_03,param_1);
        (*pcVar7)(plVar6,uVar4);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::FindBoostsForAccessoryType(std::string const&, int) */

void __thiscall
PlantAccessoryMgr::FindBoostsForAccessoryType(PlantAccessoryMgr *this,string *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  PlantNameMapperServerID *this_00;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  RtMixedPtr<Sexy::Image> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06ae6ed8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ae6ed8), iVar2 != 0)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&DAT_06ae6f28);
    __cxa_guard_release(&DAT_06ae6ed8);
    __cxa_atexit(std::vector<PlantBoost,std::allocator<PlantBoost>>::~vector,&DAT_06ae6f28,
                 &DAT_06a88000);
  }
  GetAccessoryByType((string *)this);
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_20);
  if (cVar1 == '\0') {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    if (*(int *)(lVar3 + 0x80) == 5) {
      this_00 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
      PlantNameMapperServerID::GetTypeForID(this_00,param_2);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      lVar3 = GetAccessoryForPlant(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (((lVar3 != 0) && (iVar2 = *(int *)(lVar3 + 0x18), -1 < iVar2)) &&
         (lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20),
         iVar2 <= *(int *)(lVar4 + 0x8c))) {
        iVar2 = *(int *)(lVar3 + 0x18);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        uVar5 = FUN_03fe1f80(*(undefined8 *)(lVar4 + 0xa8),*(undefined8 *)(lVar4 + 0xb0));
        if ((ulong)(long)iVar2 < uVar5) {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          puVar6 = (undefined *)
                   FUN_03fe1f94(*(undefined8 *)(lVar4 + 0xa8),(long)*(int *)(lVar3 + 0x18));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          goto LAB_03fe37d0;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    puVar6 = (undefined *)(lVar3 + 0x60);
  }
  else {
    puVar6 = &DAT_06ae6f28;
  }
LAB_03fe37d0:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetAccessoryGeneralPropertySheet() */

void __thiscall PlantAccessoryMgr::GetAccessoryGeneralPropertySheet(PlantAccessoryMgr *this)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"DefaultAccessoryGeneralProps");
  PVZDB::GetIdByAlias(aRStack_20,uVar1,5,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtId::~RtId(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::CanExchangeAccessory() */

void PlantAccessoryMgr::CanExchangeAccessory(void)

{
  int iVar1;
  ResourceInfo *pRVar2;
  RtWeakPtr aRStack_10 [8];
  PlantAccessoryMgr *local_8;
  
  local_8 = ___stack_chk_guard;
  GetAccessoryGeneralPropertySheet(___stack_chk_guard);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  iVar1 = GetNumOwnedAccessories();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 < *(int *)(pRVar2 + 0x10));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetMaxOwnedAccessories() */

void PlantAccessoryMgr::GetMaxOwnedAccessories(void)

{
  ResourceInfo *pRVar1;
  RtWeakPtr aRStack_10 [8];
  PlantAccessoryMgr *local_8;
  
  local_8 = ___stack_chk_guard;
  GetAccessoryGeneralPropertySheet(___stack_chk_guard);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined4 *)(pRVar1 + 0x10));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::UnbindTargetAccessory(int) */

void __thiscall PlantAccessoryMgr::UnbindTargetAccessory(PlantAccessoryMgr *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 *puVar2;
  int *piVar3;
  PlantNameMapperServerID *this_02;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    puVar2 = (undefined8 *)PlayerInfo::GetPlantAccessoryInfos(this_01);
    piVar3 = (int *)FUN_03fe1f5c(*puVar2,(long)param_1);
    iVar1 = *piVar3;
    this_02 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
    PlantNameMapperServerID::GetTypeForID(this_02,iVar1);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    std::vector<PlantBoost,std::allocator<PlantBoost>>::clear
              ((vector<PlantBoost,std::allocator<PlantBoost>> *)(lVar4 + 0xa0));
    PlayerInfo::ClearPlantAccessoryInfos(this_01,param_1);
    MessageRouter::Post((_func_void *)gMessageRouter);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::OnSoldTargetAccessory(std::string const&, int) */

void __thiscall
PlantAccessoryMgr::OnSoldTargetAccessory(PlantAccessoryMgr *this,string *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  PlantNameMapperServerID *this_02;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    GetAccessoryByType((string *)this);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar2) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      PlayerInfo::AddCoins(this_01,*(int *)(lVar3 + 0x84));
      puVar4 = (undefined8 *)PlayerInfo::GetPlantAccessoryInfos(this_01);
      piVar5 = (int *)FUN_03fe1f5c(*puVar4,(long)param_2);
      iVar1 = *piVar5;
      if (0 < iVar1) {
        this_02 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
        PlantNameMapperServerID::GetTypeForID(this_02,iVar1);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        std::vector<PlantBoost,std::allocator<PlantBoost>>::clear
                  ((vector<PlantBoost,std::allocator<PlantBoost>> *)(lVar3 + 0xa0));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
      PlayerInfo::RemovePlantAccessoryInfos(this_01,param_2);
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::OnSteadyTargetAccessory(std::string const&, int) */

void __thiscall
PlantAccessoryMgr::OnSteadyTargetAccessory(PlantAccessoryMgr *this,string *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 *puVar3;
  int *piVar4;
  PlantNameMapperServerID *this_02;
  long lVar5;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    GetAccessoryByType((string *)this);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar2) {
      puVar3 = (undefined8 *)PlayerInfo::GetPlantAccessoryInfos(this_01);
      piVar4 = (int *)FUN_03fe1f5c(*puVar3,(long)param_2);
      iVar1 = *piVar4;
      if (0 < iVar1) {
        this_02 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
        PlantNameMapperServerID::GetTypeForID(this_02,iVar1);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        std::vector<PlantBoost,std::allocator<PlantBoost>>::clear
                  ((vector<PlantBoost,std::allocator<PlantBoost>> *)(lVar5 + 0xa0));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetAccessoryDisabledPlants(std::string const&) */

void __thiscall
PlantAccessoryMgr::GetAccessoryDisabledPlants(PlantAccessoryMgr *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  GetAccessoryByType((string *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::vector<std::string,std::allocator<std::string>>::operator=
              ((vector<std::string,std::allocator<std::string>> *)in_x8,(vector *)(lVar2 + 0x40));
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetAccessoryPieceDisplayImage(std::string const&) */

void PlantAccessoryMgr::GetAccessoryPieceDisplayImage(string *param_1)

{
  string *psVar1;
  string *in_x1;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::operator+(in_x1,"_piece");
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
  ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_05475d88();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::BindTargetAccessory(int, Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
PlantAccessoryMgr::BindTargetAccessory
          (PlantAccessoryMgr *this,int param_1,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>> *this_02;
  long lVar3;
  PlantNameMapperServerID *pPVar4;
  vector *pvVar5;
  RtMixedPtrBase aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    GetBindedPlantTypeForTargetAccessory((int)this);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
    if (cVar1 != '\0') {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      std::vector<PlantBoost,std::allocator<PlantBoost>>::clear
                ((vector<PlantBoost,std::allocator<PlantBoost>> *)(lVar3 + 0xa0));
    }
    this_02 = (vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>> *)
              PlayerInfo::GetPlantAccessoryInfos(this_01);
    cVar1 = std::vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>>::empty(this_02);
    if (cVar1 == '\0') {
      lVar3 = FUN_03fe1f5c(*(undefined8 *)this_02,(long)param_1);
      FUN_05475d88(asStack_18,lVar3 + 8);
      pPVar4 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_3);
      iVar2 = PlantNameMapperServerID::GetIdForType(pPVar4,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      PlayerInfo::SetPlantAccessoryInfos(this_01,param_1,iVar2);
      pvVar5 = (vector *)FindBoostsForAccessoryType(this,asStack_18,iVar2);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
      std::vector<PlantBoost,std::allocator<PlantBoost>>::clear
                ((vector<PlantBoost,std::allocator<PlantBoost>> *)(lVar3 + 0xa0));
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
      std::vector<PlantBoost,std::allocator<PlantBoost>>::operator=
                ((vector<PlantBoost,std::allocator<PlantBoost>> *)(lVar3 + 0xa0),pvVar5);
      MessageRouter::Post((_func_void *)gMessageRouter);
      std::string::~string(asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryMgr::GetAccessoryBoostForPlant(std::vector<PlantBoost const*,
   std::allocator<PlantBoost const*> >&, int, PlantBoostType) */

void __thiscall
PlantAccessoryMgr::GetAccessoryBoostForPlant
          (PlantAccessoryMgr *this,
          vector<PlantBoost_const*,std::allocator<PlantBoost_const*>> *param_1,int param_2,
          int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  PVPManager *pPVar4;
  PlantNameMapperServerID *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar5;
  long lVar6;
  vector<PlantBoost,std::allocator<PlantBoost>> *pvVar7;
  undefined8 uVar8;
  RtWeakPtr aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CustomLevelUtils::IsCustomLevel();
  if ((cVar1 != '\0') || (cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 != '\0')) goto LAB_03fe46d0;
  pPVar4 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar3 = PVPManager::IsLoadServerPlantData(pPVar4);
  if (iVar3 != 1) {
    pPVar4 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar3 = PVPManager::IsLoadServerPlantData(pPVar4);
    if (iVar3 != 3) {
      this_00 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
      PlantNameMapperServerID::GetTypeForID(this_00,param_2);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
      lVar6 = 0;
      if (bVar2) {
        do {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          iVar3 = FUN_03fe1f64(*(undefined8 *)(lVar5 + 0xa0),*(undefined8 *)(lVar5 + 0xa8));
          if (iVar3 <= (int)lVar6) {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_20);
            lVar6 = GetAccessoryForPlant(this,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
            if (lVar6 == 0) goto LAB_03fe4918;
            lVar5 = 0;
            FUN_05475d88(asStack_18,lVar6 + 8);
            pvVar7 = (vector<PlantBoost,std::allocator<PlantBoost>> *)
                     FindBoostsForAccessoryType(this,asStack_18,param_2);
            cVar1 = std::vector<PlantBoost,std::allocator<PlantBoost>>::empty(pvVar7);
            if (cVar1 != '\0') goto LAB_03fe4910;
            goto LAB_03fe4804;
          }
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    FUN_03fe1f78(*(undefined8 *)(lVar5 + 0xa0),lVar6);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          lVar6 = lVar6 + 1;
        } while (param_4 != *(int *)(lVar5 + 0x10));
        local_10 = this_01;
        std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>::push_back
                  (param_1,(PlantBoost **)&local_10);
      }
      goto LAB_03fe4918;
    }
  }
  iVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::GetTargetPlantAccessory(iVar3);
  bVar2 = std::operator!=(asStack_18,"");
  if (bVar2) {
    pvVar7 = (vector<PlantBoost,std::allocator<PlantBoost>> *)
             FindBoostsForAccessoryType(this,asStack_18,param_2);
    cVar1 = std::vector<PlantBoost,std::allocator<PlantBoost>>::empty(pvVar7);
    lVar6 = 0;
    if (cVar1 == '\0') {
      do {
        uVar8 = *(undefined8 *)pvVar7;
        iVar3 = FUN_03fe1f64(uVar8,*(undefined8 *)(pvVar7 + 8));
        if (iVar3 <= (int)lVar6) goto LAB_03fe4890;
        local_10 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03fe1f70(uVar8,lVar6);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(local_10);
        lVar6 = lVar6 + 1;
      } while (*(int *)(lVar5 + 0x10) != param_4);
      std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>::push_back
                (param_1,(PlantBoost **)&local_10);
    }
  }
LAB_03fe4890:
  std::string::~string(asStack_18);
LAB_03fe46d0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_03fe4804:
  uVar8 = *(undefined8 *)pvVar7;
  iVar3 = FUN_03fe1f64(uVar8,*(undefined8 *)(pvVar7 + 8));
  if (iVar3 <= (int)lVar5) goto LAB_03fe4910;
  local_10 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03fe1f70(uVar8,lVar5);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_10);
  if ((cVar1 != '\0') &&
     (lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(local_10), *(int *)(lVar6 + 0x10) == param_4)
     ) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    std::vector<PlantBoost,std::allocator<PlantBoost>>::push_back
              ((vector<PlantBoost,std::allocator<PlantBoost>> *)(lVar6 + 0xa0),
               (PlantBoost *)local_10);
    std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>::push_back
              (param_1,(PlantBoost **)&local_10);
    goto LAB_03fe4910;
  }
  lVar5 = lVar5 + 1;
  goto LAB_03fe4804;
LAB_03fe4910:
  std::string::~string(asStack_18);
LAB_03fe4918:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  goto LAB_03fe46d0;
}

