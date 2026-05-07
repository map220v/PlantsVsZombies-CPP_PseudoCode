// Class: PlantBonkchoy


/* PlantBonkchoy::Initialize() */

void __thiscall PlantBonkchoy::Initialize(PlantBonkchoy *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x28] = (PlantBonkchoy)0x0;
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  *(undefined4 *)(this + 0x30) = 0;
  this[0x34] = (PlantBonkchoy)0x0;
  this[0x35] = (PlantBonkchoy)0x0;
  this[0x29] = (PlantBonkchoy)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x3c] = (PlantBonkchoy)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBonkchoy::DoSpecialForAvatarNormal() */

void __thiscall PlantBonkchoy::DoSpecialForAvatarNormal(PlantBonkchoy *this)

{
  float fVar1;
  
  fVar1 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  this[0x29] = (PlantBonkchoy)(fVar1 < _FUN_03ffc400);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBonkchoy::StaticClassInit() */

void PlantBonkchoy::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBonkchoy");
    (*pcVar2)(plVar1,asStack_10,FUN_03ffe048,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBonkchoy::StaticGetClass() */

long * PlantBonkchoy::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantBonkchoy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBonkchoy::GetClass() const */

long * PlantBonkchoy::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantBonkchoy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBonkchoy::CheckSupercut() */

void __thiscall PlantBonkchoy::CheckSupercut(PlantBonkchoy *this)

{
  char cVar1;
  
  cVar1 = FUN_03ffc58c(*(undefined8 *)(this + 0x10));
  if (cVar1 != '\0') {
    *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBonkchoy::WouldKillTarget(GridItem*) */

void __thiscall PlantBonkchoy::WouldKillTarget(PlantBonkchoy *this,GridItem *param_1)

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
  lVar2 = FUN_03ffc5f0(*(undefined8 *)(lVar2 + 0x70),0);
  this_00 = *(Plant **)(this + 0x10);
  fVar3 = (float)FUN_03ffc568(*(undefined4 *)(this_00 + 0xf4),*(undefined4 *)(this_00 + 0x100),
                              *(undefined4 *)(this_00 + 0x104),*(undefined4 *)(this_00 + 0x3b8));
  fVar4 = (float)FUN_03ffc578(*(undefined4 *)(this_00 + 0x3bc));
  iVar1 = *(int *)(lVar2 + 0x2c);
  fVar5 = (float)Plant::GetExtraDPSmodifier(this_00);
  fVar6 = (float)FUN_03ffc57c(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
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
/* PlantBonkchoy::MayUppercutTarget(GridItem*) */

void __thiscall PlantBonkchoy::MayUppercutTarget(PlantBonkchoy *this,GridItem *param_1)

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
  lVar2 = FUN_03ffc5f0(*(undefined8 *)(lVar2 + 0x70),0);
  this_00 = *(Plant **)(this + 0x10);
  fVar3 = (float)FUN_03ffc568(*(undefined4 *)(this_00 + 0xf4),*(undefined4 *)(this_00 + 0x100),
                              *(undefined4 *)(this_00 + 0x104),*(undefined4 *)(this_00 + 0x3b8));
  fVar4 = (float)FUN_03ffc578(*(undefined4 *)(this_00 + 0x3bc));
  iVar1 = *(int *)(lVar2 + 0x2c);
  fVar5 = (float)Plant::GetExtraDPSmodifier(this_00);
  fVar6 = (float)FUN_03ffc57c(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
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
/* PlantBonkchoy::WouldKillTarget(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantBonkchoy::WouldKillTarget(PlantBonkchoy *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

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
  lVar2 = FUN_03ffc5f0(*(undefined8 *)(lVar2 + 0x70),0);
  this_01 = *(Plant **)(this + 0x10);
  fVar3 = (float)FUN_03ffc568(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                              *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
  fVar4 = (float)FUN_03ffc578(*(undefined4 *)(this_01 + 0x3bc));
  iVar1 = *(int *)(lVar2 + 0x2c);
  fVar5 = (float)Plant::GetExtraDPSmodifier(this_01);
  fVar6 = (float)FUN_03ffc57c(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  fVar7 = (float)Zombie::GetHitpointsUntilBleedout(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar7 <= (float)(int)(fVar3 * fVar4 * (float)iVar1 * fVar5 * fVar6));
}


/* PlantBonkchoy::PlantBonkchoy() */

void __thiscall PlantBonkchoy::PlantBonkchoy(PlantBonkchoy *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067b2f90;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* PlantBonkchoy::StaticNew() */

PlantBonkchoy * PlantBonkchoy::StaticNew(void)

{
  PlantBonkchoy *this;
  
  this = ::operator_new(0x58);
  PlantBonkchoy(this);
  return this;
}


/* PlantBonkchoy::ApplyPlantfood() */

void __thiscall PlantBonkchoy::ApplyPlantfood(PlantBonkchoy *this)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xf;
  fVar2 = (float)PVZ_T();
  plVar1 = (long *)FUN_03ffd1d8(*(undefined8 *)(this + 0x10));
  fVar3 = (float)(**(code **)(*plVar1 + 0x1b8))(plVar1,0);
  this[0x35] = (PlantBonkchoy)0x1;
  *(float *)(this + 0x2c) = fVar3 + fVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBonkchoy::TossZombieByAttackUppercut(Zombie*) */

void __thiscall PlantBonkchoy::TossZombieByAttackUppercut(PlantBonkchoy *this,Zombie *param_1)

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
  lVar5 = FUN_03ffd250(local_80,local_7c);
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
      uVar8 = (uint)DAT_06ae7820 & 1;
      this_02 = *(Board **)(gLawnApp + 0x9f0);
      if (((DAT_06ae7820 & 1) == 0) &&
         (this_01 = (BoardTransforms *)__cxa_guard_acquire(&DAT_06ae7820), (int)this_01 != 0)) {
        Sexy::Point::Point((Point *)&DAT_06ae7848,uVar8,-1);
        Sexy::Point::Point((Point *)&DAT_06ae7850,uVar8,1);
        Sexy::Point::Point((Point *)&DAT_06ae7858,1,-1);
        Sexy::Point::Point((Point *)&DAT_06ae7860,1,1);
        this_01 = (BoardTransforms *)__cxa_guard_release(&DAT_06ae7820);
      }
      bVar1 = false;
      pTVar9 = (TPoint *)&DAT_06ae7848;
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
      } while (pTVar9 != (TPoint *)&DAT_06ae7868);
      local_60[0] = NEON_fminnm(local_60[0],0x44480000);
      if (bVar1) goto LAB_03ffd384;
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
LAB_03ffd384:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBonkchoy::GetGridItemTarget(bool) */

void __thiscall PlantBonkchoy::GetGridItemTarget(PlantBonkchoy *this,bool param_1)

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
  uVar3 = FUN_03ffc600(local_20,local_18);
  if (uVar3 == 0) {
    EntityFinder::GetEntitiesAtGridSquare
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,
               *(undefined4 *)(*(long *)(this + 0x10) + 0x114),
               *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
    uVar5 = local_20;
    uVar3 = FUN_03ffc600(local_20,local_18);
  }
  for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
    FUN_03ffc60c(uVar5,uVar4);
    nop();
    cVar2 = (**(code **)(*extraout_x0 + 0x200))();
    if ((cVar2 != '\0') &&
       (cVar2 = (**(code **)(*extraout_x0 + 0x210))(extraout_x0,*(undefined8 *)(this + 0x10)),
       plVar6 = extraout_x0, cVar2 != '\0')) goto LAB_03ffd694;
    uVar5 = local_20;
    uVar3 = FUN_03ffc600(local_20,local_18);
  }
  plVar6 = (long *)0x0;
LAB_03ffd694:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6);
}


/* PlantBonkchoy::StunZombies() */

void __thiscall PlantBonkchoy::StunZombies(PlantBonkchoy *this)

{
  int iVar1;
  int iVar2;
  BonkchoySubsystem *this_00;
  
  iVar1 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  this_00 = Board::GetGameSubSystem<BonkchoySubsystem>(*(Board **)(gLawnApp + 0x9f0));
  TigerstoolSubsystem::StunZombies((TigerstoolSubsystem *)this_00,iVar1 + 1,iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBonkchoy::DoSpecial(int) */

void PlantBonkchoy::DoSpecial(int param_1)

{
  PlantTigerstool PVar1;
  char cVar2;
  int iVar3;
  PlantTigerstool *this;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  BoardEntity *this_00;
  GridItem *pGVar8;
  Zombie *this_01;
  ResourceInfo *pRVar9;
  char *__s;
  int iVar10;
  Plant *this_02;
  RealObject *this_03;
  bool bVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  DamageInfo *pDVar17;
  RtMixedPtrBase aRStack_80 [8];
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  this = (PlantTigerstool *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if ((*(int *)(*(long *)(this + 0x10) + 200) == 0xc) ||
     (bVar11 = false, *(int *)(*(long *)(this + 0x10) + 200) == 0xe)) {
    PVar1 = this[0x3c];
    bVar11 = true;
  }
  else {
    PVar1 = this[0x3c];
  }
  if ((PVar1 != (PlantTigerstool)0x0) &&
     (cVar2 = PlantTigerstool::CanStunZombies(this), cVar2 != '\0')) {
    StunZombies((PlantBonkchoy *)this);
    this[0x3c] = (PlantTigerstool)0x0;
  }
  PlantTurnip::GetZombieTarget(SUB41(param_1,0));
  Plant::GetProps();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  lVar4 = FUN_03ffc5f0(*(undefined8 *)(lVar4 + 0x70),0);
  this_02 = *(Plant **)(this + 0x10);
  fVar13 = (float)FUN_03ffc568(*(undefined4 *)(this_02 + 0xf4),*(undefined4 *)(this_02 + 0x100),
                               *(undefined4 *)(this_02 + 0x104),*(undefined4 *)(this_02 + 0x3b8));
  fVar14 = (float)FUN_03ffc578(*(undefined4 *)(this_02 + 0x3bc));
  iVar10 = *(int *)(lVar4 + 0x2c);
  fVar15 = (float)Plant::GetExtraDPSmodifier(this_02);
  fVar16 = (float)FUN_03ffc57c(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  iVar10 = (int)(fVar13 * fVar14 * (float)iVar10 * fVar15 * fVar16);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_80);
  if (cVar2 == '\0') {
    pGVar8 = (GridItem *)GetGridItemTarget((PlantBonkchoy *)this,bVar11);
    if (pGVar8 != (GridItem *)0x0) {
      cVar2 = WouldKillTarget((PlantBonkchoy *)this,pGVar8);
      pcVar6 = *(code **)(*(long *)pGVar8 + 0x110);
      if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
        uVar7 = PlantFramework::GetDamageFlags();
      }
      else {
        uVar7 = (**(code **)(*(long *)this + 0x198))(this,0);
      }
      uVar12 = *(undefined8 *)(this + 0x10);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)(float)iVar10,local_70,local_6c,aRStack_68,uVar7,uVar12,aPStack_78,0)
      ;
      (*pcVar6)(pGVar8,aRStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      goto LAB_03ffdde0;
    }
  }
  else {
    if (this[0x34] != (PlantTigerstool)0x0) {
      this[0x34] = (PlantTigerstool)0x0;
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      cVar2 = (**(code **)(*plVar5 + 0x3f0))();
      if (cVar2 != '\0') {
        this_01 = (Zombie *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
        iVar3 = Zombie::getZombieStateSerialization(this_01);
        if (iVar3 != 0x14) {
          pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_80);
          TossZombieByAttackUppercut((PlantBonkchoy *)this,(Zombie *)pRVar9);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)aRStack_80);
    cVar2 = WouldKillTarget((PlantBonkchoy *)this,aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    pDVar17._0_4_ = (DamageInfo *)(float)iVar10;
    if (cVar2 != '\0') {
      pDVar17._0_4_ = (DamageInfo *)0x44fa0000;
    }
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    pcVar6 = *(code **)(*plVar5 + 0x110);
    if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
      uVar7 = PlantFramework::GetDamageFlags();
    }
    else {
      uVar7 = (**(code **)(*(long *)this + 0x198))(this,0);
    }
    this_00 = (BoardEntity *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    iVar10 = BoardEntity::CalcColumnPosition(this_00);
    lVar4 = *(long *)(this + 0x10);
    Sexy::Point::Point(aPStack_78,iVar10,*(int *)(lVar4 + 0x110));
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo(pDVar17._0_4_,local_70,local_6c,aRStack_68,uVar7,lVar4,aPStack_78,0);
    (*pcVar6)(plVar5,aRStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
LAB_03ffdde0:
    if (cVar2 != '\0') {
      this_03 = *(RealObject **)(this + 0x10);
      __s = "Play_Plant_BonkChoy_Impact_Final";
      goto LAB_03ffddf8;
    }
  }
  this_03 = *(RealObject **)(this + 0x10);
  __s = "Play_Bonk";
LAB_03ffddf8:
  std::string::string((string *)aRStack_68,__s);
  RealObject::PlayPositionalSound(this_03,(string *)aRStack_68,0.0);
  std::string::~string((string *)aRStack_68);
  nop();
  if (*(int *)(*(long *)(this + 0x10) + 200) == 0xd) {
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xe;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBonkchoy::~PlantBonkchoy() */

void __thiscall PlantBonkchoy::~PlantBonkchoy(PlantBonkchoy *this)

{
  *(undefined ***)this = &PTR_GetClass_067b2f90;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBonkchoy::~PlantBonkchoy() */

void __thiscall PlantBonkchoy::~PlantBonkchoy(PlantBonkchoy *this)

{
  ~PlantBonkchoy(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBonkchoy::MayUppercutTarget(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantBonkchoy::MayUppercutTarget(PlantBonkchoy *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

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
  uVar6 = DAT_06ae78f8 & 1;
  if (((DAT_06ae78f8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ae78f8), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ae7828,"chicken");
    nop();
    __cxa_guard_release(&DAT_06ae78f8);
    __cxa_atexit(FUN_03ffc32c,uVar6,&DAT_06a88000);
  }
  if (((DAT_06ae7948 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ae7948), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ae7868,(string *)&DAT_06ae7828,(allocator *)&DAT_06ae7830);
    __cxa_guard_release(&DAT_06ae7948);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ae7868,
                 &DAT_06a88000);
  }
  uVar6 = 0;
  do {
    uVar5 = FUN_03ffc614(DAT_06ae7868,DAT_06ae7870);
    if (uVar5 <= uVar6) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)param_2);
      uVar2 = WouldKillTarget(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_03ffe5b0;
    }
    this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    this_01 = (RtWeakPtrBase *)Zombie::GetType(this_00);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    FUN_03ffc620(DAT_06ae7868,uVar6);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_01,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar6 = uVar6 + 1;
  } while (cVar1 == '\0');
  uVar2 = 0;
LAB_03ffe5b0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBonkchoy::FindTargetsAndPlayAttackAnim() */

void __thiscall PlantBonkchoy::FindTargetsAndPlayAttackAnim(PlantBonkchoy *this)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  GridItem *pGVar9;
  PlantAnimRig *pPVar10;
  Plant *this_00;
  code *pcVar11;
  undefined4 uVar12;
  RtMixedPtrBase aRStack_68 [8];
  RtMixedPtrBase aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
  local_8 = ___stack_chk_guard;
  pGVar9 = (GridItem *)GetGridItemTarget(this,true);
  if (pGVar9 == (GridItem *)0x0) {
    bVar3 = 0;
  }
  else {
    bVar3 = MayUppercutTarget(this,pGVar9);
  }
  bVar1 = pGVar9 != (GridItem *)0x0;
  pGVar9 = (GridItem *)GetGridItemTarget(this,false);
  if (pGVar9 == (GridItem *)0x0) {
    bVar4 = 0;
  }
  else {
    bVar4 = MayUppercutTarget(this,pGVar9);
  }
  bVar2 = pGVar9 != (GridItem *)0x0;
  bVar5 = SUB81(this,0);
  PlantTurnip::GetZombieTarget(bVar5);
  cVar6 = Sexy::RtMixedPtrBase::IsValid(aRStack_68);
  if (cVar6 == '\0') {
    PlantTurnip::GetZombieTarget(bVar5);
    cVar6 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
    if (cVar6 != '\0') goto LAB_03ffe954;
    bVar5 = bVar1 || bVar2;
    if (!bVar1 && !bVar2) goto LAB_03ffe764;
LAB_03ffe804:
    this_00 = *(Plant **)(this + 0x10);
    iVar8 = FUN_03ffc584(this_00);
    if (iVar8 == 2) goto LAB_03ffe8a8;
LAB_03ffe818:
    if (((1 < iVar8) && (iVar8 < 6)) && (6 < *(int *)(this + 0x30))) goto LAB_03ffe8b4;
LAB_03ffe830:
    if (*(int *)(this + 0x38) != 2) goto LAB_03ffe8c4;
LAB_03ffe83c:
    *(undefined4 *)(this + 0x38) = 0;
    this[0x3c] = (PlantBonkchoy)0x1;
LAB_03ffe84c:
    if (bVar4 == 0) goto LAB_03ffe918;
LAB_03ffe850:
    uVar12 = 3;
    *(undefined4 *)(this_00 + 200) = 0xb;
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_68);
    bVar4 = MayUppercutTarget(this,aRStack_58);
    bVar3 = bVar3 | bVar4;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    PlantTurnip::GetZombieTarget(bVar5);
    cVar6 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
    if (cVar6 == '\0') {
      bVar1 = true;
      bVar4 = 0;
      bVar2 = false;
      goto LAB_03ffe804;
    }
    bVar4 = 0;
    bVar1 = true;
LAB_03ffe954:
    bVar2 = true;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_60);
    bVar7 = MayUppercutTarget(this,aRStack_58);
    bVar4 = bVar4 | bVar7;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    this_00 = *(Plant **)(this + 0x10);
    iVar8 = FUN_03ffc584(this_00);
    if (iVar8 != 2) goto LAB_03ffe818;
LAB_03ffe8a8:
    if (*(int *)(this + 0x30) < 0xf) goto LAB_03ffe830;
LAB_03ffe8b4:
    *(undefined4 *)(this + 0x30) = 0;
    if (*(int *)(this + 0x38) == 2) goto LAB_03ffe83c;
LAB_03ffe8c4:
    cVar6 = Plant::IsSkillCheat(this_00);
    if (cVar6 == '\0') {
      this_00 = *(Plant **)(this + 0x10);
      iVar8 = FUN_03ffc584(this_00);
      if ((1 < iVar8) && (*(int *)(this + 0x30) == 0)) goto LAB_03ffe8f0;
      goto LAB_03ffe84c;
    }
    cVar6 = Plant::IsSkillActivate(*(Plant **)(this + 0x10));
    if (cVar6 != '\0') {
LAB_03ffe8f0:
      bVar4 = !bVar1;
      this[0x34] = (PlantBonkchoy)0x1;
      if (bVar1) {
        bVar3 = 1;
      }
      CheckSupercut(this);
    }
    this_00 = *(Plant **)(this + 0x10);
    if (bVar4 != 0) goto LAB_03ffe850;
LAB_03ffe918:
    if (bVar2) {
      if (this[0x3c] == (PlantBonkchoy)0x0) {
        uVar12 = 1;
        *(undefined4 *)(this_00 + 200) = 0xb;
      }
      else {
        uVar12 = 5;
        *(undefined4 *)(this_00 + 200) = 0xb;
      }
    }
    else if (bVar3 == 0) {
      if (this[0x3c] == (PlantBonkchoy)0x0) {
        *(undefined4 *)(this_00 + 200) = 0xc;
        uVar12 = 0;
      }
      else {
        uVar12 = 4;
        *(undefined4 *)(this_00 + 200) = 0xc;
      }
    }
    else {
      uVar12 = 2;
      *(undefined4 *)(this_00 + 200) = 0xc;
    }
  }
  bVar5 = true;
  pPVar10 = (PlantAnimRig *)FUN_03ffd1d8(this_00);
  pcVar11 = *(code **)(*(long *)pPVar10 + 600);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  (*pcVar11)(pPVar10,uVar12,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  PlantAnimRig::SetState(pPVar10,0xe);
LAB_03ffe764:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar5);
  }
  return;
}


/* PlantBonkchoy::UpdateActions() */

void __thiscall PlantBonkchoy::UpdateActions(PlantBonkchoy *this)

{
  uint uVar1;
  char cVar2;
  PopAnimRig *this_00;
  long *plVar3;
  
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
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar3 + 0x118))();
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBonkchoy::UpdatePlantfood() */

void __thiscall PlantBonkchoy::UpdatePlantfood(PlantBonkchoy *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  SexyVector3 *pSVar6;
  float *pfVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  Zombie *pZVar11;
  ulong uVar12;
  RtMixedPtrBase *this_01;
  long *plVar13;
  undefined8 uVar14;
  GridItem *this_02;
  char *__s;
  code *pcVar15;
  RealObject *this_03;
  int iVar16;
  ulong uVar17;
  float fVar18;
  int iVar19;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  Vec3 aVStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  float local_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar18 = (float)PVZ_T();
  if (((*(float *)(this + 0x2c) < fVar18) ||
      (cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10)), cVar1 == '\0')) ||
     (this[0x35] == (PlantBonkchoy)0x0)) {
    fVar18 = (float)PVZ_T();
    if (*(float *)(this + 0x2c) < fVar18) {
      this[0x35] = (PlantBonkchoy)0x0;
      Plant::GetProps();
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      lVar8 = FUN_03ffc5f0(*(undefined8 *)(lVar8 + 0x70),1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
      fVar18 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
      local_60 = (fVar18 + 1.0) * local_60;
      if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
        uVar9 = PlantFramework::GetDamageFlags();
      }
      else {
        uVar9 = (**(code **)(*(long *)this + 0x198))(this,1);
      }
      uVar9 = operator|(uVar9,0x2000);
      operator|=(auStack_58,uVar9);
      fVar18 = (float)PVZ_T();
      pcVar15 = *(code **)(*(long *)this + 0x2b8);
      *(float *)(this + 0x2c) = fVar18 + *(float *)(lVar8 + 0x28);
      (*pcVar15)(aVStack_90,this,1);
      if (*(code **)(*(long *)this + 400) == PlantFramework::GetCollisionFlags) {
        uVar3 = PlantFramework::GetCollisionFlags();
      }
      else {
        uVar3 = (**(code **)(*(long *)this + 400))(this,1);
      }
      uVar17 = 0;
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x40);
      iVar16 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      uVar4 = operator|(4,2);
      EntityFinder::GetEntitiesTouchingRectangle
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,
                 aVStack_90,*(int *)(*(long *)(this + 0x10) + 0x110) + -1,
                 *(int *)(*(long *)(this + 0x10) + 0x110) + 1);
      uVar9 = local_80;
      lVar8 = FUN_03ffc600(local_80,local_78);
      iVar19 = iVar16;
      if (lVar8 != 0) {
        do {
          puVar10 = (undefined8 *)FUN_03ffc60c(uVar9,uVar17);
          pZVar11 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar10);
          if (pZVar11 == (Zombie *)0x0) {
            FUN_03ffc60c(local_80,uVar17);
            nop();
            cVar1 = (**(code **)(*(long *)this_02 + 0x200))();
            if ((cVar1 != '\0') &&
               (cVar1 = (**(code **)(*(long *)this_02 + 0x210))
                                  (this_02,*(undefined8 *)(this + 0x10)), cVar1 != '\0')) {
              iVar19 = iVar19 + 1;
              (**(code **)(*(long *)this_02 + 0x110))
                        (this_02,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
              if (*(code **)(*(long *)this_02 + 0x1d8) == GridItem::GetHitpoints) {
                fVar18 = (float)GridItem::GetHitpoints(this_02);
              }
              else {
                fVar18 = (float)(**(code **)(*(long *)this_02 + 0x1d8))();
              }
              if (fVar18 <= 0.0) {
                iVar16 = iVar16 + 1;
              }
            }
          }
          else {
            cVar1 = FUN_03ffc5ac(*(undefined4 *)(pZVar11 + 0x354),pZVar11 + 0x358);
            if (cVar1 != '\0') {
              uVar9 = Zombie::GetTargetPosition(pZVar11);
              (**(code **)(*(long *)pZVar11 + 0x78))(pZVar11,uVar9);
              Zombie::ResetTargetPostion(pZVar11);
              FUN_03ffc5d4(pZVar11 + 0x360);
              cVar1 = (**(code **)(*(long *)pZVar11 + 0x328))(pZVar11);
              if (cVar1 == '\0') {
                (**(code **)(*(long *)pZVar11 + 0x260))(pZVar11);
              }
              uVar9 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin(this_00);
              uVar14 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end(this_00);
              local_b0 = FUN_03ffd12c(uVar9,uVar14,pZVar11);
              local_98 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end(this_00);
              bVar2 = __gnu_cxx::operator!=
                                ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_98);
              if (bVar2) {
                __gnu_cxx::
                __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                ::__normal_iterator<Sexy::RenderStateManager::Context**>
                          ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_a0,(__normal_iterator *)&local_b0);
                local_a8 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::end(this_00);
                __gnu_cxx::
                __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                ::__normal_iterator<Sexy::RenderStateManager::Context**>
                          ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_98,(__normal_iterator *)&local_a8);
                std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                          ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
                            *)this_00,local_a0,local_98);
              }
            }
            cVar1 = (**(code **)(*(long *)pZVar11 + 0x328))(pZVar11);
            if (((cVar1 == '\0') &&
                (cVar1 = (**(code **)(*(long *)pZVar11 + 0xb8))(pZVar11,uVar3), cVar1 != '\0')) &&
               (cVar1 = RealObject::IsOnOpposingTeam
                                  ((RealObject *)pZVar11,*(RealObject **)(this + 0x10)),
               cVar1 != '\0')) {
              iVar19 = iVar19 + 1;
              (**(code **)(*(long *)pZVar11 + 0x110))
                        (pZVar11,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
              cVar1 = (**(code **)(*(long *)pZVar11 + 0x328))(pZVar11);
              if (cVar1 != '\0') {
                iVar16 = iVar16 + 1;
              }
            }
          }
          uVar9 = local_80;
          uVar17 = uVar17 + 1;
          uVar12 = FUN_03ffc600(local_80,local_78);
        } while (uVar17 < uVar12);
      }
      local_a0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      local_98 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98),
            bVar2) {
        this_01 = (RtMixedPtrBase *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
        cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
        if (cVar1 != '\0') {
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01)
          ;
          cVar1 = FUN_03ffc5ac(*(undefined4 *)(lVar8 + 0x354),lVar8 + 0x358);
          if (cVar1 != '\0') {
            plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            pcVar15 = *(code **)(*plVar13 + 0x78);
            pZVar11 = (Zombie *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            uVar9 = Zombie::GetTargetPosition(pZVar11);
            (*pcVar15)(plVar13,uVar9);
            pZVar11 = (Zombie *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            Zombie::ResetTargetPostion(pZVar11);
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            FUN_03ffc5d4(lVar8 + 0x360);
            plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            cVar1 = (**(code **)(*plVar13 + 0x328))();
            if (cVar1 == '\0') {
              plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                          ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
              (**(code **)(*plVar13 + 0x260))();
            }
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
      }
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00)
      ;
      if (iVar16 == 0) {
        this_03 = *(RealObject **)(this + 0x10);
        if (iVar19 == 0) {
          __s = "Play_Plant_BonkChoy_Nitro";
        }
        else {
          std::string::string((string *)&local_98,"Play_Plant_BonkChoy_Nitro");
          RealObject::PlayPositionalSound(this_03,(string *)&local_98,0.0);
          std::string::~string((string *)&local_98);
          nop();
          this_03 = *(RealObject **)(this + 0x10);
          __s = "Play_Plant_BonkChoy_Impact_Nitro";
        }
        std::string::string((string *)&local_98,__s);
        RealObject::PlayPositionalSound(this_03,(string *)&local_98,0.0);
        std::string::~string((string *)&local_98);
        nop();
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    }
  }
  else {
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    uVar3 = 2;
    if (cVar1 == '\0') {
      uVar3 = 1;
    }
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    (**(code **)(*(long *)this + 0x2b8))(&local_80,this,uVar3);
    if (*(code **)(*(long *)this + 400) == PlantFramework::GetCollisionFlags) {
      uVar3 = PlantFramework::GetCollisionFlags(this,uVar3);
    }
    else {
      uVar3 = (**(code **)(*(long *)this + 400))(this,uVar3);
    }
    uVar17 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
    uVar4 = operator|(4,2);
    EntityFinder::GetEntitiesTouchingRectangle
              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,uVar4,&local_80,
               *(int *)(*(long *)(this + 0x10) + 0x110) + -2,
               *(int *)(*(long *)(this + 0x10) + 0x110) + 2);
    uVar9 = local_68;
    lVar8 = FUN_03ffc600(local_68,CONCAT44(uStack_5c,local_60));
    if (lVar8 != 0) {
      do {
        puVar10 = (undefined8 *)FUN_03ffc60c(uVar9,uVar17);
        pZVar11 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar10);
        if (((pZVar11 != (Zombie *)0x0) &&
            (cVar1 = (**(code **)(*(long *)pZVar11 + 0x328))(), cVar1 == '\0')) &&
           (cVar1 = (**(code **)(*(long *)pZVar11 + 0xb8))(pZVar11,uVar3), cVar1 != '\0')) {
          puVar5 = (undefined4 *)Zombie::GetFlag(pZVar11);
          bVar2 = TestFlag<VaseFlags>(*puVar5,0x8000000);
          if (((!bVar2) && (cVar1 = (**(code **)(*(long *)pZVar11 + 0x3f0))(pZVar11), cVar1 != '\0')
              ) && (cVar1 = Zombie::IsControlled(pZVar11), cVar1 == '\0')) {
            pSVar6 = (SexyVector3 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)pZVar11);
            cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),pSVar6);
            if (cVar1 == '\0') {
              BoardConstants::GRIDSQUARE_WIDTH();
              BoardEntity::CalcColumnPosition((BoardEntity *)pZVar11);
              SharkMinion::getRow((SharkMinion *)pZVar11);
              cVar1 = FUN_03ffc5ac(*(undefined4 *)(pZVar11 + 0x354),pZVar11 + 0x358);
              if (cVar1 == '\0') {
                pfVar7 = (float *)std::
                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  **)(this + 0x10));
                EATextSquish::Vec3::Vec3(aVStack_90,(float)(int)*pfVar7,(float)(int)pfVar7[1],0.0);
                Zombie::SetTargetPosition(pZVar11,(SexyVector3 *)aVStack_90);
                cVar1 = IsHighFPSMode();
                uVar4 = 0x3d4ccccd;
                if (cVar1 == '\0') {
                  uVar4 = 0x3dcccccd;
                }
                FUN_03ffc5cc(uVar4,pZVar11 + 0x360);
                (**(code **)(*(long *)pZVar11 + 0x298))(0x40a00000,pZVar11);
                ToolPacketData::GetProps();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)&local_98,(RtWeakPtrBase *)&local_a0);
                std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::
                push_back((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *
                          )(this + 0x40),(RtWeakPtr *)&local_98);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
              }
            }
          }
        }
        uVar9 = local_68;
        uVar17 = uVar17 + 1;
        uVar12 = FUN_03ffc600(local_68,CONCAT44(uStack_5c,local_60));
      } while (uVar17 < uVar12);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

