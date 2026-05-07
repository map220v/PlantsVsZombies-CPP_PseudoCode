// Class: NewAvatar


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetAvatarName(int) */

void __thiscall NewAvatar::GetAvatarName(NewAvatar *this,int param_1)

{
  char cVar1;
  NameMapperBase *pNVar2;
  int iVar3;
  GAME_ITEM_INFO aGStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar2 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
  iVar3 = (int)this;
  cVar1 = NameMapperBase::ContainsId(pNVar2,iVar3);
  if (cVar1 == '\0') {
    pNVar2 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar2,iVar3);
    if (cVar1 == '\0') {
      FUN_05476574();
      goto LAB_043ac058;
    }
  }
  GetGameItemInfo(iVar3,0x7fffffff,0);
  FUN_05476584();
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
LAB_043ac058:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetNewAvatarPieceImage(int) */

void NewAvatar::GetNewAvatarPieceImage(int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  string *extraout_x1;
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"IMAGE_UI_NEWAVATAR_AVATARS_DEFAULT");
  lVar2 = StringHelper::ToImage(asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  iVar1 = PlantNewAvatarPieceMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  Sexy::StringToUpper(aSStack_20,extraout_x1);
  std::operator+("IMAGE_UI_NEWAVATAR_AVATARPIECES_",asStack_18);
  lVar3 = StringHelper::ToImage(asStack_10,false);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (lVar3 == 0) {
    lVar3 = lVar2;
  }
  std::string::~string((string *)aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::IsPlantAvatarExistence(std::string const&) */

void NewAvatar::IsPlantAvatarExistence(string *param_1)

{
  undefined4 uVar1;
  string *psVar2;
  RtMixedPtrBase aRStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = ___stack_chk_guard;
  std::string::string(asStack_20,"iOS PvZ2 Avatar Store");
  std::string::string(asStack_18,"Avatars");
  std::string::string(asStack_10,"avatar");
  Magento::FindStoreProduct((Magento *)asStack_20,asStack_18,asStack_10,param_1,psVar2);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  uVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::IsAvatarUnlocked(int) */

void NewAvatar::IsAvatarUnlocked(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  NameMapperBase *pNVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  pNVar4 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
  if (cVar1 == '\0') {
    pNVar4 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
    uVar2 = 0;
    if (cVar1 != '\0') {
      uVar2 = PlayerInfo::IsPlantNewAvatarUnLocked(this_00,param_1);
    }
  }
  else {
    iVar3 = AvatarNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    uVar2 = PlayerInfo::IsPlantAvatarUnLocked(this_00,asStack_10,0,0);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::Common_GetAvatarPieceNum(int) */

void NewAvatar::Common_GetAvatarPieceNum(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  NameMapperBase *pNVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
  if (cVar1 == '\0') {
    pNVar4 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
    if (cVar1 == '\0') {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = PlayerInfo::GetNewAvatarPiecesCount(this_00,param_1);
    }
  }
  else {
    iVar3 = AvatarChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    uVar2 = PlayerInfo::GetAvatarPiecesCount(this_00,asStack_10,0,0);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetAvatarPieceNum(int) */

void NewAvatar::GetAvatarPieceNum(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  NameMapperBase *pNVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar4 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
  if (cVar1 == '\0') {
    pNVar4 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
    uVar3 = 0;
    if (cVar1 == '\0') goto LAB_043ac53c;
    pNVar4 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
    iVar2 = PlantNewAvatarMapper::GetInstance();
  }
  else {
    pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    iVar2 = AvatarNameMapperServerID::GetInstance();
  }
  NameMapperBase::GetNameForId(iVar2);
  iVar2 = NameMapperBase::GetIdForName(pNVar4,asStack_10);
  uVar3 = Common_GetAvatarPieceNum(iVar2);
  std::string::~string(asStack_10);
LAB_043ac53c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::Common_GetAvatarIDbyAvatarPieceID(int) */

void NewAvatar::Common_GetAvatarIDbyAvatarPieceID(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ProfileMgr *this;
  NameMapperBase *pNVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this);
  pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
  if (cVar1 == '\0') {
    pNVar4 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
    uVar2 = 0xffffffff;
    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
    if (cVar1 != '\0') {
      pNVar4 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
      iVar3 = PlantNewAvatarPieceMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar3);
      NameMapperBase::GetIdForName(pNVar4,asStack_10);
      std::string::~string(asStack_10);
    }
  }
  else {
    pNVar4 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
    iVar3 = AvatarChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    uVar2 = NameMapperBase::GetIdForName(pNVar4,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetAvatarTinyImage(int) */

void NewAvatar::GetAvatarTinyImage(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ProfileMgr *this;
  long lVar4;
  string *extraout_x1;
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"IMAGE_UI_NEWAVATAR_AVATARS_DEFAULT");
  lVar3 = StringHelper::ToImage(asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar1 = ProfileMgr::GetCurrentProfile(this);
  iVar2 = PlayerInfo::GetWhichAvatarType(iVar1);
  if (iVar2 == 1) {
    iVar1 = AvatarNameMapperServerID::GetInstance();
  }
  else {
    iVar1 = PlayerInfo::GetWhichAvatarType(iVar1);
    if (iVar1 != 2) goto LAB_043ac744;
    iVar1 = PlantNewAvatarMapper::GetInstance();
  }
  NameMapperBase::GetNameForId(iVar1);
  Sexy::StringToUpper(aSStack_20,extraout_x1);
  std::operator+("IMAGE_UI_NEWAVATAR_AVATARS_",asStack_18);
  lVar4 = StringHelper::ToImage(asStack_10,false);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (lVar4 != 0) {
    lVar3 = lVar4;
  }
  std::string::~string((string *)aSStack_20);
LAB_043ac744:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::HasAnyUnlockedAvatar(std::string const&) */

void NewAvatar::HasAnyUnlockedAvatar(string *param_1)

{
  byte bVar1;
  NameMapperBase *this;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  long lVar3;
  pair<void*const,std::vector<int,std::allocator<int>>> apStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetIdForName(this,param_1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  bVar1 = PlayerInfo::IsPlantAvatarUnLocked(pPVar2,param_1,0,0);
  PlayerInfo::GetUnlockedPlantNewAvatar((int)pPVar2);
  lVar3 = FUN_043abbf0(local_20,local_18);
  std::pair<void*const,std::vector<int,std::allocator<int>>>::~pair(apStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1 | lVar3 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetPlantNameByAvatarID(int) */

void NewAvatar::GetPlantNameByAvatarID(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  int extraout_w1;
  string *in_x8;
  code *pcVar7;
  string asStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = PlantNewAvatarMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar3);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x9c);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::string::string(in_x8,"");
      nop();
LAB_043acb90:
      std::string::~string(asStack_40);
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
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar7 = *(code **)(*plVar5 + 0x20);
      uVar4 = PlantNewAvatar::StaticGetClass();
      cVar2 = (*pcVar7)(plVar5,uVar4);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        cVar2 = std::operator==((string *)(lVar6 + 0x20),asStack_40);
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          FUN_05475d88();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
          goto LAB_043acb90;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetPlantIDByAvatarID(int) */

void NewAvatar::GetPlantIDByAvatarID(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  NameMapperBase *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetPlantNameByAvatarID(param_1);
  bVar1 = std::operator!=(asStack_10,"");
  if (bVar1) {
    this = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    uVar2 = NameMapperBase::GetIdForName(this,asStack_10);
  }
  else {
    uVar2 = 0xffffffff;
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetPlantNameByAvatarPieceID(int) */

void NewAvatar::GetPlantNameByAvatarPieceID(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  int extraout_w1;
  string *in_x8;
  code *pcVar7;
  string asStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = PlantNewAvatarPieceMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar3);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x9c);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::string::string(in_x8,"");
      nop();
LAB_043acdc8:
      std::string::~string(asStack_40);
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
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar7 = *(code **)(*plVar5 + 0x20);
      uVar4 = PlantNewAvatar::StaticGetClass();
      cVar2 = (*pcVar7)(plVar5,uVar4);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        cVar2 = std::operator==((string *)(lVar6 + 0x20),asStack_40);
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          FUN_05475d88();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
          goto LAB_043acdc8;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetPlantIDByAvatarPieceID(int) */

void NewAvatar::GetPlantIDByAvatarPieceID(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  NameMapperBase *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetPlantNameByAvatarPieceID(param_1);
  bVar1 = std::operator!=(asStack_10,"");
  if (bVar1) {
    this = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    uVar2 = NameMapperBase::GetIdForName(this,asStack_10);
  }
  else {
    uVar2 = 0xffffffff;
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::Common_GetAvatarUnlocked(int) */

void NewAvatar::Common_GetAvatarUnlocked(int param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  NameMapperBase *pNVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
  if (cVar1 == '\0') {
    pNVar4 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
    if (cVar1 != '\0') {
      pNVar4 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
      iVar2 = PlantNewAvatarPieceMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
      iVar2 = NameMapperBase::GetIdForName(pNVar4,asStack_28);
      std::string::~string(asStack_28);
      GetPlantIDByAvatarPieceID(param_1);
      PlayerInfo::GetUnlockedPlantNewAvatar((int)pPVar3);
      lVar5 = FUN_043abbf0(local_20,local_18);
      lVar7 = 0;
      do {
        if (lVar7 == lVar5) {
          cVar1 = '\0';
          std::pair<void*const,std::vector<int,std::allocator<int>>>::~pair
                    ((pair<void*const,std::vector<int,std::allocator<int>>> *)asStack_28);
          goto LAB_043acf24;
        }
        piVar6 = (int *)FUN_043abc14(local_20,lVar7);
        lVar7 = lVar7 + 1;
      } while (iVar2 != *piVar6);
      std::pair<void*const,std::vector<int,std::allocator<int>>>::~pair
                ((pair<void*const,std::vector<int,std::allocator<int>>> *)asStack_28);
    }
  }
  else {
    iVar2 = AvatarChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    cVar1 = PlayerInfo::IsPlantAvatarUnLocked(pPVar3,asStack_28,0,0);
    std::string::~string(asStack_28);
  }
LAB_043acf24:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::Common_GetPlantNameByAvatarPieceID(int) */

void __thiscall NewAvatar::Common_GetPlantNameByAvatarPieceID(NewAvatar *this,int param_1)

{
  char cVar1;
  int iVar2;
  NameMapperBase *pNVar3;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar3 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
  iVar2 = (int)this;
  cVar1 = NameMapperBase::ContainsId(pNVar3,iVar2);
  if (cVar1 == '\0') {
    pNVar3 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar3,iVar2);
    if (cVar1 == '\0') {
      std::string::string(in_x8,"");
      nop();
    }
    else {
      GetPlantNameByAvatarPieceID(iVar2);
    }
  }
  else {
    iVar2 = AvatarChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    FUN_05474148();
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetAvatarInfoByAvatarId(int) */

void NewAvatar::GetAvatarInfoByAvatarId(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  int extraout_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  code *pcVar7;
  string asStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = PlantNewAvatarMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar3);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x9c);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
LAB_043ad23c:
      std::string::~string(asStack_40);
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
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar7 = *(code **)(*plVar5 + 0x20);
      uVar4 = PlantNewAvatar::StaticGetClass();
      cVar2 = (*pcVar7)(plVar5,uVar4);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        cVar2 = std::operator==((string *)(lVar6 + 0x20),asStack_40);
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
          goto LAB_043ad23c;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetAvatarIndexForPlant(std::string const&) */

void NewAvatar::GetAvatarIndexForPlant(string *param_1)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  iVar1 = PlayerInfo::GetEquipAvatarID(this_00,param_1);
  iVar2 = PlayerInfo::GetWhichAvatarType((int)this_00);
  if (iVar2 == 2) {
    GetAvatarInfoByAvatarId(iVar1);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    iVar1 = *(int *)(lVar3 + 0x10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    iVar1 = PlayerInfo::GetWhichAvatarType((int)this_00);
    iVar1 = -(uint)(iVar1 != 1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetAvatarIndexForAvatarID(int) */

void NewAvatar::GetAvatarIndexForAvatarID(int param_1)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar1 = ProfileMgr::GetCurrentProfile(this);
  iVar2 = PlayerInfo::GetWhichAvatarType(iVar1);
  if (iVar2 == 2) {
    GetAvatarInfoByAvatarId(param_1);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    iVar1 = *(int *)(lVar3 + 0x10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    iVar1 = PlayerInfo::GetWhichAvatarType(iVar1);
    iVar1 = -(uint)(iVar1 != 1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetAvatarDescription(int) */

void __thiscall NewAvatar::GetAvatarDescription(NewAvatar *this,int param_1)

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
      GetAvatarInfoByAvatarId(iVar3);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Sexy::ToWString((string *)(lVar6 + 0x50));
      TodStringTranslate(awStack_10);
      FUN_05476c50(awStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      goto LAB_043ad490;
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
        uVar7 = FUN_043abc00(*(undefined8 *)(lVar6 + 0x60),*(undefined8 *)(lVar6 + 0x68));
        if (uVar7 <= uVar9) break;
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043abc0c(*(undefined8 *)(lVar6 + 0x60),uVar9);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
        cVar1 = std::operator==((string *)(lVar6 + 0x80),asStack_20);
        if (cVar1 != '\0') {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_043abc0c(*(undefined8 *)(lVar6 + 0x60),uVar9);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
          psVar8 = (string *)FUN_043abd3c(*(undefined8 *)(lVar6 + 0x38));
          Sexy::ToWString(psVar8);
          TodStringTranslate(awStack_10);
          FUN_05476c50(awStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          std::string::~string(asStack_20);
          goto LAB_043ad490;
        }
        uVar9 = uVar9 + 1;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_20);
  }
  FUN_05476574();
LAB_043ad490:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetAvatarGetWay(int) */

void __thiscall NewAvatar::GetAvatarGetWay(NewAvatar *this,int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  NameMapperBase *pNVar4;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  long lVar6;
  ulong uVar7;
  bool extraout_w1;
  ulong uVar8;
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
      GetAvatarInfoByAvatarId(iVar3);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Sexy::ToWString((string *)(lVar6 + 0x58));
      TodStringTranslate(awStack_10);
      FUN_05476c50(awStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      goto LAB_043ad658;
    }
  }
  else {
    iVar3 = AvatarNameMapperServerID::GetInstance();
    uVar8 = 0;
    NameMapperBase::GetNameForId(iVar3);
    Magento::GetPlantPieceProductsData((Magento *)0x1,extraout_w1);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar2) {
      while( true ) {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        uVar7 = FUN_043abc00(*(undefined8 *)(lVar6 + 0x60),*(undefined8 *)(lVar6 + 0x68));
        if (uVar7 <= uVar8) break;
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043abc0c(*(undefined8 *)(lVar6 + 0x60),uVar8);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
        cVar1 = std::operator==((string *)(lVar6 + 0x80),asStack_20);
        if (cVar1 != '\0') {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_043abc0c(*(undefined8 *)(lVar6 + 0x60),uVar8);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
          Sexy::ToWString((string *)(lVar6 + 0xe8));
          TodStringTranslate(awStack_10);
          FUN_05476c50(awStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          std::string::~string(asStack_20);
          goto LAB_043ad658;
        }
        uVar8 = uVar8 + 1;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_20);
  }
  FUN_05476574();
LAB_043ad658:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetGeneralBoostValueByNewAvatarName(std::string const&) */

void NewAvatar::GetGeneralBoostValueByNewAvatarName(string *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  NameMapperBase *this_01;
  RtObject *this_02;
  NewAvatarGeneralSkillBoost *pNVar4;
  undefined4 uVar5;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    this_01 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
    iVar3 = NameMapperBase::GetIdForName(this_01,param_1);
    cVar1 = PlayerInfo::IsPlantNewAvatarUnLocked(this_00,iVar3);
    if (cVar1 != '\0') {
      GetAvatarInfoByAvatarId(iVar3);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
      if (bVar2) {
        GetAvatarInfoByAvatarId(iVar3);
        this_02 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        pNVar4 = Sexy::RtObject::Cast<NewAvatarGeneralSkillBoost>(this_02);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        if (pNVar4 != (NewAvatarGeneralSkillBoost *)0x0) {
          uVar5 = *(undefined4 *)(pNVar4 + 100);
          goto LAB_043ad7e8;
        }
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
      }
    }
  }
  uVar5 = 0;
LAB_043ad7e8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetAvatarInfoByAvatarPieceId(int) */

void NewAvatar::GetAvatarInfoByAvatarPieceId(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  int extraout_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  code *pcVar7;
  string asStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = PlantNewAvatarPieceMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar3);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x9c);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
LAB_043ad9a8:
      std::string::~string(asStack_40);
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
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar7 = *(code **)(*plVar5 + 0x20);
      uVar4 = PlantNewAvatar::StaticGetClass();
      cVar2 = (*pcVar7)(plVar5,uVar4);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        cVar2 = std::operator==((string *)(lVar6 + 0x20),asStack_40);
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
          goto LAB_043ad9a8;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::Common_GetAvatarPieceFullNumber(int) */

void NewAvatar::Common_GetAvatarPieceFullNumber(int param_1)

{
  char cVar1;
  int iVar2;
  NameMapperBase *pNVar3;
  long lVar4;
  string *in_x4;
  undefined4 uVar5;
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar3 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
  if (cVar1 == '\0') {
    pNVar3 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
    if (cVar1 == '\0') {
      uVar5 = 0xffffffff;
    }
    else {
      GetAvatarInfoByAvatarPieceId(param_1);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_10);
      if (cVar1 == '\0') {
        uVar5 = 0xffffffff;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
      }
      else {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
        uVar5 = *(undefined4 *)(lVar4 + 0x28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
      }
    }
  }
  else {
    iVar2 = AvatarChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    std::string::string(asStack_20,"iOS PvZ2 Avatar Store");
    std::string::string(asStack_18,"Avatars");
    std::string::string(asStack_10,"avatar");
    Magento::FindStoreProduct((Magento *)asStack_20,asStack_18,asStack_10,asStack_30,in_x4);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar1 == '\0') {
      uVar5 = 0xffffffff;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      std::string::~string(asStack_30);
    }
    else {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      uVar5 = *(undefined4 *)(lVar4 + 0x90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      std::string::~string(asStack_30);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetAvatarPieceMaxNum(int) */

void NewAvatar::GetAvatarPieceMaxNum(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  NameMapperBase *pNVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar4 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
  if (cVar1 == '\0') {
    pNVar4 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
    uVar2 = 999;
    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
    if (cVar1 == '\0') goto LAB_043adc34;
    pNVar4 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
    iVar3 = PlantNewAvatarMapper::GetInstance();
  }
  else {
    pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    iVar3 = AvatarNameMapperServerID::GetInstance();
  }
  NameMapperBase::GetNameForId(iVar3);
  iVar3 = NameMapperBase::GetIdForName(pNVar4,asStack_10);
  uVar2 = Common_GetAvatarPieceFullNumber(iVar3);
  std::string::~string(asStack_10);
LAB_043adc34:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::NeedShowTips() */

void NewAvatar::NeedShowTips(void)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this;
  PlayerInfo *this_00;
  undefined8 uVar6;
  long *plVar7;
  NameMapperBase *pNVar8;
  long lVar9;
  int extraout_w1;
  code *pcVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x9c);
  do {
    cVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!(bool)cVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_043ade18:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar2) {
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar10 = *(code **)(*plVar7 + 0x20);
      uVar6 = PlantNewAvatar::StaticGetClass();
      cVar1 = (*pcVar10)(plVar7,uVar6);
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        pNVar8 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        iVar4 = NameMapperBase::GetIdForName(pNVar8,(string *)(lVar9 + 0x20));
        pNVar8 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        iVar5 = NameMapperBase::GetIdForName(pNVar8,(string *)(lVar9 + 0x20));
        cVar3 = PlayerInfo::IsPlantNewAvatarUnLocked(this_00,iVar4);
        if (cVar3 == '\0') {
          iVar4 = PlayerInfo::GetNewAvatarPiecesCount(this_00,iVar5);
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          if (*(int *)(lVar9 + 0x28) <= iVar4) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
            goto LAB_043ade18;
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::IsAnyNewAvatarPieceFull(std::string const&) */

void NewAvatar::IsAnyNewAvatarPieceFull(string *param_1)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ProfileMgr *this;
  PlayerInfo *this_00;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  NameMapperBase *pNVar8;
  int extraout_w1;
  code *pcVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x9c);
  do {
    cVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!(bool)cVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_043ae004:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar2) {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar9 = *(code **)(*plVar6 + 0x20);
      uVar5 = PlantNewAvatar::StaticGetClass();
      cVar1 = (*pcVar9)(plVar6,uVar5);
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        cVar1 = std::operator==((string *)(lVar7 + 0x18),param_1);
        if (cVar1 != '\0') {
          pNVar8 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          iVar4 = NameMapperBase::GetIdForName(pNVar8,(string *)(lVar7 + 0x20));
          cVar3 = PlayerInfo::IsPlantNewAvatarUnLocked(this_00,iVar4);
          if (cVar3 == '\0') {
            pNVar8 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
            iVar4 = NameMapperBase::GetIdForName(pNVar8,(string *)(lVar7 + 0x20));
            iVar4 = PlayerInfo::GetNewAvatarPiecesCount(this_00,iVar4);
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
            if (*(int *)(lVar7 + 0x28) <= iVar4) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
              Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
              goto LAB_043ae004;
            }
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetFirstAvatarInfoByClass(Sexy::RtClass const*) */

void __thiscall NewAvatar::GetFirstAvatarInfoByClass(NewAvatar *this,RtClass *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x9c);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
LAB_043ae13c:
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
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,this);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
        goto LAB_043ae13c;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::Common_GetAvatarPieceImage(int) */

void NewAvatar::Common_GetAvatarPieceImage(int param_1)

{
  char cVar1;
  int iVar2;
  NameMapperBase *pNVar3;
  string *psVar4;
  long lVar5;
  undefined8 uVar6;
  string asStack_28 [8];
  string asStack_20 [8];
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar3 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
  if (cVar1 == '\0') {
    pNVar3 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar3,param_1);
    if (cVar1 == '\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = GetNewAvatarPieceImage(param_1);
    }
  }
  else {
    Set8BytesTo0(asStack_28);
    iVar2 = AvatarChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar1 == '\0') {
      psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      thunk_FUN_05475e00(asStack_28,lVar5 + 0x48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
    else {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      thunk_FUN_05475e00(asStack_28,lVar5 + 0x60);
    }
    uVar6 = StringHelper::ToImage(asStack_28,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetListByPlantName(std::string const&, std::vector<Sexy::RtWeakPtr<PlantNewAvatar>,
   std::allocator<Sexy::RtWeakPtr<PlantNewAvatar> > >&) */

void NewAvatar::GetListByPlantName(string *param_1,vector *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>::
  clear((vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>> *)
        param_2);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x9c);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = PlantNewAvatar::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        cVar2 = std::operator==((string *)(lVar5 + 0x18),param_1);
        if (cVar2 != '\0') {
          std::
          vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>::
          push_back((vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>
                     *)param_2,(RtWeakPtr *)aRStack_30);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::Common_GetPlantAvatarPiecesIdList(std::string const&) */

void __thiscall NewAvatar::Common_GetPlantAvatarPiecesIdList(NewAvatar *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  NameMapperBase *pNVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  int extraout_w1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  code *pcVar7;
  int local_40;
  int local_3c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  cVar1 = IsPlantAvatarExistence((string *)this);
  if (cVar1 != '\0') {
    pNVar3 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    local_40 = NameMapperBase::GetIdForName(pNVar3,(string *)this);
    if (local_40 != -1) {
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)in_x8,&local_40);
    }
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x9c);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
      if (bVar2) {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        pcVar7 = *(code **)(*plVar5 + 0x20);
        uVar4 = PlantNewAvatar::StaticGetClass();
        cVar1 = (*pcVar7)(plVar5,uVar4);
        if (cVar1 != '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          cVar1 = std::operator==((string *)(lVar6 + 0x18),(string *)this);
          if (cVar1 != '\0') {
            pNVar3 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
            local_3c = NameMapperBase::GetIdForName(pNVar3,(string *)(lVar6 + 0x20));
            if (local_3c != -1) {
              std::vector<int,std::allocator<int>>::push_back
                        ((vector<int,std::allocator<int>> *)in_x8,&local_3c);
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetNewAvatarBoostForPlant(std::vector<PlantBoost const*, std::allocator<PlantBoost
   const*> >&, int, PlantBoostType) */

void NewAvatar::GetNewAvatarBoostForPlant
               (vector<PlantBoost_const*,std::allocator<PlantBoost_const*>> *param_1,
               undefined8 param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this;
  NameMapperBase *pNVar5;
  int *piVar6;
  long lVar7;
  RtWeakPtr *this_00;
  string asStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr *local_30;
  int local_28 [2];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar3 = ProfileMgr::GetCurrentProfile(this);
  iVar4 = PlantNameMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar4);
  pNVar5 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  iVar4 = NameMapperBase::GetIdForName(pNVar5,asStack_60);
  if (iVar4 != -1) {
    PlayerInfo::GetUnlockedPlantNewAvatar(iVar3);
    pNVar5 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar5,local_28[0]);
    if (cVar1 != '\0') {
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(avStack_20);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(avStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50),
            bVar2) {
        piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        GetAvatarInfoByAvatarId(*piVar6);
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_48);
        if (cVar1 != '\0') {
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
          local_40 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(lVar7 + 0x30));
          local_38 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar7 + 0x30));
          while (bVar2 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
                bVar2) {
            this_00 = (RtWeakPtr *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
            bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
            if ((bVar2) &&
               (lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00),
               *(int *)(lVar7 + 0x10) == param_3)) {
              local_30 = this_00;
              std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>::push_back
                        (param_1,(PlantBoost **)&local_30);
            }
            std::move_iterator<SexyURL::KeyedValue*>::operator++
                      ((move_iterator<SexyURL::KeyedValue*> *)&local_40);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                  ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_58);
      }
    }
    std::pair<void*const,std::vector<int,std::allocator<int>>>::~pair
              ((pair<void*const,std::vector<int,std::allocator<int>>> *)local_28);
  }
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewAvatar::GetPrimitiveAvatarBoostForPlant(std::vector<PlantBoost const*,
   std::allocator<PlantBoost const*> >&, int, PlantBoostType) */

void NewAvatar::GetPrimitiveAvatarBoostForPlant
               (vector<PlantBoost_const*,std::allocator<PlantBoost_const*>> *param_1,
               undefined8 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *pPVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  RtWeakPtr *this_00;
  int extraout_w1;
  code *pcVar8;
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr *local_30;
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  iVar3 = PlantNameMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar3);
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x9c);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)&local_30);
    Sexy::RtId::~RtId((RtId *)&local_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_50);
    if (bVar1) {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      pcVar8 = *(code **)(*plVar6 + 0x20);
      uVar5 = PrimitiveAvatar::StaticGetClass();
      cVar2 = (*pcVar8)(plVar6,uVar5);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_50);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
        cVar2 = std::operator==((string *)(lVar7 + 0x10),asStack_58);
        if ((cVar2 != '\0') &&
           (cVar2 = PlayerInfo::IsPlantAvatarUnLocked(pPVar4,asStack_58,0,0), cVar2 != '\0')) {
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          local_40 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(lVar7 + 0x18));
          local_38 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar7 + 0x18));
          while (bVar1 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
                bVar1) {
            this_00 = (RtWeakPtr *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
            bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
            if ((bVar1) &&
               (lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00),
               *(int *)(lVar7 + 0x10) == param_3)) {
              local_30 = this_00;
              std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>::push_back
                        (param_1,(PlantBoost **)&local_30);
            }
            std::move_iterator<SexyURL::KeyedValue*>::operator++
                      ((move_iterator<SexyURL::KeyedValue*> *)&local_40);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

