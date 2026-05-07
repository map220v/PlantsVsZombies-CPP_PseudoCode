// Class: SpawnProjectilesSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnProjectilesSubSystem::StaticClassInit() */

void SpawnProjectilesSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnProjectilesSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_037c8e1c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnProjectilesSubSystem::StaticGetClass() */

long * SpawnProjectilesSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpawnProjectilesSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnProjectilesSubSystem::GetClass() const */

long * SpawnProjectilesSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"SpawnProjectilesSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnProjectilesSubSystem::SpawnProjectilesSubSystem() */

void __thiscall
SpawnProjectilesSubSystem::SpawnProjectilesSubSystem(SpawnProjectilesSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_066998b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* SpawnProjectilesSubSystem::StaticNew() */

SpawnProjectilesSubSystem * SpawnProjectilesSubSystem::StaticNew(void)

{
  SpawnProjectilesSubSystem *this;
  
  this = ::operator_new(0x40);
  SpawnProjectilesSubSystem(this);
  return this;
}


/* SpawnProjectilesSubSystem::~SpawnProjectilesSubSystem() */

void __thiscall
SpawnProjectilesSubSystem::~SpawnProjectilesSubSystem(SpawnProjectilesSubSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  *(undefined ***)this = &PTR_GetClass_066998b0;
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_01);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_01);
  FUN_037c3cd8(uVar1,uVar2);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  FUN_037c3d34(uVar1,uVar2);
  std::vector<ProjectilesGroup*,std::allocator<ProjectilesGroup*>>::clear
            ((vector<ProjectilesGroup*,std::allocator<ProjectilesGroup*>> *)this_01);
  std::vector<ProjectilesGroup*,std::allocator<ProjectilesGroup*>>::clear
            ((vector<ProjectilesGroup*,std::allocator<ProjectilesGroup*>> *)this_00);
  std::vector<ProjectilesGroup*,std::allocator<ProjectilesGroup*>>::~vector
            ((vector<ProjectilesGroup*,std::allocator<ProjectilesGroup*>> *)this_00);
  std::vector<ProjectilesGroup*,std::allocator<ProjectilesGroup*>>::~vector
            ((vector<ProjectilesGroup*,std::allocator<ProjectilesGroup*>> *)this_01);
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* SpawnProjectilesSubSystem::~SpawnProjectilesSubSystem() */

void __thiscall
SpawnProjectilesSubSystem::~SpawnProjectilesSubSystem(SpawnProjectilesSubSystem *this)

{
  ~SpawnProjectilesSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnProjectilesSubSystem::addProjectilesGroup(Sexy::RtWeakPtr<ProjectilePropertySheet>,
   Sexy::SexyVector3, int, float, RtReflectionDelegate<Sexy::Delegate2<Projectile*, int> >) */

void SpawnProjectilesSubSystem::addProjectilesGroup
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,RtWeakPtrBase *param_6,undefined4 param_7,RtReflectionDelegate *param_8)

{
  ProjectilesGroup *pPVar1;
  ProjectilesGroup *local_60;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = ::operator_new(0x78);
  ProjectilesGroup::ProjectilesGroup(pPVar1);
  local_60 = pPVar1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,param_6);
  PlantAccessoryMgr::SetCurrentPlantType((PlantAccessoryMgr *)pPVar1,aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  FUN_037c0e4c(local_60 + 0x28,param_7);
  ProjectilesGroup::setProjectileBasePos(param_1,param_2,param_3,local_60);
  FUN_037c0e44(param_4,local_60 + 0x1c);
  pPVar1 = local_60;
  RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>>::RtReflectionDelegate(aRStack_50,param_8);
  ProjectilesGroup::setProjectileSpawnedDelegate(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  ProjectilesGroup::start(local_60);
  std::vector<ProjectilesGroup*,std::allocator<ProjectilesGroup*>>::push_back
            ((vector<ProjectilesGroup*,std::allocator<ProjectilesGroup*>> *)(param_5 + 0x28),
             &local_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnProjectilesSubSystem::Update() */

void __thiscall SpawnProjectilesSubSystem::Update(SpawnProjectilesSubSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ProjectilesGroup *this_02;
  long lVar10;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_01);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_01);
  std::vector<ProjectilesGroup*,std::allocator<ProjectilesGroup*>>::
  insert<__gnu_cxx::__normal_iterator<ProjectilesGroup**,std::vector<ProjectilesGroup*,std::allocator<ProjectilesGroup*>>>,void>
            ((vector<ProjectilesGroup*,std::allocator<ProjectilesGroup*>> *)this_00,local_10,uVar5,
             uVar6);
  std::vector<ProjectilesGroup*,std::allocator<ProjectilesGroup*>>::clear
            ((vector<ProjectilesGroup*,std::allocator<ProjectilesGroup*>> *)this_01);
  uVar5 = *(undefined8 *)(this + 0x10);
  iVar4 = FUN_037c0ee4(uVar5,*(undefined8 *)(this + 0x18));
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar8 = (long)(int)uVar1 + -1;
    lVar2 = lVar8;
    lVar10 = (long)(int)uVar1;
    while( true ) {
      lVar9 = lVar2;
      puVar7 = (undefined8 *)FUN_037c0f0c(uVar5,lVar10);
      this_02 = (ProjectilesGroup *)*puVar7;
      if (this_02 != (ProjectilesGroup *)0x0) {
        ProjectilesGroup::update(this_02);
        cVar3 = FUN_037c0e54(this_02[0x21]);
        if (cVar3 != '\0') {
          local_20 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(this_00);
          local_18 = __gnu_cxx::
                     __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                     ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                  *)&local_20,lVar10);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_18);
          std::vector<ProjectilesGroup*,std::allocator<ProjectilesGroup*>>::erase
                    ((vector<ProjectilesGroup*,std::allocator<ProjectilesGroup*>> *)this_00,local_10
                    );
          (**(code **)(*(long *)this_02 + 0x18))(this_02);
        }
      }
      if (lVar9 == lVar8 - (ulong)uVar1) break;
      uVar5 = *(undefined8 *)(this + 0x10);
      lVar2 = lVar9 + -1;
      lVar10 = lVar9;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnProjectilesSubSystem::Serialize(Sexy::RtSerializeContext const&) */

void __thiscall
SpawnProjectilesSubSystem::Serialize(SpawnProjectilesSubSystem *this,RtSerializeContext *param_1)

{
  char cVar1;
  RtSerialRtonSync *pRVar2;
  RtSerialRtonKey aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameObject::Serialize((GameObject *)this,param_1);
  pRVar2 = (RtSerialRtonSync *)FUN_037c0d60(*(undefined8 *)(param_1 + 8));
  Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,"spawnprojectiles");
  cVar1 = Sexy::RtSerialRtonSync::SyncBeginObject(pRVar2,aRStack_10);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
  if (cVar1 != '\0') {
    std::string::string((string *)aRStack_10,"m_groups");
    SerializeArrayDataPoint<ProjectilesGroup>((string *)aRStack_10,(vector *)(this + 0x10),param_1);
    std::string::~string((string *)aRStack_10);
    nop();
    std::string::string((string *)aRStack_10,"m_newGroups");
    SerializeArrayDataPoint<ProjectilesGroup>((string *)aRStack_10,(vector *)(this + 0x28),param_1);
    std::string::~string((string *)aRStack_10);
    nop();
    pRVar2 = (RtSerialRtonSync *)FUN_037c0d60(*(undefined8 *)(param_1 + 8));
    Sexy::RtSerialRtonSync::SyncEndObject(pRVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

