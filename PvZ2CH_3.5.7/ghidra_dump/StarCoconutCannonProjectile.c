// Class: StarCoconutCannonProjectile


/* StarCoconutCannonProjectile::onInitialized() */

void __thiscall StarCoconutCannonProjectile::onInitialized(StarCoconutCannonProjectile *this)

{
  this[0x1ac] = (StarCoconutCannonProjectile)0x0;
  *(undefined4 *)(this + 0x1a8) = 0x447a0000;
  return;
}


/* StarCoconutCannonProjectile::SetExplosionParameters(float, float, float, float) */

void __thiscall
StarCoconutCannonProjectile::SetExplosionParameters
          (StarCoconutCannonProjectile *this,float param_1,float param_2,float param_3,float param_4
          )

{
  *(float *)(this + 0x1a8) = param_1;
  *(float *)(this + 0x1b0) = param_2;
  *(float *)(this + 0x1b8) = param_4;
  *(int *)(this + 0x1b4) = (int)param_3;
  return;
}


/* StarCoconutCannonProjectile::handleExplosionDone(std::string const&) */

void StarCoconutCannonProjectile::handleExplosionDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarCoconutCannonProjectile::StaticClassInit() */

void StarCoconutCannonProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarCoconutCannonProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0402fde4,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarCoconutCannonProjectile::StaticGetClass() */

long * StarCoconutCannonProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarCoconutCannonProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarCoconutCannonProjectile::GetClass() const */

long * StarCoconutCannonProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"StarCoconutCannonProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarCoconutCannonProjectile::StarCoconutCannonProjectile() */

void __thiscall
StarCoconutCannonProjectile::StarCoconutCannonProjectile(StarCoconutCannonProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067b9840;
  *(undefined ***)(this + 0x10) = &PTR__StarCoconutCannonProjectile_067b9a30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  return;
}


/* StarCoconutCannonProjectile::StaticNew() */

StarCoconutCannonProjectile * StarCoconutCannonProjectile::StaticNew(void)

{
  StarCoconutCannonProjectile *this;
  
  this = ::operator_new(0x1d8);
  StarCoconutCannonProjectile(this);
  return this;
}


/* StarCoconutCannonProjectile::~StarCoconutCannonProjectile() */

void __thiscall
StarCoconutCannonProjectile::~StarCoconutCannonProjectile(StarCoconutCannonProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067b9840;
  *(undefined ***)(this + 0x10) = &PTR__StarCoconutCannonProjectile_067b9a30;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1c0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to StarCoconutCannonProjectile::~StarCoconutCannonProjectile() */

void __thiscall
StarCoconutCannonProjectile::~StarCoconutCannonProjectile(StarCoconutCannonProjectile *this)

{
  ~StarCoconutCannonProjectile(this + -0x10);
  return;
}


/* StarCoconutCannonProjectile::~StarCoconutCannonProjectile() */

void __thiscall
StarCoconutCannonProjectile::~StarCoconutCannonProjectile(StarCoconutCannonProjectile *this)

{
  ~StarCoconutCannonProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StarCoconutCannonProjectile::~StarCoconutCannonProjectile() */

void __thiscall
StarCoconutCannonProjectile::~StarCoconutCannonProjectile(StarCoconutCannonProjectile *this)

{
  ~StarCoconutCannonProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarCoconutCannonProjectile::doExplosion(std::string const&) */

void StarCoconutCannonProjectile::doExplosion(string *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  RtWeakPtrBase *pRVar6;
  Zombie *pZVar7;
  float *pfVar8;
  int *piVar9;
  ulong uVar10;
  Zombie *this;
  char *pcVar11;
  RtObject *this_00;
  EffectAnimRig_CoconutCannonball *pEVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  RtMixedPtr aRStack_80 [8];
  undefined4 local_78 [4];
  int local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  uVar15 = *(undefined8 *)(param_1 + 0x1c0);
  lVar13 = 0;
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_0402cfc4(uVar15,*(undefined8 *)(param_1 + 0x1c8));
  if (0 < iVar4) {
    do {
      pRVar6 = (RtWeakPtrBase *)FUN_0402cfd0(uVar15,lVar13);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_68,pRVar6);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_68);
      if (cVar2 == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      }
      else {
        pZVar7 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        Zombie::EndCondition(pZVar7,0x18);
        pZVar7 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        Zombie::SetIsControlled(pZVar7,false);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      }
      lVar13 = lVar13 + 1;
      uVar15 = *(undefined8 *)(param_1 + 0x1c0);
      iVar4 = FUN_0402cfc4(uVar15,*(undefined8 *)(param_1 + 0x1c8));
    } while ((int)lVar13 < iVar4);
  }
  (**(code **)(*(long *)param_1 + 0x168))(param_1,0);
  pfVar8 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  iVar5 = BoardTransforms::BoardSpaceToGridX(*pfVar8);
  local_68 = iVar5 + -1;
  local_78[0] = 0;
  piVar9 = eastl::max_alt<int>((int *)local_78,&local_68);
  iVar4 = *piVar9;
  lVar13 = *(long *)(gLawnApp + 0x9f0);
  local_68 = iVar5 + 1;
  piVar9 = eastl::min_alt<int>((int *)(lVar13 + 0xf8),&local_68);
  iVar5 = *piVar9;
  iVar1 = *(int *)(lVar13 + 0xfc);
  uVar14 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  Sexy::Insets::Insets((Insets *)local_78,iVar4,0,iVar5 - iVar4,iVar1);
  EntityFinder::GetEntitiesInGridSquares
            ((RtWeakPtr<Sexy::SoundResource> *)&local_68,2,(Insets *)local_78);
  uVar15 = CONCAT44(uStack_64,local_68);
  uVar10 = FUN_0402cfd8(uVar15,local_60);
  if (uVar10 != 0) {
    for (; uVar14 < uVar10; uVar14 = uVar14 + 1) {
      FUN_0402cfe4(uVar15);
      nop();
      cVar2 = Zombie::IsFlying(this);
      if ((((((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)this + 0x328))(this), cVar2 == '\0')
             ) && (cVar2 = Zombie::IsOnGround(this), cVar2 != '\0')) &&
           ((bVar3 = Sexy::RtObject::IsA<ZombiePirateCannon>((RtObject *)this), !bVar3 &&
            (bVar3 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this), !bVar3)))) &&
          ((bVar3 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this), !bVar3 &&
           ((bVar3 = Sexy::RtObject::IsA<ZombieTowerDefendBasic>((RtObject *)this), !bVar3 &&
            (cVar2 = (**(code **)(*(long *)this + 0x4d8))(this), cVar2 == '\0')))))) &&
         (cVar2 = (**(code **)(*(long *)this + 0x508))(this), cVar2 == '\0')) {
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(param_1 + 0x1b8),0,this,2,1);
      }
      uVar15 = CONCAT44(uStack_64,local_68);
      uVar10 = FUN_0402cfd8(uVar15,local_60);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
  pcVar11 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar11,"Play_General_Explo_01");
  this_00 = (RtObject *)Projectile::GetAnimRig((Projectile *)param_1);
  pEVar12 = Sexy::RtObject::Cast<EffectAnimRig_CoconutCannonball>(this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
  std::string::string((string *)&local_68,"handleExplosionDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
             (Insets *)local_78,(RtWeakPtr<Sexy::SoundResource> *)&local_68);
  EffectAnimRig_CoconutCannonball::PlayStarExplosion(pEVar12,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&local_68);
  nop();
  Sexy::RtId::~RtId((RtId *)local_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  Projectile::SetPaused((Projectile *)param_1,true);
  Projectile::SetShadow((Projectile *)param_1,false);
  param_1[0x1ac] = (string)0x1;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarCoconutCannonProjectile::OnCollideRoof() */

void __thiscall StarCoconutCannonProjectile::OnCollideRoof(StarCoconutCannonProjectile *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1ac] == (StarCoconutCannonProjectile)0x0) {
    std::string::string(asStack_10,"");
    doExplosion((string *)this);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarCoconutCannonProjectile::moveThroughTime(float) */

void __thiscall
StarCoconutCannonProjectile::moveThroughTime(StarCoconutCannonProjectile *this,float param_1)

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
  RtObject *this_01;
  EffectAnimRig_CoconutCannonball *this_02;
  float *pfVar9;
  float *pfVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a5] == (StarCoconutCannonProjectile)0x0) {
    this_01 = (RtObject *)Projectile::GetAnimRig((Projectile *)this);
    this_02 = Sexy::RtObject::Cast<EffectAnimRig_CoconutCannonball>(this_01);
    fVar16 = (float)EffectAnimRig_CoconutCannonball::CalcFuseAnimLength(this_02);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar15 = *pfVar5;
    pfVar9 = (float *)Projectile::GetVelocity((Projectile *)this);
    pfVar10 = (float *)Projectile::GetVelocityScale((Projectile *)this);
    if (*(float *)(this + 0x1a8) < fVar15 + fVar16 * *pfVar10 * *pfVar9) {
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_70);
      std::string::string((string *)&local_60,"doExplosion");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                 (RtId *)&local_68,(string *)&local_60);
      EffectAnimRig_CoconutCannonball::PlayStarPlantFoodFlightFuse(this_02,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)&local_60);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      fVar15 = *pfVar5;
      this[0x1a5] = (StarCoconutCannonProjectile)0x1;
    }
  }
  else {
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar15 = *pfVar5;
  }
  ProjectileHelpers::Integrate((Projectile *)this,param_1);
  uVar11 = *(undefined8 *)(this + 0x1c0);
  fVar16 = *pfVar5;
  iVar4 = FUN_0402cfc4(uVar11,*(undefined8 *)(this + 0x1c8));
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar12 = (long)(int)uVar1 + -1;
    lVar2 = lVar12;
    lVar14 = (long)(int)uVar1;
    while( true ) {
      lVar13 = lVar2;
      pRVar6 = (RtWeakPtrBase *)FUN_0402cfd0(uVar11,lVar14);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_78,pRVar6);
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_78);
      if (cVar3 == '\0') {
        local_70 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x1c0));
        local_68 = __gnu_cxx::
                   __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                   ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_70,lVar14);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_60,(__normal_iterator *)&local_68);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   (this + 0x1c0),local_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
      }
      else {
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        puVar7 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_00);
        local_60._0_4_ = (float)*puVar7;
        local_58 = *(undefined4 *)(puVar7 + 1);
        local_60 = CONCAT44((int)((ulong)*puVar7 >> 0x20),(fVar16 - fVar15) + (float)local_60);
        plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        (**(code **)(*plVar8 + 0x78))
                  (plVar8,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                           *)&local_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
      }
      if (lVar13 == lVar12 - (ulong)uVar1) break;
      uVar11 = *(undefined8 *)(this + 0x1c0);
      lVar2 = lVar13 + -1;
      lVar14 = lVar13;
    }
    fVar16 = *pfVar5;
  }
  if (*(float *)(this + 0x1a8) + 10.0 < fVar16) {
    std::string::string((string *)&local_60,"");
    doExplosion((string *)this);
    std::string::~string((string *)&local_60);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarCoconutCannonProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
StarCoconutCannonProjectile::OnCollideEntity(StarCoconutCannonProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  Zombie *pZVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float *pfVar8;
  RealObject *this_01;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1ac] != (StarCoconutCannonProjectile)0x0) {
    uVar3 = 0;
    goto LAB_04030e28;
  }
  if (param_1 == (BoardEntity *)0x0) {
LAB_04030f64:
    uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  else {
    pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if ((((pZVar5 == (Zombie *)0x0) ||
         ((cVar1 = (**(code **)(*(long *)pZVar5 + 0x4d8))(), cVar1 == '\0' &&
          (cVar1 = (**(code **)(*(long *)pZVar5 + 0x508))(pZVar5), cVar1 == '\0')))) &&
        (bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), !bVar2)) &&
       ((bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), !bVar2 &&
        (bVar2 = Sexy::RtObject::IsA<ZombieTowerDefendBasic>((RtObject *)param_1), !bVar2)))) {
      bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
      if (bVar2) {
        this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x1c0);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
        local_18 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<Zombie>>
                             (uVar6,uVar7,aRStack_20);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (bVar2) {
          pZVar5 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          cVar1 = Zombie::IsControlled(pZVar5);
          if (cVar1 == '\0') {
            pZVar5 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
            cVar1 = Zombie::CanBeLaunchedByPlants(pZVar5);
            if (cVar1 != '\0') {
              std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::
              push_back((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                        this_00,(RtWeakPtr *)aRStack_20);
              pZVar5 = (Zombie *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
              Zombie::SetIsControlled(pZVar5,true);
              uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
              Zombie::ApplyCondition((Zombie *)0x41200000,0,uVar6,0x18,1);
              iVar4 = FUN_0402cfc4(*(undefined8 *)(this + 0x1c0),*(undefined8 *)(this + 0x1c8));
              local_10 = CONCAT44(local_10._4_4_,0x3f800000);
              local_18 = CONCAT44(local_18._4_4_,(float)iVar4 / (float)*(int *)(this + 0x1b4));
              pfVar8 = eastl::min_alt<float>((float *)&local_18,(float *)&local_10);
              Projectile::SetVelocityScale
                        ((Projectile *)this,(*(float *)(this + 0x1b0) + -1.0) * *pfVar8 + 1.0,1.0,
                         1.0);
              Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),2,2,0.0);
              this_01 = (RealObject *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
              std::string::string((string *)&local_10,"Play_Bonk");
              RealObject::PlayPositionalSound(this_01,(string *)&local_10,0.0);
              std::string::~string((string *)&local_10);
              nop();
            }
          }
        }
        uVar3 = 0;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        goto LAB_04030e28;
      }
      bVar2 = Sexy::RtObject::IsA<GridItemGravestone>((RtObject *)param_1);
      if ((!bVar2) && (bVar2 = Sexy::RtObject::IsA<GridItemBronze>((RtObject *)param_1), !bVar2))
      goto LAB_04030f64;
    }
    uVar3 = 0;
    std::string::string((string *)&local_10,"");
    doExplosion((string *)this);
    std::string::~string((string *)&local_10);
    nop();
  }
LAB_04030e28:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

