// Class: ParkourProjectile


/* ParkourProjectile::onProjectileInitialized() */

void __thiscall ParkourProjectile::onProjectileInitialized(ParkourProjectile *this)

{
  SexyVector3 *pSVar1;
  
  *(undefined4 *)(this + 0x1b4) = 0x3f400000;
  *(undefined4 *)(this + 0x1b8) = 0x43a28000;
  pSVar1 = (SexyVector3 *)AssetsManagerManifest::getAssets((AssetsManagerManifest *)this);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1e0),pSVar1);
  pSVar1 = (SexyVector3 *)Projectile::GetVelocity((Projectile *)this);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1ec),pSVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParkourProjectile::StaticClassInit() */

void ParkourProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ParkourProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d50c64,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ParkourProjectile::StaticGetClass() */

long * ParkourProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ParkourProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ParkourProjectile::GetClass() const */

long * ParkourProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ParkourProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ParkourProjectile::SetInitialLaunchValues(float, float, int) */

void __thiscall
ParkourProjectile::SetInitialLaunchValues
          (ParkourProjectile *this,float param_1,float param_2,int param_3)

{
  *(float *)(this + 0x1a8) = param_1;
  *(int *)(this + 0x1ac) = param_3;
  *(float *)(this + 0x1b0) = param_2;
  return;
}


/* ParkourProjectile::canZombieLaunch(Zombie*) */

byte __thiscall ParkourProjectile::canZombieLaunch(ParkourProjectile *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = Zombie::GetSizeType(param_1);
  if ((iVar3 != 2) && (cVar1 = Zombie::CanBeLaunchedByPlants(param_1), cVar1 != '\0')) {
    bVar2 = Zombie::IsBoss(param_1);
    return bVar2 ^ 1;
  }
  return 0;
}


/* ParkourProjectile::stunZombie(Zombie*, float) */

void __thiscall ParkourProjectile::stunZombie(ParkourProjectile *this,Zombie *param_1,float param_2)

{
  RtObject *this_00;
  MandrakeProjectileProps *pMVar1;
  
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pMVar1 = Sexy::RtObject::Cast<MandrakeProjectileProps>(this_00);
  Zombie::ApplyCondition((Zombie *)(param_2 * *(float *)(pMVar1 + 0x1ec)),0,param_1,2,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParkourProjectile::handleImpact(BoardEntity*) */

void __thiscall ParkourProjectile::handleImpact(ParkourProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  RtObject *pRVar3;
  Zombie *pZVar4;
  undefined8 *puVar5;
  ZombieTosserSubSystem *pZVar6;
  char *__s;
  undefined8 local_60;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    ToolPacketData::GetProps();
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
    bVar1 = Sexy::RtObject::IsA<GridItem>(pRVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
    if (!bVar1) {
      if (*(int *)(this + 0x204) == 0) {
        bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
        if (bVar1) {
          pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
          stunZombie(this,pZVar4,1.0);
        }
        __s = "Play_Plant_Akee_Impact";
      }
      else {
        if (*(int *)(this + 0x204) != 1) goto LAB_04d517a4;
        bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
        if (bVar1) {
          ToolPacketData::GetProps();
          pRVar3 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
          pZVar4 = Sexy::RtObject::Cast<Zombie>(pRVar3);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
          cVar2 = canZombieLaunch(this,pZVar4);
          if (cVar2 == '\0') {
            bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
            if (bVar1) {
              pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
              stunZombie(this,pZVar4,1.0);
            }
          }
          else {
            puVar5 = (undefined8 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)pZVar4);
            local_60 = *puVar5;
            local_58 = *(undefined4 *)(puVar5 + 1);
            pZVar6 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
            RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
            ZombieTosserSubSystem::LaunchZombie
                      ((ZombieTosserSubSystem *)0x42a00000,0x3f000000,pZVar6,pZVar4,
                       (RtWeakPtr<Sexy::ResourceInfo> *)&local_60,aRStack_50,1);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_50);
          }
        }
        __s = "Play_Plant_StarFruit_Attack";
      }
      std::string::string((string *)&local_60,__s);
      RealObject::PlayPositionalSound((RealObject *)this,(string *)&local_60,0.0);
      std::string::~string((string *)&local_60);
      nop();
    }
  }
LAB_04d517a4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParkourProjectile::JumpEffect(BoardEntity*) */

void __thiscall ParkourProjectile::JumpEffect(ParkourProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  long lVar2;
  float *pfVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  float fVar5;
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  float local_20;
  float local_1c;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Projectile::getProps((Projectile *)this);
  (**(code **)(*(long *)this + 0x180))(asStack_30,this);
  cVar1 = FUN_0547419c(asStack_30);
  if (cVar1 == '\0') {
    GetPAMByName(asStack_30);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar1 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_20);
      Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)&local_20);
      if ((param_1 == (BoardEntity *)0x0) || (*(char *)(lVar2 + 0x6d) == '\0')) {
        fVar5 = (local_1c + *(float *)(this + 0x1c)) - *(float *)(this + 0x20);
        local_20 = local_20 + *(float *)(this + 0x18);
      }
      else {
        pfVar3 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        fVar5 = (local_1c + pfVar3[1]) - pfVar3[2];
        local_20 = local_20 + *pfVar3;
      }
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(this_00,true);
      EATextSquish::Vec3::Vec3(aVStack_18,local_20,fVar5,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,-1);
      FUN_04d4ee64(this_00 + 0x1c,*(int *)(this + 0x50) + 1);
      std::string::string((string *)aVStack_18,"tiao");
      Effect_PopAnim::PlaySingleAnimation(this_00,aVStack_18,0);
      std::string::~string((string *)aVStack_18);
      nop();
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


/* ParkourProjectile::ParkourProjectile() */

void __thiscall ParkourProjectile::ParkourProjectile(ParkourProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (ParkourProjectile)0x0;
  this[0x1c0] = (ParkourProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_069b26f0;
  *(undefined ***)(this + 0x10) = &PTR__ParkourProjectile_069b28e8;
  *(undefined4 *)(this + 0x1bc) = 0x3f000000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c8));
  DVec3::DVec3((DVec3 *)(this + 0x1e0));
  DVec3::DVec3((DVec3 *)(this + 0x1ec));
  DVec3::DVec3((DVec3 *)(this + 0x1f8));
  *(undefined4 *)(this + 0x208) = 0;
  this[0x20c] = (ParkourProjectile)0x0;
  *(undefined4 *)(this + 0x204) = 2;
  return;
}


/* ParkourProjectile::StaticNew() */

ParkourProjectile * ParkourProjectile::StaticNew(void)

{
  ParkourProjectile *this;
  
  this = ::operator_new(0x210);
  ParkourProjectile(this);
  return this;
}


/* ParkourProjectile::~ParkourProjectile() */

void __thiscall ParkourProjectile::~ParkourProjectile(ParkourProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069b26f0;
  *(undefined ***)(this + 0x10) = &PTR__ParkourProjectile_069b28e8;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x1c8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ParkourProjectile::~ParkourProjectile() */

void __thiscall ParkourProjectile::~ParkourProjectile(ParkourProjectile *this)

{
  ~ParkourProjectile(this + -0x10);
  return;
}


/* ParkourProjectile::~ParkourProjectile() */

void __thiscall ParkourProjectile::~ParkourProjectile(ParkourProjectile *this)

{
  ~ParkourProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ParkourProjectile::~ParkourProjectile() */

void __thiscall ParkourProjectile::~ParkourProjectile(ParkourProjectile *this)

{
  ~ParkourProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParkourProjectile::findNearestTargetType(BoardEntityTypeFlag, int, int, float) */

void __thiscall
ParkourProjectile::findNearestTargetType
          (float param_1,ParkourProjectile *this,undefined4 param_3,int param_4,int param_5)

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
  Zombie *this_01;
  undefined8 uVar9;
  undefined8 uVar10;
  Plant *this_02;
  GridItem *pGVar11;
  RealObject *pRVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  RealObject *local_60;
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
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1c8);
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar15 = *pfVar7;
  pRVar12 = (RealObject *)0x0;
  fVar16 = pfVar7[1];
  iVar3 = BoardTransforms::BoardSpaceToGridX(fVar15 + param_1);
  Sexy::Insets::Insets(aIStack_30,iVar3,param_4,param_5,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,param_3,aIStack_30);
  fVar14 = *(float *)(this + 0x1b8) * *(float *)(this + 0x1b8);
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
      __stack_chk_fail(pRVar12);
    }
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    local_60 = (RealObject *)*puVar8;
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,local_60);
    if ((cVar2 != '\0') &&
       (fVar13 = (float)FUN_04d4efc4(*(undefined4 *)(local_60 + 0x18),
                                     *(undefined4 *)(local_60 + 0x1c),
                                     *(undefined4 *)(local_60 + 0x20)), (float)iVar3 <= fVar13)) {
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      fVar13 = (float)FUN_04d4efc4(*(undefined4 *)(local_60 + 0x18),*(undefined4 *)(local_60 + 0x1c)
                                   ,*(undefined4 *)(local_60 + 0x20));
      iVar5 = BoardTransforms::BoardSpaceToGridX(fVar13);
      if (iVar5 < iVar4) {
        bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)local_60);
        if (bVar1) {
          this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)local_60);
          if (this_01 != (Zombie *)0x0) {
            uVar6 = operator|(1,8);
            cVar2 = Zombie::MatchesAny(this_01,uVar6);
            if (((cVar2 != '\0') || (cVar2 = Zombie::HasCondition(this_01,0x27), cVar2 != '\0')) ||
               (cVar2 = Zombie::HasCondition(this_01,0x25), cVar2 != '\0')) goto LAB_04d52eb4;
          }
          cVar2 = Zombie::IsFlying(this_01);
          if (((cVar2 != '\0') || (cVar2 = RealObject::IsOnTeam(this_01,1), cVar2 != '\0')) ||
             ((cVar2 = FUN_04d500b4(*(undefined4 *)(this_01 + 0xcc)), cVar2 != '\0' ||
              ((iVar4 = Zombie::GetInvisibleState(this_01), iVar4 == 2 ||
               (cVar2 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar2 != '\0'))))))
          goto LAB_04d52eb4;
        }
        uVar9 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
        local_40 = std::
                   find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                             (uVar9,uVar10,&local_60);
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38)
        ;
        if (((!bVar1) &&
            ((this_02 = Sexy::RtObject::Cast<Plant>((RtObject *)local_60), this_02 == (Plant *)0x0
             || ((cVar2 = Plant::IsInvincible(this_02,false), cVar2 == '\0' &&
                 (cVar2 = FUN_04d500ac(*(undefined4 *)(this_02 + 0x28)), cVar2 == '\0')))))) &&
           ((pGVar11 = Sexy::RtObject::Cast<GridItem>((RtObject *)local_60),
            pGVar11 == (GridItem *)0x0 ||
            (((cVar2 = RealObject::IsOnTeam(pGVar11,1), cVar2 != '\0' &&
              (cVar2 = (**(code **)(*(long *)pGVar11 + 0x208))(pGVar11), cVar2 != '\0')) ||
             ((cVar2 = RealObject::IsOnTeam(pGVar11,2), cVar2 != '\0' &&
              (cVar2 = (**(code **)(*(long *)pGVar11 + 0x200))(pGVar11), cVar2 != '\0')))))))) {
          uVar6 = *(undefined4 *)(local_60 + 0x1c);
          local_48 = FUN_04d4efc4(*(undefined4 *)(local_60 + 0x18),uVar6,
                                  *(undefined4 *)(local_60 + 0x20));
          fVar13 = fVar16;
          local_44 = uVar6;
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,fVar15,fVar16);
          uVar6 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_48,(SexyVector2 *)&local_40);
          local_38 = CONCAT44(fVar13,uVar6);
          fVar13 = (float)VectorNorm((FPoint *)&local_38);
          if (fVar13 < fVar14) {
            pRVar12 = local_60;
            fVar14 = fVar13;
          }
        }
      }
    }
LAB_04d52eb4:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  } while( true );
}


/* ParkourProjectile::findNextTarget(int, int) */

void __thiscall ParkourProjectile::findNextTarget(ParkourProjectile *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = findNearestTargetType((ParkourProjectile *)(float)param_2,this,2,param_1,2);
  if (lVar1 != 0) {
    return;
  }
  findNearestTargetType((ParkourProjectile *)(float)param_2,this,4,param_1,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParkourProjectile::onUpdate(float) */

void ParkourProjectile::onUpdate(float param_1)

{
  int iVar1;
  Projectile *in_x0;
  RtObject *pRVar2;
  MandrakeProjectileProps *pMVar3;
  float *pfVar4;
  PopAnimRig *pPVar5;
  long lVar6;
  SexyVector3 *pSVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  char *__s;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  float fVar8;
  undefined4 uVar9;
  string asStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = (RtObject *)Projectile::GetProps(in_x0);
  pMVar3 = Sexy::RtObject::Cast<MandrakeProjectileProps>(pRVar2);
  iVar1 = *(int *)(in_x0 + 0x204);
  if (iVar1 == 2) {
    iVar1 = FUN_04d4ee6c(*(undefined4 *)(in_x0 + 0xa8));
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)findNextTarget((ParkourProjectile *)in_x0,iVar1,0);
    if (this != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0) {
      lVar6 = Projectile::getProps(in_x0);
      __s = (char *)FUN_0547429c(lVar6 + 0x148);
      __n = (RtWeakPtr<Sexy::ResourceInfo> *)&local_60;
      std::string::string(asStack_78,__s);
      nop();
      ToolPacketData::GetProps();
      pRVar2 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
      this_00 = Sexy::RtObject::Cast<Zombie>(pRVar2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
      if (((this_00 == (Zombie *)0x0) || (iVar1 = Zombie::GetSizeType(this_00), iVar1 != 2)) &&
         (iVar1 = Sexy::Rand(2), iVar1 == 0)) {
        in_x0[0x1c0] = (Projectile)0x0;
        *(undefined4 *)(in_x0 + 0x204) = 0;
        std::string::append(asStack_78,"jump",(size_t)__n);
      }
      else {
        *(undefined4 *)(in_x0 + 0x204) = 1;
        std::string::append(asStack_78,"sliding_tackle",(size_t)__n);
      }
      pPVar5 = (PopAnimRig *)Projectile::GetAnimRig(in_x0);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string((string *)&local_60,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,aRStack_68,
                 (RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
      PopAnimRig::PlayAndStop
                (pPVar5,asStack_78,0,
                 (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aDStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aDStack_50);
      std::string::~string((string *)&local_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      if (*(int *)(in_x0 + 0x204) == 0) {
        pSVar7 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)in_x0);
        Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 0x1f8),pSVar7);
        pRVar2 = (RtObject *)Projectile::GetProps(in_x0);
        Sexy::RtObject::Cast<MandrakeProjectileProps>(pRVar2);
        local_60 = 0x3f800000;
        pfVar4 = eastl::max_alt<float>((float *)&local_60,(float *)(in_x0 + 0x1a8));
        fVar8 = *pfVar4;
        pSVar7 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this);
        Projectile::LaunchAt(in_x0,pSVar7,fVar8 * 0.6,*(float *)(in_x0 + 0x1b0));
        SetInitialLaunchValues
                  ((ParkourProjectile *)in_x0,fVar8,*(float *)(in_x0 + 0x1b0),
                   *(int *)(in_x0 + 0x1ac));
        JumpEffect((ParkourProjectile *)in_x0,(BoardEntity *)this);
      }
      std::string::~string(asStack_78);
      lVar6 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)in_x0);
      fVar8 = *(float *)(lVar6 + 8);
      goto LAB_04d53330;
    }
  }
  else if (iVar1 == 0) {
    if (in_x0[0x1c0] != (Projectile)0x0) {
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)in_x0);
      fVar8 = pfVar4[2];
      if ((fVar8 < 3.0) && (*pfVar4 != *(float *)(in_x0 + 0x1f8))) {
        Projectile::SetPosition(in_x0,*pfVar4,*(float *)(in_x0 + 0x1fc),0.0);
        Projectile::SetVelocity(in_x0,(SexyVector3 *)(in_x0 + 0x1ec));
        Projectile::SetAcceleration(in_x0,(SexyVector3 *)(in_x0 + 0x1e0));
        pPVar5 = (PopAnimRig *)Projectile::GetAnimRig(in_x0);
        std::string::string((string *)&local_60,"run");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
        PopAnimRig::PlayAndContinue(pPVar5,(string *)&local_60,0,aDStack_50);
        std::string::~string((string *)&local_60);
        nop();
        fVar8 = pfVar4[2];
        *(undefined4 *)(in_x0 + 0x204) = 2;
      }
      goto LAB_04d53330;
    }
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_04d4ee6c(*(undefined4 *)(in_x0 + 0xa8));
    lVar6 = findNextTarget((ParkourProjectile *)in_x0,iVar1,0);
    if (lVar6 != 0) {
      pPVar5 = (PopAnimRig *)Projectile::GetAnimRig(in_x0);
      std::string::string((string *)&local_60,"sliding_tackle02");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
      PopAnimRig::PlayAndContinue(pPVar5,(string *)&local_60,0,aDStack_50);
      std::string::~string((string *)&local_60);
      nop();
      lVar6 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)in_x0);
      fVar8 = *(float *)(lVar6 + 8);
      goto LAB_04d53330;
    }
    *(undefined4 *)(in_x0 + 0x204) = 3;
    Projectile::SetAcceleration(in_x0,(SexyVector3 *)(in_x0 + 0x1e0));
    Projectile::SetVelocity(in_x0,(SexyVector3 *)(in_x0 + 0x1ec));
    pPVar5 = (PopAnimRig *)Projectile::GetAnimRig(in_x0);
    std::string::string((string *)aRStack_70,"sliding_tackle03");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)asStack_78);
    std::string::string((string *)&local_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,aRStack_68,
               (string *)&local_60);
    PopAnimRig::PlayAndStop
              (pPVar5,(string *)aRStack_70,0,
               (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    std::string::~string((string *)&local_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
    std::string::~string((string *)aRStack_70);
    nop();
  }
  lVar6 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)in_x0);
  fVar8 = *(float *)(lVar6 + 8);
LAB_04d53330:
  uVar9 = 0x41a00000;
  if (*(float *)(pMVar3 + 0x1e0) - 20.0 <= fVar8) {
    pSVar7 = (SexyVector3 *)Projectile::GetVelocity(in_x0);
    local_60 = Sexy::SexyVector3::operator*(pSVar7,1.5);
    local_5c = fVar8;
    local_58 = uVar9;
    Projectile::SetVelocity(in_x0,(SexyVector3 *)&local_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParkourProjectile::DoBounce() */

void __thiscall ParkourProjectile::DoBounce(ParkourProjectile *this)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  RtObject *this_01;
  float *pfVar2;
  SexyVector3 *pSVar3;
  float fVar4;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04d4ee6c(*(undefined4 *)(this + 0xa8));
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)findNextTarget(this,iVar1,0x14);
  this_01 = (RtObject *)Projectile::GetProps((Projectile *)this);
  Sexy::RtObject::Cast<MandrakeProjectileProps>(this_01);
  local_18[0] = 0x3f800000;
  pfVar2 = eastl::max_alt<float>((float *)local_18,(float *)(this + 0x1a8));
  fVar4 = *pfVar2;
  this[0x1c0] = (ParkourProjectile)0x1;
  if (this_00 ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    EATextSquish::Vec3::Vec3((Vec3 *)local_18,*pfVar2 + 30.0,pfVar2[1],0.0);
    Projectile::LaunchAt((Projectile *)this,(SexyVector3 *)local_18,fVar4,*(float *)(this + 0x1b0));
    this[0x1c0] = (ParkourProjectile)0x1;
  }
  else {
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    Projectile::LaunchAt((Projectile *)this,pSVar3,fVar4,*(float *)(this + 0x1b0));
    SetInitialLaunchValues(this,fVar4,*(float *)(this + 0x1b0),*(int *)(this + 0x1ac));
    this[0x1a5] = (ParkourProjectile)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParkourProjectile::onAnimStoppedCallback(std::string const&) */

void __thiscall ParkourProjectile::onAnimStoppedCallback(ParkourProjectile *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  float *pfVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"sliding_tackle");
  if (bVar1) {
    pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    std::string::string(asStack_40,"sliding_tackle02");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    pfVar3 = (float *)Projectile::GetVelocity((Projectile *)this);
    Projectile::SetVelocity((Projectile *)this,*pfVar3 * 1.3,pfVar3[1],pfVar3[2]);
  }
  else {
    bVar1 = std::operator==(param_1,"jump");
    if (bVar1) {
      pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      std::string::string(asStack_40,"kf");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      DoBounce(this);
    }
    else {
      bVar1 = std::operator==(param_1,"kf02");
      if (bVar1) {
        pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
        std::string::string(asStack_40,"kf");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
        std::string::~string(asStack_40);
        nop();
        DoBounce(this);
      }
      else {
        bVar1 = std::operator==(param_1,"sliding_tackle03");
        if (bVar1) {
          *(undefined4 *)(this + 0x204) = 2;
          pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
          std::string::string(asStack_40,"run");
          Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
          PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
          std::string::~string(asStack_40);
          nop();
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParkourProjectile::SetAvatarIndex(int) */

void __thiscall ParkourProjectile::SetAvatarIndex(ParkourProjectile *this,int param_1)

{
  long lVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  long lVar4;
  string *psVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = ___stack_chk_guard;
  uVar7 = DAT_06b976a8 & 1;
  if (((DAT_06b976a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b976a8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b97670,"custom_01");
    nop();
    std::string::string((string *)&DAT_06b97678,"custom_02");
    nop();
    __cxa_guard_release(&DAT_06b976a8);
    __cxa_atexit(FUN_04d4ecc4,uVar7,&DAT_06a88000);
  }
  if (((DAT_06b976d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b976d0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b975b0,(string *)&DAT_06b97670,(allocator *)&DAT_06b97680);
    __cxa_guard_release(&DAT_06b976d0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b975b0,
                 &DAT_06a88000);
  }
  uVar7 = 0;
  pPVar3 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  PopAnimRig::SetLayerVisibility(pPVar3,(vector *)&DAT_06b975c8,false);
  lVar4 = FUN_04d4eed8(DAT_06b975b0,DAT_06b975b8);
  if (lVar4 != 0) {
    do {
      pPVar3 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      psVar5 = (string *)FUN_04d4eee4(DAT_06b975b0,uVar7);
      PopAnimRig::SetLayerVisibility(pPVar3,psVar5,false);
      if ((long)param_1 == uVar7) {
        pPVar3 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
        psVar5 = (string *)FUN_04d4eee4(DAT_06b975b0,(long)param_1);
        PopAnimRig::SetLayerVisibility(pPVar3,psVar5,true);
      }
      uVar7 = uVar7 + 1;
      uVar6 = FUN_04d4eed8(DAT_06b975b0,DAT_06b975b8);
    } while (uVar7 < uVar6);
  }
  if (param_1 == 2) {
    pPVar3 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    PopAnimRig::SetLayerVisibility(pPVar3,(vector *)&DAT_06b975c8,true);
  }
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParkourProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall ParkourProjectile::OnCollideEntity(ParkourProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  PopAnimRig *pPVar5;
  BoardEntity *local_88 [3];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1c8);
  local_8 = ___stack_chk_guard;
  local_88[0] = param_1;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_60 = std::
             find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                       (uVar3,uVar4,local_88);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
  if (bVar1) {
    uVar2 = 0;
  }
  else if ((*(int *)(this + 0x204) == 0) && (this[0x1a5] != (ParkourProjectile)0x0)) {
    uVar2 = 0;
  }
  else {
    if ((local_88[0] != (BoardEntity *)0x0) &&
       ((bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)local_88[0]), bVar1 ||
        (bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)local_88[0]), bVar1)))) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)this_00,local_88);
    }
    uVar2 = Projectile::OnCollideEntity((Projectile *)this,local_88[0]);
    this[0x1a5] = (ParkourProjectile)0x1;
    if (*(int *)(this + 0x204) == 0) {
      pPVar5 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      std::string::string(asStack_68,"kf02");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string((string *)&local_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                 (__normal_iterator *)&local_60,(string *)&local_58);
      PopAnimRig::PlayAndStop(pPVar5,asStack_68,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)&local_58);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
      DoBounce(this);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

