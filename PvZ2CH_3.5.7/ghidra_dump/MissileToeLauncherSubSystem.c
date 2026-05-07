// Class: MissileToeLauncherSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MissileToeLauncherSubSystem::StaticClassInit() */

void MissileToeLauncherSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"MissileToeLauncherEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_03bf763c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"MissileToeLauncherSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_03bf7994,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MissileToeLauncherSubSystem::StaticGetClass() */

long * MissileToeLauncherSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MissileToeLauncherSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MissileToeLauncherSubSystem::GetClass() const */

long * MissileToeLauncherSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"MissileToeLauncherSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MissileToeLauncherSubSystem::launch(MissileToeLauncherSubSystem::MissileToeLauncherEntry const&)
    */

void MissileToeLauncherSubSystem::launch(MissileToeLauncherEntry *param_1)

{
  char cVar1;
  Plant *this;
  long lVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> *in_x1;
  undefined8 uVar4;
  int in_w2;
  float fVar5;
  float fVar6;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(in_x1);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(in_x1 + 8);
  if ((this != (Plant *)0x0) && (lVar2 != 0)) {
    cVar1 = Plant::GetAvatarEnable(this);
    if ((cVar1 == '\0') || (in_x1[0x1c] == (RtWeakPtr<Sexy::ResourceInfo>)0x0)) {
      uVar4 = 0;
      if (in_x1[0x1d] != (RtWeakPtr<Sexy::ResourceInfo>)0x0) {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 1;
    }
    lVar3 = FUN_03bf2614(*(undefined8 *)(lVar2 + 0x70),uVar4);
    cVar1 = FUN_0547419c((string *)(lVar3 + 0x50));
    if (cVar1 == '\0') {
      RealObject::PlayPositionalSound((RealObject *)this,(string *)(lVar3 + 0x50),0.0);
    }
    Sexy::Point::Point((Point *)&local_30,(TPoint *)(in_x1 + 0x14));
    if ((local_30 == 0xffffffff) || (local_2c == -1)) {
      local_30 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
      local_2c = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
    }
    fVar6 = *(float *)(lVar2 + 0x2c4);
    fVar5 = *(float *)(lVar2 + 0x2c8);
    BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)local_30,local_2c,in_w2);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)&local_18,*(float *)(lVar3 + 0x68),0.0,-*(float *)(lVar3 + 0x6c));
    uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(lVar3 + 8));
    lVar2 = Board::AddProjectile
                      ((Board *)((float)local_28 + local_18 + fVar6),
                       (float)local_24 + local_14 + fVar5,local_10,uVar4,aRStack_20,this,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    FUN_03bf2554(lVar2 + 0x24,1);
    if (*(int *)(lVar3 + 0x2c) != 0) {
      FUN_03bf2568((float)*(int *)(lVar3 + 0x2c),lVar2 + 0xd8);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* MissileToeLauncherSubSystem::MissileToeLauncherSubSystem() */

void __thiscall
MissileToeLauncherSubSystem::MissileToeLauncherSubSystem(MissileToeLauncherSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067416b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* MissileToeLauncherSubSystem::StaticNew() */

MissileToeLauncherSubSystem * MissileToeLauncherSubSystem::StaticNew(void)

{
  MissileToeLauncherSubSystem *this;
  
  this = ::operator_new(0x28);
  MissileToeLauncherSubSystem(this);
  return this;
}


/* MissileToeLauncherSubSystem::~MissileToeLauncherSubSystem() */

void __thiscall
MissileToeLauncherSubSystem::~MissileToeLauncherSubSystem(MissileToeLauncherSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067416b0;
  std::
  vector<MissileToeLauncherSubSystem::MissileToeLauncherEntry,std::allocator<MissileToeLauncherSubSystem::MissileToeLauncherEntry>>
  ::~vector((vector<MissileToeLauncherSubSystem::MissileToeLauncherEntry,std::allocator<MissileToeLauncherSubSystem::MissileToeLauncherEntry>>
             *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* MissileToeLauncherSubSystem::~MissileToeLauncherSubSystem() */

void __thiscall
MissileToeLauncherSubSystem::~MissileToeLauncherSubSystem(MissileToeLauncherSubSystem *this)

{
  ~MissileToeLauncherSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MissileToeLauncherSubSystem::Update() */

void __thiscall MissileToeLauncherSubSystem::Update(MissileToeLauncherSubSystem *this)

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
  iVar2 = FUN_03bf263c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    lVar4 = (long)(int)uVar1 + -1;
    lVar3 = lVar4;
    lVar6 = (long)(int)uVar1;
    while( true ) {
      lVar5 = lVar3;
      fVar7 = (float)PVZ_T();
      lVar3 = FUN_03bf2664(*(undefined8 *)(this + 0x10),lVar6);
      if (*(float *)(lVar3 + 0x10) <= fVar7) {
        launch((MissileToeLauncherEntry *)this);
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
        vector<MissileToeLauncherSubSystem::MissileToeLauncherEntry,std::allocator<MissileToeLauncherSubSystem::MissileToeLauncherEntry>>
        ::erase((vector<MissileToeLauncherSubSystem::MissileToeLauncherEntry,std::allocator<MissileToeLauncherSubSystem::MissileToeLauncherEntry>>
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
/* MissileToeLauncherSubSystem::QueueShot(PlantMissileToe*, float, Sexy::Point const&, bool) */

void __thiscall
MissileToeLauncherSubSystem::QueueShot
          (MissileToeLauncherSubSystem *this,PlantMissileToe *param_1,float param_2,Point *param_3,
          bool param_4)

{
  MissileToeLauncherEntry aMStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MissileToeLauncherEntry::MissileToeLauncherEntry(aMStack_28,param_1,param_2,param_3,param_4);
  std::
  vector<MissileToeLauncherSubSystem::MissileToeLauncherEntry,std::allocator<MissileToeLauncherSubSystem::MissileToeLauncherEntry>>
  ::push_back((vector<MissileToeLauncherSubSystem::MissileToeLauncherEntry,std::allocator<MissileToeLauncherSubSystem::MissileToeLauncherEntry>>
               *)(this + 0x10),aMStack_28);
  DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
            ((DragonBruitLauncherEntry *)aMStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

