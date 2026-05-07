// Class: PlantLauncherSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLauncherSubSystem::StaticClassInit() */

void PlantLauncherSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantLauncherEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_0428d8ec,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantLauncherSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_0428dcb4,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLauncherSubSystem::StaticGetClass() */

long * PlantLauncherSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantLauncherSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantLauncherSubSystem::GetClass() const */

long * PlantLauncherSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantLauncherSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLauncherSubSystem::launch(PlantLauncherSubSystem::PlantLauncherEntry const&) */

void PlantLauncherSubSystem::launch(PlantLauncherEntry *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  RealObject *this;
  long lVar6;
  RtObject *this_00;
  HollyKnightLeaf *pHVar7;
  RtWeakPtr *in_x1;
  int in_w2;
  float fVar8;
  float fVar9;
  float fVar10;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  float local_58;
  float local_54;
  float local_50;
  Vec3 aVStack_48 [16];
  char acStack_38 [8];
  undefined8 local_30;
  undefined8 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x1 + 0x10));
  this = (RealObject *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x1 + 8));
  if ((this == (RealObject *)0x0) || (lVar5 == 0)) goto LAB_0428cc54;
  lVar6 = FUN_0428b3a8(*(undefined8 *)(lVar5 + 0x70),(long)*(int *)(in_x1 + 0x24));
  cVar1 = FUN_0547419c((string *)(lVar6 + 0x50));
  if (cVar1 == '\0') {
    RealObject::PlayPositionalSound(this,(string *)(lVar6 + 0x50),0.0);
    Sexy::Point::Point((Point *)&local_70,(TPoint *)(in_x1 + 0x1c));
    if (local_70 != 0xffffffff) goto LAB_0428caf8;
LAB_0428ccd4:
    local_70 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
    local_6c = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  }
  else {
    Sexy::Point::Point((Point *)&local_70,(TPoint *)(in_x1 + 0x1c));
    if (local_70 == 0xffffffff) goto LAB_0428ccd4;
LAB_0428caf8:
    if (local_6c == -1) goto LAB_0428ccd4;
  }
  fVar10 = *(float *)(lVar5 + 700);
  fVar9 = *(float *)(lVar5 + 0x2c0);
  BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)local_70,local_6c,in_w2);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_58,*(float *)(lVar6 + 0x68),0.0,-*(float *)(lVar6 + 0x6c))
  ;
  EATextSquish::Vec3::Vec3
            (aVStack_48,(float)local_68 + local_58 + fVar10,(float)local_64 + local_54 + fVar9,
             local_50);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(in_x1);
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)in_x1);
    ComponentPlantLauncher::GetAboutToFireProjectileCallback();
    iVar4 = FUN_0428b27c(local_30,local_20);
    if (iVar4 != 0) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)in_x1);
      ComponentPlantLauncher::GetAboutToFireProjectileCallback();
      cVar1 = Sexy::Delegate2<char_const*,char_const*>::operator()(acStack_38,(char *)aVStack_48);
      if (cVar1 != '\0') goto LAB_0428cc54;
    }
  }
  lVar5 = *(long *)(gLawnApp + 0x9f0);
  if (*(char *)(lVar5 + 0x119) == '\0') {
    fVar8 = 0.0;
  }
  else {
    fVar8 = (float)Board::calculateRoofOffsetZ((float)local_68 + local_58 + fVar10);
    lVar5 = *(long *)(gLawnApp + 0x9f0);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)(lVar6 + 8));
  this_00 = (RtObject *)
            Board::AddProjectile
                      ((Board *)((float)local_68 + local_58 + fVar10),
                       (float)local_64 + local_54 + fVar9,fVar8 + local_50,lVar5,aRStack_60,this,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  FUN_0428b4d4(this_00 + 0x24);
  pHVar7 = Sexy::RtObject::Cast<HollyKnightLeaf>(this_00);
  if (pHVar7 != (HollyKnightLeaf *)0x0) {
    uVar3 = FUN_0428b344(*(undefined4 *)(this + 0x50));
    FUN_0428b354(pHVar7 + 0x1b0,uVar3);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)in_x1);
  ComponentPlantLauncher::GetFireProjectileCallback();
  iVar4 = FUN_0428b27c(local_30,local_20);
  if (iVar4 != 0) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)in_x1);
    ComponentPlantLauncher::GetFireProjectileCallback();
    Sexy::Delegate2<char_const*,char_const*>::operator()(acStack_38,(char *)this_00);
  }
LAB_0428cc54:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantLauncherSubSystem::PlantLauncherSubSystem() */

void __thiscall PlantLauncherSubSystem::PlantLauncherSubSystem(PlantLauncherSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_068267e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* PlantLauncherSubSystem::StaticNew() */

PlantLauncherSubSystem * PlantLauncherSubSystem::StaticNew(void)

{
  PlantLauncherSubSystem *this;
  
  this = ::operator_new(0x28);
  PlantLauncherSubSystem(this);
  return this;
}


/* PlantLauncherSubSystem::~PlantLauncherSubSystem() */

void __thiscall PlantLauncherSubSystem::~PlantLauncherSubSystem(PlantLauncherSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_068267e0;
  std::
  vector<PlantLauncherSubSystem::PlantLauncherEntry,std::allocator<PlantLauncherSubSystem::PlantLauncherEntry>>
  ::~vector((vector<PlantLauncherSubSystem::PlantLauncherEntry,std::allocator<PlantLauncherSubSystem::PlantLauncherEntry>>
             *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PlantLauncherSubSystem::~PlantLauncherSubSystem() */

void __thiscall PlantLauncherSubSystem::~PlantLauncherSubSystem(PlantLauncherSubSystem *this)

{
  ~PlantLauncherSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLauncherSubSystem::Update() */

void __thiscall PlantLauncherSubSystem::Update(PlantLauncherSubSystem *this)

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
  iVar2 = FUN_0428b36c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    lVar4 = (long)(int)uVar1 + -1;
    lVar3 = lVar4;
    lVar6 = (long)(int)uVar1;
    while( true ) {
      lVar5 = lVar3;
      fVar7 = (float)PVZ_T();
      lVar3 = FUN_0428b39c(*(undefined8 *)(this + 0x10),lVar6);
      if (*(float *)(lVar3 + 0x18) <= fVar7) {
        launch((PlantLauncherEntry *)this);
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
        vector<PlantLauncherSubSystem::PlantLauncherEntry,std::allocator<PlantLauncherSubSystem::PlantLauncherEntry>>
        ::erase((vector<PlantLauncherSubSystem::PlantLauncherEntry,std::allocator<PlantLauncherSubSystem::PlantLauncherEntry>>
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
/* PlantLauncherSubSystem::QueueShot(ComponentPlantLauncher*, float, Sexy::Point const&,
   PlantWeapon) */

void PlantLauncherSubSystem::QueueShot(long param_1)

{
  PlantLauncherEntry aPStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantLauncherEntry::PlantLauncherEntry(aPStack_30);
  std::
  vector<PlantLauncherSubSystem::PlantLauncherEntry,std::allocator<PlantLauncherSubSystem::PlantLauncherEntry>>
  ::push_back((vector<PlantLauncherSubSystem::PlantLauncherEntry,std::allocator<PlantLauncherSubSystem::PlantLauncherEntry>>
               *)(param_1 + 0x10),aPStack_30);
  PlantLauncherEntry::~PlantLauncherEntry(aPStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

