// Class: WaveManager


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManager::StaticClassInit() */

void WaveManager::StaticClassInit(void)

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
    std::string::string(asStack_10,"Wave");
    (*pcVar3)(plVar2,asStack_10,FUN_0492cd34,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WaveManager");
    (*pcVar3)(plVar2,asStack_10,FUN_0492b1bc,0x13e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveManager::StaticGetClass() */

long * WaveManager::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WaveManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveManager::GetClass() const */

long * WaveManager::GetClass(void)

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
  (*pcVar3)(plVar1,"WaveManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveManager::GetWaveCount() const */

void __thiscall WaveManager::GetWaveCount(WaveManager *this)

{
  FUN_04926820(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  return;
}


/* WaveManager::updateLootStats(Loot) */

void __thiscall WaveManager::updateLootStats(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(gLawnApp + 0x9f0);
  switch(param_2) {
  case 0:
    *(int *)(lVar1 + 0x85c) = *(int *)(lVar1 + 0x85c) + 1;
    return;
  case 1:
    *(int *)(lVar1 + 0x860) = *(int *)(lVar1 + 0x860) + 1;
    return;
  case 2:
    *(int *)(lVar1 + 0x864) = *(int *)(lVar1 + 0x864) + 1;
    return;
  case 3:
    *(int *)(lVar1 + 0x868) = *(int *)(lVar1 + 0x868) + 1;
    return;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    *(int *)(lVar1 + 0x878) = *(int *)(lVar1 + 0x878) + 1;
    break;
  case 0x10:
    *(int *)(lVar1 + 0x86c) = *(int *)(lVar1 + 0x86c) + 1;
    return;
  case 0x11:
    *(int *)(lVar1 + 0x870) = *(int *)(lVar1 + 0x870) + 1;
    return;
  }
  return;
}


/* WaveManager::nextWaveIsHugeWave() const */

bool __thiscall WaveManager::nextWaveIsHugeWave(WaveManager *this)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(this + 0x28);
  uVar5 = *(undefined8 *)(this + 0x10);
  uVar3 = FUN_04926820(uVar5,*(undefined8 *)(this + 0x18));
  bVar2 = false;
  if ((ulong)(long)(iVar1 + 1) < uVar3) {
    piVar4 = (int *)FUN_04926848(uVar5,(long)(iVar1 + 1));
    bVar2 = *piVar4 == 2;
  }
  return bVar2;
}


/* WaveManager::IsDone() const */

bool __thiscall WaveManager::IsDone(WaveManager *this)

{
  return *(int *)(this + 0x40) == 7;
}


/* WaveManager::IsRiftTimedEvent() const */

bool __thiscall WaveManager::IsRiftTimedEvent(WaveManager *this)

{
  return *(int *)(this + 0x40) == 4;
}


/* WaveManager::IsPlantWarsMode() const */

bool __thiscall WaveManager::IsPlantWarsMode(WaveManager *this)

{
  return *(int *)(this + 0x40) == 5;
}


/* WaveManager::HasSpawnedFinalWave() const */

bool __thiscall WaveManager::HasSpawnedFinalWave(WaveManager *this)

{
  int iVar1;
  
  iVar1 = FUN_04926820(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  return iVar1 + -1 <= *(int *)(this + 0x28);
}


/* WaveManager::isFinalWave(int) const */

bool __thiscall WaveManager::isFinalWave(WaveManager *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_04926820(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  return iVar1 + -1 == param_1;
}


/* WaveManager::SetPause(bool) */

void __thiscall WaveManager::SetPause(WaveManager *this,bool param_1)

{
  this[0x44] = (WaveManager)param_1;
  return;
}


/* WaveManager::ReseedRandomness(unsigned int) */

void __thiscall WaveManager::ReseedRandomness(WaveManager *this,uint param_1)

{
  Sexy::MTRand::SRand((MTRand *)(this + 0x48),(ulong)param_1);
  return;
}


/* WaveManager::setIsHasShowOppoTips(bool) */

void __thiscall WaveManager::setIsHasShowOppoTips(WaveManager *this,bool param_1)

{
  this[0x13e0] = (WaveManager)param_1;
  return;
}


/* WaveManager::getIsHasShowOppoTips() const */

WaveManager __thiscall WaveManager::getIsHasShowOppoTips(WaveManager *this)

{
  return this[0x13e0];
}


/* WaveManager::GetCurrentWaveData() const */

undefined8 __thiscall WaveManager::GetCurrentWaveData(WaveManager *this)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x10);
  iVar1 = *(int *)(this + 0x28);
  uVar2 = FUN_04926820(uVar3,*(undefined8 *)(this + 0x18));
  if (((ulong)(long)iVar1 < uVar2) && (-1 < iVar1)) {
    uVar3 = FUN_04926848(uVar3,(long)iVar1);
    return uVar3;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManager::adjustTimeForZombieHealth() */

void __thiscall WaveManager::adjustTimeForZombieHealth(WaveManager *this)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = GetCumulativeZombieHealthInWave(*(int *)(this + 0x28));
  if ((iVar2 <= *(int *)(this + 0x3c)) && (cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0')) {
    local_c = (float)PVZ_T();
    pfVar3 = eastl::min_alt<float>((float *)(this + 0x2c),&local_c);
    *(float *)(this + 0x2c) = *pfVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveManager::GetProps() const */

void __thiscall WaveManager::GetProps(WaveManager *this)

{
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManager::updateActions() */

void __thiscall WaveManager::updateActions(WaveManager *this)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  RtWeakPtrBase *pRVar5;
  long *plVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar1 = *(int *)(this + 0x28);
  uVar7 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_04926820(uVar7,*(undefined8 *)(this + 0x18));
  if (((ulong)(long)iVar1 < uVar3) && (-1 < iVar1)) {
    lVar4 = FUN_04926850(uVar7,(long)iVar1);
    local_18 = FUN_04928790(*(undefined8 *)(lVar4 + 8));
    local_10 = FUN_049287e0(*(undefined8 *)(lVar4 + 0x10));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar2) {
      do {
        pRVar5 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar5);
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        (**(code **)(*plVar6 + 0x80))(plVar6,*(undefined4 *)(this + 0x28),this + 0x48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
      } while (bVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManager::WaveHasFriendZombie(int) const */

void __thiscall WaveManager::WaveHasFriendZombie(WaveManager *this,int param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  RtWeakPtrBase *pRVar4;
  RtObject *pRVar5;
  SpawnZombiesJitteredWaveAction *pSVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_04926848(*(undefined8 *)(this + 0x10),(long)param_1);
  local_18 = FUN_04928790(*(undefined8 *)(lVar3 + 8));
  local_10 = FUN_049287e0(*(undefined8 *)(lVar3 + 0x10));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_04928a24:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar4);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
    if (bVar2) {
      pRVar5 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      pSVar6 = Sexy::RtObject::Cast<SpawnZombiesJitteredWaveAction>(pRVar5);
      if (pSVar6 != (SpawnZombiesJitteredWaveAction *)0x0) {
        pRVar5 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        pSVar6 = Sexy::RtObject::Cast<SpawnZombiesJitteredWaveAction>(pRVar5);
        cVar1 = SpawnZombiesJitteredWaveAction::HasFriendZombie(pSVar6);
        if (cVar1 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          goto LAB_04928a24;
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManager::GetZombiesForWave(int, std::vector<ZombieType const*, std::allocator<ZombieType
   const*> >&) const */

void __thiscall WaveManager::GetZombiesForWave(WaveManager *this,int param_1,vector *param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  RtWeakPtr *this_00;
  RtObject *this_01;
  ZombieSpawnerAction *pZVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (-1 < param_1) {
    uVar5 = *(undefined8 *)(this + 0x10);
    uVar2 = FUN_04926820(uVar5,*(undefined8 *)(this + 0x18));
    if ((ulong)(long)param_1 < uVar2) {
      lVar3 = FUN_04926848(uVar5,(long)param_1);
      local_18 = FUN_04928790(*(undefined8 *)(lVar3 + 8));
      local_10 = FUN_049287e0(*(undefined8 *)(lVar3 + 0x10));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar1) {
        this_00 = (RtWeakPtr *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
        if (bVar1) {
          this_01 = (RtObject *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          pZVar4 = Sexy::RtObject::Cast<ZombieSpawnerAction>(this_01);
          if (pZVar4 != (ZombieSpawnerAction *)0x0) {
            (**(code **)(*(long *)pZVar4 + 0xa0))(pZVar4,param_2);
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveManager::GetZombies(std::vector<ZombieType const*, std::allocator<ZombieType const*> >&)
   const */

void __thiscall WaveManager::GetZombies(WaveManager *this,vector *param_1)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar2 = FUN_04926820(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
    bVar1 = uVar2 <= uVar4;
    iVar3 = (int)uVar4;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    GetZombiesForWave(this,iVar3,param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManager::GetCreaturesForWave(int, std::vector<CreatureType const*,
   std::allocator<CreatureType const*> >&) const */

void __thiscall WaveManager::GetCreaturesForWave(WaveManager *this,int param_1,vector *param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  RtWeakPtr *this_00;
  RtObject *this_01;
  DinoTimeWaveAction *this_02;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (-1 < param_1) {
    uVar4 = *(undefined8 *)(this + 0x10);
    uVar2 = FUN_04926820(uVar4,*(undefined8 *)(this + 0x18));
    if ((ulong)(long)param_1 < uVar2) {
      lVar3 = FUN_04926848(uVar4,(long)param_1);
      local_18 = FUN_04928790(*(undefined8 *)(lVar3 + 8));
      local_10 = FUN_049287e0(*(undefined8 *)(lVar3 + 0x10));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar1) {
        this_00 = (RtWeakPtr *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
        if (bVar1) {
          this_01 = (RtObject *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          this_02 = Sexy::RtObject::Cast<DinoTimeWaveAction>(this_01);
          if (this_02 != (DinoTimeWaveAction *)0x0) {
            DinoTimeWaveAction::GetDinos(this_02,param_2);
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveManager::GetCreatures(std::vector<CreatureType const*, std::allocator<CreatureType const*>
   >&) const */

void __thiscall WaveManager::GetCreatures(WaveManager *this,vector *param_1)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = 0;
  while( true ) {
    uVar2 = FUN_04926820(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
    bVar1 = uVar2 <= uVar4;
    iVar3 = (int)uVar4;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    GetCreaturesForWave(this,iVar3,param_1);
  }
  return;
}


/* WaveManager::SetNextWaveTime(float) */

void __thiscall WaveManager::SetNextWaveTime(WaveManager *this,float param_1)

{
  char cVar1;
  
  *(float *)(this + 0x2c) = param_1;
  *(float *)(this + 0x30) = param_1 - 4.0;
  cVar1 = IsRiftTimedEvent(this);
  if (cVar1 == '\0') {
    return;
  }
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::SetNextWaveVisible,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManager::WaveManager() */

void __thiscall WaveManager::WaveManager(WaveManager *this)

{
  undefined *this_00;
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06910fc0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  uVar3 = PVZ_EOT();
  this[0x45] = (WaveManager)0x0;
  this[0x44] = (WaveManager)0x1;
  this[0x46] = (WaveManager)0x0;
  *(undefined4 *)(this + 0x2c) = uVar3;
  *(undefined4 *)(this + 0x30) = uVar3;
  *(undefined4 *)(this + 0x34) = uVar3;
  Sexy::MTRand::MTRand((MTRand *)(this + 0x48));
  this[0x13e0] = (WaveManager)0x0;
  *(undefined4 *)(this + 0x13e4) = 0xffffffff;
  uVar1 = operator|(2,8);
  operator|(uVar1,0x10);
  uVar2 = CalcRandomSeed();
  Sexy::MTRand::SRand((MTRand *)(this + 0x48),uVar2 & 0xffffffff);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<WaveManager,void(WaveManager::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::GameplayEnded,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveManager::StaticNew() */

WaveManager * WaveManager::StaticNew(void)

{
  WaveManager *this;
  
  this = ::operator_new(0x13e8);
  WaveManager(this);
  return this;
}


/* WaveManager::onEnter(WaveManager::WaveState) */

void __thiscall WaveManager::onEnter(WaveManager *this,int param_2)

{
  undefined *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  
  this_00 = gMessageRouter;
  if (param_2 == 2) {
    bVar1 = (bool)isFinalWave(this,*(int *)(this + 0x28) + 1);
    MessageRouter::Broadcast<bool,int,bool,int>
              ((MessageRouter *)this_00,Message::HugeWaveComing,bVar1,*(int *)(this + 0x28) + 1);
    cVar2 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar2 == '\0') {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
      *(float *)(this + 0x2c) = *(float *)(this + 0x2c) + *(float *)(lVar3 + 0x60);
      return;
    }
  }
  return;
}


/* WaveManager::setState(WaveManager::WaveState) */

void __thiscall WaveManager::setState(WaveManager *this,undefined4 param_2)

{
  nop();
  *(undefined4 *)(this + 0x40) = param_2;
  onEnter(this,param_2);
  return;
}


/* WaveManager::backToNormal() */

void __thiscall WaveManager::backToNormal(WaveManager *this)

{
  char cVar1;
  
  cVar1 = IsPlantWarsMode(this);
  if (cVar1 != '\0') {
    setState(this,5);
    return;
  }
  cVar1 = IsRiftTimedEvent(this);
  if (cVar1 == '\0') {
    cVar1 = FUN_04926758(*(undefined4 *)(this + 0x13e4));
    if (cVar1 == '\0') {
      setState(this,1);
      return;
    }
    setState(this,6);
    return;
  }
  setState(this,4);
  return;
}


/* WaveManager::onGameplayEnded() */

void __thiscall WaveManager::onGameplayEnded(WaveManager *this)

{
  setState(this,7);
  return;
}


/* WaveManager::SetCycleSpawnMode(int) */

void __thiscall WaveManager::SetCycleSpawnMode(WaveManager *this,int param_1)

{
  *(int *)(this + 0x13e4) = param_1;
  setState(this,6);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManager::onWaveEnded(int) */

void __thiscall WaveManager::onWaveEnded(WaveManager *this,int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  RtWeakPtrBase *pRVar6;
  long *plVar7;
  undefined4 *puVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_04926850(*(undefined8 *)(this + 0x10),(long)param_1);
  local_18 = FUN_04928790(*(undefined8 *)(lVar5 + 8));
  local_10 = FUN_049287e0(*(undefined8 *)(lVar5 + 0x10));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
        puVar2 = gMessageRouter, bVar3) {
    pRVar6 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar6);
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    (**(code **)(*plVar7 + 0x88))(plVar7,param_1,this + 0x48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  puVar8 = (undefined4 *)FUN_04926850(*(undefined8 *)(this + 0x10),(long)param_1);
  uVar1 = *puVar8;
  uVar4 = isFinalWave(this,param_1);
  MessageRouter::Broadcast<int,WaveType::WaveType,bool,int,WaveType::WaveType,bool>
            ((MessageRouter *)puVar2,Message::WaveEnded,param_1,uVar1,uVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManager::onWaveStarted(int) */

void __thiscall WaveManager::onWaveStarted(WaveManager *this,int param_1)

{
  uchar uVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  ulong uVar10;
  int *piVar11;
  FestivalManager *pFVar12;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ActivityConfig *this_02;
  DailySignRewardWithTW *pDVar13;
  ulong uVar14;
  RtMixedPtrBase *this_03;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar15;
  ZombieType *this_04;
  RtWeakPtrBase *pRVar16;
  SexyVector3 *pSVar17;
  long *plVar18;
  Board *pBVar19;
  undefined8 uVar20;
  long lVar21;
  code *pcVar22;
  undefined4 uVar23;
  float fVar24;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  lVar21 = (long)param_1;
  local_8 = ___stack_chk_guard;
  uVar23 = PVZ_T();
  *(undefined4 *)(this + 0x30) = uVar23;
  cVar2 = isFinalWave(this,param_1);
  puVar8 = (undefined4 *)FUN_04926850(*(undefined8 *)(this + 0x10),lVar21);
  MessageRouter::Broadcast<int,WaveType::WaveType,bool,int,WaveType::WaveType,bool>
            ((MessageRouter *)gMessageRouter,Message::WaveStarted,param_1,*puVar8,cVar2);
  MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::WavesNotify,param_1);
  piVar9 = (int *)FUN_04926850(*(undefined8 *)(this + 0x10),lVar21);
  local_28[0] = FUN_04928790(*(undefined8 *)(piVar9 + 2));
  local_18[0] = FUN_049287e0(*(undefined8 *)(piVar9 + 4));
  while (bVar3 = __gnu_cxx::operator!=((__normal_iterator *)local_28,(__normal_iterator *)local_18),
        bVar3) {
    pRVar16 = (RtWeakPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,pRVar16);
    plVar18 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    puVar8 = (undefined4 *)FUN_04926850(*(undefined8 *)(this + 0x10),lVar21);
    (**(code **)(*plVar18 + 0x78))(plVar18,param_1,*puVar8,cVar2,(MTRand *)(this + 0x48));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_28);
  }
  pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 8);
  iVar5 = param_1 + 1;
  uVar23 = GetCumulativeZombieHealthInWave(param_1);
  *(undefined4 *)(this + 0x38) = uVar23;
  lVar21 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
  fVar24 = *(float *)(lVar21 + 0x50);
  lVar21 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
  fVar24 = (float)Sexy::MTRand::NextRange(fVar24,*(float *)(lVar21 + 0x54));
  uVar20 = *(undefined8 *)(this + 0x10);
  *(int *)(this + 0x3c) = (int)(fVar24 * (float)*(int *)(this + 0x38));
  uVar10 = FUN_04926820(uVar20,*(undefined8 *)(this + 0x18));
  if (((ulong)(long)iVar5 < uVar10) &&
     (piVar11 = (int *)FUN_04926850(uVar20,(long)iVar5), *piVar11 == 2)) {
    cVar4 = NewPVPUtils::IsPlayingNewPVP();
    fVar24 = 25.0;
    if (cVar4 == '\0') {
      *(undefined4 *)(this + 0x34) = 0x420c0000;
      fVar24 = (float)PVZ_T();
      iVar6 = *piVar9;
      *(float *)(this + 0x2c) = fVar24 + *(float *)(this + 0x34);
      goto joined_r0x0492a2a0;
    }
  }
  else {
    cVar4 = NewPVPUtils::IsPlayingNewPVP();
    fVar24 = 25.0;
    if (cVar4 == '\0') {
      fVar24 = (float)Sexy::MTRand::Next(5.0);
      fVar24 = fVar24 + 20.0;
    }
  }
  *(float *)(this + 0x34) = fVar24;
  fVar24 = (float)PVZ_T();
  iVar6 = *piVar9;
  *(float *)(this + 0x2c) = fVar24 + *(float *)(this + 0x34);
joined_r0x0492a2a0:
  if (iVar6 == 2) {
    lVar21 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
    uVar1 = '\0';
    if (*(int *)(lVar21 + 0x28) != 0) {
      uVar1 = (uchar)(iVar5 / *(int *)(lVar21 + 0x28));
    }
    MessageRouter::Broadcast<int,unsigned_char>
              ((MessageRouter *)gMessageRouter,Message::FlagWaveTriggered,uVar1);
  }
  if (cVar2 != '\0') {
    iVar5 = 0;
    do {
      pFVar12 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
      uVar20 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
      cVar2 = FestivalManager::IsFestivalLevel(pFVar12,uVar20,iVar5);
      if (cVar2 != '\0') {
        Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
        FUN_04929f80(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
        goto LAB_0492a220;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 5);
    lVar21 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    cVar2 = *(char *)(lVar21 + 0x112);
    lVar21 = FUN_04929f80(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (((lVar21 != 0) && (cVar2 == '\0')) &&
       (lVar21 = FUN_04929f8c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)), lVar21 == 0)) {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      this_02 = (ActivityConfig *)LawnApp::GetActivityConfig();
      cVar2 = ActivityConfig::IsSpringBossActivated(this_02);
      if ((cVar2 != '\0') && (iVar5 = PlayerInfo::GetSpringBossCount(this_01), 0 < iVar5)) {
        iVar5 = Sexy::Rand(100);
        pDVar13 = (DailySignRewardWithTW *)LawnApp::GetActivityConfig();
        lVar21 = DailySignRewardWithTW::getRewardListData(pDVar13);
        if (iVar5 < *(int *)(lVar21 + 0xc)) {
          std::string::string((string *)local_18,"egypt5");
          cVar2 = PlayerInfo::GetLevelCompleted(this_01,(string *)local_18);
          std::string::~string((string *)local_18);
          nop();
          if (cVar2 != '\0') {
            iVar5 = -1;
            DVec3::DVec3((DVec3 *)local_28);
            pDVar13 = (DailySignRewardWithTW *)LawnApp::GetActivityConfig();
            lVar21 = DailySignRewardWithTW::getRewardListData(pDVar13);
            uVar10 = 0;
            while( true ) {
              uVar20 = *(undefined8 *)(lVar21 + 0x10);
              uVar14 = FUN_04926800(uVar20,*(undefined8 *)(lVar21 + 0x18));
              if (uVar14 <= uVar10) break;
              this_03 = (RtMixedPtrBase *)FUN_0492680c(uVar20,uVar10);
              cVar2 = Sexy::RtMixedPtrBase::IsValid(this_03);
              if (cVar2 == '\0') {
                uVar10 = uVar10 + 1;
              }
              else {
                pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                          FUN_0492680c(*(undefined8 *)(lVar21 + 0x10),uVar10);
                this_04 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
                ZombieType::EnsureResourceGroupsLoaded(this_04);
                if (iVar5 < 0) {
                  pBVar19 = *(Board **)(gLawnApp + 0x9f0);
                  pRVar16 = (RtWeakPtrBase *)FUN_0492680c(*(undefined8 *)(lVar21 + 0x10),uVar10);
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                            ((RtWeakPtr<Sexy::SoundResource> *)local_18,pRVar16);
                  iVar5 = Board::PickRowForNewZombie(pBVar19,(string *)local_18,0);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
                  iVar6 = Sexy::MTRand::Next((MTRand *)(this + 0x48),0x28);
                  iVar7 = BoardTransforms::GridToBoardSpaceY(iVar5);
                  EATextSquish::Vec3::Vec3((Vec3 *)local_18,(float)(iVar6 + 0x334),(float)iVar7,0.0)
                  ;
                  Sexy::SexyVector3::operator=((SexyVector3 *)local_28,(SexyVector3 *)local_18);
                }
                else {
                  local_28[0] = CONCAT44(local_28[0]._4_4_,(float)local_28[0] + 20.0);
                }
                plVar18 = *(long **)(gLawnApp + 0x9f0);
                pcVar22 = *(code **)(*plVar18 + 0x318);
                pRVar16 = (RtWeakPtrBase *)FUN_0492680c(*(undefined8 *)(lVar21 + 0x10),uVar10);
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)local_18,pRVar16);
                pSVar17 = (SexyVector3 *)
                          (*pcVar22)(plVar18,(string *)local_18,*(undefined4 *)(this + 0x28),0);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
                (**(code **)(*(long *)pSVar17 + 0x78))(pSVar17,(exception_ptr *)local_28);
                BoardEntity::PlaceOnBoard(pSVar17);
                uVar10 = uVar10 + 1;
              }
            }
          }
        }
      }
    }
  }
LAB_0492a220:
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WaveManager::spawnNextWave() */

void __thiscall WaveManager::spawnNextWave(WaveManager *this)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  cVar2 = IsRiftTimedEvent(this);
  if (cVar2 != '\0') {
    uVar6 = *(undefined8 *)(this + 0x10);
    uVar5 = *(undefined8 *)(this + 0x18);
    iVar4 = *(int *)(this + 0x28);
    uVar3 = FUN_04926820(uVar6,uVar5);
    if ((ulong)(long)(iVar4 + 1) < uVar3) goto joined_r0x0492a630;
  }
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::SetNextWaveVisible,false);
  uVar6 = *(undefined8 *)(this + 0x10);
  uVar5 = *(undefined8 *)(this + 0x18);
  iVar4 = *(int *)(this + 0x28);
  uVar3 = FUN_04926820(uVar6,uVar5);
joined_r0x0492a630:
  if (iVar4 < 0) {
    uVar3 = FUN_04926820(uVar6,uVar5);
  }
  else if ((ulong)(long)iVar4 < uVar3) {
    onWaveEnded(this,iVar4);
    iVar4 = *(int *)(this + 0x28);
    uVar3 = FUN_04926820(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  }
  iVar1 = *(int *)(this + 0x13e4);
  iVar4 = iVar4 + 1;
  *(int *)(this + 0x28) = iVar4;
  cVar2 = FUN_04926758(iVar1);
  if (cVar2 == '\0') {
    if (uVar3 <= (ulong)(long)iVar4) {
      setState(this,7);
      return;
    }
  }
  else if (uVar3 - 1 <= (ulong)(long)iVar4) {
    *(int *)(this + 0x28) = iVar1;
    iVar4 = iVar1;
  }
  onWaveStarted(this,iVar4);
  return;
}


/* WaveManager::ForceSpawnWave() */

void __thiscall WaveManager::ForceSpawnWave(WaveManager *this)

{
  char cVar1;
  
  cVar1 = IsDone(this);
  if (cVar1 != '\0') {
    return;
  }
  spawnNextWave(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManager::sendProgressUpdates() */

void __thiscall WaveManager::sendProgressUpdates(WaveManager *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x28) == -1) ||
     (cVar3 = std::vector<Wave,std::allocator<Wave>>::empty
                        ((vector<Wave,std::allocator<Wave>> *)(this + 0x10)), cVar3 != '\0')) {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    local_10[0] = FUN_04926820(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
    local_10[0] = local_10[0] + -1;
    local_10[1] = 1;
    piVar5 = eastl::max_alt<int>(local_10,local_10 + 1);
    iVar1 = *piVar5;
    iVar2 = *(int *)(this + 0x28);
    iVar4 = GetCumulativeZombieHealthInWave(iVar2);
    fVar6 = (float)ClampFloat((float)iVar4 / (float)*(int *)(this + 0x38),0.0,1.0);
    if (local_8 == ___stack_chk_guard) {
      MessageRouter::Broadcast<unsigned_char,float>
                ((_func_void_uchar *)gMessageRouter,
                 (100.0 / (float)iVar1) * (((float)iVar2 + 1.0) - fVar6));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManager::shouldSpawnWave() const */

void __thiscall WaveManager::shouldSpawnWave(WaveManager *this)

{
  LawnApp *pLVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = IsRiftTimedEvent(this);
  if (cVar3 == '\0') {
    cVar3 = NewPVPUtils::IsPlayingNewPVP();
    pLVar1 = gLawnApp;
    bVar2 = false;
    if (cVar3 == '\0') {
      uVar5 = operator|(1,4);
      cVar3 = LawnApp::IsInModule(pLVar1,uVar5);
      if (cVar3 != '\0') {
        uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
        PVZDB::GetObjectIteratorForTable(aIStack_28,uVar7,0x29);
        bVar4 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
        if (bVar4) {
          Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
          goto LAB_0492ac38;
        }
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      }
      cVar3 = FUN_04926758(*(undefined4 *)(this + 0x13e4));
      if (((cVar3 != '\0') ||
          (iVar6 = FUN_04926820(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18)),
          *(int *)(this + 0x28) <= iVar6)) &&
         (fVar8 = (float)PVZ_T(), *(float *)(this + 0x2c) <= fVar8)) {
        fVar8 = (float)PVZ_T();
        bVar2 = 4.0 <= fVar8 - *(float *)(this + 0x30);
      }
    }
    else {
      iVar6 = FUN_04926820(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
      if (*(int *)(this + 0x28) <= iVar6) {
        fVar8 = (float)PVZ_T();
        bVar2 = *(float *)(this + 0x2c) <= fVar8;
      }
    }
  }
  else {
    iVar6 = Board::CountZombiesOnScreen(*(Board **)(gLawnApp + 0x9f0),true);
    bVar2 = iVar6 < 1;
  }
LAB_0492ac38:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WaveManager::CommonUpdateWave() */

void __thiscall WaveManager::CommonUpdateWave(WaveManager *this)

{
  char cVar1;
  float fVar2;
  
  updateActions(this);
  adjustTimeForZombieHealth(this);
  sendProgressUpdates(this);
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x2c) - *(float *)(this + 0x34) * 0.5 <= fVar2) {
    MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::SetNextWaveVisible,true)
    ;
  }
  cVar1 = shouldSpawnWave(this);
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = nextWaveIsHugeWave(this);
  if (cVar1 == '\0') {
    spawnNextWave(this);
    return;
  }
  setState(this,2);
  return;
}


/* WaveManager::Update() */

void __thiscall WaveManager::Update(WaveManager *this)

{
  char cVar1;
  
  if (this[0x44] == (WaveManager)0x0) {
    switch(*(undefined4 *)(this + 0x40)) {
    case 1:
    case 6:
      CommonUpdateWave(this);
      return;
    case 2:
      updateActions(this);
      sendProgressUpdates(this);
      cVar1 = shouldSpawnWave(this);
      if (cVar1 != '\0') {
        spawnNextWave(this);
        backToNormal(this);
        return;
      }
      break;
    case 3:
      updateActions(this);
      sendProgressUpdates(this);
      return;
    case 4:
    case 5:
      updateActions(this);
      sendProgressUpdates(this);
      cVar1 = shouldSpawnWave(this);
      if (cVar1 != '\0') {
        cVar1 = nextWaveIsHugeWave(this);
        if (cVar1 == '\0') {
          spawnNextWave(this);
          return;
        }
        setState(this,2);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManager::SetForceSpawnMode(bool) */

void WaveManager::SetForceSpawnMode(bool param_1)

{
  long lVar1;
  wchar16 *pwVar2;
  char in_w1;
  undefined4 uVar3;
  LineBreakCategory *pLVar4;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  if (lVar1 != 0) {
    pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar4 = aLStack_18;
    std::string::string(asStack_10,"AutoTestAllLevel");
    EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
              (pwVar2,(wchar16 *)asStack_10,pLVar4,in_x3,in_x4);
    std::string::~string(asStack_10);
    nop();
  }
  uVar3 = 3;
  if (in_w1 == '\0') {
    uVar3 = 1;
  }
  setState((WaveManager *)param_1,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManager::ShouldCullZombiesForWave(int) const */

void __thiscall WaveManager::ShouldCullZombiesForWave(WaveManager *this,int param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 8);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(lVar2 + 0x38));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(lVar2 + 0x38));
  local_18 = std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                       (uVar3,uVar4,local_24);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(lVar2 + 0x38));
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WaveManager::~WaveManager() */

void __thiscall WaveManager::~WaveManager(WaveManager *this)

{
  *(undefined ***)this = &PTR_GetClass_06910fc0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<Wave,std::allocator<Wave>>::~vector
            ((vector<Wave,std::allocator<Wave>> *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  nop();
  return;
}


/* WaveManager::~WaveManager() */

void __thiscall WaveManager::~WaveManager(WaveManager *this)

{
  ~WaveManager(this);
  AK::FreeHook(this);
  return;
}


/* WaveManager::GetWaveByIndex(int) */

void WaveManager::GetWaveByIndex(int param_1)

{
  Wave *pWVar1;
  int in_w1;
  Wave *in_x8;
  
  pWVar1 = (Wave *)FUN_04926850(*(undefined8 *)((ulong)(uint)param_1 + 0x10),(long)in_w1);
  Wave::Wave(in_x8,pWVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManager::ShouldFreeCapturedZombies() */

void __thiscall WaveManager::ShouldFreeCapturedZombies(WaveManager *this)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  vector *pvVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  undefined8 local_30;
  undefined8 local_28;
  vector<Zombie*,std::allocator<Zombie*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsDone(this);
  if (cVar1 != '\0') {
    pvVar4 = (vector *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
    std::vector<Zombie*,std::allocator<Zombie*>>::vector(avStack_20,pvVar4);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      this_00 = (Zombie *)*puVar5;
      cVar3 = RealObject::IsOnTeam(this_00,2);
      if (cVar3 != '\0') {
        cVar3 = Zombie::IsControlled(this_00);
        if (cVar3 == '\0') {
          cVar1 = '\0';
          break;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    std::vector<Zombie*,std::allocator<Zombie*>>::~vector(avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManager::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) const */

void __thiscall WaveManager::AddResourceRequirements(WaveManager *this,set *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  RtWeakPtrBase *pRVar4;
  WaveAction *this_00;
  FairyTaleWindWaveActionProps *pFVar5;
  undefined8 uVar6;
  long *plVar7;
  ProfileMgr *this_01;
  NewPVPMgr *this_02;
  undefined8 uVar8;
  string *psVar9;
  ZombieType *this_03;
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = FUN_04928e9c(*(undefined8 *)(this + 0x10));
  local_28 = FUN_04928eec(*(undefined8 *)(this + 0x18));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  if (bVar1) {
    do {
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      local_18 = FUN_04928790(*(undefined8 *)(lVar3 + 8));
      local_10 = FUN_049287e0(*(undefined8 *)(lVar3 + 0x10));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar1) {
        pRVar4 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar4);
        this_00 = (WaveAction *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        pFVar5 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(this_00);
        uVar8 = FUN_04928fa0(*(undefined8 *)(pFVar5 + 0x10));
        uVar6 = FUN_04928ff0(*(undefined8 *)(pFVar5 + 0x18));
        std::set<std::string,std::less<std::string>,std::allocator<std::string>>::
        insert<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>
                  ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
                   uVar8,uVar6);
        plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        (**(code **)(*plVar7 + 0x90))(plVar7,param_1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_30);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    } while (bVar1);
  }
  cVar2 = TreasureYeti::IsSpawned();
  if (cVar2 != '\0') {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (NewPVPMgr *)ProfileMgr::GetCurrentProfile(this_01);
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    uVar8 = NewPVPMgr::GetSunUpgradeInfos(this_02);
    FUN_05475d88((string *)aRStack_20,uVar8);
    cVar2 = std::operator==((string *)&local_28,(string *)aRStack_20);
    if (cVar2 != '\0') {
      psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      std::string::string((string *)&local_10,"treasureyeti");
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar9);
      std::string::~string((string *)&local_10);
      nop();
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_18);
      if (bVar1) {
        this_03 = (ZombieType *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        ZombieType::AddInGameResourceRequirements(this_03,param_1);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    }
    std::string::~string((string *)aRStack_20);
    std::string::~string((string *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManager::assignLoot(LootConfig*) */

void __thiscall WaveManager::assignLoot(WaveManager *this,LootConfig *param_1)

{
  vector<Loot,std::allocator<Loot>> *this_00;
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  RtWeakPtr *this_01;
  ulong uVar6;
  string *psVar7;
  undefined4 *puVar8;
  int *piVar9;
  long *plVar10;
  undefined8 *puVar11;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  RtObject *this_03;
  ZombieSpawnerAction *pZVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  int iVar19;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_58 [24];
  undefined8 local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar16 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_58);
  uVar17 = 0;
  lVar4 = FUN_04926820(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  if (lVar4 != 0) {
    do {
      uVar13 = 0;
      Sexy::OutputDebugStrF
                ((wchar_t *)"WaveManager assignLoot iWave = %d begin",uVar16 & 0xffffffff);
      lVar4 = FUN_04926850(*(undefined8 *)(this + 0x10),uVar16);
      uVar14 = *(undefined8 *)(lVar4 + 8);
      lVar5 = FUN_04926858(uVar14,*(undefined8 *)(lVar4 + 0x10));
      if (lVar5 != 0) {
        do {
          this_01 = (RtWeakPtr *)FUN_04926880(uVar14,uVar13);
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
          if (bVar2) {
            this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      FUN_04926880(*(undefined8 *)(lVar4 + 8),uVar13);
            this_03 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
            pZVar12 = Sexy::RtObject::Cast<ZombieSpawnerAction>(this_03);
            if (pZVar12 != (ZombieSpawnerAction *)0x0) {
              ZombieLootApplicant::ZombieLootApplicant((ZombieLootApplicant *)local_40);
              std::vector<ZombieLootApplicant,std::allocator<ZombieLootApplicant>>::push_back
                        ((vector<ZombieLootApplicant,std::allocator<ZombieLootApplicant>> *)
                         avStack_58,(ZombieLootApplicant *)local_40);
              ZombieLootApplicant::~ZombieLootApplicant((ZombieLootApplicant *)local_40);
              puVar11 = (undefined8 *)
                        std::vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>>::back
                                  ((vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>> *)avStack_58
                                  );
              lVar5 = *(long *)pZVar12;
              this_00 = (vector<Loot,std::allocator<Loot>> *)(puVar11 + 4);
              *puVar11 = pZVar12;
              (**(code **)(lVar5 + 0xa0))(pZVar12,puVar11 + 1);
              uVar6 = FUN_04926888(puVar11[1],puVar11[2]);
              std::vector<Loot,std::allocator<Loot>>::resize(this_00,uVar6);
              local_60 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)this_00);
              local_40[0] = std::
                            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                   *)this_00);
              while (bVar2 = __gnu_cxx::operator!=
                                       ((__normal_iterator *)&local_60,(__normal_iterator *)local_40
                                       ), bVar2) {
                puVar8 = (undefined4 *)
                         std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
                *puVar8 = 0;
                eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                          ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_60);
              }
            }
          }
          uVar13 = uVar13 + 1;
          uVar14 = *(undefined8 *)(lVar4 + 8);
          uVar6 = FUN_04926858(uVar14,*(undefined8 *)(lVar4 + 0x10));
        } while (uVar13 < uVar6);
      }
      uVar16 = uVar16 + 1;
      Sexy::OutputDebugStrF((wchar_t *)"WaveManager assignLoot iWave = %d end",uVar17);
      uVar17 = uVar16 & 0xffffffff;
      uVar13 = FUN_04926820(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
    } while (uVar16 < uVar13);
  }
  iVar19 = 0;
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_58);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_58);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)&local_68);
  if (bVar2) {
    do {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
      local_60 = FUN_04928dfc(*(undefined8 *)(lVar4 + 8));
      local_40[0] = FUN_04928e4c(*(undefined8 *)(lVar4 + 0x10));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_60,(__normal_iterator *)local_40), bVar2
            ) {
        plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
        if (*plVar10 != 0) {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar10 + 0xa0));
          iVar19 = iVar19 + *(int *)(lVar4 + 0x9c);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
      }
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_70);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)&local_68);
    } while (bVar2);
  }
  if ((param_1 != (LootConfig *)0x0) && ((byte)param_1[8] < (0 < iVar19))) {
    fVar18 = (float)*(double *)(param_1 + 0x10);
    if (*(double *)(param_1 + 0x10) == -1.0) {
      uVar16 = FUN_04926820(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
      fVar18 = ((float)uVar16 + -10.0) * 0.33333334 + 4.0;
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_40);
    psVar7 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    LootHelpers::GenerateLootForLevel(psVar7,(double)fVar18,(vector *)local_40);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_40);
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_40);
LAB_04930524:
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
    if (bVar2) {
      iVar3 = 0;
      puVar8 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78)
      ;
      uVar1 = *puVar8;
      if (0 < iVar19) {
        iVar3 = Sexy::Rand(iVar19);
      }
      iVar15 = 0;
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_58);
      local_60 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_58);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60);
      if (bVar2) {
        do {
          uVar16 = 0;
          lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
          while( true ) {
            uVar14 = *(undefined8 *)(lVar4 + 8);
            uVar13 = uVar16 & 0xffffffff;
            uVar17 = FUN_04926888(uVar14,*(undefined8 *)(lVar4 + 0x10));
            if (uVar17 <= uVar16) break;
            piVar9 = (int *)FUN_04926894(*(undefined8 *)(lVar4 + 0x20),uVar16);
            if (*piVar9 == 0) {
              plVar10 = (long *)FUN_0492689c(uVar14,uVar16);
              uVar14 = FUN_0547429c(*plVar10 + 0x10);
              Sexy::OutputDebugStrF
                        ((wchar_t *)"WaveManager assignLoot iWave ZombieClassName = %s, i = %d",
                         uVar14,uVar16 & 0xffffffff);
              plVar10 = (long *)FUN_0492689c(*(undefined8 *)(lVar4 + 8),uVar16);
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar10 + 0xa0));
              iVar15 = iVar15 + *(int *)(lVar5 + 0x9c);
              if (iVar3 < iVar15) {
                iVar19 = iVar19 - *(int *)(lVar5 + 0x9c);
                updateLootStats(this,uVar1);
                puVar8 = (undefined4 *)FUN_04926894(*(undefined8 *)(lVar4 + 0x20),uVar16);
                *puVar8 = uVar1;
                eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                          ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_78);
                goto LAB_04930524;
              }
            }
            uVar16 = uVar16 + 1;
            Sexy::OutputDebugStrF
                      ((wchar_t *)"WaveManager assignLoot iWave ZombieClassName i = %d",uVar13);
          }
          std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_68)
          ;
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60);
        } while (bVar2);
      }
    }
    std::vector<Loot,std::allocator<Loot>>::~vector((vector<Loot,std::allocator<Loot>> *)local_40);
  }
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_58);
  local_40[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_58);
  while (bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)local_40)
        , bVar2) {
    puVar11 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    (**(code **)(*(long *)*puVar11 + 0xa8))((long *)*puVar11,puVar11 + 4);
    std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_60);
  }
  Sexy::OutputDebugStrF((wchar_t *)"WaveManager assignLoot end");
  std::vector<ZombieLootApplicant,std::allocator<ZombieLootApplicant>>::~vector
            ((vector<ZombieLootApplicant,std::allocator<ZombieLootApplicant>> *)avStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveManager::Initialize(Sexy::RtWeakPtr<WaveManagerProperties>, LootConfig*, bool) */

void __thiscall
WaveManager::Initialize
          (WaveManager *this,RtWeakPtr *param_2,LootConfig *param_3,WaveManager param_4)

{
  vector<Wave,std::allocator<Wave>> *this_00;
  RtWeakPtr<PowerPropertySheet> *this_01;
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  RtWeakPtrBase *pRVar13;
  long *plVar14;
  undefined8 uVar15;
  RtObject *this_02;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_04;
  long *extraout_x0;
  Toggles *this_05;
  WaveAction *extraout_x0_00;
  ProfileMgr *this_06;
  NewPVPMgr *this_07;
  PlayerInfo *this_08;
  vector<ZombieGift,std::allocator<ZombieGift>> *this_09;
  string *psVar16;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var17;
  ulong uVar18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined1 local_30;
  long local_8;
  
  this_00 = (vector<Wave,std::allocator<Wave>> *)(this + 0x10);
  this_01 = (RtWeakPtr<PowerPropertySheet> *)(this + 8);
  local_8 = ___stack_chk_guard;
  this[0x46] = param_4;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,param_2);
  std::vector<Wave,std::allocator<Wave>>::clear(this_00);
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  iVar1 = *(int *)(lVar8 + 0x28);
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  if (*(int *)(lVar8 + 0x2c) == 0) {
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    iVar7 = FUN_04926794(*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(lVar8 + 0x18));
    cVar4 = TreasureYeti::IsSpawned();
    if (cVar4 == '\0') goto LAB_0493090c;
LAB_04930d34:
    this_06 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_07 = (NewPVPMgr *)ProfileMgr::GetCurrentProfile(this_06);
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    uVar15 = NewPVPMgr::GetSunUpgradeInfos(this_07);
    FUN_05475d88((string *)local_40,uVar15);
    cVar4 = std::operator==((string *)&local_48,(string *)local_40);
    if (cVar4 != '\0') {
      Sexy::Rand(iVar7 / 2);
    }
    std::string::~string((string *)local_40);
    std::string::~string((string *)&local_48);
    if (0 < iVar7) goto LAB_04930918;
LAB_04930d94:
    assignLoot(this,param_3);
    cVar4 = RiftUtils::IsRiftTimedLevel();
  }
  else {
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    uVar6 = FUN_04926794(*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)(lVar9 + 0x18));
    local_40[0] = CONCAT44(local_40[0]._4_4_,uVar6);
    piVar10 = eastl::min_alt<int>((int *)(lVar8 + 0x2c),(int *)local_40);
    iVar7 = *piVar10;
    cVar4 = TreasureYeti::IsSpawned();
    if (cVar4 != '\0') goto LAB_04930d34;
LAB_0493090c:
    if (iVar7 < 1) goto LAB_04930d94;
LAB_04930918:
    uVar18 = 0;
    p_Var17 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x0;
    do {
      iVar3 = (int)uVar18;
      Wave::Wave((Wave *)local_40);
      std::vector<Wave,std::allocator<Wave>>::push_back(this_00,(Wave *)local_40);
      Wave::~Wave((Wave *)local_40);
      puVar11 = (undefined4 *)
                std::vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>>
                ::back((vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>>
                        *)this_00);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      puVar12 = (undefined8 *)FUN_049267c4(*(undefined8 *)(lVar8 + 0x10),uVar18);
      local_58 = FUN_049286b4(*puVar12);
      local_50 = FUN_04928704(puVar12[1]);
      while( true ) {
        bVar5 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50)
        ;
        if (!bVar5) break;
        pRVar13 = (RtWeakPtrBase *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_60,pRVar13);
        plVar14 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        uVar15 = (**(code **)(*plVar14 + 0x80))();
        GameObject::Create(uVar15,0x35);
        nop();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_40,(RtWeakPtrBase *)aRStack_60);
        WaveAction::InitializeAction
                  ((WaveAction *)this_02,(Wave *)local_40,this + 0x48,uVar18 & 0xffffffff);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_40,(RtWeakPtrBase *)&local_48);
        std::vector<Sexy::RtWeakPtr<WaveAction>,std::allocator<Sexy::RtWeakPtr<WaveAction>>>::
        push_back((vector<Sexy::RtWeakPtr<WaveAction>,std::allocator<Sexy::RtWeakPtr<WaveAction>>> *
                  )(puVar11 + 2),(RtWeakPtr *)local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        if ((((uint)p_Var17 < (uint)(this_02 != (RtObject *)0x0)) &&
            (bVar5 = Sexy::RtObject::IsA<SpawnZombiesJitteredWaveAction>(this_02), bVar5)) &&
           (nop(), p_Var17 = this_03,
           this_03 !=
           (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)0x0)) {
          this_04 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost(this_03);
          local_48 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(this_04);
          local_40[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end(this_04);
          while (bVar5 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_48,(__normal_iterator *)local_40),
                bVar5) {
            lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
            cVar4 = std::vector<std::string,std::allocator<std::string>>::empty
                              ((vector<std::string,std::allocator<std::string>> *)(lVar8 + 0x20));
            if (cVar4 == '\0') {
              p_Var17 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)0x1;
              goto LAB_049309c8;
            }
            std::move_iterator<Sexy::PAFrame*>::operator++
                      ((move_iterator<Sexy::PAFrame*> *)&local_48);
          }
          p_Var17 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)0x0;
        }
LAB_049309c8:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
      }
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar3 / iVar1;
      }
      if ((iVar1 + -1 == iVar3 - iVar2 * iVar1) || (iVar7 + -1 == iVar3)) {
        *puVar11 = 2;
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        if (*(char *)(lVar8 + 0x30) == '\0') {
          uVar15 = SpawnZombiesJitteredWaveActionProps::StaticGetClass();
          GameObject::Create(uVar15,0x35);
          nop();
          SpawnZombiesJitteredInstruction::SpawnZombiesJitteredInstruction
                    ((SpawnZombiesJitteredInstruction *)local_40);
          Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
          StageModule::GetFlagZombieType();
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)local_40,(RtWeakPtr *)&local_48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
          this_05 = (Toggles *)Toggles::GetInstance();
          std::string::string((string *)&local_48,"PetZombie");
          cVar4 = Toggles::IsEnabled(this_05,(string *)&local_48);
          std::string::~string((string *)&local_48);
          nop();
          if (cVar4 != '\0') {
            this_08 = (PlayerInfo *)ProfileUtils::Profile();
            this_09 = (vector<ZombieGift,std::allocator<ZombieGift>> *)
                      PlayerInfo::GetZombieGifts(this_08);
            cVar4 = std::vector<ZombieGift,std::allocator<ZombieGift>>::empty(this_09);
            if (cVar4 == '\0') {
              psVar16 = (string *)
                        Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
              FUN_04926f40(*(undefined8 *)this_09);
              ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar16);
              Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                        ((RtWeakPtr<PowerPropertySheet> *)local_40,(RtWeakPtr *)&local_48);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
              local_30 = 1;
            }
          }
          std::
          vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>::
          push_back((vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>
                     *)(extraout_x0 + 8),(SpawnZombiesJitteredInstruction *)local_40);
          uVar15 = (**(code **)(*extraout_x0 + 0x80))(extraout_x0);
          GameObject::Create(uVar15,0x35);
          nop();
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)&local_50);
          WaveAction::InitializeAction
                    (extraout_x0_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_48,this + 0x48,
                     uVar18 & 0xffffffff);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)&local_50);
          std::vector<Sexy::RtWeakPtr<WaveAction>,std::allocator<Sexy::RtWeakPtr<WaveAction>>>::
          push_back((vector<Sexy::RtWeakPtr<WaveAction>,std::allocator<Sexy::RtWeakPtr<WaveAction>>>
                     *)(puVar11 + 2),(RtWeakPtr *)&local_48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
          SpawnZombiesJitteredInstruction::~SpawnZombiesJitteredInstruction
                    ((SpawnZombiesJitteredInstruction *)local_40);
        }
      }
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < iVar7);
    assignLoot(this,param_3);
    if ((uint)p_Var17 != 0) {
      setState(this,5);
      goto LAB_04930b78;
    }
    cVar4 = RiftUtils::IsRiftTimedLevel();
  }
  if (cVar4 == '\0') {
    setState(this,1);
  }
  else {
    setState(this,4);
  }
LAB_04930b78:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WaveManager::SetFinish() */

void __thiscall WaveManager::SetFinish(WaveManager *this)

{
  setState(this,7);
  return;
}

