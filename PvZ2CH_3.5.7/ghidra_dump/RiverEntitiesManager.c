// Class: RiverEntitiesManager


/* RiverEntitiesManager::getState() */

void __thiscall RiverEntitiesManager::getState(RiverEntitiesManager *this)

{
  FUN_04a113d0(*(undefined4 *)(this + 0x28));
  return;
}


/* RiverEntitiesManager::isInState(RiverEntitiesManagerState) const */

bool __thiscall RiverEntitiesManager::isInState(RiverEntitiesManager *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_04a113d0(*(undefined4 *)(this + 0x28));
  return iVar1 == param_2;
}


/* RiverEntitiesManager::Update() */

void __thiscall RiverEntitiesManager::Update(RiverEntitiesManager *this)

{
  if (this[8] == (RiverEntitiesManager)0x0) {
    return;
  }
  StateMachine<RiverEntitiesManagerState>::UpdateState
            ((StateMachine<RiverEntitiesManagerState> *)(this + 0x28));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntitiesManager::shouldSpawnRiverEntities(RiverEntityProperties) const */

void __thiscall
RiverEntitiesManager::shouldSpawnRiverEntities(RiverEntitiesManager *this,int *param_2)

{
  string *psVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04a12c10(*(undefined8 *)(this + 0xe0));
  local_10 = FUN_04a12c60(*(undefined8 *)(this + 0xe8));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
LAB_04a12dac:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar4 = *plVar3;
    if (*(int *)(lVar4 + 4) == *param_2) {
      psVar1 = (string *)(param_2 + 2);
      bVar2 = std::operator==("floatingIce",psVar1);
      if (bVar2) {
        fVar5 = (float)PVZ_T();
        if (*(float *)(lVar4 + 8) <= fVar5) {
          fVar5 = (float)PVZ_T();
          bVar2 = 1.2 <= fVar5 - *(float *)(lVar4 + 0xc);
          goto LAB_04a12dac;
        }
      }
      else {
        bVar2 = std::operator==("skatingGuacodile",psVar1);
        if ((bVar2) || (bVar2 = std::operator==("MomotaroTornado",psVar1), bVar2)) {
          fVar5 = (float)PVZ_T();
          if (*(float *)(lVar4 + 8) <= fVar5) {
LAB_04a12e04:
            fVar5 = (float)PVZ_T();
            bVar2 = 0.7 <= fVar5 - *(float *)(lVar4 + 0xc);
            goto LAB_04a12dac;
          }
        }
        else {
          bVar2 = std::operator==("MomotaroLargeTornado",psVar1);
          if (!bVar2) goto LAB_04a12d20;
          fVar5 = (float)PVZ_T();
          if (*(float *)(lVar4 + 8) <= fVar5) goto LAB_04a12e04;
        }
      }
      bVar2 = false;
      goto LAB_04a12dac;
    }
LAB_04a12d20:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntitiesManager::CheckDodoriderChomped(RiverCrossingDodoRider*) */

void __thiscall
RiverEntitiesManager::CheckDodoriderChomped
          (RiverEntitiesManager *this,RiverCrossingDodoRider *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  TRect *pTVar5;
  PVZ1ModeNetworkMgr *this_00;
  undefined8 local_28;
  undefined8 local_20;
  TRect<int> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 200));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 200));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    this_00 = (PVZ1ModeNetworkMgr *)*puVar4;
    iVar3 = PVZ1ModeNetworkMgr::GetHardEliteLevelNumber(this_00);
    if (iVar3 == 1) {
      (**(code **)(*(long *)this_00 + 0x1f8))(aTStack_18,this_00);
      pTVar5 = (TRect *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
      cVar2 = Sexy::TRect<int>::Intersects(aTStack_18,pTVar5);
      if (cVar2 != '\0') break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntitiesManager::CheckFloatingIce(Sexy::SexyVector3) */

void RiverEntitiesManager::CheckFloatingIce(float param_1,float param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  PVZ1ModeNetworkMgr *this;
  undefined8 local_28;
  undefined8 local_20;
  TRect<int> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_3 + 200));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_3 + 200));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar2) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    this = (PVZ1ModeNetworkMgr *)*puVar4;
    iVar3 = PVZ1ModeNetworkMgr::GetHardEliteLevelNumber(this);
    if (iVar3 == 0) {
      FloatingIce::GetFloatingIceRect();
      cVar1 = Sexy::TRect<int>::Contains(aTStack_18,(int)param_1,(int)param_2);
      if (((cVar1 != '\0') && (cVar1 = FUN_04a113b0(this[0xcd]), cVar1 == '\0')) &&
         (cVar1 = FUN_04a113b4(this[0xcc]), cVar1 == '\0')) goto LAB_04a1304c;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  this = (PVZ1ModeNetworkMgr *)0x0;
LAB_04a1304c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntitiesManager::unbindAllFloatingIce() */

void __thiscall RiverEntitiesManager::unbindAllFloatingIce(RiverEntitiesManager *this)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  PVZ1ModeNetworkMgr *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 200));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 200));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (PVZ1ModeNetworkMgr *)*puVar3;
    iVar2 = PVZ1ModeNetworkMgr::GetHardEliteLevelNumber(this_00);
    if (iVar2 == 0) {
      FloatingIce::SetCarryingDodoRider((FloatingIce *)this_00,false);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverEntitiesManager::RiverEntitiesManager() */

void __thiscall RiverEntitiesManager::RiverEntitiesManager(RiverEntitiesManager *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  this[9] = (RiverEntitiesManager)0x1;
  this[8] = (RiverEntitiesManager)0x0;
  *(undefined ***)this = &PTR_GetClass_0692e7c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  StateMachine<RiverEntitiesManagerState>::StateMachine
            ((StateMachine<RiverEntitiesManagerState> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 200));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  return;
}


/* RiverEntitiesManager::StaticNew() */

RiverEntitiesManager * RiverEntitiesManager::StaticNew(void)

{
  RiverEntitiesManager *this;
  
  this = ::operator_new(0xf8);
  RiverEntitiesManager(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntitiesManager::~RiverEntitiesManager() */

void __thiscall RiverEntitiesManager::~RiverEntitiesManager(RiverEntitiesManager *this)

{
  bool bVar1;
  undefined8 *puVar2;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xe0);
  *(undefined ***)this = &PTR_GetClass_0692e7c0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((void *)*puVar2 != (void *)0x0) {
      AK::FreeHook((void *)*puVar2);
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      *puVar2 = 0;
    }
    FUN_04a12bb0((exception_ptr *)&local_18);
  }
  std::vector<RiverEntitySpawner*,std::allocator<RiverEntitySpawner*>>::clear
            ((vector<RiverEntitySpawner*,std::allocator<RiverEntitySpawner*>> *)this_00);
  std::vector<RiverEntitySpawner*,std::allocator<RiverEntitySpawner*>>::~vector
            ((vector<RiverEntitySpawner*,std::allocator<RiverEntitySpawner*>> *)this_00);
  std::vector<RiverEntity*,std::allocator<RiverEntity*>>::~vector
            ((vector<RiverEntity*,std::allocator<RiverEntity*>> *)(this + 200));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x28));
  std::vector<RiverEntityProperties,std::allocator<RiverEntityProperties>>::~vector
            ((vector<RiverEntityProperties,std::allocator<RiverEntityProperties>> *)(this + 0x10));
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverEntitiesManager::~RiverEntitiesManager() */

void __thiscall RiverEntitiesManager::~RiverEntitiesManager(RiverEntitiesManager *this)

{
  ~RiverEntitiesManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntitiesManager::RemoveRiverEntity(RiverEntity*) */

void __thiscall
RiverEntitiesManager::RemoveRiverEntity(RiverEntitiesManager *this,RiverEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RiverEntity *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 200);
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<RiverEntity**,std::vector<RiverEntity*,std::allocator<RiverEntity*>>>,RiverEntity*>
                       (uVar2,uVar3,local_28);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<RiverEntity*,std::allocator<RiverEntity*>>::erase
              ((vector<RiverEntity*,std::allocator<RiverEntity*>> *)this_00,local_10);
    (**(code **)(*(long *)local_28[0] + 0x48))(local_28[0]);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntitiesManager::SetNextRiverEntitiesTime(float) */

void __thiscall
RiverEntitiesManager::SetNextRiverEntitiesTime(RiverEntitiesManager *this,float param_1)

{
  bool bVar1;
  RiverEntityProperties *pRVar2;
  RiverEntitySpawner *this_00;
  undefined8 local_38;
  undefined8 local_30;
  RiverEntitySpawner *local_28;
  undefined4 local_20 [2];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    pRVar2 = (RiverEntityProperties *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    RiverEntityProperties::RiverEntityProperties((RiverEntityProperties *)local_20,pRVar2);
    this_00 = ::operator_new(0x10);
    RiverEntitySpawner::RiverEntitySpawner(this_00);
    *(undefined4 *)(this_00 + 4) = local_20[0];
    *(float *)(this_00 + 8) = param_1;
    local_28 = this_00;
    bVar1 = std::operator==("floatingIce",asStack_18);
    if (bVar1) {
      *(undefined4 *)local_28 = 0;
      *(float *)(local_28 + 0xc) = param_1 - 1.2;
    }
    else {
      bVar1 = std::operator==("skatingGuacodile",asStack_18);
      if (((bVar1) || (bVar1 = std::operator==("MomotaroTornado",asStack_18), bVar1)) ||
         (bVar1 = std::operator==("MomotaroLargeTornado",asStack_18), bVar1)) {
        *(float *)(local_28 + 0xc) = param_1 - 0.7;
        *(undefined4 *)local_28 = 1;
      }
    }
    std::vector<RiverEntitySpawner*,std::allocator<RiverEntitySpawner*>>::push_back
              ((vector<RiverEntitySpawner*,std::allocator<RiverEntitySpawner*>> *)(this + 0xe0),
               &local_28);
    RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)local_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_38);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* RiverEntitiesManager::addRiverEntitiesColsInfo(RiverEntityProperties) */

void __thiscall
RiverEntitiesManager::addRiverEntitiesColsInfo
          (RiverEntitiesManager *this,RiverEntityProperties *param_2)

{
  std::vector<RiverEntityProperties,std::allocator<RiverEntityProperties>>::push_back
            ((vector<RiverEntityProperties,std::allocator<RiverEntityProperties>> *)(this + 0x10),
             param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntitiesManager::StaticClassInit() */

void RiverEntitiesManager::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  StateMachineTableBuilder *this;
  RtClass *pRVar3;
  StateMachineTable *pSVar4;
  code *pcVar5;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<RiverEntitiesManagerState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<RiverEntitiesManagerState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (pCVar1 != (CRefSymbolDb *)0x0) {
    plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1);
    if (plVar2 != (long *)0x0) {
      pcVar5 = *(code **)(*plVar2 + 0x18);
      std::string::string(asStack_150,"RiverEntityProperties");
      (*pcVar5)(plVar2,asStack_150,FUN_04a1148c,0x18,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_150,"RiverEntitySpawner");
    (*pcVar5)(plVar2,asStack_150,FUN_04a12730,0x10,0);
    std::string::~string(asStack_150);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_150,"RiverEntitiesManager");
    (*pcVar5)(plVar2,asStack_150,FUN_04a1575c,0xf8,0);
    std::string::~string(asStack_150);
    nop();
  }
  this = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance();
  pRVar3 = (RtClass *)StaticGetClass();
  pSVar4 = StateMachineTableBuilder::RegisterClass<RiverEntitiesManagerState>(this,pRVar3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x48);
  Sexy::Delegate1<RiverEntitiesManagerState>::
  Delegate1<RiverEntitiesManager,void(RiverEntitiesManager::*)(RiverEntitiesManagerState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x50);
  Sexy::Delegate0::Delegate0<RiverEntitiesManager,void(RiverEntitiesManager::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x58);
  Sexy::Delegate1<RiverEntitiesManagerState>::
  Delegate1<RiverEntitiesManager,void(RiverEntitiesManager::*)(RiverEntitiesManagerState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RiverEntitiesManagerState_INIT");
  StateDefinition<RiverEntitiesManagerState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a150fc(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x60);
  Sexy::Delegate1<RiverEntitiesManagerState>::
  Delegate1<RiverEntitiesManager,void(RiverEntitiesManager::*)(RiverEntitiesManagerState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x68);
  Sexy::Delegate0::Delegate0<RiverEntitiesManager,void(RiverEntitiesManager::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x70);
  Sexy::Delegate1<RiverEntitiesManagerState>::
  Delegate1<RiverEntitiesManager,void(RiverEntitiesManager::*)(RiverEntitiesManagerState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RiverEntitiesManagerState_READY");
  StateDefinition<RiverEntitiesManagerState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a150fc(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x78);
  Sexy::Delegate1<RiverEntitiesManagerState>::
  Delegate1<RiverEntitiesManager,void(RiverEntitiesManager::*)(RiverEntitiesManagerState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x80);
  Sexy::Delegate0::Delegate0<RiverEntitiesManager,void(RiverEntitiesManager::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x88);
  Sexy::Delegate1<RiverEntitiesManagerState>::
  Delegate1<RiverEntitiesManager,void(RiverEntitiesManager::*)(RiverEntitiesManagerState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RiverEntitiesManagerState_RUNNING");
  StateDefinition<RiverEntitiesManagerState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a150fc(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x90);
  Sexy::Delegate1<RiverEntitiesManagerState>::
  Delegate1<RiverEntitiesManager,void(RiverEntitiesManager::*)(RiverEntitiesManagerState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x98);
  Sexy::Delegate0::Delegate0<RiverEntitiesManager,void(RiverEntitiesManager::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa0);
  Sexy::Delegate1<RiverEntitiesManagerState>::
  Delegate1<RiverEntitiesManager,void(RiverEntitiesManager::*)(RiverEntitiesManagerState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"RiverEntitiesManagerState_DONE");
  StateDefinition<RiverEntitiesManagerState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a150fc(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* RiverEntitiesManager::StaticGetClass() */

long * RiverEntitiesManager::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"RiverEntitiesManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiverEntitiesManager::GetClass() const */

long * RiverEntitiesManager::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"RiverEntitiesManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntitiesManager::setRiverEntitiesManagerStateSerialization(int) */

void __thiscall
RiverEntitiesManager::setRiverEntitiesManagerStateSerialization
          (RiverEntitiesManager *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<RiverEntitiesManagerState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<RiverEntitiesManagerState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<RiverEntitiesManagerState>::GetStateDefinition
                     ((StateMachineTable<RiverEntitiesManagerState> *)pSVar2,param_1);
  StateDefinition<RiverEntitiesManagerState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<RiverEntitiesManagerState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0x28),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntitiesManager::setState(RiverEntitiesManagerState) */

void __thiscall RiverEntitiesManager::setState(RiverEntitiesManager *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<RiverEntitiesManagerState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<RiverEntitiesManagerState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<RiverEntitiesManagerState>::GetStateDefinition
                     ((StateMachineTable<RiverEntitiesManagerState> *)pSVar2,param_2);
  StateDefinition<RiverEntitiesManagerState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<RiverEntitiesManagerState>::SetContext(aSStack_a8,this);
  StateMachine<RiverEntitiesManagerState>::SetState
            ((StateMachine<RiverEntitiesManagerState> *)(this + 0x28),(StateDefinition *)aSStack_a8)
  ;
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverEntitiesManager::Initialize() */

void __thiscall RiverEntitiesManager::Initialize(RiverEntitiesManager *this)

{
  float fVar1;
  
  this[8] = (RiverEntitiesManager)0x1;
  fVar1 = (float)PVZ_T();
  SetNextRiverEntitiesTime(this,fVar1 + 0.1);
  setState(this,1);
  return;
}


/* RiverEntitiesManager::StartManagement() */

void __thiscall RiverEntitiesManager::StartManagement(RiverEntitiesManager *this)

{
  setState(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntitiesManager::spawnRiverEntities(RiverEntityProperties) */

void __thiscall RiverEntitiesManager::spawnRiverEntities(RiverEntitiesManager *this,int *param_2)

{
  string *psVar1;
  RiverEntity *pRVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  FloatingIce *this_00;
  char *pcVar8;
  undefined8 uVar9;
  SkatingGuacodile *extraout_x0;
  SkatingGuacodile *this_01;
  int *piVar10;
  int iVar11;
  float fVar12;
  undefined8 local_28;
  undefined8 local_20;
  RiverEntity *local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if (cVar3 != '\0') {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0xe0));
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xe0));
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar4)
    {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28)
      ;
      piVar10 = (int *)*puVar6;
      if (piVar10[1] == *param_2) {
        if (*piVar10 == 0) {
          lVar7 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)&DAT_06b78768);
          if (lVar7 == 0) {
            ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)&DAT_06b78768,1,10);
            ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)&DAT_06b78768,2,0x14);
            ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)&DAT_06b78768,3,0x1e);
            ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)&DAT_06b78768,4,0x1e);
          }
          iVar5 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)&DAT_06b78768);
        }
        else {
          iVar5 = 0;
          if (*piVar10 == 1) {
            lVar7 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)&DAT_06b787f0);
            if (lVar7 == 0) {
              ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)&DAT_06b787f0,1,0x14);
              ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)&DAT_06b787f0,4,0x14);
              ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)&DAT_06b787f0,6,0x1e);
              ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)&DAT_06b787f0,8,0x1e);
            }
            iVar5 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)&DAT_06b787f0);
          }
        }
        iVar11 = PVZ_T();
        psVar1 = (string *)(param_2 + 2);
        local_18 = (RiverEntity *)0x0;
        piVar10[3] = iVar11;
        bVar4 = std::operator==("floatingIce",psVar1);
        if (bVar4) {
          fVar12 = (float)PVZ_T();
          piVar10[2] = (int)(fVar12 + (float)iVar5 * 1.2);
          this_00 = GameObject::Create<FloatingIce>();
          FloatingIce::FloatingIceInitialize(this_00);
          FloatingIce::PlayRiseAnim(this_00);
          RiverEntity::SetRiverEntityType((RiverEntity *)this_00,0);
          local_18 = (RiverEntity *)this_00;
        }
        else {
          bVar4 = std::operator==("skatingGuacodile",psVar1);
          if (bVar4) {
            fVar12 = (float)PVZ_T();
            piVar10[2] = (int)(fVar12 + (float)iVar5 * 0.7);
            this_01 = GameObject::Create<SkatingGuacodile>();
          }
          else {
            bVar4 = std::operator==("MomotaroTornado",psVar1);
            if ((!bVar4) && (bVar4 = std::operator==("MomotaroLargeTornado",psVar1), !bVar4))
            goto LAB_04a16200;
            fVar12 = (float)PVZ_T();
            piVar10[2] = (int)(fVar12 + (float)iVar5 * 1.2);
            pcVar8 = (char *)FUN_0547429c(psVar1);
            uVar9 = Sexy::RtClass::StaticGetClassNamed(pcVar8);
            GameObject::Create(uVar9,0x28);
            nop();
            this_01 = extraout_x0;
          }
          SkatingGuacodile::SkatingGuacodileInitialize(this_01);
          RiverEntity::SetRiverEntityType((RiverEntity *)this_01,1);
          local_18 = (RiverEntity *)this_01;
        }
LAB_04a16200:
        if (local_18 != (RiverEntity *)0x0) {
          std::vector<RiverEntity*,std::allocator<RiverEntity*>>::push_back
                    ((vector<RiverEntity*,std::allocator<RiverEntity*>> *)(this + 200),&local_18);
          pRVar2 = local_18;
          FUN_05475d88(asStack_10,param_2 + 4);
          RiverEntity::SetMovingDirection(pRVar2,asStack_10);
          std::string::~string(asStack_10);
          FUN_04a113a4(param_2[1],local_18 + 0xc4);
          RiverEntity::SetGrid(local_18,*param_2);
          RiverEntity::StartMoving(local_18);
          MessageRouter::Post<RiverEntity*,RiverEntity*>
                    ((MessageRouter *)gMessageRouter,Message::SpawnRiverEntity,local_18);
        }
        break;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverEntitiesManager::updateState_RUNNING() */

void __thiscall RiverEntitiesManager::updateState_RUNNING(RiverEntitiesManager *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  RiverEntityProperties *pRVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 200));
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 200));
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_38,(__normal_iterator *)local_20),
        bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_38);
    (**(code **)(*(long *)*puVar3 + 0x1d8))((long *)*puVar3);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_38);
  }
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    pRVar4 = (RiverEntityProperties *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    RiverEntityProperties::RiverEntityProperties((RiverEntityProperties *)local_38,pRVar4);
    RiverEntityProperties::RiverEntityProperties
              ((RiverEntityProperties *)local_20,(RiverEntityProperties *)local_38);
    cVar2 = shouldSpawnRiverEntities(this,(RiverEntityProperties *)local_20);
    RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)local_20);
    if (cVar2 != '\0') {
      RiverEntityProperties::RiverEntityProperties
                ((RiverEntityProperties *)local_20,(RiverEntityProperties *)local_38);
      spawnRiverEntities(this,(RiverEntityProperties *)local_20);
      RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)local_20);
    }
    RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)local_38);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

