// Class: CoconutCannonProjectile


/* CoconutCannonProjectile::SetExplosionParameters(float, float, float) */

void __thiscall
CoconutCannonProjectile::SetExplosionParameters
          (CoconutCannonProjectile *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 0x1a8) = param_1;
  *(float *)(this + 0x1b0) = param_2;
  *(int *)(this + 0x1b4) = (int)param_3;
  return;
}


/* CoconutCannonProjectile::handleExplosionDone(std::string const&) */

void CoconutCannonProjectile::handleExplosionDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoconutCannonProjectile::StaticClassInit() */

void CoconutCannonProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"CoconutCannonProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0402f7c4,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CoconutCannonProjectile::StaticGetClass() */

long * CoconutCannonProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CoconutCannonProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CoconutCannonProjectile::GetClass() const */

long * CoconutCannonProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"CoconutCannonProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CoconutCannonProjectile::CoconutCannonProjectile() */

void __thiscall CoconutCannonProjectile::CoconutCannonProjectile(CoconutCannonProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067b9620;
  *(undefined ***)(this + 0x10) = &PTR__CoconutCannonProjectile_067b9810;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  return;
}


/* CoconutCannonProjectile::StaticNew() */

CoconutCannonProjectile * CoconutCannonProjectile::StaticNew(void)

{
  CoconutCannonProjectile *this;
  
  this = ::operator_new(0x1d0);
  CoconutCannonProjectile(this);
  return this;
}


/* CoconutCannonProjectile::~CoconutCannonProjectile() */

void __thiscall CoconutCannonProjectile::~CoconutCannonProjectile(CoconutCannonProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067b9620;
  *(undefined ***)(this + 0x10) = &PTR__CoconutCannonProjectile_067b9810;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1b8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to CoconutCannonProjectile::~CoconutCannonProjectile() */

void __thiscall CoconutCannonProjectile::~CoconutCannonProjectile(CoconutCannonProjectile *this)

{
  ~CoconutCannonProjectile(this + -0x10);
  return;
}


/* CoconutCannonProjectile::~CoconutCannonProjectile() */

void __thiscall CoconutCannonProjectile::~CoconutCannonProjectile(CoconutCannonProjectile *this)

{
  ~CoconutCannonProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CoconutCannonProjectile::~CoconutCannonProjectile() */

void __thiscall CoconutCannonProjectile::~CoconutCannonProjectile(CoconutCannonProjectile *this)

{
  ~CoconutCannonProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoconutCannonProjectile::doExplosion(std::string const&) */

void CoconutCannonProjectile::doExplosion(string *param_1)

{
  char cVar1;
  int iVar2;
  RtWeakPtrBase *pRVar3;
  Zombie *pZVar4;
  char *pcVar5;
  RtObject *this;
  EffectAnimRig_CoconutCannonball *pEVar6;
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
  iVar2 = FUN_0402cfc4(uVar8,*(undefined8 *)(param_1 + 0x1c0));
  if (0 < iVar2) {
    do {
      pRVar3 = (RtWeakPtrBase *)FUN_0402cfd0(uVar8,lVar7);
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
      iVar2 = FUN_0402cfc4(uVar8,*(undefined8 *)(param_1 + 0x1c0));
    } while ((int)lVar7 < iVar2);
  }
  (**(code **)(*(long *)param_1 + 0x168))(param_1,0);
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_General_Explo_01");
  this = (RtObject *)Projectile::GetAnimRig((Projectile *)param_1);
  pEVar6 = Sexy::RtObject::Cast<EffectAnimRig_CoconutCannonball>(this);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string((string *)aRStack_58,"handleExplosionDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             aRStack_58);
  EffectAnimRig_CoconutCannonball::PlayStarExplosion(pEVar6,aRStack_50);
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
/* CoconutCannonProjectile::OnCollideRoof() */

void __thiscall CoconutCannonProjectile::OnCollideRoof(CoconutCannonProjectile *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1ac] == (CoconutCannonProjectile)0x0) {
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
/* CoconutCannonProjectile::moveThroughTime(float) */

void __thiscall
CoconutCannonProjectile::moveThroughTime(CoconutCannonProjectile *this,float param_1)

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
  if (this[0x1a5] == (CoconutCannonProjectile)0x0) {
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
      EffectAnimRig_CoconutCannonball::PlayPlantFoodFlightFuse(this_02,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)&local_60);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      fVar15 = *pfVar5;
      this[0x1a5] = (CoconutCannonProjectile)0x1;
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
  iVar4 = FUN_0402cfc4(uVar11,*(undefined8 *)(this + 0x1c0));
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
/* CoconutCannonProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
CoconutCannonProjectile::OnCollideEntity(CoconutCannonProjectile *this,BoardEntity *param_1)

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
  if (this[0x1ac] == (CoconutCannonProjectile)0x0) {
    if (param_1 == (BoardEntity *)0x0) {
LAB_04030bcc:
      bVar2 = Sexy::RtObject::IsA<GridItemBronze>((RtObject *)param_1);
      if (!bVar2) {
        uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
        goto LAB_04030b30;
      }
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
          cVar1 = LawnApp::IsInModule(gLawnApp,4);
          if (cVar1 == '\0') {
            this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x1b8);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)&local_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
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
            bVar2 = __gnu_cxx::operator==
                              ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
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
                  push_back((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
                             *)this_00,(RtWeakPtr *)aRStack_20);
                  pZVar5 = (Zombie *)
                           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
                  Zombie::SetIsControlled(pZVar5,true);
                  uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
                  Zombie::ApplyCondition((Zombie *)0x41200000,0,uVar6,0x18,1);
                  iVar4 = FUN_0402cfc4(*(undefined8 *)(this + 0x1b8),*(undefined8 *)(this + 0x1c0));
                  local_10 = CONCAT44(local_10._4_4_,0x3f800000);
                  local_18 = CONCAT44(local_18._4_4_,(float)iVar4 / (float)*(int *)(this + 0x1b4));
                  pfVar8 = eastl::min_alt<float>((float *)&local_18,(float *)&local_10);
                  Projectile::SetVelocityScale
                            ((Projectile *)this,(*(float *)(this + 0x1b0) + -1.0) * *pfVar8 + 1.0,
                             1.0,1.0);
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
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          }
          else {
            std::string::string((string *)&local_10,"");
            doExplosion((string *)this);
            std::string::~string((string *)&local_10);
            nop();
          }
          goto LAB_04030b2c;
        }
        bVar2 = Sexy::RtObject::IsA<GridItemGravestone>((RtObject *)param_1);
        if (!bVar2) goto LAB_04030bcc;
      }
    }
    std::string::string((string *)&local_10,"");
    doExplosion((string *)this);
    std::string::~string((string *)&local_10);
    nop();
    uVar3 = 0;
  }
  else {
LAB_04030b2c:
    uVar3 = 0;
  }
LAB_04030b30:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

