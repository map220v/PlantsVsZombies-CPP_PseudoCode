// Class: PlantainProjectile


/* PlantainProjectile::onInitialized() */

void __thiscall PlantainProjectile::onInitialized(PlantainProjectile *this)

{
  *(undefined4 *)(this + 0x1e8) = 1;
  this[0x1ac] = (PlantainProjectile)0x0;
  *(undefined4 *)(this + 0x1a8) = 0x447a0000;
  return;
}


/* PlantainProjectile::handleExplosionDone(std::string const&) */

void PlantainProjectile::handleExplosionDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantainProjectile::StaticClassInit() */

void PlantainProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantainProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0390bbbc,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantainProjectile::StaticGetClass() */

long * PlantainProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantainProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantainProjectile::GetClass() const */

long * PlantainProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantainProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantainProjectile::setOwnerLevel(int) */

void __thiscall PlantainProjectile::setOwnerLevel(PlantainProjectile *this,int param_1)

{
  *(int *)(this + 0x1e8) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantainProjectile::isZombieCanBeTossToEnd(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PlantainProjectile::isZombieCanBeTossToEnd
          (PlantainProjectile *this,RtMixedPtr<Sexy::Image> *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  RtObject *this_00;
  long *plVar5;
  Zombie *pZVar6;
  long lVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(param_2);
  if (cVar1 == '\0') {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar2 = Sexy::RtObject::IsA<Zombie>(this_00);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      cVar1 = (**(code **)(*plVar5 + 0x328))();
      bVar2 = false;
      if (cVar1 == '\0') {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        cVar1 = (**(code **)(*plVar5 + 0x330))();
        if (cVar1 == '\0') {
          pZVar6 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          cVar1 = Zombie::IsInvisible(pZVar6);
          if (cVar1 == '\0') {
            iVar4 = *(int *)(this + 0x1e8);
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
            iVar3 = FUN_03906000(*(undefined4 *)(lVar7 + 0x50));
            if (iVar3 <= iVar4 + 2) {
              pZVar6 = (Zombie *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
              iVar4 = Zombie::GetSizeType(pZVar6);
              bVar2 = iVar4 == 0;
            }
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      goto LAB_03907b30;
    }
  }
  bVar2 = false;
LAB_03907b30:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* PlantainProjectile::PlantainProjectile() */

void __thiscall PlantainProjectile::PlantainProjectile(PlantainProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_066c1840;
  *(undefined ***)(this + 0x10) = &PTR__PlantainProjectile_066c1a30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d0));
  return;
}


/* PlantainProjectile::StaticNew() */

PlantainProjectile * PlantainProjectile::StaticNew(void)

{
  PlantainProjectile *this;
  
  this = ::operator_new(0x1f0);
  PlantainProjectile(this);
  return this;
}


/* PlantainProjectile::isPassThroughZombie(Sexy::RtWeakPtr<BoardEntity>) */

byte PlantainProjectile::isPassThroughZombie(long param_1)

{
  byte bVar1;
  
  bVar1 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                    ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                     (param_1 + 0x1b8));
  return bVar1 ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantainProjectile::doThrough(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PlantainProjectile::doThrough(PlantainProjectile *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  DamageInfo *pDVar4;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Projectile::getProps((Projectile *)this);
                    /* WARNING: Load size is inaccurate */
  pDVar4._0_4_ = *(DamageInfo **)(lVar1 + 0x18);
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pcVar3 = *(code **)(*plVar2 + 0x110);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo(pDVar4._0_4_,local_70,local_6c,aDStack_68,aPStack_78,0);
  (*pcVar3)(plVar2,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantainProjectile::~PlantainProjectile() */

void __thiscall PlantainProjectile::~PlantainProjectile(PlantainProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_066c1840;
  *(undefined ***)(this + 0x10) = &PTR__PlantainProjectile_066c1a30;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1d0));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1b8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PlantainProjectile::~PlantainProjectile() */

void __thiscall PlantainProjectile::~PlantainProjectile(PlantainProjectile *this)

{
  ~PlantainProjectile(this + -0x10);
  return;
}


/* PlantainProjectile::~PlantainProjectile() */

void __thiscall PlantainProjectile::~PlantainProjectile(PlantainProjectile *this)

{
  ~PlantainProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantainProjectile::~PlantainProjectile() */

void __thiscall PlantainProjectile::~PlantainProjectile(PlantainProjectile *this)

{
  ~PlantainProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantainProjectile::isShouldTakeDamage(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall PlantainProjectile::isShouldTakeDamage(PlantainProjectile *this,undefined8 param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1d0);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                       (uVar2,uVar3,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantainProjectile::doExplosion(std::string const&) */

void PlantainProjectile::doExplosion(string *param_1)

{
  char cVar1;
  int iVar2;
  RtWeakPtrBase *pRVar3;
  Zombie *pZVar4;
  char *pcVar5;
  RtObject *this;
  EffectAnimRig_Plantainball *pEVar6;
  long lVar7;
  undefined8 uVar8;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  uVar8 = *(undefined8 *)(param_1 + 0x1b8);
  lVar7 = 0;
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_0390606c(uVar8,*(undefined8 *)(param_1 + 0x1c0));
  if (0 < iVar2) {
    do {
      pRVar3 = (RtWeakPtrBase *)FUN_03906078(uVar8,lVar7);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,pRVar3);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_58);
      if (cVar1 == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58)
        ;
      }
      else {
        pZVar4 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
        Zombie::EndCondition(pZVar4,0x18);
        pZVar4 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
        Zombie::SetIsControlled(pZVar4,false);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58)
        ;
      }
      lVar7 = lVar7 + 1;
      uVar8 = *(undefined8 *)(param_1 + 0x1b8);
      iVar2 = FUN_0390606c(uVar8,*(undefined8 *)(param_1 + 0x1c0));
    } while ((int)lVar7 < iVar2);
  }
  (**(code **)(*(long *)param_1 + 0x168))(param_1,0);
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_General_Explo_01");
  this = (RtObject *)Projectile::GetAnimRig((Projectile *)param_1);
  pEVar6 = Sexy::RtObject::Cast<EffectAnimRig_Plantainball>(this);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string((string *)aRStack_58,"handleExplosionDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             aRStack_58);
  EffectAnimRig_Plantainball::PlayStarExplosion(pEVar6,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Projectile::SetPaused((Projectile *)param_1,true);
  Projectile::SetShadow((Projectile *)param_1,false);
  param_1[0x1ac] = (string)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantainProjectile::moveThroughTime(float) */

void __thiscall PlantainProjectile::moveThroughTime(PlantainProjectile *this,float param_1)

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
  EffectAnimRig_Plantainball *this_02;
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
  if (this[0x1a5] == (PlantainProjectile)0x0) {
    this_01 = (RtObject *)Projectile::GetAnimRig((Projectile *)this);
    this_02 = Sexy::RtObject::Cast<EffectAnimRig_Plantainball>(this_01);
    fVar16 = (float)EffectAnimRig_Plantainball::CalcFuseAnimLength(this_02);
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
      EffectAnimRig_Plantainball::PlayStarExplosion(this_02,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)&local_60);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      fVar15 = *pfVar5;
      this[0x1a5] = (PlantainProjectile)0x1;
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
  uVar11 = *(undefined8 *)(this + 0x1b8);
  fVar16 = *pfVar5;
  iVar4 = FUN_0390606c(uVar11,*(undefined8 *)(this + 0x1c0));
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar12 = (long)(int)uVar1 + -1;
    lVar2 = lVar12;
    lVar14 = (long)(int)uVar1;
    while( true ) {
      lVar13 = lVar2;
      pRVar6 = (RtWeakPtrBase *)FUN_03906078(uVar11,lVar14);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_78,pRVar6);
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_78);
      if (cVar3 == '\0') {
        local_70 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x1b8));
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
                   (this + 0x1b8),local_60);
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
      uVar11 = *(undefined8 *)(this + 0x1b8);
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
/* PlantainProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall PlantainProjectile::OnCollideEntity(PlantainProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Zombie *pZVar9;
  float *pfVar10;
  RealObject *this_01;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1ac] == (PlantainProjectile)0x0) {
    if (param_1 == (BoardEntity *)0x0) {
LAB_0390ce64:
      uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
      goto LAB_0390ce0c;
    }
    bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1);
    if (((!bVar1) && (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), !bVar1))
       && (uVar3 = Sexy::RtObject::IsA<ZombieTowerDefendBasic>((RtObject *)param_1), !(bool)uVar3))
    {
      bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
      if (bVar1) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        cVar2 = LawnApp::IsInModule(gLawnApp,4);
        if (cVar2 == '\0') {
          iVar5 = *(int *)(this + 0x1e8);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          iVar4 = FUN_03906000(*(undefined4 *)(lVar6 + 0x50));
          if (iVar5 + 2 < iVar4) goto LAB_0390cf9c;
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
          cVar2 = isZombieCanBeTossToEnd(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          if (cVar2 == '\0') goto LAB_0390d080;
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
          cVar2 = isPassThroughZombie(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          if (cVar2 != '\0') {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
            cVar2 = isShouldTakeDamage(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
            if (cVar2 != '\0') {
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
              doThrough(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
              std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
              ::push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                           *)(this + 0x1d0),(RtWeakPtr *)&local_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
            }
          }
          this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0x1b8);
          uVar7 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this_00);
          uVar8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
          local_18 = std::
                     find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<Zombie>>
                               (uVar7,uVar8,aRStack_20);
          local_10 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(this_00);
          bVar1 = __gnu_cxx::operator==
                            ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
          if (bVar1) {
            pZVar9 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
            cVar2 = Zombie::IsControlled(pZVar9);
            if (cVar2 == '\0') {
              pZVar9 = (Zombie *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
              cVar2 = Zombie::CanBeLaunchedByPlants(pZVar9);
              if (cVar2 != '\0') {
                std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::
                push_back((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *
                          )this_00,(RtWeakPtr *)aRStack_20);
                pZVar9 = (Zombie *)
                         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
                Zombie::SetIsControlled(pZVar9,true);
                uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
                Zombie::ApplyCondition((Zombie *)0x41200000,0,uVar7,0x18,1);
                iVar5 = FUN_0390606c(*(undefined8 *)(this + 0x1b8),*(undefined8 *)(this + 0x1c0));
                local_10 = CONCAT44(local_10._4_4_,0x3f800000);
                local_18 = CONCAT44(local_18._4_4_,(float)iVar5 / (float)*(int *)(this + 0x1b4));
                pfVar10 = eastl::min_alt<float>((float *)&local_18,(float *)&local_10);
                Projectile::SetVelocityScale
                          ((Projectile *)this,(*(float *)(this + 0x1b0) + -1.0) * *pfVar10 + 1.0,1.0
                           ,1.0);
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
        }
        else {
LAB_0390cf9c:
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
          cVar2 = isPassThroughZombie(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          if (cVar2 == '\0') {
LAB_0390d080:
            std::string::string((string *)&local_10,"");
            doExplosion((string *)this);
            std::string::~string((string *)&local_10);
            nop();
          }
          else {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
            cVar2 = isShouldTakeDamage(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
            if (cVar2 != '\0') {
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
              doThrough(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
              std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
              ::push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                           *)(this + 0x1d0),(RtWeakPtr *)&local_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
            }
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        goto LAB_0390ce0c;
      }
      bVar1 = Sexy::RtObject::IsA<GridItemGravestone>((RtObject *)param_1);
      if ((!bVar1) && (bVar1 = Sexy::RtObject::IsA<GridItemBronze>((RtObject *)param_1), !bVar1))
      goto LAB_0390ce64;
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
    cVar2 = isPassThroughZombie(this,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    if (cVar2 == '\0') {
      std::string::string((string *)&local_10,"");
      doExplosion((string *)this);
      std::string::~string((string *)&local_10);
      nop();
      uVar3 = 0;
      goto LAB_0390ce0c;
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
    cVar2 = isShouldTakeDamage(this,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    if (cVar2 != '\0') {
      uVar3 = 0;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
      doThrough(this,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )(this + 0x1d0),(RtWeakPtr *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      goto LAB_0390ce0c;
    }
  }
  uVar3 = 0;
LAB_0390ce0c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

