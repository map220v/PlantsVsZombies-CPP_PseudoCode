// Class: ArmamintProjectile


/* ArmamintProjectile::OnCollideGround() */

undefined4 __thiscall ArmamintProjectile::OnCollideGround(ArmamintProjectile *this)

{
  undefined4 uVar1;
  
  uVar1 = Projectile::OnCollideGround((Projectile *)this);
  (**(code **)(*(long *)this + 0x48))(this);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmamintProjectile::StaticClassInit() */

void ArmamintProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArmamintProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0429846c,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArmamintProjectile::StaticGetClass() */

long * ArmamintProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArmamintProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArmamintProjectile::GetClass() const */

long * ArmamintProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ArmamintProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArmamintProjectile::SetInitialLaunchValues(float, float, int) */

void __thiscall
ArmamintProjectile::SetInitialLaunchValues
          (ArmamintProjectile *this,float param_1,float param_2,int param_3)

{
  *(float *)(this + 0x1a8) = param_1;
  *(int *)(this + 0x1b8) = param_3;
  *(float *)(this + 0x1ac) = param_2;
  return;
}


/* ArmamintProjectile::onProjectileInitialized() */

void __thiscall ArmamintProjectile::onProjectileInitialized(ArmamintProjectile *this)

{
  undefined4 uVar1;
  long extraout_x0;
  
  Projectile::GetProps((Projectile *)this);
  nop();
  uVar1 = *(undefined4 *)(extraout_x0 + 0x1e8);
  *(undefined4 *)(this + 0x1b4) = *(undefined4 *)(extraout_x0 + 0x1e4);
  *(undefined4 *)(this + 0x1b0) = uVar1;
  return;
}


/* ArmamintProjectile::ArmamintProjectile() */

void __thiscall ArmamintProjectile::ArmamintProjectile(ArmamintProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_068273c0;
  *(undefined ***)(this + 0x10) = &PTR__ArmamintProjectile_068275b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  return;
}


/* ArmamintProjectile::StaticNew() */

ArmamintProjectile * ArmamintProjectile::StaticNew(void)

{
  ArmamintProjectile *this;
  
  this = ::operator_new(0x1d8);
  ArmamintProjectile(this);
  return this;
}


/* ArmamintProjectile::~ArmamintProjectile() */

void __thiscall ArmamintProjectile::~ArmamintProjectile(ArmamintProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_068273c0;
  *(undefined ***)(this + 0x10) = &PTR__ArmamintProjectile_068275b0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1c0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ArmamintProjectile::~ArmamintProjectile() */

void __thiscall ArmamintProjectile::~ArmamintProjectile(ArmamintProjectile *this)

{
  ~ArmamintProjectile(this + -0x10);
  return;
}


/* ArmamintProjectile::~ArmamintProjectile() */

void __thiscall ArmamintProjectile::~ArmamintProjectile(ArmamintProjectile *this)

{
  ~ArmamintProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArmamintProjectile::~ArmamintProjectile() */

void __thiscall ArmamintProjectile::~ArmamintProjectile(ArmamintProjectile *this)

{
  ~ArmamintProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmamintProjectile::findNearestTargetType(BoardEntityTypeFlag, int) */

void __thiscall
ArmamintProjectile::findNearestTargetType(ArmamintProjectile *this,undefined4 param_2,int param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Zombie *pZVar11;
  Plant *this_01;
  GridItem *pGVar12;
  RtObject *this_02;
  RtObject *pRVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == -1) {
    param_3 = *(int *)(this + 0x1b8);
  }
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  pRVar13 = (RtObject *)0x0;
  fVar16 = *pfVar7;
  fVar17 = pfVar7[1];
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1c0);
  iVar3 = BoardTransforms::BoardSpaceToGridX(fVar16);
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets(aIStack_30,iVar3,param_3,iVar4 - iVar3,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,param_2,aIStack_30);
  fVar15 = *(float *)(this + 0x1b4) * *(float *)(this + 0x1b4);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pRVar13);
    }
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    this_02 = (RtObject *)*puVar8;
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_02);
    if ((cVar2 != '\0') &&
       (fVar14 = (float)FUN_042960e4(*(undefined4 *)(this_02 + 0x18),*(undefined4 *)(this_02 + 0x1c)
                                     ,*(undefined4 *)(this_02 + 0x20)), (float)iVar3 <= fVar14)) {
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      fVar14 = (float)FUN_042960e4(*(undefined4 *)(this_02 + 0x18),*(undefined4 *)(this_02 + 0x1c),
                                   *(undefined4 *)(this_02 + 0x20));
      iVar5 = BoardTransforms::BoardSpaceToGridX(fVar14);
      if (iVar5 < iVar4) {
        uVar9 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
        ToolPacketData::GetProps();
        local_40 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                             (uVar9,uVar10,(RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        if (!bVar1) {
          pZVar11 = Sexy::RtObject::Cast<Zombie>(this_02);
          if (pZVar11 != (Zombie *)0x0) {
            uVar6 = operator|(1,8);
            cVar2 = Zombie::MatchesAny(pZVar11,uVar6);
            if (((cVar2 != '\0') || (cVar2 = Zombie::HasCondition(pZVar11,0x27), cVar2 != '\0')) ||
               (cVar2 = Zombie::HasCondition(pZVar11,0x25), cVar2 != '\0')) goto LAB_0429802c;
          }
          this_01 = Sexy::RtObject::Cast<Plant>(this_02);
          if (((this_01 == (Plant *)0x0) ||
              ((cVar2 = Plant::IsInvincible(this_01,false), cVar2 == '\0' &&
               (cVar2 = FUN_042970ec(*(undefined4 *)(this_01 + 0x28)), cVar2 == '\0')))) &&
             ((pGVar12 = Sexy::RtObject::Cast<GridItem>(this_02), pGVar12 == (GridItem *)0x0 ||
              (((cVar2 = RealObject::IsOnTeam(pGVar12,1), cVar2 != '\0' &&
                (cVar2 = (**(code **)(*(long *)pGVar12 + 0x208))(pGVar12), cVar2 != '\0')) ||
               ((cVar2 = RealObject::IsOnTeam(pGVar12,2), cVar2 != '\0' &&
                (cVar2 = (**(code **)(*(long *)pGVar12 + 0x200))(pGVar12), cVar2 != '\0')))))))) {
            uVar6 = *(undefined4 *)(this_02 + 0x1c);
            local_48 = FUN_042960e4(*(undefined4 *)(this_02 + 0x18),uVar6,
                                    *(undefined4 *)(this_02 + 0x20));
            fVar14 = fVar17;
            local_44 = uVar6;
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,fVar16,fVar17);
            uVar6 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_48,(SexyVector2 *)&local_40);
            local_38 = CONCAT44(fVar14,uVar6);
            fVar14 = (float)VectorNorm((FPoint *)&local_38);
            if (fVar14 < fVar15) {
              pRVar13 = this_02;
              fVar15 = fVar14;
            }
          }
        }
      }
    }
LAB_0429802c:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  } while( true );
}


/* ArmamintProjectile::findNextTarget(int) */

void __thiscall ArmamintProjectile::findNextTarget(ArmamintProjectile *this,int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = operator|(1,2);
  lVar2 = findNearestTargetType(this,uVar1,param_1);
  if (lVar2 != 0) {
    return;
  }
  findNearestTargetType(this,4,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmamintProjectile::DoBounce() */

void __thiscall ArmamintProjectile::DoBounce(ArmamintProjectile *this)

{
  long extraout_x0;
  float *pfVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar2;
  float fVar3;
  float fVar4;
  undefined4 local_18 [2];
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  fVar3 = *(float *)(extraout_x0 + 0x1e8);
  local_10[0] = *(float *)(this + 0x1a8) * fVar3;
  local_18[0] = 0x3f800000;
  pfVar1 = eastl::max_alt<float>((float *)local_18,local_10);
  fVar4 = *pfVar1;
  *(float *)(this + 0x1b4) = *(float *)(this + 0x1b4) * fVar3;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)findNextTarget(this,-1);
  if (this_00 ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)local_18);
    Projectile::SetTarget((Projectile *)this,(RtWeakPtr *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    pSVar2 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    Projectile::LaunchAt((Projectile *)this,pSVar2,fVar4,*(float *)(this + 0x1ac));
    SetInitialLaunchValues(this,fVar4,*(float *)(this + 0x1ac),*(int *)(this + 0x1b8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmamintProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall ArmamintProjectile::OnCollideEntity(ArmamintProjectile *this,BoardEntity *param_1)

{
  undefined1 uVar1;
  char cVar2;
  long extraout_x0;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::push_back
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1c0),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Projectile::GetProps((Projectile *)this);
  nop();
  uVar3 = FUN_042960d0(*(undefined8 *)(this + 0x1c0),*(undefined8 *)(this + 0x1c8));
  if (((ulong)(long)*(int *)(extraout_x0 + 0x1e0) < uVar3) ||
     (cVar2 = RealObject::IsOnOpposingTeam(this,2), cVar2 == '\0')) {
    uVar1 = Projectile::OnCollideEntity((Projectile *)this,param_1);
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    DoBounce(this);
    uVar1 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ArmamintProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void ArmamintProjectile::fillDamageInfo(DamageInfo *param_1,BoardEntity *param_2)

{
  RtObject *this;
  Plant *this_00;
  long extraout_x0;
  float fVar1;
  
  Projectile::fillDamageInfo(param_1,param_2);
  this = (RtObject *)Projectile::GetInstigator((Projectile *)param_1);
  if ((this != (RtObject *)0x0) &&
     (this_00 = Sexy::RtObject::Cast<Plant>(this), this_00 != (Plant *)0x0)) {
    fVar1 = (float)Plant::GetGeneSkillBoost(this_00);
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) * (fVar1 + 1.0);
  }
  Projectile::GetProps((Projectile *)param_1);
  nop();
  fVar1 = (float)FUN_04296080(*(undefined4 *)(param_1 + 0xd8));
  FUN_04296084(fVar1 - *(float *)(extraout_x0 + 0x1ec),param_1 + 0xd8);
  return;
}

