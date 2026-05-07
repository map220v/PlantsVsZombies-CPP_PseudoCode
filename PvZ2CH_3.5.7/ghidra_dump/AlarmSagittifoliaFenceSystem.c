// Class: AlarmSagittifoliaFenceSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::StaticClassInit() */

void AlarmSagittifoliaFenceSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"AlarmSagittifoliaLocation");
    (*pcVar3)(plVar2,asStack_10,FUN_03c198e0,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DelayAction");
    (*pcVar3)(plVar2,asStack_10,FUN_03c1b98c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"AlarmSagittifoliaFenceSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_03c1decc,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AlarmSagittifoliaFenceSystem::StaticGetClass() */

long * AlarmSagittifoliaFenceSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AlarmSagittifoliaFenceSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AlarmSagittifoliaFenceSystem::GetClass() const */

long * AlarmSagittifoliaFenceSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"AlarmSagittifoliaFenceSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::getOrderedLocations(PlantAlarmSagittifolia*,
   PlantAlarmSagittifolia*, Sexy::Point&, Sexy::Point&) */

void __thiscall
AlarmSagittifoliaFenceSystem::getOrderedLocations
          (AlarmSagittifoliaFenceSystem *this,PlantAlarmSagittifolia *param_1,
          PlantAlarmSagittifolia *param_2,Point *param_3,Point *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 local_10;
  long local_8;
  
  iVar1 = *(int *)(*(long *)(param_2 + 0x10) + 0x110);
  iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 0x110);
  local_8 = ___stack_chk_guard;
  if (iVar1 < iVar2) {
    Sexy::Point::Point((Point *)&local_10,*(int *)(*(long *)(param_2 + 0x10) + 0x114),iVar1);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  else {
    Sexy::Point::Point((Point *)&local_10,*(int *)(*(long *)(param_1 + 0x10) + 0x114),iVar2);
    lVar3 = *(long *)(param_2 + 0x10);
  }
  *(undefined8 *)param_3 = local_10;
  Sexy::Point::Point((Point *)&local_10,*(int *)(lVar3 + 0x114),*(int *)(lVar3 + 0x110));
  *(undefined8 *)param_4 = local_10;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::GetNumFencesOnNode(PlantAlarmSagittifolia*) */

void __thiscall
AlarmSagittifoliaFenceSystem::GetNumFencesOnNode
          (AlarmSagittifoliaFenceSystem *this,PlantAlarmSagittifolia *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long lVar4;
  int iVar5;
  Point aPStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  Sexy::Point::Point(aPStack_20,*(int *)(*(long *)(param_1 + 0x10) + 0x114),
                     *(int *)(*(long *)(param_1 + 0x10) + 0x110));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    do {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,pRVar3);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      cVar2 = Sexy::TPoint<int>::operator==((TPoint<int> *)(lVar4 + 0x10),(TPoint *)aPStack_20);
      if (cVar2 == '\0') {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10)
        ;
        cVar2 = Sexy::TPoint<int>::operator==((TPoint<int> *)(lVar4 + 0x18),(TPoint *)aPStack_20);
        if (cVar2 != '\0') goto LAB_03c19be4;
      }
      else {
LAB_03c19be4:
        iVar5 = iVar5 + 1;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      FUN_03c19ad8((__normal_iterator *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    } while (bVar1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::getPieceWithEndpoints(Sexy::Point, Sexy::Point) */

void AlarmSagittifoliaFenceSystem::getPieceWithEndpoints
               (RtWeakPtr<Sexy::SoundResource> *param_1,long param_2,TPoint *param_3,TPoint *param_4
               )

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  ElectricCurrantFence *pEVar4;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Point aPStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_2 + 0x18));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_2 + 0x18));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)param_1);
LAB_03c19d94:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      pEVar4 = (ElectricCurrantFence *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      Sexy::Point::Point(aPStack_18,param_3);
      cVar2 = ElectricCurrantFence::HasNode(pEVar4,aPStack_18);
      if (cVar2 != '\0') {
        pEVar4 = (ElectricCurrantFence *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        Sexy::Point::Point((Point *)&local_10,param_4);
        cVar2 = ElectricCurrantFence::HasNode(pEVar4,(Point *)&local_10);
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)aRStack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          goto LAB_03c19d94;
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    FUN_03c19ad8((__normal_iterator *)&local_28);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::AlarmSagittifoliaFenceSystem() */

void __thiscall
AlarmSagittifoliaFenceSystem::AlarmSagittifoliaFenceSystem(AlarmSagittifoliaFenceSystem *this)

{
  undefined *puVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  this[0x10] = (AlarmSagittifoliaFenceSystem)0x0;
  *(undefined ***)this = &PTR_GetClass_06748cc0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  Sexy::Delegate0::Delegate0<AlarmSagittifoliaFenceSystem,void(AlarmSagittifoliaFenceSystem::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelEnded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRailcartMoved);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<GridItemRailcart*,Sexy::CBMemberTranslatorX<AlarmSagittifoliaFenceSystem,void(AlarmSagittifoliaFenceSystem::*)(GridItemRailcart*)>>
            ((MessageRouter *)puVar1,Message::RailcartMoved,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMechanismPlankMoved);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<GridItemMechanismPlank*,Sexy::CBMemberTranslatorX<AlarmSagittifoliaFenceSystem,void(AlarmSagittifoliaFenceSystem::*)(GridItemMechanismPlank*)>>
            ((MessageRouter *)puVar1,Message::MechanismPlankMoved,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AlarmSagittifoliaFenceSystem::StaticNew() */

AlarmSagittifoliaFenceSystem * AlarmSagittifoliaFenceSystem::StaticNew(void)

{
  AlarmSagittifoliaFenceSystem *this;
  
  this = ::operator_new(0x48);
  AlarmSagittifoliaFenceSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::clearEffectsOnNode(Sexy::Point) */

void __thiscall
AlarmSagittifoliaFenceSystem::clearEffectsOnNode(undefined8 param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  Plant *pPVar3;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,1,*param_2,param_2[1]);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    pPVar3 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar2);
    if (*(RtObject **)(pPVar3 + 0xa8) != (RtObject *)0x0) {
      Sexy::RtObject::IsA<PlantAlarmSagittifolia>(*(RtObject **)(pPVar3 + 0xa8));
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::doEndNodesExistForFence(Sexy::RtWeakPtr<AlarmSagittifoliaFence>,
   std::set<Sexy::Point, point_compare_vertical, std::allocator<Sexy::Point> >&) */

void __thiscall
AlarmSagittifoliaFenceSystem::doEndNodesExistForFence
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2,
          set<Sexy::Point,point_compare_vertical,std::allocator<Sexy::Point>> *param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  Board *pBVar4;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Sexy::Point::Point((Point *)&local_20,(TPoint *)(lVar2 + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Sexy::Point::Point((Point *)&local_18,(TPoint *)(lVar2 + 0x18));
  pBVar4 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  lVar2 = Board::GetPlantAt(pBVar4,local_20,local_1c,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (lVar2 == 0) {
LAB_03c1e624:
    uVar3 = 0;
    std::set<Sexy::Point,point_compare_vertical,std::allocator<Sexy::Point>>::insert
              (param_3,(Point *)&local_20);
  }
  else {
    Plant::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    bVar1 = std::operator!=((string *)(lVar2 + 8),"alarmsagittifolia");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (bVar1) goto LAB_03c1e624;
    uVar3 = 1;
  }
  pBVar4 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  lVar2 = Board::GetPlantAt(pBVar4,local_18,local_14,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (lVar2 != 0) {
    Plant::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    bVar1 = std::operator!=((string *)(lVar2 + 8),"alarmsagittifolia");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (!bVar1) goto LAB_03c1e5dc;
  }
  uVar3 = 0;
  std::set<Sexy::Point,point_compare_vertical,std::allocator<Sexy::Point>>::insert
            (param_3,(Point *)&local_18);
LAB_03c1e5dc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::RemoveUndamageableEntitiesFromList(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

void __thiscall
AlarmSagittifoliaFenceSystem::RemoveUndamageableEntitiesFromList
          (AlarmSagittifoliaFenceSystem *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  GridItem *pGVar5;
  RtObject *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      this_00 = (RtObject *)*puVar3;
      if ((this_00 == (RtObject *)0x0) ||
         (((pZVar4 = Sexy::RtObject::Cast<Zombie>(this_00), pZVar4 == (Zombie *)0x0 ||
           (((cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))(), cVar2 == '\0' &&
             (cVar2 = (**(code **)(*(long *)pZVar4 + 0x330))(pZVar4), cVar2 == '\0')) &&
            (cVar2 = RealObject::IsOnTeam(pZVar4,1), cVar2 == '\0')))) &&
          (((bVar1 = Sexy::RtObject::IsA<GridItem>(this_00), !bVar1 ||
            (pGVar5 = Sexy::RtObject::Cast<GridItem>(this_00), pGVar5 == (GridItem *)0x0)) ||
           (cVar2 = (**(code **)(*(long *)pGVar5 + 0x200))(), cVar2 != '\0')))))) break;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                           ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_1);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    FUN_03c19e84((__normal_iterator *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::getEntitiesToAttackInFence(Sexy::RtWeakPtr<AlarmSagittifoliaFence>,
   std::vector<BoardEntity*, std::allocator<BoardEntity*> >&) */

void __thiscall
AlarmSagittifoliaFenceSystem::getEntitiesToAttackInFence
          (AlarmSagittifoliaFenceSystem *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,vector *param_3
          )

{
  long lVar1;
  Point aPStack_38 [4];
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [12];
  uint local_1c;
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Sexy::Point::Point(aPStack_38,(TPoint *)(lVar1 + 0x18));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Sexy::Point::Point((Point *)&local_30,(TPoint *)(lVar1 + 0x10));
  Sexy::Insets::Insets(aIStack_28,local_30,local_2c,1,1);
  local_1c = local_34 - local_2c;
  BoardTransforms::GridRectToBoardSpaceRect((BoardTransforms *)aIStack_28,(TRect *)(ulong)local_1c);
  EntityFinder::GetEntitiesTouchingRectangle(param_3,2,auStack_18,local_2c,local_34);
  RemoveUndamageableEntitiesFromList(this,param_3);
  FUN_03c17f4c(*(undefined8 *)param_3,*(undefined8 *)(param_3 + 8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::GetAttackTargets(Sexy::Point) */

void __thiscall
AlarmSagittifoliaFenceSystem::GetAttackTargets(AlarmSagittifoliaFenceSystem *this,TPoint *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  RtWeakPtrBase *pRVar5;
  long lVar6;
  undefined8 *puVar7;
  SharkMinion *this_00;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  do {
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x18));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_20);
    if (!bVar2) {
      this_00 = (SharkMinion *)0x0;
LAB_03c1e9b4:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(this_00);
      }
      return;
    }
    pRVar5 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar5);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    cVar3 = Sexy::TPoint<int>::operator==((TPoint<int> *)(lVar6 + 0x10),param_2);
    if (cVar3 == '\0') {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      cVar3 = Sexy::TPoint<int>::operator==((TPoint<int> *)(lVar6 + 0x18),param_2);
      if (cVar3 != '\0') goto LAB_03c1e8f0;
    }
    else {
LAB_03c1e8f0:
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
      iVar4 = getEntitiesToAttackInFence
                        (this,aRStack_28,
                         (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      if (0 < iVar4) {
        puVar7 = (undefined8 *)FUN_03c17f44(local_20[0],0);
        this_00 = (SharkMinion *)*puVar7;
        iVar4 = SharkMinion::getRow(this_00);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        cVar3 = Sexy::TPoint<int>::operator==((TPoint<int> *)(lVar6 + 0x10),param_2);
        if (cVar3 == '\0') {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          iVar1 = *(int *)(lVar6 + 0x1c);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          if (iVar4 - *(int *)(lVar6 + 0x14) <= iVar1 - iVar4) {
LAB_03c1ea84:
            this_00 = (SharkMinion *)0x0;
          }
        }
        else {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          iVar1 = *(int *)(lVar6 + 0x14);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          if (*(int *)(lVar6 + 0x1c) - iVar4 < iVar4 - iVar1) goto LAB_03c1ea84;
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        goto LAB_03c1e9b4;
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    FUN_03c19ad8((__normal_iterator *)&local_38);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::removeFence(Sexy::RtWeakPtr<AlarmSagittifoliaFence>) */

void __thiscall
AlarmSagittifoliaFenceSystem::removeFence(AlarmSagittifoliaFenceSystem *this,RtWeakPtr *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  AlarmSagittifoliaFence *this_01;
  long *plVar7;
  undefined8 local_20;
  Point aPStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_20 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<AlarmSagittifoliaFence>*,std::vector<Sexy::RtWeakPtr<AlarmSagittifoliaFence>,std::allocator<Sexy::RtWeakPtr<AlarmSagittifoliaFence>>>>,Sexy::RtWeakPtr<AlarmSagittifoliaFence>>
                       (uVar4,uVar5,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
  if (bVar2) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    local_20 = std::
               vector<Sexy::RtWeakPtr<AlarmSagittifoliaFence>,std::allocator<Sexy::RtWeakPtr<AlarmSagittifoliaFence>>>
               ::erase((vector<Sexy::RtWeakPtr<AlarmSagittifoliaFence>,std::allocator<Sexy::RtWeakPtr<AlarmSagittifoliaFence>>>
                        *)this_00,local_10);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  }
  else {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  }
  if ((bVar2) &&
     (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_2), puVar1 = gMessageRouter,
     cVar3 != '\0')) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Sexy::Point::Point(aPStack_18,(TPoint *)(lVar6 + 0x10));
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Sexy::Point::Point((Point *)&local_10,(TPoint *)(lVar6 + 0x18));
    MessageRouter::Post<Sexy::Point_const&,Sexy::Point_const&,bool,Sexy::Point,Sexy::Point,bool>
              ((MessageRouter *)puVar1,Message::UpdateAlarmSagittifoliaIdle,aPStack_18,
               (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,0);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Sexy::Point::Point((Point *)&local_10,(TPoint *)(lVar6 + 0x10));
    clearEffectsOnNode(this,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                             *)&local_10);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Sexy::Point::Point((Point *)&local_10,(TPoint *)(lVar6 + 0x18));
    clearEffectsOnNode(this,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                             *)&local_10);
    this_01 = (AlarmSagittifoliaFence *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    AlarmSagittifoliaFence::DestroyFence(this_01);
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    (**(code **)(*plVar7 + 0x48))();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_20);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::removeFenceBetweenPlants(PlantAlarmSagittifolia*,
   PlantAlarmSagittifolia*) */

void __thiscall
AlarmSagittifoliaFenceSystem::removeFenceBetweenPlants
          (AlarmSagittifoliaFenceSystem *this,PlantAlarmSagittifolia *param_1,
          PlantAlarmSagittifolia *param_2)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr aRStack_20 [8];
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_18,*(int *)(*(long *)(param_1 + 0x10) + 0x114),
                     *(int *)(*(long *)(param_1 + 0x10) + 0x110));
  Sexy::Point::Point(aPStack_10,*(int *)(*(long *)(param_2 + 0x10) + 0x114),
                     *(int *)(*(long *)(param_2 + 0x10) + 0x110));
  getPieceWithEndpoints(aRStack_20,this,aPStack_18,aPStack_10);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20), cVar2 != '\0')) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aPStack_10,(RtWeakPtrBase *)aRStack_20);
    removeFence(this,aPStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::removeAllFences() */

void __thiscall AlarmSagittifoliaFenceSystem::removeAllFences(AlarmSagittifoliaFenceSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  RtWeakPtrBase *pRVar5;
  AlarmSagittifoliaFence *this_01;
  long *plVar6;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Point aPStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  while (lVar4 = FUN_03c17eec(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20)), lVar4 != 0
        ) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    pRVar5 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar5);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
    if (bVar2) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_28);
      local_28 = std::
                 vector<Sexy::RtWeakPtr<AlarmSagittifoliaFence>,std::allocator<Sexy::RtWeakPtr<AlarmSagittifoliaFence>>>
                 ::erase((vector<Sexy::RtWeakPtr<AlarmSagittifoliaFence>,std::allocator<Sexy::RtWeakPtr<AlarmSagittifoliaFence>>>
                          *)this_00,local_10);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
      if ((bVar2) &&
         (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20),
         puVar1 = gMessageRouter, cVar3 != '\0')) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        Sexy::Point::Point(aPStack_18,(TPoint *)(lVar4 + 0x10));
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        Sexy::Point::Point((Point *)&local_10,(TPoint *)(lVar4 + 0x18));
        MessageRouter::Post<Sexy::Point_const&,Sexy::Point_const&,bool,Sexy::Point,Sexy::Point,bool>
                  ((MessageRouter *)puVar1,Message::UpdateAlarmSagittifoliaIdle,aPStack_18,
                   (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,0);
        this_01 = (AlarmSagittifoliaFence *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        AlarmSagittifoliaFence::DestroyFence(this_01);
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        (**(code **)(*plVar6 + 0x48))();
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AlarmSagittifoliaFenceSystem::~AlarmSagittifoliaFenceSystem() */

void __thiscall
AlarmSagittifoliaFenceSystem::~AlarmSagittifoliaFenceSystem(AlarmSagittifoliaFenceSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06748cc0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  removeAllFences(this);
  std::
  vector<AlarmSagittifoliaFenceSystem::DelayAction,std::allocator<AlarmSagittifoliaFenceSystem::DelayAction>>
  ::~vector((vector<AlarmSagittifoliaFenceSystem::DelayAction,std::allocator<AlarmSagittifoliaFenceSystem::DelayAction>>
             *)(this + 0x30));
  std::
  vector<Sexy::RtWeakPtr<AlarmSagittifoliaFence>,std::allocator<Sexy::RtWeakPtr<AlarmSagittifoliaFence>>>
  ::~vector((vector<Sexy::RtWeakPtr<AlarmSagittifoliaFence>,std::allocator<Sexy::RtWeakPtr<AlarmSagittifoliaFence>>>
             *)(this + 0x18));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* AlarmSagittifoliaFenceSystem::~AlarmSagittifoliaFenceSystem() */

void __thiscall
AlarmSagittifoliaFenceSystem::~AlarmSagittifoliaFenceSystem(AlarmSagittifoliaFenceSystem *this)

{
  ~AlarmSagittifoliaFenceSystem(this);
  AK::FreeHook(this);
  return;
}


/* AlarmSagittifoliaFenceSystem::onLevelEnded() */

void __thiscall AlarmSagittifoliaFenceSystem::onLevelEnded(AlarmSagittifoliaFenceSystem *this)

{
  removeAllFences(this);
  this[0x10] = (AlarmSagittifoliaFenceSystem)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::AddNodeDelay(PlantAlarmSagittifolia*, float) */

void __thiscall
AlarmSagittifoliaFenceSystem::AddNodeDelay
          (AlarmSagittifoliaFenceSystem *this,PlantAlarmSagittifolia *param_1,float param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  FishingZombieInitData aFStack_18 [8];
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (PlantAlarmSagittifolia *)0x0) {
    FishingZombieInitData::FishingZombieInitData(aFStack_18);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)aFStack_18,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    local_10 = (float)PVZ_T();
    local_10 = local_10 + param_2;
    std::
    vector<AlarmSagittifoliaFenceSystem::DelayAction,std::allocator<AlarmSagittifoliaFenceSystem::DelayAction>>
    ::push_back((vector<AlarmSagittifoliaFenceSystem::DelayAction,std::allocator<AlarmSagittifoliaFenceSystem::DelayAction>>
                 *)(this + 0x30),(DelayAction *)aFStack_18);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aFStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::addFenceHelper(Sexy::Point, Sexy::Point) */

void __thiscall
AlarmSagittifoliaFenceSystem::addFenceHelper
          (AlarmSagittifoliaFenceSystem *this,TPoint *param_2,TPoint *param_3)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  AlarmSagittifoliaFence *pAVar4;
  RtWeakPtr aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Point aPStack_28 [8];
  Point aPStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_20,param_2);
  Sexy::Point::Point((Point *)&local_18,param_3);
  getPieceWithEndpoints(aRStack_38,this,aPStack_20,(Point *)&local_18);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
  if ((!bVar2) ||
     (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_38), cVar3 == '\0')) {
    GameObject::Create<AlarmSagittifoliaFence>();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    pAVar4 = (AlarmSagittifoliaFence *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::Point::Point(aPStack_20,param_2);
    Sexy::Point::Point((Point *)&local_18,param_3);
    AlarmSagittifoliaFence::CreateFence(pAVar4,aPStack_20,(Point *)&local_18);
    _ElectricCurrantLocation::_ElectricCurrantLocation((_ElectricCurrantLocation *)&local_18);
    local_10 = *(undefined8 *)param_3;
    local_18 = *(undefined8 *)param_2;
    std::
    vector<Sexy::RtWeakPtr<AlarmSagittifoliaFence>,std::allocator<Sexy::RtWeakPtr<AlarmSagittifoliaFence>>>
    ::push_back((vector<Sexy::RtWeakPtr<AlarmSagittifoliaFence>,std::allocator<Sexy::RtWeakPtr<AlarmSagittifoliaFence>>>
                 *)(this + 0x18),(RtWeakPtr *)aRStack_30);
    puVar1 = gMessageRouter;
    Sexy::Point::Point(aPStack_28,param_2);
    Sexy::Point::Point(aPStack_20,param_3);
    MessageRouter::Post<Sexy::Point_const&,Sexy::Point_const&,bool,Sexy::Point,Sexy::Point,bool>
              ((MessageRouter *)puVar1,Message::UpdateAlarmSagittifoliaIdle,aPStack_28,aPStack_20,1)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::addFence(PlantAlarmSagittifolia*, PlantAlarmSagittifolia*) */

void __thiscall
AlarmSagittifoliaFenceSystem::addFence
          (AlarmSagittifoliaFenceSystem *this,PlantAlarmSagittifolia *param_1,
          PlantAlarmSagittifolia *param_2)

{
  char cVar1;
  Point aPStack_28 [8];
  Point aPStack_20 [8];
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03c17e50(*(undefined1 *)(*(long *)(param_1 + 0x10) + 0x278));
  if ((cVar1 == '\0') &&
     (cVar1 = FUN_03c17e50(*(undefined1 *)(*(long *)(param_2 + 0x10) + 0x278)), cVar1 == '\0')) {
    Sexy::Point::Point(aPStack_28);
    Sexy::Point::Point(aPStack_20);
    getOrderedLocations(this,param_1,param_2,aPStack_28,aPStack_20);
    Sexy::Point::Point(aPStack_18,(TPoint *)aPStack_28);
    Sexy::Point::Point(aPStack_10,(TPoint *)aPStack_20);
    addFenceHelper(this,aPStack_18,aPStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::getNearestPlants(Sexy::Point&, std::vector<PlantAlarmSagittifolia*,
   std::allocator<PlantAlarmSagittifolia*> >&) */

void __thiscall
AlarmSagittifoliaFenceSystem::getNearestPlants
          (AlarmSagittifoliaFenceSystem *this,Point *param_1,vector *param_2)

{
  float fVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  Plant *this_00;
  PlantAlarmSagittifolia *pPVar5;
  long *plVar6;
  int iVar7;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<PlantAlarmSagittifolia*,std::allocator<PlantAlarmSagittifolia*>>::clear
            ((vector<PlantAlarmSagittifolia*,std::allocator<PlantAlarmSagittifolia*>> *)param_2);
  std::vector<PlantAlarmSagittifolia*,std::allocator<PlantAlarmSagittifolia*>>::resize
            ((vector<PlantAlarmSagittifolia*,std::allocator<PlantAlarmSagittifolia*>> *)param_2,2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,1);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  fVar1 = _FUN_03c209a8;
  do {
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar3) {
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)param_2);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_2);
      iVar7 = 0;
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar3) {
        plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        if (*plVar6 != 0) {
          iVar7 = iVar7 + 1;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar7);
    }
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar4);
    if (((this_00 != (Plant *)0x0) &&
        ((((*(int *)(this_00 + 0x114) != *(int *)param_1 ||
           (*(int *)(this_00 + 0x110) != *(int *)(param_1 + 4))) && (*(long *)(this_00 + 0xa8) != 0)
          ) && ((cVar2 = Plant::IsSuspended(this_00), cVar2 == '\0' &&
                (cVar2 = GameObject::IsDestroyed((GameObject *)this_00), cVar2 == '\0')))))) &&
       ((fVar1 < *(float *)(this_00 + 0xd8) &&
        (((cVar2 = Plant::IsSwapping(this_00), cVar2 == '\0' &&
          (pPVar5 = Sexy::RtObject::Cast<PlantAlarmSagittifolia>(*(RtObject **)(this_00 + 0xa8)),
          pPVar5 != (PlantAlarmSagittifolia *)0x0)) &&
         (*(int *)(*(long *)(pPVar5 + 0x10) + 0x114) == *(int *)param_1)))))) {
      iVar7 = *(int *)(*(long *)(pPVar5 + 0x10) + 0x110);
      if (iVar7 < *(int *)(param_1 + 4)) {
        plVar6 = (long *)FUN_03c17ee4(*(undefined8 *)param_2,0);
        if (*plVar6 == 0) {
LAB_03c208e4:
          *plVar6 = (long)pPVar5;
        }
        else if (*(int *)(*(long *)(*plVar6 + 0x10) + 0x110) < iVar7) {
          *plVar6 = (long)pPVar5;
        }
      }
      else if (*(int *)(param_1 + 4) < iVar7) {
        plVar6 = (long *)FUN_03c17ee4(*(undefined8 *)param_2,1);
        if ((*plVar6 == 0) || (iVar7 < *(int *)(*(long *)(*plVar6 + 0x10) + 0x110)))
        goto LAB_03c208e4;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::RecreateFencesAfterNodeRemoval(Sexy::Point&) */

void __thiscall
AlarmSagittifoliaFenceSystem::RecreateFencesAfterNodeRemoval
          (AlarmSagittifoliaFenceSystem *this,Point *param_1)

{
  undefined8 *puVar1;
  PlantAlarmSagittifolia *pPVar2;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  getNearestPlants(this,param_1,(vector *)local_20);
  puVar1 = (undefined8 *)FUN_03c17ee4(local_20[0],0);
  pPVar2 = (PlantAlarmSagittifolia *)*puVar1;
  if (pPVar2 != (PlantAlarmSagittifolia *)0x0) {
    puVar1 = (undefined8 *)FUN_03c17ee4(local_20[0],1);
    if ((PlantAlarmSagittifolia *)*puVar1 != (PlantAlarmSagittifolia *)0x0) {
      addFence(this,pPVar2,(PlantAlarmSagittifolia *)*puVar1);
    }
  }
  std::vector<PlantAlarmSagittifolia*,std::allocator<PlantAlarmSagittifolia*>>::~vector
            ((vector<PlantAlarmSagittifolia*,std::allocator<PlantAlarmSagittifolia*>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::RemoveOrphanedFences() */

void __thiscall
AlarmSagittifoliaFenceSystem::RemoveOrphanedFences(AlarmSagittifoliaFenceSystem *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  TPoint *pTVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  while( true ) {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_40);
    if (!bVar1) break;
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_48,pRVar3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)&local_48);
    cVar2 = doEndNodesExistForFence(this,(RtWeakPtr<Sexy::SoundResource> *)&local_40,amStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    if (cVar2 == '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)&local_48);
      local_50 = removeFence(this,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    }
    else {
      FUN_03c19ad8((__normal_iterator *)&local_50);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  }
  local_48 = std::set<Sexy::Point,point_compare_vertical,std::allocator<Sexy::Point>>::begin
                       ((set<Sexy::Point,point_compare_vertical,std::allocator<Sexy::Point>> *)
                        amStack_38);
  while( true ) {
    local_40 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)amStack_38);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
    if (!bVar1) break;
    pTVar4 = (TPoint *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
    Sexy::Point::Point((Point *)&local_40,pTVar4);
    RecreateFencesAfterNodeRemoval(this,(Point *)&local_40);
    FUN_03c17f14((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  }
  std::set<Sexy::Point,point_compare_vertical,std::allocator<Sexy::Point>>::~set
            ((set<Sexy::Point,point_compare_vertical,std::allocator<Sexy::Point>> *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::onRailcartMoved(GridItemRailcart*) */

void __thiscall
AlarmSagittifoliaFenceSystem::onRailcartMoved
          (AlarmSagittifoliaFenceSystem *this,GridItemRailcart *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Plant *this_00;
  RtObject *this_01;
  PlantAlarmSagittifolia *pPVar5;
  Board *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  iVar3 = FUN_03c17e5c(*(undefined4 *)(param_1 + 0x130));
  iVar4 = FUN_03c17e60(*(undefined4 *)(param_1 + 0x134));
  std::string::string(asStack_10,"");
  this_00 = (Plant *)Board::GetPlantAt(this_02,iVar3,iVar4,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (Plant *)0x0) {
    nop();
    bVar1 = Plant::IsSuspended(this_00);
    if ((bVar1 < (this_01 != (RtObject *)0x0)) &&
       (bVar2 = Sexy::RtObject::IsA<PlantAlarmSagittifolia>(this_01), bVar2)) {
      pPVar5 = Sexy::RtObject::Cast<PlantAlarmSagittifolia>(this_01);
      RemoveOrphanedFences(this);
      AddNodeDelay(this,pPVar5,2.0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::onMechanismPlankMoved(GridItemMechanismPlank*) */

void __thiscall
AlarmSagittifoliaFenceSystem::onMechanismPlankMoved
          (AlarmSagittifoliaFenceSystem *this,GridItemMechanismPlank *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Plant *this_00;
  RtObject *this_01;
  PlantAlarmSagittifolia *pPVar5;
  Board *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  iVar3 = FUN_03c17e5c(*(undefined4 *)(param_1 + 0x130));
  iVar4 = FUN_03c17e60(*(undefined4 *)(param_1 + 0x134));
  std::string::string(asStack_10,"");
  this_00 = (Plant *)Board::GetPlantAt(this_02,iVar3,iVar4,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (Plant *)0x0) {
    nop();
    bVar1 = Plant::IsSuspended(this_00);
    if ((bVar1 < (this_01 != (RtObject *)0x0)) &&
       (bVar2 = Sexy::RtObject::IsA<PlantAlarmSagittifolia>(this_01), bVar2)) {
      pPVar5 = Sexy::RtObject::Cast<PlantAlarmSagittifolia>(this_01);
      RemoveOrphanedFences(this);
      AddNodeDelay(this,pPVar5,2.0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::getNearestPlants(PlantAlarmSagittifolia*,
   std::vector<PlantAlarmSagittifolia*, std::allocator<PlantAlarmSagittifolia*> >&) */

void __thiscall
AlarmSagittifoliaFenceSystem::getNearestPlants
          (AlarmSagittifoliaFenceSystem *this,PlantAlarmSagittifolia *param_1,vector *param_2)

{
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,*(int *)(*(long *)(param_1 + 0x10) + 0x114),
                     *(int *)(*(long *)(param_1 + 0x10) + 0x110));
  getNearestPlants(this,aPStack_10,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::AddNode(PlantAlarmSagittifolia*) */

void __thiscall
AlarmSagittifoliaFenceSystem::AddNode
          (AlarmSagittifoliaFenceSystem *this,PlantAlarmSagittifolia *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  PlantSpartanBamboo *this_00;
  long lVar4;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  getNearestPlants(this,param_1,(vector *)local_20);
  uVar1 = local_20[0];
  puVar3 = (undefined8 *)FUN_03c17ee4(local_20[0],0);
  this_00 = (PlantSpartanBamboo *)*puVar3;
  if (this_00 != (PlantSpartanBamboo *)0x0) {
    puVar3 = (undefined8 *)FUN_03c17ee4(uVar1,1);
    if ((PlantAlarmSagittifolia *)*puVar3 != (PlantAlarmSagittifolia *)0x0) {
      removeFenceBetweenPlants
                (this,(PlantAlarmSagittifolia *)this_00,(PlantAlarmSagittifolia *)*puVar3);
      puVar3 = (undefined8 *)FUN_03c17ee4(local_20[0],0);
      this_00 = (PlantSpartanBamboo *)*puVar3;
    }
  }
  lVar4 = 0;
  while( true ) {
    if ((this_00 != (PlantSpartanBamboo *)0x0) &&
       (iVar2 = PlantSpartanBamboo::getState(this_00), iVar2 == 4)) {
      puVar3 = (undefined8 *)FUN_03c17ee4(local_20[0],lVar4);
      addFence(this,(PlantAlarmSagittifolia *)*puVar3,param_1);
    }
    if (lVar4 != 0) break;
    lVar4 = 1;
    puVar3 = (undefined8 *)FUN_03c17ee4(local_20[0]);
    this_00 = (PlantSpartanBamboo *)*puVar3;
  }
  std::vector<PlantAlarmSagittifolia*,std::allocator<PlantAlarmSagittifolia*>>::~vector
            ((vector<PlantAlarmSagittifolia*,std::allocator<PlantAlarmSagittifolia*>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::Update() */

void __thiscall AlarmSagittifoliaFenceSystem::Update(AlarmSagittifoliaFenceSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtr *this_01;
  RtMixedPtrBase *this_02;
  RtWeakPtr<Sexy::ResourceInfo> *this_03;
  PlantAlarmSagittifolia *extraout_x0;
  float fVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      fVar3 = (float)PVZ_T();
      this_01 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if (fVar3 <= *(float *)(this_01 + 8)) break;
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
      if (bVar1) {
        this_02 = (RtMixedPtrBase *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        cVar2 = Sexy::RtMixedPtrBase::IsValid(this_02);
        if (cVar2 != '\0') {
          this_03 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_03);
          nop();
          AddNode(this,extraout_x0);
        }
      }
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::
                 vector<AlarmSagittifoliaFenceSystem::DelayAction,std::allocator<AlarmSagittifoliaFenceSystem::DelayAction>>
                 ::erase((vector<AlarmSagittifoliaFenceSystem::DelayAction,std::allocator<AlarmSagittifoliaFenceSystem::DelayAction>>
                          *)this_00,local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    FUN_03c19dcc((__normal_iterator *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaFenceSystem::RemoveNode(PlantAlarmSagittifolia*) */

void __thiscall
AlarmSagittifoliaFenceSystem::RemoveNode
          (AlarmSagittifoliaFenceSystem *this,PlantAlarmSagittifolia *param_1)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  ElectricCurrantFence *pEVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  PlantAlarmSagittifolia *pPVar8;
  Point aPStack_40 [8];
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  getNearestPlants(this,param_1,(vector *)local_20);
  Sexy::Point::Point(aPStack_40,*(int *)(*(long *)(param_1 + 0x10) + 0x114),
                     *(int *)(*(long *)(param_1 + 0x10) + 0x110));
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  do {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_28);
    if (!bVar1) {
      lVar6 = 0;
      uVar7 = local_20[0];
      while( true ) {
        puVar5 = (undefined8 *)FUN_03c17ee4(uVar7,lVar6);
        if ((PlantAlarmSagittifolia *)*puVar5 != (PlantAlarmSagittifolia *)0x0) {
          removeFenceBetweenPlants(this,(PlantAlarmSagittifolia *)*puVar5,param_1);
          uVar7 = local_20[0];
        }
        if (lVar6 != 0) break;
        lVar6 = 1;
      }
      puVar5 = (undefined8 *)FUN_03c17ee4(uVar7,0);
      pPVar8 = (PlantAlarmSagittifolia *)*puVar5;
      if (pPVar8 != (PlantAlarmSagittifolia *)0x0) {
        puVar5 = (undefined8 *)FUN_03c17ee4(uVar7,lVar6);
        if ((PlantAlarmSagittifolia *)*puVar5 != (PlantAlarmSagittifolia *)0x0) {
          addFence(this,pPVar8,(PlantAlarmSagittifolia *)*puVar5);
        }
      }
      std::vector<PlantAlarmSagittifolia*,std::allocator<PlantAlarmSagittifolia*>>::~vector
                ((vector<PlantAlarmSagittifolia*,std::allocator<PlantAlarmSagittifolia*>> *)local_20
                );
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
    if (cVar2 == '\0') {
LAB_03c211c4:
      FUN_03c19ad8((__normal_iterator *)&local_38);
    }
    else {
      pEVar4 = (ElectricCurrantFence *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      Sexy::Point::Point((Point *)&local_28,(TPoint *)aPStack_40);
      cVar2 = ElectricCurrantFence::HasNode(pEVar4,(Point *)&local_28);
      if (cVar2 == '\0') goto LAB_03c211c4;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_30);
      local_38 = removeFence(this,(Point *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  } while( true );
}

