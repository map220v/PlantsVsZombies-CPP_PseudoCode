// Class: MeteorLauncherSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeteorLauncherSubSystem::StaticClassInit() */

void MeteorLauncherSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"MeteorLauncherEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_04cb69c8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"MeteorLauncherSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_04cb6df8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MeteorLauncherSubSystem::StaticGetClass() */

long * MeteorLauncherSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MeteorLauncherSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MeteorLauncherSubSystem::GetClass() const */

long * MeteorLauncherSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"MeteorLauncherSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MeteorLauncherSubSystem::MeteorLauncherSubSystem() */

void __thiscall MeteorLauncherSubSystem::MeteorLauncherSubSystem(MeteorLauncherSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06999470;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* MeteorLauncherSubSystem::StaticNew() */

MeteorLauncherSubSystem * MeteorLauncherSubSystem::StaticNew(void)

{
  MeteorLauncherSubSystem *this;
  
  this = ::operator_new(0x28);
  MeteorLauncherSubSystem(this);
  return this;
}


/* MeteorLauncherSubSystem::~MeteorLauncherSubSystem() */

void __thiscall MeteorLauncherSubSystem::~MeteorLauncherSubSystem(MeteorLauncherSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06999470;
  std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>::~vector
            ((vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* MeteorLauncherSubSystem::~MeteorLauncherSubSystem() */

void __thiscall MeteorLauncherSubSystem::~MeteorLauncherSubSystem(MeteorLauncherSubSystem *this)

{
  ~MeteorLauncherSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* MeteorLauncherSubSystem::canFireOnRandomTile(Sexy::Point) */

bool __thiscall MeteorLauncherSubSystem::canFireOnRandomTile(undefined8 param_1,Point *param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = Board::GetPlantAt(*(Board **)(gLawnApp + 0x9f0),param_2,1);
  lVar4 = FUN_04cb7114(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  if ((((lVar4 == 0) && (lVar3 == 0)) &&
      (cVar2 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),param_2), cVar2 == '\0')) &&
     ((cVar2 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),param_2), cVar2 == '\0' &&
      (*(int *)param_2 != -1)))) {
    bVar1 = *(int *)(param_2 + 4) != -1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeteorLauncherSubSystem::launch(MeteorLauncherEntry const&) */

void __thiscall
MeteorLauncherSubSystem::launch(MeteorLauncherSubSystem *this,MeteorLauncherEntry *param_1)

{
  char cVar1;
  byte bVar2;
  Plant *this_00;
  long lVar3;
  long lVar4;
  RtObject *this_01;
  MeteorProjectile *pMVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  uint local_40;
  int local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  if (this_00 != (Plant *)0x0) {
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    if (lVar3 != 0) {
      if (*(int *)(param_1 + 0x20) == 1) {
        uVar10 = 2;
      }
      else {
        uVar10 = 0;
        if (*(int *)(param_1 + 0x20) == 2) {
          uVar10 = 3;
        }
      }
      pcVar7 = Plant::IsInPlantFoodState;
      if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
        cVar1 = Plant::IsInPlantFoodState(this_00);
      }
      else {
        cVar1 = (**(code **)(*(long *)this_00 + 0x1f8))();
      }
      if (cVar1 == '\0') {
        lVar3 = FUN_04cb6550(*(undefined8 *)(lVar3 + 0x70),uVar10);
        uVar10 = *(undefined4 *)(param_1 + 0x1c);
      }
      else {
        lVar3 = FUN_04cb6550(*(undefined8 *)(lVar3 + 0x70),1);
        uVar10 = *(undefined4 *)(param_1 + 0x1c);
      }
      cVar1 = FUN_0547419c((string *)(lVar3 + 0x50));
      if (cVar1 == '\0') {
        RealObject::PlayPositionalSound((RealObject *)this_00,(string *)(lVar3 + 0x50),0.0);
      }
      Sexy::Point::Point((Point *)&local_40,(TPoint *)(param_1 + 0xc));
      iVar6 = (int)pcVar7;
      if ((local_40 == 0xffffffff) || (local_3c == -1)) {
        iVar8 = 0;
        while( true ) {
          Sexy::Point::Point((Point *)&local_18,(TPoint *)&local_40);
          bVar2 = canFireOnRandomTile(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          iVar6 = (int)pcVar7;
          if ((iVar8 < 0x1a) <= bVar2) break;
          iVar8 = iVar8 + 1;
          local_40 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
          local_3c = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
        }
      }
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,0.0,-20.0);
      BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)local_40,local_3c,iVar6);
      EATextSquish::Vec3::Vec3
                ((Vec3 *)&local_18,*(float *)(lVar3 + 0x68),0.0,-*(float *)(lVar3 + 0x6c));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)(lVar3 + 8));
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      *(undefined4 *)(lVar4 + 0x60) = uVar10;
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar3 + 0x48);
      uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
      this_01 = (RtObject *)
                Board::AddProjectile
                          ((Board *)(local_38 + local_18 + (float)local_30),
                           local_34 + local_14 + (float)local_2c,local_10,uVar9,aRStack_20,this_00,0
                          );
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      FUN_04cb65d0(this_01 + 0x24);
      pMVar5 = Sexy::RtObject::Cast<MeteorProjectile>(this_01);
      if (pMVar5 != (MeteorProjectile *)0x0) {
        FUN_04cb6500(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),pMVar5 + 0x1a8,
                     pMVar5 + 0x1ac);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeteorLauncherSubSystem::Update() */

void __thiscall MeteorLauncherSubSystem::Update(MeteorLauncherSubSystem *this)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  MeteorLauncherEntry *pMVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04cb6514(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  uVar1 = iVar3 - 1;
  if (-1 < (int)uVar1) {
    lVar5 = (long)(int)uVar1 + -1;
    lVar2 = lVar5;
    lVar7 = (long)(int)uVar1;
    while( true ) {
      lVar6 = lVar2;
      fVar8 = (float)PVZ_T();
      pMVar4 = (MeteorLauncherEntry *)FUN_04cb6544(*(undefined8 *)(this + 0x10),lVar7);
      if (*(float *)(pMVar4 + 8) <= fVar8) {
        launch(this,pMVar4);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x10));
        local_18 = __gnu_cxx::
                   __normal_iterator<MeteorLauncherEntry*,std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>>
                   ::operator+((__normal_iterator<MeteorLauncherEntry*,std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>>
                                *)&local_20,lVar7);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>::erase
                  ((vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>> *)(this + 0x10),
                   local_10);
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


/* MeteorLauncherSubSystem::QueueShot(MeteorLauncherEntry const&) */

void __thiscall
MeteorLauncherSubSystem::QueueShot(MeteorLauncherSubSystem *this,MeteorLauncherEntry *param_1)

{
  std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>::push_back
            ((vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>> *)(this + 0x10),
             param_1);
  return;
}

