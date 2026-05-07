// Class: OrchidmageProjectile_1


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidmageProjectile_1::StaticClassInit() */

void OrchidmageProjectile_1::StaticClassInit(void)

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
    std::string::string(asStack_10,"OrchidmageProjectile_1");
    (*pcVar2)(plVar1,asStack_10,FUN_03462e64,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OrchidmageProjectile_1::StaticGetClass() */

long * OrchidmageProjectile_1::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"OrchidmageProjectile_1",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OrchidmageProjectile_1::GetClass() const */

long * OrchidmageProjectile_1::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"OrchidmageProjectile_1",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OrchidmageProjectile_1::getTheMaximumNumberOfDrags(int) */

void __thiscall
OrchidmageProjectile_1::getTheMaximumNumberOfDrags(OrchidmageProjectile_1 *this,int param_1)

{
  switch(param_1) {
  case 0:
  case 1:
    *(undefined4 *)(this + 0x230) = 2;
    return;
  case 2:
    *(undefined4 *)(this + 0x230) = 4;
    return;
  case 3:
    *(undefined4 *)(this + 0x230) = 6;
    return;
  case 4:
    *(undefined4 *)(this + 0x230) = 8;
    return;
  case 5:
    *(undefined4 *)(this + 0x230) = 999;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidmageProjectile_1::movePosition(Sexy::SexyVector3, float) */

void OrchidmageProjectile_1::movePosition
               (float param_1,float param_2,undefined4 param_3,float param_4,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_5)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_30;
  float fStack_2c;
  undefined4 local_28;
  float local_20;
  float local_1c;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fStack_2c = param_2;
  local_28 = param_3;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(param_5);
  fVar4 = pfVar3[1];
  fVar5 = *pfVar3;
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar1 = fStack_2c;
  local_30 = param_1;
  if (ABS(fVar4 - fStack_2c) <= (float)iVar2 * 0.5) {
    if (fVar5 == param_1 || fVar5 < param_1) {
      if (fVar5 < param_1) {
        iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
        local_30 = param_1 - param_4 * (float)iVar2;
      }
      else if (fVar4 < fStack_2c) {
        iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
        fStack_2c = fVar1 - param_4 * (float)iVar2;
      }
      else if (fStack_2c < fVar4) {
        iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
        fStack_2c = (float)NEON_fminnm(fVar1 + param_4 * (float)iVar2,fVar4);
      }
    }
    else {
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      local_30 = (float)NEON_fminnm(param_1 + param_4 * (float)iVar2,fVar5);
    }
  }
  else if ((fVar5 <= param_1) || (fVar4 <= fStack_2c)) {
    if (param_1 <= fVar5) {
      if ((fStack_2c <= fVar4) || (fVar5 <= param_1)) goto LAB_03464700;
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      local_30 = param_1 + (float)iVar2 * param_4 * 0.6;
    }
    else {
      if ((fStack_2c <= fVar4) && (fVar4 <= fStack_2c)) goto LAB_03464700;
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      local_30 = param_1 - (float)iVar2 * param_4 * 0.6;
    }
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fStack_2c = fVar1 - (float)iVar2 * param_4 * 0.6;
  }
  else {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    local_30 = param_1 + (float)iVar2 * param_4 * 0.6;
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fStack_2c = fVar1 + (float)iVar2 * param_4 * 0.6;
  }
LAB_03464700:
  iVar2 = BoardTransforms::GridToBoardSpaceY(0);
  local_20 = (float)iVar2;
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  iVar2 = BoardTransforms::GridToBoardSpaceY(iVar2 + -1);
  local_1c = (float)iVar2;
  pfVar3 = eastl::max_alt<float>(&local_20,&fStack_2c);
  fStack_2c = *pfVar3;
  pfVar3 = eastl::min_alt<float>(&local_1c,&fStack_2c);
  fStack_2c = *pfVar3;
  local_10 = local_28;
  local_18 = CONCAT44(fStack_2c,local_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_30,fStack_2c,local_28);
  }
  return;
}


/* OrchidmageProjectile_1::~OrchidmageProjectile_1() */

void __thiscall OrchidmageProjectile_1::~OrchidmageProjectile_1(OrchidmageProjectile_1 *this)

{
  *(undefined ***)this = &PTR_GetClass_06639570;
  *(undefined ***)(this + 0x10) = &PTR__OrchidmageProjectile_1_06639760;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x1f0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to OrchidmageProjectile_1::~OrchidmageProjectile_1() */

void __thiscall OrchidmageProjectile_1::~OrchidmageProjectile_1(OrchidmageProjectile_1 *this)

{
  ~OrchidmageProjectile_1(this + -0x10);
  return;
}


/* OrchidmageProjectile_1::~OrchidmageProjectile_1() */

void __thiscall OrchidmageProjectile_1::~OrchidmageProjectile_1(OrchidmageProjectile_1 *this)

{
  ~OrchidmageProjectile_1(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to OrchidmageProjectile_1::~OrchidmageProjectile_1() */

void __thiscall OrchidmageProjectile_1::~OrchidmageProjectile_1(OrchidmageProjectile_1 *this)

{
  ~OrchidmageProjectile_1(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidmageProjectile_1::blackHoleKillsZombies() */

void __thiscall OrchidmageProjectile_1::blackHoleKillsZombies(OrchidmageProjectile_1 *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  ulong uVar6;
  GridItem *pGVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  uVar8 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar2 = operator|(4,2);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar2,
             this + 0x208,0xffffffff,0xffffffff);
  uVar9 = local_80;
  lVar4 = FUN_03461fb0(local_80,local_78);
  if (lVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_03461fbc(uVar9,uVar8);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      if (this_00 == (Zombie *)0x0) {
LAB_03468bdc:
        puVar5 = (undefined8 *)FUN_03461fbc(local_80,uVar8);
        pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5);
        if (pGVar7 != (GridItem *)0x0) {
          (**(code **)(*(long *)pGVar7 + 0x200))();
        }
      }
      else {
        cVar1 = RealObject::IsOnTeam(this_00,1);
        if ((((cVar1 == '\0') && (iVar3 = Zombie::GetSizeType(this_00), iVar3 != 2)) &&
            (cVar1 = Zombie::IsBoss(this_00), cVar1 == '\0')) &&
           (((cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0' &&
             (cVar1 = Zombie::HasCondition(this_00,0x7a), cVar1 == '\0')) &&
            ((cVar1 = Zombie::CanTakeFatalDamage(this_00), cVar1 != '\0' &&
             (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')))))) {
          pcVar10 = *(code **)(*(long *)this_00 + 0x120);
          Sexy::Point::Point(aPStack_90,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
          DamageInfo::DamageInfo((DamageInfo *)0x0,local_88,local_84,aDStack_68,2,0,aPStack_90,0);
          (*pcVar10)(this_00,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
          goto LAB_03468bdc;
        }
      }
      uVar9 = local_80;
      uVar8 = uVar8 + 1;
      uVar6 = FUN_03461fb0(local_80,local_78);
    } while (uVar8 < uVar6);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidmageProjectile_1::explode() */

void __thiscall OrchidmageProjectile_1::explode(OrchidmageProjectile_1 *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  float *pfVar5;
  Effect_ProjectileHit *this_00;
  char *pcVar6;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar7;
  PopAnimRig *this_02;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  float local_20;
  float local_1c;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Projectile::getProps((Projectile *)this);
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  (**(code **)(*plVar4 + 0x48))();
  (**(code **)(*(long *)this + 0x180))(asStack_30,this);
  cVar1 = FUN_0547419c(asStack_30);
  if (cVar1 == '\0') {
    GetPAMByName(asStack_30);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar1 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_20);
      Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)&local_20);
      if (*(char *)(lVar3 + 0x6d) == '\0') {
        fVar11 = local_20 + *(float *)(this + 0x18);
        fVar10 = (local_1c + *(float *)(this + 0x1c)) - *(float *)(this + 0x20);
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
      }
      else {
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
        fVar11 = local_20 + *pfVar5;
        fVar10 = (local_1c + pfVar5[1]) - pfVar5[2];
      }
      cVar1 = CardGameUtils::IsPlayingCardGame();
      uVar8 = 0x3f800000;
      if (cVar1 != '\0') {
        uVar8 = FUN_03461f34(*(undefined4 *)(this + 0xc0));
      }
      fVar9 = pfVar5[1];
      *(int *)(this + 0x220) = (int)*(float *)(this + 0x1e0);
      *(int *)(this + 0x224) = (int)*(float *)(this + 0x1e4);
      *(int *)(this + 0x218) = (int)(fVar11 - *(float *)(this + 0x1e0) * 0.5);
      *(int *)(this + 0x21c) = (int)(fVar10 - *(float *)(this + 0x1e4) * 0.5);
      iVar2 = BoardTransforms::BoardSpaceToGridY(fVar9);
      *(uint *)(this + 0x238) = iVar2 - 1U;
      *(int *)(this + 0x23c) = iVar2 - ((int)~(iVar2 - 1U) >> 0x1f);
      if (this[0x1c0] == (OrchidmageProjectile_1)0x0) {
        this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
        Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar7,(RtClass *)0x0);
        Effect_PopAnim::SetCentered(this_01,true);
        (**(code **)(*(long *)this_01 + 0x80))(uVar8,this_01);
        EATextSquish::Vec3::Vec3(aVStack_18,fVar11,fVar10,0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)this_01,(SexyVector3 *)aVStack_18,-1);
        FUN_03461f24(this_01 + 0x1c,*(int *)(this + 0x50) + 1);
        lVar3 = Projectile::getProps((Projectile *)this);
        pcVar6 = (char *)FUN_0547429c(lVar3 + 0x148);
        std::string::string((string *)aVStack_18,pcVar6);
        Effect_PopAnim::PlaySingleAnimation(this_01,aVStack_18,2);
        std::string::~string((string *)aVStack_18);
        nop();
        this_02 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_01);
        lVar3 = Projectile::getProps((Projectile *)this);
        pcVar6 = (char *)FUN_0547429c(lVar3 + 0x148);
        std::string::string((string *)aVStack_18,pcVar6);
        fVar10 = (float)PopAnimRig::CalcAnimLengthSeconds(this_02,(string *)aVStack_18);
        *(float *)(this + 0x228) = fVar10 * 0.65;
        std::string::~string((string *)aVStack_18);
        nop();
      }
      else {
        *(int *)(this + 0x208) = (int)(fVar11 - *(float *)(this + 0x1e0) * 0.16666667);
        *(int *)(this + 0x20c) = (int)(fVar10 - *(float *)(this + 0x1e4) * 0.16666667);
        *(int *)(this + 0x214) = (int)(*(float *)(this + 0x1e4) * 0.33333334);
        *(int *)(this + 0x210) = (int)(*(float *)(this + 0x1e0) * 0.33333334);
        this_00 = Board::AddEffect<Effect_ProjectileHit>(*(Board **)(gLawnApp + 0x9f0));
        Effect_ProjectileHit::starSpiralPill(this_00,*(float *)(this + 0x1bc),fVar11,fVar10);
        pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar6,"OrchidMage_Attack5");
        *(undefined4 *)(this + 0x228) = *(undefined4 *)(this + 0x1bc);
      }
      EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
      Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)aVStack_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidmageProjectile_1::boundZombie(Zombie*) */

void __thiscall OrchidmageProjectile_1::boundZombie(OrchidmageProjectile_1 *this,Zombie *param_1)

{
  Effect_ProjectileHit *pEVar1;
  Effect_ProjectileHit *pEVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
                    /* WARNING: Load size is inaccurate */
  local_8 = ___stack_chk_guard;
  Zombie::ApplyCondition(*(Zombie **)(this + 0x1b8),0,param_1,0x18,1);
  pEVar1 = Board::AddEffect<Effect_ProjectileHit>(*(Board **)(gLawnApp + 0x9f0));
                    /* WARNING: Load size is inaccurate */
  pEVar2._0_4_ = *(Effect_ProjectileHit **)(this + 0x1b8);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  Effect_ProjectileHit::startBound(pEVar2._0_4_,pEVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidmageProjectile_1::OrchidmageProjectile_1() */

void __thiscall OrchidmageProjectile_1::OrchidmageProjectile_1(OrchidmageProjectile_1 *this)

{
  int iVar1;
  string *psVar2;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::Projectile((Projectile *)this);
  this[0x1e8] = (OrchidmageProjectile_1)0x0;
  this[0x1e9] = (OrchidmageProjectile_1)0x0;
  *(undefined ***)this = &PTR_GetClass_06639570;
  *(undefined ***)(this + 0x10) = &PTR__OrchidmageProjectile_1_06639760;
  this[0x1ea] = (OrchidmageProjectile_1)0x1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f0));
  Sexy::Insets::Insets((Insets *)(this + 0x208));
  Sexy::Insets::Insets((Insets *)(this + 0x218));
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"orchidmage");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(this + 0x1b0) = 1;
  *(undefined4 *)(this + 0x1b8) = 0x3f800000;
  *(undefined4 *)(this + 0x1a8) = 0x3e19999a;
  *(undefined4 *)(this + 0x1b4) = 0x3f800000;
  *(undefined4 *)(this + 0x1ac) = 0x3e99999a;
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x234) = 0;
  this[0x1ec] = (OrchidmageProjectile_1)0x1;
  *(undefined4 *)(this + 0x1bc) = 0x40400000;
  this[0x1ed] = (OrchidmageProjectile_1)0x1;
  this[0x1ee] = (OrchidmageProjectile_1)0x1;
  *(undefined4 *)(this + 0x1c4) = 0x43e10000;
  this[0x1c2] = (OrchidmageProjectile_1)0x1;
  this[0x1c0] = (OrchidmageProjectile_1)0x0;
  this[0x1eb] = (OrchidmageProjectile_1)0x0;
  this[0x1c1] = (OrchidmageProjectile_1)0x0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1cc) = uVar3;
  *(undefined4 *)(this + 0x1d0) = uVar3;
  *(undefined4 *)(this + 0x1d8) = uVar3;
  *(undefined4 *)(this + 0x1dc) = uVar3;
  *(undefined4 *)(this + 0x1c8) = 0x43610000;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  *(float *)(this + 0x1e0) = (float)(iVar1 * 3);
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  *(float *)(this + 0x1e4) = (float)(iVar1 * 3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OrchidmageProjectile_1::StaticNew() */

OrchidmageProjectile_1 * OrchidmageProjectile_1::StaticNew(void)

{
  OrchidmageProjectile_1 *this;
  
  this = ::operator_new(0x240);
  OrchidmageProjectile_1(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidmageProjectile_1::OnCollideEntity(BoardEntity*) */

void __thiscall
OrchidmageProjectile_1::OnCollideEntity(OrchidmageProjectile_1 *this,BoardEntity *param_1)

{
  undefined4 uVar1;
  string *psVar2;
  code *pcVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_68,"orchidmage");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_68);
  nop();
  PVZ_Dt();
  Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  pcVar3 = *(code **)(*(long *)param_1 + 0x110);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,asStack_68,aPStack_78,0);
  (*pcVar3)(param_1,asStack_68);
  DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
  uVar1 = (**(code **)(*(long *)this + 0x168))(this,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidmageProjectile_1::damageEntities() */

void __thiscall OrchidmageProjectile_1::damageEntities(OrchidmageProjectile_1 *this)

{
  OrchidmageProjectile_1 OVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  GridItem *pGVar8;
  long lVar9;
  ulong uVar10;
  string *psVar11;
  OrchidMageSubsystem *this_00;
  undefined8 uVar12;
  code *pcVar13;
  ulong uVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  DamageInfo *pDVar21;
  undefined8 local_a0;
  Point aPStack_98 [8];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = *(int *)(this + 0x1b0);
  if (this[0x1c1] == (OrchidmageProjectile_1)0x0) {
    fVar18 = 0.5;
    pDVar21._0_4_ =
         (DamageInfo *)(*(float *)(this + 0x1c4) + *(float *)(this + 0x1c8) * (float)(iVar5 + -1));
  }
  else if (this[0x1c2] == (OrchidmageProjectile_1)0x0) {
    fVar18 = 0.5;
    pDVar21._0_4_ = (DamageInfo *)(float)(iVar5 * 0x226 + 0x226);
  }
  else {
    fVar18 = 1.0;
    pDVar21._0_4_ = (DamageInfo *)(float)(iVar5 * 700 + 700);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar4 = operator|(4,2);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,
             this + 0x218,*(undefined4 *)(this + 0x238),*(undefined4 *)(this + 0x23c));
  fVar16 = (float)PVZ_T();
  if (*(float *)(this + 0x22c) < fVar16) {
    fVar18 = (float)PVZ_T();
    uVar12 = local_80;
    uVar14 = 0;
    if (*(float *)(this + 0x22c) < fVar18) {
      lVar9 = FUN_03461fb0(local_80,local_78);
      if (lVar9 != 0) {
        do {
          puVar6 = (undefined8 *)FUN_03461fbc(uVar12,uVar14);
          pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
          if (pZVar7 == (Zombie *)0x0) {
LAB_0346b390:
            puVar6 = (undefined8 *)FUN_03461fbc(local_80,uVar14);
            pGVar8 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar6);
            if (pGVar8 != (GridItem *)0x0) {
              (**(code **)(*(long *)pGVar8 + 0x200))();
            }
          }
          else {
            cVar3 = RealObject::IsOnTeam(pZVar7,1);
            if (((cVar3 == '\0') &&
                (cVar3 = (**(code **)(*(long *)pZVar7 + 0x328))(pZVar7), cVar3 == '\0')) &&
               (cVar3 = Zombie::HasCondition(pZVar7,0x7a), cVar3 == '\0')) {
              cVar3 = FUN_03461f68(*(undefined4 *)(pZVar7 + 0x354),pZVar7 + 0x358);
              if (cVar3 != '\0') {
                uVar12 = Zombie::GetTargetPosition(pZVar7);
                (**(code **)(*(long *)pZVar7 + 0x78))(pZVar7,uVar12);
                Zombie::ResetTargetPostion(pZVar7);
                FUN_03461f88(pZVar7 + 0x360);
                psVar11 = (string *)Zombie::GetTypeName(pZVar7);
                bVar2 = std::operator!=(psVar11,"beach_fisherman");
                if (bVar2) {
                  ZombieMove::ZombieMove((ZombieMove *)&local_68);
                  ToolPacketData::GetProps();
                  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                            ((RtWeakPtr<SpartanBambooMatrixSystem> *)&local_68,
                             (RtWeakPtrBase *)&local_90);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
                  this_00 = Board::GetGameSubSystem<OrchidMageSubsystem>
                                      (*(Board **)(gLawnApp + 0x9f0));
                  OrchidMageSubsystem::addZombieToVector(this_00,(ZombieMove *)&local_68);
                  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_68);
                }
              }
              iVar5 = Zombie::GetSizeType(pZVar7);
              if (((iVar5 != 2) &&
                  (cVar3 = (**(code **)(*(long *)pZVar7 + 0x4d8))(pZVar7), cVar3 == '\0')) &&
                 (cVar3 = Zombie::HasCondition(pZVar7,0x7a), cVar3 == '\0')) {
                fVar18 = (float)Sexy::Rand(1.0);
                if (1 < *(int *)(this + 0x1b0)) {
                  if (*(int *)(this + 0x1b0) == 2) {
                    fVar16 = *(float *)(this + 0x1a8);
                  }
                  else {
                    fVar16 = *(float *)(this + 0x1ac);
                  }
                  if (fVar18 <= fVar16) {
                    boundZombie(this,pZVar7);
                  }
                }
              }
              goto LAB_0346b390;
            }
          }
          uVar12 = local_80;
          uVar14 = uVar14 + 1;
          uVar10 = FUN_03461fb0(local_80,local_78);
        } while (uVar14 < uVar10);
      }
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  else {
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_80);
    fVar16 = fVar18 * 0.5;
    while( true ) {
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_80);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_a0,(__normal_iterator *)&local_68);
      if (!bVar2) break;
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0)
      ;
      pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
      if (pZVar7 == (Zombie *)0x0) {
LAB_0346b140:
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
        pGVar8 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar6);
        if ((pGVar8 != (GridItem *)0x0) &&
           (cVar3 = (**(code **)(*(long *)pGVar8 + 0x200))(), cVar3 != '\0')) {
          if (this[0x1ec] != (OrchidmageProjectile_1)0x0) {
            puVar6 = (undefined8 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
            plVar15 = (long *)*puVar6;
            pcVar13 = *(code **)(*plVar15 + 0x110);
            Sexy::Point::Point(aPStack_98,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,1.0,0.0);
            DamageInfo::DamageInfo
                      (pDVar21._0_4_,(undefined4)local_90,local_90._4_4_,(DamageInfo *)&local_68,
                       aPStack_98,0);
            (*pcVar13)(plVar15,(DamageInfo *)&local_68);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
          }
          if (this[0x1c0] != (OrchidmageProjectile_1)0x0) {
            fVar17 = (float)PVZ_T();
            if (*(float *)(this + 0x1d8) <= fVar17) {
              this[0x1ed] = (OrchidmageProjectile_1)0x0;
              puVar6 = (undefined8 *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
              plVar15 = (long *)*puVar6;
              pcVar13 = *(code **)(*plVar15 + 0x110);
              Sexy::Point::Point(aPStack_98,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,1.0,0.0);
              DamageInfo::DamageInfo
                        (pDVar21._0_4_,(undefined4)local_90,local_90._4_4_,(DamageInfo *)&local_68,
                         aPStack_98,0);
              (*pcVar13)(plVar15,(DamageInfo *)&local_68);
              DamageInfo::~DamageInfo((DamageInfo *)&local_68);
              OVar1 = this[0x1c0];
            }
            else {
              OVar1 = this[0x1c0];
            }
            if ((OVar1 != (OrchidmageProjectile_1)0x0) &&
               (fVar17 = (float)PVZ_T(), *(float *)(this + 0x1dc) <= fVar17)) {
              this[0x1ee] = (OrchidmageProjectile_1)0x0;
              puVar6 = (undefined8 *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
              plVar15 = (long *)*puVar6;
              pcVar13 = *(code **)(*plVar15 + 0x110);
              Sexy::Point::Point(aPStack_98,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,1.0,0.0);
              DamageInfo::DamageInfo
                        (pDVar21._0_4_,(undefined4)local_90,local_90._4_4_,(DamageInfo *)&local_68,
                         aPStack_98,0);
              (*pcVar13)(plVar15,(DamageInfo *)&local_68);
              DamageInfo::~DamageInfo((DamageInfo *)&local_68);
            }
          }
        }
      }
      else {
        cVar3 = RealObject::IsOnTeam(pZVar7,1);
        if ((cVar3 == '\0') &&
           (cVar3 = (**(code **)(*(long *)pZVar7 + 0x328))(pZVar7), cVar3 == '\0')) {
          cVar3 = FUN_03461f68(*(undefined4 *)(pZVar7 + 0x354),pZVar7 + 0x358);
          if ((cVar3 == '\0') && (this[0x1ec] != (OrchidmageProjectile_1)0x0)) {
            if ((((*(int *)(this + 0x234) < *(int *)(this + 0x230)) &&
                 (cVar3 = Zombie::IsBoss(pZVar7), cVar3 == '\0')) &&
                (cVar3 = (**(code **)(*(long *)pZVar7 + 0x4d8))(pZVar7), cVar3 == '\0')) &&
               (cVar3 = Zombie::HasCondition(pZVar7,0x7a), cVar3 == '\0')) {
              fVar17 = fVar16;
              if (this[0x1c0] == (OrchidmageProjectile_1)0x0) {
                iVar5 = Zombie::GetSizeType(pZVar7);
                if (iVar5 == 2) goto LAB_0346b0c8;
                *(int *)(this + 0x234) = *(int *)(this + 0x234) + 1;
                puVar6 = (undefined8 *)
                         std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)pZVar7);
                uVar12 = *puVar6;
                local_88 = *(undefined4 *)(puVar6 + 1);
                local_90._0_4_ = (undefined4)uVar12;
                local_90._4_4_ = (undefined4)((ulong)uVar12 >> 0x20);
                uVar4 = local_90._4_4_;
              }
              else {
                *(int *)(this + 0x234) = *(int *)(this + 0x234) + 1;
                puVar6 = (undefined8 *)
                         std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)pZVar7);
                local_90 = *puVar6;
                local_88 = *(undefined4 *)(puVar6 + 1);
                iVar5 = Zombie::GetSizeType(pZVar7);
                uVar4 = local_90._4_4_;
                uVar12 = local_90;
                if (iVar5 != 2) {
                  fVar17 = fVar18;
                }
              }
              local_90 = uVar12;
              uVar20 = local_88;
              uVar19 = movePosition((undefined4)local_90,uVar4,local_88,fVar17,this);
              local_68 = CONCAT44(uVar4,uVar19);
              local_60 = uVar20;
              Sexy::SexyVector3::operator=((SexyVector3 *)&local_90,(SexyVector3 *)&local_68);
              Zombie::SetTargetPosition(pZVar7,(SexyVector3 *)&local_90);
              FUN_03462168(pZVar7 + 0x360);
            }
LAB_0346b0c8:
            this[0x1eb] = (OrchidmageProjectile_1)0x1;
            puVar6 = (undefined8 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
            plVar15 = (long *)*puVar6;
            pcVar13 = *(code **)(*plVar15 + 0x110);
            Sexy::Point::Point(aPStack_98,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,1.0,0.0);
            DamageInfo::DamageInfo
                      (pDVar21._0_4_,(undefined4)local_90,local_90._4_4_,(DamageInfo *)&local_68,
                       aPStack_98,0);
            (*pcVar13)(plVar15,(DamageInfo *)&local_68);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
          }
          if (this[0x1c0] != (OrchidmageProjectile_1)0x0) {
            fVar17 = (float)PVZ_T();
            if (*(float *)(this + 0x1cc) <= fVar17) {
              uVar4 = PVZ_EOT();
              *(undefined4 *)(this + 0x1cc) = uVar4;
              cVar3 = Zombie::IsBoss(pZVar7);
              if (((cVar3 == '\0') &&
                  (cVar3 = (**(code **)(*(long *)pZVar7 + 0x4d8))(pZVar7), cVar3 == '\0')) &&
                 (cVar3 = Zombie::HasCondition(pZVar7,0x7a), cVar3 == '\0')) {
                puVar6 = (undefined8 *)
                         std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)pZVar7);
                local_90 = *puVar6;
                local_88 = *(undefined4 *)(puVar6 + 1);
                iVar5 = Zombie::GetSizeType(pZVar7);
                fVar17 = fVar16;
                if (iVar5 != 2) {
                  fVar17 = fVar18;
                }
                uVar4 = local_90._4_4_;
                uVar20 = local_88;
                uVar19 = movePosition((undefined4)local_90,local_90._4_4_,local_88,fVar17,this);
                local_68 = CONCAT44(uVar4,uVar19);
                local_60 = uVar20;
                Sexy::SexyVector3::operator=((SexyVector3 *)&local_90,(SexyVector3 *)&local_68);
                Zombie::SetTargetPosition(pZVar7,(SexyVector3 *)&local_90);
                FUN_03462168(pZVar7 + 0x360);
              }
              puVar6 = (undefined8 *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
              plVar15 = (long *)*puVar6;
              pcVar13 = *(code **)(*plVar15 + 0x110);
              Sexy::Point::Point(aPStack_98,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,1.0,0.0);
              DamageInfo::DamageInfo
                        (pDVar21._0_4_,(undefined4)local_90,local_90._4_4_,(DamageInfo *)&local_68,
                         aPStack_98,0);
              (*pcVar13)(plVar15,(DamageInfo *)&local_68);
              DamageInfo::~DamageInfo((DamageInfo *)&local_68);
            }
            if (((this[0x1c0] != (OrchidmageProjectile_1)0x0) &&
                (fVar17 = (float)PVZ_T(), *(float *)(this + 0x1d0) <= fVar17)) &&
               ((cVar3 = Zombie::IsBoss(pZVar7), cVar3 == '\0' &&
                ((cVar3 = (**(code **)(*(long *)pZVar7 + 0x4d8))(pZVar7), cVar3 == '\0' &&
                 (cVar3 = Zombie::HasCondition(pZVar7,0x7a), cVar3 == '\0')))))) {
              uVar4 = PVZ_EOT();
              *(undefined4 *)(this + 0x1d0) = uVar4;
              cVar3 = Zombie::IsBoss(pZVar7);
              if ((cVar3 == '\0') &&
                 ((cVar3 = (**(code **)(*(long *)pZVar7 + 0x4d8))(pZVar7), cVar3 == '\0' &&
                  (cVar3 = Zombie::HasCondition(pZVar7,0x7a), cVar3 == '\0')))) {
                puVar6 = (undefined8 *)
                         std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)pZVar7);
                local_90 = *puVar6;
                local_88 = *(undefined4 *)(puVar6 + 1);
                iVar5 = Zombie::GetSizeType(pZVar7);
                fVar17 = fVar16;
                if (iVar5 != 2) {
                  fVar17 = fVar18;
                }
                uVar4 = local_90._4_4_;
                uVar20 = local_88;
                uVar19 = movePosition((undefined4)local_90,local_90._4_4_,local_88,fVar17,this);
                local_68 = CONCAT44(uVar4,uVar19);
                local_60 = uVar20;
                Sexy::SexyVector3::operator=((SexyVector3 *)&local_90,(SexyVector3 *)&local_68);
                Zombie::SetTargetPosition(pZVar7,(SexyVector3 *)&local_90);
                FUN_03462168(pZVar7 + 0x360);
              }
              puVar6 = (undefined8 *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
              plVar15 = (long *)*puVar6;
              pcVar13 = *(code **)(*plVar15 + 0x110);
              Sexy::Point::Point(aPStack_98,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,1.0,0.0);
              DamageInfo::DamageInfo
                        (pDVar21._0_4_,(undefined4)local_90,local_90._4_4_,(DamageInfo *)&local_68,
                         aPStack_98,0);
              (*pcVar13)(plVar15,(DamageInfo *)&local_68);
              DamageInfo::~DamageInfo((DamageInfo *)&local_68);
            }
          }
          goto LAB_0346b140;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
    }
    if (this[0x1ed] == (OrchidmageProjectile_1)0x0) {
      uVar4 = PVZ_EOT();
      *(undefined4 *)(this + 0x1d8) = uVar4;
    }
    if (this[0x1ee] == (OrchidmageProjectile_1)0x0) {
      uVar4 = PVZ_EOT();
      *(undefined4 *)(this + 0x1dc) = uVar4;
    }
    this[0x1ec] = (OrchidmageProjectile_1)0x0;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidmageProjectile_1::onUpdate(float) */

void OrchidmageProjectile_1::onUpdate(float param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  _Var1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  ulong uVar6;
  undefined8 *puVar7;
  Zombie *pZVar8;
  GridItem *pGVar9;
  BoardEntity **ppBVar10;
  float *pfVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_38;
  uint local_34;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar13 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  Projectile::CalcSweptCollisionRectBoardSpace();
  (**(code **)(*(long *)in_x0 + 0x188))();
  uVar14 = local_20;
  uVar6 = FUN_03461fb0(local_20,local_18);
  if (uVar6 != 0) {
    do {
      puVar7 = (undefined8 *)FUN_03461fbc(uVar14,uVar13);
      if ((RtObject *)*puVar7 != (RtObject *)0x0) {
        pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
        if ((((pZVar8 != (Zombie *)0x0) &&
             (cVar2 = RealObject::IsOnOpposingTeam(pZVar8,1), cVar2 != '\0')) &&
            (cVar2 = (**(code **)(*(long *)pZVar8 + 0x328))(pZVar8), cVar2 == '\0')) &&
           (cVar2 = (**(code **)(*(long *)pZVar8 + 0x330))(pZVar8), cVar2 == '\0')) {
          ppBVar10 = (BoardEntity **)FUN_03461fbc(local_20,uVar13);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(in_x0 + 0x1f0),ppBVar10);
          in_x0[0x1e8] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          )0x1;
        }
        uVar14 = local_20;
        puVar7 = (undefined8 *)FUN_03461fbc(local_20,uVar13);
        if ((RtObject *)*puVar7 == (RtObject *)0x0) {
          uVar6 = FUN_03461fb0(uVar14,local_18);
        }
        else {
          pGVar9 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar7);
          if ((pGVar9 == (GridItem *)0x0) ||
             (cVar2 = (**(code **)(*(long *)pGVar9 + 0x200))(), cVar2 == '\0')) {
            uVar14 = local_20;
            uVar6 = FUN_03461fb0(local_20,local_18);
          }
          else {
            ppBVar10 = (BoardEntity **)FUN_03461fbc(local_20,uVar13);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(in_x0 + 0x1f0),ppBVar10
                      );
            uVar14 = local_20;
            in_x0[0x1e8] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            )0x1;
            uVar6 = FUN_03461fb0(local_20,local_18);
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar6);
  }
  uVar14 = *(undefined8 *)(in_x0 + 0x1f0);
  iVar3 = FUN_03461fb0(uVar14,*(undefined8 *)(in_x0 + 0x1f8));
  if ((iVar3 < 1) ||
     (in_x0[0x1e8] ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0)) {
LAB_0346d10c:
    _Var1 = in_x0[0x1ea];
joined_r0x0346d2b4:
    if (_Var1 != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  )0x0) goto LAB_0346d114;
  }
  else {
    puVar7 = (undefined8 *)FUN_03461fbc(uVar14,0);
    pfVar11 = (float *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)*puVar7);
    iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar11);
    puVar7 = (undefined8 *)FUN_03461fbc(*(undefined8 *)(in_x0 + 0x1f0),0);
    lVar12 = std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)*puVar7);
    iVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(lVar12 + 4));
    Sexy::Point::Point((Point *)&local_38,iVar3,iVar4);
    iVar3 = BoardTransforms::GridToBoardSpaceX(local_38);
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    BoardTransforms::GridToBoardSpaceY(local_34);
    pfVar11 = (float *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost(in_x0);
    if (*pfVar11 < (float)(iVar3 + iVar4)) {
      lVar12 = Projectile::GetVelocity((Projectile *)in_x0);
      if ((ABS(*(float *)(lVar12 + 4)) <= 3.0) ||
         (uVar5 = BoardTransforms::BoardSpaceToGridY(pfVar11[1]), uVar5 != local_34))
      goto LAB_0346d10c;
      if ((uVar5 & 0xfffffffb) == 0) goto LAB_0346d258;
      _Var1 = in_x0[0x1ea];
      goto joined_r0x0346d2b4;
    }
LAB_0346d258:
    if (in_x0[0x1ea] !=
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         )0x0) {
      explode((OrchidmageProjectile_1 *)in_x0);
      getTheMaximumNumberOfDrags((OrchidmageProjectile_1 *)in_x0,*(int *)(in_x0 + 0x1b0));
      in_x0[0x1ea] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      )0x0;
      fVar17 = *(float *)(in_x0 + 0x228);
      in_x0[0x1e9] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      )0x1;
      fVar15 = (float)PVZ_T();
      fVar15 = fVar15 + fVar17;
      _Var1 = in_x0[0x1ea];
      fVar16 = fVar15 - *(float *)(in_x0 + 0x1b4) * 2.0;
      fVar17 = fVar15 - *(float *)(in_x0 + 0x1b4);
      *(float *)(in_x0 + 0x22c) = fVar15;
      *(float *)(in_x0 + 0x1d0) = fVar17;
      *(float *)(in_x0 + 0x1dc) = fVar17;
      *(float *)(in_x0 + 0x1cc) = fVar16;
      *(float *)(in_x0 + 0x1d8) = fVar16;
      goto joined_r0x0346d2b4;
    }
  }
  damageEntities((OrchidmageProjectile_1 *)in_x0);
  if ((in_x0[0x1eb] !=
       (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        )0x0) &&
     (in_x0[0x1c0] !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0)) {
    blackHoleKillsZombies((OrchidmageProjectile_1 *)in_x0);
  }
LAB_0346d114:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

