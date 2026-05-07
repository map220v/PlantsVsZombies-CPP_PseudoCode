// Class: HeianTornado


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianTornado::StaticClassInit() */

void HeianTornado::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeianTornado");
    (*pcVar2)(plVar1,asStack_10,FUN_03d2e61c,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeianTornado::StaticGetClass() */

long * HeianTornado::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeianTornado",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianTornado::GetClass() const */

long * HeianTornado::GetClass(void)

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
  (*pcVar3)(plVar1,"HeianTornado",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianTornado::searchGrids() */

void __thiscall HeianTornado::searchGrids(HeianTornado *this)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  long lVar4;
  Board *this_00;
  int local_20;
  int local_1c [3];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  BoardTransforms::BoardSpaceToGrid(*pfVar2,pfVar2[1],&local_20,local_1c);
  local_1c[1] = 0;
  local_1c[2] = local_20 + -1;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  piVar3 = eastl::max_alt<int>(local_1c + 1,local_1c + 2);
  iVar1 = *piVar3;
  std::string::string(asStack_10,"");
  lVar4 = Board::GetPlantAt(this_00,iVar1,local_1c[0],asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4 != 0);
}


/* HeianTornado::SyncParameters() */

float __thiscall HeianTornado::SyncParameters(HeianTornado *this)

{
  int iVar1;
  float *pfVar2;
  RtObject *this_00;
  HeianTornadoProps *pHVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar6 = *pfVar2;
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pHVar3 = Sexy::RtObject::Cast<HeianTornadoProps>(this_00);
  fVar4 = *(float *)(pHVar3 + 0x1e4);
  iVar1 = BoardTransforms::GridToBoardSpaceX(0);
  fVar5 = (float)iVar1;
  if ((float)iVar1 <= fVar6 - fVar4) {
    fVar5 = fVar6 - fVar4;
  }
  return fVar5;
}


/* HeianTornado::HeianTornado() */

void __thiscall HeianTornado::HeianTornado(HeianTornado *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06767f20;
  *(undefined ***)(this + 0x10) = &PTR__HeianTornado_06768110;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  return;
}


/* HeianTornado::StaticNew() */

HeianTornado * HeianTornado::StaticNew(void)

{
  HeianTornado *this;
  
  this = ::operator_new(0x1d8);
  HeianTornado(this);
  return this;
}


/* HeianTornado::~HeianTornado() */

void __thiscall HeianTornado::~HeianTornado(HeianTornado *this)

{
  *(undefined ***)this = &PTR_GetClass_06767f20;
  *(undefined ***)(this + 0x10) = &PTR__HeianTornado_06768110;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1c0));
  std::vector<PushZombieData,std::allocator<PushZombieData>>::~vector
            ((vector<PushZombieData,std::allocator<PushZombieData>> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to HeianTornado::~HeianTornado() */

void __thiscall HeianTornado::~HeianTornado(HeianTornado *this)

{
  ~HeianTornado(this + -0x10);
  return;
}


/* HeianTornado::~HeianTornado() */

void __thiscall HeianTornado::~HeianTornado(HeianTornado *this)

{
  ~HeianTornado(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HeianTornado::~HeianTornado() */

void __thiscall HeianTornado::~HeianTornado(HeianTornado *this)

{
  ~HeianTornado(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianTornado::endPush() */

void __thiscall HeianTornado::endPush(HeianTornado *this)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  RtWeakPtrBase *pRVar5;
  Zombie *pZVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar7 = *(undefined8 *)(this + 0x1a8);
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_03d2c750(uVar7,*(undefined8 *)(this + 0x1b0));
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar8 = (long)(int)uVar1 + -1;
    lVar2 = lVar8;
    lVar10 = (long)(int)uVar1;
    while( true ) {
      lVar9 = lVar2;
      pRVar5 = (RtWeakPtrBase *)FUN_03d2c778(uVar7,lVar10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,pRVar5);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_28);
      if (bVar3) {
        pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        Zombie::SetIsControlled(pZVar6,false);
        pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        Zombie::EndCondition(pZVar6,0x18);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   (this + 0x1c0),(RtWeakPtr *)aRStack_28);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x1a8));
        local_18 = __gnu_cxx::
                   __normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
                   ::operator+((__normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
                                *)&local_20,lVar10);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<PushZombieData,std::allocator<PushZombieData>>::erase
                  ((vector<PushZombieData,std::allocator<PushZombieData>> *)(this + 0x1a8),local_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      }
      if (lVar9 == lVar8 - (ulong)uVar1) break;
      uVar7 = *(undefined8 *)(this + 0x1a8);
      lVar2 = lVar9 + -1;
      lVar10 = lVar9;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianTornado::endPush(Sexy::RtWeakPtr<Zombie>, int) */

void __thiscall HeianTornado::endPush(HeianTornado *this,RtWeakPtr *param_2,int param_3)

{
  bool bVar1;
  Zombie *pZVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::SetIsControlled(pZVar2,false);
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::EndCondition(pZVar2,0x18);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
               (this + 0x1c0),param_2);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x1a8));
    local_18 = __gnu_cxx::
               __normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
               ::operator+((__normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
                            *)&local_20,(long)param_3);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<PushZombieData,std::allocator<PushZombieData>>::erase
              ((vector<PushZombieData,std::allocator<PushZombieData>> *)(this + 0x1a8),local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianTornado::moveThroughTime(float) */

void __thiscall HeianTornado::moveThroughTime(HeianTornado *this,float param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  RtWeakPtrBase *pRVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar11 = *pfVar3;
  ProjectileHelpers::Integrate((Projectile *)this,param_1);
  cVar1 = searchGrids(this);
  if (cVar1 == '\0') {
    fVar10 = *pfVar3;
    uVar8 = *(undefined8 *)(this + 0x1a8);
    iVar2 = FUN_03d2c750(uVar8,*(undefined8 *)(this + 0x1b0));
    iVar2 = iVar2 + -1;
    if (-1 < iVar2) {
      lVar9 = (long)iVar2;
      while( true ) {
        pRVar4 = (RtWeakPtrBase *)FUN_03d2c778(uVar8,lVar9);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar4);
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
        if (cVar1 == '\0') {
          local_28 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(this + 0x1a8));
          local_20 = __gnu_cxx::
                     __normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
                     ::operator+((__normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
                                  *)&local_28,lVar9);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_18,(__normal_iterator *)&local_20);
          std::vector<PushZombieData,std::allocator<PushZombieData>>::erase
                    ((vector<PushZombieData,std::allocator<PushZombieData>> *)(this + 0x1a8),
                     local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        }
        else {
          this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          puVar5 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(this_00);
          local_18._0_4_ = (float)*puVar5;
          local_10 = *(undefined4 *)(puVar5 + 1);
          local_18 = CONCAT44((int)((ulong)*puVar5 >> 0x20),(fVar10 - fVar11) + (float)local_18);
          plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          (**(code **)(*plVar6 + 0x78))
                    (plVar6,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                             *)&local_18);
          lVar7 = FUN_03d2c778(*(undefined8 *)(this + 0x1a8),lVar9);
          if (*pfVar3 < *(float *)(lVar7 + 8)) {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)aRStack_30);
            endPush(this,(RtWeakPtr<Sexy::SoundResource> *)&local_20,iVar2);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        }
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        lVar9 = lVar9 + -1;
        uVar8 = *(undefined8 *)(this + 0x1a8);
      }
    }
  }
  else {
    endPush(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianTornado::OnCollideEntity(BoardEntity*) */

void __thiscall HeianTornado::OnCollideEntity(HeianTornado *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  RtObject *this_02;
  HeianTornadoProps *pHVar5;
  ZombieGum *pZVar6;
  long extraout_x0;
  undefined8 *puVar7;
  Plant *this_03;
  long *plVar8;
  Zombie *pZVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  RealObject *this_04;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (BoardEntity *)0x0) &&
      (bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), !bVar1)) &&
     (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), !bVar1)) {
    uVar2 = Sexy::RtObject::IsA<ZombieTowerDefendBasic>((RtObject *)param_1);
    if (!(bool)uVar2) {
      bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
      if (bVar1) {
        iVar4 = FUN_03d2c750(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
        this_02 = (RtObject *)Projectile::GetProps((Projectile *)this);
        pHVar5 = Sexy::RtObject::Cast<HeianTornadoProps>(this_02);
        if (iVar4 < *(int *)(pHVar5 + 0x1e0)) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)&local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          pZVar6 = Sexy::RtObject::Cast<ZombieGum>((RtObject *)param_1);
          if (pZVar6 == (ZombieGum *)0x0) {
            plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
            cVar3 = (**(code **)(*plVar8 + 0x328))();
            if (cVar3 == '\0') {
              pZVar9 = (Zombie *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
              iVar4 = Zombie::GetSizeType(pZVar9);
              if (iVar4 != 2) {
                this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x1a8);
                this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x1c0);
                uVar10 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin(this_00);
                uVar11 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end(this_00);
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_48);
                local_40 = FUN_03d2ee64(uVar10,uVar11,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
                std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_20);
                uVar10 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin(this_01);
                uVar11 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end(this_01);
                local_38 = std::
                           find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<Zombie>>
                                     (uVar10,uVar11,(RtWeakPtr<Sexy::SoundResource> *)&local_48);
                local_30[0] = std::
                              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              ::end(this_01);
                bVar1 = __gnu_cxx::operator==
                                  ((__normal_iterator *)&local_38,(__normal_iterator *)local_30);
                if (bVar1) {
                  local_20 = std::
                             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             ::end(this_00);
                  bVar1 = __gnu_cxx::operator==
                                    ((__normal_iterator *)&local_40,(__normal_iterator *)&local_20);
                  if (bVar1) {
                    pZVar9 = (Zombie *)
                             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
                    cVar3 = Zombie::IsControlled(pZVar9);
                    if (cVar3 == '\0') {
                      PushZombieData::PushZombieData((PushZombieData *)&local_20);
                      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                                ((RtWeakPtr<PowerPropertySheet> *)&local_20,(RtWeakPtr *)&local_48);
                      local_18 = SyncParameters(this);
                      std::vector<PushZombieData,std::allocator<PushZombieData>>::push_back
                                ((vector<PushZombieData,std::allocator<PushZombieData>> *)this_00,
                                 (PushZombieData *)&local_20);
                      pZVar9 = (Zombie *)
                               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
                      Zombie::SetIsControlled(pZVar9,true);
                      uVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
                      Zombie::ApplyCondition((Zombie *)0x41200000,0,uVar10,0x18,1);
                      this_04 = (RealObject *)
                                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
                      std::string::string((string *)local_30,"Play_Bonk");
                      RealObject::PlayPositionalSound(this_04,(string *)local_30,0.0);
                      std::string::~string((string *)local_30);
                      nop();
                      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_20);
                    }
                  }
                }
                uVar2 = 0;
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
                goto LAB_03d30434;
              }
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
          goto LAB_03d30434;
        }
      }
      else {
        bVar1 = Sexy::RtObject::IsA<PlantGroup>((RtObject *)param_1);
        if (!bVar1) {
          uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
          goto LAB_03d30434;
        }
        nop();
        if (extraout_x0 != 0) {
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
          BoardEntity::CalcGridPosition();
          Sexy::Insets::Insets((Insets *)local_30,local_48,local_44,1,1);
          EntityFinder::GetEntitiesInGridSquares
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,
                     (Insets *)local_30);
          local_40 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)&local_20);
          local_38 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_20);
          while( true ) {
            uVar2 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
            if (!(bool)uVar2) break;
            puVar7 = (undefined8 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
            this_03 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar7);
            if ((this_03 != (Plant *)0x0) &&
               (cVar3 = Plant::IsIgnoreControlAndDmg(this_03), cVar3 == '\0')) {
              Plant::beThrown(this_03);
            }
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
          }
          (**(code **)(*(long *)this + 0x48))(this);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
          goto LAB_03d30434;
        }
      }
    }
  }
  uVar2 = 0;
LAB_03d30434:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

