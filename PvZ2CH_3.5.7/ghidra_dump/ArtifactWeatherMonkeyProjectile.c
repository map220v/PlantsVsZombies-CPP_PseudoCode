// Class: ArtifactWeatherMonkeyProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWeatherMonkeyProjectile::StaticClassInit() */

void ArtifactWeatherMonkeyProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactWeatherMonkeyProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_037608cc,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWeatherMonkeyProjectile::StaticGetClass() */

long * ArtifactWeatherMonkeyProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactWeatherMonkeyProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactWeatherMonkeyProjectile::GetClass() const */

long * ArtifactWeatherMonkeyProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactWeatherMonkeyProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWeatherMonkeyProjectile::canBePushed(Zombie*) */

void __thiscall
ArtifactWeatherMonkeyProjectile::canBePushed(ArtifactWeatherMonkeyProjectile *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  RtObject *this_01;
  ArtifactWeatherMonkeyProjectileProps *pAVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_1 == (Zombie *)0x0) || (cVar1 = Zombie::IsBoss(param_1), cVar1 != '\0')) ||
      (cVar1 = Zombie::CanBeLaunchedByPlantsExtra(param_1), cVar1 == '\0')) ||
     (cVar1 = RealObject::IsOnTeam(param_1,1), cVar1 != '\0')) {
    bVar2 = false;
  }
  else {
    this_01 = (RtObject *)Projectile::GetProps((Projectile *)this);
    pAVar3 = Sexy::RtObject::Cast<ArtifactWeatherMonkeyProjectileProps>(this_01);
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(pAVar3 + 0x1e0);
    uVar4 = Zombie::GetTypeName(param_1);
    FUN_05475d88(asStack_20,uVar4);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar4,uVar5,asStack_20);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    bVar2 = !bVar2;
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWeatherMonkeyProjectile::explode() */

void __thiscall ArtifactWeatherMonkeyProjectile::explode(ArtifactWeatherMonkeyProjectile *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  undefined8 *puVar11;
  Zombie *this_00;
  SexyVector3 *pSVar12;
  ZombieTosserSubSystem *pZVar13;
  long *plVar14;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [2];
  int local_d8;
  int local_d4;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
  pfVar10 = (float *)std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this);
  iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar10);
  iVar4 = BoardTransforms::BoardSpaceToGridXUnbounded(pfVar10[1]);
  Sexy::Insets::Insets((Insets *)&local_d8,iVar3 + -1,iVar4 + -1,3,3);
  uVar5 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares(avStack_c8,uVar5,(Insets *)&local_d8);
  local_f0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_c8);
  local_e8[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_c8);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_f0,(__normal_iterator *)local_e8)
        , bVar1) {
    puVar11 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f0);
    plVar14 = (long *)*puVar11;
    cVar2 = RealObject::IsOnTeam(plVar14,2);
    if (cVar2 != '\0') {
      DamageInfo::DamageInfo(aDStack_68);
      (**(code **)(*(long *)this + 0x178))(this,aDStack_68,plVar14);
      (**(code **)(*plVar14 + 0x110))(plVar14,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
  iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(local_d8);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar6 = BoardTransforms::GridToBoardSpaceYUnbounded(local_d4);
  iVar7 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar8 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar9 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets
            ((Insets *)aDStack_68,iVar3 - (int)((double)iVar4 * 0.5),
             iVar6 - (int)((double)iVar7 * 0.5),(int)((double)iVar8 * 1.5),iVar9);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_c8,2,aDStack_68,0xffffffff,0xffffffff);
  local_f8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_c8);
  local_f0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_c8);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_f8,(__normal_iterator *)&local_f0), bVar1) {
    puVar11 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f8);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar11);
    if ((((this_00 != (Zombie *)0x0) &&
         (cVar2 = Zombie::CanBeLaunchedByPlants(this_00), cVar2 != '\0')) &&
        (cVar2 = RealObject::IsOnTeam(this_00,2), cVar2 != '\0')) &&
       (iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00), iVar3 < 800)) {
      DVec3::DVec3((DVec3 *)local_e8);
      pSVar12 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this_00);
      Sexy::SexyVector3::operator=((SexyVector3 *)local_e8,pSVar12);
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      local_e8[0] = CONCAT44(local_e8[0]._4_4_,(float)iVar3 + (float)local_e8[0]);
      pZVar13 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
      ZombieTosserSubSystem::LaunchZombie
                ((ZombieTosserSubSystem *)0x428c0000,0x3f800000,pZVar13,this_00,(DVec3 *)local_e8,
                 aRStack_b0,0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_b0);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f8);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWeatherMonkeyProjectile::moveThroughTime(float) */

void __thiscall
ArtifactWeatherMonkeyProjectile::moveThroughTime
          (ArtifactWeatherMonkeyProjectile *this,float param_1)

{
  bool bVar1;
  char cVar2;
  float *pfVar3;
  RtWeakPtr *this_00;
  ResourceInfo *this_01;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined8 local_28;
  undefined8 local_20;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar6 = *pfVar3;
  if (*(float *)(this + 0x1ac) < fVar6) {
    explode(this);
    (**(code **)(*(long *)this + 0x168))(this,0);
  }
  else {
    ProjectileHelpers::Integrate((Projectile *)this,param_1);
    fVar5 = *pfVar3;
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x1b8));
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1b8));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1)
    {
      this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28)
      ;
      this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      cVar2 = canBePushed(this,(Zombie *)this_01);
      if (cVar2 != '\0') {
        puVar4 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this_01);
        local_18 = (float)*puVar4;
        local_10 = *(undefined4 *)(puVar4 + 1);
        _local_18 = CONCAT44((int)((ulong)*puVar4 >> 0x20),(fVar5 - fVar6) + local_18);
        (**(code **)(*(long *)this_01 + 0x78))(this_01,&local_18);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWeatherMonkeyProjectile::~ArtifactWeatherMonkeyProjectile() */

void __thiscall
ArtifactWeatherMonkeyProjectile::~ArtifactWeatherMonkeyProjectile
          (ArtifactWeatherMonkeyProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06690660;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactWeatherMonkeyProjectile_06690850;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1b8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ArtifactWeatherMonkeyProjectile::~ArtifactWeatherMonkeyProjectile() */

void __thiscall
ArtifactWeatherMonkeyProjectile::~ArtifactWeatherMonkeyProjectile
          (ArtifactWeatherMonkeyProjectile *this)

{
  ~ArtifactWeatherMonkeyProjectile(this + -0x10);
  return;
}


/* ArtifactWeatherMonkeyProjectile::~ArtifactWeatherMonkeyProjectile() */

void __thiscall
ArtifactWeatherMonkeyProjectile::~ArtifactWeatherMonkeyProjectile
          (ArtifactWeatherMonkeyProjectile *this)

{
  ~ArtifactWeatherMonkeyProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArtifactWeatherMonkeyProjectile::~ArtifactWeatherMonkeyProjectile() */

void __thiscall
ArtifactWeatherMonkeyProjectile::~ArtifactWeatherMonkeyProjectile
          (ArtifactWeatherMonkeyProjectile *this)

{
  ~ArtifactWeatherMonkeyProjectile(this + -0x10);
  return;
}


/* ArtifactWeatherMonkeyProjectile::ArtifactWeatherMonkeyProjectile() */

void __thiscall
ArtifactWeatherMonkeyProjectile::ArtifactWeatherMonkeyProjectile
          (ArtifactWeatherMonkeyProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06690660;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactWeatherMonkeyProjectile_06690850;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = DAT_06aaf8f0;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1b8));
  this[0x1b0] = (ArtifactWeatherMonkeyProjectile)0x0;
  *(undefined4 *)(this + 0x1d0) = 0;
  return;
}


/* ArtifactWeatherMonkeyProjectile::StaticNew() */

ArtifactWeatherMonkeyProjectile * ArtifactWeatherMonkeyProjectile::StaticNew(void)

{
  ArtifactWeatherMonkeyProjectile *this;
  
  this = ::operator_new(0x1d8);
  ArtifactWeatherMonkeyProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWeatherMonkeyProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ArtifactWeatherMonkeyProjectile::OnCollideEntity
          (ArtifactWeatherMonkeyProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  Zombie *this_01;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((((param_1 != (BoardEntity *)0x0) &&
        (this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_01 != (Zombie *)0x0)) &&
       (cVar1 = (**(code **)(*(long *)this_01 + 0x328))(), cVar1 == '\0')) &&
      ((cVar1 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar1 == '\0' &&
       (cVar1 = FUN_0373c274(*(undefined4 *)(this_01 + 0x28)), cVar1 == '\0')))) &&
     ((cVar1 = Zombie::HasCondition(this_01,0x5a), cVar1 == '\0' &&
      ((cVar1 = Zombie::HasCondition(this_01,0x65), cVar1 == '\0' &&
       (cVar1 = Zombie::IsTargetable(this_01), cVar1 != '\0')))))) {
    cVar1 = Zombie::IsInSandStorm(this_01);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this_01 + 0x260))(this_01);
    }
    if (this[0x1b0] == (ArtifactWeatherMonkeyProjectile)0x0) {
      this[0x1b0] = (ArtifactWeatherMonkeyProjectile)0x1;
      if (*(int *)(this + 0x1a8) < 4) {
        puVar4 = (undefined4 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this);
        *(undefined4 *)(this + 0x1ac) = *puVar4;
      }
      else {
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        pfVar7 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
        local_10 = CONCAT44(local_10._4_4_,
                            *pfVar7 + (*(float *)(this + 0x1d0) + 1.0) * (float)(iVar3 << 1));
        pfVar7 = eastl::min_alt<float>((float *)&local_10,(float *)&DAT_06aaf8f0);
        *(float *)(this + 0x1ac) = *pfVar7;
      }
    }
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1b8);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    ToolPacketData::GetProps();
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                         (uVar5,uVar6,aRStack_20);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    if (bVar2) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00,
                 (RtWeakPtr *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      cVar1 = canBePushed(this,this_01);
      if (cVar1 == '\0') {
        puVar4 = (undefined4 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this);
        *(undefined4 *)(this + 0x1ac) = *puVar4;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

