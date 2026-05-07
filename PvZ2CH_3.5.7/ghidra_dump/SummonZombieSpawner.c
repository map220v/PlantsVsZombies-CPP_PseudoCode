// Class: SummonZombieSpawner


/* SummonZombieSpawner::SetLoot(std::vector<Loot, std::allocator<Loot> > const&) */

void __thiscall SummonZombieSpawner::SetLoot(SummonZombieSpawner *this,vector *param_1)

{
  std::vector<Loot,std::allocator<Loot>>::operator=
            ((vector<Loot,std::allocator<Loot>> *)(this + 0x18),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummonZombieSpawner::StaticClassInit() */

void SummonZombieSpawner::StaticClassInit(void)

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
    std::string::string(asStack_10,"SummonZombieSpawner");
    (*pcVar2)(plVar1,asStack_10,FUN_0494546c,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SummonZombieSpawner::StaticGetClass() */

long * SummonZombieSpawner::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SummonZombieSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SummonZombieSpawner::WaveUpdate(int, Sexy::MTRand&) */

void SummonZombieSpawner::WaveUpdate(int param_1,MTRand *param_2)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
            ((RtWeakPtr<Sexy::ResourceInfo> *)((ulong)(uint)param_1 + 0x10));
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummonZombieSpawner::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall SummonZombieSpawner::AddResourceRequirements(SummonZombieSpawner *this,set *param_1)

{
  bool bVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ZombieType *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  local_18 = FUN_04944d24(*(undefined8 *)(pFVar2 + 0x40));
  local_10 = FUN_04944d74(*(undefined8 *)(pFVar2 + 0x48));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_01 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    ZombieType::AddInGameResourceRequirements(this_01,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SummonZombieSpawner::SummonZombieSpawner() */

void __thiscall SummonZombieSpawner::SummonZombieSpawner(SummonZombieSpawner *this)

{
  ZombieSpawnerAction::ZombieSpawnerAction((ZombieSpawnerAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06912c60;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* SummonZombieSpawner::StaticNew() */

SummonZombieSpawner * SummonZombieSpawner::StaticNew(void)

{
  SummonZombieSpawner *this;
  
  this = ::operator_new(0x58);
  SummonZombieSpawner(this);
  return this;
}


/* SummonZombieSpawner::~SummonZombieSpawner() */

void __thiscall SummonZombieSpawner::~SummonZombieSpawner(SummonZombieSpawner *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06912c60;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x30));
  std::vector<Loot,std::allocator<Loot>>::~vector
            ((vector<Loot,std::allocator<Loot>> *)(this + 0x18));
  ZombieSpawnerAction::~ZombieSpawnerAction((ZombieSpawnerAction *)this);
  return;
}


/* SummonZombieSpawner::~SummonZombieSpawner() */

void __thiscall SummonZombieSpawner::~SummonZombieSpawner(SummonZombieSpawner *this)

{
  ~SummonZombieSpawner(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummonZombieSpawner::createZombies(int, Sexy::MTRand&, int, int) */

void SummonZombieSpawner::createZombies(int param_1,MTRand *param_2,int param_3,int param_4)

{
  FairyTaleWindWaveActionProps *pFVar1;
  RtWeakPtrBase *pRVar2;
  SexyVector3 *this;
  Point *pPVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  code *pcVar7;
  int local_48;
  int local_44;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [16];
  undefined4 local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)(ulong)(uint)param_1);
  uVar5 = 0;
  while( true ) {
    uVar4 = FUN_0494444c(*(undefined8 *)(pFVar1 + 0x40),*(undefined8 *)(pFVar1 + 0x48));
    if (uVar4 <= uVar5) break;
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
    local_30[0] = *(undefined4 *)(pFVar1 + 0x6c);
    plVar6 = *(long **)(gLawnApp + 0x9f0);
    pcVar7 = *(code **)(*plVar6 + 0x318);
    pRVar2 = (RtWeakPtrBase *)FUN_04944458(*(undefined8 *)(pFVar1 + 0x40),uVar5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,pRVar2);
    this = (SexyVector3 *)
           (*pcVar7)(plVar6,aRStack_40,(ulong)param_2 & 0xffffffff,(SpawnZombieParams *)local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    pPVar3 = (Point *)FUN_04944444(*(undefined8 *)((WaveAction *)(ulong)(uint)param_1 + 0x30),uVar5)
    ;
    BoardTransforms::GridToBoardSpace(pPVar3);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_40,(float)local_48,(float)local_44,0.0);
    BoardEntity::PlaceOnBoard(this);
    Zombie::RiseFromGround((Zombie *)this,(SexyVector3 *)aRStack_40,true);
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
    uVar5 = uVar5 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SummonZombieSpawner::spawnGroup(int, Sexy::MTRand&) */

void __thiscall
SummonZombieSpawner::spawnGroup(SummonZombieSpawner *this,int param_1,MTRand *param_2)

{
  WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  createZombies((int)this,(MTRand *)(ulong)(uint)param_1,(int)param_2,0);
  return;
}


/* SummonZombieSpawner::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void __thiscall
SummonZombieSpawner::WaveStart
          (SummonZombieSpawner *this,int param_1,undefined8 param_3,undefined8 param_4,
          MTRand *param_5)

{
  WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  spawnGroup(this,param_1,param_5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummonZombieSpawner::initializeAction(Sexy::MTRand&, int) */

void SummonZombieSpawner::initializeAction(MTRand *param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  FairyTaleWindWaveActionProps *pFVar5;
  RtWeakPtrBase *pRVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  int local_40 [2];
  undefined8 local_38;
  undefined8 local_30;
  int local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar5 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  local_20 = *(int *)(pFVar5 + 0x60);
  if (local_20 <= *(int *)(pFVar5 + 100)) {
    do {
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)&local_38,&local_20);
      local_20 = local_20 + 1;
    } while (local_20 <= *(int *)(pFVar5 + 100));
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_40[0] = *(int *)(pFVar5 + 0x58);
  if (local_40[0] <= *(int *)(pFVar5 + 0x5c)) {
    do {
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)&local_20,local_40);
      local_40[0] = local_40[0] + 1;
    } while (local_40[0] <= *(int *)(pFVar5 + 0x5c));
  }
  local_50 = FUN_04944d24(*(undefined8 *)(pFVar5 + 0x40));
  local_48 = FUN_04944d74(*(undefined8 *)(pFVar5 + 0x48));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar3) {
    iVar11 = -1;
    pRVar6 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_58,pRVar6);
    cVar4 = std::vector<int,std::allocator<int>>::empty
                      ((vector<int,std::allocator<int>> *)&local_38);
    if (cVar4 == '\0') {
      uVar7 = Sexy::MTRand::Next((MTRand *)(ulong)(uint)param_2);
      uVar2 = local_38;
      uVar8 = FUN_049443e0(local_38,local_30);
      uVar1 = 0;
      if (uVar8 != 0) {
        uVar1 = uVar7 / uVar8;
      }
      piVar9 = (int *)FUN_0494442c(uVar2,uVar7 - uVar1 * uVar8);
      iVar11 = *piVar9;
      cVar4 = std::vector<int,std::allocator<int>>::empty
                        ((vector<int,std::allocator<int>> *)&local_20);
    }
    else {
      cVar4 = std::vector<int,std::allocator<int>>::empty
                        ((vector<int,std::allocator<int>> *)&local_20);
    }
    iVar10 = -1;
    if (cVar4 == '\0') {
      uVar7 = Sexy::MTRand::Next((MTRand *)(ulong)(uint)param_2);
      uVar2 = CONCAT44(uStack_1c,local_20);
      uVar8 = FUN_049443e0(uVar2,local_18);
      uVar1 = 0;
      if (uVar8 != 0) {
        uVar1 = uVar7 / uVar8;
      }
      piVar9 = (int *)FUN_0494442c(uVar2,uVar7 - uVar1 * uVar8);
      iVar10 = *piVar9;
    }
    Sexy::Point::Point((Point *)local_40,iVar10,iVar11);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(param_1 + 0x30),(Point *)local_40
              );
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummonZombieSpawner::GetZombies(std::vector<ZombieType const*, std::allocator<ZombieType const*>
   >&) */

void __thiscall SummonZombieSpawner::GetZombies(SummonZombieSpawner *this,vector *param_1)

{
  bool bVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  RtWeakPtr *this_00;
  undefined8 local_20;
  undefined8 local_18;
  ResourceInfo *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  local_20 = FUN_04944d24(*(undefined8 *)(pFVar2 + 0x40));
  local_18 = FUN_04944d74(*(undefined8 *)(pFVar2 + 0x48));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    local_10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::push_back
              ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)param_1,
               (ZombieType **)&local_10);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

