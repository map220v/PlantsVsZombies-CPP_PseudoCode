// Class: BananaLauncherSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BananaLauncherSubSystem::StaticClassInit() */

void BananaLauncherSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"BananaLauncherEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_041f0e60,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"BananaLauncherSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_041f1148,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BananaLauncherSubSystem::StaticGetClass() */

long * BananaLauncherSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BananaLauncherSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BananaLauncherSubSystem::GetClass() const */

long * BananaLauncherSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"BananaLauncherSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BananaLauncherSubSystem::launch(BananaLauncherSubSystem::BananaLauncherEntry const&) */

void BananaLauncherSubSystem::launch(BananaLauncherEntry *param_1)

{
  char cVar1;
  ResourceInfo *this;
  ResourceInfo *pRVar2;
  long lVar3;
  ulong uVar4;
  RtWeakPtr *in_x1;
  int in_w2;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
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
  this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(in_x1);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(in_x1 + 8);
  uVar5 = *(undefined8 *)(pRVar2 + 0x70);
  lVar3 = FUN_041ed53c(uVar5,0);
  if ((in_x1[0x14] != (RtWeakPtr)0x0) &&
     (uVar4 = FUN_041ed54c(uVar5,*(undefined8 *)(pRVar2 + 0x78)), 2 < uVar4)) {
    lVar3 = FUN_041ed53c(uVar5,2);
  }
  if ((in_x1[0x20] != (RtWeakPtr)0x0) &&
     (uVar4 = FUN_041ed54c(uVar5,*(undefined8 *)(pRVar2 + 0x78)), 1 < uVar4)) {
    lVar3 = FUN_041ed53c(uVar5,1);
  }
  if ((this == (ResourceInfo *)0x0) ||
     (cVar1 = FUN_0547419c((string *)(lVar3 + 0x50)), cVar1 != '\0')) {
    Sexy::Point::Point((Point *)&local_30,(TPoint *)(in_x1 + 0x18));
  }
  else {
    RealObject::PlayPositionalSound((RealObject *)this,(string *)(lVar3 + 0x50),0.0);
    Sexy::Point::Point((Point *)&local_30,(TPoint *)(in_x1 + 0x18));
  }
  if ((local_30 == 0xffffffff) || (local_2c == -1)) {
    local_30 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
    local_2c = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  }
  fVar7 = *(float *)(pRVar2 + 0x2c4);
  fVar6 = *(float *)(pRVar2 + 0x2c8);
  BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)local_30,local_2c,in_w2);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,*(float *)(lVar3 + 0x68),0.0,-*(float *)(lVar3 + 0x6c))
  ;
  uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(lVar3 + 8));
  lVar3 = Board::AddProjectile
                    ((Board *)((float)local_28 + local_18 + fVar7),
                     (float)local_24 + local_14 + fVar6,local_10,uVar5,aRStack_20,this,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  FUN_041ed5d4(lVar3 + 0x24);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* BananaLauncherSubSystem::BananaLauncherSubSystem() */

void __thiscall BananaLauncherSubSystem::BananaLauncherSubSystem(BananaLauncherSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06805b50;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* BananaLauncherSubSystem::StaticNew() */

BananaLauncherSubSystem * BananaLauncherSubSystem::StaticNew(void)

{
  BananaLauncherSubSystem *this;
  
  this = ::operator_new(0x28);
  BananaLauncherSubSystem(this);
  return this;
}


/* BananaLauncherSubSystem::GetLauncherEntry(int) */

undefined8 __thiscall
BananaLauncherSubSystem::GetLauncherEntry(BananaLauncherSubSystem *this,int param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  cVar1 = std::
          vector<BananaLauncherSubSystem::BananaLauncherEntry,std::allocator<BananaLauncherSubSystem::BananaLauncherEntry>>
          ::empty((vector<BananaLauncherSubSystem::BananaLauncherEntry,std::allocator<BananaLauncherSubSystem::BananaLauncherEntry>>
                   *)(this + 0x10));
  if (cVar1 == '\0') {
    if (param_1 == -1) {
      uVar3 = std::
              vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
              ::back((vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
                      *)(this + 0x10));
      return uVar3;
    }
    if (-1 < param_1) {
      uVar3 = *(undefined8 *)(this + 0x10);
      uVar2 = FUN_041ed500(uVar3,*(undefined8 *)(this + 0x18));
      if ((ulong)(long)param_1 < uVar2) {
        uVar3 = FUN_041ed530(uVar3,(long)param_1);
        return uVar3;
      }
    }
  }
  return 0;
}


/* BananaLauncherSubSystem::~BananaLauncherSubSystem() */

void __thiscall BananaLauncherSubSystem::~BananaLauncherSubSystem(BananaLauncherSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06805b50;
  std::
  vector<BananaLauncherSubSystem::BananaLauncherEntry,std::allocator<BananaLauncherSubSystem::BananaLauncherEntry>>
  ::~vector((vector<BananaLauncherSubSystem::BananaLauncherEntry,std::allocator<BananaLauncherSubSystem::BananaLauncherEntry>>
             *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* BananaLauncherSubSystem::~BananaLauncherSubSystem() */

void __thiscall BananaLauncherSubSystem::~BananaLauncherSubSystem(BananaLauncherSubSystem *this)

{
  ~BananaLauncherSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BananaLauncherSubSystem::Update() */

void __thiscall BananaLauncherSubSystem::Update(BananaLauncherSubSystem *this)

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
  iVar2 = FUN_041ed500(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    lVar4 = (long)(int)uVar1 + -1;
    lVar3 = lVar4;
    lVar6 = (long)(int)uVar1;
    while( true ) {
      lVar5 = lVar3;
      fVar7 = (float)PVZ_T();
      lVar3 = FUN_041ed530(*(undefined8 *)(this + 0x10),lVar6);
      if (*(float *)(lVar3 + 0x10) <= fVar7) {
        launch((BananaLauncherEntry *)this);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x10));
        local_18 = __gnu_cxx::
                   __normal_iterator<MeteorLauncherEntry*,std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>>
                   ::operator+((__normal_iterator<MeteorLauncherEntry*,std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>>
                                *)&local_20,lVar6);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::
        vector<BananaLauncherSubSystem::BananaLauncherEntry,std::allocator<BananaLauncherSubSystem::BananaLauncherEntry>>
        ::erase((vector<BananaLauncherSubSystem::BananaLauncherEntry,std::allocator<BananaLauncherSubSystem::BananaLauncherEntry>>
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
/* BananaLauncherSubSystem::QueueShot(PlantBanana*, float, Sexy::Point const&, bool) */

void __thiscall
BananaLauncherSubSystem::QueueShot
          (BananaLauncherSubSystem *this,PlantBanana *param_1,float param_2,Point *param_3,
          bool param_4)

{
  BananaLauncherEntry aBStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BananaLauncherEntry::BananaLauncherEntry(aBStack_30,param_1,param_2,param_3,param_4);
  std::
  vector<BananaLauncherSubSystem::BananaLauncherEntry,std::allocator<BananaLauncherSubSystem::BananaLauncherEntry>>
  ::push_back((vector<BananaLauncherSubSystem::BananaLauncherEntry,std::allocator<BananaLauncherSubSystem::BananaLauncherEntry>>
               *)(this + 0x10),aBStack_30);
  DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
            ((DragonBruitLauncherEntry *)aBStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

