// Class: PlantTigerstool


/* PlantTigerstool::CanStunZombies() */

bool __thiscall PlantTigerstool::CanStunZombies(PlantTigerstool *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  return iVar1 < iVar2 + -1;
}


/* PlantTigerstool::ApplyPlantfood() */

void __thiscall PlantTigerstool::ApplyPlantfood(PlantTigerstool *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xf;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTigerstool::DoSpecialForAvatarNormal() */

void __thiscall PlantTigerstool::DoSpecialForAvatarNormal(PlantTigerstool *this)

{
  float fVar1;
  
  fVar1 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  this[0x50] = (PlantTigerstool)(fVar1 < _FUN_040101c0);
  return;
}


/* PlantTigerstool::GetPlantAttackRect(PlantWeapon) */

int * PlantTigerstool::GetPlantAttackRect(int *param_1,long param_2,int param_3)

{
  int iVar1;
  char cVar2;
  
  PlantFramework::GetPlantAttackRect();
  if (param_3 == 0) {
    iVar1 = param_1[2];
    cVar2 = *(char *)(param_2 + 0x4f);
    param_1[2] = (int)((float)iVar1 * 0.5);
    if (cVar2 == '\0') {
      *param_1 = *param_1 + (int)((float)iVar1 * 0.5);
    }
  }
  return param_1;
}


/* PlantTigerstool::PlantTigerstool() */

void __thiscall PlantTigerstool::PlantTigerstool(PlantTigerstool *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_GetClass_067b55d0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 4;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  this[0x44] = (PlantTigerstool)0x0;
  this[0x45] = (PlantTigerstool)0x0;
  this[0x46] = (PlantTigerstool)0x0;
  this[0x47] = (PlantTigerstool)0x0;
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  this[0x4c] = (PlantTigerstool)0x0;
  this[0x4d] = (PlantTigerstool)0x0;
  this[0x4e] = (PlantTigerstool)0x0;
  this[0x58] = (PlantTigerstool)0x0;
  this[0x59] = (PlantTigerstool)0x1;
  this[0x6c] = (PlantTigerstool)0x1;
  *(undefined4 *)(this + 0x40) = 0x3f000000;
  *(undefined4 *)(this + 0x60) = 0x40400000;
  return;
}


/* PlantTigerstool::StaticNew() */

PlantTigerstool * PlantTigerstool::StaticNew(void)

{
  PlantTigerstool *this;
  
  this = ::operator_new(0x80);
  PlantTigerstool(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTigerstool::StaticClassInit() */

void PlantTigerstool::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PlantTigerstool");
    (*pcVar2)(plVar1,asStack_10,FUN_040118d8,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTigerstool::StaticGetClass() */

long * PlantTigerstool::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTigerstool",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTigerstool::GetClass() const */

long * PlantTigerstool::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTigerstool",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTigerstool::CheckSupercut() */

void __thiscall PlantTigerstool::CheckSupercut(PlantTigerstool *this)

{
  char cVar1;
  
  cVar1 = FUN_0401032c(*(undefined8 *)(this + 0x10));
  if (cVar1 != '\0') {
    *(int *)(this + 0x70) = *(int *)(this + 0x70) + 1;
  }
  return;
}


/* PlantTigerstool::~PlantTigerstool() */

void __thiscall PlantTigerstool::~PlantTigerstool(PlantTigerstool *this)

{
  *(undefined ***)this = &PTR_GetClass_067b55d0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantTigerstool::~PlantTigerstool() */

void __thiscall PlantTigerstool::~PlantTigerstool(PlantTigerstool *this)

{
  ~PlantTigerstool(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTigerstool::WouldKillTarget(GridItem*) */

void __thiscall PlantTigerstool::WouldKillTarget(PlantTigerstool *this,GridItem *param_1)

{
  int iVar1;
  long lVar2;
  Plant *this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar2 = FUN_0401038c(*(undefined8 *)(lVar2 + 0x70));
  this_00 = *(Plant **)(this + 0x10);
  fVar3 = (float)FUN_040102e4(*(undefined4 *)(this_00 + 0xf4),*(undefined4 *)(this_00 + 0x100),
                              *(undefined4 *)(this_00 + 0x104),*(undefined4 *)(this_00 + 0x3b8));
  fVar4 = (float)FUN_040102f4(*(undefined4 *)(this_00 + 0x3bc));
  iVar1 = *(int *)(lVar2 + 0x2c);
  fVar5 = (float)Plant::GetExtraDPSmodifier(this_00);
  fVar6 = (float)FUN_040102f8(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (*(code **)(*(long *)param_1 + 0x1d8) == GridItem::GetHitpoints) {
    fVar7 = (float)GridItem::GetHitpoints(param_1);
  }
  else {
    fVar7 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)fVar7 <= (int)(fVar3 * fVar4 * (float)iVar1 * fVar5 * fVar6));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTigerstool::MayUppercutTarget(GridItem*) */

void __thiscall PlantTigerstool::MayUppercutTarget(PlantTigerstool *this,GridItem *param_1)

{
  int iVar1;
  long lVar2;
  Plant *this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar2 = FUN_0401038c(*(undefined8 *)(lVar2 + 0x70));
  this_00 = *(Plant **)(this + 0x10);
  fVar3 = (float)FUN_040102e4(*(undefined4 *)(this_00 + 0xf4),*(undefined4 *)(this_00 + 0x100),
                              *(undefined4 *)(this_00 + 0x104),*(undefined4 *)(this_00 + 0x3b8));
  fVar4 = (float)FUN_040102f4(*(undefined4 *)(this_00 + 0x3bc));
  iVar1 = *(int *)(lVar2 + 0x2c);
  fVar5 = (float)Plant::GetExtraDPSmodifier(this_00);
  fVar6 = (float)FUN_040102f8(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (*(code **)(*(long *)param_1 + 0x1d8) == GridItem::GetHitpoints) {
    fVar7 = (float)GridItem::GetHitpoints(param_1);
  }
  else {
    fVar7 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)fVar7 <= (int)(fVar3 * fVar4 * (float)iVar1 * fVar5 * fVar6));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTigerstool::WouldKillTarget(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantTigerstool::WouldKillTarget(PlantTigerstool *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  int iVar1;
  long lVar2;
  Zombie *this_00;
  Plant *this_01;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar2 = FUN_0401038c(*(undefined8 *)(lVar2 + 0x70));
  this_01 = *(Plant **)(this + 0x10);
  fVar3 = (float)FUN_040102e4(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                              *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
  fVar4 = (float)FUN_040102f4(*(undefined4 *)(this_01 + 0x3bc));
  iVar1 = *(int *)(lVar2 + 0x2c);
  fVar5 = (float)Plant::GetExtraDPSmodifier(this_01);
  fVar6 = (float)FUN_040102f8(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  fVar7 = (float)Zombie::GetHitpointsUntilBleedout(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar7 <= (float)(int)(fVar3 * fVar4 * (float)iVar1 * fVar5 * fVar6));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTigerstool::GetZombieTarget(bool) */

void PlantTigerstool::GetZombieTarget(bool param_1)

{
  undefined1 in_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  *(undefined1 *)((ulong)param_1 + 0x4f) = in_w1;
  PlantFramework::FindTargetZombie(aRStack_10,(ulong)param_1,0);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTigerstool::Initialize() */

void __thiscall PlantTigerstool::Initialize(PlantTigerstool *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  RtObject *this_03;
  NewAvatarGeneralSkillBoost *pNVar4;
  long lVar5;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x4f] = (PlantTigerstool)0x0;
  lVar5 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar5 + 200) = 10;
  *(undefined4 *)(this + 100) = 0;
  this[0x6d] = (PlantTigerstool)0x0;
  this[0x6e] = (PlantTigerstool)0x0;
  this[0x50] = (PlantTigerstool)0x0;
  *(undefined4 *)(this + 0x70) = 0;
  this[0x74] = (PlantTigerstool)0x0;
  *(undefined4 *)(this + 0x78) = 0x3f800000;
  iVar3 = FUN_04010324(lVar5);
  if (iVar3 == 2) {
    *(undefined4 *)(this + 0x38) = 5;
    *(float *)(this + 0x40) = *(float *)(this + 0x40) + 0.25;
  }
  else if (2 < iVar3) {
    *(undefined4 *)(this + 0x38) = 6;
    *(float *)(this + 0x40) = *(float *)(this + 0x40) + 0.5;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  std::string::string(asStack_10,"tigerstool_new_avatar_1");
  iVar3 = NameMapperBase::GetIdForName(this_02,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = PlayerInfo::IsPlantNewAvatarUnLocked(this_01,iVar3);
  if (cVar1 != '\0') {
    NewAvatar::GetAvatarInfoByAvatarId(iVar3);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar2) {
      NewAvatar::GetAvatarInfoByAvatarId(iVar3);
      this_03 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      pNVar4 = Sexy::RtObject::Cast<NewAvatarGeneralSkillBoost>(this_03);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      if (pNVar4 != (NewAvatarGeneralSkillBoost *)0x0) {
        *(float *)(this + 0x78) = 1.0 - *(float *)(pNVar4 + 100);
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTigerstool::TossZombieByAttackUppercut(Zombie*) */

void __thiscall PlantTigerstool::TossZombieByAttackUppercut(PlantTigerstool *this,Zombie *param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  float *pfVar6;
  ProfileMgr *this_00;
  BoardTransforms *this_01;
  ZombieTosserSubSystem *pZVar7;
  uint uVar8;
  TPoint *pTVar9;
  Board *this_02;
  float fVar10;
  float fVar11;
  undefined4 local_80;
  undefined4 local_7c;
  TPoint<int> aTStack_78 [8];
  Point aPStack_70 [8];
  TPoint aTStack_68 [8];
  undefined4 local_60 [4];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  lVar5 = FUN_0401118c(local_80,local_7c);
  if (lVar5 == 0) {
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar11 = *pfVar6;
    fVar10 = pfVar6[1];
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_00);
    EATextSquish::Vec3::Vec3((Vec3 *)local_60,fVar11,fVar10,0.0);
    bVar2 = (**(code **)(*(long *)param_1 + 0x3f0))(param_1);
    this_01 = (BoardTransforms *)(ulong)bVar2;
    if (bVar2 == 0) {
      local_60[0] = NEON_fminnm(local_60[0],0x44480000);
    }
    else {
      uVar8 = (uint)DAT_06ae7f08 & 1;
      this_02 = *(Board **)(gLawnApp + 0x9f0);
      if (((DAT_06ae7f08 & 1) == 0) &&
         (this_01 = (BoardTransforms *)__cxa_guard_acquire(&DAT_06ae7f08), (int)this_01 != 0)) {
        Sexy::Point::Point((Point *)&DAT_06ae7fb0,uVar8,-1);
        Sexy::Point::Point((Point *)&DAT_06ae7fb8,uVar8,1);
        Sexy::Point::Point((Point *)&DAT_06ae7fc0,1,-1);
        Sexy::Point::Point((Point *)&DAT_06ae7fc8,1,1);
        this_01 = (BoardTransforms *)__cxa_guard_release(&DAT_06ae7f08);
      }
      bVar1 = false;
      pTVar9 = (TPoint *)&DAT_06ae7fb0;
      BoardTransforms::BoardSpaceToGrid(this_01,fVar11,fVar10);
      do {
        Sexy::TPoint<int>::operator+(aTStack_78,pTVar9);
        Sexy::Point::Point(aPStack_70,aTStack_68);
        cVar3 = Board::IsPitOfDoom(this_02,aPStack_70);
        if ((cVar3 != '\0') &&
           (((bVar4 = Sexy::RtObject::IsA<ZombiePirateSeagull>((RtObject *)param_1), bVar4 ||
             (bVar4 = Sexy::RtObject::IsA<ZombieSwashbuckler>((RtObject *)param_1), bVar4)) ||
            (bVar4 = Sexy::RtObject::IsA<ZombieImp>((RtObject *)param_1), bVar4)))) {
          bVar1 = true;
        }
        pTVar9 = pTVar9 + 8;
      } while (pTVar9 != (TPoint *)&sClass);
      local_60[0] = NEON_fminnm(local_60[0],0x44480000);
      if (bVar1) goto LAB_040112c0;
    }
    pZVar7 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
    ZombieTosserSubSystem::LaunchZombie
              ((ZombieTosserSubSystem *)0x43200000,0x3f000000,pZVar7,param_1,(Vec3 *)local_60,
               aRStack_50,0);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
LAB_040112c0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTigerstool::GetGridItemTarget(bool) */

void __thiscall PlantTigerstool::GetGridItemTarget(PlantTigerstool *this,bool param_1)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  long *extraout_x0;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114) + -1;
  }
  else {
    iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114) + 1;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,iVar1,
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  uVar5 = local_20;
  uVar3 = FUN_04010378(local_20,local_18);
  if (uVar3 == 0) {
    EntityFinder::GetEntitiesAtGridSquare
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,
               *(undefined4 *)(*(long *)(this + 0x10) + 0x114),
               *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
    uVar5 = local_20;
    uVar3 = FUN_04010378(local_20,local_18);
  }
  for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
    FUN_04010384(uVar5,uVar4);
    nop();
    cVar2 = (**(code **)(*extraout_x0 + 0x200))();
    if ((cVar2 != '\0') &&
       (cVar2 = (**(code **)(*extraout_x0 + 0x210))(extraout_x0,*(undefined8 *)(this + 0x10)),
       plVar6 = extraout_x0, cVar2 != '\0')) goto LAB_040115cc;
    uVar5 = local_20;
    uVar3 = FUN_04010378(local_20,local_18);
  }
  plVar6 = (long *)0x0;
LAB_040115cc:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6);
}


/* PlantTigerstool::StunZombies() */

void __thiscall PlantTigerstool::StunZombies(PlantTigerstool *this)

{
  int iVar1;
  int iVar2;
  TigerstoolSubsystem *this_00;
  
  iVar1 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  this_00 = Board::GetGameSubSystem<TigerstoolSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  TigerstoolSubsystem::StunZombies(this_00,iVar1 + 1,iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTigerstool::MayUppercutTarget(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantTigerstool::MayUppercutTarget(PlantTigerstool *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  Zombie *this_00;
  RtWeakPtrBase *this_01;
  string *psVar4;
  ulong uVar5;
  ulong uVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = DAT_06ae7fa8 & 1;
  if (((DAT_06ae7fa8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ae7fa8), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ae7ec0,"chicken");
    nop();
    __cxa_guard_release(&DAT_06ae7fa8);
    __cxa_atexit(FUN_04010180,uVar6,&DAT_06a88000);
  }
  if (((DAT_06ae7eb8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ae7eb8), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ae7f78,(string *)&DAT_06ae7ec0,
               (allocator *)&TigerstoolSubsystem::sClass);
    __cxa_guard_release(&DAT_06ae7eb8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ae7f78,
                 &DAT_06a88000);
  }
  uVar6 = 0;
  do {
    uVar5 = FUN_04010364(DAT_06ae7f78,DAT_06ae7f80);
    if (uVar5 <= uVar6) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)param_2);
      uVar2 = WouldKillTarget(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_04011f4c;
    }
    this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    this_01 = (RtWeakPtrBase *)Zombie::GetType(this_00);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    FUN_04010370(DAT_06ae7f78,uVar6);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_01,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar6 = uVar6 + 1;
  } while (cVar1 == '\0');
  uVar2 = 0;
LAB_04011f4c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTigerstool::FindTargetsAndPlayAttackAnim() */

void __thiscall PlantTigerstool::FindTargetsAndPlayAttackAnim(PlantTigerstool *this)

{
  char cVar1;
  undefined1 uVar2;
  GridItem *pGVar3;
  PlantAnimRig *pPVar4;
  long lVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  RtMixedPtrBase aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  *(int *)(this + 100) = *(int *)(this + 100) + 1;
  local_8 = ___stack_chk_guard;
  fVar7 = (float)PVZ_T();
  if (fVar7 - *(float *)(this + 0x68) <= 0.3) {
    uVar2 = 0;
    if (this[0x6c] == (PlantTigerstool)0x0) goto LAB_04012100;
  }
  else {
    this[0x6c] = (PlantTigerstool)0x1;
  }
  pGVar3 = (GridItem *)GetGridItemTarget(this,false);
  if (pGVar3 != (GridItem *)0x0) {
    MayUppercutTarget(this,pGVar3);
  }
  GetZombieTarget(SUB81(this,0));
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
  if (cVar1 == '\0') {
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
    if (cVar1 != '\0') {
LAB_0401213c:
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_60);
      MayUppercutTarget(this,aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      goto LAB_0401215c;
    }
    uVar2 = 0;
    if (pGVar3 != (GridItem *)0x0) goto LAB_0401215c;
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_60);
    MayUppercutTarget(this,aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
    if (cVar1 != '\0') goto LAB_0401213c;
LAB_0401215c:
    fVar8 = *(float *)(this + 0x34);
    fVar7 = (float)PVZ_T();
    if (fVar8 < fVar7) {
      lVar5 = *(long *)(this + 0x10);
      this[0x6d] = (PlantTigerstool)0x1;
      *(undefined4 *)(lVar5 + 200) = 0xb;
      uVar2 = 1;
      pPVar4 = (PlantAnimRig *)FUN_04011178(lVar5);
      pcVar6 = *(code **)(*(long *)pPVar4 + 600);
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      (*pcVar6)(pPVar4,3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      PlantAnimRig::SetState(pPVar4,0xe);
      fVar7 = (float)PVZ_T();
      *(float *)(this + 0x34) = fVar7 + *(float *)(this + 0x78) * 5.0;
    }
    else {
      uVar2 = 1;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
LAB_04012100:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantTigerstool::UpdateActions() */

void __thiscall PlantTigerstool::UpdateActions(PlantTigerstool *this)

{
  uint uVar1;
  char cVar2;
  PopAnimRig *this_00;
  long *plVar3;
  undefined4 uVar4;
  
  uVar1 = *(uint *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  if (uVar1 == 10) {
    this[0x44] = (PlantTigerstool)0x0;
    this[0x46] = (PlantTigerstool)0x0;
    cVar2 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
    if (cVar2 == '\0') {
      FindTargetsAndPlayAttackAnim(this);
      return;
    }
  }
  else if ((9 < uVar1) && (uVar1 < 0xd)) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar2 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar2 == '\0') {
      uVar4 = PVZ_T();
      this[0x6c] = (PlantTigerstool)0x0;
      *(undefined4 *)(this + 0x68) = uVar4;
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar3 + 0x118))();
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTigerstool::onStandaloneEffectFinishedCallback1(StandaloneEffect*) */

void PlantTigerstool::onStandaloneEffectFinishedCallback1(StandaloneEffect *param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  long lVar11;
  Effect_PopAnim *pEVar12;
  Effect_PopAnim *this;
  ResourceInfo *pRVar13;
  undefined8 *puVar14;
  Zombie *this_00;
  long *extraout_x0;
  time_t tVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  Plant *this_01;
  RtObject *this_02;
  code *pcVar19;
  RealObject *this_03;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  DamageInfo *pDVar26;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b0 [72];
  vector<bool,std::allocator<bool>> avStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar2 != '\0') {
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
    if (cVar2 != '\0') {
      p_Var20 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(param_1 + 0x10);
      pfVar10 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(p_Var20);
      fVar22 = *pfVar10;
      FUN_04010300((RtWeakPtr<Sexy::ResourceInfo> *)avStack_68,p_Var20);
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)avStack_68)
      ;
      fVar23 = *(float *)(lVar11 + 0x9c);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_68);
      p_Var20 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(param_1 + 0x10);
      lVar11 = std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var20);
      fVar21 = *(float *)(lVar11 + 4);
      fVar25 = *(float *)(lVar11 + 8);
      FUN_04010300((RtWeakPtr<Sexy::ResourceInfo> *)avStack_68,p_Var20);
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)avStack_68)
      ;
      fVar24 = *(float *)(lVar11 + 0xa0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_68);
      Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),0);
      pEVar12 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string((string *)local_c8,"POPANIM_EFFECTS_TIGERSTOOL_7");
      GetPAMByName((string *)local_c8);
      pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)avStack_68);
      Effect_PopAnim::CreatePopAnimRig(pEVar12,(PopAnim *)pRVar13,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_68);
      std::string::~string((string *)local_c8);
      nop();
      EATextSquish::Vec3::Vec3
                ((Vec3 *)avStack_68,(float)(int)(fVar22 - fVar23),
                 (float)(int)((fVar21 - fVar25) - fVar24),0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)pEVar12,(SexyVector3 *)avStack_68,-1);
      FUN_04010390(pEVar12 + 0x1c);
      std::string::string((string *)avStack_68,"c1");
      Effect_PopAnim::PlaySingleAnimation(pEVar12,(RtWeakPtr<Sexy::ResourceInfo> *)avStack_68,0);
      std::string::~string((string *)avStack_68);
      nop();
    }
    goto LAB_040126f8;
  }
  if ((*(int *)(param_1 + 0x28) != 0) && (param_1[0x4d] != (StandaloneEffect)0x0)) {
    param_1[0x4d] = (StandaloneEffect)0x0;
    Sexy::Insets::Insets
              ((Insets *)local_d8,*(int *)(*(long *)(param_1 + 0x10) + 0x114),
               *(int *)(*(long *)(param_1 + 0x10) + 0x110) + -1,4,3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_c8);
    uVar4 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_c8,uVar4,
               (Insets *)local_d8);
    Plant::GetProps();
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)avStack_68);
    lVar11 = FUN_0401038c(*(undefined8 *)(lVar11 + 0x70));
    this_01 = *(Plant **)(param_1 + 0x10);
    fVar23 = (float)FUN_040102e4(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                                 *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
    fVar24 = (float)FUN_040102f4(*(undefined4 *)(this_01 + 0x3bc));
    iVar16 = *(int *)(lVar11 + 0x2c);
    fVar21 = (float)Plant::GetExtraDPSmodifier(this_01);
    fVar22 = (float)FUN_040102f8(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x424));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_68);
    iVar17 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(param_1 + 0x10));
    pDVar26._0_4_ = (DamageInfo *)(float)(int)(fVar23 * fVar24 * (float)iVar16 * fVar21 * fVar22);
    iVar7 = SharkMinion::getRow(*(SharkMinion **)(param_1 + 0x10));
    iVar16 = iVar7 + -1;
    lVar11 = *(long *)(param_1 + 0x10);
    fVar23 = (float)FUN_040104a0(*(undefined4 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x1c),
                                 *(undefined4 *)(lVar11 + 0x20));
    local_108 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)local_c8);
    local_100 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)local_c8);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_108,(__normal_iterator *)&local_100),
          bVar3) {
      puVar14 = (undefined8 *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_108);
      this_02 = (RtObject *)*puVar14;
      cVar2 = RealObject::IsOnOpposingTeam(this_02,1);
      if (cVar2 != '\0') {
        this_00 = Sexy::RtObject::Cast<Zombie>(this_02);
        if (this_00 == (Zombie *)0x0) {
          nop();
          if (((extraout_x0 != (long *)0x0) &&
              (cVar2 = (**(code **)(*extraout_x0 + 0xb8))(), cVar2 != '\0')) &&
             (cVar2 = (**(code **)(*extraout_x0 + 0x200))(extraout_x0), cVar2 != '\0')) {
            pcVar19 = *(code **)(*extraout_x0 + 0x110);
            Sexy::Point::Point((Point *)local_f8,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)local_e8,1.0,0.0);
            DamageInfo::DamageInfo
                      (pDVar26._0_4_,local_e8._0_4_,local_e8._4_4_,
                       (RtWeakPtr<Sexy::ResourceInfo> *)avStack_68,(Point *)local_f8,0);
            (*pcVar19)(extraout_x0,(RtWeakPtr<Sexy::ResourceInfo> *)avStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)avStack_68);
          }
        }
        else {
          iVar5 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
          iVar6 = SharkMinion::getRow((SharkMinion *)this_00);
          fVar24 = (float)FUN_040104a0(*(undefined4 *)(this_00 + 0x18),
                                       *(undefined4 *)(this_00 + 0x1c),
                                       *(undefined4 *)(this_00 + 0x20));
          iVar8 = *(int *)(param_1 + 0x2c);
          bVar3 = fVar24 <= fVar23;
          if ((iVar8 != 1) || (bVar3)) {
            bVar1 = false;
          }
          else {
            cVar2 = Zombie::IsBoss(this_00);
            if (cVar2 == '\0') {
              if (iVar16 == iVar6) {
                iVar9 = BoardConstants::GRIDSQUARE_WIDTH();
                iVar8 = *(int *)(param_1 + 0x2c);
                bVar1 = fVar24 < (float)(iVar9 << 1) + fVar23;
              }
              else if (iVar6 == iVar7) {
                iVar8 = BoardConstants::GRIDSQUARE_WIDTH();
                if ((fVar24 <= (float)iVar8 + fVar23) ||
                   (iVar8 = BoardConstants::GRIDSQUARE_WIDTH(),
                   (float)(iVar8 * 3) + fVar23 <= fVar24)) goto LAB_04012ed4;
                iVar8 = *(int *)(param_1 + 0x2c);
                bVar1 = true;
              }
              else if (iVar7 + 1 == iVar6) {
                iVar9 = BoardConstants::GRIDSQUARE_WIDTH();
                iVar8 = *(int *)(param_1 + 0x2c);
                bVar1 = (float)(iVar9 << 1) + fVar23 < fVar24;
              }
              else {
LAB_04012ed4:
                iVar8 = *(int *)(param_1 + 0x2c);
                bVar1 = false;
              }
            }
            else {
              bVar1 = iVar7 < iVar6 || iVar5 != iVar17 + 3;
              if ((iVar16 == iVar6) && (iVar17 + 2 == iVar5)) goto LAB_04012ed4;
              iVar8 = *(int *)(param_1 + 0x2c);
            }
          }
          if (iVar8 == 2) {
            cVar2 = Zombie::IsBoss(this_00);
            if (cVar2 == '\0') {
              iVar8 = *(int *)(param_1 + 0x2c);
              if (iVar17 + 2 == iVar5) {
                bVar1 = true;
              }
            }
            else {
              iVar8 = *(int *)(param_1 + 0x2c);
              bVar1 = iVar5 != iVar17 + 3;
            }
          }
          if ((iVar8 != 3) || (bVar3)) {
LAB_04012aec:
            if (iVar8 == 4) {
LAB_04012e1c:
              cVar2 = Zombie::IsBoss(this_00);
              if (cVar2 == '\0') {
                if ((iVar6 != iVar7) || (bVar3)) goto LAB_04012af4;
              }
              else if (iVar16 == iVar6) goto LAB_04012a18;
            }
            else {
LAB_04012af4:
              if (!bVar1) goto LAB_04012a18;
            }
          }
          else {
            if ((iVar16 == iVar6) &&
               (iVar8 = BoardConstants::GRIDSQUARE_WIDTH(), (float)(iVar8 << 1) + fVar23 < fVar24))
            {
              bVar1 = true;
            }
            if (((iVar6 == iVar7) &&
                (iVar8 = BoardConstants::GRIDSQUARE_WIDTH(), (float)iVar8 + fVar23 < fVar24)) &&
               (iVar8 = BoardConstants::GRIDSQUARE_WIDTH(), fVar24 < (float)(iVar8 * 3) + fVar23)) {
              bVar1 = true;
            }
            if ((iVar7 + 1 != iVar6) ||
               (iVar8 = BoardConstants::GRIDSQUARE_WIDTH(), (float)(iVar8 << 1) + fVar23 <= fVar24))
            {
              iVar8 = *(int *)(param_1 + 0x2c);
              goto LAB_04012aec;
            }
            if (*(int *)(param_1 + 0x2c) == 4) {
              bVar1 = true;
              goto LAB_04012e1c;
            }
          }
          pcVar19 = *(code **)(*(long *)this_00 + 0x110);
          Sexy::Point::Point((Point *)local_f8,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)local_e8,1.0,0.0);
          DamageInfo::DamageInfo
                    (pDVar26._0_4_,local_e8._0_4_,local_e8._4_4_,
                     (RtWeakPtr<Sexy::ResourceInfo> *)avStack_68,(Point *)local_f8,0);
          (*pcVar19)(this_00,(RtWeakPtr<Sexy::ResourceInfo> *)avStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)avStack_68);
          if (param_1[0x47] != (StandaloneEffect)0x0) {
            Zombie::ApplyCondition((Zombie *)0x41200000,0,this_00,0x30,1);
            fVar24 = (float)FUN_0401034c(*(undefined4 *)(this_00 + 0x284));
            fVar21 = (float)FUN_04010350(*(undefined4 *)(this_00 + 0x2ac));
            Zombie::SetConditionTracker((fVar21 + fVar24) * 0.1,this_00,0x30);
          }
        }
      }
LAB_04012a18:
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_108);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_c8);
    goto LAB_040126f8;
  }
  param_1[0x47] = (StandaloneEffect)0x0;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x38)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    goto LAB_040126f8;
  }
  std::vector<bool,std::allocator<bool>>::vector(avStack_68);
  std::vector<bool,std::allocator<bool>>::push_back(avStack_68,false);
  std::vector<bool,std::allocator<bool>>::push_back(avStack_68,true);
  local_d8 = std::vector<bool,std::allocator<bool>>::begin();
  local_c8 = std::vector<bool,std::allocator<bool>>::end();
  std::random_shuffle<std::_Bit_iterator>
            (local_d8._0_8_,local_d8._8_8_,local_c8._0_8_,local_c8._8_8_);
  local_f8 = std::vector<bool,std::allocator<bool>>::begin();
  local_e8 = FUN_040103a0(local_f8._0_8_,local_f8._8_8_ & 0xffffffff);
  bVar3 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_e8);
  this_03 = *(RealObject **)(param_1 + 0x10);
  if (bVar3) {
    pcVar18 = "T3";
  }
  else {
    pcVar18 = "T4";
  }
  std::string::string((string *)local_e8,pcVar18);
  RealObject::PlayPositionalSound(this_03,(string *)local_e8,0.0);
  std::string::~string((string *)local_e8);
  nop();
  p_Var20 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(param_1 + 0x10);
  pfVar10 = (float *)std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost(p_Var20);
  fVar23 = *pfVar10;
  FUN_04010300((_Bit_reference *)local_e8,p_Var20);
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_e8);
  iVar16 = (int)(fVar23 - *(float *)(lVar11 + 0x9c));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_e8);
  p_Var20 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(param_1 + 0x10);
  lVar11 = std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(p_Var20);
  fVar23 = *(float *)(lVar11 + 4);
  fVar24 = *(float *)(lVar11 + 8);
  FUN_04010300((_Bit_reference *)local_e8,p_Var20);
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_e8);
  iVar17 = (int)((fVar23 - fVar24) - *(float *)(lVar11 + 0xa0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_e8);
  Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),0);
  pEVar12 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  if (param_1[0x47] == (StandaloneEffect)0x0) {
    pcVar18 = "POPANIM_EFFECTS_TIGERSTOOL_2";
  }
  else {
    pcVar18 = "POPANIM_EFFECTS_TIGERSTOOL_4";
  }
  std::string::string((string *)local_f8,pcVar18);
  GetPAMByName((string *)local_f8);
  pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_e8);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar13,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_e8);
  std::string::~string((string *)local_f8);
  nop();
  FUN_04010390(pEVar12 + 0x1c);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_100);
  std::string::string((string *)local_e8,"onStandaloneEffectFinishedCallback");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_b0,
             (string *)local_f8,(_Bit_reference *)local_e8);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)pEVar12,aRStack_b0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_b0);
  std::string::~string((string *)local_e8);
  nop();
  Sexy::RtId::~RtId((RtId *)local_f8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
  FUN_04010390(this + 0x1c);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_100);
  std::string::string((string *)local_e8,"onStandaloneEffectFinishedCallback");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_b0,
             (string *)local_f8,(_Bit_reference *)local_e8);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this,aRStack_b0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_b0);
  std::string::~string((string *)local_e8);
  nop();
  Sexy::RtId::~RtId((RtId *)local_f8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
  iVar7 = *(int *)(param_1 + 0x48);
  if (iVar7 != 0) {
    if (iVar7 == 1) {
      iVar7 = iVar16 + 0xa0;
LAB_04012fd4:
      EATextSquish::Vec3::Vec3((Vec3 *)local_e8,(float)iVar7,(float)(iVar17 + 0x14),0.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar12,(SexyVector3 *)local_e8,-1);
    }
    else {
      if (iVar7 == 2) {
        iVar7 = iVar16 + 0x96;
        goto LAB_04012fd4;
      }
      if ((iVar7 == 3) || (iVar7 == 4)) {
        iVar7 = iVar16 + 0x82;
        goto LAB_04012fd4;
      }
    }
    std::to_string<ActivityTypeID>((ActivityTypeID *)(param_1 + 0x48));
    std::operator+("d",(string *)local_e8);
    std::string::~string((string *)local_e8);
    Effect_PopAnim::PlaySingleAnimation(pEVar12,(string *)local_f8,0);
    param_1[0x4d] = (StandaloneEffect)0x1;
    std::string::~string((string *)local_f8);
  }
  iVar7 = *(int *)(param_1 + 0x28);
  if (iVar7 == 0) {
    EATextSquish::Vec3::Vec3((Vec3 *)local_e8,(float)(iVar16 + 0xa0),(float)(iVar17 + 10),0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_e8,-1);
    std::string::string((string *)local_e8,"t0");
    Effect_PopAnim::PlaySingleAnimation(this,(_Bit_reference *)local_e8,0);
    std::string::~string((string *)local_e8);
    nop();
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 1;
  }
  else if (iVar7 == 1) {
    EATextSquish::Vec3::Vec3((Vec3 *)local_e8,(float)(iVar16 + 0x96),(float)(iVar17 + 0x14),0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_e8,-1);
    std::string::string((string *)local_e8,"t1");
    Effect_PopAnim::PlaySingleAnimation(this,(_Bit_reference *)local_e8,0);
    std::string::~string((string *)local_e8);
    nop();
    std::to_string<ActivityTypeID>((ActivityTypeID *)(param_1 + 0x48));
    std::operator+("d",(string *)local_e8);
    std::string::~string((string *)local_e8);
    EATextSquish::Vec3::Vec3((Vec3 *)local_e8,(float)(iVar16 + 0x96),(float)(iVar17 + 0x14),0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar12,(SexyVector3 *)local_e8,-1);
    Effect_PopAnim::PlaySingleAnimation(pEVar12,(string *)local_f8,0);
    param_1[0x4d] = (StandaloneEffect)0x1;
    *(undefined4 *)(param_1 + 0x28) = 2;
    *(undefined4 *)(param_1 + 0x2c) = 2;
    *(undefined4 *)(param_1 + 0x48) = 1;
    std::string::~string((string *)local_f8);
  }
  else if (iVar7 == 2) {
    EATextSquish::Vec3::Vec3((Vec3 *)local_e8,(float)(iVar16 + 0x82),(float)(iVar17 + 0x14),0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_e8,-1);
    std::string::string((string *)local_e8,"t2");
    Effect_PopAnim::PlaySingleAnimation(this,(_Bit_reference *)local_e8,0);
    std::string::~string((string *)local_e8);
    nop();
    *(undefined4 *)(param_1 + 0x48) = 2;
    *(undefined4 *)(param_1 + 0x28) = 3;
    *(undefined4 *)(param_1 + 0x2c) = 3;
  }
  else if (iVar7 == 3) {
    EATextSquish::Vec3::Vec3((Vec3 *)local_e8,(float)(iVar16 + 0x82),(float)(iVar17 + 0x14),0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_e8,-1);
    std::string::string((string *)local_e8,"t3");
    Effect_PopAnim::PlaySingleAnimation(this,(_Bit_reference *)local_e8,0);
    std::string::~string((string *)local_e8);
    nop();
    *(undefined4 *)(param_1 + 0x48) = 3;
    *(undefined4 *)(param_1 + 0x28) = 4;
    *(undefined4 *)(param_1 + 0x2c) = 4;
  }
  else if (3 < iVar7) {
    tVar15 = time((time_t *)0x0);
    srand((uint)tVar15);
    iVar7 = rand();
    iVar7 = iVar7 % 4 + 1;
    *(int *)(param_1 + 0x2c) = iVar7;
    if (iVar7 == 1) {
      iVar16 = iVar16 + 0xa0;
LAB_04012e54:
      EATextSquish::Vec3::Vec3((Vec3 *)local_e8,(float)iVar16,(float)(iVar17 + 0x14),0.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_e8,-1);
    }
    else {
      if (iVar7 == 2) {
        iVar16 = iVar16 + 0x96;
        goto LAB_04012e54;
      }
      if ((iVar7 == 3) || (iVar7 == 4)) {
        iVar16 = iVar16 + 0x82;
        goto LAB_04012e54;
      }
    }
    std::to_string<ActivityTypeID>((ActivityTypeID *)(param_1 + 0x2c));
    std::operator+("t",(string *)local_e8);
    std::string::~string((string *)local_e8);
    Effect_PopAnim::PlaySingleAnimation(this,(string *)local_f8,0);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x2c);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    std::string::~string((string *)local_f8);
  }
  std::vector<bool,std::allocator<bool>>::~vector(avStack_68);
LAB_040126f8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTigerstool::DoSpecial(int) */

void PlantTigerstool::DoSpecial(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  Zombie *pZVar9;
  long *extraout_x0;
  undefined8 uVar10;
  undefined8 uVar11;
  int *piVar12;
  long *extraout_x0_00;
  float *pfVar13;
  Effect_PopAnim *pEVar14;
  ResourceInfo *pRVar15;
  long *extraout_x0_01;
  char *__s;
  RtObject *pRVar16;
  code *pcVar17;
  RealObject *pRVar18;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var19;
  Plant *pPVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ZombieConditionsStruct *pZVar26;
  float fVar25;
  DamageInfo *pDVar27;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  Point aPStack_e8 [8];
  undefined4 local_e0;
  undefined4 local_dc;
  Insets aIStack_d8 [16];
  undefined8 local_c8 [3];
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> aRStack_b0 [72];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  plVar6 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if ((*(float *)((long)plVar6 + 0x5c) == 0.0) ||
     (fVar21 = (float)PVZ_T(), *(float *)(plVar6 + 0xc) < fVar21 - *(float *)((long)plVar6 + 0x5c)))
  {
    *(undefined1 *)((long)plVar6 + 0x59) = 1;
  }
  cVar3 = (**(code **)(*plVar6 + 0x180))(plVar6);
  if (cVar3 == '\0') {
    p_Var19 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)plVar6[2];
    *(undefined4 *)(plVar6 + 5) = 0;
    *(undefined4 *)(plVar6 + 9) = 0xffffffff;
    pfVar13 = (float *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost(p_Var19);
    fVar24 = *pfVar13;
    FUN_04010300(aRStack_68,p_Var19);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    fVar21 = *(float *)(lVar7 + 0x9c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    p_Var19 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)plVar6[2];
    lVar7 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var19);
    fVar23 = *(float *)(lVar7 + 4);
    fVar25 = *(float *)(lVar7 + 8);
    FUN_04010300(aRStack_68,p_Var19);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    fVar22 = *(float *)(lVar7 + 0xa0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    Board::MakeRenderOrder(0x65130,*(undefined4 *)(plVar6[2] + 0x110),0);
    pEVar14 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)local_c8,"POPANIM_EFFECTS_TIGERSTOOL_6");
    GetPAMByName((string *)local_c8);
    pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
    Effect_PopAnim::CreatePopAnimRig(pEVar14,(PopAnim *)pRVar15,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    std::string::~string((string *)local_c8);
    nop();
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_68,(float)(int)(fVar24 - fVar21),
               (float)(int)((fVar23 - fVar25) - fVar22),0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar14,(SexyVector3 *)aRStack_68,-1);
    FUN_04010390(pEVar14 + 0x1c);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aIStack_d8);
    std::string::string((string *)aRStack_68,"onStandaloneEffectFinishedCallback");
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
              (aRStack_b0,(string *)local_c8,aRStack_68);
    StandaloneEffect::SetCompletionCallback((StandaloneEffect *)pEVar14,aRStack_b0);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_b0);
    std::string::~string((string *)aRStack_68);
    nop();
    Sexy::RtId::~RtId((RtId *)local_c8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_d8);
    std::string::string((string *)aRStack_68,"c1");
    Effect_PopAnim::PlaySingleAnimation(pEVar14,aRStack_68,0);
    std::string::~string((string *)aRStack_68);
    nop();
    pRVar18 = (RealObject *)plVar6[2];
    std::string::string((string *)aRStack_68,"T1");
    RealObject::PlayPositionalSound(pRVar18,(string *)aRStack_68,0.0);
    std::string::~string((string *)aRStack_68);
    nop();
    GetZombieTarget(SUB41(param_1,0));
    Sexy::Insets::Insets
              (aIStack_d8,*(int *)(plVar6[2] + 0x114),*(int *)(plVar6[2] + 0x110) + -1,3,3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_c8);
    EntityFinder::GetEntitiesInGridSquares((string *)local_c8,2,(RtMixedPtr *)aIStack_d8);
    local_f8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_c8);
    local_f0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_c8);
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_f8,(__normal_iterator *)&local_f0), bVar4)
    {
      puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f8)
      ;
      pRVar16 = (RtObject *)*puVar8;
      cVar3 = RealObject::IsOnOpposingTeam(pRVar16,1);
      if (cVar3 != '\0') {
        pZVar9 = Sexy::RtObject::Cast<Zombie>(pRVar16);
        if (pZVar9 == (Zombie *)0x0) {
          nop();
          if ((extraout_x0 != (long *)0x0) &&
             (cVar3 = (**(code **)(*extraout_x0 + 0xb8))(), cVar3 != '\0')) {
            (**(code **)(*extraout_x0 + 0x200))(extraout_x0);
          }
        }
        else {
                    /* WARNING: Load size is inaccurate */
          pZVar26._0_4_ = plVar6[8];
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_e0,(RtWeakPtrBase *)aPStack_e8);
          ZombieConditionsStruct::ZombieConditionsStruct
                    (pZVar26._0_4_,aRStack_68,2,(RtWeakPtr<Sexy::SoundResource> *)&local_e0);
          Zombie::ApplyCondition(pZVar9,(ZombieConditionsStruct *)aRStack_68);
          PVPZoneData::~PVPZoneData((PVPZoneData *)aRStack_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_e0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_e8);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f8);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_c8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_100);
    goto LAB_04013604;
  }
  if (*(char *)((long)plVar6 + 0x46) == '\0') {
    if (*(char *)((long)plVar6 + 0x44) == '\0') {
      p_Var19 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)plVar6[2];
      *(undefined4 *)(plVar6 + 6) = 0;
      *(undefined1 *)((long)plVar6 + 0x44) = 1;
      pfVar13 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(p_Var19);
      fVar24 = *pfVar13;
      FUN_04010300(aRStack_68,p_Var19);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      fVar21 = *(float *)(lVar7 + 0x9c);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      p_Var19 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)plVar6[2];
      lVar7 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(p_Var19);
      fVar23 = *(float *)(lVar7 + 4);
      fVar25 = *(float *)(lVar7 + 8);
      FUN_04010300(aRStack_68,p_Var19);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      fVar22 = *(float *)(lVar7 + 0xa0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      Board::MakeRenderOrder(0x65130,*(undefined4 *)(plVar6[2] + 0x110),0);
      pEVar14 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string((string *)local_c8,"POPANIM_EFFECTS_TIGERSTOOL_5");
      GetPAMByName((string *)local_c8);
      pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
      Effect_PopAnim::CreatePopAnimRig(pEVar14,(PopAnim *)pRVar15,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      std::string::~string((string *)local_c8);
      nop();
      EATextSquish::Vec3::Vec3
                ((Vec3 *)aRStack_68,(float)(int)(fVar24 - fVar21),
                 (float)(int)((fVar23 - fVar25) - fVar22),0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)pEVar14,(SexyVector3 *)aRStack_68,-1);
      cVar3 = Plant::GetAvatarEnable((Plant *)plVar6[2]);
      if (cVar3 != '\0') {
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aIStack_d8);
        std::string::string((string *)aRStack_68,"onStandaloneEffectFinishedCallback");
        RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                  (aRStack_b0,(string *)local_c8,aRStack_68);
        StandaloneEffect::SetCompletionCallback
                  ((StandaloneEffect *)pEVar14,
                   (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_b0);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_b0);
        std::string::~string((string *)aRStack_68);
        nop();
        Sexy::RtId::~RtId((RtId *)local_c8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_d8)
        ;
      }
      FUN_04010390(pEVar14 + 0x1c);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_68);
      local_c8[0]._0_4_ = 1;
      do {
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)aRStack_68,(int *)local_c8);
        local_c8[0]._0_4_ = (int)local_c8[0] + 1;
      } while ((int)local_c8[0] < 0x65);
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aRStack_68);
      uVar11 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_68);
      std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                (uVar10,uVar11);
      local_c8[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)aRStack_68);
      piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_c8);
      pRVar18 = (RealObject *)plVar6[2];
      if (*piVar12 == 1) {
        __s = "T2";
      }
      else {
        __s = "T1";
      }
      std::string::string((string *)local_c8,__s);
      RealObject::PlayPositionalSound(pRVar18,(string *)local_c8,0.0);
      std::string::~string((string *)local_c8);
      nop();
      std::string::string((string *)local_c8,"c1");
      Effect_PopAnim::PlaySingleAnimation(pEVar14,(string *)local_c8,0);
      std::string::~string((string *)local_c8);
      nop();
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aRStack_68);
      goto LAB_04013604;
    }
    if ((int)plVar6[6] != 0) {
      p_Var19 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)plVar6[2];
      *(undefined1 *)((long)plVar6 + 0x44) = 0;
      *(undefined1 *)((long)plVar6 + 0x46) = 1;
      pfVar13 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(p_Var19);
      fVar24 = *pfVar13;
      FUN_04010300(aRStack_68,p_Var19);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      fVar21 = *(float *)(lVar7 + 0x9c);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      p_Var19 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)plVar6[2];
      lVar7 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(p_Var19);
      fVar22 = *(float *)(lVar7 + 4);
      fVar25 = *(float *)(lVar7 + 8);
      FUN_04010300(aRStack_68,p_Var19);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      fVar23 = *(float *)(lVar7 + 0xa0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      Board::MakeRenderOrder(0x65130,*(undefined4 *)(plVar6[2] + 0x110),0);
      pEVar14 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string((string *)local_c8,"POPANIM_EFFECTS_TIGERSTOOL_3");
      GetPAMByName((string *)local_c8);
      pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
      Effect_PopAnim::CreatePopAnimRig(pEVar14,(PopAnim *)pRVar15,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      std::string::~string((string *)local_c8);
      nop();
      EATextSquish::Vec3::Vec3
                ((Vec3 *)aRStack_68,(float)((int)(fVar24 - fVar21) + 0x78),
                 (float)((int)((fVar22 - fVar25) - fVar23) + -10),0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)pEVar14,(SexyVector3 *)aRStack_68,-1);
      FUN_04010390(pEVar14 + 0x1c);
      std::string::string((string *)aRStack_68,"c3");
      Effect_PopAnim::PlaySingleAnimation(pEVar14,aRStack_68,0);
      std::string::~string((string *)aRStack_68);
      nop();
      goto LAB_04013604;
    }
    iVar1 = *(int *)(plVar6[2] + 0x114);
    iVar2 = *(int *)(plVar6[2] + 0x110);
    *(undefined4 *)(plVar6 + 6) = 1;
    Sexy::Insets::Insets(aIStack_d8,iVar1 + 1,iVar2 + -1,3,3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_c8);
    uVar5 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_c8,uVar5,
               aIStack_d8);
    Plant::GetProps();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    lVar7 = FUN_0401038c(*(undefined8 *)(lVar7 + 0x70));
    pPVar20 = (Plant *)plVar6[2];
    fVar21 = (float)FUN_040102e4(*(undefined4 *)(pPVar20 + 0xf4),*(undefined4 *)(pPVar20 + 0x100),
                                 *(undefined4 *)(pPVar20 + 0x104),*(undefined4 *)(pPVar20 + 0x3b8));
    fVar22 = (float)FUN_040102f4(*(undefined4 *)(pPVar20 + 0x3bc));
    iVar1 = *(int *)(lVar7 + 0x2c);
    fVar23 = (float)Plant::GetExtraDPSmodifier(pPVar20);
    fVar24 = (float)FUN_040102f8(*(undefined4 *)(plVar6[2] + 0x424));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    local_f8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_c8);
    pDVar27._0_4_ =
         (DamageInfo *)(float)(int)(fVar21 * fVar22 * (float)(iVar1 * 0x1e) * fVar23 * fVar24);
    local_f0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_c8);
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_f8,(__normal_iterator *)&local_f0), bVar4)
    {
      puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f8)
      ;
      pRVar16 = (RtObject *)*puVar8;
      cVar3 = RealObject::IsOnOpposingTeam(pRVar16,1);
      if (cVar3 != '\0') {
        pZVar9 = Sexy::RtObject::Cast<Zombie>(pRVar16);
        if (pZVar9 == (Zombie *)0x0) {
          nop();
          if (((extraout_x0_00 != (long *)0x0) &&
              (cVar3 = (**(code **)(*extraout_x0_00 + 0xb8))(), cVar3 != '\0')) &&
             (cVar3 = (**(code **)(*extraout_x0_00 + 0x200))(extraout_x0_00), cVar3 != '\0')) {
            pcVar17 = *(code **)(*extraout_x0_00 + 0x110);
            Sexy::Point::Point(aPStack_e8,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_e0,1.0,0.0);
            DamageInfo::DamageInfo(pDVar27._0_4_,local_e0,local_dc,aRStack_68,aPStack_e8,0);
            (*pcVar17)(extraout_x0_00,aRStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
          }
        }
        else {
          pcVar17 = *(code **)(*(long *)pZVar9 + 0x110);
          Sexy::Point::Point(aPStack_e8,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_e0,1.0,0.0);
          DamageInfo::DamageInfo(pDVar27._0_4_,local_e0,local_dc,aRStack_68,aPStack_e8,0);
          (*pcVar17)(pZVar9,aRStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f8);
    }
  }
  else {
    cVar3 = Plant::GetAvatarEnable((Plant *)plVar6[2]);
    if (cVar3 == '\0') goto LAB_04013604;
    Sexy::Insets::Insets
              (aIStack_d8,*(int *)(plVar6[2] + 0x114) + 1,*(int *)(plVar6[2] + 0x110) + -1,3,3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_c8);
    uVar5 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_c8,uVar5,
               aIStack_d8);
    Plant::GetProps();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    lVar7 = FUN_0401038c(*(undefined8 *)(lVar7 + 0x70));
    pPVar20 = (Plant *)plVar6[2];
    fVar21 = (float)FUN_040102e4(*(undefined4 *)(pPVar20 + 0xf4),*(undefined4 *)(pPVar20 + 0x100),
                                 *(undefined4 *)(pPVar20 + 0x104),*(undefined4 *)(pPVar20 + 0x3b8));
    fVar22 = (float)FUN_040102f4(*(undefined4 *)(pPVar20 + 0x3bc));
    iVar1 = *(int *)(lVar7 + 0x2c);
    fVar23 = (float)Plant::GetExtraDPSmodifier(pPVar20);
    fVar24 = (float)FUN_040102f8(*(undefined4 *)(plVar6[2] + 0x424));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    local_f8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_c8);
    pDVar27._0_4_ =
         (DamageInfo *)(float)(int)((float)iVar1 * 7.5 * fVar21 * fVar22 * fVar23 * fVar24);
    local_f0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_c8);
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_f8,(__normal_iterator *)&local_f0), bVar4)
    {
      puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f8)
      ;
      pRVar16 = (RtObject *)*puVar8;
      cVar3 = RealObject::IsOnOpposingTeam(pRVar16,1);
      if (cVar3 != '\0') {
        pZVar9 = Sexy::RtObject::Cast<Zombie>(pRVar16);
        if (pZVar9 == (Zombie *)0x0) {
          nop();
          if (((extraout_x0_01 != (long *)0x0) &&
              (cVar3 = (**(code **)(*extraout_x0_01 + 0xb8))(), cVar3 != '\0')) &&
             (cVar3 = (**(code **)(*extraout_x0_01 + 0x200))(extraout_x0_01), cVar3 != '\0')) {
            pcVar17 = *(code **)(*extraout_x0_01 + 0x110);
            Sexy::Point::Point(aPStack_e8,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_e0,1.0,0.0);
            DamageInfo::DamageInfo(pDVar27._0_4_,local_e0,local_dc,aRStack_68,aPStack_e8,0);
            (*pcVar17)(extraout_x0_01,aRStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
          }
        }
        else {
          pcVar17 = *(code **)(*(long *)pZVar9 + 0x110);
          Sexy::Point::Point(aPStack_e8,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_e0,1.0,0.0);
          DamageInfo::DamageInfo(pDVar27._0_4_,local_e0,local_dc,aRStack_68,aPStack_e8,0);
          (*pcVar17)(pZVar9,aRStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f8);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_c8);
LAB_04013604:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTigerstool::onStandaloneEffectFinishedCallback(StandaloneEffect*) */

void PlantTigerstool::onStandaloneEffectFinishedCallback(StandaloneEffect *param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  long lVar12;
  Effect_PopAnim *pEVar13;
  ResourceInfo *pRVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int *piVar17;
  undefined8 *puVar18;
  Zombie *this;
  long *extraout_x0;
  Effect_PopAnim *this_00;
  char *pcVar19;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var20;
  int iVar21;
  Plant *this_01;
  RtObject *this_02;
  code *pcVar22;
  int iVar23;
  RealObject *pRVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  DamageInfo *pDVar31;
  undefined1 auVar30 [16];
  string asStack_120 [8];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b0 [72];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar2 != '\0') {
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
    if (cVar2 != '\0') {
      p_Var20 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(param_1 + 0x10);
      pfVar11 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(p_Var20);
      fVar26 = *pfVar11;
      FUN_04010300(aRStack_68,p_Var20);
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      fVar27 = *(float *)(lVar12 + 0x9c);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      p_Var20 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(param_1 + 0x10);
      lVar12 = std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var20);
      fVar25 = *(float *)(lVar12 + 4);
      fVar29 = *(float *)(lVar12 + 8);
      FUN_04010300(aRStack_68,p_Var20);
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      fVar28 = *(float *)(lVar12 + 0xa0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),0);
      pEVar13 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string((string *)local_c8,"POPANIM_EFFECTS_TIGERSTOOL_7");
      GetPAMByName((string *)local_c8);
      pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
      Effect_PopAnim::CreatePopAnimRig(pEVar13,(PopAnim *)pRVar14,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      std::string::~string((string *)local_c8);
      nop();
      EATextSquish::Vec3::Vec3
                ((Vec3 *)aRStack_68,(float)(int)(fVar26 - fVar27),
                 (float)(int)((fVar25 - fVar29) - fVar28),0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)pEVar13,(SexyVector3 *)aRStack_68,-1);
      FUN_04010390(pEVar13 + 0x1c);
      std::string::string((string *)aRStack_68,"c1");
      Effect_PopAnim::PlaySingleAnimation(pEVar13,aRStack_68,0);
      std::string::~string((string *)aRStack_68);
      nop();
    }
    goto LAB_040146a4;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    Sexy::Insets::Insets
              ((Insets *)local_d8,*(int *)(*(long *)(param_1 + 0x10) + 0x114),
               *(int *)(*(long *)(param_1 + 0x10) + 0x110) + -1,4,3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_c8);
    uVar5 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_c8,uVar5,
               (Insets *)local_d8);
    Plant::GetProps();
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    lVar12 = FUN_0401038c(*(undefined8 *)(lVar12 + 0x70));
    this_01 = *(Plant **)(param_1 + 0x10);
    fVar27 = (float)FUN_040102e4(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                                 *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
    fVar28 = (float)FUN_040102f4(*(undefined4 *)(this_01 + 0x3bc));
    iVar21 = *(int *)(lVar12 + 0x2c);
    fVar25 = (float)Plant::GetExtraDPSmodifier(this_01);
    fVar26 = (float)FUN_040102f8(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x424));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    iVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(param_1 + 0x10));
    pDVar31._0_4_ = (DamageInfo *)(float)(int)(fVar27 * fVar28 * (float)iVar21 * fVar25 * fVar26);
    iVar6 = SharkMinion::getRow(*(SharkMinion **)(param_1 + 0x10));
    iVar23 = iVar6 + -1;
    lVar12 = *(long *)(param_1 + 0x10);
    iVar21 = iVar6 + 1;
    fVar27 = (float)FUN_040104a0(*(undefined4 *)(lVar12 + 0x18),*(undefined4 *)(lVar12 + 0x1c),
                                 *(undefined4 *)(lVar12 + 0x20));
    local_118._0_8_ =
         std::
         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
         ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)local_c8);
    local_108._0_8_ =
         std::
         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
         ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)local_c8);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_118,(__normal_iterator *)local_108), bVar3)
    {
      puVar18 = (undefined8 *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_118);
      this_02 = (RtObject *)*puVar18;
      cVar2 = RealObject::IsOnOpposingTeam(this_02,1);
      if (cVar2 != '\0') {
        this = Sexy::RtObject::Cast<Zombie>(this_02);
        if (this == (Zombie *)0x0) {
          nop();
          if (((extraout_x0 != (long *)0x0) &&
              (cVar2 = (**(code **)(*extraout_x0 + 0xb8))(), cVar2 != '\0')) &&
             (cVar2 = (**(code **)(*extraout_x0 + 0x200))(extraout_x0), cVar2 != '\0')) {
            pcVar22 = *(code **)(*extraout_x0 + 0x110);
            Sexy::Point::Point((Point *)local_f8,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)local_e8,1.0,0.0);
            DamageInfo::DamageInfo
                      (pDVar31._0_4_,local_e8._0_4_,local_e8._4_4_,aRStack_68,(Point *)local_f8,0);
            (*pcVar22)(extraout_x0,aRStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
          }
        }
        else {
          iVar7 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
          iVar8 = SharkMinion::getRow((SharkMinion *)this);
          fVar28 = (float)FUN_040104a0(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                       *(undefined4 *)(this + 0x20));
          iVar9 = *(int *)(param_1 + 0x2c);
          bVar3 = fVar27 < fVar28;
          if ((iVar9 == 1) && (bVar3)) {
            cVar2 = Zombie::IsBoss(this);
            if (cVar2 == '\0') {
              if (iVar23 == iVar8) {
                iVar10 = BoardConstants::GRIDSQUARE_WIDTH();
                iVar9 = *(int *)(param_1 + 0x2c);
                bVar1 = fVar28 < (float)(iVar10 << 1) + fVar27;
              }
              else if (iVar8 == iVar6) {
                iVar9 = BoardConstants::GRIDSQUARE_WIDTH();
                if ((fVar28 <= (float)iVar9 + fVar27) ||
                   (iVar9 = BoardConstants::GRIDSQUARE_WIDTH(),
                   (float)(iVar9 * 3) + fVar27 <= fVar28)) goto LAB_04014ed8;
                iVar9 = *(int *)(param_1 + 0x2c);
                bVar1 = true;
              }
              else if (iVar21 == iVar8) {
                iVar10 = BoardConstants::GRIDSQUARE_WIDTH();
                iVar9 = *(int *)(param_1 + 0x2c);
                bVar1 = (float)(iVar10 << 1) + fVar27 < fVar28;
              }
              else {
LAB_04014ed8:
                iVar9 = *(int *)(param_1 + 0x2c);
                bVar1 = false;
              }
            }
            else {
              bVar1 = iVar6 < iVar8 || iVar7 != iVar4 + 3;
              if ((iVar23 == iVar8) && (iVar4 + 2 == iVar7)) goto LAB_04014ed8;
              iVar9 = *(int *)(param_1 + 0x2c);
            }
          }
          else {
            bVar1 = false;
          }
          if (iVar9 == 2) {
            cVar2 = Zombie::IsBoss(this);
            if (cVar2 == '\0') {
              iVar9 = *(int *)(param_1 + 0x2c);
              if (iVar4 + 2 == iVar7) {
                bVar1 = true;
              }
            }
            else {
              iVar9 = *(int *)(param_1 + 0x2c);
              bVar1 = iVar7 != iVar4 + 3;
            }
          }
          if ((iVar9 == 3) && (bVar3)) {
            if ((iVar23 == iVar8) &&
               (iVar9 = BoardConstants::GRIDSQUARE_WIDTH(), (float)(iVar9 << 1) + fVar27 < fVar28))
            {
              bVar1 = true;
            }
            if (((iVar8 == iVar6) &&
                (iVar9 = BoardConstants::GRIDSQUARE_WIDTH(), (float)iVar9 + fVar27 < fVar28)) &&
               (iVar9 = BoardConstants::GRIDSQUARE_WIDTH(), fVar28 < (float)(iVar9 * 3) + fVar27)) {
              bVar1 = true;
            }
            if (iVar21 == iVar8) {
              iVar7 = BoardConstants::GRIDSQUARE_WIDTH();
              iVar9 = *(int *)(param_1 + 0x2c);
              if (fVar28 < (float)(iVar7 << 1) + fVar27) {
                bVar1 = true;
              }
            }
            else {
              iVar9 = *(int *)(param_1 + 0x2c);
            }
          }
          if ((iVar9 == 4) && (bVar3)) {
            if ((iVar23 == iVar8) &&
               (iVar9 = BoardConstants::GRIDSQUARE_WIDTH(), (float)(iVar9 << 1) + fVar27 < fVar28))
            {
              bVar1 = true;
            }
            if (((iVar8 == iVar6) &&
                (iVar9 = BoardConstants::GRIDSQUARE_WIDTH(), (float)iVar9 + fVar27 < fVar28)) &&
               (iVar9 = BoardConstants::GRIDSQUARE_WIDTH(), fVar28 < (float)(iVar9 * 3) + fVar27)) {
              bVar1 = true;
            }
            if ((iVar21 != iVar8) ||
               (iVar9 = BoardConstants::GRIDSQUARE_WIDTH(), (float)(iVar9 << 1) + fVar27 <= fVar28))
            {
              iVar9 = *(int *)(param_1 + 0x2c);
              goto LAB_04014ac0;
            }
            if (*(int *)(param_1 + 0x2c) == 0) {
              bVar1 = true;
              goto LAB_04014bd0;
            }
          }
          else {
LAB_04014ac0:
            if (iVar9 == 0) {
LAB_04014bd0:
              cVar2 = Zombie::IsBoss(this);
              if (cVar2 == '\0') {
                if ((iVar8 != iVar6) || (!bVar3)) goto LAB_04014ac4;
              }
              else if (iVar23 == iVar8) goto LAB_040149bc;
            }
            else {
LAB_04014ac4:
              if (!bVar1) goto LAB_040149bc;
            }
          }
          pcVar22 = *(code **)(*(long *)this + 0x110);
          Sexy::Point::Point((Point *)local_f8,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)local_e8,1.0,0.0);
          DamageInfo::DamageInfo
                    (pDVar31._0_4_,local_e8._0_4_,local_e8._4_4_,aRStack_68,(Point *)local_f8,0);
          (*pcVar22)(this,aRStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
          if (param_1[0x47] != (StandaloneEffect)0x0) {
            Zombie::ApplyCondition((Zombie *)0x41200000,0,this,0x30,1);
            fVar28 = (float)FUN_0401034c(*(undefined4 *)(this + 0x284));
            fVar25 = (float)FUN_04010350(*(undefined4 *)(this + 0x2ac));
            Zombie::SetConditionTracker((fVar25 + fVar28) * 0.1,this,0x30);
          }
        }
      }
LAB_040149bc:
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_118);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_c8);
  }
  p_Var20 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(param_1 + 0x10);
  pfVar11 = (float *)std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost(p_Var20);
  fVar27 = *pfVar11;
  FUN_04010300(aRStack_68,p_Var20);
  lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  iVar23 = (int)(fVar27 - *(float *)(lVar12 + 0x9c));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  p_Var20 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(param_1 + 0x10);
  lVar12 = std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(p_Var20);
  fVar27 = *(float *)(lVar12 + 4);
  fVar28 = *(float *)(lVar12 + 8);
  FUN_04010300(aRStack_68,p_Var20);
  lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  iVar21 = (int)((fVar27 - fVar28) - *(float *)(lVar12 + 0xa0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  if (*(int *)(param_1 + 0x48) != -1) {
    pEVar13 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    if (param_1[0x4c] == (StandaloneEffect)0x0) {
      pcVar19 = "POPANIM_EFFECTS_TIGERSTOOL_2";
    }
    else {
      pcVar19 = "POPANIM_EFFECTS_TIGERSTOOL_4";
    }
    std::string::string((string *)local_c8,pcVar19);
    GetPAMByName((string *)local_c8);
    pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
    Effect_PopAnim::CreatePopAnimRig(pEVar13,(PopAnim *)pRVar14,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    std::string::~string((string *)local_c8);
    nop();
    FUN_04010390(pEVar13 + 0x1c);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar4 = iVar23 + 0xa0;
      iVar6 = iVar21 + 10;
LAB_04014cbc:
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,(float)iVar4,(float)iVar6,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)pEVar13,(SexyVector3 *)aRStack_68,-1);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x48);
      if (iVar6 == 1) {
        iVar4 = iVar23 + 0x78;
        iVar6 = iVar21 + -10;
        goto LAB_04014cbc;
      }
      iVar4 = iVar23 + 0x8c;
      if ((iVar6 == 2) || (iVar4 = iVar23 + 0x6e, iVar6 == 3)) {
LAB_04014d7c:
        iVar6 = iVar21 + 0x14;
        goto LAB_04014cbc;
      }
      if (iVar6 == 4) {
        iVar4 = iVar23 + 0x78;
        goto LAB_04014d7c;
      }
    }
    std::to_string<ActivityTypeID>((ActivityTypeID *)(param_1 + 0x48));
    std::operator+("d",(string *)aRStack_68);
    std::string::~string((string *)aRStack_68);
    Effect_PopAnim::PlaySingleAnimation(pEVar13,(string *)local_108,0);
    std::vector<bool,std::allocator<bool>>::vector((vector<bool,std::allocator<bool>> *)aRStack_68);
    std::vector<bool,std::allocator<bool>>::push_back
              ((vector<bool,std::allocator<bool>> *)aRStack_68,false);
    std::vector<bool,std::allocator<bool>>::push_back
              ((vector<bool,std::allocator<bool>> *)aRStack_68,true);
    local_f8 = std::vector<bool,std::allocator<bool>>::begin();
    local_e8 = std::vector<bool,std::allocator<bool>>::end();
    std::random_shuffle<std::_Bit_iterator>
              (local_f8._0_8_,local_f8._8_8_,local_e8._0_8_,local_e8._8_8_);
    local_d8 = std::vector<bool,std::allocator<bool>>::begin();
    local_c8 = FUN_040103a0(local_d8._0_8_,local_d8._8_8_ & 0xffffffff);
    bVar3 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_c8);
    pRVar24 = *(RealObject **)(param_1 + 0x10);
    if (bVar3) {
      pcVar19 = "T3";
    }
    else {
      pcVar19 = "T4";
    }
    std::string::string((string *)local_c8,pcVar19);
    RealObject::PlayPositionalSound(pRVar24,(string *)local_c8,0.0);
    std::string::~string((string *)local_c8);
    nop();
    std::vector<bool,std::allocator<bool>>::~vector((vector<bool,std::allocator<bool>> *)aRStack_68)
    ;
    std::string::~string((string *)local_108);
  }
  param_1[0x47] = (StandaloneEffect)0x0;
  param_1[0x4c] = (StandaloneEffect)0x0;
  iVar4 = FUN_04010324(*(undefined8 *)(param_1 + 0x10));
  if (iVar4 == 5) {
    iVar4 = ThemeBalloonProjectile::myrandom();
    if (iVar4 < 6) {
      param_1[0x47] = (StandaloneEffect)0x1;
      param_1[0x4c] = (StandaloneEffect)0x1;
    }
  }
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x38)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  }
  else {
    Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),0);
    pEVar13 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    if (param_1[0x47] == (StandaloneEffect)0x0) {
      pcVar19 = "POPANIM_EFFECTS_TIGERSTOOL_2";
    }
    else {
      pcVar19 = "POPANIM_EFFECTS_TIGERSTOOL_4";
    }
    std::string::string((string *)local_c8,pcVar19);
    GetPAMByName((string *)local_c8);
    pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
    Effect_PopAnim::CreatePopAnimRig(pEVar13,(PopAnim *)pRVar14,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    std::string::~string((string *)local_c8);
    nop();
    FUN_04010390(pEVar13 + 0x1c);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)local_d8);
    std::string::string((string *)aRStack_68,"onStandaloneEffectFinishedCallback");
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_b0,
               (string *)local_c8,aRStack_68);
    StandaloneEffect::SetCompletionCallback((StandaloneEffect *)pEVar13,aRStack_b0);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_b0);
    std::string::~string((string *)aRStack_68);
    nop();
    Sexy::RtId::~RtId((RtId *)local_c8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_d8);
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 == 0) {
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,(float)(iVar23 + 0xa0),(float)(iVar21 + 10),0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)pEVar13,(SexyVector3 *)aRStack_68,-1);
      std::string::string((string *)aRStack_68,"t0");
      Effect_PopAnim::PlaySingleAnimation(pEVar13,aRStack_68,0);
      std::string::~string((string *)aRStack_68);
      nop();
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
    else if (iVar4 == 1) {
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      if (param_1[0x4c] == (StandaloneEffect)0x0) {
        pcVar19 = "POPANIM_EFFECTS_TIGERSTOOL_2";
      }
      else {
        pcVar19 = "POPANIM_EFFECTS_TIGERSTOOL_4";
      }
      std::string::string((string *)local_c8,pcVar19);
      GetPAMByName((string *)local_c8);
      pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar14,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      std::string::~string((string *)local_c8);
      nop();
      FUN_04010390(this_00 + 0x1c);
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,(float)(iVar23 + 0xa0),(float)(iVar21 + 10),0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_68,-1);
      std::to_string<ActivityTypeID>((ActivityTypeID *)(param_1 + 0x48));
      std::operator+("d",(string *)aRStack_68);
      std::string::~string((string *)aRStack_68);
      Effect_PopAnim::PlaySingleAnimation(this_00,asStack_120,0);
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,(float)(iVar23 + 0x78),(float)(iVar21 + -10),0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)pEVar13,(SexyVector3 *)aRStack_68,-1);
      std::string::string((string *)aRStack_68,"t1");
      Effect_PopAnim::PlaySingleAnimation(pEVar13,aRStack_68,0);
      std::string::~string((string *)aRStack_68);
      nop();
      std::vector<bool,std::allocator<bool>>::vector
                ((vector<bool,std::allocator<bool>> *)aRStack_68);
      std::vector<bool,std::allocator<bool>>::push_back
                ((vector<bool,std::allocator<bool>> *)aRStack_68,false);
      std::vector<bool,std::allocator<bool>>::push_back
                ((vector<bool,std::allocator<bool>> *)aRStack_68,true);
      auVar30 = std::vector<bool,std::allocator<bool>>::begin();
      local_d8 = auVar30;
      auVar30 = std::vector<bool,std::allocator<bool>>::end();
      local_c8 = auVar30;
      std::random_shuffle<std::_Bit_iterator>
                (local_d8._0_8_,local_d8._8_8_,auVar30._0_8_,auVar30._8_8_);
      local_118 = std::vector<bool,std::allocator<bool>>::begin();
      local_108 = FUN_040103a0(local_118._0_8_,local_118._8_8_ & 0xffffffff);
      bVar3 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_108);
      pRVar24 = *(RealObject **)(param_1 + 0x10);
      if (bVar3) {
        pcVar19 = "T3";
      }
      else {
        pcVar19 = "T4";
      }
      std::string::string((string *)local_108,pcVar19);
      RealObject::PlayPositionalSound(pRVar24,(string *)local_108,0.0);
      std::string::~string((string *)local_108);
      nop();
      *(undefined4 *)(param_1 + 0x2c) = 1;
      *(undefined4 *)(param_1 + 0x28) = 2;
      *(undefined4 *)(param_1 + 0x48) = 1;
      std::vector<bool,std::allocator<bool>>::~vector
                ((vector<bool,std::allocator<bool>> *)aRStack_68);
      std::string::~string(asStack_120);
    }
    else if (iVar4 == 2) {
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,(float)(iVar23 + 0x8c),(float)(iVar21 + 0x14),0.0)
      ;
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)pEVar13,(SexyVector3 *)aRStack_68,-1);
      std::string::string((string *)aRStack_68,"t2");
      Effect_PopAnim::PlaySingleAnimation(pEVar13,aRStack_68,0);
      std::string::~string((string *)aRStack_68);
      nop();
      *(undefined4 *)(param_1 + 0x2c) = 2;
      *(undefined4 *)(param_1 + 0x48) = 2;
      *(undefined4 *)(param_1 + 0x28) = 3;
    }
    else if (iVar4 == 3) {
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,(float)(iVar23 + 0x6e),(float)(iVar21 + 0x14),0.0)
      ;
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)pEVar13,(SexyVector3 *)aRStack_68,-1);
      std::string::string((string *)aRStack_68,"t3");
      Effect_PopAnim::PlaySingleAnimation(pEVar13,aRStack_68,0);
      std::string::~string((string *)aRStack_68);
      nop();
      *(undefined4 *)(param_1 + 0x2c) = 3;
      *(undefined4 *)(param_1 + 0x48) = 3;
      *(undefined4 *)(param_1 + 0x28) = 4;
    }
    else if (3 < iVar4) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_68);
      local_c8._0_8_ = local_c8._0_8_ & 0xffffffff00000000;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)aRStack_68,(int *)local_c8);
      local_c8._0_4_ = 1;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)aRStack_68,(int *)local_c8);
      local_c8._0_4_ = 2;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)aRStack_68,(int *)local_c8);
      local_c8._0_4_ = 3;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)aRStack_68,(int *)local_c8);
      local_c8._0_4_ = 4;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)aRStack_68,(int *)local_c8);
      uVar15 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aRStack_68);
      uVar16 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_68);
      std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                (uVar15,uVar16);
      local_c8._0_8_ =
           std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_68);
      piVar17 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_c8);
      iVar4 = *piVar17;
      *(int *)(param_1 + 0x2c) = iVar4;
      if (iVar4 == 0) {
        EATextSquish::Vec3::Vec3((Vec3 *)local_c8,(float)(iVar23 + 0xa0),(float)(iVar21 + 10),0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)pEVar13,(SexyVector3 *)local_c8,-1);
        iVar4 = *(int *)(param_1 + 0x2c);
      }
      if (iVar4 == 1) {
        EATextSquish::Vec3::Vec3((Vec3 *)local_c8,(float)(iVar23 + 0x78),(float)(iVar21 + -10),0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)pEVar13,(SexyVector3 *)local_c8,-1);
        iVar4 = *(int *)(param_1 + 0x2c);
      }
      if (iVar4 == 2) {
        EATextSquish::Vec3::Vec3((Vec3 *)local_c8,(float)(iVar23 + 0x8c),(float)(iVar21 + 0x14),0.0)
        ;
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)pEVar13,(SexyVector3 *)local_c8,-1);
        iVar4 = *(int *)(param_1 + 0x2c);
      }
      if (iVar4 == 3) {
        EATextSquish::Vec3::Vec3((Vec3 *)local_c8,(float)(iVar23 + 100),(float)(iVar21 + 0x14),0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)pEVar13,(SexyVector3 *)local_c8,-1);
        iVar4 = *(int *)(param_1 + 0x2c);
      }
      if (iVar4 == 4) {
        EATextSquish::Vec3::Vec3((Vec3 *)local_c8,(float)(iVar23 + 0x6e),(float)(iVar21 + 0x14),0.0)
        ;
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)pEVar13,(SexyVector3 *)local_c8,-1);
      }
      std::to_string<ActivityTypeID>((ActivityTypeID *)(param_1 + 0x2c));
      std::operator+("t",(string *)local_c8);
      std::string::~string((string *)local_c8);
      Effect_PopAnim::PlaySingleAnimation(pEVar13,(RtMixedPtr *)local_d8,0);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      std::string::~string((string *)local_d8);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aRStack_68);
    }
  }
LAB_040146a4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

