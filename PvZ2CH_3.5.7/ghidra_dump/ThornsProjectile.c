// Class: ThornsProjectile


/* ThornsProjectile::~ThornsProjectile() */

void __thiscall ThornsProjectile::~ThornsProjectile(ThornsProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069e02c0;
  *(undefined ***)(this + 0x10) = &PTR__ThornsProjectile_069e04b0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ThornsProjectile::~ThornsProjectile() */

void __thiscall ThornsProjectile::~ThornsProjectile(ThornsProjectile *this)

{
  ~ThornsProjectile(this + -0x10);
  return;
}


/* ThornsProjectile::~ThornsProjectile() */

void __thiscall ThornsProjectile::~ThornsProjectile(ThornsProjectile *this)

{
  ~ThornsProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ThornsProjectile::~ThornsProjectile() */

void __thiscall ThornsProjectile::~ThornsProjectile(ThornsProjectile *this)

{
  ~ThornsProjectile(this + -0x10);
  return;
}


/* ThornsProjectile::ThornsProjectile() */

void __thiscall ThornsProjectile::ThornsProjectile(ThornsProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1c0] = (ThornsProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_069e02c0;
  *(undefined ***)(this + 0x10) = &PTR__ThornsProjectile_069e04b0;
  *(undefined8 *)(this + 0x1d0) = 0;
  this[0x1c1] = (ThornsProjectile)0x1;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  return;
}


/* ThornsProjectile::StaticNew() */

ThornsProjectile * ThornsProjectile::StaticNew(void)

{
  ThornsProjectile *this;
  
  this = ::operator_new(0x1d8);
  ThornsProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThornsProjectile::StaticClassInit() */

void ThornsProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ThornsProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04e4f894,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThornsProjectile::StaticGetClass() */

long * ThornsProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ThornsProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ThornsProjectile::GetClass() const */

long * ThornsProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ThornsProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThornsProjectile::ConfirmZombieTarget() */

void __thiscall ThornsProjectile::ConfirmZombieTarget(ThornsProjectile *this)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  Zombie *this_00;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_30);
  iVar4 = BoardTransforms::BoardSpaceToGridXUnbounded(*(float *)(this + 0x18));
  iVar5 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(this + 0x1c));
  iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar7 = BoardTransforms::BoardSpaceToGridXUnbounded(*(float *)(this + 0x18));
  Sexy::Insets::Insets((Insets *)&local_20,iVar4,iVar5,iVar6 - iVar7,1);
  local_30 = local_20;
  uStack_28 = uStack_18;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesInGridSquares((Insets *)&local_20,2,(Insets *)&local_30);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (cVar1 == '\0') {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
      if ((((this_00 != (Zombie *)0x0) && (cVar1 = RealObject::IsOnTeam(this_00,1), cVar1 == '\0'))
          && (cVar1 = FUN_04e4ff7c(*(undefined4 *)(this_00 + 0xcc)), cVar1 == '\0')) &&
         (((iVar4 = Zombie::GetInvisibleState(this_00), iVar4 != 2 &&
           (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
          ((cVar1 = Zombie::IsFlying(this_00), cVar1 == '\0' &&
           (cVar3 = Zombie::HasCondition(this_00,0x8c), cVar1 = '\0', cVar3 == '\0'))))))
      goto LAB_04e521ec;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    cVar1 = '\x01';
  }
LAB_04e521ec:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThornsProjectile::SpawnThorns(BoardEntity*) */

void __thiscall ThornsProjectile::SpawnThorns(ThornsProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  ZombieCavalry *pZVar6;
  GridItemThorns *this_00;
  ZombieBull *pZVar7;
  Board *this_01;
  float fVar8;
  float fVar9;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar8 = *pfVar5;
    fVar9 = pfVar5[1];
    pZVar6 = Sexy::RtObject::Cast<ZombieCavalry>((RtObject *)param_1);
    if ((pZVar6 != (ZombieCavalry *)0x0) ||
       (pZVar7 = Sexy::RtObject::Cast<ZombieBull>((RtObject *)param_1), pZVar7 != (ZombieBull *)0x0)
       ) {
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = (int)fVar8 / iVar2;
      }
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar1 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar1 = iVar3;
      }
      if ((int)fVar8 - iVar4 * iVar2 < iVar1 >> 2) {
        iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
        fVar8 = fVar8 - (float)iVar4;
      }
    }
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"thorns");
    iVar4 = BoardTransforms::BoardSpaceToGridX(fVar8);
    iVar2 = BoardTransforms::BoardSpaceToGridY(fVar9);
    Board::AddGridItem(this_01,asStack_10,iVar4,iVar2,1);
    nop();
    std::string::~string(asStack_10);
    nop();
    FUN_04e4e844(*(undefined4 *)(this + 0x1ac),this_00 + 0x1a8);
    GridItemThorns::SetBindZombie(this_00,param_1);
    FUN_04e4e84c(*(undefined4 *)(this + 0x1b0),this_00 + 0x1b8);
    if ((0.0 < *(float *)(this + 0x1a8)) && (0.0 < *(float *)(this + 0x1b4))) {
      FUN_04e4e83c(this_00 + 0x1ac);
      GridItemThorns::SetPoisonedlv5Dot(this_00,*(float *)(this + 0x1b4));
    }
    FUN_04e4e854(*(undefined4 *)(this + 0x1b8),this_00 + 0x1d8);
    fVar8 = *(float *)(this + 0x1bc);
    iVar4 = FUN_04e4e7d4(*(undefined4 *)(this + 0x70));
    FUN_04e4e7dc(fVar8 + (float)(iVar4 + -1) * fVar8 * 0.5,this_00 + 300);
    fVar8 = *(float *)(this + 0x1bc);
    iVar4 = FUN_04e4e7d4(*(undefined4 *)(this + 0x70));
    FUN_04e4e7e4(fVar8 + (float)(iVar4 + -1) * fVar8 * 0.5,this_00 + 0x128);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThornsProjectile::handleImpact(BoardEntity*) */

void __thiscall ThornsProjectile::handleImpact(ThornsProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long extraout_x0;
  PlantWizardThorns *this_00;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (BoardEntity *)0x0) ||
     (SpawnThorns(this,param_1), this[0x1c0] != (ThornsProjectile)0x0)) {
    uVar2 = 0;
  }
  else {
    PVPSeedBankModule::GetPVPSkillEnergyUI();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      Projectile::GetInstigator((Projectile *)this);
      nop();
      if ((extraout_x0 != 0) && (nop(), this_00 != (PlantWizardThorns *)0x0)) {
        PlantWizardThorns::SetAttackflag(this_00,true);
      }
    }
    (**(code **)(*(long *)this + 0x48))(this);
    uVar2 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThornsProjectile::protrusion(BoardEntity*) */

void __thiscall ThornsProjectile::protrusion(ThornsProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  Zombie *pZVar2;
  Effect_Protrusion *this_00;
  ResourceInfo *pRVar3;
  float *pfVar4;
  DamageInfo *pDVar5;
  RtMixedPtrBase aRStack_e0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_d8 [8];
  Point aPStack_d0 [8];
  DamageInfo aDStack_c8 [96];
  undefined4 local_68;
  undefined4 local_64;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    pZVar2 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
                    /* WARNING: Load size is inaccurate */
    pDVar5._0_4_ = *(DamageInfo **)(this + 0x1c4);
    Sexy::Point::Point(aPStack_d0,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,1.0,0.0);
    DamageInfo::DamageInfo(pDVar5._0_4_,local_68,local_64,aDStack_c8,0x800000000000,aPStack_d0,0);
    std::string::string((string *)&local_68,"Play_Plant_Pokra_Attack_01_Loop");
    RealObject::PlayPositionalSound((RealObject *)this,(string *)&local_68,0.0);
    std::string::~string((string *)&local_68);
    nop();
    std::string::string((string *)&local_68,"POPANIM_EFFECTS_WIZARDTHORNS_EFFECT");
    GetPAMByName((string *)&local_68);
    std::string::~string((string *)&local_68);
    nop();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_e0);
    if (cVar1 != '\0') {
      this_00 = Board::AddEffect<Effect_Protrusion>(*(Board **)(gLawnApp + 0x9f0));
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_e0);
      Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
      Effect_PopAnim::SetCentered((Effect_PopAnim *)this_00,true);
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_68,*pfVar4,pfVar4[1] - 35.0,0.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_68,-1)
      ;
      FUN_04e4e7cc(this_00 + 0x1c,0x7a121);
      std::string::string((string *)&local_68,"anim04");
      Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,(FastCurve *)&local_68,0);
      std::string::~string((string *)&local_68);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aPStack_d0,(RtWeakPtrBase *)aRStack_d8);
      DamageInfo::DamageInfo((DamageInfo *)&local_68,aDStack_c8);
      Effect_Protrusion::Setzombiedamage(this_00,aPStack_d0,(FastCurve *)&local_68);
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_d0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_d8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)(this + 0x68));
      Effect_Protrusion::SetInstigator(this_00,(FastCurve *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      Effect_PopAnim::SetPopAnimDelegates((Effect_PopAnim *)this_00);
      if (pZVar2 != (Zombie *)0x0) {
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(this + 0x1b8),0,pZVar2,0x8d,1);
        Zombie::SetConditionTracker(*(undefined4 *)(this + 0x1b0),pZVar2,0x8d);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_e0);
    DamageInfo::~DamageInfo(aDStack_c8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThornsProjectile::OnCollideEntity(BoardEntity*) */

ulong __thiscall ThornsProjectile::OnCollideEntity(ThornsProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  Zombie *this_00;
  GridItem *pGVar6;
  ulong uVar7;
  float fVar8;
  
  if (param_1 != (BoardEntity *)0x0) {
    if (this[0x1c8] != (ThornsProjectile)0x0) {
      *(BoardEntity **)(this + 0x1d0) = param_1;
      this[0x1c8] = (ThornsProjectile)0x0;
      return 0;
    }
    if (param_1 == *(BoardEntity **)(this + 0x1d0)) {
      return 0;
    }
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if ((bVar1) &&
       (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) {
      bVar2 = Zombie::IsFlying(this_00);
      if ((bVar2 != 0) &&
         ((cVar3 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar3 == '\0' &&
          (cVar3 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar3 == '\0'))))
      goto LAB_04e537e4;
      fVar8 = (float)FUN_04e4e8c0(*(undefined4 *)(this_00 + 0x18),*(undefined4 *)(this_00 + 0x1c),
                                  *(undefined4 *)(this_00 + 0x20));
      iVar4 = BoardTransforms::BoardSpaceToGridX(fVar8);
      if (-1 < iVar4) {
        fVar8 = (float)FUN_04e4e8c0(*(undefined4 *)(this_00 + 0x18),*(undefined4 *)(this_00 + 0x1c),
                                    *(undefined4 *)(this_00 + 0x20));
        iVar4 = BoardTransforms::BoardSpaceToGridX(fVar8);
        iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
        if ((((iVar4 <= iVar5) && (cVar3 = Zombie::IsFlying(this_00), cVar3 == '\0')) &&
            (cVar3 = Zombie::HasCondition(this_00,0x8c), cVar3 == '\0')) &&
           (((cVar3 = Zombie::IsBoss(this_00), cVar3 == '\0' &&
             (cVar3 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar3 == '\0')) &&
            ((cVar3 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar3 == '\0' &&
             (cVar3 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar3 == '\0')))))) {
          uVar7 = Projectile::OnCollideEntity((Projectile *)this,param_1);
          return uVar7;
        }
      }
      cVar3 = (**(code **)(*(long *)this_00 + 0x330))(this_00);
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
        bVar2 = 1;
        if (cVar3 == '\0') goto LAB_04e537e4;
      }
    }
    bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
    if (bVar1) {
      pGVar6 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
      bVar2 = 1;
      if (pGVar6 != (GridItem *)0x0) {
LAB_04e537e4:
        protrusion(this,param_1);
        (**(code **)(*(long *)this + 0x48))(this);
        return (ulong)bVar2;
      }
    }
  }
  return 0;
}

