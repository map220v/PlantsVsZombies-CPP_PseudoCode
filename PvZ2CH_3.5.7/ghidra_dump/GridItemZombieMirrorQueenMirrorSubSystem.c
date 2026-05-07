// Class: GridItemZombieMirrorQueenMirrorSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirrorSubSystem::StaticClassInit() */

void GridItemZombieMirrorQueenMirrorSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombieMirrorQueenMirrorUnit");
    (*pcVar3)(plVar2,asStack_10,FUN_04f0cc74,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GridItemZombieMirrorQueenMirrorSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_04f076e8,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieMirrorQueenMirrorSubSystem::StaticGetClass() */

long * GridItemZombieMirrorQueenMirrorSubSystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombieMirrorQueenMirrorSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieMirrorQueenMirrorSubSystem::GetClass() const */

long * GridItemZombieMirrorQueenMirrorSubSystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombieMirrorQueenMirrorSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirrorSubSystem::warpOutZombie(GridItemZombieMirrorQueenMirrorUnit&) */

void __thiscall
GridItemZombieMirrorQueenMirrorSubSystem::warpOutZombie
          (GridItemZombieMirrorQueenMirrorSubSystem *this,
          GridItemZombieMirrorQueenMirrorUnit *param_1)

{
  char cVar1;
  Zombie *pZVar2;
  
  *(undefined4 *)(param_1 + 0x30) = 1;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x30) = 4;
    return;
  }
  pZVar2 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  Zombie::StartWarpOut(pZVar2,_FUN_04f090c4);
  pZVar2 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  Zombie::SetIsControlled(pZVar2,true);
  pZVar2 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  Zombie::SetIgnoresAllDamage(pZVar2,true);
  return;
}


/* GridItemZombieMirrorQueenMirrorSubSystem::disappearZombie(GridItemZombieMirrorQueenMirrorUnit&)
    */

void __thiscall
GridItemZombieMirrorQueenMirrorSubSystem::disappearZombie
          (GridItemZombieMirrorQueenMirrorSubSystem *this,
          GridItemZombieMirrorQueenMirrorUnit *param_1)

{
  char cVar1;
  long *plVar2;
  Zombie *this_00;
  
  *(undefined4 *)(param_1 + 0x30) = 2;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x30) = 4;
    return;
  }
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  (**(code **)(*plVar2 + 0x80))(plVar2,1);
  this_00 = (Zombie *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  Zombie::SetIgnoresAllDamage(this_00,true);
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  (**(code **)(*plVar2 + 0x78))(plVar2,param_1 + 0x14);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirrorSubSystem::warpInZombie(GridItemZombieMirrorQueenMirrorUnit&) */

void __thiscall
GridItemZombieMirrorQueenMirrorSubSystem::warpInZombie
          (GridItemZombieMirrorQueenMirrorSubSystem *this,
          GridItemZombieMirrorQueenMirrorUnit *param_1)

{
  char cVar1;
  Zombie *pZVar2;
  long *plVar3;
  
  *(undefined4 *)(param_1 + 0x30) = 3;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x30) = 4;
    return;
  }
  pZVar2 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  Zombie::StartWarpIn(pZVar2,_FUN_04f091d0);
  pZVar2 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  Zombie::SetIgnoresAllDamage(pZVar2,true);
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  (**(code **)(*plVar3 + 0x80))(plVar3,0);
  return;
}


/* GridItemZombieMirrorQueenMirrorSubSystem::recoverZombie(GridItemZombieMirrorQueenMirrorUnit&) */

void __thiscall
GridItemZombieMirrorQueenMirrorSubSystem::recoverZombie
          (GridItemZombieMirrorQueenMirrorSubSystem *this,
          GridItemZombieMirrorQueenMirrorUnit *param_1)

{
  char cVar1;
  long *plVar2;
  Zombie *pZVar3;
  
  *(undefined4 *)(param_1 + 0x30) = 4;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1);
  if (cVar1 == '\0') {
    return;
  }
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  (**(code **)(*plVar2 + 0x80))(plVar2,0);
  pZVar3 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  Zombie::SetIsControlled(pZVar3,false);
  pZVar3 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  Zombie::SetIgnoresAllDamage(pZVar3,false);
  return;
}


/* GridItemZombieMirrorQueenMirrorSubSystem::findTeleportingGameObject(Zombie*) */

undefined8 __thiscall
GridItemZombieMirrorQueenMirrorSubSystem::findTeleportingGameObject
          (GridItemZombieMirrorQueenMirrorSubSystem *this,Zombie *param_1)

{
  RtWeakPtr *this_00;
  ResourceInfo *pRVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = 0;
  do {
    uVar3 = uVar2;
    uVar4 = *(undefined8 *)(this + 0x10);
    uVar2 = FUN_04f05d6c(uVar4,*(undefined8 *)(this + 0x18));
    if (uVar2 <= uVar3) {
      return 0;
    }
    this_00 = (RtWeakPtr *)FUN_04f05d8c(uVar4,uVar3);
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    uVar2 = uVar3 + 1;
  } while (param_1 != (Zombie *)pRVar1);
  uVar4 = FUN_04f05d8c(*(undefined8 *)(this + 0x10),uVar3);
  return uVar4;
}


/* GridItemZombieMirrorQueenMirrorSubSystem::GridItemZombieMirrorQueenMirrorSubSystem() */

void __thiscall
GridItemZombieMirrorQueenMirrorSubSystem::GridItemZombieMirrorQueenMirrorSubSystem
          (GridItemZombieMirrorQueenMirrorSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06a0e530;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* GridItemZombieMirrorQueenMirrorSubSystem::StaticNew() */

GridItemZombieMirrorQueenMirrorSubSystem * GridItemZombieMirrorQueenMirrorSubSystem::StaticNew(void)

{
  GridItemZombieMirrorQueenMirrorSubSystem *this;
  
  this = ::operator_new(0x58);
  GridItemZombieMirrorQueenMirrorSubSystem(this);
  return this;
}


/* GridItemZombieMirrorQueenMirrorSubSystem::~GridItemZombieMirrorQueenMirrorSubSystem() */

void __thiscall
GridItemZombieMirrorQueenMirrorSubSystem::~GridItemZombieMirrorQueenMirrorSubSystem
          (GridItemZombieMirrorQueenMirrorSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0e530;
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)(this + 0x40));
  std::
  vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>::
  ~vector((vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>
           *)(this + 0x28));
  std::
  vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>::
  ~vector((vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>
           *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* GridItemZombieMirrorQueenMirrorSubSystem::~GridItemZombieMirrorQueenMirrorSubSystem() */

void __thiscall
GridItemZombieMirrorQueenMirrorSubSystem::~GridItemZombieMirrorQueenMirrorSubSystem
          (GridItemZombieMirrorQueenMirrorSubSystem *this)

{
  ~GridItemZombieMirrorQueenMirrorSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirrorSubSystem::addZombie(Sexy::RtWeakPtr<Zombie>, Sexy::SexyVector3,
   Sexy::SexyVector3, std::function<void (Sexy::RtWeakPtr<Zombie>)>) */

void GridItemZombieMirrorQueenMirrorSubSystem::addZombie
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,
               GridItemZombieMirrorQueenMirrorSubSystem *param_7,RtWeakPtr *param_8,
               function *param_9)

{
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  GridItemZombieMirrorQueenMirrorUnit aGStack_60 [8];
  SexyVector3 aSStack_58 [12];
  SexyVector3 aSStack_4c [12];
  float local_40;
  float local_3c;
  float local_38;
  function<void(Sexy::RtWeakPtr<Zombie>)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_80 = param_4;
  local_7c = param_5;
  local_78 = param_6;
  local_70 = param_1;
  local_6c = param_2;
  local_68 = param_3;
  GridItemZombieMirrorQueenMirrorUnit::GridItemZombieMirrorQueenMirrorUnit(aGStack_60);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)aGStack_60,param_8);
  Sexy::SexyVector3::operator=(aSStack_58,(SexyVector3 *)&local_70);
  Sexy::SexyVector3::operator=(aSStack_4c,(SexyVector3 *)&local_80);
  local_40 = (float)PVZ_T();
  local_40 = local_40 + _FUN_04f0fa78;
  local_3c = local_40 + 0.5;
  local_38 = local_3c + _FUN_04f0fa78;
  std::function<void(Sexy::RtWeakPtr<Zombie>)>::operator=(afStack_28,param_9);
  warpOutZombie(param_7,aGStack_60);
  std::
  vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>::
  push_back((vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>
             *)(param_7 + 0x28),aGStack_60);
  GridItemZombieMirrorQueenMirrorUnit::~GridItemZombieMirrorQueenMirrorUnit(aGStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirrorSubSystem::addZombieWarpInOnly(Sexy::RtWeakPtr<Zombie>,
   Sexy::SexyVector3, std::function<void (Sexy::RtWeakPtr<Zombie>)>) */

void GridItemZombieMirrorQueenMirrorSubSystem::addZombieWarpInOnly
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               RtWeakPtr *param_5,function *param_6)

{
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  GridItemZombieMirrorQueenMirrorUnit aGStack_60 [20];
  SexyVector3 aSStack_4c [12];
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  function<void(Sexy::RtWeakPtr<Zombie>)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_70 = param_1;
  local_6c = param_2;
  local_68 = param_3;
  GridItemZombieMirrorQueenMirrorUnit::GridItemZombieMirrorQueenMirrorUnit(aGStack_60);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)aGStack_60,param_5);
  Sexy::SexyVector3::operator=(aSStack_4c,(SexyVector3 *)&local_70);
  local_30 = 1;
  local_40 = (float)PVZ_T();
  local_34 = 1;
  local_3c = local_40 + 0.5;
  local_38 = local_3c + _FUN_04f0fb4c;
  std::function<void(Sexy::RtWeakPtr<Zombie>)>::operator=(afStack_28,param_6);
  std::
  vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>::
  push_back((vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>
             *)(param_4 + 0x28),aGStack_60);
  GridItemZombieMirrorQueenMirrorUnit::~GridItemZombieMirrorQueenMirrorUnit(aGStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirrorSubSystem::Update() */

void __thiscall
GridItemZombieMirrorQueenMirrorSubSystem::Update(GridItemZombieMirrorQueenMirrorSubSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  RtWeakPtr *this_02;
  ResourceInfo *pRVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  RtMixedPtrBase *this_03;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  undefined8 local_20;
  undefined8 local_18;
  ResourceInfo *local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  uVar12 = *(undefined8 *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  uVar13 = 0;
  lVar5 = FUN_04f05d60(uVar12,*(undefined8 *)(this + 0x48));
  if (lVar5 != 0) {
    do {
      uVar9 = 0;
      do {
        uVar11 = *(undefined8 *)(this + 0x10);
        iVar4 = (int)uVar9;
        uVar8 = FUN_04f05d6c(uVar11,*(undefined8 *)(this + 0x18));
        if (uVar8 <= uVar9) goto LAB_04f10d54;
        this_02 = (RtWeakPtr *)FUN_04f05d8c(uVar11,uVar9);
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_02);
        uVar12 = *(undefined8 *)(this + 0x40);
        puVar7 = (undefined8 *)FUN_04f05d9c(uVar12,uVar13);
        uVar9 = uVar9 + 1;
      } while (pRVar6 != (ResourceInfo *)*puVar7);
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      local_18 = __gnu_cxx::
                 __normal_iterator<GridItemZombieMirrorQueenMirrorUnit*,std::vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>>
                 ::operator+((__normal_iterator<GridItemZombieMirrorQueenMirrorUnit*,std::vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>>
                              *)&local_20,(long)iVar4);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::
      vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>
      ::erase((vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>
               *)this_00,local_10);
      uVar12 = *(undefined8 *)(this + 0x40);
LAB_04f10d54:
      uVar13 = uVar13 + 1;
      uVar9 = FUN_04f05d60(uVar12,*(undefined8 *)(this + 0x48));
    } while (uVar13 < uVar9);
  }
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  std::vector<Zombie*,std::allocator<Zombie*>>::clear
            ((vector<Zombie*,std::allocator<Zombie*>> *)(this + 0x40));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  uVar12 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin(this_01);
  uVar11 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end(this_01);
  std::
  vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>::
  insert<__gnu_cxx::__normal_iterator<GridItemZombieMirrorQueenMirrorUnit*,std::vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>>,void>
            ((vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>
              *)this_00,local_10,uVar12,uVar11);
  std::
  vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>::
  clear((vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>
         *)this_01);
  uVar12 = *(undefined8 *)(this + 0x10);
  iVar4 = FUN_04f05d6c(uVar12,*(undefined8 *)(this + 0x18));
  uVar1 = iVar4 - 1;
  if ((int)uVar1 < 0) {
LAB_04f10ee8:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar5 = (long)(int)uVar1;
  lVar10 = lVar5 + -1;
  lVar14 = lVar10 - (ulong)uVar1;
  this_03 = (RtMixedPtrBase *)FUN_04f05d8c(uVar12,lVar5);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this_03);
  if (cVar2 == '\0') goto LAB_04f10ea8;
  do {
    lVar5 = lVar10;
    switch(*(undefined4 *)(this_03 + 0x30)) {
    case 1:
      fVar15 = (float)PVZ_T();
      if (*(float *)(this_03 + 0x20) < fVar15) {
        disappearZombie(this,(GridItemZombieMirrorQueenMirrorUnit *)this_03);
      }
      break;
    case 2:
      fVar15 = (float)PVZ_T();
      if (*(float *)(this_03 + 0x24) < fVar15) {
        warpInZombie(this,(GridItemZombieMirrorQueenMirrorUnit *)this_03);
      }
      break;
    case 3:
      fVar15 = (float)PVZ_T();
      if (*(float *)(this_03 + 0x28) < fVar15) {
        recoverZombie(this,(GridItemZombieMirrorQueenMirrorUnit *)this_03);
      }
      break;
    case 4:
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_03);
      if (bVar3) {
        bVar3 = std::function::operator_cast_to_bool((function *)(this_03 + 0x38));
        if (bVar3) {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)this_03);
          std::function<void(Sexy::RtWeakPtr<Zombie>)>::operator()
                    ((function<void(Sexy::RtWeakPtr<Zombie>)> *)(this_03 + 0x38),
                     (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        }
        local_10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_03);
        std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                  ((vector<Zombie*,std::allocator<Zombie*>> *)(this + 0x40),(Zombie **)&local_10);
      }
    }
    while( true ) {
      if (lVar5 == lVar14) goto LAB_04f10ee8;
      lVar10 = lVar5 + -1;
      this_03 = (RtMixedPtrBase *)FUN_04f05d8c(*(undefined8 *)(this + 0x10),lVar5);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(this_03);
      if (cVar2 != '\0') break;
LAB_04f10ea8:
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      local_18 = __gnu_cxx::
                 __normal_iterator<GridItemZombieMirrorQueenMirrorUnit*,std::vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>>
                 ::operator+((__normal_iterator<GridItemZombieMirrorQueenMirrorUnit*,std::vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>>
                              *)&local_20,lVar5);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::
      vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>
      ::erase((vector<GridItemZombieMirrorQueenMirrorUnit,std::allocator<GridItemZombieMirrorQueenMirrorUnit>>
               *)this_00,local_10);
      lVar5 = lVar10;
    }
  } while( true );
}

