// Class: BeachStageEventZombieSpawner


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeachStageEventZombieSpawner::StaticClassInit() */

void BeachStageEventZombieSpawner::StaticClassInit(void)

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
    std::string::string(asStack_10,"BeachStageEventZombieSpawner");
    (*pcVar2)(plVar1,asStack_10,FUN_03cf667c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeachStageEventZombieSpawner::StaticGetClass() */

long * BeachStageEventZombieSpawner::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BeachStageEventZombieSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeachStageEventZombieSpawner::calculateNextRowToSpawnIn() */

int __thiscall
BeachStageEventZombieSpawner::calculateNextRowToSpawnIn(BeachStageEventZombieSpawner *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(this + 0x3c);
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  iVar1 = iVar2 + 0x11;
  iVar3 = 0;
  if (iVar4 != 0) {
    iVar3 = iVar1 / iVar4;
  }
  *(int *)(this + 0x3c) = iVar1 - iVar3 * iVar4;
  return iVar2;
}


/* BeachStageEventZombieSpawner::BeachStageEventZombieSpawner() */

void __thiscall
BeachStageEventZombieSpawner::BeachStageEventZombieSpawner(BeachStageEventZombieSpawner *this)

{
  undefined4 uVar1;
  
  ZombieSpawnerAction::ZombieSpawnerAction((ZombieSpawnerAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06761c70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = uVar1;
  return;
}


/* BeachStageEventZombieSpawner::StaticNew() */

BeachStageEventZombieSpawner * BeachStageEventZombieSpawner::StaticNew(void)

{
  BeachStageEventZombieSpawner *this;
  
  this = ::operator_new(0x40);
  BeachStageEventZombieSpawner(this);
  return this;
}


/* BeachStageEventZombieSpawner::~BeachStageEventZombieSpawner() */

void __thiscall
BeachStageEventZombieSpawner::~BeachStageEventZombieSpawner(BeachStageEventZombieSpawner *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06761c70;
  std::vector<Loot,std::allocator<Loot>>::~vector
            ((vector<Loot,std::allocator<Loot>> *)(this + 0x18));
  ZombieSpawnerAction::~ZombieSpawnerAction((ZombieSpawnerAction *)this);
  return;
}


/* BeachStageEventZombieSpawner::~BeachStageEventZombieSpawner() */

void __thiscall
BeachStageEventZombieSpawner::~BeachStageEventZombieSpawner(BeachStageEventZombieSpawner *this)

{
  ~BeachStageEventZombieSpawner(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeachStageEventZombieSpawner::spawnZombies(int, int, Sexy::MTRand&) */

void __thiscall
BeachStageEventZombieSpawner::spawnZombies
          (BeachStageEventZombieSpawner *this,int param_1,int param_2,MTRand *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FairyTaleWindWaveActionProps *pFVar4;
  string *psVar5;
  int *piVar6;
  Zombie *this_00;
  undefined4 *puVar7;
  PopAnimRig *this_01;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  int local_34;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  float local_28;
  float local_24;
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_34 = param_1;
  pFVar4 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  BeachStageEventZombieSpawnerProps::GetZombieName();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string((string *)&local_28);
  local_18[0] = *(int *)(pFVar4 + 0x44) - *(int *)(this + 0x38);
  piVar6 = eastl::min_alt<int>(&local_34,local_18);
  iVar1 = *piVar6;
  local_34 = iVar1;
  if (0 < iVar1) {
    lVar9 = 0;
    do {
      plVar8 = *(long **)(gLawnApp + 0x9f0);
      pcVar10 = *(code **)(*plVar8 + 0x318);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)aRStack_30);
      this_00 = (Zombie *)(*pcVar10)(plVar8,(RtWeakPtr<Sexy::ResourceInfo> *)local_18,param_2,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      Zombie::SetHasPlantFood(SUB81(this_00,0));
      puVar7 = (undefined4 *)FUN_03cf4f14(*(undefined8 *)(this + 0x18),lVar9);
      Zombie::SetLoot(this_00,*puVar7);
      (**(code **)(*(long *)this_00 + 0x250))(this_00,0);
      this_01 = (PopAnimRig *)Zombie::GetAnimRig(this_00);
      std::string::string((string *)local_18,"zombie_seaweed1");
      PopAnimRig::SetLayerVisibility(this_01,(string *)local_18,true);
      std::string::~string((string *)local_18);
      nop();
      iVar2 = *(int *)(pFVar4 + 0x50);
      if (iVar2 < *(int *)(pFVar4 + 0x54)) {
        iVar3 = Sexy::MTRand::Next(param_3,*(int *)(pFVar4 + 0x54) - iVar2);
        iVar2 = iVar2 + iVar3;
      }
      lVar9 = lVar9 + 1;
      iVar3 = calculateNextRowToSpawnIn(this);
      iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2);
      iVar3 = BoardTransforms::GridToBoardSpaceY(iVar3);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_28,(float)iVar2,(float)iVar3,0.0);
      EATextSquish::Vec3::Vec3((Vec3 *)local_18,local_28,local_24,600.0);
      Zombie::RiseFromGround(this_00,(SexyVector3 *)local_18,true);
      *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
    } while ((int)lVar9 < iVar1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeachStageEventZombieSpawner::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void __thiscall
BeachStageEventZombieSpawner::WaveStart
          (BeachStageEventZombieSpawner *this,int param_1,undefined8 param_3,char param_4,
          MTRand *param_5)

{
  FairyTaleWindWaveActionProps *pFVar1;
  Board *pBVar2;
  float fVar3;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  PoolRaidingPartyZombieSpawner::spawnWaveEffect();
  spawnZombies(this,*(int *)(pFVar1 + 0x40),param_1,param_5);
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x30) = fVar3 + *(float *)(pFVar1 + 0x48);
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x34) = fVar3 + *(float *)(pFVar1 + 0x4c);
  if (param_4 == '\0') {
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    ZombieRainSpawnerProps::GetWaveStartMessage();
    Board::DisplayAdviceAgain(pBVar2,auStack_10,0x11,1);
    FUN_05476c50(auStack_10);
  }
  WaveAction::notifyWaveEvents((WaveAction *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeachStageEventZombieSpawner::WaveUpdate(int, Sexy::MTRand&) */

void __thiscall
BeachStageEventZombieSpawner::WaveUpdate
          (BeachStageEventZombieSpawner *this,int param_1,MTRand *param_2)

{
  FairyTaleWindWaveActionProps *pFVar1;
  float fVar2;
  
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  if (*(int *)(this + 0x38) < *(int *)(pFVar1 + 0x44)) {
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x30) < fVar2) {
      spawnZombies(this,*(int *)(pFVar1 + 0x40),param_1,param_2);
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


/* BeachStageEventZombieSpawner::WaveEnd(int, Sexy::MTRand&) */

void __thiscall
BeachStageEventZombieSpawner::WaveEnd
          (BeachStageEventZombieSpawner *this,int param_1,MTRand *param_2)

{
  FairyTaleWindWaveActionProps *pFVar1;
  
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  if (0 < *(int *)(pFVar1 + 0x44) - *(int *)(this + 0x38)) {
    spawnZombies(this,*(int *)(pFVar1 + 0x44) - *(int *)(this + 0x38),param_1,param_2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeachStageEventZombieSpawner::AddResourceRequirements(std::set<std::string, std::less<std::string
   >, std::allocator<std::string > >&) */

void __thiscall
BeachStageEventZombieSpawner::AddResourceRequirements
          (BeachStageEventZombieSpawner *this,set *param_1)

{
  string *psVar1;
  ResourceInfo *this_00;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  BeachStageEventZombieSpawnerProps::GetZombieName();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  ZombieType::AddInGameResourceRequirements((ZombieType *)this_00,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeachStageEventZombieSpawner::GetZombies(std::vector<ZombieType const*, std::allocator<ZombieType
   const*> >&) */

void __thiscall
BeachStageEventZombieSpawner::GetZombies(BeachStageEventZombieSpawner *this,vector *param_1)

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
  BeachStageEventZombieSpawnerProps::GetZombieName();
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

