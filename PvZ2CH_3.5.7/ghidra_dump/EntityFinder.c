// Class: EntityFinder


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridIcelotusDropwater* EntityFinder::GetGridItemAt<GridIcelotusDropwater>(int, int) */

GridIcelotusDropwater * EntityFinder::GetGridItemAt<GridIcelotusDropwater>(int param_1,int param_2)

{
  bool bVar1;
  GridIcelotusDropwater *extraout_x0;
  GridIcelotusDropwater *pGVar2;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  GetEntitiesAtGridSquare(avStack_20,4,param_1,param_2);
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
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    nop();
    pGVar2 = extraout_x0;
    if (extraout_x0 != (GridIcelotusDropwater *)0x0) goto LAB_03c8a440;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  pGVar2 = (GridIcelotusDropwater *)0x0;
LAB_03c8a440:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pGVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::CalcAroundGrids(Sexy::Point) */

void __thiscall
EntityFinder::CalcAroundGrids
          (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,EntityFinder *this
          )

{
  char cVar1;
  int *piVar2;
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  piVar2 = &DAT_06b229a0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  do {
    while( true ) {
      Sexy::Point::Point(aPStack_18,*(int *)this + *piVar2,*(int *)(this + 4) + piVar2[1]);
      Sexy::Point::Point(aPStack_10,(TPoint *)aPStack_18);
      cVar1 = CheckGridValid(aPStack_10);
      if (cVar1 == '\0') break;
      piVar2 = piVar2 + 2;
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,aPStack_18);
      if (piVar2 == (int *)&DAT_06b229e0) goto LAB_047444c4;
    }
    piVar2 = piVar2 + 2;
  } while (piVar2 != (int *)&DAT_06b229e0);
LAB_047444c4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::PullFirstMatchingEntity(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   int, bool) */

void EntityFinder::PullFirstMatchingEntity(vector *param_1,int param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 < 0) || (iVar1 = BoardConstants::NUMBER_OF_ROWS(), iVar1 <= param_2)) {
    uVar7 = *(undefined8 *)param_1;
    uVar8 = *(undefined8 *)(param_1 + 8);
LAB_047446bc:
    lVar5 = FUN_047431a4(uVar7,uVar8);
    if ((lVar5 == 0) || (!param_3)) {
      uVar7 = 0;
      goto LAB_04744684;
    }
    lVar5 = 0;
  }
  else {
    uVar6 = 0;
    iVar1 = -1;
    while( true ) {
      uVar7 = *(undefined8 *)param_1;
      uVar8 = *(undefined8 *)(param_1 + 8);
      uVar3 = FUN_047431a4(uVar7,uVar8);
      if ((uVar3 <= uVar6) || (iVar1 != -1)) break;
      puVar4 = (undefined8 *)FUN_047431b0(uVar7,uVar6);
      iVar2 = SharkMinion::getRow((SharkMinion *)*puVar4);
      iVar1 = (int)uVar6;
      if (param_2 != iVar2) {
        iVar1 = -1;
      }
      uVar6 = uVar6 + 1;
    }
    lVar5 = (long)iVar1;
    if (iVar1 == -1) goto LAB_047446bc;
  }
  puVar4 = (undefined8 *)FUN_047431b0(uVar7,lVar5);
  uVar7 = *puVar4;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_18 = __gnu_cxx::
             __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
             ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_20,lVar5);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,local_10);
LAB_04744684:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::GetEntities(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   BoardEntityTypeFlag, Sexy::Event1wRet<3, bool, BoardEntity*> const&) */

void EntityFinder::GetEntities
               (vector<BoardEntity*,std::allocator<BoardEntity*>> *param_1,undefined4 param_2,
               Event1wRet<3,bool,BoardEntity*> *param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  BoardEntity *pBVar4;
  PVZDB *pPVar5;
  RtDbTable *pRVar6;
  BoardEntity *extraout_x0;
  BoardEntity *extraout_x0_00;
  BoardEntity *extraout_x0_01;
  vector *pvVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int extraout_w1;
  int extraout_w1_00;
  int iVar11;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  int extraout_w1_04;
  int extraout_w1_05;
  int extraout_w1_06;
  int extraout_w1_07;
  int extraout_w1_08;
  ulong uVar12;
  GameObject *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  ResourceInfo *local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = TestFlag<VaseFlags>(param_2,2);
  if (bVar1) {
    uVar12 = 0;
    pvVar7 = (vector *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
    std::vector<Zombie*,std::allocator<Zombie*>>::vector
              ((vector<Zombie*,std::allocator<Zombie*>> *)&local_28,pvVar7);
    uVar3 = local_28;
    lVar8 = FUN_04743190(local_28,local_20);
    if (lVar8 != 0) {
      do {
        puVar9 = (undefined8 *)FUN_0474319c(uVar3,uVar12);
        this = (GameObject *)*puVar9;
        cVar2 = GameObject::IsDestroyed(this);
        if ((cVar2 == '\0') &&
           (cVar2 = Sexy::Event1wRet<3,bool,BoardEntity*>::operator()(param_3,(BoardEntity *)this),
           cVar2 != '\0')) {
          local_30 = (ResourceInfo *)this;
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    (param_1,(BoardEntity **)&local_30);
        }
        uVar3 = local_28;
        uVar12 = uVar12 + 1;
        uVar10 = FUN_04743190(local_28,local_20);
      } while (uVar12 < uVar10);
    }
    std::vector<Zombie*,std::allocator<Zombie*>>::~vector
              ((vector<Zombie*,std::allocator<Zombie*>> *)&local_28);
  }
  bVar1 = TestFlag<VaseFlags>(param_2,4);
  if (bVar1) {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable((Iterator *)&local_28,uVar3,0x2f);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_28), bVar1) {
      pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      pRVar6 = (RtDbTable *)PVZDB::GetTable(pPVar5,0x2f);
      Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_28);
      Sexy::RtDbTable::GetObjectForId(pRVar6,(RtId *)&local_30);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_30);
      cVar2 = Sexy::Event1wRet<3,bool,BoardEntity*>::operator()(param_3,extraout_x0_01);
      iVar11 = extraout_w1_07;
      if (cVar2 != '\0') {
        local_30 = (ResourceInfo *)extraout_x0_01;
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  (param_1,(BoardEntity **)&local_30);
        iVar11 = extraout_w1_08;
      }
      Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_28,iVar11);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_28);
  }
  bVar1 = TestFlag<VaseFlags>(param_2,1);
  if (bVar1) {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable((Iterator *)&local_28,uVar3,0x2c);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_28), bVar1) {
      pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      pRVar6 = (RtDbTable *)PVZDB::GetTable(pPVar5,0x2c);
      Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_28);
      Sexy::RtDbTable::GetObjectForId(pRVar6,(RtId *)&local_30);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_30);
      iVar11 = extraout_w1_04;
      if ((extraout_x0_00[0x118] != (BoardEntity)0x0) &&
         (cVar2 = Sexy::Event1wRet<3,bool,BoardEntity*>::operator()(param_3,extraout_x0_00),
         iVar11 = extraout_w1_05, cVar2 != '\0')) {
        local_30 = (ResourceInfo *)extraout_x0_00;
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  (param_1,(BoardEntity **)&local_30);
        iVar11 = extraout_w1_06;
      }
      Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_28,iVar11);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_28);
  }
  bVar1 = TestFlag<VaseFlags>(param_2,0x10);
  if (bVar1) {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable((Iterator *)&local_28,uVar3,0x2d);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_28), bVar1) {
      pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      pRVar6 = (RtDbTable *)PVZDB::GetTable(pPVar5,0x2d);
      Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_28);
      Sexy::RtDbTable::GetObjectForId(pRVar6,(RtId *)&local_30);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_30);
      cVar2 = FUN_0474318c(extraout_x0[0xac]);
      iVar11 = extraout_w1_01;
      if ((cVar2 != '\0') &&
         (cVar2 = Sexy::Event1wRet<3,bool,BoardEntity*>::operator()(param_3,extraout_x0),
         iVar11 = extraout_w1_02, cVar2 != '\0')) {
        local_30 = (ResourceInfo *)extraout_x0;
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  (param_1,(BoardEntity **)&local_30);
        iVar11 = extraout_w1_03;
      }
      Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_28,iVar11);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_28);
  }
  bVar1 = TestFlag<VaseFlags>(param_2,8);
  if (bVar1) {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable((Iterator *)&local_28,uVar3,0x2a);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_28), bVar1) {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)&local_30);
      Sexy::RtId::~RtId((RtId *)&local_30);
      pBVar4 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = Sexy::Event1wRet<3,bool,BoardEntity*>::operator()(param_3,pBVar4);
      if (cVar2 != '\0') {
        local_30 = (ResourceInfo *)pBVar4;
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  (param_1,(BoardEntity **)&local_30);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_28,extraout_w1_00);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_28);
  }
  bVar1 = TestFlag<VaseFlags>(param_2,0x20);
  if (bVar1) {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable((Iterator *)&local_28,uVar3,0x28);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_28), bVar1) {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)&local_30);
      Sexy::RtId::~RtId((RtId *)&local_30);
      local_30 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
      cVar2 = Sexy::Event1wRet<3,bool,BoardEntity*>::operator()(param_3,(BoardEntity *)local_30);
      if (cVar2 != '\0') {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  (param_1,(BoardEntity **)&local_30);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_28);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::GetEntities(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   BoardEntityTypeFlag) */

void EntityFinder::GetEntities(undefined8 param_1,undefined8 param_2)

{
  Event1wRet<3,bool,BoardEntity*> aEStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_28);
  GetEntities(param_1,param_2,aEStack_28);
  Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::GetEntitiesWithinCircle(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   BoardEntityTypeFlag, Sexy::SexyVector3 const&, float) */

void EntityFinder::GetEntitiesWithinCircle
               (float param_1_00,undefined8 param_1,undefined4 param_3,SexyVector3 *param_4)

{
  EntitySearch_WithinRadius aEStack_80 [16];
  CBMemberTranslatorX aCStack_70 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_58 [32];
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntitySearch_WithinRadius::EntitySearch_WithinRadius(aEStack_80,param_4,param_1_00);
  Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_80,EntitySearch_WithinRadius::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_WithinRadius,bool(EntitySearch_WithinRadius::*)(BoardEntity*)>
            (aDStack_38,aCStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  GetEntities(param_1,param_3,aEStack_58);
  Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::GetEntitiesWithinCircle2D(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&, BoardEntityTypeFlag, Sexy::SexyVector2 const&, float) */

void EntityFinder::GetEntitiesWithinCircle2D
               (float param_1_00,undefined8 param_1,undefined4 param_3,SexyVector2 *param_4)

{
  EntitySearch_WithinRadius2D aEStack_80 [16];
  CBMemberTranslatorX aCStack_70 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_58 [32];
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntitySearch_WithinRadius2D::EntitySearch_WithinRadius2D(aEStack_80,param_4,param_1_00);
  Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_80,EntitySearch_WithinRadius2D::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_WithinRadius2D,bool(EntitySearch_WithinRadius2D::*)(BoardEntity*)>
            (aDStack_38,aCStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  GetEntities(param_1,param_3,aEStack_58);
  Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::GetEntitiesInRectangle(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   BoardEntityTypeFlag, Sexy::TRect<int> const&) */

void EntityFinder::GetEntitiesInRectangle(undefined8 param_1,undefined4 param_2,TRect *param_3)

{
  EntitySearch_InGridSquares aEStack_80 [16];
  CBMemberTranslatorX aCStack_70 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_58 [32];
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntitySearch_InGridSquares::EntitySearch_InGridSquares(aEStack_80,param_3);
  Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_80,EntitySearch_InRectangle::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_InRectangle,bool(EntitySearch_InRectangle::*)(BoardEntity*)>
            (aDStack_38,aCStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  GetEntities(param_1,param_2,aEStack_58);
  Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::GetEntitiesOnBoard(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   BoardEntityTypeFlag) */

void EntityFinder::GetEntitiesOnBoard(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  Insets aIStack_90 [16];
  EntitySearch_InGridSquares aEStack_80 [16];
  CBMemberTranslatorX aCStack_70 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_58 [32];
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  Sexy::Insets::Insets(aIStack_90,0,0,iVar1,iVar2);
  EntitySearch_InGridSquares::EntitySearch_InGridSquares(aEStack_80,(TRect *)aIStack_90);
  Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_80,EntitySearch_InGridSquares::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_InGridSquares,bool(EntitySearch_InGridSquares::*)(BoardEntity*)>
            (aDStack_38,aCStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  GetEntities(param_1,param_2,aEStack_58);
  Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::GetEntitiesInGridSquares(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   BoardEntityTypeFlag, Sexy::TRect<int> const&) */

void EntityFinder::GetEntitiesInGridSquares(undefined8 param_1,undefined4 param_2,TRect *param_3)

{
  EntitySearch_InGridSquares aEStack_80 [16];
  CBMemberTranslatorX aCStack_70 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_58 [32];
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntitySearch_InGridSquares::EntitySearch_InGridSquares(aEStack_80,param_3);
  Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_80,EntitySearch_InGridSquares::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_InGridSquares,bool(EntitySearch_InGridSquares::*)(BoardEntity*)>
            (aDStack_38,aCStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  GetEntities(param_1,param_2,aEStack_58);
  Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::GetEntitiesAtGridSquare(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   BoardEntityTypeFlag, int, int) */

void EntityFinder::GetEntitiesAtGridSquare
               (undefined8 param_1,undefined4 param_2,int param_3,int param_4)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,param_3,param_4,1,1);
  GetEntitiesInGridSquares(param_1,param_2,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::EntityFinderGridspace(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   BoardEntityTypeFlag, std::vector<Sexy::TRect<int>, std::allocator<Sexy::TRect<int> > > const&,
   EntityFinder::BoardEntitySorter*) */

void __thiscall
EntityFinder::EntityFinderGridspace
          (EntityFinder *this,undefined4 param_2,undefined8 *param_3,BoardEntitySorter *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  BoardEntitySorter *local_68 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined1 auStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_68[0] = param_4;
  local_58 = FUN_04743f90(*param_3);
  local_50 = FUN_04743fe0(param_3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
    GetEntitiesInGridSquares(avStack_38,param_2,uVar2);
    if (local_68[0] != (BoardEntitySorter *)0x0) {
      uVar2 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_38);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_38);
      local_48 = 0x10;
      local_40 = 1;
      std::
      bind<bool(EntityFinder::BoardEntitySorter::*)(BoardEntity*,BoardEntity*)const,EntityFinder::BoardEntitySorter*&,std::_Placeholder<1>const&,std::_Placeholder<2>const&>
                ((_func_bool_BoardEntity_ptr_BoardEntity_ptr *)&local_48,local_68,
                 (_Placeholder *)&DAT_0576d300,(_Placeholder *)&DAT_0576d308);
      std::
      sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,std::_Bind<std::_Mem_fn<bool(EntityFinder::BoardEntitySorter::*)(BoardEntity*,BoardEntity*)const>(EntityFinder::BoardEntitySorter*,std::_Placeholder<1>,std::_Placeholder<2>)>>
                (uVar2,uVar3,auStack_20);
    }
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_38);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_38);
    uVar4 = std::
            __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                      ((TaskResource **)this);
    std::
    copy<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,std::back_insert_iterator<std::vector<BoardEntity*,std::allocator<BoardEntity*>>>>
              (uVar2,uVar3,uVar4);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::GetEntitiesTouchingRectangle(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&, BoardEntityTypeFlag, Sexy::TRect<int> const&, int, int) */

void EntityFinder::GetEntitiesTouchingRectangle
               (undefined8 param_1,undefined4 param_2,TRect *param_3,int param_4,int param_5)

{
  EntitySearch_InGridRows aEStack_90 [16];
  EntitySearch_InGridSquares aEStack_80 [16];
  CBMemberTranslatorX aCStack_70 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_58 [32];
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_4 == -1) {
    param_4 = BoardTransforms::BoardSpaceToGridYUnbounded(*(int *)(param_3 + 4));
  }
  if (param_5 == -1) {
    param_5 = BoardTransforms::BoardSpaceToGridYUnbounded
                        (*(int *)(param_3 + 4) + *(int *)(param_3 + 0xc));
  }
  Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_58);
  EntitySearch_InGridRows::EntitySearch_InGridRows(aEStack_90,param_4,param_5);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_90,EntitySearch_InGridRows::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_InGridRows,bool(EntitySearch_InGridRows::*)(BoardEntity*)>
            (aDStack_38,aCStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  EntitySearch_InGridSquares::EntitySearch_InGridSquares(aEStack_80,param_3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_80,EntitySearch_TouchingRectangle::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_TouchingRectangle,bool(EntitySearch_TouchingRectangle::*)(BoardEntity*)>
            (aDStack_38,aCStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  GetEntities(param_1,param_2,aEStack_58);
  Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::GetEntitiesTouchingRectangleWithoutGrid(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&, BoardEntityTypeFlag, Sexy::TRect<int> const&) */

void EntityFinder::GetEntitiesTouchingRectangleWithoutGrid
               (undefined8 param_1,undefined4 param_2,TRect *param_3)

{
  EntitySearch_InGridSquares aEStack_80 [16];
  CBMemberTranslatorX aCStack_70 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_58 [32];
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_58);
  EntitySearch_InGridSquares::EntitySearch_InGridSquares(aEStack_80,param_3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_80,EntitySearch_TouchingRectangle::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_TouchingRectangle,bool(EntitySearch_TouchingRectangle::*)(BoardEntity*)>
            (aDStack_38,aCStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  GetEntities(param_1,param_2,aEStack_58);
  Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::GetEntitiesTouchingPoint(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   BoardEntityTypeFlag, Sexy::SexyVector2 const&, int, int) */

void EntityFinder::GetEntitiesTouchingPoint
               (undefined8 param_1,undefined4 param_2,SexyVector2 *param_3,int param_4,int param_5)

{
  EntitySearch_TouchingPoint aEStack_88 [8];
  EntitySearch_InGridRows aEStack_80 [16];
  CBMemberTranslatorX aCStack_70 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_58 [32];
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_4 == -1) {
    param_4 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(param_3 + 4));
  }
  if (param_5 == -1) {
    param_5 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(param_3 + 4));
  }
  EntitySearch_InGridRows::EntitySearch_InGridRows(aEStack_80,param_4,param_5);
  Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_80,EntitySearch_InGridRows::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_InGridRows,bool(EntitySearch_InGridRows::*)(BoardEntity*)>
            (aDStack_38,aCStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  EntitySearch_TouchingPoint::EntitySearch_TouchingPoint(aEStack_88,param_3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_88,EntitySearch_TouchingPoint::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_TouchingPoint,bool(EntitySearch_TouchingPoint::*)(BoardEntity*)>
            (aDStack_38,aCStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  GetEntities(param_1,param_2,aEStack_58);
  Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::GetEntitiesTouchingCircle2D(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&, BoardEntityTypeFlag, Sexy::SexyVector2 const&, float, int, int) */

void EntityFinder::GetEntitiesTouchingCircle2D
               (float param_1_00,undefined8 param_1,undefined4 param_3,SexyVector2 *param_4,
               int param_5,int param_6)

{
  EntitySearch_TouchingCircle aEStack_90 [16];
  EntitySearch_InGridRows aEStack_80 [16];
  CBMemberTranslatorX aCStack_70 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_58 [32];
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_5 == -1) {
    param_5 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(param_4 + 4) - param_1_00);
  }
  if (param_6 == -1) {
    param_6 = BoardTransforms::BoardSpaceToGridYUnbounded(param_1_00 + *(float *)(param_4 + 4));
  }
  Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_58);
  EntitySearch_InGridRows::EntitySearch_InGridRows(aEStack_80,param_5,param_6);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_80,EntitySearch_InGridRows::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_InGridRows,bool(EntitySearch_InGridRows::*)(BoardEntity*)>
            (aDStack_38,aCStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  EntitySearch_TouchingCircle::EntitySearch_TouchingCircle(aEStack_90,param_4,param_1_00);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_90,EntitySearch_TouchingCircle::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_TouchingCircle,bool(EntitySearch_TouchingCircle::*)(BoardEntity*)>
            (aDStack_38,aCStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  GetEntities(param_1,param_3,aEStack_58);
  Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::GetEntitiesTouchingRay(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   BoardEntityTypeFlag, Sexy::SexyVector2 const&, Sexy::SexyVector2 const&, int, int) */

void EntityFinder::GetEntitiesTouchingRay
               (undefined8 param_1,undefined4 param_2,SexyVector2 *param_3,SexyVector2 *param_4,
               int param_5,int param_6)

{
  EntitySearch_InGridRows aEStack_98 [16];
  EntitySearch_TouchingRay aEStack_88 [24];
  CBMemberTranslatorX aCStack_70 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_58 [32];
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_5 == -1) {
    param_5 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(param_3 + 4));
  }
  if (param_6 == -1) {
    param_6 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(param_3 + 4));
  }
  Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_58);
  EntitySearch_InGridRows::EntitySearch_InGridRows(aEStack_98,param_5,param_6);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_98,EntitySearch_InGridRows::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_InGridRows,bool(EntitySearch_InGridRows::*)(BoardEntity*)>
            (aDStack_38,aCStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  EntitySearch_TouchingRay::EntitySearch_TouchingRay(aEStack_88,param_3,param_4);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_88,EntitySearch_TouchingRay::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_TouchingRay,bool(EntitySearch_TouchingRay::*)(BoardEntity*)>
            (aDStack_38,aCStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  GetEntities(param_1,param_2,aEStack_58);
  Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::GetEntitiesMatchingClass(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   BoardEntityTypeFlag, Sexy::RtClass*) */

void EntityFinder::GetEntitiesMatchingClass
               (undefined8 param_1,undefined4 param_2,rbtree_node *param_3)

{
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  arStack_78 [8];
  CBMemberTranslatorX aCStack_70 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_58 [32];
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_58);
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(arStack_78,param_3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)arStack_78,EntitySearch_MatchesClass::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_MatchesClass,bool(EntitySearch_MatchesClass::*)(BoardEntity*)>
            (aDStack_38,aCStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  GetEntities(param_1,param_2,aEStack_58);
  Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::GetEntitiesInRowMatchingClass(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&, BoardEntityTypeFlag, int, Sexy::RtClass*) */

void EntityFinder::GetEntitiesInRowMatchingClass
               (undefined8 param_1,undefined4 param_2,int param_3,rbtree_node *param_4)

{
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  arStack_88 [8];
  EntitySearch_InGridRows aEStack_80 [16];
  CBMemberTranslatorX aCStack_70 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_58 [32];
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_58);
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(arStack_88,param_4);
  EntitySearch_InGridRows::EntitySearch_InGridRows(aEStack_80,param_3,param_3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)arStack_88,EntitySearch_MatchesClass::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_MatchesClass,bool(EntitySearch_MatchesClass::*)(BoardEntity*)>
            (aDStack_38,aCStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_80,EntitySearch_InGridRows::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_InGridRows,bool(EntitySearch_InGridRows::*)(BoardEntity*)>
            (aDStack_38,aCStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  GetEntities(param_1,param_2,aEStack_58);
  Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::GetEntitiesAtGridSquareMatchingClass(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&, BoardEntityTypeFlag, int, int, Sexy::RtClass*) */

void EntityFinder::GetEntitiesAtGridSquareMatchingClass
               (undefined8 param_1,undefined4 param_2,int param_3,int param_4,rbtree_node *param_5)

{
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  arStack_88 [8];
  EntitySearch_InGridSquares aEStack_80 [16];
  Insets aIStack_70 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_58 [32];
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_58);
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(arStack_88,param_5);
  Sexy::Insets::Insets(aIStack_70,param_3,param_4,1,1);
  EntitySearch_InGridSquares::EntitySearch_InGridSquares(aEStack_80,(TRect *)aIStack_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)arStack_88,EntitySearch_MatchesClass::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_MatchesClass,bool(EntitySearch_MatchesClass::*)(BoardEntity*)>
            (aDStack_38,aIStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_80,EntitySearch_InGridSquares::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_InGridSquares,bool(EntitySearch_InGridSquares::*)(BoardEntity*)>
            (aDStack_38,aIStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  GetEntities(param_1,param_2,aEStack_58);
  Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::GetZombiesAtGridSquareWithType(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&, int, int, Sexy::RtWeakPtr<ZombieType const>) */

void EntityFinder::GetZombiesAtGridSquareWithType
               (undefined8 param_1,int param_2,int param_3,RtWeakPtrBase *param_4)

{
  ReceivedDataCallback aRStack_88 [8];
  EntitySearch_InGridSquares aEStack_80 [16];
  Insets aIStack_70 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_58 [32];
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_58);
  Sexy::Insets::Insets(aIStack_70,param_2,param_3,1,1);
  EntitySearch_InGridSquares::EntitySearch_InGridSquares(aEStack_80,(TRect *)aIStack_70);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aIStack_70,param_4);
  EntitySearch_MatchesZombieType::EntitySearch_MatchesZombieType
            ((EntitySearch_MatchesZombieType *)aRStack_88,aIStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)aEStack_80,EntitySearch_InGridSquares::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_InGridSquares,bool(EntitySearch_InGridSquares::*)(BoardEntity*)>
            (aDStack_38,aIStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (aRStack_88,EntitySearch_MatchesZombieType::Accept);
  Sexy::Delegate1wRet<bool,BoardEntity*>::
  Delegate1wRet<EntitySearch_MatchesZombieType,bool(EntitySearch_MatchesZombieType::*)(BoardEntity*)>
            (aDStack_38,aIStack_70);
  Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
  GetEntities(param_1,2,aEStack_58);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aRStack_88);
  Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::HasZombiesAtGridSquareWithType(int, int, Sexy::RtWeakPtr<ZombieType const>) */

void EntityFinder::HasZombiesAtGridSquareWithType
               (undefined4 param_1,undefined4 param_2,RtWeakPtrBase *param_3)

{
  int iVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,param_3);
  GetZombiesAtGridSquareWithType
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,param_1,
             param_2,aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  iVar1 = FUN_047431a4(local_20,local_18);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0 < iVar1);
}

