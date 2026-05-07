// Class: GridItemZombiePortal


/* GridItemZombiePortal::setSpawnZombiesNum(int) */

void __thiscall GridItemZombiePortal::setSpawnZombiesNum(GridItemZombiePortal *this,int param_1)

{
  *(int *)(this + 0x1d4) = param_1;
  return;
}


/* GridItemZombiePortal::onCreateZombieSpawnList() */

void GridItemZombiePortal::onCreateZombieSpawnList(void)

{
  return;
}


/* GridItemZombiePortal::onOpenAnimCompleted() */

void __thiscall GridItemZombiePortal::onOpenAnimCompleted(GridItemZombiePortal *this)

{
  (**(code **)(*(long *)this + 0x2a8))(this,2);
  return;
}


/* GridItemZombiePortal::onCloseAnimCompleted() */

void __thiscall GridItemZombiePortal::onCloseAnimCompleted(GridItemZombiePortal *this)

{
  (**(code **)(*(long *)this + 0x48))();
  return;
}


/* GridItemZombiePortal::CalcRenderOrder() const */

void __thiscall GridItemZombiePortal::CalcRenderOrder(GridItemZombiePortal *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03d65574(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x635ce,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemZombiePortal::CalcRenderOrder() const */

void __thiscall GridItemZombiePortal::CalcRenderOrder(GridItemZombiePortal *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombiePortal::StaticClassInit() */

void GridItemZombiePortal::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombiePortal");
    (*pcVar2)(plVar1,asStack_10,FUN_03d6677c,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombiePortal::StaticGetClass() */

long * GridItemZombiePortal::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombiePortal",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombiePortal::GetClass() const */

long * GridItemZombiePortal::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombiePortal",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombiePortal::setSpawnSpace(float) */

void __thiscall GridItemZombiePortal::setSpawnSpace(GridItemZombiePortal *this,float param_1)

{
  *(float *)(this + 0x1dc) = param_1;
  return;
}


/* GridItemZombiePortal::getSpawnSpace() const */

undefined4 __thiscall GridItemZombiePortal::getSpawnSpace(GridItemZombiePortal *this)

{
  return *(undefined4 *)(this + 0x1dc);
}


/* GridItemZombiePortal::setZomBoss(Sexy::RtWeakPtr<ZombieWithActions>) */

void __thiscall GridItemZombiePortal::setZomBoss(GridItemZombiePortal *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1e0),param_2);
  return;
}


/* GridItemZombiePortal::GetSummonZombieLevel() */

undefined8 GridItemZombiePortal::GetSummonZombieLevel(void)

{
  char cVar1;
  DangerRoomManager *this;
  undefined8 uVar2;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (cVar1 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0)), cVar1 != '\0')) {
    this = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    uVar2 = DangerRoomManager::PickupZombieLevelForCurrentLevel(this);
    return uVar2;
  }
  return 1;
}


/* GridItemZombiePortal::onZombieDied(Zombie*, DamageInfo const*) */

void GridItemZombiePortal::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  ZombieWithActions *pZVar2;
  ZombieWithActions *pZVar3;
  
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(param_1 + 0x1e0));
  if ((cVar1 == '\0') && (param_2 != (DamageInfo *)0x0)) {
    pZVar2 = Sexy::RtObject::Cast<ZombieWithActions>((RtObject *)param_2);
    pZVar3 = (ZombieWithActions *)
             Sexy::RtWeakPtr<ZombieWithActions>::GetPtr
                       ((RtWeakPtr<ZombieWithActions> *)(param_1 + 0x1e0));
    if (pZVar2 == pZVar3) {
      (**(code **)(*(long *)param_1 + 0x2a8))(param_1,3);
      return;
    }
  }
  return;
}


/* GridItemZombiePortal::GridItemZombiePortal() */

void __thiscall GridItemZombiePortal::GridItemZombiePortal(GridItemZombiePortal *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0676d780;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombiePortal_0676da50;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e0));
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1c8) = 0xffffffff;
  *(undefined4 *)(this + 0x1cc) = 0xffffffff;
  *(undefined4 *)(this + 0x1d0) = 0xffffffff;
  *(undefined4 *)(this + 0x1d4) = 0xffffffff;
  *(undefined4 *)(this + 0x1dc) = 0xbf800000;
  return;
}


/* GridItemZombiePortal::StaticNew() */

GridItemZombiePortal * GridItemZombiePortal::StaticNew(void)

{
  GridItemZombiePortal *this;
  
  this = ::operator_new(0x1e8);
  GridItemZombiePortal(this);
  return this;
}


/* GridItemZombiePortal::~GridItemZombiePortal() */

void __thiscall GridItemZombiePortal::~GridItemZombiePortal(GridItemZombiePortal *this)

{
  *(undefined ***)this = &PTR_GetClass_0676d780;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombiePortal_0676da50;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemZombiePortal::~GridItemZombiePortal() */

void __thiscall GridItemZombiePortal::~GridItemZombiePortal(GridItemZombiePortal *this)

{
  ~GridItemZombiePortal(this + -0x10);
  return;
}


/* GridItemZombiePortal::~GridItemZombiePortal() */

void __thiscall GridItemZombiePortal::~GridItemZombiePortal(GridItemZombiePortal *this)

{
  ~GridItemZombiePortal(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemZombiePortal::~GridItemZombiePortal() */

void __thiscall GridItemZombiePortal::~GridItemZombiePortal(GridItemZombiePortal *this)

{
  ~GridItemZombiePortal(this + -0x10);
  return;
}


/* GridItemZombiePortal::createZombieSpawnList_InOrder() */

void __thiscall GridItemZombiePortal::createZombieSpawnList_InOrder(GridItemZombiePortal *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  GridItemZombiePortalProps *pGVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  pGVar4 = GridItem::GetProps<GridItemZombiePortalProps>();
  iVar2 = *(int *)(this + 0x1cc);
  iVar3 = *(int *)(this + 0x1d0);
  uVar7 = *(undefined8 *)(pGVar4 + 0xd8);
  if (iVar2 == -1) {
    iVar2 = 0;
  }
  if (iVar3 == -1) {
    iVar3 = FUN_03d655d0(uVar7,*(undefined8 *)(pGVar4 + 0xe0));
    iVar3 = iVar3 + -1;
    iVar1 = iVar3;
  }
  else {
    iVar1 = FUN_03d655d0(uVar7,*(undefined8 *)(pGVar4 + 0xe0));
    iVar1 = iVar1 + -1;
  }
  iVar2 = ClampInt(iVar2,0,iVar1);
  iVar3 = ClampInt(iVar3,0,iVar1);
  lVar6 = (long)iVar2;
  if (iVar2 <= iVar3) {
    while( true ) {
      iVar2 = iVar2 + 1;
      lVar5 = FUN_03d655f8(uVar7,lVar6);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)(this + 0x1b0),
                 (string *)(lVar5 + 0x10));
      if (iVar3 < iVar2) break;
      uVar7 = *(undefined8 *)(pGVar4 + 0xd8);
      lVar6 = lVar6 + 1;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombiePortal::setState(GridItemZombiePortalState) */

void __thiscall GridItemZombiePortal::setState(GridItemZombiePortal *this,int param_2)

{
  GridItemZombiePortal_AnimRig *this_00;
  GridItemZombiePortalProps *pGVar1;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a8) != param_2) {
    *(int *)(this + 0x1a8) = param_2;
    GridItemAnimation::GetAnimRig();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    pGVar1 = GridItem::GetProps<GridItemZombiePortalProps>();
    if (param_2 == 2) {
      GridItemZombiePortal_AnimRig::PlayIdle(this_00);
    }
    else if (param_2 == 3) {
      FUN_05475d88(asStack_68,pGVar1 + 0x108);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string((string *)aRStack_58,"onCloseAnimCompleted");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 aRStack_58);
      GridItemZombiePortal_AnimRig::PlayClose(this_00,asStack_68,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aRStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
    }
    else if (param_2 == 1) {
      FUN_05475d88(asStack_68,pGVar1 + 0x100);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string((string *)aRStack_58,"onOpenAnimCompleted");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 aRStack_58);
      GridItemZombiePortal_AnimRig::PlayOpen(this_00,asStack_68,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aRStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      RealObject::SetUseGroundClipRect((RealObject *)this,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombiePortal::onZombiesExhausted() */

void __thiscall GridItemZombiePortal::onZombiesExhausted(GridItemZombiePortal *this)

{
  int iVar1;
  GridItemZombiePortalProps *pGVar2;
  
  pGVar2 = GridItem::GetProps<GridItemZombiePortalProps>();
  if ((*(int *)(pGVar2 + 0xf8) != 3) &&
     (iVar1 = Sexy::ScrollWidget::GetPageHorizontal((ScrollWidget *)this), iVar1 == 2)) {
    (**(code **)(*(long *)this + 0x2a8))(this,3);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombiePortal::spawnNextZombie() */

void __thiscall GridItemZombiePortal::spawnNextZombie(GridItemZombiePortal *this)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  char cVar1;
  GridItemZombiePortalProps *pGVar2;
  undefined8 uVar3;
  string *psVar4;
  ZombieType *this_01;
  Zombie *this_02;
  undefined8 *puVar5;
  long *plVar6;
  code *pcVar7;
  float fVar8;
  string asStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  long local_8;
  
  this_00 = (vector<std::string,std::allocator<std::string>> *)(this + 0x1b0);
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty(this_00);
  if (cVar1 == '\0') {
    pGVar2 = GridItem::GetProps<GridItemZombiePortalProps>();
    uVar3 = std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::front
                      ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                        *)this_00);
    FUN_05475d88(asStack_50,uVar3);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_30,(__normal_iterator *)&local_40);
    std::vector<std::string,std::allocator<std::string>>::erase
              (this_00,CONCAT26(uStack_2a,CONCAT15(uStack_2b,CONCAT14(uStack_2c,local_30))));
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
    this_01 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    ZombieType::EnsureResourceGroupsLoaded(this_01);
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
    local_30 = (**(code **)(*(long *)this + 0x2b8))(this);
    uStack_2b = 1;
    plVar6 = *(long **)(gLawnApp + 0x9f0);
    pcVar7 = *(code **)(*plVar6 + 0x318);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
    this_02 = (Zombie *)
              (*pcVar7)(plVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_40,0xfffffffb,
                        (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                         *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    Zombie::StartWarpIn(this_02,1.75);
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_38 = *(undefined4 *)(puVar5 + 1);
    local_40._0_4_ = (float)*puVar5;
    local_40 = CONCAT44((int)((ulong)*puVar5 >> 0x20),
                        (float)*(int *)(pGVar2 + 0xf4) + (float)local_40);
    BoardEntity::PlaceOnBoard((SexyVector3 *)this_02);
    if (*(float *)(this + 0x1dc) <= 0.0) {
      fVar8 = (float)ValueRange::GetRandomValue((ValueRange *)(pGVar2 + 0xd0));
      *(float *)(this + 0x1ac) = *(float *)(this + 0x1ac) + fVar8;
    }
    else {
      *(float *)(this + 0x1ac) = *(float *)(this + 0x1ac) + *(float *)(this + 0x1dc);
    }
    *(int *)(this + 0x1d8) = *(int *)(this + 0x1d8) + 1;
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    std::string::~string(asStack_50);
  }
  else {
    onZombiesExhausted(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombiePortal::pickRandomZombie() */

void __thiscall GridItemZombiePortal::pickRandomZombie(GridItemZombiePortal *this)

{
  bool bVar1;
  GridItemZombiePortalProps *pGVar2;
  BasicZombieWeights *pBVar3;
  undefined8 local_70;
  undefined8 local_68;
  string asStack_60 [8];
  BasicZombieWeights aBStack_58 [16];
  undefined1 auStack_48 [8];
  undefined4 local_40;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  pGVar2 = GridItem::GetProps<GridItemZombiePortalProps>();
  local_70 = FUN_03d66198(*(undefined8 *)(pGVar2 + 0xd8));
  local_68 = FUN_03d661e8(*(undefined8 *)(pGVar2 + 0xe0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1) {
    pBVar3 = (BasicZombieWeights *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    BasicZombieWeights::BasicZombieWeights(aBStack_58,pBVar3);
    FUN_05475d88(asStack_60,auStack_48);
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)aPStack_38,asStack_60,local_40);
    std::string::~string(asStack_60);
    BasicZombieWeights::~BasicZombieWeights(aBStack_58);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_70);
  }
  ProbabilitySet<std::string>::PickItem();
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombiePortal::createZombieSpawnList() */

void __thiscall GridItemZombiePortal::createZombieSpawnList(GridItemZombiePortal *this)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  int iVar1;
  GridItemZombiePortalProps *pGVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (vector<std::string,std::allocator<std::string>> *)(this + 0x1b0);
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemZombiePortalProps>();
  std::vector<std::string,std::allocator<std::string>>::clear(this_00);
  switch(*(undefined4 *)(pGVar2 + 0xf8)) {
  case 0:
    if (0 < *(int *)(pGVar2 + 0xf0)) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        pickRandomZombie(this);
        std::vector<std::string,std::allocator<std::string>>::push_back(this_00,asStack_10);
        std::string::~string(asStack_10);
      } while (iVar1 < *(int *)(pGVar2 + 0xf0));
    }
    break;
  case 1:
    createZombieSpawnList_InOrder(this);
    break;
  case 2:
    createZombieSpawnList_InOrder(this);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)this_00);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this_00);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
              (uVar4,uVar5);
    break;
  case 3:
    iVar1 = RandRangeInt(*(int *)(pGVar2 + 0x120),*(int *)(pGVar2 + 0x11c));
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        iVar6 = iVar6 + 1;
        pickRandomZombie(this);
        std::vector<std::string,std::allocator<std::string>>::push_back(this_00,asStack_10);
        std::string::~string(asStack_10);
      } while (iVar6 != iVar1);
    }
  }
  iVar1 = *(int *)(this + 0x1c8);
  if (iVar1 != -1) {
    uVar3 = FUN_03d655b4(*(undefined8 *)(this + 0x1b0),*(undefined8 *)(this + 0x1b8));
    if ((ulong)(long)iVar1 < uVar3) {
      std::vector<std::string,std::allocator<std::string>>::resize(this_00,(long)iVar1);
    }
  }
  if (*(code **)(*(long *)this + 0x2b0) != onCreateZombieSpawnList) {
    (**(code **)(*(long *)this + 0x2b0))(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombiePortal::onGridItemInitialize() */

void __thiscall GridItemZombiePortal::onGridItemInitialize(GridItemZombiePortal *this)

{
  undefined *puVar1;
  GridItemZombiePortalProps *pGVar2;
  GridItemZombiePortal_AnimRig *extraout_x0;
  float fVar3;
  float fVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<GridItemZombiePortal,void(GridItemZombiePortal::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_50);
  pGVar2 = GridItem::GetProps<GridItemZombiePortalProps>();
  if (pGVar2[0x118] == (GridItemZombiePortalProps)0x0) {
    fVar3 = (float)PVZ_T();
    fVar4 = (float)ValueRange::GetRandomValue((ValueRange *)(pGVar2 + 0xd0));
    fVar4 = (float)RandRangeFloat(0.0,fVar4);
    FUN_03d655a8(fVar4 + fVar3,this + 0x1ac);
  }
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  (**(code **)(*(long *)this + 0x2a8))(this,0);
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  FUN_05475d88(aRStack_28,pGVar2 + 0x110);
  GridItemZombiePortal_AnimRig::ShowPortalLayers(extraout_x0,aRStack_28);
  std::string::~string((string *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombiePortal::onUpdate() */

void __thiscall GridItemZombiePortal::onUpdate(GridItemZombiePortal *this)

{
  int iVar1;
  GridItemZombiePortalProps *pGVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = Sexy::ScrollWidget::GetPageHorizontal((ScrollWidget *)this);
  if (iVar1 == 0) {
    createZombieSpawnList(this);
    (**(code **)(*(long *)this + 0x2a8))(this,1);
  }
  (**(code **)(*(long *)this + 0xa8))(this,1);
  pGVar2 = GridItem::GetProps<GridItemZombiePortalProps>();
  if (((*(int *)(pGVar2 + 0xf8) == 3) || (*(int *)(this + 0x1d4) < 1)) ||
     (*(int *)(this + 0x1d8) < *(int *)(this + 0x1d4))) {
    fVar4 = *(float *)(this + 0x1ac);
    fVar3 = (float)PVZ_T();
    if (fVar3 < fVar4) goto LAB_03d68ce0;
  }
  else {
    (**(code **)(*(long *)this + 0x2a8))(this,3);
    fVar4 = *(float *)(this + 0x1ac);
    fVar3 = (float)PVZ_T();
    if (fVar3 < fVar4) goto LAB_03d68ce0;
  }
  iVar1 = Sexy::ScrollWidget::GetPageHorizontal((ScrollWidget *)this);
  if (iVar1 == 2) {
    spawnNextZombie(this);
    GridItemAnimation::onUpdate((GridItemAnimation *)this);
    return;
  }
LAB_03d68ce0:
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  return;
}


/* GridItemZombiePortal::getZombiesQuantity() const */

void __thiscall GridItemZombiePortal::getZombiesQuantity(GridItemZombiePortal *this)

{
  FUN_04f50f58(*(undefined8 *)(this + 0x1b0),*(undefined8 *)(this + 0x1b8));
  return;
}

