// Class: GeneEnhancement


/* GeneEnhancement::FastGeneToEssence(int) */

int GeneEnhancement::FastGeneToEssence(int param_1)

{
  return param_1 + 10000;
}


/* GeneEnhancement::FastEssenceToGene(int) */

int GeneEnhancement::FastEssenceToGene(int param_1)

{
  return param_1 + -10000;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneEnhancement::GeneToEssence(int) */

void GeneEnhancement::GeneToEssence(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  NameMapperBase *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (NameMapperBase *)GeneEssenceMapper::GetInstance();
  iVar1 = GeneMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  uVar2 = NameMapperBase::GetIdForName(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneEnhancement::EssenceToGene(int) */

void GeneEnhancement::EssenceToGene(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  NameMapperBase *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (NameMapperBase *)GeneMapper::GetInstance();
  iVar1 = GeneEssenceMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  uVar2 = NameMapperBase::GetIdForName(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* GeneEnhancement::TransToGeneValue(int) */

int GeneEnhancement::TransToGeneValue(int param_1)

{
  char cVar1;
  NameMapperBase *this;
  
  this = (NameMapperBase *)GeneMapper::GetInstance();
  cVar1 = NameMapperBase::ContainsId(this,param_1);
  if (cVar1 == '\0') {
    param_1 = param_1 + -10000;
  }
  return param_1;
}


/* GeneEnhancement::TransToEssenceValue(int) */

int GeneEnhancement::TransToEssenceValue(int param_1)

{
  char cVar1;
  NameMapperBase *this;
  
  this = (NameMapperBase *)GeneMapper::GetInstance();
  cVar1 = NameMapperBase::ContainsId(this,param_1);
  if (cVar1 != '\0') {
    param_1 = param_1 + 10000;
  }
  return param_1;
}


/* GeneEnhancement::GetGeneBoostDescription(Sexy::RtWeakPtr<PlantGene>, int) */

undefined8
GeneEnhancement::GetGeneBoostDescription(undefined8 param_1,RtMixedPtr<Sexy::Image> *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(param_2);
  if (cVar1 == '\0') {
    iVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    GeneBoost::GetDescription(iVar2 + 0x20);
    return param_1;
  }
  FUN_05476574(param_1);
  return param_1;
}


/* GeneEnhancement::IsGeneLocked(int) */

void GeneEnhancement::IsGeneLocked(int param_1)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::IsGeneLocked(this_00,param_1);
  return;
}


/* GeneEnhancement::SetGeneLockState(int, bool) */

void GeneEnhancement::SetGeneLockState(int param_1,bool param_2)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::SetGeneLockState(this_00,param_1,param_2);
  return;
}


/* GeneEnhancement::GetGeneLevel(int) */

ulong GeneEnhancement::GetGeneLevel(int param_1)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  ulong uVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  uVar1 = PlayerInfo::GetPlantGeneInfoByID(this_00,param_1);
  return uVar1 >> 0x20;
}


/* GeneEnhancement::CanGeneUpgrade(int) */

bool GeneEnhancement::CanGeneUpgrade(int param_1)

{
  int iVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  int extraout_var;
  int extraout_var_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::GetPlantGeneInfoByID(this_00,param_1);
  if ((0 < extraout_var) &&
     (PlayerInfo::GetPlantGeneInfoByID(this_00,param_1), extraout_var_00 < 10)) {
    iVar1 = FastGeneToEssence(param_1);
    iVar1 = PlayerInfo::GetGeneEssence(this_00,iVar1);
    return 0 < iVar1;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneEnhancement::GetGeneFactorNumber() */

void GeneEnhancement::GetGeneFactorNumber(void)

{
  undefined4 uVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  std::string::string(asStack_10,"mat_gene_factor");
  uVar1 = PlayerInfo::GetMaterialNum(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneEnhancement::GetGeneConfig() */

void __thiscall GeneEnhancement::GetGeneConfig(GeneEnhancement *this)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  code *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0xa3);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
LAB_037fb340:
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
      pcVar5 = *(code **)(*plVar4 + 0x20);
      uVar3 = PlantGeneConfig::StaticGetClass();
      cVar2 = (*pcVar5)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
        goto LAB_037fb340;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneEnhancement::GetUnlockedGeneValue(int) */

void GeneEnhancement::GetUnlockedGeneValue(int param_1)

{
  undefined4 uVar1;
  ProfileMgr *this;
  long lVar2;
  GeneEnhancement *local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  local_18 = (GeneEnhancement *)ProfileMgr::GetCurrentProfile(this);
  if (param_1 == 0) {
    GetGeneConfig(local_18);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar2 = lVar2 + 0x10;
  }
  else if (param_1 == 1) {
    GetGeneConfig(local_18);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar2 = lVar2 + 0x28;
  }
  else if (param_1 == 2) {
    GetGeneConfig(local_18);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar2 = lVar2 + 0x40;
  }
  else if (param_1 == 3) {
    GetGeneConfig(local_18);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar2 = lVar2 + 0x58;
  }
  else {
    uVar1 = 0;
    if (param_1 != 4) goto LAB_037fb3cc;
    GetGeneConfig(local_18);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar2 = lVar2 + 0x70;
  }
  uVar1 = FUN_037fa950(&local_18,lVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
LAB_037fb3cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneEnhancement::GetMaxGeneValue(int) */

void GeneEnhancement::GetMaxGeneValue(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    GetGeneConfig((GeneEnhancement *)0x0);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar1 = FUN_037f9fd4(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else if (param_1 == 1) {
    GetGeneConfig((GeneEnhancement *)0x1);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar1 = FUN_037f9fd4(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else if (param_1 == 2) {
    GetGeneConfig((GeneEnhancement *)0x2);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar1 = FUN_037f9fd4(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x48));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else if (param_1 == 3) {
    GetGeneConfig((GeneEnhancement *)0x3);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar1 = FUN_037f9fd4(*(undefined8 *)(lVar2 + 0x58),*(undefined8 *)(lVar2 + 0x60));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    uVar1 = 9999;
    if (param_1 == 4) {
      GetGeneConfig((GeneEnhancement *)&DAT_00000004);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      uVar1 = FUN_037f9fd4(*(undefined8 *)(lVar2 + 0x70),*(undefined8 *)(lVar2 + 0x78));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneEnhancement::GetGeneByID(int) */

void __thiscall GeneEnhancement::GetGeneByID(GeneEnhancement *this,int param_1)

{
  bool bVar1;
  int iVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGeneConfig(this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    iVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    PlantGeneConfig::GetGeneByID(iVar2);
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8)
    ;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneEnhancement::GetGeneBoostDescription(int, int) */

void __thiscall
GeneEnhancement::GetGeneBoostDescription(GeneEnhancement *this,int param_1,int param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGeneByID(this,param_1);
  GetGeneBoostDescription(aRStack_10,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneEnhancement::GetGeneEnhancementSkillBoost(std::string const&) */

void GeneEnhancement::GetGeneEnhancementSkillBoost(string *param_1)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_24;
  RtMixedPtr<Sexy::Image> aRStack_18 [8];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CustomLevelUtils::IsCustomLevel();
  if (cVar1 == '\0') {
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar1 == '\0') {
      local_24 = 0.0;
      GetGeneConfig((GeneEnhancement *)0x0);
      cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_18);
      if (cVar1 == '\0') {
        FUN_05475d88(apStack_10,param_1);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        fVar3 = (float)FUN_037fadbc(apStack_10,lVar2 + 0x10);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        fVar4 = (float)FUN_037fadbc(apStack_10,lVar2 + 0x28);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        fVar5 = (float)FUN_037fadbc(apStack_10,lVar2 + 0x40);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        fVar6 = (float)FUN_037fadbc(apStack_10,lVar2 + 0x58);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        local_24 = (float)FUN_037fadbc(apStack_10,lVar2 + 0x70);
        local_24 = fVar4 + fVar3 + fVar5 + fVar6 + local_24;
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_10);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      goto LAB_037fb758;
    }
  }
  local_24 = 0.0;
LAB_037fb758:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_24);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneEnhancement::GetGeneEnhancementSkillBoost(PlantSkillBoost, int) */

void GeneEnhancement::GetGeneEnhancementSkillBoost(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  RtMixedPtr<Sexy::Image> aRStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CustomLevelUtils::IsCustomLevel();
  if (cVar1 == '\0') {
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar1 == '\0') {
      GetGeneConfig((GeneEnhancement *)0x0);
      cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_18);
      fVar7 = 0.0;
      if (cVar1 == '\0') {
        local_10 = param_1;
        local_c = param_2;
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        fVar3 = (float)FUN_037faea8(&local_10,lVar2 + 0x10);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        fVar4 = (float)FUN_037faea8(&local_10,lVar2 + 0x28);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        fVar5 = (float)FUN_037faea8(&local_10,lVar2 + 0x40);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        fVar6 = (float)FUN_037faea8(&local_10,lVar2 + 0x58);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        fVar7 = (float)FUN_037faea8(&local_10,lVar2 + 0x70);
        fVar7 = fVar4 + fVar3 + fVar5 + fVar6 + fVar7;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      goto LAB_037fb898;
    }
  }
  fVar7 = 0.0;
LAB_037fb898:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneEnhancement::GetGeneEnhancementBoostForPlant(std::vector<PlantBoost const*,
   std::allocator<PlantBoost const*> >&, int, PlantBoostType) */

void GeneEnhancement::GetGeneEnhancementBoostForPlant
               (GeneEnhancement *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  RtMixedPtr<Sexy::Image> aRStack_30 [8];
  string asStack_28 [8];
  GeneEnhancement *local_20;
  undefined4 local_18;
  string *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGeneConfig(param_1);
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_30);
  if (cVar1 == '\0') {
    iVar2 = PlantNameMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    local_20 = param_1;
    local_18 = param_3;
    local_10 = asStack_28;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    FUN_037fd210(&local_20,lVar3 + 0x10);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    FUN_037fd210(&local_20,lVar3 + 0x28);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    FUN_037fd210(&local_20,lVar3 + 0x40);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    FUN_037fd210(&local_20,lVar3 + 0x58);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    FUN_037fd210(&local_20,lVar3 + 0x70);
    std::string::~string(asStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

