// Class: ZombossFireActionDefinition


/* ZombossFireActionDefinition::~ZombossFireActionDefinition() */

void __thiscall
ZombossFireActionDefinition::~ZombossFireActionDefinition(ZombossFireActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068c64e0;
  std::string::~string((string *)(this + 0x60));
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossFireActionDefinition::~ZombossFireActionDefinition() */

void __thiscall
ZombossFireActionDefinition::~ZombossFireActionDefinition(ZombossFireActionDefinition *this)

{
  ~ZombossFireActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* ZombossFireActionDefinition::ZombossFireActionDefinition() */

void __thiscall
ZombossFireActionDefinition::ZombossFireActionDefinition(ZombossFireActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined4 *)(this + 0x3c) = 5;
  *(undefined ***)this = &PTR_GetClass_068c64e0;
  *(undefined4 *)(this + 0x40) = 5;
  *(undefined4 *)(this + 0x44) = 1;
  *(undefined4 *)(this + 0x48) = 1;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0x40400000;
  *(undefined4 *)(this + 0x58) = 0x437a0000;
  Set8BytesTo0(this + 0x60);
  DVec2::DVec2((DVec2 *)(this + 0x68),1.0,1.0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFireActionDefinition::StaticClassInit() */

void ZombossFireActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossFireActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04738e44,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossFireActionDefinition::StaticGetClass() */

long * ZombossFireActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossFireActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossFireActionDefinition::GetClass() const */

long * ZombossFireActionDefinition::GetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossFireActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossFireActionDefinition::StaticNew() */

ZombossFireActionDefinition * ZombossFireActionDefinition::StaticNew(void)

{
  ZombossFireActionDefinition *this;
  
  this = ::operator_new(0x70);
  ZombossFireActionDefinition(this);
  return this;
}


/* ZombossFireActionDefinition::isCartGridSquare(Sexy::Point const&) const */

bool __thiscall
ZombossFireActionDefinition::isCartGridSquare(ZombossFireActionDefinition *this,Point *param_1)

{
  long lVar1;
  
  lVar1 = FUN_0473aa50(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
  return lVar1 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFireActionDefinition::getRocketTargetSquaresInRect(ZombieZombossMech*, Sexy::TRect<int>
   const&, std::vector<Sexy::Point, std::allocator<Sexy::Point> >&, Sexy::Delegate1wRet<bool,
   Sexy::Point const&>) const */

void __thiscall
ZombossFireActionDefinition::getRocketTargetSquaresInRect
          (ZombossFireActionDefinition *this,ZombieZombossMech *param_1,int *param_2,
          vector<Sexy::Point,std::allocator<Sexy::Point>> *param_3,
          Delegate1wRet<bool,SexyURL_const&> *param_5)

{
  char cVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int local_14;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear(param_3);
  local_10[0] = 0;
  piVar2 = eastl::max_alt<int>(local_10,param_2);
  iVar5 = *piVar2;
  while( true ) {
    local_10[0] = *param_2 + param_2[2];
    piVar2 = eastl::min_alt<int>((int *)(this + 0x3c),local_10);
    if (*piVar2 <= iVar5) break;
    local_10[0] = 0;
    piVar2 = eastl::max_alt<int>(local_10,param_2 + 1);
    iVar4 = *piVar2;
    while( true ) {
      local_14 = BoardConstants::NUMBER_OF_ROWS();
      local_10[0] = param_2[1] + param_2[3];
      piVar2 = eastl::min_alt<int>(&local_14,local_10);
      if (*piVar2 <= iVar4) break;
      Sexy::Point::Point((Point *)local_10,iVar5,iVar4);
      lVar3 = ZombieZombossMech::FindActiveRocketTargetingSquare(param_1,(Point *)local_10);
      if ((lVar3 == 0) &&
         (cVar1 = Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(param_5,(SexyURL *)local_10),
         cVar1 != '\0')) {
        iVar4 = iVar4 + 1;
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(param_3,(Point *)local_10);
      }
      else {
        iVar4 = iVar4 + 1;
      }
    }
    iVar5 = iVar5 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFireActionDefinition::pickRocketRailTargets(std::vector<Sexy::Point,
   std::allocator<Sexy::Point> >&, Sexy::Point) const */

void __thiscall
ZombossFireActionDefinition::pickRocketRailTargets
          (ZombossFireActionDefinition *this,
          vector<Sexy::Point,std::allocator<Sexy::Point>> *param_1,int *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  Point *pPVar6;
  ulong uVar7;
  undefined8 uVar8;
  Board *pBVar9;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  iVar4 = *param_3;
  Sexy::Point::Point((Point *)&local_30,iVar4,param_3[1]);
  while( true ) {
    pBVar9 = *(Board **)(gLawnApp + 0x9f0);
    cVar1 = FUN_04735b80(pBVar9 + 0xf8,pBVar9 + 0xfc,(Point *)&local_30);
    if ((cVar1 == '\0') ||
       (iVar3 = Board::GetGridSquareType(pBVar9,(int)local_30,local_30._4_4_), iVar3 != 4)) break;
    cVar1 = isCartGridSquare(this,(Point *)&local_30);
    if (cVar1 == '\0') {
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)&local_30);
    }
    else {
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(param_1,(Point *)&local_30);
    }
    iVar3 = local_30._4_4_ + 1;
    local_30 = CONCAT44(iVar3,(int)local_30);
    Sexy::Point::Point((Point *)&local_28,iVar4,iVar3);
    local_30 = local_28;
  }
  Sexy::Point::Point((Point *)&local_28,iVar4,param_3[1] + -1);
  while( true ) {
    pBVar9 = *(Board **)(gLawnApp + 0x9f0);
    local_30 = local_28;
    cVar1 = FUN_04735b80(pBVar9 + 0xf8,pBVar9 + 0xfc,(Point *)&local_30);
    if ((cVar1 == '\0') ||
       (iVar3 = Board::GetGridSquareType(pBVar9,(int)local_30,local_30._4_4_), iVar3 != 4)) break;
    cVar1 = isCartGridSquare(this,(Point *)&local_30);
    if (cVar1 == '\0') {
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)&local_30);
    }
    else {
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(param_1,(Point *)&local_30);
    }
    iVar3 = local_30._4_4_ + -1;
    local_30 = CONCAT44(iVar3,(int)local_30);
    Sexy::Point::Point((Point *)&local_28,iVar4,iVar3);
  }
  uVar7 = 0;
  iVar4 = FUN_04735be0(local_20,local_18);
  iVar4 = Sexy::Rand(iVar4);
  uVar8 = local_20;
  uVar5 = FUN_04735be0(local_20,local_18);
  if (uVar5 != 0) {
    do {
      if (iVar4 != (int)uVar7) {
        pPVar6 = (Point *)FUN_04735bec(uVar8,uVar7);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(param_1,pPVar6);
        uVar8 = local_20;
        uVar5 = FUN_04735be0(local_20,local_18);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  bVar2 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty(param_1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2 ^ 1);
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0473df34 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossFireActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombossFireActionDefinition::TryStartAction
          (ZombossFireActionDefinition *this,RtWeakPtrBase *param_2,RtObject *param_3)

{
  bool bVar1;
  ZombieZombossMech *pZVar2;
  ZombieWithActions *pZVar3;
  ZombossFireActionHandler *this_00;
  code *pcVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  pcVar4 = *(code **)(*(long *)this + 0x90);
  if (param_3 == (RtObject *)0x0) {
    pZVar2 = (ZombieZombossMech *)0x0;
  }
  else {
    pZVar2 = Sexy::RtObject::Cast<ZombieZombossMech>(param_3);
  }
  pZVar3 = (ZombieWithActions *)(*pcVar4)(this,pZVar2,avStack_20);
  bVar1 = ((ulong)pZVar3 & 0xff) != 0;
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,param_2);
    this_00 = ZombieWithActions::QueueAction<ZombossFireActionHandler>(pZVar3,aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    ZombossFireActionHandler::SetRocketTargets(this_00,(vector *)avStack_20);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFireActionDefinition::pickRocketTargets(ZombieZombossMech*, std::vector<Sexy::Point,
   std::allocator<Sexy::Point> >&) const */

void __thiscall
ZombossFireActionDefinition::pickRocketTargets
          (ZombossFireActionDefinition *this,ZombieZombossMech *param_1,vector *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  int *piVar7;
  Point *pPVar8;
  TPoint *pTVar9;
  ulong uVar10;
  undefined8 uVar11;
  float fVar12;
  int local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  Insets aIStack_e0 [4];
  int local_dc;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  Delegate1wRet<bool,Sexy::Point_const&> aDStack_b8 [48];
  undefined8 local_88 [6];
  Delegate1wRet<bool,Sexy::Point_const&> aDStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets(aIStack_e0,*(int *)(this + 0x38),local_fc + -1,*(int *)(this + 0x3c) + 1,2);
  local_dc = local_dc - *(int *)(this + 0x40);
  local_d4 = local_d4 + *(int *)(this + 0x40) * 2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d0);
  iVar1 = *(int *)(this + 0x48);
  if (0 < iVar1) {
    local_88[0] = std::
                  __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                            ((TaskResource **)FUN_0473a988);
    Sexy::Delegate1wRet<bool,Sexy::Point_const&>::Delegate1wRet<bool(*)(Sexy::Point_const&)>
              (aDStack_b8,(CBFunctionTranslatorX *)local_88);
    FUN_03c46bc4(aDStack_58,0,iVar1,aDStack_b8);
    FUN_0473ae08((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d0,
                 aDStack_58);
    FUN_03c4937c(aDStack_58);
  }
  iVar1 = *(int *)(this + 0x44);
  if (0 < iVar1) {
    local_88[0] = std::
                  __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                            ((TaskResource **)FUN_0473a8c8);
    Sexy::Delegate1wRet<bool,Sexy::Point_const&>::Delegate1wRet<bool(*)(Sexy::Point_const&)>
              (aDStack_b8,(CBFunctionTranslatorX *)local_88);
    FUN_03c46bc4(aDStack_58,1,iVar1,aDStack_b8);
    FUN_0473ae08((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d0,
                 aDStack_58);
    FUN_03c4937c(aDStack_58);
  }
  iVar1 = *(int *)(this + 0x4c);
  if (0 < iVar1) {
    local_88[0] = std::
                  __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                            ((TaskResource **)FUN_047360b4);
    Sexy::Delegate1wRet<bool,Sexy::Point_const&>::Delegate1wRet<bool(*)(Sexy::Point_const&)>
              (aDStack_b8,(CBFunctionTranslatorX *)local_88);
    FUN_03c46bc4(aDStack_58,2,iVar1,aDStack_b8);
    FUN_0473ae08((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d0,
                 aDStack_58);
    FUN_03c4937c(aDStack_58);
  }
  iVar1 = *(int *)(this + 0x50);
  if (0 < iVar1) {
    local_88[0] = std::
                  __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                            ((TaskResource **)FUN_0473bd38);
    Sexy::Delegate1wRet<bool,Sexy::Point_const&>::Delegate1wRet<bool(*)(Sexy::Point_const&)>
              (aDStack_b8,(CBFunctionTranslatorX *)local_88);
    FUN_03c46bc4(aDStack_58,3,iVar1,aDStack_b8);
    FUN_0473ae08((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d0,
                 aDStack_58);
    FUN_03c4937c(aDStack_58);
  }
  uVar10 = 0;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_88);
  uVar11 = local_d0;
  lVar3 = FUN_047359fc(local_d0,local_c8);
  if (lVar3 != 0) {
    do {
      lVar3 = FUN_04735a10(uVar11,uVar10);
      Sexy::Delegate1wRet<bool,Sexy::Point_const&>::Delegate1wRet
                (aDStack_58,(Delegate1wRet *)(lVar3 + 8));
      getRocketTargetSquaresInRect(this,param_1,aIStack_e0,lVar3 + 0x38,aDStack_58);
      uVar11 = local_d0;
      lVar3 = FUN_04735a10(local_d0,uVar10);
      lVar4 = FUN_04735be0(*(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(lVar3 + 0x40));
      if (lVar4 != 0) {
        ProbabilitySet<int>::AddItem
                  ((ProbabilitySet<int> *)local_88,(int)uVar10,*(int *)(lVar3 + 4));
        uVar11 = local_d0;
      }
      uVar10 = uVar10 + 1;
      uVar5 = FUN_047359fc(uVar11,local_c8);
    } while (uVar10 < uVar5);
  }
  local_f0 = CONCAT44(local_f0._4_4_,0x3f800000);
  local_e8 = ValueRange::GetRandomValue((ValueRange *)(this + 0x68));
  pfVar6 = eastl::max_alt<float>((float *)&local_f0,(float *)&local_e8);
  fVar12 = *pfVar6;
  lVar3 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)local_88);
  if (lVar3 != 0) {
    iVar1 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)local_88);
    piVar7 = (int *)FUN_04735a10(local_d0,(long)iVar1);
    if (*piVar7 == 2) {
      iVar1 = FUN_04735be0(*(undefined8 *)(piVar7 + 0xe),*(undefined8 *)(piVar7 + 0x10));
      iVar1 = Sexy::Rand(iVar1);
      pTVar9 = (TPoint *)FUN_04735bec(*(undefined8 *)(piVar7 + 0xe),(long)iVar1);
      Sexy::Point::Point((Point *)&local_e8,pTVar9);
      pickRocketRailTargets
                (this,param_2,
                 (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_e8);
    }
    else if (0 < (int)fVar12) {
      iVar1 = 0;
      do {
        lVar3 = FUN_04735be0(*(undefined8 *)(piVar7 + 0xe),*(undefined8 *)(piVar7 + 0x10));
        if (lVar3 == 0) break;
        iVar2 = Sexy::Rand((int)lVar3);
        iVar1 = iVar1 + 1;
        pPVar8 = (Point *)FUN_04735bec(*(undefined8 *)(piVar7 + 0xe),(long)iVar2);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_2,pPVar8);
        local_f8 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(piVar7 + 0xe));
        local_f0 = __gnu_cxx::
                   __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                   ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_f8,(long)iVar2);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_e8,(__normal_iterator *)&local_f0);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::erase
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(piVar7 + 0xe),
                   CONCAT44(uStack_e4,local_e8));
      } while (iVar1 != (int)fVar12);
    }
  }
  lVar3 = FUN_04735be0(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
  ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)local_88);
  FUN_0473a89c((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3 != 0);
  }
  return;
}

