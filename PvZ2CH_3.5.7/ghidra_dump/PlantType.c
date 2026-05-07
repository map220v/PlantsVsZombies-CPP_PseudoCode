// Class: PlantType


/* PlantType::IsVine() const */

undefined8 PlantType::IsVine(void)

{
  return 0;
}


/* PlantType::GetRefundSunCount() const */

undefined8 PlantType::GetRefundSunCount(void)

{
  return 0;
}


/* PlantType::IsDoubleBoard() const */

undefined8 PlantType::IsDoubleBoard(void)

{
  return 0;
}


/* PlantType::~PlantType() */

void __thiscall PlantType::~PlantType(PlantType *this)

{
  *(undefined ***)this = &PTR_GetClass_067a6040;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x130));
  PlantAttribute::~PlantAttribute((PlantAttribute *)(this + 0xd8));
  std::vector<PlantAvatarRare,std::allocator<PlantAvatarRare>>::~vector
            ((vector<PlantAvatarRare,std::allocator<PlantAvatarRare>> *)(this + 0xb8));
  std::vector<PlantBoost,std::allocator<PlantBoost>>::~vector
            ((vector<PlantBoost,std::allocator<PlantBoost>> *)(this + 0xa0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x80));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x68));
  std::vector<PlantAvatar,std::allocator<PlantAvatar>>::~vector
            ((vector<PlantAvatar,std::allocator<PlantAvatar>> *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* PlantType::~PlantType() */

void __thiscall PlantType::~PlantType(PlantType *this)

{
  ~PlantType(this);
  AK::FreeHook(this);
  return;
}


/* PlantType::GetCost(int) const */

void PlantType::GetCost(int param_1)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x70))((long *)(ulong)(uint)param_1,0xfffffffe);
  return;
}


/* PlantType::GetExchangeAvatarCost() const */

ulong __thiscall PlantType::GetExchangeAvatarCost(PlantType *this)

{
  ulong uVar1;
  
  if (0 < (int)*(uint *)(this + 0x124)) {
    return (ulong)*(uint *)(this + 0x124);
  }
  uVar1 = PlantAvatarExchange::GetAvatarExchangeCost(*(int *)(this + 0xd0));
  return uVar1;
}


/* PlantType::GetProps() const */

void __thiscall PlantType::GetProps(PlantType *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  return;
}


/* PlantType::GetMaxHitpoints() const */

undefined4 __thiscall PlantType::GetMaxHitpoints(PlantType *this)

{
  long lVar1;
  
  lVar1 = GetProps(this);
  return *(undefined4 *)(lVar1 + 0x24);
}


/* PlantType::GetBeghouledCost() const */

undefined4 __thiscall PlantType::GetBeghouledCost(PlantType *this)

{
  long lVar1;
  
  lVar1 = GetProps(this);
  return *(undefined4 *)(lVar1 + 0x1c);
}


/* PlantType::GetHeroPropsPtr() const */

RtWeakPtr<Sexy::SoundResource> * PlantType::GetHeroPropsPtr(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x130));
  return in_x8;
}


/* PlantType::GetHeroProps() const */

void __thiscall PlantType::GetHeroProps(PlantType *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x130));
  return;
}


/* PlantType::IsHeroPlant() const */

void __thiscall PlantType::IsHeroPlant(PlantType *this)

{
  Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x130));
  return;
}


/* PlantType::IsInHomeWorld() const */

char __thiscall PlantType::IsInHomeWorld(PlantType *this)

{
  char cVar1;
  StageModule *this_00;
  
  if ((gLawnApp != 0) && (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0)) {
    this_00 = (StageModule *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    if (this_00 != (StageModule *)0x0) {
      cVar1 = StageModule::MatchWorld(this_00,(string *)(this + 0x38));
      if (cVar1 != '\0') {
        return cVar1;
      }
    }
    return '\0';
  }
  return '\0';
}


/* PlantType::GetRareColor() const */

Color * PlantType::GetRareColor(void)

{
  long in_x0;
  Color *in_x8;
  
  switch(*(undefined4 *)(in_x0 + 0xd0)) {
  case 1:
    Sexy::Color::Color(in_x8,0xa4,0xff,0xa4);
    return in_x8;
  case 2:
    Sexy::Color::Color(in_x8,0,0x80,0xff);
    return in_x8;
  case 3:
    Sexy::Color::Color(in_x8,0xaf,0x87,0xff);
    return in_x8;
  case 4:
    Sexy::Color::Color(in_x8,0xff,0xcc,0);
    return in_x8;
  default:
    Sexy::Color::Color(in_x8,0xff,0xff,0xcc);
    return in_x8;
  }
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantType::GetPlantProfessionName(PlantProfessions) */

void __thiscall PlantType::GetPlantProfessionName(string *param_1,undefined4 param_2)

{
  long lVar1;
  char *__s;
  
  lVar1 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    __s = "[PROFESSION_SHOOTER]";
    break;
  case 1:
    __s = "[PROFESSION_WARRIOR]";
    break;
  case 2:
    __s = "[PROFESSION_SUPPORTER]";
    break;
  case 3:
    __s = "[PROFESSION_PROTECTOR]";
    break;
  case 4:
    __s = "[PROFESSION_SUNMAKER]";
    break;
  case 5:
    __s = "[PROFESSION_SPECIALIST]";
    break;
  default:
    __s = "";
  }
  std::string::string(param_1,__s);
  nop();
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantType::GetPlantProfessionDescription(PlantProfessions) */

void __thiscall PlantType::GetPlantProfessionDescription(string *param_1,undefined4 param_2)

{
  long lVar1;
  char *__s;
  
  lVar1 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    __s = "[PROFESSION_SHOOTER_DESCRIPTION]";
    break;
  case 1:
    __s = "[PROFESSION_WARRIOR_DESCRIPTION]";
    break;
  case 2:
    __s = "[PROFESSION_SUPPORTER_DESCRIPTION]";
    break;
  case 3:
    __s = "[PROFESSION_PROTECTOR_DESCRIPTION]";
    break;
  case 4:
    __s = "[PROFESSION_SUNMAKER_DESCRIPTION]";
    break;
  case 5:
    __s = "[PROFESSION_SPECIALIST_DESCRIPTION]";
    break;
  default:
    __s = "";
  }
  std::string::string(param_1,__s);
  nop();
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* PlantType::IsBlowProducer() const */

undefined1 __thiscall PlantType::IsBlowProducer(PlantType *this)

{
  string *psVar1;
  bool bVar2;
  undefined1 uVar3;
  
  psVar1 = (string *)(this + 8);
  bVar2 = std::operator==(psVar1,"blover");
  if (((((bVar2) || (bVar2 = std::operator==(psVar1,"hurrikale"), bVar2)) ||
       (bVar2 = std::operator==(psVar1,"bamboo"), bVar2)) ||
      ((bVar2 = std::operator==(psVar1,"acorn"), bVar2 ||
       (bVar2 = std::operator==(psVar1,"broccoli"), bVar2)))) ||
     ((bVar2 = std::operator==(psVar1,"citron"), bVar2 ||
      ((bVar2 = std::operator==(psVar1,"cracker"), bVar2 ||
       (bVar2 = std::operator==(psVar1,"draftodil"), uVar3 = 0, bVar2)))))) {
    uVar3 = 1;
  }
  return uVar3;
}


/* PlantType::IsSunProducer() const */

bool __thiscall PlantType::IsSunProducer(PlantType *this)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  
  bVar1 = std::operator==((string *)(this + 8),"powerlily");
  if ((!bVar1) && (bVar1 = std::operator==((string *)(this + 8),"marigold"), !bVar1)) {
    lVar2 = GetProps(this);
    uVar5 = *(undefined8 *)(lVar2 + 0x70);
    lVar3 = FUN_03fa35dc(uVar5,*(undefined8 *)(lVar2 + 0x78));
    lVar2 = 0;
    do {
      if (lVar2 == lVar3) {
        return bVar1;
      }
      piVar4 = (int *)FUN_03fa35f0(uVar5,lVar2);
      lVar2 = lVar2 + 1;
    } while (*piVar4 != 2);
    return true;
  }
  return false;
}


/* PlantType::GetCanBeUsedOnStage(std::string const&) const */

undefined8 __thiscall PlantType::GetCanBeUsedOnStage(PlantType *this,string *param_1)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = GetProps(this);
  if (lVar2 != 0) {
    lVar2 = GetProps(this);
    lVar2 = FUN_03fa3608(*(undefined8 *)(lVar2 + 0x230),*(undefined8 *)(lVar2 + 0x238));
    if (lVar2 == 0) {
      return 1;
    }
  }
  uVar5 = 0;
  do {
    lVar2 = GetProps(this);
    uVar4 = FUN_03fa3608(*(undefined8 *)(lVar2 + 0x230),*(undefined8 *)(lVar2 + 0x238));
    if (uVar4 <= uVar5) {
      return 0;
    }
    lVar2 = GetProps(this);
    psVar3 = (string *)FUN_03fa3614(*(undefined8 *)(lVar2 + 0x230),uVar5);
    cVar1 = std::operator==(psVar3,param_1);
    uVar5 = uVar5 + 1;
  } while (cVar1 == '\0');
  return 1;
}


/* PlantType::GetSaveCostInHomeWorld() const */

undefined4 __thiscall PlantType::GetSaveCostInHomeWorld(PlantType *this)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  
  cVar1 = IsInHomeWorld(this);
  uVar2 = 0;
  if (cVar1 != '\0') {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar2 = *(undefined4 *)(lVar3 + 0x20);
  }
  return uVar2;
}


/* PlantType::GetCurrentLevelSkillType(int, bool) const */

void PlantType::GetCurrentLevelSkillType(int param_1,bool param_2)

{
  long lVar1;
  char in_w2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)((ulong)(uint)param_1 + 0x28));
  lVar1 = FUN_03fa3600(*(undefined8 *)(lVar1 + 0x208),(long)(int)(param_2 - 1));
  if (in_w2 == '\0') {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)(lVar1 + 0x10));
    return;
  }
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)(lVar1 + 8));
  return;
}


/* PlantType::IsInsideRestrictedArea(Sexy::Point const&) const */

undefined8 __thiscall PlantType::IsInsideRestrictedArea(PlantType *this,Point *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = GetProps(this);
  if ((*(int *)(lVar1 + 200) == 0) && (*(int *)(lVar1 + 0xcc) == 0)) {
    return 1;
  }
  uVar2 = Sexy::TRect<int>::Contains((TRect<int> *)(lVar1 + 0xc0),(TPoint *)param_1);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantType::GetNewAvatarRare() const */

void __thiscall PlantType::GetNewAvatarRare(PlantType *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  undefined4 uVar5;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = PlayerInfo::GetEquipAvatarID(this_01,(string *)(this + 8));
  iVar3 = PlayerInfo::GetWhichAvatarType((int)this_01);
  if (iVar3 == 2) {
    NewAvatar::GetAvatarInfoByAvatarId(iVar2);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
    if (bVar1) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      uVar5 = *(undefined4 *)(lVar4 + 0x60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    else {
      uVar5 = 0xffffffff;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantType::IsNewAvatarNewRare() const */

void __thiscall PlantType::IsNewAvatarNewRare(PlantType *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = PlayerInfo::GetEquipAvatarID(this_01,(string *)(this + 8));
  iVar3 = PlayerInfo::GetWhichAvatarType((int)this_01);
  if (iVar3 == 2) {
    NewAvatar::GetAvatarInfoByAvatarId(iVar2);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
    if (bVar1) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      bVar1 = 0 < *(int *)(lVar4 + 0x60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      bVar1 = false;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantType::GetPacketCoolDown(PlantAvatarType) const */

void __thiscall PlantType::GetPacketCoolDown(PlantType *this,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ProfileMgr *pPVar4;
  PlayerInfo *this_00;
  long *plVar5;
  long lVar6;
  int *piVar7;
  float *pfVar8;
  string *psVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 == -2) && (param_2 = *(int *)(this + 0x98), param_2 == -2)) {
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    psVar9 = (string *)ProfileMgr::GetCurrentProfile(pPVar4);
    if (psVar9 == (string *)0x0) {
      param_2 = -1;
      *(undefined4 *)(this + 0x98) = 0xffffffff;
    }
    else {
      param_2 = PlayerInfo::GetPlantAvatar(psVar9,(bool)((char)this + '\b'));
      *(int *)(this + 0x98) = param_2;
    }
  }
  pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
  if (this_00 == (PlayerInfo *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = PlayerInfo::GetPlantStarLevel(this_00,(string *)(this + 8),false);
  }
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if ((cVar1 != '\0') ||
     ((cVar1 = MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel(), cVar1 != '\0' &&
      (iVar3 = MiniGameCollectionUtils::GetMiniGameCollectionType(), iVar3 == 0)))) {
    uVar2 = 1;
  }
  plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  fVar12 = (float)(**(code **)(*plVar5 + 0x80))(plVar5,uVar2);
  uVar11 = *(undefined8 *)(this + 0x50);
  lVar6 = FUN_03fa35a0(uVar11,*(undefined8 *)(this + 0x58));
  lVar10 = 0;
  do {
    if (lVar10 == lVar6) goto LAB_03fa42e0;
    piVar7 = (int *)FUN_03fa35d0(uVar11,lVar10);
    lVar10 = lVar10 + 1;
  } while (param_2 != *piVar7);
  fVar12 = fVar12 * (float)piVar7[9];
LAB_03fa42e0:
  fVar13 = (float)BoardHelpers::ApplyLevelBasedModifierValue(1.0,10,*(int *)(this + 0xd4) + 1,0);
  iVar3 = MiniGameCollectionUtils::GetMiniGameCollectionType();
  local_10 = (float)BoardHelpers::ApplyMiniGamePerkBuffValue(0.0,iVar3,1,this);
  local_10 = 1.0 - local_10;
  local_c = 0.0;
  pfVar8 = eastl::max_alt<float>(&local_10,&local_c);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar13 * fVar12 * *pfVar8);
  }
  return;
}


/* PlantType::UpdateAvatar() const */

void __thiscall PlantType::UpdateAvatar(PlantType *this)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  string *psVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar2 = (string *)ProfileMgr::GetCurrentProfile(this_00);
  if (psVar2 != (string *)0x0) {
    uVar1 = PlayerInfo::GetPlantAvatar(psVar2,(bool)((char)this + '\b'));
    *(undefined4 *)(this + 0x98) = uVar1;
    return;
  }
  *(undefined4 *)(this + 0x98) = 0xffffffff;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantType::GetCostOffset() const */

void __thiscall PlantType::GetCostOffset(PlantType *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  bVar1 = std::operator!=("jalapeno",(string *)(this + 8));
  if ((bVar1) || (cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level(), cVar2 != '\0')) {
    uVar4 = 0;
  }
  else {
    std::string::string(asStack_10,"jalapeno");
    iVar3 = PlayerInfo::GetPlantStarLevel(this_01,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    uVar4 = 0xffffffe7;
    if (iVar3 != 3) {
      uVar4 = 0;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantType::HasPlantAdventureFlag(std::string) const */

void __thiscall PlantType::HasPlantAdventureFlag(PlantType *this,string *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *__nptr;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = FUN_05474184(param_2);
  if (5 < uVar5) {
    FUN_05475ffc((string *)&local_10,param_2,0,5);
    bVar2 = std::operator==("level",(string *)&local_10);
    std::string::~string((string *)&local_10);
    if (bVar2) {
      FUN_05475ffc((string *)&local_10,param_2,5,1);
      __nptr = (char *)FUN_0547429c((string *)&local_10);
      iVar3 = atoi(__nptr);
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      if ((this_01 == (PlayerInfo *)0x0) ||
         (iVar4 = PlayerInfo::GetPlantStarLevel(this_01,(string *)(this + 8),false), iVar4 < iVar3))
      {
        cVar1 = '\0';
        std::string::~string((string *)&local_10);
      }
      else {
        std::string::~string((string *)&local_10);
        cVar1 = '\x01';
      }
      goto LAB_03fa4be4;
    }
  }
  local_18 = FUN_03fa4a90(*(undefined8 *)(this + 0x68));
  local_10 = FUN_03fa4ae0(*(undefined8 *)(this + 0x70));
  while( true ) {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) break;
    uVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar6);
    cVar1 = std::operator==(asStack_20,param_2);
    if (cVar1 != '\0') {
      std::string::~string(asStack_20);
      break;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
LAB_03fa4be4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantType::canGiveFirstAidToPlant(Plant*) const */

void __thiscall PlantType::canGiveFirstAidToPlant(PlantType *this,Plant *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ResourceInfo *pRVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar4 = (long *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)param_1);
  iVar3 = (**(code **)(*plVar4 + 0x1c0))();
  lVar5 = GetProps(this);
  if ((*(char *)(lVar5 + 0x248) == '\0') ||
     (cVar2 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,0x17), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    Plant::GetType();
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    if (pRVar6 == (ResourceInfo *)this) {
      fVar8 = *(float *)(param_1 + 0xd8);
      fVar7 = (float)(**(code **)(*(long *)pRVar6 + 0x50))();
      bVar1 = fVar8 < (fVar7 * (float)iVar3) / (float)(iVar3 + 1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantType::CanPlantOnPlant(Plant*) const */

void __thiscall PlantType::CanPlantOnPlant(PlantType *this,Plant *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ResourceInfo *pRVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  plVar4 = (long *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)param_1);
  iVar3 = (**(code **)(*plVar4 + 0x1c0))();
  lVar5 = GetProps(this);
  if ((*(char *)(lVar5 + 0x248) == '\0') ||
     (cVar2 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,0x17), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    Plant::GetType();
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    if (pRVar6 == (ResourceInfo *)this) {
      fVar8 = *(float *)(param_1 + 0xd8);
      fVar7 = (float)(**(code **)(*(long *)pRVar6 + 0x50))();
      bVar1 = fVar8 < (fVar7 * (float)iVar3) / (float)(iVar3 + 1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantType::GetRefundCost(PlantAvatarType) const */

void __thiscall PlantType::GetRefundCost(PlantType *this,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  PlantNameMapperServerID *this_00;
  RiftThemeBuffPlantAOE *this_01;
  UnchartedBoostMgr *pUVar9;
  float *pfVar10;
  ProfileMgr *this_02;
  string *psVar11;
  undefined8 uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  int local_14;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 == -2) && (param_2 = *(int *)(this + 0x98), param_2 == -2)) {
    this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    psVar11 = (string *)ProfileMgr::GetCurrentProfile(this_02);
    if (psVar11 == (string *)0x0) {
      param_2 = -1;
      *(undefined4 *)(this + 0x98) = 0xffffffff;
    }
    else {
      param_2 = PlayerInfo::GetPlantAvatar(psVar11,(bool)((char)this + '\b'));
      *(int *)(this + 0x98) = param_2;
    }
  }
  iVar13 = 0;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
  if (bVar1) {
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    iVar13 = *(int *)(lVar8 + 0x18);
  }
  uVar12 = *(undefined8 *)(this + 0x50);
  lVar6 = FUN_03fa35a0(uVar12,*(undefined8 *)(this + 0x58));
  lVar8 = 0;
  do {
    if (lVar8 == lVar6) goto LAB_03fa5118;
    piVar7 = (int *)FUN_03fa35d0(uVar12,lVar8);
    lVar8 = lVar8 + 1;
  } while (param_2 != *piVar7);
  iVar13 = iVar13 + piVar7[8];
LAB_03fa5118:
  if ((*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) ||
     (cVar2 = Board::IsCurrentLevelBeghouled(*(Board **)(gLawnApp + 0x9f0)), cVar2 == '\0')) {
    this_00 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
    uVar3 = PlantNameMapperServerID::GetIdForType(this_00,this);
    uVar12 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
    fVar14 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar12,uVar3,9,0);
    iVar4 = GetCostOffset(this);
    iVar5 = GetSaveCostInHomeWorld(this);
    local_14 = ((iVar4 + iVar13) - iVar5) - (int)fVar14;
    this_01 = RiftUtils::GetThemeByClass<RiftThemeBuffPlantAOE>();
    if (this_01 != (RiftThemeBuffPlantAOE *)0x0) {
      RiftThemeBuffPlantAOE::GetReducedSunCost(this_01,(string *)(this + 8),&local_14);
    }
    fVar14 = (float)BoardHelpers::ApplyLevelBasedModifierValue(1.0,0xc,*(int *)(this + 0xd4) + 1,0);
    pUVar9 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
    fVar15 = (float)UnchartedBoostMgr::GetBoostValue(pUVar9,this,1,0);
    local_10 = 0.0;
    iVar13 = (int)(fVar15 * 100.0) / 100;
    local_c = fVar14 - (fVar15 - (float)iVar13);
    pfVar10 = eastl::max_alt<float>(&local_10,&local_c);
    iVar13 = (int)((float)local_14 * *pfVar10) - iVar13;
    if (iVar13 < 0) {
      iVar13 = 0;
    }
  }
  else {
    lVar8 = GetProps(this);
    iVar13 = *(int *)(lVar8 + 0x1c);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar13);
  }
  return;
}


/* PlantType::PlantType() */

void __thiscall PlantType::PlantType(PlantType *this)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_067a6040;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  Set8BytesTo0(this + 0x38);
  Set8BytesTo0(this + 0x40);
  Set8BytesTo0(this + 0x48);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb8));
  PlantAttribute::PlantAttribute((PlantAttribute *)(this + 0xd8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x130));
  this[0x30] = (PlantType)0x1;
  this[0x31] = (PlantType)0x1;
  this[0x32] = (PlantType)0x1;
  std::vector<PlantAvatar,std::allocator<PlantAvatar>>::clear
            ((vector<PlantAvatar,std::allocator<PlantAvatar>> *)(this + 0x50));
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  this[0x128] = (PlantType)0x1;
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  *(undefined4 *)(this + 0x98) = 0xfffffffe;
  *(undefined4 *)(this + 0x120) = 0xffffffff;
  return;
}


/* PlantType::StaticNew() */

PlantType * PlantType::StaticNew(void)

{
  PlantType *this;
  
  this = ::operator_new(0x138);
  PlantType(this);
  return this;
}


/* PlantType::GetAvatarLayers(PlantAvatarType, std::vector<std::string, std::allocator<std::string >
   >&) const */

void __thiscall
PlantType::GetAvatarLayers
          (PlantType *this,int param_2,vector<std::string,std::allocator<std::string>> *param_3)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar3 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 0x50);
    uVar1 = FUN_03fa35a0(uVar5,*(undefined8 *)(this + 0x58));
    uVar4 = uVar3;
    do {
      uVar3 = uVar4 + 1;
      if (uVar1 <= uVar4) {
        return;
      }
      piVar2 = (int *)FUN_03fa35d0(uVar5,uVar4);
      uVar4 = uVar3;
    } while (*piVar2 != param_2);
    std::vector<std::string,std::allocator<std::string>>::operator=(param_3,(vector *)(piVar2 + 2));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantType::GetCost(PlantAvatarType) const */

void __thiscall PlantType::GetCost(PlantType *this,int param_2)

{
  LawnApp *pLVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  Board *this_00;
  long lVar8;
  long lVar9;
  int *piVar10;
  PlantNameMapperServerID *this_01;
  RiftThemeBuffPlantAOE *this_02;
  UnchartedBoostMgr *pUVar11;
  float *pfVar12;
  LevelModuleManager *this_03;
  BesiegeModule *pBVar13;
  TowerDefendPlantUpgradeTree *pTVar14;
  ProfileMgr *this_04;
  string *psVar15;
  undefined8 uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  float local_20 [6];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsInModule(gLawnApp,4);
  if (cVar2 == '\0') {
    this_00 = *(Board **)(pLVar1 + 0x9f0);
    if ((this_00 == (Board *)0x0) ||
       (cVar2 = Board::IsCurrentLevelBeghouled(this_00), cVar2 == '\0')) {
      if ((param_2 == -2) && (param_2 = *(int *)(this + 0x98), param_2 == -2)) {
        this_04 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        psVar15 = (string *)ProfileMgr::GetCurrentProfile(this_04);
        if (psVar15 == (string *)0x0) {
          param_2 = -1;
          *(undefined4 *)(this + 0x98) = 0xffffffff;
        }
        else {
          param_2 = PlayerInfo::GetPlantAvatar(psVar15,(bool)((char)this + '\b'));
          *(int *)(this + 0x98) = param_2;
        }
      }
      iVar17 = 0;
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
      if (bVar3) {
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
        iVar17 = *(int *)(lVar8 + 0x18);
      }
      uVar16 = *(undefined8 *)(this + 0x50);
      lVar9 = FUN_03fa35a0(uVar16,*(undefined8 *)(this + 0x58));
      lVar8 = 0;
      do {
        if (lVar8 == lVar9) goto LAB_03fa5a40;
        piVar10 = (int *)FUN_03fa35d0(uVar16,lVar8);
        lVar8 = lVar8 + 1;
      } while (param_2 != *piVar10);
      iVar17 = iVar17 + piVar10[8];
LAB_03fa5a40:
      this_01 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
      uVar4 = PlantNameMapperServerID::GetIdForType(this_01,this);
      uVar16 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
      fVar18 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar16,uVar4,9,0);
      iVar5 = GetCostOffset(this);
      iVar6 = GetSaveCostInHomeWorld(this);
      local_30 = CONCAT44(local_30._4_4_,((iVar5 + iVar17) - iVar6) - (int)fVar18);
      this_02 = RiftUtils::GetThemeByClass<RiftThemeBuffPlantAOE>();
      if (this_02 != (RiftThemeBuffPlantAOE *)0x0) {
        RiftThemeBuffPlantAOE::GetReducedSunCost(this_02,(string *)(this + 8),(int *)&local_30);
      }
      fVar18 = (float)BoardHelpers::ApplyLevelBasedModifierValue
                                (1.0,0xc,*(int *)(this + 0xd4) + 1,0);
      pUVar11 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
      fVar19 = (float)UnchartedBoostMgr::GetBoostValue(pUVar11,this,1,0);
      local_28 = (ulong)local_28._4_4_ << 0x20;
      iVar17 = (int)(fVar19 * 100.0) / 100;
      local_20[0] = fVar18 - (fVar19 - (float)iVar17);
      pfVar12 = eastl::max_alt<float>((float *)&local_28,local_20);
      uVar7 = (int)((float)(int)local_30 * *pfVar12) - iVar17;
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
    }
    else {
      lVar8 = GetProps(this);
      uVar7 = *(uint *)(lVar8 + 0x1c);
    }
  }
  else {
    this_03 = (LevelModuleManager *)FUN_03fa358c(*(undefined8 *)(*(long *)(pLVar1 + 0x9f0) + 0xad8))
    ;
    pBVar13 = LevelModuleManager::GetModuleByClass<BesiegeModule>(this_03);
    if (pBVar13 == (BesiegeModule *)0x0) {
      uVar7 = 0;
    }
    else {
      lVar8 = PooyanModule::GetPooyanProps();
      local_40 = FUN_03fa4e00(*(undefined8 *)(lVar8 + 0x50));
      local_38 = FUN_03fa4e50(*(undefined8 *)(lVar8 + 0x58));
      while( true ) {
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38)
        ;
        uVar7 = (uint)bVar3;
        if (!bVar3) break;
        iVar17 = 0;
        pTVar14 = (TowerDefendPlantUpgradeTree *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        TowerDefendPlantUpgradeTree::TowerDefendPlantUpgradeTree
                  ((TowerDefendPlantUpgradeTree *)local_20,pTVar14);
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)local_20);
        while( true ) {
          local_28 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)local_20);
          bVar3 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
          if (!bVar3) break;
          piVar10 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
          cVar2 = std::operator==((string *)(this + 8),(string *)(piVar10 + 2));
          if (cVar2 != '\0') {
            uVar7 = iVar17 + *piVar10;
            TowerDefendPlantUpgradeTree::~TowerDefendPlantUpgradeTree
                      ((TowerDefendPlantUpgradeTree *)local_20);
            goto LAB_03fa5b44;
          }
          iVar17 = iVar17 + *piVar10;
          FUN_03fa4ea0((exception_ptr *)&local_30);
        }
        TowerDefendPlantUpgradeTree::~TowerDefendPlantUpgradeTree
                  ((TowerDefendPlantUpgradeTree *)local_20);
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_40);
      }
    }
  }
LAB_03fa5b44:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantType::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) const */

void __thiscall PlantType::AddResourceRequirements(PlantType *this,set *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  ResourceInfo *this_00;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==((string *)(this + 8),"hypnoshroom");
  if (bVar1) {
    plVar4 = (long *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    (**(code **)(*plVar4 + 0xa8))(aRStack_10);
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    ZombieType::AddInGameResourceRequirements((ZombieType *)this_00,param_1);
  }
  uVar2 = FUN_03fa4a90(*(undefined8 *)(this + 0x80));
  uVar3 = FUN_03fa4ae0(*(undefined8 *)(this + 0x88));
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::
  insert<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,uVar2,
             uVar3);
  bVar1 = std::operator!=((string *)(this + 8),"slingpea");
  if (bVar1) {
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
               (string *)(this + 0x10));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantType::StaticClassInit() */

void PlantType::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0xffffffff;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"none",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"normal",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"PlantAvatarType");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"rare0",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"rare1",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"PlantAvatarRare");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0xffffffff;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"invalid",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"shooter",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"warrior",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"supporter",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"protector",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 4;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"sunmaker",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 5;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"specialist",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"PlantProfessions");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"PlantAvatar");
    (*pcVar3)(plVar2,avStack_20,FUN_03fa44f8,0x28,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"hp",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"attack",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"range",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"plant",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 4;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"support",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 5;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"control",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"PlantAttributeType");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"none",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"D",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"C",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"B",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 4;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"A",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 5;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"S",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"PlantAttributeRank");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"PlantAttributeInfo");
    (*pcVar3)(plVar2,avStack_20,FUN_03fa472c,8,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"PlantSpecialTagInfo");
    (*pcVar3)(plVar2,avStack_20,FUN_03fa4880,8,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"green",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"heal",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"support",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"debuff",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 4;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"sun_produce",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 5;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"red",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 6;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"pea",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 7;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"dps",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 8;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"aoe",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 9;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"burn",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 10;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"one_shot",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0xb;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"curve",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0xc;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"manual",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0xd;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"explode",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0xe;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"flame",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x1b;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"lightning",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x11;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"cold",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x25;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"magic",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x23;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"poison",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0xf;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"shadow",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x10;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"blue",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x12;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"summon",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x13;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"consume",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x14;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"operate",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x15;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"flying",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x16;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"watering",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x17;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"low",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x18;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"high",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x19;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"armor",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x1a;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"yellow",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x1c;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"defence",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x1d;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"slow",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x1e;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"teleport",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x1f;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"control",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x21;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"physical",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x20;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"grey",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x22;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"purple",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x24;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"pink",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"PlantTag");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"s_red",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"s_grey",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 6;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"s_purple",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 10;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"s_pink",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 4;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"s_blue",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 8;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"s_yellow",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"s_burned1",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"s_stuned1",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 5;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"s_freezed1",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 7;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"s_poisoned1",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 9;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"s_stucked1",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0xb;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"s_hypnotized1",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"PlantSpecialTag");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0xffffffff;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"none",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"AdditionA",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"AdditionB",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"AdditionC",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"PlantAdditionType");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"PlantAttribute");
    (*pcVar3)(plVar2,avStack_20,FUN_03fa542c,0x48,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"PlantType");
    (*pcVar3)(plVar2,avStack_20,FUN_03fa7200,0x138,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantType::StaticGetClass() */

long * PlantType::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"PlantType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantType::GetClass() const */

long * PlantType::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"PlantType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantType::GatherPlantingRestrictions(Board*, Sexy::Point const&, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
PlantType::GatherPlantingRestrictions(PlantType *this,Board *param_1,Point *param_2,vector *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  PlantGroup *this_00;
  string asStack_18 [8];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)param_2;
  std::string::string((string *)local_10,"");
  lVar5 = Board::GetPlantAt(param_1,iVar2,iVar1,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  if (lVar5 != 0) {
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    bVar3 = std::operator==((string *)(lVar5 + 8),"coffeebean");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    if (!bVar3) goto LAB_03fa7cf8;
  }
  Sexy::Point::Point((Point *)local_10,*(int *)param_2 + -1,*(int *)(param_2 + 4));
  this_00 = (PlantGroup *)Board::GetPlantGroupAt((Point *)param_1);
  if (this_00 != (PlantGroup *)0x0) {
    std::string::string(asStack_18,"cobcannon");
    cVar4 = PlantGroup::HasPlant(this_00,asStack_18);
    if (cVar4 == '\0') {
      std::string::string((string *)local_10,"armorflame");
      cVar4 = PlantGroup::HasPlant(this_00,(string *)local_10);
      std::string::~string((string *)local_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      if (cVar4 == '\0') goto LAB_03fa7cf8;
    }
    else {
      std::string::~string(asStack_18);
      nop();
    }
    local_10[0] = 0x4d;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)local_10);
  }
LAB_03fa7cf8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

