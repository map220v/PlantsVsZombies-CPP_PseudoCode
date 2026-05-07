// Class: PennyPerkJuggled


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkJuggled::StaticClassInit() */

void PennyPerkJuggled::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkJuggled");
    (*pcVar2)(plVar1,asStack_10,FUN_036ca418,0xe0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkJuggled::StaticGetClass() */

long * PennyPerkJuggled::StaticGetClass(void)

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
  uVar2 = PennyPerkTimedEffect::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkJuggled",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkJuggled::GetClass() const */

long * PennyPerkJuggled::GetClass(void)

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
  uVar2 = PennyPerkTimedEffect::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkJuggled",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkJuggled::launchProjectile(Projectile*, Sexy::RtWeakPtr<Plant>) */

void PennyPerkJuggled::launchProjectile
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
               Projectile *param_5,RtMixedPtr<Sexy::Image> *param_6)

{
  char cVar1;
  int iVar2;
  long extraout_x0;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 *puVar3;
  undefined8 uVar4;
  BoardEntity *pBVar5;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_5 != (Projectile *)0x0) &&
     (cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(param_6), cVar1 == '\0')) {
    MiniGamePerk::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_6);
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this);
    local_48 = *puVar3;
    local_40 = *(undefined4 *)(puVar3 + 1);
    local_40 = ValueRange::GetRandomValue((ValueRange *)(extraout_x0 + 0xa8));
    (**(code **)(*(long *)param_5 + 0x78))(param_5,&local_48);
    local_38 = *(undefined8 *)(extraout_x0 + 0x90);
    local_30 = *(undefined4 *)(extraout_x0 + 0x98);
    local_28 = *(undefined8 *)(extraout_x0 + 0x9c);
    local_20 = *(undefined4 *)(extraout_x0 + 0xa4);
    local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_38,1.0);
    local_14 = param_2;
    local_10 = param_3;
    Projectile::SetVelocity(param_5,(SexyVector3 *)&local_18);
    Projectile::SetAcceleration(param_5,(SexyVector3 *)&local_28);
    FUN_036c92d8(param_5 + 0xd4);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
    Projectile::SetTarget(param_5,(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    uVar4 = operator|(7,0x100);
    iVar2 = operator|(uVar4,8);
    DangerRoomManager::SetMaxLevel((DangerRoomManager *)param_5,iVar2);
    pBVar5 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_6);
    Projectile::SetInstigator(param_5,pBVar5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_6);
    Projectile::NotifyDeflection((BoardEntity *)param_5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkJuggled::calcNextUpdateTime() */

void __thiscall PennyPerkJuggled::calcNextUpdateTime(PennyPerkJuggled *this)

{
  long extraout_x0;
  float *pfVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar2 = (float)PVZ_T();
  pfVar1 = (float *)FUN_036c90a4(*(undefined8 *)(extraout_x0 + 0x60),(long)*(int *)(this + 0x10));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2 + *pfVar1);
}


/* PennyPerkJuggled::PennyPerkJuggled() */

void __thiscall PennyPerkJuggled::PennyPerkJuggled(PennyPerkJuggled *this)

{
  PennyPerkTimedEffect::PennyPerkTimedEffect((PennyPerkTimedEffect *)this);
  *(undefined ***)this = &PTR_GetClass_06682340;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x30));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x60));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x90));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xc0));
  return;
}


/* PennyPerkJuggled::StaticNew() */

PennyPerkJuggled * PennyPerkJuggled::StaticNew(void)

{
  PennyPerkJuggled *this;
  
  this = ::operator_new(0xe0);
  PennyPerkJuggled(this);
  return this;
}


/* PennyPerkJuggled::~PennyPerkJuggled() */

void __thiscall PennyPerkJuggled::~PennyPerkJuggled(PennyPerkJuggled *this)

{
  *(undefined ***)this = &PTR_GetClass_06682340;
  std::vector<PerkJuggledData,std::allocator<PerkJuggledData>>::~vector
            ((vector<PerkJuggledData,std::allocator<PerkJuggledData>> *)(this + 0xc0));
  std::
  set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
  ::~set((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
          *)(this + 0x90));
  std::
  set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
  ::~set((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
          *)(this + 0x60));
  std::
  set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
  ::~set((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
          *)(this + 0x30));
  PennyPerkTimedEffect::~PennyPerkTimedEffect((PennyPerkTimedEffect *)this);
  return;
}


/* PennyPerkJuggled::~PennyPerkJuggled() */

void __thiscall PennyPerkJuggled::~PennyPerkJuggled(PennyPerkJuggled *this)

{
  ~PennyPerkJuggled(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkJuggled::clearAllProjectiles() */

void __thiscall PennyPerkJuggled::clearAllProjectiles(PennyPerkJuggled *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  PerkJuggledData *pPVar2;
  GridItemPoolEntry *pGVar3;
  long *plVar4;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr aRStack_40 [16];
  PerkJuggledData aPStack_30 [40];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xc0);
  local_8 = ___stack_chk_guard;
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
  if (bVar1) {
    do {
      pPVar2 = (PerkJuggledData *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      PerkJuggledData::PerkJuggledData(aPStack_30,pPVar2);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aPStack_30);
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aPStack_30);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48),
            bVar1) {
        pGVar3 = (GridItemPoolEntry *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
        GridItemPoolEntry::GridItemPoolEntry((GridItemPoolEntry *)aRStack_40,pGVar3);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
        if (bVar1) {
          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          (**(code **)(*plVar4 + 0x48))();
        }
        std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_40);
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_50);
      }
      std::vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>>::clear
                ((vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>> *)aPStack_30);
      PerkJuggledData::~PerkJuggledData(aPStack_30);
      __gnu_cxx::
      __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
      ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                    *)&local_60);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
    } while (bVar1);
  }
  std::vector<PerkJuggledData,std::allocator<PerkJuggledData>>::clear
            ((vector<PerkJuggledData,std::allocator<PerkJuggledData>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkJuggled::enableJuggled() */

void __thiscall PennyPerkJuggled::enableJuggled(PennyPerkJuggled *this)

{
  bool bVar1;
  long extraout_x0;
  float *pfVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  clearAllProjectiles(this);
  this[0x28] = (PennyPerkJuggled)0x1;
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar3 = (float)PVZ_T();
  pfVar2 = (float *)FUN_036c90a4(*(undefined8 *)(extraout_x0 + 0x78),(long)*(int *)(this + 0x10));
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0xd8) = *pfVar2 + fVar3;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkJuggled::onUpdate() */

void __thiscall PennyPerkJuggled::onUpdate(PennyPerkJuggled *this)

{
  bool bVar1;
  long extraout_x0;
  float *pfVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  clearAllProjectiles(this);
  this[0x28] = (PennyPerkJuggled)0x1;
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar3 = (float)PVZ_T();
  pfVar2 = (float *)FUN_036c90a4(*(undefined8 *)(extraout_x0 + 0x78),(long)*(int *)(this + 0x10));
  bVar1 = lStack_8 == ___stack_chk_guard;
  *(float *)(this + 0xd8) = *pfVar2 + fVar3;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkJuggled::updateJunggle() */

void __thiscall PennyPerkJuggled::updateJunggle(PennyPerkJuggled *this)

{
  bool bVar1;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  long lVar2;
  RtWeakPtr *this_01;
  ResourceInfo *this_02;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xc0));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xc0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    fVar4 = (float)PVZ_Dt();
    fVar5 = *(float *)(this_00 + 0x18);
    uVar3 = *(undefined8 *)this_00;
    *(float *)(this_00 + 0x18) = fVar4 + fVar5;
    lVar2 = FUN_036c91d0(uVar3,*(undefined8 *)(this_00 + 8));
    if ((lVar2 != 0) &&
       (this_01 = (RtWeakPtr *)FUN_036c91dc(uVar3,0), *(float *)(this_01 + 8) < fVar4 + fVar5)) {
      this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
      if (this_02 != (ResourceInfo *)0x0) {
        (**(code **)(*(long *)this_02 + 0x80))(this_02,0);
        Projectile::SetPaused((Projectile *)this_02,false);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)(this_00 + 0x20));
        launchProjectile(this,this_02,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      }
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>>::erase
                ((vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>> *)this_00,local_10
                );
    }
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkJuggled::updateOthers() */

void __thiscall PennyPerkJuggled::updateOthers(PennyPerkJuggled *this)

{
  float fVar1;
  
  if (this[0x28] == (PennyPerkJuggled)0x0) {
    return;
  }
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0xd8)) {
    updateJunggle(this);
    return;
  }
  PlantHomingThistle::UpdateUnconditionally((PlantHomingThistle *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkJuggled::storeProjectileInJuggleLimbo(Projectile*, Plant*) */

void __thiscall
PennyPerkJuggled::storeProjectileInJuggleLimbo
          (PennyPerkJuggled *this,Projectile *param_1,Plant *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long extraout_x0;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>> *this_01;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  float local_38;
  undefined8 local_30;
  float local_28;
  float local_18;
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_10 [8];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xc0);
  local_8 = ___stack_chk_guard;
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_50 = FUN_036ca7c4(uVar2,uVar3,this,param_2);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_30);
  if (bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    uVar5 = FUN_036c91d0(*puVar4,puVar4[1]);
    if (uVar5 < (ulong)(long)*(int *)(extraout_x0 + 0xb0)) {
      (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
      Projectile::SetPaused(param_1,true);
      FishingZombieInitData::FishingZombieInitData((FishingZombieInitData *)&local_30);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)&local_30,(RtWeakPtrBase *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      local_28 = *(float *)(extraout_x0 + 0xb4) + *(float *)(lVar6 + 0x18);
      this_01 = (vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      std::vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>>::push_back
                (this_01,(RiftProjectileTimer *)&local_30);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
    }
    else {
      (**(code **)(*(long *)param_1 + 0x48))(param_1);
    }
  }
  else {
    (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
    Projectile::SetPaused(param_1,true);
    PerkJuggledData::PerkJuggledData((PerkJuggledData *)&local_30);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_10,(RtWeakPtrBase *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    FishingZombieInitData::FishingZombieInitData((FishingZombieInitData *)aRStack_40);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)aRStack_40,(RtWeakPtrBase *)aRStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    local_38 = *(float *)(extraout_x0 + 0xb4) + local_18;
    std::vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>>::push_back
              ((vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>> *)&local_30,
               (RiftProjectileTimer *)aRStack_40);
    std::vector<PerkJuggledData,std::allocator<PerkJuggledData>>::push_back
              ((vector<PerkJuggledData,std::allocator<PerkJuggledData>> *)this_00,
               (PerkJuggledData *)&local_30);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aRStack_40);
    PerkJuggledData::~PerkJuggledData((PerkJuggledData *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkJuggled::isProjectileArrivingAtCatchableAngle(Projectile*) */

void PennyPerkJuggled::isProjectileArrivingAtCatchableAngle(Projectile *param_1)

{
  bool bVar1;
  float extraout_w0;
  int iVar2;
  float extraout_var;
  SexyVector3 *this;
  SexyVector3 *pSVar3;
  long extraout_x0;
  Projectile *in_x1;
  float fVar4;
  double dVar5;
  float in_s1;
  ProjectilePropertySheet *local_28;
  undefined8 local_20;
  float local_18;
  float fStack_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = (ProjectilePropertySheet *)Projectile::GetProps(in_x1);
  local_20 = std::
             set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
             ::find((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
                     *)(param_1 + 0x90),&local_28);
  std::map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::end
            ((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)(param_1 + 0x90));
  local_18 = extraout_w0;
  fStack_14 = extraout_var;
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18);
  if (!bVar1) {
    this = (SexyVector3 *)Projectile::GetVelocity(in_x1);
    pSVar3 = (SexyVector3 *)Projectile::GetVelocityScale(in_x1);
    fVar4 = (float)Sexy::SexyVector3::operator*(this,pSVar3);
    local_18 = fVar4;
    fStack_14 = in_s1;
    if (fVar4 < 0.0) {
      MiniGamePerk::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      iVar2 = FloatApproxEqual(0.0,fVar4);
      if (iVar2 == 0) {
        dVar5 = atan((double)(ABS(fStack_14) / ABS(fVar4)));
        fVar4 = (float)dVar5;
      }
      else {
        fVar4 = 1.5707964;
      }
      bVar1 = fVar4 < *(float *)(extraout_x0 + 0xbc) * 0.008726646;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkJuggled::canJuggleProjectile(Projectile*) */

void __thiscall PennyPerkJuggled::canJuggleProjectile(PennyPerkJuggled *this,Projectile *param_1)

{
  char cVar1;
  bool bVar2;
  ProjectilePropertySheet *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isProjectileArrivingAtCatchableAngle((Projectile *)this);
  bVar2 = false;
  if (cVar1 != '\0') {
    local_20 = (ProjectilePropertySheet *)Projectile::GetProps(param_1);
    local_18 = std::
               set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
               ::find((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
                       *)(this + 0x30),&local_20);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x30));
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* PennyPerkJuggled::addProjectile(Projectile*, Plant*) */

undefined8 __thiscall
PennyPerkJuggled::addProjectile(PennyPerkJuggled *this,Projectile *param_1,Plant *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_036c9098(this[0x20]);
  if (((cVar1 != '\0') && (this[0x28] != (PennyPerkJuggled)0x0)) &&
     (cVar1 = canJuggleProjectile(this,param_1), cVar1 != '\0')) {
    uVar2 = storeProjectileInJuggleLimbo(this,param_1,param_2);
    return uVar2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkJuggled::buildProjectileSets() */

void __thiscall PennyPerkJuggled::buildProjectileSets(PennyPerkJuggled *this)

{
  bool bVar1;
  long extraout_x0;
  string *psVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  wstring awStack_30 [8];
  RtWeakPtr aRStack_28 [8];
  ResourceInfo *local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(extraout_x0 + 0xc0));
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(extraout_x0 + 0xc0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::ToWString(psVar2);
    Sexy::RtName::RtName((RtName *)aRStack_18,awStack_30);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar3,0xc,aRStack_18);
    local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
    std::
    set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
    ::insert((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
              *)(this + 0x30),(ProjectilePropertySheet **)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtName::~RtName((RtName *)aRStack_18);
    FUN_05476c50(awStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(extraout_x0 + 0xd8));
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(extraout_x0 + 0xd8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::ToWString(psVar2);
    Sexy::RtName::RtName((RtName *)aRStack_18,awStack_30);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar3,0xc,aRStack_18);
    local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
    std::
    set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
    ::insert((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
              *)(this + 0x60),(ProjectilePropertySheet **)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtName::~RtName((RtName *)aRStack_18);
    FUN_05476c50(awStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(extraout_x0 + 0xf0));
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(extraout_x0 + 0xf0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::ToWString(psVar2);
    Sexy::RtName::RtName((RtName *)aRStack_18,awStack_30);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar3,0xc,aRStack_18);
    local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
    std::
    set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
    ::insert((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
              *)(this + 0x90),(ProjectilePropertySheet **)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtName::~RtName((RtName *)aRStack_18);
    FUN_05476c50(awStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkJuggled::Activate() */

void __thiscall PennyPerkJuggled::Activate(PennyPerkJuggled *this)

{
  PennyPerkTimedEffect::Activate((PennyPerkTimedEffect *)this);
  buildProjectileSets(this);
  return;
}

