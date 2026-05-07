// Class: RaidingPartyZombieSpawner


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RaidingPartyZombieSpawner::StaticClassInit() */

void RaidingPartyZombieSpawner::StaticClassInit(void)

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
    std::string::string(asStack_10,"RaidingPartyZombieSpawner");
    (*pcVar2)(plVar1,asStack_10,FUN_03f1b028,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RaidingPartyZombieSpawner::StaticGetClass() */

long * RaidingPartyZombieSpawner::StaticGetClass(void)

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
  uVar2 = ZombieSpawnerAction::StaticGetClass();
  (*pcVar3)(plVar1,"RaidingPartyZombieSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RaidingPartyZombieSpawner::RaidingPartyZombieSpawner() */

void __thiscall
RaidingPartyZombieSpawner::RaidingPartyZombieSpawner(RaidingPartyZombieSpawner *this)

{
  undefined4 uVar1;
  
  ZombieSpawnerAction::ZombieSpawnerAction((ZombieSpawnerAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06796f10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x4c) = uVar1;
  *(undefined4 *)(this + 0x50) = uVar1;
  return;
}


/* RaidingPartyZombieSpawner::StaticNew() */

RaidingPartyZombieSpawner * RaidingPartyZombieSpawner::StaticNew(void)

{
  RaidingPartyZombieSpawner *this;
  
  this = ::operator_new(0x58);
  RaidingPartyZombieSpawner(this);
  return this;
}


/* RaidingPartyZombieSpawner::~RaidingPartyZombieSpawner() */

void __thiscall
RaidingPartyZombieSpawner::~RaidingPartyZombieSpawner(RaidingPartyZombieSpawner *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06796f10;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x30));
  std::vector<Loot,std::allocator<Loot>>::~vector
            ((vector<Loot,std::allocator<Loot>> *)(this + 0x18));
  ZombieSpawnerAction::~ZombieSpawnerAction((ZombieSpawnerAction *)this);
  return;
}


/* RaidingPartyZombieSpawner::~RaidingPartyZombieSpawner() */

void __thiscall
RaidingPartyZombieSpawner::~RaidingPartyZombieSpawner(RaidingPartyZombieSpawner *this)

{
  ~RaidingPartyZombieSpawner(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RaidingPartyZombieSpawner::createZombies(int, Sexy::MTRand&, int, int) */

void __thiscall
RaidingPartyZombieSpawner::createZombies
          (RaidingPartyZombieSpawner *this,int param_1,MTRand *param_2,int param_3,int param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  string *psVar4;
  Zombie *this_00;
  undefined4 *puVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_20,"swashbuckler");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  nop();
  if (param_3 < param_4) {
    lVar1 = (long)param_3 + 1;
    lVar6 = lVar1;
    lVar9 = (long)param_3;
    while( true ) {
      lVar8 = lVar6;
      plVar7 = *(long **)(gLawnApp + 0x9f0);
      pcVar10 = *(code **)(*plVar7 + 0x318);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_28);
      this_00 = (Zombie *)(*pcVar10)(plVar7,aRStack_18,param_1,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      Zombie::SetHasPlantFood(SUB81(this_00,0));
      puVar5 = (undefined4 *)FUN_03f18b3c(*(undefined8 *)(this + 0x18),lVar9);
      Zombie::SetLoot(this_00,*puVar5);
      (**(code **)(*(long *)this_00 + 0x250))(this_00,0);
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(this_00);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      iVar2 = *(int *)(lVar6 + 0x78);
      lVar6 = FUN_03f18b44(*(undefined8 *)(this + 0x30),lVar9);
      iVar3 = BoardTransforms::GridToBoardSpaceY(*(int *)(lVar6 + 4));
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)(iVar2 + 0x334),(float)iVar3,0.0);
      BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
      if (lVar8 == lVar1 + (ulong)(uint)((param_4 + -1) - param_3)) break;
      lVar6 = lVar8 + 1;
      lVar9 = lVar8;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RaidingPartyZombieSpawner::spawnGroup(int, int, Sexy::MTRand&) */

void __thiscall
RaidingPartyZombieSpawner::spawnGroup
          (RaidingPartyZombieSpawner *this,int param_1,int param_2,MTRand *param_3)

{
  int iVar1;
  int iVar2;
  FairyTaleWindWaveActionProps *pFVar3;
  int *piVar4;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar3 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  iVar1 = *(int *)(this + 0x48);
  local_c = iVar1 + param_1;
  piVar4 = eastl::min_alt<int>(&local_c,(int *)(pFVar3 + 0x40));
  iVar2 = *piVar4;
  createZombies(this,param_2,param_3,iVar1,iVar2);
  *(int *)(this + 0x48) = iVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RaidingPartyZombieSpawner::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void __thiscall
RaidingPartyZombieSpawner::WaveStart
          (RaidingPartyZombieSpawner *this,int param_1,undefined8 param_3,char param_4,
          MTRand *param_5)

{
  FairyTaleWindWaveActionProps *pFVar1;
  Board *pBVar2;
  float fVar3;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  spawnGroup(this,*(int *)(pFVar1 + 0x44),param_1,param_5);
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x4c) = fVar3 + *(float *)(pFVar1 + 0x48);
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x50) = fVar3 + *(float *)(pFVar1 + 0x4c);
  if (param_4 == '\0') {
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(auStack_10,L"[WARNING_RAIDINGPARTY]",auStack_18);
    Board::DisplayAdviceAgain(pBVar2,auStack_10,0x11,1);
    FUN_05476c50(auStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RaidingPartyZombieSpawner::spawnAllTheThings(int, Sexy::MTRand&) */

void __thiscall
RaidingPartyZombieSpawner::spawnAllTheThings
          (RaidingPartyZombieSpawner *this,int param_1,MTRand *param_2)

{
  FairyTaleWindWaveActionProps *pFVar1;
  
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  if (*(int *)(pFVar1 + 0x40) <= *(int *)(this + 0x48)) {
    return;
  }
  spawnGroup(this,*(int *)(pFVar1 + 0x40) - *(int *)(this + 0x48),param_1,param_2);
  return;
}


/* RaidingPartyZombieSpawner::WaveEnd(int, Sexy::MTRand&) */

void RaidingPartyZombieSpawner::WaveEnd(int param_1,MTRand *param_2)

{
  FairyTaleWindWaveActionProps *pFVar1;
  WaveAction *this;
  MTRand *in_x2;
  
  this = (WaveAction *)(ulong)(uint)param_1;
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(this);
  if (*(int *)(pFVar1 + 0x40) <= *(int *)(this + 0x48)) {
    return;
  }
  spawnGroup((RaidingPartyZombieSpawner *)this,*(int *)(pFVar1 + 0x40) - *(int *)(this + 0x48),
             (int)param_2,in_x2);
  return;
}


/* RaidingPartyZombieSpawner::WaveUpdate(int, Sexy::MTRand&) */

void __thiscall
RaidingPartyZombieSpawner::WaveUpdate(RaidingPartyZombieSpawner *this,int param_1,MTRand *param_2)

{
  FairyTaleWindWaveActionProps *pFVar1;
  float fVar2;
  
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  if (*(int *)(this + 0x48) < *(int *)(pFVar1 + 0x40)) {
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x4c) < fVar2) {
      spawnGroup(this,*(int *)(pFVar1 + 0x44),param_1,param_2);
      fVar2 = (float)PVZ_T();
      *(float *)(this + 0x4c) = fVar2 + *(float *)(pFVar1 + 0x48);
    }
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x50) < fVar2) {
      spawnAllTheThings(this,param_1,param_2);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RaidingPartyZombieSpawner::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
RaidingPartyZombieSpawner::AddResourceRequirements(RaidingPartyZombieSpawner *this,set *param_1)

{
  string *psVar1;
  ResourceInfo *this_00;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_18,"swashbuckler");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  ZombieType::AddInGameResourceRequirements((ZombieType *)this_00,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RaidingPartyZombieSpawner::initializeAction(Sexy::MTRand&, int) */

void RaidingPartyZombieSpawner::initializeAction(MTRand *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  FairyTaleWindWaveActionProps *pFVar6;
  int *piVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar6 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)param_1);
  iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_28 = 0;
  if (0 < iVar1) {
    do {
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)&local_20,&local_28);
      local_28 = local_28 + 1;
    } while (local_28 < iVar1);
  }
  iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  if (0 < *(int *)(pFVar6 + 0x40)) {
    iVar11 = 0;
    do {
      cVar4 = std::vector<int,std::allocator<int>>::empty
                        ((vector<int,std::allocator<int>> *)&local_20);
      if (cVar4 == '\0') {
        uVar8 = Sexy::MTRand::Next((MTRand *)(ulong)(uint)param_2);
        uVar3 = local_20;
        iVar5 = FUN_03f18ac4(local_20,local_18);
        iVar9 = 0;
        if ((long)iVar5 != 0) {
          iVar9 = (int)(uVar8 / (ulong)(long)iVar5);
        }
        lVar10 = (long)((int)uVar8 - iVar9 * iVar5);
        piVar7 = (int *)FUN_03f18ae0(uVar3,lVar10);
        iVar9 = *piVar7;
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_20);
        local_30 = __gnu_cxx::
                   __normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>::
                   operator+((__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>
                              *)&local_38,lVar10);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_28,(__normal_iterator *)&local_30);
        std::vector<int,std::allocator<int>>::erase
                  ((vector<int,std::allocator<int>> *)&local_20,CONCAT44(uStack_24,local_28));
      }
      else {
        uVar8 = Sexy::MTRand::Next((MTRand *)(ulong)(uint)param_2);
        iVar9 = 0;
        if ((long)iVar1 != 0) {
          iVar9 = (int)(uVar8 / (ulong)(long)iVar1);
        }
        iVar9 = (int)uVar8 - iVar9 * iVar1;
      }
      iVar11 = iVar11 + 1;
      Sexy::Point::Point((Point *)&local_28,iVar2 + -1,iVar9);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(param_1 + 0x30),
                 (Point *)&local_28);
    } while (iVar11 < *(int *)(pFVar6 + 0x40));
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RaidingPartyZombieSpawner::GetZombies(std::vector<ZombieType const*, std::allocator<ZombieType
   const*> >&) */

void __thiscall
RaidingPartyZombieSpawner::GetZombies(RaidingPartyZombieSpawner *this,vector *param_1)

{
  string *psVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  int iVar3;
  ResourceInfo *local_20;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_18,"swashbuckler");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  if (0 < *(int *)(pFVar2 + 0x40)) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::push_back
                ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)param_1,
                 (ZombieType **)&local_20);
    } while (iVar3 < *(int *)(pFVar2 + 0x40));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

