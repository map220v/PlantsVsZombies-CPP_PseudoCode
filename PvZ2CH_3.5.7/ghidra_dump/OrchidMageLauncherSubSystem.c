// Class: OrchidMageLauncherSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidMageLauncherSubSystem::StaticClassInit() */

void OrchidMageLauncherSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"OrchidMageLauncherSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_034687e8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OrchidMageLauncherSubSystem::StaticGetClass() */

long * OrchidMageLauncherSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"OrchidMageLauncherSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OrchidMageLauncherSubSystem::GetClass() const */

long * OrchidMageLauncherSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"OrchidMageLauncherSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidMageLauncherSubSystem::launch(OrchidMageLauncherSubSystem::OrchidMageLauncherEntry const&)
    */

void __thiscall
OrchidMageLauncherSubSystem::launch
          (OrchidMageLauncherSubSystem *this,OrchidMageLauncherEntry *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Plant *this_00;
  long lVar3;
  undefined8 *puVar4;
  Projectile *this_01;
  OrchidmageProjectile_1 *pOVar5;
  undefined8 uVar6;
  int iVar7;
  float fVar8;
  Board *pBVar10;
  float fVar9;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 8));
  if ((this_00 != (Plant *)0x0) && (lVar3 != 0)) {
    cVar1 = Plant::GetAvatarEnable(this_00);
    if ((cVar1 == '\0') || (param_1[0x1c] == (OrchidMageLauncherEntry)0x0)) {
      iVar7 = 4;
    }
    else {
      iVar7 = 3;
    }
    lVar3 = FUN_03461fa0(*(undefined8 *)(lVar3 + 0x70));
    Sexy::Point::Point((Point *)&local_28,(TPoint *)(param_1 + 0x14));
    if ((local_28 == 0xffffffff) || (local_24 == -1)) {
      local_28 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
      local_24 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
    }
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_00);
                    /* WARNING: Load size is inaccurate */
    pBVar10._0_4_ = *puVar4;
    fVar9 = *(float *)((long)puVar4 + 4);
    uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(lVar3 + 8));
    this_01 = (Projectile *)
              Board::AddProjectile
                        (pBVar10._0_4_,fVar9,0x41f00000,uVar6,
                         (RtWeakPtr<Sexy::SoundResource> *)&local_18,this_00,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    puVar4 = (undefined8 *)Projectile::GetVelocity(this_01);
    local_18 = *puVar4;
    local_10 = *(int *)(puVar4 + 1);
    BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)local_28,local_24,local_10);
    fVar9 = (float)local_1c - fVar9;
    fVar8 = (float)local_20 - (float)pBVar10._0_4_;
    local_18._0_4_ = (float)local_18 / SQRT(fVar9 * fVar9 + fVar8 * fVar8);
    local_18 = CONCAT44((float)local_18 * fVar9,(float)local_18 * fVar8);
    Projectile::SetVelocity(this_01,(SexyVector3 *)&local_18);
    FUN_03462178(this_01 + 0x24);
    pOVar5 = Sexy::RtObject::Cast<OrchidmageProjectile_1>((RtObject *)this_01);
    if (iVar7 == 4) {
      FUN_03461f2c(0x3f99999a,pOVar5 + 0xc0);
      pOVar5[0x1c2] = (OrchidmageProjectile_1)0x0;
    }
    uVar2 = FUN_03461f38(*(undefined4 *)(this_00 + 0x50));
    *(undefined4 *)(pOVar5 + 0x1b0) = uVar2;
    pOVar5[0x1c1] = (OrchidmageProjectile_1)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OrchidMageLauncherSubSystem::OrchidMageLauncherSubSystem() */

void __thiscall
OrchidMageLauncherSubSystem::OrchidMageLauncherSubSystem(OrchidMageLauncherSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06639a50;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* OrchidMageLauncherSubSystem::StaticNew() */

OrchidMageLauncherSubSystem * OrchidMageLauncherSubSystem::StaticNew(void)

{
  OrchidMageLauncherSubSystem *this;
  
  this = ::operator_new(0x28);
  OrchidMageLauncherSubSystem(this);
  return this;
}


/* OrchidMageLauncherSubSystem::~OrchidMageLauncherSubSystem() */

void __thiscall
OrchidMageLauncherSubSystem::~OrchidMageLauncherSubSystem(OrchidMageLauncherSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06639a50;
  std::
  vector<OrchidMageLauncherSubSystem::OrchidMageLauncherEntry,std::allocator<OrchidMageLauncherSubSystem::OrchidMageLauncherEntry>>
  ::~vector((vector<OrchidMageLauncherSubSystem::OrchidMageLauncherEntry,std::allocator<OrchidMageLauncherSubSystem::OrchidMageLauncherEntry>>
             *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* OrchidMageLauncherSubSystem::~OrchidMageLauncherSubSystem() */

void __thiscall
OrchidMageLauncherSubSystem::~OrchidMageLauncherSubSystem(OrchidMageLauncherSubSystem *this)

{
  ~OrchidMageLauncherSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidMageLauncherSubSystem::Update() */

void __thiscall OrchidMageLauncherSubSystem::Update(OrchidMageLauncherSubSystem *this)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  OrchidMageLauncherEntry *pOVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_03462008(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  uVar1 = iVar3 - 1;
  if (-1 < (int)uVar1) {
    lVar5 = (long)(int)uVar1 + -1;
    lVar2 = lVar5;
    lVar7 = (long)(int)uVar1;
    while( true ) {
      lVar6 = lVar2;
      fVar8 = (float)PVZ_T();
      pOVar4 = (OrchidMageLauncherEntry *)FUN_03462030(*(undefined8 *)(this + 0x10),lVar7);
      if (*(float *)(pOVar4 + 0x10) <= fVar8) {
        launch(this,pOVar4);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x10));
        local_18 = __gnu_cxx::
                   __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                   ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                                *)&local_20,lVar7);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::
        vector<OrchidMageLauncherSubSystem::OrchidMageLauncherEntry,std::allocator<OrchidMageLauncherSubSystem::OrchidMageLauncherEntry>>
        ::erase((vector<OrchidMageLauncherSubSystem::OrchidMageLauncherEntry,std::allocator<OrchidMageLauncherSubSystem::OrchidMageLauncherEntry>>
                 *)(this + 0x10),local_10);
      }
      if (lVar6 == lVar5 - (ulong)uVar1) break;
      lVar2 = lVar6 + -1;
      lVar7 = lVar6;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidMageLauncherSubSystem::QueueShot(PlantOrchidMage*, float, Sexy::Point const&, bool) */

void __thiscall
OrchidMageLauncherSubSystem::QueueShot
          (OrchidMageLauncherSubSystem *this,PlantOrchidMage *param_1,float param_2,Point *param_3,
          bool param_4)

{
  OrchidMageLauncherEntry aOStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  OrchidMageLauncherEntry::OrchidMageLauncherEntry(aOStack_28,param_1,param_2,param_3,param_4);
  std::
  vector<OrchidMageLauncherSubSystem::OrchidMageLauncherEntry,std::allocator<OrchidMageLauncherSubSystem::OrchidMageLauncherEntry>>
  ::push_back((vector<OrchidMageLauncherSubSystem::OrchidMageLauncherEntry,std::allocator<OrchidMageLauncherSubSystem::OrchidMageLauncherEntry>>
               *)(this + 0x10),aOStack_28);
  DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
            ((DragonBruitLauncherEntry *)aOStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

