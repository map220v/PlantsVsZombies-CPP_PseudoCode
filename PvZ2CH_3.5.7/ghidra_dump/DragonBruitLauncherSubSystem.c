// Class: DragonBruitLauncherSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonBruitLauncherSubSystem::StaticClassInit() */

void DragonBruitLauncherSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"DragonBruitLauncherEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_04d7a42c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DragonBruitLauncherSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_04d7a714,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DragonBruitLauncherSubSystem::StaticGetClass() */

long * DragonBruitLauncherSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DragonBruitLauncherSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonBruitLauncherSubSystem::GetClass() const */

long * DragonBruitLauncherSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"DragonBruitLauncherSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonBruitLauncherSubSystem::launch(DragonBruitLauncherSubSystem::DragonBruitLauncherEntry
   const&) */

void DragonBruitLauncherSubSystem::launch(DragonBruitLauncherEntry *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  DragonBruitOnDeathProjectile *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> *in_x1;
  int in_w2;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  float local_28;
  float local_24;
  float local_20;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(in_x1);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(in_x1 + 8);
  if ((lVar2 != 0) && (lVar3 != 0)) {
    lVar4 = FUN_04d76c64(*(undefined8 *)(lVar3 + 0x70),2);
    Sexy::Point::Point((Point *)&local_48,(TPoint *)(in_x1 + 0x14));
    fVar8 = *(float *)(lVar3 + 0x328);
    fVar7 = *(float *)(lVar3 + 0x32c);
    BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)local_48,local_44,in_w2);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)&local_28,*(float *)(lVar4 + 0x68),0.0,-*(float *)(lVar4 + 0x6c));
    EATextSquish::Vec3::Vec3
              (aVStack_18,(float)local_40 + local_28 + fVar8,(float)local_3c + local_24 + fVar7,
               local_20);
    *(undefined4 *)(lVar2 + 0x150) = 2;
    Plant::GetProps();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    lVar5 = FUN_04d76c64(*(undefined8 *)(lVar5 + 0x70),(long)*(int *)(lVar2 + 0x150));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)(lVar5 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)(lVar4 + 8));
    lVar3 = Board::AddProjectile
                      ((Board *)((float)local_40 + local_28 + fVar8),
                       (float)local_3c + local_24 + fVar7,local_20,uVar6,aRStack_30,lVar2,lVar3 == 0
                      );
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    if ((lVar3 != 0) && (nop(), extraout_x0 != (DragonBruitOnDeathProjectile *)0x0)) {
      uVar1 = FUN_04d76bd0(*(undefined4 *)(lVar2 + 0x50));
      Sexy::Point::Point((Point *)aRStack_30,(TPoint *)&local_48);
      DragonBruitOnDeathProjectile::InitializeValues
                (extraout_x0,aRStack_30,uVar1,param_1[0x28],*(undefined4 *)(param_1 + 0x2c));
      FUN_04d76dc0(extraout_x0 + 0x24);
      if (*(int *)(lVar4 + 0x2c) != 0) {
        FUN_04d76c10((float)*(int *)(lVar4 + 0x2c),extraout_x0 + 0x1b4);
      }
      if ((int)*(float *)(lVar4 + 0x48) != 0) {
        FUN_04d76bb8((float)(int)*(float *)(lVar4 + 0x48),extraout_x0 + 0x178);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DragonBruitLauncherSubSystem::DragonBruitLauncherSubSystem() */

void __thiscall
DragonBruitLauncherSubSystem::DragonBruitLauncherSubSystem(DragonBruitLauncherSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_069b79a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  this[0x28] = (DragonBruitLauncherSubSystem)0x0;
  return;
}


/* DragonBruitLauncherSubSystem::StaticNew() */

DragonBruitLauncherSubSystem * DragonBruitLauncherSubSystem::StaticNew(void)

{
  DragonBruitLauncherSubSystem *this;
  
  this = ::operator_new(0x30);
  DragonBruitLauncherSubSystem(this);
  return this;
}


/* DragonBruitLauncherSubSystem::~DragonBruitLauncherSubSystem() */

void __thiscall
DragonBruitLauncherSubSystem::~DragonBruitLauncherSubSystem(DragonBruitLauncherSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_069b79a0;
  std::
  vector<DragonBruitLauncherSubSystem::DragonBruitLauncherEntry,std::allocator<DragonBruitLauncherSubSystem::DragonBruitLauncherEntry>>
  ::~vector((vector<DragonBruitLauncherSubSystem::DragonBruitLauncherEntry,std::allocator<DragonBruitLauncherSubSystem::DragonBruitLauncherEntry>>
             *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* DragonBruitLauncherSubSystem::~DragonBruitLauncherSubSystem() */

void __thiscall
DragonBruitLauncherSubSystem::~DragonBruitLauncherSubSystem(DragonBruitLauncherSubSystem *this)

{
  ~DragonBruitLauncherSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonBruitLauncherSubSystem::Update() */

void __thiscall DragonBruitLauncherSubSystem::Update(DragonBruitLauncherSubSystem *this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04d76c7c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    lVar4 = (long)(int)uVar1 + -1;
    lVar3 = lVar4;
    lVar6 = (long)(int)uVar1;
    while( true ) {
      lVar5 = lVar3;
      fVar7 = (float)PVZ_T();
      lVar3 = FUN_04d76ca4(*(undefined8 *)(this + 0x10),lVar6);
      if (*(float *)(lVar3 + 0x10) <= fVar7) {
        launch((DragonBruitLauncherEntry *)this);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x10));
        local_18 = __gnu_cxx::
                   __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                   ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                                *)&local_20,lVar6);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::
        vector<DragonBruitLauncherSubSystem::DragonBruitLauncherEntry,std::allocator<DragonBruitLauncherSubSystem::DragonBruitLauncherEntry>>
        ::erase((vector<DragonBruitLauncherSubSystem::DragonBruitLauncherEntry,std::allocator<DragonBruitLauncherSubSystem::DragonBruitLauncherEntry>>
                 *)(this + 0x10),local_10);
      }
      if (lVar5 == lVar4 - (ulong)uVar1) break;
      lVar3 = lVar5 + -1;
      lVar6 = lVar5;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonBruitLauncherSubSystem::QueueShot(PlantDragonBruit*, float, Sexy::Point const&, bool,
   DragonBruitState) */

void __thiscall
DragonBruitLauncherSubSystem::QueueShot
          (float param_2,DragonBruitLauncherSubSystem *this,PlantDragonBruit *param_1,Point *param_3
          ,DragonBruitLauncherSubSystem param_4,undefined4 param_6)

{
  long lVar1;
  DragonBruitLauncherEntry aDStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DragonBruitLauncherEntry::DragonBruitLauncherEntry(aDStack_28,param_1,param_2,param_3);
  std::
  vector<DragonBruitLauncherSubSystem::DragonBruitLauncherEntry,std::allocator<DragonBruitLauncherSubSystem::DragonBruitLauncherEntry>>
  ::push_back((vector<DragonBruitLauncherSubSystem::DragonBruitLauncherEntry,std::allocator<DragonBruitLauncherSubSystem::DragonBruitLauncherEntry>>
               *)(this + 0x10),aDStack_28);
  DragonBruitLauncherEntry::~DragonBruitLauncherEntry(aDStack_28);
  this[0x28] = param_4;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x2c) = param_6;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

