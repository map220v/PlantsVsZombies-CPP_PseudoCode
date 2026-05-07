// Class: GreenTurnipProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GreenTurnipProjectile::StaticClassInit() */

void GreenTurnipProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GreenTurnipProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040e3b8c,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GreenTurnipProjectile::StaticGetClass() */

long * GreenTurnipProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GreenTurnipProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GreenTurnipProjectile::GetClass() const */

long * GreenTurnipProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"GreenTurnipProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GreenTurnipProjectile::SetInitialLaunchValues(float, float, int) */

void __thiscall
GreenTurnipProjectile::SetInitialLaunchValues
          (GreenTurnipProjectile *this,float param_1,float param_2,int param_3)

{
  *(float *)(this + 0x1a8) = param_1;
  *(int *)(this + 0x1b4) = param_3;
  *(float *)(this + 0x1ac) = param_2;
  return;
}


/* GreenTurnipProjectile::SetBounceCount(int) */

void __thiscall GreenTurnipProjectile::SetBounceCount(GreenTurnipProjectile *this,int param_1)

{
  *(int *)(this + 0x1b8) = param_1;
  return;
}


/* GreenTurnipProjectile::onProjectileInitialized() */

void __thiscall GreenTurnipProjectile::onProjectileInitialized(GreenTurnipProjectile *this)

{
  long extraout_x0;
  
  Projectile::GetProps((Projectile *)this);
  nop();
  *(undefined4 *)(this + 0x1b0) = *(undefined4 *)(extraout_x0 + 0x1e0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GreenTurnipProjectile::PlayBounceHitEffect() */

void __thiscall GreenTurnipProjectile::PlayBounceHitEffect(GreenTurnipProjectile *this)

{
  char cVar1;
  int iVar2;
  long extraout_x0;
  ValueRange *pVVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  char *__s;
  float fVar5;
  float fVar6;
  RtWeakPtr aRStack_28 [8];
  float local_20;
  float local_1c;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  cVar1 = FUN_0547419c(extraout_x0 + 0x1e8);
  if (cVar1 == '\0') {
    GetPAMByName((string *)(extraout_x0 + 0x140));
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_20);
    pVVar3 = (ValueRange *)FUN_040e08e4(*(undefined8 *)(extraout_x0 + 0x150),0);
    local_20 = (float)ValueRange::GetRandomValue(pVVar3);
    pVVar3 = (ValueRange *)FUN_040e08e4(*(undefined8 *)(extraout_x0 + 0x150),1);
    local_1c = (float)ValueRange::GetRandomValue(pVVar3);
    fVar6 = local_20 + *(float *)(this + 0x18);
    fVar5 = (*(float *)(this + 0x1c) - *(float *)(this + 0x20)) + local_1c;
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
    Effect_PopAnim::SetCentered(this_00,true);
    EATextSquish::Vec3::Vec3(aVStack_18,fVar6,fVar5,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,-1);
    iVar2 = (**(code **)(*(long *)this + 200))(this);
    FUN_040e0868(this_00 + 0x1c,iVar2 + 1);
    __s = (char *)FUN_0547429c(extraout_x0 + 0x1e8);
    std::string::string((string *)aVStack_18,__s);
    Effect_PopAnim::PlaySingleAnimation(this_00,aVStack_18,2);
    std::string::~string((string *)aVStack_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GreenTurnipProjectile::GreenTurnipProjectile() */

void __thiscall GreenTurnipProjectile::GreenTurnipProjectile(GreenTurnipProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067dd740;
  *(undefined ***)(this + 0x10) = &PTR__GreenTurnipProjectile_067dd930;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  return;
}


/* GreenTurnipProjectile::StaticNew() */

GreenTurnipProjectile * GreenTurnipProjectile::StaticNew(void)

{
  GreenTurnipProjectile *this;
  
  this = ::operator_new(0x1d8);
  GreenTurnipProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GreenTurnipProjectile::findNearestTargetType(BoardEntityTypeFlag) */

void __thiscall
GreenTurnipProjectile::findNearestTargetType(GreenTurnipProjectile *this,undefined4 param_2)

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
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1c0);
  local_8 = ___stack_chk_guard;
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar16 = *pfVar7;
  pRVar13 = (RtObject *)0x0;
  fVar17 = pfVar7[1];
  iVar3 = BoardTransforms::BoardSpaceToGridX(fVar16);
  iVar5 = *(int *)(this + 0x1b4);
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets(aIStack_30,iVar3,iVar5,iVar4 - iVar3,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,param_2,aIStack_30);
  fVar15 = *(float *)(this + 0x1b0) * *(float *)(this + 0x1b0);
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
       (fVar14 = (float)FUN_040e09a4(*(undefined4 *)(this_02 + 0x18),*(undefined4 *)(this_02 + 0x1c)
                                     ,*(undefined4 *)(this_02 + 0x20)), (float)iVar3 <= fVar14)) {
      iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
      fVar14 = (float)FUN_040e09a4(*(undefined4 *)(this_02 + 0x18),*(undefined4 *)(this_02 + 0x1c),
                                   *(undefined4 *)(this_02 + 0x20));
      iVar4 = BoardTransforms::BoardSpaceToGridX(fVar14);
      if (iVar4 < iVar5) {
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
            if (cVar2 != '\0') goto LAB_040e34f4;
          }
          this_01 = Sexy::RtObject::Cast<Plant>(this_02);
          if (((this_01 == (Plant *)0x0) ||
              ((cVar2 = Plant::IsInvincible(this_01,false), cVar2 == '\0' &&
               (cVar2 = FUN_040e1a14(*(undefined4 *)(this_01 + 0x28)), cVar2 == '\0')))) &&
             ((pGVar12 = Sexy::RtObject::Cast<GridItem>(this_02), pGVar12 == (GridItem *)0x0 ||
              (((cVar2 = RealObject::IsOnTeam(pGVar12,1), cVar2 != '\0' &&
                (cVar2 = (**(code **)(*(long *)pGVar12 + 0x208))(pGVar12), cVar2 != '\0')) ||
               ((cVar2 = RealObject::IsOnTeam(pGVar12,2), cVar2 != '\0' &&
                (cVar2 = (**(code **)(*(long *)pGVar12 + 0x200))(pGVar12), cVar2 != '\0')))))))) {
            uVar6 = *(undefined4 *)(this_02 + 0x1c);
            local_48 = FUN_040e09a4(*(undefined4 *)(this_02 + 0x18),uVar6,
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
LAB_040e34f4:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  } while( true );
}


/* GreenTurnipProjectile::findNextTarget() */

void __thiscall GreenTurnipProjectile::findNextTarget(GreenTurnipProjectile *this)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = operator|(1,2);
  lVar2 = findNearestTargetType(this,uVar1);
  if (lVar2 != 0) {
    return;
  }
  findNearestTargetType(this,4);
  return;
}


/* GreenTurnipProjectile::~GreenTurnipProjectile() */

void __thiscall GreenTurnipProjectile::~GreenTurnipProjectile(GreenTurnipProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067dd740;
  *(undefined ***)(this + 0x10) = &PTR__GreenTurnipProjectile_067dd930;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1c0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to GreenTurnipProjectile::~GreenTurnipProjectile() */

void __thiscall GreenTurnipProjectile::~GreenTurnipProjectile(GreenTurnipProjectile *this)

{
  ~GreenTurnipProjectile(this + -0x10);
  return;
}


/* GreenTurnipProjectile::~GreenTurnipProjectile() */

void __thiscall GreenTurnipProjectile::~GreenTurnipProjectile(GreenTurnipProjectile *this)

{
  ~GreenTurnipProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GreenTurnipProjectile::~GreenTurnipProjectile() */

void __thiscall GreenTurnipProjectile::~GreenTurnipProjectile(GreenTurnipProjectile *this)

{
  ~GreenTurnipProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GreenTurnipProjectile::handleImpact(BoardEntity*) */

void __thiscall
GreenTurnipProjectile::handleImpact(GreenTurnipProjectile *this,BoardEntity *param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  long extraout_x0;
  float *pfVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar4;
  float fVar5;
  float fVar6;
  undefined4 local_18 [2];
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)local_18);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              (this + 0x1c0),(RtWeakPtr *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    uVar2 = FUN_040e08d8(*(undefined8 *)(this + 0x1c0),*(undefined8 *)(this + 0x1c8));
    if (uVar2 <= (ulong)(long)*(int *)(this + 0x1b8)) {
      Projectile::GetProps((Projectile *)this);
      nop();
      fVar5 = *(float *)(extraout_x0 + 0x1e4);
      local_10[0] = *(float *)(this + 0x1a8) * fVar5;
      local_18[0] = 0x3f800000;
      pfVar3 = eastl::max_alt<float>((float *)local_18,local_10);
      fVar6 = *pfVar3;
      *(float *)(this + 0x1b0) = *(float *)(this + 0x1b0) * fVar5;
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)findNextTarget(this);
      if (this_00 !=
          (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           *)0x0) {
        PlayBounceHitEffect(this);
        RealObject::PlayPositionalSound((RealObject *)this,(string *)(extraout_x0 + 0x1f0),0.0);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)local_18);
        Projectile::SetTarget((Projectile *)this,(RtWeakPtr *)local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        pSVar4 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_00);
        Projectile::LaunchAt((Projectile *)this,pSVar4,fVar6,*(float *)(this + 0x1ac));
        SetInitialLaunchValues(this,fVar6,*(float *)(this + 0x1ac),*(int *)(this + 0x1b4));
        uVar1 = 0;
        goto LAB_040e444c;
      }
    }
  }
  uVar1 = Projectile::handleImpact((Projectile *)this,param_1);
LAB_040e444c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

