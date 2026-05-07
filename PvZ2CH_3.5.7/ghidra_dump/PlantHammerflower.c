// Class: PlantHammerflower


/* PlantHammerflower::Initialize() */

void __thiscall PlantHammerflower::Initialize(PlantHammerflower *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x29] = (PlantHammerflower)0x0;
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  *(undefined4 *)(this + 0x3c) = 0;
  this[0x45] = (PlantHammerflower)0x0;
  this[0x46] = (PlantHammerflower)0x0;
  this[0x2a] = (PlantHammerflower)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  this[0x4c] = (PlantHammerflower)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHammerflower::DoSpecialForAvatarNormal() */

void __thiscall PlantHammerflower::DoSpecialForAvatarNormal(PlantHammerflower *this)

{
  float fVar1;
  
  fVar1 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  this[0x2a] = (PlantHammerflower)(fVar1 < _FUN_03fff400);
  return;
}


/* PlantHammerflower::GetPlantAttackRect(PlantWeapon) */

int * PlantHammerflower::GetPlantAttackRect(int *param_1,long param_2,int param_3)

{
  int iVar1;
  char cVar2;
  
  PlantFramework::GetPlantAttackRect();
  if (param_3 == 0) {
    iVar1 = param_1[2];
    cVar2 = *(char *)(param_2 + 0x29);
    param_1[2] = (int)((float)iVar1 * 0.5);
    if (cVar2 == '\0') {
      *param_1 = *param_1 + (int)((float)iVar1 * 0.5);
    }
  }
  return param_1;
}


/* PlantHammerflower::PlantHammerflower() */

void __thiscall PlantHammerflower::PlantHammerflower(PlantHammerflower *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantHammerflower)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x30] = (PlantHammerflower)0x0;
  this[0x31] = (PlantHammerflower)0x1;
  this[0x44] = (PlantHammerflower)0x1;
  *(undefined ***)this = &PTR_GetClass_067b3570;
  *(undefined4 *)(this + 0x38) = 0x40400000;
  return;
}


/* PlantHammerflower::StaticNew() */

PlantHammerflower * PlantHammerflower::StaticNew(void)

{
  PlantHammerflower *this;
  
  this = ::operator_new(0x50);
  PlantHammerflower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHammerflower::StaticClassInit() */

void PlantHammerflower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantHammerflower");
    (*pcVar2)(plVar1,asStack_10,FUN_03fff9c4,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHammerflower::StaticGetClass() */

long * PlantHammerflower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantHammerflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHammerflower::GetClass() const */

long * PlantHammerflower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantHammerflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHammerflower::CheckSupercut() */

void __thiscall PlantHammerflower::CheckSupercut(PlantHammerflower *this)

{
  char cVar1;
  
  cVar1 = FUN_03fff58c(*(undefined8 *)(this + 0x10));
  if (cVar1 != '\0') {
    *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
  }
  return;
}


/* PlantHammerflower::~PlantHammerflower() */

void __thiscall PlantHammerflower::~PlantHammerflower(PlantHammerflower *this)

{
  *(undefined ***)this = &PTR_GetClass_067b3570;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantHammerflower::~PlantHammerflower() */

void __thiscall PlantHammerflower::~PlantHammerflower(PlantHammerflower *this)

{
  ~PlantHammerflower(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHammerflower::WouldKillTarget(GridItem*) */

void __thiscall PlantHammerflower::WouldKillTarget(PlantHammerflower *this,GridItem *param_1)

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
  lVar2 = FUN_03fff5e4(*(undefined8 *)(lVar2 + 0x70));
  this_00 = *(Plant **)(this + 0x10);
  fVar3 = (float)FUN_03fff544(*(undefined4 *)(this_00 + 0xf4),*(undefined4 *)(this_00 + 0x100),
                              *(undefined4 *)(this_00 + 0x104),*(undefined4 *)(this_00 + 0x3b8));
  fVar4 = (float)FUN_03fff554(*(undefined4 *)(this_00 + 0x3bc));
  iVar1 = *(int *)(lVar2 + 0x2c);
  fVar5 = (float)Plant::GetExtraDPSmodifier(this_00);
  fVar6 = (float)FUN_03fff558(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
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
/* PlantHammerflower::MayUppercutTarget(GridItem*) */

void __thiscall PlantHammerflower::MayUppercutTarget(PlantHammerflower *this,GridItem *param_1)

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
  lVar2 = FUN_03fff5e4(*(undefined8 *)(lVar2 + 0x70));
  this_00 = *(Plant **)(this + 0x10);
  fVar3 = (float)FUN_03fff544(*(undefined4 *)(this_00 + 0xf4),*(undefined4 *)(this_00 + 0x100),
                              *(undefined4 *)(this_00 + 0x104),*(undefined4 *)(this_00 + 0x3b8));
  fVar4 = (float)FUN_03fff554(*(undefined4 *)(this_00 + 0x3bc));
  iVar1 = *(int *)(lVar2 + 0x2c);
  fVar5 = (float)Plant::GetExtraDPSmodifier(this_00);
  fVar6 = (float)FUN_03fff558(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
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
/* PlantHammerflower::GetZombieTarget(bool) */

void PlantHammerflower::GetZombieTarget(bool param_1)

{
  undefined1 in_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  *(undefined1 *)((ulong)param_1 + 0x29) = in_w1;
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
/* PlantHammerflower::WouldKillTarget(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantHammerflower::WouldKillTarget(PlantHammerflower *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

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
  lVar2 = FUN_03fff5e4(*(undefined8 *)(lVar2 + 0x70));
  this_01 = *(Plant **)(this + 0x10);
  fVar3 = (float)FUN_03fff544(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                              *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
  fVar4 = (float)FUN_03fff554(*(undefined4 *)(this_01 + 0x3bc));
  iVar1 = *(int *)(lVar2 + 0x2c);
  fVar5 = (float)Plant::GetExtraDPSmodifier(this_01);
  fVar6 = (float)FUN_03fff558(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
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
/* PlantHammerflower::TossZombieByAttackUppercut(Zombie*) */

void __thiscall
PlantHammerflower::TossZombieByAttackUppercut(PlantHammerflower *this,Zombie *param_1)

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
  lVar5 = FUN_04000230(local_80,local_7c);
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
      uVar8 = (uint)DAT_06ae7a70 & 1;
      this_02 = *(Board **)(gLawnApp + 0x9f0);
      if (((DAT_06ae7a70 & 1) == 0) &&
         (this_01 = (BoardTransforms *)__cxa_guard_acquire(&DAT_06ae7a70), (int)this_01 != 0)) {
        Sexy::Point::Point((Point *)&DAT_06ae7a78,uVar8,-1);
        Sexy::Point::Point((Point *)&DAT_06ae7a80,uVar8,1);
        Sexy::Point::Point((Point *)&DAT_06ae7a88,1,-1);
        Sexy::Point::Point((Point *)&DAT_06ae7a90,1,1);
        this_01 = (BoardTransforms *)__cxa_guard_release(&DAT_06ae7a70);
      }
      bVar1 = false;
      pTVar9 = (TPoint *)&DAT_06ae7a78;
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
      } while (pTVar9 != (TPoint *)&DAT_06ae7a98);
      local_60[0] = NEON_fminnm(local_60[0],0x44480000);
      if (bVar1) goto LAB_04000364;
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
LAB_04000364:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHammerflower::GetGridItemTarget(bool) */

void __thiscall PlantHammerflower::GetGridItemTarget(PlantHammerflower *this,bool param_1)

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
  uVar3 = FUN_03fff5d0(local_20,local_18);
  if (uVar3 == 0) {
    EntityFinder::GetEntitiesAtGridSquare
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,
               *(undefined4 *)(*(long *)(this + 0x10) + 0x114),
               *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
    uVar5 = local_20;
    uVar3 = FUN_03fff5d0(local_20,local_18);
  }
  for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
    FUN_03fff5dc(uVar5,uVar4);
    nop();
    cVar2 = (**(code **)(*extraout_x0 + 0x200))();
    if ((cVar2 != '\0') &&
       (cVar2 = (**(code **)(*extraout_x0 + 0x210))(extraout_x0,*(undefined8 *)(this + 0x10)),
       plVar6 = extraout_x0, cVar2 != '\0')) goto LAB_04000674;
    uVar5 = local_20;
    uVar3 = FUN_03fff5d0(local_20,local_18);
  }
  plVar6 = (long *)0x0;
LAB_04000674:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6);
}


/* PlantHammerflower::StunZombies() */

void __thiscall PlantHammerflower::StunZombies(PlantHammerflower *this)

{
  int iVar1;
  int iVar2;
  HammerflowerSubsystem *this_00;
  
  iVar1 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  this_00 = Board::GetGameSubSystem<HammerflowerSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  HammerflowerSubsystem::StunZombies(this_00,iVar1 + 1,iVar2,*(Plant **)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHammerflower::DoSpecial(int) */

void PlantHammerflower::DoSpecial(int param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  PlantFramework *this;
  float *pfVar6;
  long lVar7;
  undefined8 *puVar8;
  Zombie *pZVar9;
  long *extraout_x0;
  Zombie *extraout_x0_00;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar10;
  SexyVector3 *pSVar11;
  int iVar12;
  char *__s;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var13;
  RealObject *pRVar14;
  int iVar15;
  Plant *pPVar16;
  RtObject *pRVar17;
  undefined8 uVar18;
  code *pcVar19;
  Zombie *pZVar25;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  code *local_108;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  Point aPStack_e8 [8];
  undefined4 local_e0;
  undefined4 local_dc;
  Insets aIStack_d8 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b0 [72];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  this = (PlantFramework *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if ((*(float *)(this + 0x34) == 0.0) ||
     (fVar20 = (float)PVZ_T(), *(float *)(this + 0x38) < fVar20 - *(float *)(this + 0x34))) {
    this[0x31] = (PlantFramework)0x1;
  }
  cVar3 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar3 == '\0') {
    GetZombieTarget(SUB41(param_1,0));
    Sexy::Insets::Insets
              (aIStack_d8,*(int *)(*(long *)(this + 0x10) + 0x114),
               *(int *)(*(long *)(this + 0x10) + 0x110),3,1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
    uVar5 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares(avStack_c8,uVar5,aIStack_d8);
    Plant::GetProps();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    lVar7 = FUN_03fff5e4(*(undefined8 *)(lVar7 + 0x70));
    pPVar16 = *(Plant **)(this + 0x10);
    fVar20 = (float)FUN_03fff544(*(undefined4 *)(pPVar16 + 0xf4),*(undefined4 *)(pPVar16 + 0x100),
                                 *(undefined4 *)(pPVar16 + 0x104),*(undefined4 *)(pPVar16 + 0x3b8));
    fVar21 = (float)FUN_03fff554(*(undefined4 *)(pPVar16 + 0x3bc));
    iVar12 = *(int *)(lVar7 + 0x2c);
    fVar22 = (float)Plant::GetExtraDPSmodifier(pPVar16);
    fVar23 = (float)FUN_03fff558(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
    iVar12 = (int)(fVar20 * fVar21 * (float)iVar12 * fVar22 * fVar23);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    if (this[0x30] != (PlantFramework)0x0) {
      iVar12 = (int)((double)iVar12 * 1.2);
    }
    bVar1 = false;
    iVar15 = FUN_03fff584(*(undefined8 *)(this + 0x10));
    bVar2 = iVar15 < 3;
    local_f8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_c8);
    local_f0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_c8);
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_f8,(__normal_iterator *)&local_f0), bVar4)
    {
      puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f8)
      ;
      pRVar17 = (RtObject *)*puVar8;
      cVar3 = RealObject::IsOnOpposingTeam(pRVar17,1);
      if (cVar3 != '\0') {
        pZVar9 = Sexy::RtObject::Cast<Zombie>(pRVar17);
        if (pZVar9 == (Zombie *)0x0) {
          nop();
          if (((extraout_x0 != (long *)0x0) &&
              (cVar3 = (**(code **)(*extraout_x0 + 0xb8))(), cVar3 != '\0')) &&
             (cVar3 = (**(code **)(*extraout_x0 + 0x200))(extraout_x0), cVar3 != '\0')) {
            uVar18 = *(undefined8 *)(this + 0x10);
            pcVar19 = *(code **)(*extraout_x0 + 0x110);
            Sexy::Point::Point(aPStack_e8,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_e0,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)(float)iVar12,local_e0,local_dc,aRStack_68,uVar18,aPStack_e8,0)
            ;
            (*pcVar19)(extraout_x0,aRStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
          }
        }
        else {
          uVar18 = *(undefined8 *)(this + 0x10);
          pcVar19 = *(code **)(*(long *)pZVar9 + 0x110);
          Sexy::Point::Point(aPStack_e8,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_e0,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)(float)iVar12,local_e0,local_dc,aRStack_68,uVar18,aPStack_e8,0);
          (*pcVar19)(pZVar9,aRStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
          uVar5 = operator|(1,8);
          cVar3 = Zombie::MatchesAny(pZVar9,uVar5);
          if (((cVar3 == '\0') &&
              (cVar3 = (**(code **)(*(long *)pZVar9 + 0xb8))(pZVar9,7), cVar3 != '\0')) &&
             ((cVar3 = Zombie::IsFlying(pZVar9), cVar3 == '\0' &&
              ((iVar15 = Zombie::GetSizeType(pZVar9), iVar15 != 2 &&
               (this[0x30] != (PlantFramework)0x0)))))) {
            fVar20 = (float)Zombie::getStuckIntoGroundHeight(pZVar9);
            if (fVar20 == 0.0) {
              pSVar11 = (SexyVector3 *)
                        std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)pZVar9);
              Zombie::StuckIntoGround_2(pZVar9,pSVar11,3.0,0.0,100.0,0.0,true);
            }
            else if (bVar2 < (fVar20 == 100.0)) {
              pSVar11 = (SexyVector3 *)
                        std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)pZVar9);
              Zombie::StuckIntoGround_2(pZVar9,pSVar11,6.0,0.0,80.0,0.0,true);
            }
            else if (bVar2 < (fVar20 == 80.0)) {
              pSVar11 = (SexyVector3 *)
                        std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)pZVar9);
              Zombie::StuckIntoGround_2(pZVar9,pSVar11,6.0,0.0,60.0,0.0,true);
            }
            else if (fVar20 == 60.0) {
              iVar15 = FUN_03fff584(*(undefined8 *)(this + 0x10));
              if ((iVar15 != 5) || (bVar2)) {
                if ((iVar15 != 5) && (!bVar2)) goto LAB_040011e0;
              }
              else if (this[0x31] == (PlantFramework)0x0) {
LAB_040011e0:
                pSVar11 = (SexyVector3 *)
                          std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)pZVar9);
                Zombie::StuckIntoGround_2(pZVar9,pSVar11,6.0,0.0,60.0,0.0,true);
              }
              else {
                bVar1 = true;
                (**(code **)(*(long *)pZVar9 + 0x48))(pZVar9);
              }
            }
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f8);
    }
    if (this[0x30] == (PlantFramework)0x0) {
      fVar20 = (float)PlantFramework::Rand(this,1.0);
      pRVar14 = *(RealObject **)(this + 0x10);
      if (0.5 < fVar20) {
        __s = "Play_Plant_Hammerflower_Stabbing02";
      }
      else {
        __s = "Play_Plant_Hammerflower_Stabbing";
      }
    }
    else {
      pRVar14 = *(RealObject **)(this + 0x10);
      __s = "Play_Plant_Hammerflower_Stabbing55";
    }
    std::string::string((string *)aRStack_68,__s);
    RealObject::PlayPositionalSound(pRVar14,(string *)aRStack_68,0.0);
    std::string::~string((string *)aRStack_68);
    nop();
    if (bVar1) {
      this[0x31] = (PlantFramework)0x0;
LAB_040013ec:
      fVar20 = (float)PVZ_T();
      uVar5 = 0x40c00000;
      if (30.0 <= fVar20 - *(float *)(this + 0x34)) {
        uVar5 = 0x40400000;
      }
      *(undefined4 *)(this + 0x38) = uVar5;
      uVar5 = PVZ_T();
      *(undefined4 *)(this + 0x34) = uVar5;
    }
  }
  else {
    p_Var13 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var13);
    fVar21 = *pfVar6;
    FUN_03fff560(aRStack_68,p_Var13);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    fVar22 = *(float *)(lVar7 + 0x9c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    p_Var13 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    lVar7 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var13);
    fVar20 = *(float *)(lVar7 + 4);
    fVar24 = *(float *)(lVar7 + 8);
    FUN_03fff560(aRStack_68,p_Var13);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    fVar23 = *(float *)(lVar7 + 0xa0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    uVar5 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
    if (this[0x28] == (PlantFramework)0x0) {
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string((string *)avStack_c8,"POPANIM_PLANT_HAMMERFLOWER_FIRE");
      GetPAMByName((string *)avStack_c8);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar10,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      std::string::~string((string *)avStack_c8);
      nop();
      EATextSquish::Vec3::Vec3
                ((Vec3 *)aRStack_68,(float)((int)(fVar21 - fVar22) + 0x82),
                 (float)(int)((fVar20 - fVar24) - fVar23),0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_68,-1);
      FUN_03fff538(this_00 + 0x1c,uVar5);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aIStack_d8);
      std::string::string((string *)aRStack_68,"onStandaloneEffectFinishedCallback");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_b0,
                 (string *)avStack_c8,aRStack_68);
      StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_b0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_b0);
      std::string::~string((string *)aRStack_68);
      nop();
      Sexy::RtId::~RtId((RtId *)avStack_c8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_d8);
      std::string::string((string *)aRStack_68,"plantfood");
      Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_68,0);
      std::string::~string((string *)aRStack_68);
      nop();
      this[0x28] = (PlantFramework)0x1;
      goto LAB_04001264;
    }
    this[0x28] = (PlantFramework)0x0;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_100);
    bVar2 = false;
    Sexy::Insets::Insets
              (aIStack_d8,*(int *)(*(long *)(this + 0x10) + 0x114) + 1,
               *(int *)(*(long *)(this + 0x10) + 0x110) + -1,3,3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
    uVar5 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares(avStack_c8,uVar5,aIStack_d8);
    Plant::GetProps();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    lVar7 = FUN_03fff5e4(*(undefined8 *)(lVar7 + 0x70));
    pPVar16 = *(Plant **)(this + 0x10);
    fVar20 = (float)FUN_03fff544(*(undefined4 *)(pPVar16 + 0xf4),*(undefined4 *)(pPVar16 + 0x100),
                                 *(undefined4 *)(pPVar16 + 0x104),*(undefined4 *)(pPVar16 + 0x3b8));
    fVar21 = (float)FUN_03fff554(*(undefined4 *)(pPVar16 + 0x3bc));
    iVar12 = *(int *)(lVar7 + 0x2c);
    fVar22 = (float)Plant::GetExtraDPSmodifier(pPVar16);
    fVar23 = (float)FUN_03fff558(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
    iVar15 = (int)(fVar20 * fVar21 * (float)iVar12 * fVar22 * fVar23);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    iVar12 = iVar15 * 3;
    if (cVar3 != '\0') {
      iVar12 = iVar15 * 5;
    }
    iVar15 = FUN_03fff584(*(undefined8 *)(this + 0x10));
    bVar1 = iVar15 < 3;
    local_f8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_c8);
    local_f0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_c8);
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_f8,(__normal_iterator *)&local_f0), bVar4)
    {
      puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f8)
      ;
      pRVar17 = (RtObject *)*puVar8;
      cVar3 = RealObject::IsOnOpposingTeam(pRVar17,1);
      if (cVar3 != '\0') {
        pZVar9 = Sexy::RtObject::Cast<Zombie>(pRVar17);
        if (pZVar9 == (Zombie *)0x0) {
          nop();
          if (((extraout_x0_00 == (Zombie *)0x0) ||
              (cVar3 = (**(code **)(*(long *)extraout_x0_00 + 0xb8))(), cVar3 == '\0')) ||
             (cVar3 = (**(code **)(*(long *)extraout_x0_00 + 0x200))(extraout_x0_00), cVar3 == '\0')
             ) goto LAB_04000e38;
          uVar18 = *(undefined8 *)(this + 0x10);
          local_108 = *(code **)(*(long *)extraout_x0_00 + 0x110);
          Sexy::Point::Point(aPStack_e8,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_e0,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)(float)iVar12,local_e0,local_dc,aRStack_68,uVar18,aPStack_e8,0);
          pZVar9 = extraout_x0_00;
        }
        else {
          uVar5 = operator|(1,8);
          cVar3 = Zombie::MatchesAny(pZVar9,uVar5);
          if (((cVar3 == '\0') &&
              (cVar3 = (**(code **)(*(long *)pZVar9 + 0xb8))(pZVar9,7), cVar3 != '\0')) &&
             ((cVar3 = Zombie::IsFlying(pZVar9), cVar3 == '\0' &&
              (iVar15 = Zombie::GetSizeType(pZVar9), iVar15 != 2)))) {
            fVar20 = (float)Zombie::getStuckIntoGroundHeight(pZVar9);
            if (fVar20 == 0.0) {
              pSVar11 = (SexyVector3 *)
                        std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)pZVar9);
              Zombie::StuckIntoGround_2(pZVar9,pSVar11,3.0,0.0,100.0,0.0,true);
              uVar18 = *(undefined8 *)(this + 0x10);
            }
            else if (bVar1 < (fVar20 == 100.0)) {
              pSVar11 = (SexyVector3 *)
                        std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)pZVar9);
              Zombie::StuckIntoGround_2(pZVar9,pSVar11,6.0,0.0,80.0,0.0,true);
              uVar18 = *(undefined8 *)(this + 0x10);
            }
            else if (bVar1 < (fVar20 == 80.0)) {
              pSVar11 = (SexyVector3 *)
                        std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)pZVar9);
              Zombie::StuckIntoGround_2(pZVar9,pSVar11,6.0,0.0,60.0,0.0,true);
              uVar18 = *(undefined8 *)(this + 0x10);
            }
            else {
              uVar18 = *(undefined8 *)(this + 0x10);
              if (fVar20 == 60.0) {
                iVar15 = FUN_03fff584(uVar18);
                if ((iVar15 != 5) || (bVar1)) {
                  if ((iVar15 != 5) && (!bVar1)) goto LAB_040016f8;
                }
                else if (this[0x31] == (PlantFramework)0x0) {
LAB_040016f8:
                  pSVar11 = (SexyVector3 *)
                            std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)pZVar9);
                  Zombie::StuckIntoGround_2(pZVar9,pSVar11,6.0,0.0,60.0,0.0,true);
                  uVar18 = *(undefined8 *)(this + 0x10);
                }
                else {
                  bVar2 = true;
                  (**(code **)(*(long *)pZVar9 + 0x48))(pZVar9);
                  uVar18 = *(undefined8 *)(this + 0x10);
                }
              }
            }
          }
          else {
            iVar15 = Zombie::GetSizeType(pZVar9);
            if (iVar15 == 2) {
              cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
              pZVar25._0_4_ = (Zombie *)0x40a00000;
              if (cVar3 == '\0') {
                pZVar25._0_4_ = (Zombie *)0x40400000;
              }
              Zombie::ApplyCondition(pZVar25._0_4_,0,pZVar9,2,1);
            }
            uVar18 = *(undefined8 *)(this + 0x10);
          }
          local_108 = *(code **)(*(long *)pZVar9 + 0x110);
          Sexy::Point::Point(aPStack_e8,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_e0,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)(float)iVar12,local_e0,local_dc,aRStack_68,uVar18,aPStack_e8,0);
        }
        (*local_108)(pZVar9,aRStack_68);
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      }
LAB_04000e38:
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f8);
    }
    pRVar14 = *(RealObject **)(this + 0x10);
    std::string::string((string *)aRStack_68,"Play_Plant_Hammerflower_Striking");
    RealObject::PlayPositionalSound(pRVar14,(string *)aRStack_68,0.0);
    std::string::~string((string *)aRStack_68);
    nop();
    if (bVar2) {
      this[0x31] = (PlantFramework)0x0;
      goto LAB_040013ec;
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_100);
LAB_04001264:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHammerflower::MayUppercutTarget(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantHammerflower::MayUppercutTarget(PlantHammerflower *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

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
  uVar6 = DAT_06ae7ae8 & 1;
  if (((DAT_06ae7ae8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ae7ae8), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ae79c8,"chicken");
    nop();
    __cxa_guard_release(&DAT_06ae7ae8);
    __cxa_atexit(FUN_03fff378,uVar6,&DAT_06a88000);
  }
  if (((DAT_06ae7960 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ae7960), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ae79d8,(string *)&DAT_06ae79c8,(allocator *)&DAT_06ae79d0);
    __cxa_guard_release(&DAT_06ae7960);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ae79d8,
                 &DAT_06a88000);
  }
  uVar6 = 0;
  do {
    uVar5 = FUN_03fff5bc(DAT_06ae79d8,DAT_06ae79e0);
    if (uVar5 <= uVar6) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)param_2);
      uVar2 = WouldKillTarget(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_040019e4;
    }
    this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    this_01 = (RtWeakPtrBase *)Zombie::GetType(this_00);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    FUN_03fff5c8(DAT_06ae79d8,uVar6);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_01,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar6 = uVar6 + 1;
  } while (cVar1 == '\0');
  uVar2 = 0;
LAB_040019e4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHammerflower::FindTargetsAndPlayAttackAnim() */

void __thiscall PlantHammerflower::FindTargetsAndPlayAttackAnim(PlantHammerflower *this)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  GridItem *pGVar5;
  PlantAnimRig *pPVar6;
  long lVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  RtMixedPtrBase aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 1;
  local_8 = ___stack_chk_guard;
  fVar9 = (float)PVZ_T();
  if (fVar9 - *(float *)(this + 0x40) <= 0.3) {
    uVar3 = 0;
    if (this[0x44] == (PlantHammerflower)0x0) goto LAB_04001b94;
  }
  else {
    this[0x44] = (PlantHammerflower)0x1;
  }
  pGVar5 = (GridItem *)GetGridItemTarget(this,false);
  if (pGVar5 != (GridItem *)0x0) {
    MayUppercutTarget(this,pGVar5);
  }
  GetZombieTarget(SUB81(this,0));
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
  if (cVar2 == '\0') {
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
    if (cVar2 == '\0') {
      if (pGVar5 == (GridItem *)0x0) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
        ;
        uVar3 = 0;
        goto LAB_04001b94;
      }
    }
    else {
LAB_04001bcc:
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_60);
      MayUppercutTarget(this,aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    }
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_60);
    MayUppercutTarget(this,aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
    if (cVar2 != '\0') goto LAB_04001bcc;
  }
  this[0x45] = (PlantHammerflower)0x1;
  iVar4 = FUN_03fff584(*(undefined8 *)(this + 0x10));
  if (iVar4 < 2) {
    fVar9 = 0.2;
  }
  else {
    fVar9 = 0.4;
  }
  fVar10 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  lVar7 = *(long *)(this + 0x10);
  this[0x30] = (PlantHammerflower)(fVar10 <= fVar9);
  *(undefined4 *)(lVar7 + 200) = 0xb;
  uVar1 = 3;
  if (fVar9 < fVar10) {
    uVar1 = 1;
  }
  pPVar6 = (PlantAnimRig *)FUN_0400021c(lVar7);
  pcVar8 = *(code **)(*(long *)pPVar6 + 600);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  (*pcVar8)(pPVar6,uVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  PlantAnimRig::SetState(pPVar6,0xe);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  uVar3 = 1;
LAB_04001b94:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PlantHammerflower::UpdateActions() */

void __thiscall PlantHammerflower::UpdateActions(PlantHammerflower *this)

{
  uint uVar1;
  char cVar2;
  PopAnimRig *this_00;
  long *plVar3;
  undefined4 uVar4;
  
  uVar1 = *(uint *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  if (uVar1 == 10) {
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
      this[0x44] = (PlantHammerflower)0x0;
      *(undefined4 *)(this + 0x40) = uVar4;
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar3 + 0x118))();
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
      return;
    }
  }
  return;
}

