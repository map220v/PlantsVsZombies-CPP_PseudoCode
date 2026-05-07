// Class: SpiderRainZombieSpawner


/* SpiderRainZombieSpawner::initializeAction(Sexy::MTRand&, int) */

void SpiderRainZombieSpawner::initializeAction(MTRand *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  uVar4 = PVZ_EOT();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  uVar3 = Sexy::MTRand::Next((MTRand *)(ulong)(uint)param_2);
  iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  iVar2 = 0;
  if ((long)iVar1 != 0) {
    iVar2 = (int)(uVar3 / (ulong)(long)iVar1);
  }
  *(int *)(param_1 + 0x3c) = (int)uVar3 - iVar2 * iVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpiderRainZombieSpawner::StaticClassInit() */

void SpiderRainZombieSpawner::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpiderRainZombieSpawner");
    (*pcVar2)(plVar1,asStack_10,FUN_03cee7c4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpiderRainZombieSpawner::StaticGetClass() */

long * SpiderRainZombieSpawner::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpiderRainZombieSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpiderRainZombieSpawner::calculateNextRowToSpawnIn() */

void __thiscall SpiderRainZombieSpawner::calculateNextRowToSpawnIn(SpiderRainZombieSpawner *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (*(int *)(this + 0x3c) + 0x1f) / iVar1;
  }
  *(int *)(this + 0x3c) = (*(int *)(this + 0x3c) + 0x1f) - iVar2 * iVar1;
  return;
}


/* SpiderRainZombieSpawner::SpiderRainZombieSpawner() */

void __thiscall SpiderRainZombieSpawner::SpiderRainZombieSpawner(SpiderRainZombieSpawner *this)

{
  ZombieSpawnerAction::ZombieSpawnerAction((ZombieSpawnerAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_067616e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* SpiderRainZombieSpawner::StaticNew() */

SpiderRainZombieSpawner * SpiderRainZombieSpawner::StaticNew(void)

{
  SpiderRainZombieSpawner *this;
  
  this = ::operator_new(0x40);
  SpiderRainZombieSpawner(this);
  return this;
}


/* SpiderRainZombieSpawner::~SpiderRainZombieSpawner() */

void __thiscall SpiderRainZombieSpawner::~SpiderRainZombieSpawner(SpiderRainZombieSpawner *this)

{
  *(undefined ***)this = &PTR_GetActionClass_067616e0;
  std::vector<Loot,std::allocator<Loot>>::~vector
            ((vector<Loot,std::allocator<Loot>> *)(this + 0x18));
  ZombieSpawnerAction::~ZombieSpawnerAction((ZombieSpawnerAction *)this);
  return;
}


/* SpiderRainZombieSpawner::~SpiderRainZombieSpawner() */

void __thiscall SpiderRainZombieSpawner::~SpiderRainZombieSpawner(SpiderRainZombieSpawner *this)

{
  ~SpiderRainZombieSpawner(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpiderRainZombieSpawner::spawnSpiders(int, int, Sexy::MTRand&) */

void __thiscall
SpiderRainZombieSpawner::spawnSpiders
          (SpiderRainZombieSpawner *this,int param_1,int param_2,MTRand *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FairyTaleWindWaveActionProps *pFVar4;
  string *psVar5;
  int *piVar6;
  SexyVector3 *pSVar7;
  undefined4 *puVar8;
  ZombieFutureImp *this_00;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  int local_34;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  float local_28;
  float local_24;
  undefined4 local_20;
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_34 = param_1;
  pFVar4 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  SpiderRainZombieSpawnerProps::GetZombieName();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string((string *)&local_28);
  local_18[0] = *(int *)(pFVar4 + 0x44) - *(int *)(this + 0x38);
  piVar6 = eastl::min_alt<int>(&local_34,local_18);
  iVar1 = *piVar6;
  local_34 = iVar1;
  if (0 < iVar1) {
    lVar11 = 0;
    do {
      plVar9 = *(long **)(gLawnApp + 0x9f0);
      pcVar10 = *(code **)(*plVar9 + 0x318);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)aRStack_30);
      pSVar7 = (SexyVector3 *)(*pcVar10)(plVar9,(RtWeakPtr<Sexy::ResourceInfo> *)local_18,param_2,0)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      Zombie::SetHasPlantFood(SUB81(pSVar7,0));
      puVar8 = (undefined4 *)FUN_03cea504(*(undefined8 *)(this + 0x18),lVar11);
      Zombie::SetLoot((Zombie *)pSVar7,*puVar8);
      (**(code **)(*(long *)pSVar7 + 0x250))(pSVar7,0);
      iVar2 = *(int *)(pFVar4 + 0x54);
      if (*(int *)(pFVar4 + 0x58) != iVar2) {
        iVar2 = Sexy::MTRand::Next(param_3,*(int *)(pFVar4 + 0x58) - iVar2);
        iVar2 = *(int *)(pFVar4 + 0x54) + iVar2;
      }
      lVar11 = lVar11 + 1;
      iVar3 = calculateNextRowToSpawnIn(this);
      iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2);
      iVar3 = BoardTransforms::GridToBoardSpaceY(iVar3);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_28,(float)iVar2 - 10.0,(float)iVar3 - 10.0,0.0);
      EATextSquish::Vec3::Vec3((Vec3 *)local_18,local_28,local_24,600.0);
      BoardEntity::PlaceOnBoard(pSVar7);
      nop();
      ZombieFutureImp::SetIsFallingFromSpawn(this_00,true);
      ZombieImp::SetGetsUpFromLanding((ZombieImp *)this_00,true);
      (**(code **)(*(long *)this_00 + 0xa08))
                (local_28,local_24,local_20,*(undefined4 *)(pFVar4 + 0x50),0x44160000,this_00,1);
      *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
    } while ((int)lVar11 < iVar1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpiderRainZombieSpawner::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void __thiscall
SpiderRainZombieSpawner::WaveStart
          (SpiderRainZombieSpawner *this,int param_1,undefined8 param_3,char param_4,MTRand *param_5
          )

{
  FairyTaleWindWaveActionProps *pFVar1;
  Board *pBVar2;
  float fVar3;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  spawnSpiders(this,*(int *)(pFVar1 + 0x40),param_1,param_5);
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x30) = fVar3 + *(float *)(pFVar1 + 0x48);
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x34) = fVar3 + *(float *)(pFVar1 + 0x4c);
  if (param_4 == '\0') {
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    SpiderRainZombieSpawnerProps::GetWaveStartMessage();
    Board::DisplayAdviceAgain(pBVar2,auStack_10,0x11,1);
    FUN_05476c50(auStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpiderRainZombieSpawner::WaveUpdate(int, Sexy::MTRand&) */

void __thiscall
SpiderRainZombieSpawner::WaveUpdate(SpiderRainZombieSpawner *this,int param_1,MTRand *param_2)

{
  FairyTaleWindWaveActionProps *pFVar1;
  float fVar2;
  
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  if (*(int *)(this + 0x38) < *(int *)(pFVar1 + 0x44)) {
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x30) < fVar2) {
      spawnSpiders(this,*(int *)(pFVar1 + 0x40),param_1,param_2);
      fVar2 = (float)PVZ_T();
      *(float *)(this + 0x30) = fVar2 + *(float *)(pFVar1 + 0x48);
    }
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x34) < fVar2) {
      (**(code **)(*(long *)this + 0x88))(this,param_1,param_2);
      return;
    }
  }
  return;
}


/* SpiderRainZombieSpawner::WaveEnd(int, Sexy::MTRand&) */

void __thiscall
SpiderRainZombieSpawner::WaveEnd(SpiderRainZombieSpawner *this,int param_1,MTRand *param_2)

{
  FairyTaleWindWaveActionProps *pFVar1;
  
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  if (0 < *(int *)(pFVar1 + 0x44) - *(int *)(this + 0x38)) {
    spawnSpiders(this,*(int *)(pFVar1 + 0x44) - *(int *)(this + 0x38),param_1,param_2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpiderRainZombieSpawner::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
SpiderRainZombieSpawner::AddResourceRequirements(SpiderRainZombieSpawner *this,set *param_1)

{
  string *psVar1;
  ResourceInfo *this_00;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  SpiderRainZombieSpawnerProps::GetZombieName();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  if (this_00 != (ResourceInfo *)0x0) {
    ZombieType::AddInGameResourceRequirements((ZombieType *)this_00,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpiderRainZombieSpawner::GetZombies(std::vector<ZombieType const*, std::allocator<ZombieType
   const*> >&) */

void __thiscall SpiderRainZombieSpawner::GetZombies(SpiderRainZombieSpawner *this,vector *param_1)

{
  FairyTaleWindWaveActionProps *pFVar1;
  string *psVar2;
  int iVar3;
  ResourceInfo *local_20;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  SpiderRainZombieSpawnerProps::GetZombieName();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  if (0 < *(int *)(pFVar1 + 0x44)) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::push_back
                ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)param_1,
                 (ZombieType **)&local_20);
    } while (iVar3 < *(int *)(pFVar1 + 0x44));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

