// Class: GridItemVanMist


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVanMist::registerForEvents() */

void __thiscall GridItemVanMist::registerForEvents(GridItemVanMist *this)

{
  undefined *puVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  Delegate0 aDStack_38 [48];
  long lStack_8;
  
  puVar1 = gMessageRouter;
  lStack_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GridItem::onGatherPlantingRestrictions);
  uStack_80 = uStack_58;
  uStack_90 = uStack_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<GridItem,void(GridItem::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&uStack_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GridItem::NotifyHoloEnd);
  Sexy::Delegate0::Delegate0<GridItem,void(GridItem::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&uStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyHoloEnd,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GridItem::GridItemDestroyedEntity);
  uStack_b0 = uStack_50;
  uStack_a8 = uStack_48;
  uStack_a0 = uStack_40;
  MessageRouter::
  Subscribe<GridItem*,Sexy::CBMemberTranslatorX<GridItem,void(GridItem::*)(GridItem*)>>
            ((MessageRouter *)puVar1,Message::GridItemDestroyedEntity,&uStack_b0);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemVanMist::onGridItemInitialize() */

void __thiscall GridItemVanMist::onGridItemInitialize(GridItemVanMist *this)

{
  GridItemAnimControllerProps *pGVar1;
  float fVar2;
  
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  pGVar1 = GridItem::GetProps<GridItemAnimControllerProps>();
  if (0.0 < *(float *)(this + 0x1b0)) {
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x1ac) = fVar2 + *(float *)(this + 0x1b0);
    return;
  }
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x1ac) = fVar2 + *(float *)(pGVar1 + 0xe8);
  return;
}


/* GridItemVanMist::CalcRenderOrder() const */

void __thiscall GridItemVanMist::CalcRenderOrder(GridItemVanMist *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(600000,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemVanMist::CalcRenderOrder() const */

void __thiscall GridItemVanMist::CalcRenderOrder(GridItemVanMist *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemVanMist::~GridItemVanMist() */

void __thiscall GridItemVanMist::~GridItemVanMist(GridItemVanMist *this)

{
  *(undefined ***)this = &PTR_GetClass_06a184f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemVanMist_06a187d0;
  GridItemAnimController::~GridItemAnimController((GridItemAnimController *)this);
  return;
}


/* non-virtual thunk to GridItemVanMist::~GridItemVanMist() */

void __thiscall GridItemVanMist::~GridItemVanMist(GridItemVanMist *this)

{
  ~GridItemVanMist(this + -0x10);
  return;
}


/* GridItemVanMist::~GridItemVanMist() */

void __thiscall GridItemVanMist::~GridItemVanMist(GridItemVanMist *this)

{
  ~GridItemVanMist(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemVanMist::~GridItemVanMist() */

void __thiscall GridItemVanMist::~GridItemVanMist(GridItemVanMist *this)

{
  ~GridItemVanMist(this + -0x10);
  return;
}


/* GridItemVanMist::GridItemVanMist() */

void __thiscall GridItemVanMist::GridItemVanMist(GridItemVanMist *this)

{
  GridItemAnimController::GridItemAnimController((GridItemAnimController *)this);
  *(undefined ***)this = &PTR_GetClass_06a184f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemVanMist_06a187d0;
  return;
}


/* GridItemVanMist::StaticNew() */

GridItemVanMist * GridItemVanMist::StaticNew(void)

{
  GridItemVanMist *this;
  
  this = ::operator_new(0x1b8);
  GridItemVanMist(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVanMist::StaticClassInit() */

void GridItemVanMist::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemVanMist");
    (*pcVar2)(plVar1,asStack_10,FUN_04f3d154,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemVanMist::StaticGetClass() */

long * GridItemVanMist::StaticGetClass(void)

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
  uVar2 = GridItemAnimController::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemVanMist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemVanMist::GetClass() const */

long * GridItemVanMist::GetClass(void)

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
  uVar2 = GridItemAnimController::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemVanMist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemVanMist::BlowMist() */

void __thiscall GridItemVanMist::BlowMist(GridItemVanMist *this)

{
  if (*(int *)(this + 0x1a8) != 3) {
    (**(code **)(*(long *)this + 0x2b8))();
  }
  return;
}


/* GridItemVanMist::Reset() */

void __thiscall GridItemVanMist::Reset(GridItemVanMist *this)

{
  GridItemAnimController::SetDuration((GridItemAnimController *)this,0.0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVanMist::KillPlants() */

void __thiscall GridItemVanMist::KillPlants(GridItemVanMist *this)

{
  bool bVar1;
  undefined4 uVar2;
  long *extraout_x0;
  code *pcVar3;
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  SharkMinion::getRow((SharkMinion *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  EntityFinder::GetEntitiesAtGridSquare(avStack_80,1,uVar2,uVar2);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    nop();
    if (extraout_x0 != (long *)0x0) {
      pcVar3 = *(code **)(*extraout_x0 + 0x120);
      Sexy::Point::Point(aPStack_90,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_88,local_84,aDStack_68,this,aPStack_90,0);
      (*pcVar3)(extraout_x0,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVanMist::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemVanMist::GatherPlantingRestrictions
          (GridItemVanMist *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = 0x81;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

