// Class: ZombieRainSpawner


/* ZombieRainSpawner::initializeAction(Sexy::MTRand&, int) */

void ZombieRainSpawner::initializeAction(MTRand *param_1,int param_2)

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
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  iVar1 = 0;
  if ((long)iVar2 != 0) {
    iVar1 = (int)(uVar3 / (ulong)(long)iVar2);
  }
  *(int *)(param_1 + 0x3c) = (int)uVar3 - iVar1 * iVar2;
  return;
}


/* ZombieRainSpawner::ZombieRainSpawner() */

void __thiscall ZombieRainSpawner::ZombieRainSpawner(ZombieRainSpawner *this)

{
  undefined4 uVar1;
  
  ZombieSpawnerAction::ZombieSpawnerAction((ZombieSpawnerAction *)this);
  *(undefined ***)this = &PTR_GetClass_069120e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = uVar1;
  return;
}


/* ZombieRainSpawner::~ZombieRainSpawner() */

void __thiscall ZombieRainSpawner::~ZombieRainSpawner(ZombieRainSpawner *this)

{
  *(undefined ***)this = &PTR_GetClass_069120e0;
  std::vector<Loot,std::allocator<Loot>>::~vector
            ((vector<Loot,std::allocator<Loot>> *)(this + 0x18));
  ZombieSpawnerAction::~ZombieSpawnerAction((ZombieSpawnerAction *)this);
  return;
}


/* ZombieRainSpawner::~ZombieRainSpawner() */

void __thiscall ZombieRainSpawner::~ZombieRainSpawner(ZombieRainSpawner *this)

{
  ~ZombieRainSpawner(this);
  AK::FreeHook(this);
  return;
}


/* ZombieRainSpawner::PostSpawnZombieSetup(Zombie*, Sexy::SexyVector3, float, float) */

void ZombieRainSpawner::PostSpawnZombieSetup(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRainSpawner::StaticClassInit() */

void ZombieRainSpawner::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRainSpawner");
    (*pcVar2)(plVar1,asStack_10,FUN_04939d60,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRainSpawner::StaticGetClass() */

long * ZombieRainSpawner::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRainSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRainSpawner::GetClass() const */

long * ZombieRainSpawner::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRainSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRainSpawner::calculateNextRowToSpawnIn() */

int __thiscall ZombieRainSpawner::calculateNextRowToSpawnIn(ZombieRainSpawner *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(this + 0x3c);
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  iVar1 = iVar2 + 0x1f;
  iVar3 = 0;
  if (iVar4 != 0) {
    iVar3 = iVar1 / iVar4;
  }
  *(int *)(this + 0x3c) = iVar1 - iVar3 * iVar4;
  return iVar2;
}


/* ZombieRainSpawner::StaticNew() */

ZombieRainSpawner * ZombieRainSpawner::StaticNew(void)

{
  ZombieRainSpawner *this;
  
  this = ::operator_new(0x40);
  ZombieRainSpawner(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRainSpawner::spawnZombies(int, int, Sexy::MTRand&) */

void __thiscall
ZombieRainSpawner::spawnZombies(ZombieRainSpawner *this,int param_1,int param_2,MTRand *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FairyTaleWindWaveActionProps *pFVar5;
  string *psVar6;
  int *piVar7;
  SexyVector3 *pSVar8;
  undefined4 *puVar9;
  long *plVar10;
  long lVar11;
  code *pcVar12;
  int local_34;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  float local_28;
  float local_24;
  undefined4 local_20;
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_34 = param_1;
  pFVar5 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ZombieRainSpawnerProps::GetZombieName();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string((string *)&local_28);
  local_18[0] = *(int *)(pFVar5 + 0x44) - *(int *)(this + 0x38);
  piVar7 = eastl::min_alt<int>(&local_34,local_18);
  iVar1 = *piVar7;
  local_34 = iVar1;
  if (0 < iVar1) {
    lVar11 = 0;
    do {
      plVar10 = *(long **)(gLawnApp + 0x9f0);
      pcVar12 = *(code **)(*plVar10 + 0x318);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)aRStack_30);
      pSVar8 = (SexyVector3 *)
               (*pcVar12)(plVar10,(RtWeakPtr<Sexy::ResourceInfo> *)local_18,param_2,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      Zombie::SetHasPlantFood(SUB81(pSVar8,0));
      puVar9 = (undefined4 *)FUN_04937108(*(undefined8 *)(this + 0x18),lVar11);
      Zombie::SetLoot((Zombie *)pSVar8,*puVar9);
      iVar2 = Sexy::MTRand::Next(param_3,*(int *)(pFVar5 + 0x58) - *(int *)(pFVar5 + 0x54));
      iVar4 = *(int *)(pFVar5 + 0x54);
      iVar3 = calculateNextRowToSpawnIn(this);
      iVar4 = BoardTransforms::GridToBoardSpaceX(iVar4 + iVar2);
      iVar2 = BoardTransforms::GridToBoardSpaceY(iVar3);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_28,(float)iVar4 - 10.0,(float)iVar2 - 10.0,0.0);
      EATextSquish::Vec3::Vec3((Vec3 *)local_18,local_28,local_24,600.0);
      BoardEntity::PlaceOnBoard(pSVar8);
      if (*(code **)(*(long *)this + 0xb8) != PostSpawnZombieSetup) {
        (**(code **)(*(long *)this + 0xb8))
                  (local_28,local_24,local_20,*(undefined4 *)(pFVar5 + 0x50),0x44160000,this,pSVar8)
        ;
      }
      lVar11 = lVar11 + 1;
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
/* ZombieRainSpawner::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void __thiscall
ZombieRainSpawner::WaveStart
          (ZombieRainSpawner *this,int param_1,undefined8 param_3,char param_4,MTRand *param_5)

{
  FairyTaleWindWaveActionProps *pFVar1;
  Board *pBVar2;
  float fVar3;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
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


/* ZombieRainSpawner::WaveUpdate(int, Sexy::MTRand&) */

void __thiscall ZombieRainSpawner::WaveUpdate(ZombieRainSpawner *this,int param_1,MTRand *param_2)

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


/* ZombieRainSpawner::WaveEnd(int, Sexy::MTRand&) */

void __thiscall ZombieRainSpawner::WaveEnd(ZombieRainSpawner *this,int param_1,MTRand *param_2)

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
/* ZombieRainSpawner::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall ZombieRainSpawner::AddResourceRequirements(ZombieRainSpawner *this,set *param_1)

{
  string *psVar1;
  ResourceInfo *this_00;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ZombieRainSpawnerProps::GetZombieName();
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
/* ZombieRainSpawner::GetZombies(std::vector<ZombieType const*, std::allocator<ZombieType const*>
   >&) */

void __thiscall ZombieRainSpawner::GetZombies(ZombieRainSpawner *this,vector *param_1)

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
  ZombieRainSpawnerProps::GetZombieName();
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

