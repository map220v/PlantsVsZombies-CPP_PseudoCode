// Class: MorningGloryPFProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MorningGloryPFProjectile::Destroy() */

void __thiscall MorningGloryPFProjectile::Destroy(MorningGloryPFProjectile *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  RtId *pRVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtId aRStack_10 [8];
  long lStack_8;
  
  this_00 = (RtMixedPtrBase *)(this + 8);
  lStack_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x70))(this);
    MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
    (**(code **)(*(long *)this + 0x58))(this);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)this_00);
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    pRVar2 = (RtId *)Sexy::RtDb::GetDb();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_18);
    Sexy::RtDb::ReleaseId(pRVar2);
    Sexy::RtId::~RtId(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MorningGloryPFProjectile::StaticClassInit() */

void MorningGloryPFProjectile::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"BlockedZombie");
    (*pcVar3)(plVar2,asStack_10,FUN_04179070,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"MorningGloryPFProjectile");
    (*pcVar3)(plVar2,asStack_10,FUN_0417926c,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MorningGloryPFProjectile::StaticGetClass() */

long * MorningGloryPFProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MorningGloryPFProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MorningGloryPFProjectile::GetClass() const */

long * MorningGloryPFProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"MorningGloryPFProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MorningGloryPFProjectile::InitialSetPosition(float, float, float) */

void __thiscall
MorningGloryPFProjectile::InitialSetPosition
          (MorningGloryPFProjectile *this,float param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  long extraout_x0;
  float *pfVar3;
  float fVar4;
  
  Projectile::InitialSetPosition((Projectile *)this,param_1,param_2,param_3);
  Projectile::GetProps((Projectile *)this);
  nop();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar1 = *(int *)(extraout_x0 + 0x1e0);
  fVar4 = *pfVar3;
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  *(float *)(this + 0x1a8) = (float)(iVar1 * iVar2) + fVar4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MorningGloryPFProjectile::isZombieAlreadyPushed(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
MorningGloryPFProjectile::isZombieAlreadyPushed
          (MorningGloryPFProjectile *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1b0));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1b0));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    this_00 = (RtWeakPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,param_2);
    if (cVar1 != '\0') break;
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MorningGloryPFProjectile::MorningGloryPFProjectile() */

void __thiscall MorningGloryPFProjectile::MorningGloryPFProjectile(MorningGloryPFProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067f5fb0;
  *(undefined ***)(this + 0x10) = &PTR__MorningGloryPFProjectile_067f61a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  return;
}


/* MorningGloryPFProjectile::StaticNew() */

MorningGloryPFProjectile * MorningGloryPFProjectile::StaticNew(void)

{
  MorningGloryPFProjectile *this;
  
  this = ::operator_new(0x1d0);
  MorningGloryPFProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MorningGloryPFProjectile::dealAreaDamage() */

void __thiscall MorningGloryPFProjectile::dealAreaDamage(MorningGloryPFProjectile *this)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  ResourceInfo *pRVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar8 = 0;
  DamageInfo::DamageInfo(aDStack_68);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar2 = operator|(2,4);
  Projectile::CalcSweptCollisionRectBoardSpace();
  EntityFinder::GetEntitiesTouchingRectangleWithoutGrid
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar2,
             aRStack_90);
  uVar9 = local_80;
  lVar3 = FUN_04175ccc(local_80,local_78);
  if (lVar3 != 0) {
    do {
      FUN_04175cd8(uVar9,uVar8);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)aRStack_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
      puVar4 = (undefined8 *)FUN_04175cd8(local_80,uVar8);
      Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar4);
      puVar4 = (undefined8 *)FUN_04175cd8(local_80,uVar8);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_98);
      if (cVar1 == '\0') {
LAB_0417976c:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98)
        ;
      }
      else {
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_98);
        cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pRVar5);
        if ((cVar1 == '\0') ||
           ((this_00 != (Zombie *)0x0 &&
            ((((cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 != '\0' ||
               (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 != '\0')) ||
              (cVar1 = Zombie::IsControlled(this_00), cVar1 != '\0')) ||
             (cVar1 = Zombie::IsInvisible(this_00), cVar1 != '\0')))))) goto LAB_0417976c;
        pcVar10 = *(code **)(*(long *)this + 0x178);
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_98);
        (*pcVar10)(this,aDStack_68,pRVar5);
        plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
        (**(code **)(*plVar7 + 0x110))(plVar7,aDStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98)
        ;
      }
      uVar9 = local_80;
      uVar8 = uVar8 + 1;
      uVar6 = FUN_04175ccc(local_80,local_78);
    } while (uVar8 < uVar6);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MorningGloryPFProjectile::onUpdate(float) */

void MorningGloryPFProjectile::onUpdate(float param_1)

{
  bool bVar1;
  char cVar2;
  Projectile *in_x0;
  long extraout_x0;
  float *pfVar3;
  RtWeakPtrBase *pRVar4;
  Zombie *pZVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  SexyVector3 *pSVar6;
  long *plVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 local_28;
  undefined8 local_20;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps(in_x0);
  nop();
  if (in_x0[0x1ac] == (Projectile)0x0) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(in_x0 + 0x1b0));
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x1b0));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1)
    {
      pRVar4 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aVStack_18,pRVar4);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aVStack_18);
      if (cVar2 != '\0') {
        plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
        (**(code **)(*plVar7 + 0x78))(plVar7,pRVar4 + 8);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_28);
    }
    fVar10 = *(float *)(in_x0 + 0x1c8);
    fVar8 = (float)PVZ_T();
    if (fVar10 < fVar8) {
      dealAreaDamage((MorningGloryPFProjectile *)in_x0);
      fVar8 = (float)PVZ_T();
      *(float *)(in_x0 + 0x1c8) = fVar8 + *(float *)(extraout_x0 + 0x1e4);
    }
    fVar10 = *(float *)(in_x0 + 0x1cc);
    fVar8 = (float)PVZ_T();
    if (fVar10 < fVar8) {
      (**(code **)(*(long *)in_x0 + 0x48))();
    }
  }
  else {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)in_x0);
    if (*(float *)(in_x0 + 0x1a8) < *pfVar3) {
      in_x0[0x1ac] = (Projectile)0x0;
      EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
      Projectile::SetVelocity(in_x0,(SexyVector3 *)aVStack_18);
      fVar8 = (float)PVZ_T();
      *(float *)(in_x0 + 0x1cc) = fVar8 + *(float *)(extraout_x0 + 0x1e8);
      uVar9 = PVZ_T();
      *(undefined4 *)(in_x0 + 0x1c8) = uVar9;
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(in_x0 + 0x1b0));
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(in_x0 + 0x1b0));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20),
            bVar1) {
        pRVar4 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aVStack_18,pRVar4);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aVStack_18);
        if (cVar2 != '\0') {
          pZVar5 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
          Zombie::SetIsControlled(pZVar5,false);
          pZVar5 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
          Zombie::EndCondition(pZVar5,0x18);
          this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
          pSVar6 = (SexyVector3 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(this);
          Sexy::SexyVector3::operator=((SexyVector3 *)(pRVar4 + 8),pSVar6);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18)
        ;
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_28);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MorningGloryPFProjectile::onProjectileInitialized() */

void __thiscall MorningGloryPFProjectile::onProjectileInitialized(MorningGloryPFProjectile *this)

{
  undefined4 uVar1;
  
  this[0x1ac] = (MorningGloryPFProjectile)0x1;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c8) = uVar1;
  *(undefined4 *)(this + 0x1cc) = uVar1;
  std::vector<BlockedZombie,std::allocator<BlockedZombie>>::clear
            ((vector<BlockedZombie,std::allocator<BlockedZombie>> *)(this + 0x1b0));
  return;
}


/* MorningGloryPFProjectile::~MorningGloryPFProjectile() */

void __thiscall MorningGloryPFProjectile::~MorningGloryPFProjectile(MorningGloryPFProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067f5fb0;
  *(undefined ***)(this + 0x10) = &PTR__MorningGloryPFProjectile_067f61a0;
  std::vector<BlockedZombie,std::allocator<BlockedZombie>>::~vector
            ((vector<BlockedZombie,std::allocator<BlockedZombie>> *)(this + 0x1b0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to MorningGloryPFProjectile::~MorningGloryPFProjectile() */

void __thiscall MorningGloryPFProjectile::~MorningGloryPFProjectile(MorningGloryPFProjectile *this)

{
  ~MorningGloryPFProjectile(this + -0x10);
  return;
}


/* MorningGloryPFProjectile::~MorningGloryPFProjectile() */

void __thiscall MorningGloryPFProjectile::~MorningGloryPFProjectile(MorningGloryPFProjectile *this)

{
  ~MorningGloryPFProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MorningGloryPFProjectile::~MorningGloryPFProjectile() */

void __thiscall MorningGloryPFProjectile::~MorningGloryPFProjectile(MorningGloryPFProjectile *this)

{
  ~MorningGloryPFProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MorningGloryPFProjectile::moveThroughTime(float) */

void __thiscall
MorningGloryPFProjectile::moveThroughTime(MorningGloryPFProjectile *this,float param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  RtWeakPtrBase *pRVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar14 = *pfVar5;
  ProjectileHelpers::Integrate((Projectile *)this,param_1);
  uVar9 = *(undefined8 *)(this + 0x1b0);
  fVar13 = *pfVar5;
  iVar4 = FUN_04175c90(uVar9,*(undefined8 *)(this + 0x1b8));
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar10 = (long)(int)uVar1 + -1;
    lVar2 = lVar10;
    lVar12 = (long)(int)uVar1;
    while( true ) {
      lVar11 = lVar2;
      pRVar6 = (RtWeakPtrBase *)FUN_04175cc0(uVar9,lVar12);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar6);
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
      if (cVar3 == '\0') {
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x1b0));
        local_20 = __gnu_cxx::
                   __normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                   ::operator+((__normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                                *)&local_28,lVar12);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)&local_20);
        std::vector<BlockedZombie,std::allocator<BlockedZombie>>::erase
                  ((vector<BlockedZombie,std::allocator<BlockedZombie>> *)(this + 0x1b0),local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      }
      else {
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        puVar7 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_00);
        local_18._0_4_ = (float)*puVar7;
        local_10 = *(undefined4 *)(puVar7 + 1);
        local_18 = CONCAT44((int)((ulong)*puVar7 >> 0x20),(fVar13 - fVar14) + (float)local_18);
        plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        (**(code **)(*plVar8 + 0x78))
                  (plVar8,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                           *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      }
      if (lVar11 == lVar10 - (ulong)uVar1) break;
      uVar9 = *(undefined8 *)(this + 0x1b0);
      lVar2 = lVar11 + -1;
      lVar12 = lVar11;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MorningGloryPFProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
MorningGloryPFProjectile::OnCollideEntity(MorningGloryPFProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *pZVar3;
  string *psVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar5;
  undefined8 uVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  SexyVector3 aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_1 != (BoardEntity *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), !bVar1)) &&
      (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), !bVar1)) &&
     ((bVar1 = Sexy::RtObject::IsA<ZombieTowerDefendBasic>((RtObject *)param_1), !bVar1 &&
      (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)))) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    pZVar3 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    cVar2 = Zombie::IsControlled(pZVar3);
    if (cVar2 == '\0') {
      pZVar3 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
      ;
      cVar2 = Zombie::CanBeLaunchedByPlants(pZVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,(RtWeakPtrBase *)aRStack_28);
        cVar2 = isZombieAlreadyPushed(this,aRStack_20);
        if (cVar2 == '\0') {
          pZVar3 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
          psVar4 = (string *)Zombie::GetTypeName(pZVar3);
          bVar1 = std::operator!=(psVar4,"wave_airbubble");
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          if (bVar1) {
            BuffedProjectileData::BuffedProjectileData((BuffedProjectileData *)aRStack_20);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)aRStack_20,(RtWeakPtr *)aRStack_28);
            this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
            pSVar5 = (SexyVector3 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost(this_00);
            Sexy::SexyVector3::operator=(aSStack_18,pSVar5);
            std::vector<BlockedZombie,std::allocator<BlockedZombie>>::push_back
                      ((vector<BlockedZombie,std::allocator<BlockedZombie>> *)(this + 0x1b0),
                       (BlockedZombie *)aRStack_20);
            if (this[0x1ac] != (MorningGloryPFProjectile)0x0) {
              pZVar3 = (Zombie *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
              Zombie::SetIsControlled(pZVar3,true);
              uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
              Zombie::ApplyCondition((Zombie *)0x41200000,0,uVar6,0x18,1);
            }
            std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aRStack_20);
          }
        }
        else {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

