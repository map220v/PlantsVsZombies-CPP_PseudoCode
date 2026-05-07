// Class: SpawnZombiesFromGridItemWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesFromGridItemWaveAction::StaticClassInit() */

void SpawnZombiesFromGridItemWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnZombiesFromGridItemWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_04937ce8,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnZombiesFromGridItemWaveAction::StaticGetClass() */

long * SpawnZombiesFromGridItemWaveAction::StaticGetClass(void)

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
  uVar2 = SpawnZombiesJitteredWaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnZombiesFromGridItemWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnZombiesFromGridItemWaveAction::postCreateZombies() */

void __thiscall
SpawnZombiesFromGridItemWaveAction::postCreateZombies(SpawnZombiesFromGridItemWaveAction *this)

{
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x48));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesFromGridItemWaveAction::getZombieCountToSpawn() */

void __thiscall
SpawnZombiesFromGridItemWaveAction::getZombieCountToSpawn(SpawnZombiesFromGridItemWaveAction *this)

{
  ulong *puVar1;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04937120(*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50));
  local_10 = FUN_04937090(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
  puVar1 = eastl::min_alt<unsigned_long>(&local_18,&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)*puVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesFromGridItemWaveAction::testGridTypesMatch(Sexy::RtWeakPtr<GridItemType const>) */

void __thiscall
SpawnZombiesFromGridItemWaveAction::testGridTypesMatch
          (SpawnZombiesFromGridItemWaveAction *this,RtMixedPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  FairyTaleWindWaveActionProps *pFVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar5;
  undefined4 uVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  pFVar3 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    local_18 = FUN_04939144(*(undefined8 *)(pFVar3 + 0x98));
    while( true ) {
      local_10 = FUN_049391f4(*(undefined8 *)(pFVar3 + 0xa0));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      if (lVar4 == lVar5) {
        uVar6 = 1;
      }
      FUN_04939194((exception_ptr *)&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* SpawnZombiesFromGridItemWaveAction::SpawnZombiesFromGridItemWaveAction() */

void __thiscall
SpawnZombiesFromGridItemWaveAction::SpawnZombiesFromGridItemWaveAction
          (SpawnZombiesFromGridItemWaveAction *this)

{
  undefined4 uVar1;
  
  SpawnZombiesJitteredWaveAction::SpawnZombiesJitteredWaveAction
            ((SpawnZombiesJitteredWaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06911d70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x60) = uVar1;
  return;
}


/* SpawnZombiesFromGridItemWaveAction::StaticNew() */

SpawnZombiesFromGridItemWaveAction * SpawnZombiesFromGridItemWaveAction::StaticNew(void)

{
  SpawnZombiesFromGridItemWaveAction *this;
  
  this = ::operator_new(0x68);
  SpawnZombiesFromGridItemWaveAction(this);
  return this;
}


/* SpawnZombiesFromGridItemWaveAction::~SpawnZombiesFromGridItemWaveAction() */

void __thiscall
SpawnZombiesFromGridItemWaveAction::~SpawnZombiesFromGridItemWaveAction
          (SpawnZombiesFromGridItemWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06911d70;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x48));
  SpawnZombiesJitteredWaveAction::~SpawnZombiesJitteredWaveAction
            ((SpawnZombiesJitteredWaveAction *)this);
  return;
}


/* SpawnZombiesFromGridItemWaveAction::~SpawnZombiesFromGridItemWaveAction() */

void __thiscall
SpawnZombiesFromGridItemWaveAction::~SpawnZombiesFromGridItemWaveAction
          (SpawnZombiesFromGridItemWaveAction *this)

{
  ~SpawnZombiesFromGridItemWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesFromGridItemWaveAction::preCreateZombies() */

void __thiscall
SpawnZombiesFromGridItemWaveAction::preCreateZombies(SpawnZombiesFromGridItemWaveAction *this)

{
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x100))(avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::operator=
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x48),(vector *)avStack_20
            );
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesFromGridItemWaveAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void SpawnZombiesFromGridItemWaveAction::WaveStart
               (WaveAction *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  char *pcVar3;
  float fVar4;
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  if (pFVar2[0xbc] != (FairyTaleWindWaveActionProps)0x0) {
    (**(code **)(*(long *)param_1 + 0x100))(avStack_20,param_1);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::operator=
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(param_1 + 0x48),
               (vector *)avStack_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(param_1 + 0x48));
    if (cVar1 != '\0') goto LAB_0493ad9c;
  }
  fVar4 = (float)PVZ_T();
  *(float *)(param_1 + 0x60) = fVar4 + *(float *)(pFVar2 + 0xb8);
  if (param_4 == '\0') {
    SpawnZombiesFromGridItemSpawnerProps::GetWaveStartMessage();
    cVar1 = FUN_054765e8(avStack_20);
    if (cVar1 == '\0') {
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      Board::DisplayAdviceAgain(*(Board **)(gLawnApp + 0x9f0),avStack_20,0x11,1);
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Play_UI_Necromancy");
    }
    FUN_05476c50(avStack_20);
  }
  WaveAction::notifyWaveEvents(param_1);
LAB_0493ad9c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesFromGridItemWaveAction::getTargetGridItems() */

void SpawnZombiesFromGridItemWaveAction::getTargetGridItems(void)

{
  bool bVar1;
  char cVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  EntityFinder::GetEntities();
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)in_x8);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)in_x8);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      GridItem::GetType();
      cVar2 = testGridTypesMatch();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      if (cVar2 != '\0') break;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase();
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)in_x8);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    FUN_049390e4((__normal_iterator *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesFromGridItemWaveAction::getZombieSpawnPosition(SpawnZombiesJitteredInstruction&,
   Zombie*, Sexy::MTRand&, int&) */

void SpawnZombiesFromGridItemWaveAction::getZombieSpawnPosition
               (SpawnZombiesJitteredInstruction *param_1,Zombie *param_2,MTRand *param_3,
               int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04937120(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  iVar3 = Sexy::Rand(iVar3);
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x48);
  puVar4 = (undefined8 *)FUN_0493712c(*(undefined8 *)this,(long)iVar3);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)*puVar4;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  local_20 = __gnu_cxx::
             __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
             ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_28,(long)iVar3);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_18,(__normal_iterator *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)this,local_18);
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  uVar5 = *puVar4;
  local_10 = *(undefined4 *)(puVar4 + 1);
  local_18._0_4_ = (undefined4)uVar5;
  local_18._4_4_ = (undefined4)((ulong)uVar5 >> 0x20);
  uVar1 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  uVar2 = (undefined4)local_18;
  local_18 = uVar5;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,uVar1,local_10);
}


/* SpawnZombiesFromGridItemWaveAction::WaveUpdate(int, Sexy::MTRand&) */

void __thiscall
SpawnZombiesFromGridItemWaveAction::WaveUpdate
          (SpawnZombiesFromGridItemWaveAction *this,int param_1,MTRand *param_2)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x60) < fVar1) {
    SpawnZombiesJitteredWaveAction::WaveStart
              ((SpawnZombiesJitteredWaveAction *)this,param_1,0,0,param_2);
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x60) = uVar2;
  }
  return;
}

