// Class: GridItemPoisonMist


/* GridItemPoisonMist::CalcRenderOrder() const */

void __thiscall GridItemPoisonMist::CalcRenderOrder(GridItemPoisonMist *this)

{
  Board::MakeRenderOrder(0x64960,*(undefined4 *)(this + 0x1b0),*(undefined4 *)(this + 0x1ac));
  return;
}


/* non-virtual thunk to GridItemPoisonMist::CalcRenderOrder() const */

void __thiscall GridItemPoisonMist::CalcRenderOrder(GridItemPoisonMist *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPoisonMist::StaticClassInit() */

void GridItemPoisonMist::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemPoisonMist");
    (*pcVar2)(plVar1,asStack_10,FUN_04edb710,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPoisonMist::StaticGetClass() */

long * GridItemPoisonMist::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemPoisonMist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPoisonMist::GetClass() const */

long * GridItemPoisonMist::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemPoisonMist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPoisonMist::RecoverPlant(Plant*) */

void __thiscall GridItemPoisonMist::RecoverPlant(GridItemPoisonMist *this,Plant *param_1)

{
  long lVar1;
  undefined8 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    Plant::GetType();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar2 = FUN_0547429c(lVar1 + 8);
    Sexy::OutputDebugStrF((wchar_t *)"GridItemPoisonMist::RecoverPlant name = %s",uVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Plant::EndCondition(param_1,0xf);
    Plant::EndLossLife(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPoisonMist::OnCleanPoison(int, int, bool) */

void __thiscall
GridItemPoisonMist::OnCleanPoison(GridItemPoisonMist *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  uint local_10;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_10,param_1,param_2);
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)(this + 0x1ac),(TPoint *)&local_10);
  if (cVar1 != '\0') {
    Sexy::OutputDebugStrF
              ((wchar_t *)"GridItemPoisonMist::OnCleanPoison x=%d y=%d",(ulong)local_10,
               (ulong)local_c);
    (**(code **)(*(long *)this + 0x230))(this);
    if (param_3) {
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPoisonMist::OnCreatePlant(Plant*) */

void __thiscall GridItemPoisonMist::OnCreatePlant(GridItemPoisonMist *this,Plant *param_1)

{
  char cVar1;
  BoardTransforms *this_00;
  uint local_10;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    this_00 = (BoardTransforms *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)param_1);
    BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
    cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)(this + 0x1ac),(TPoint *)&local_10);
    if (cVar1 != '\0') {
      Sexy::OutputDebugStrF
                ((wchar_t *)"GridItemPoisonMist::OnCreatePlant x=%d y=%d",(ulong)local_10,
                 (ulong)local_c);
      (**(code **)(*(long *)this + 0x2c8))(this,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPoisonMist::GridItemPoisonMist() */

void __thiscall GridItemPoisonMist::GridItemPoisonMist(GridItemPoisonMist *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_069fc1b0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemPoisonMist_069fc498;
  Sexy::Point::Point((Point *)(this + 0x1ac));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2b8);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<int,int,bool,Sexy::CBMemberTranslatorX<GridItemPoisonMist,void(GridItemPoisonMist::*)(int,int,bool)>>
            ((MessageRouter *)puVar1,Message::CleanPoison,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2c0);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<GridItemPoisonMist,void(GridItemPoisonMist::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_70);
  return;
}


/* GridItemPoisonMist::StaticNew() */

GridItemPoisonMist * GridItemPoisonMist::StaticNew(void)

{
  GridItemPoisonMist *this;
  
  this = ::operator_new(0x1c0);
  GridItemPoisonMist(this);
  return this;
}


/* GridItemPoisonMist::~GridItemPoisonMist() */

void __thiscall GridItemPoisonMist::~GridItemPoisonMist(GridItemPoisonMist *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  *(undefined ***)this = &PTR_GetClass_069fc1b0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemPoisonMist_069fc498;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2b8);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Unsubscribe<int,int,bool,Sexy::CBMemberTranslatorX<GridItemPoisonMist,void(GridItemPoisonMist::*)(int,int,bool)>>
            ((MessageRouter *)puVar1,Message::CleanPoison,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2c0);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Unsubscribe<Plant*,Sexy::CBMemberTranslatorX<GridItemPoisonMist,void(GridItemPoisonMist::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_70);
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemPoisonMist::~GridItemPoisonMist() */

void __thiscall GridItemPoisonMist::~GridItemPoisonMist(GridItemPoisonMist *this)

{
  ~GridItemPoisonMist(this + -0x10);
  return;
}


/* GridItemPoisonMist::~GridItemPoisonMist() */

void __thiscall GridItemPoisonMist::~GridItemPoisonMist(GridItemPoisonMist *this)

{
  ~GridItemPoisonMist(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemPoisonMist::~GridItemPoisonMist() */

void __thiscall GridItemPoisonMist::~GridItemPoisonMist(GridItemPoisonMist *this)

{
  ~GridItemPoisonMist(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPoisonMist::onGridItemInitialize() */

void __thiscall GridItemPoisonMist::onGridItemInitialize(GridItemPoisonMist *this)

{
  BoardTransforms *this_00;
  PoisonMistTileSubSystem *pPVar1;
  GridItemPoisonMistProps *pGVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 local_10;
  long local_8;
  
  *(undefined4 *)(this + 0x1a8) = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  *(undefined8 *)(this + 0x1ac) = local_10;
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x1b4) = uVar4;
  pPVar1 = Board::GetGameSubSystem<PoisonMistTileSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  pcVar3 = *(code **)(*(long *)pPVar1 + 0x90);
  Sexy::Point::Point((Point *)&local_10,(TPoint *)(this + 0x1ac));
  (*pcVar3)(pPVar1,(Point *)&local_10);
  pGVar2 = GridItem::GetProps<GridItemPoisonMistProps>();
  uVar4 = FUN_04eda778(*(undefined4 *)(pGVar2 + 0xd0));
  *(undefined4 *)(this + 0x1b8) = uVar4;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPoisonMist::PoisonPlant(Plant*) */

void __thiscall GridItemPoisonMist::PoisonPlant(GridItemPoisonMist *this,Plant *param_1)

{
  long lVar1;
  undefined8 uVar2;
  GridItemPoisonMistProps *pGVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    Plant::GetType();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar2 = FUN_0547429c(lVar1 + 8);
    Sexy::OutputDebugStrF((wchar_t *)"GridItemPoisonMist::PoisonPlant name = %s",uVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar4 = PVZ_EOT();
    Plant::ApplyCondition(uVar4,0,param_1,0xf);
    pGVar3 = GridItem::GetProps<GridItemPoisonMistProps>();
    fVar5 = (float)FUN_04eda778(*(undefined4 *)(pGVar3 + 0xd0));
    fVar6 = (float)FUN_04eda77c(*(undefined4 *)(pGVar3 + 0xd4));
    Plant::StartLossLife(param_1,fVar5,fVar6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPoisonMist::DoPoisonMistEffect(Sexy::Point) */

void __thiscall GridItemPoisonMist::DoPoisonMistEffect(GridItemPoisonMist *this,uint *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 extraout_x0;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,*param_2,
             param_2[1]);
  lVar2 = FUN_04eda78c(local_20,local_18);
  if (lVar2 != 0) {
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      nop();
      (**(code **)(*(long *)this + 0x2c8))(this,extraout_x0);
      Sexy::OutputDebugStrF
                ((wchar_t *)"GridItemPoisonMist::DoPoisonMistEffect x=%d y=%d",(ulong)*param_2,
                 (ulong)param_2[1]);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPoisonMist::onUpdate() */

void __thiscall GridItemPoisonMist::onUpdate(GridItemPoisonMist *this)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  undefined4 uVar4;
  Point aPStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x1a8);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 1) {
    cVar2 = TimeUtil::CheckTimeEclapse(*(float *)(this + 0x1b8),*(float *)(this + 0x1b4));
    if (cVar2 != '\0') {
      *(undefined4 *)(this + 0x1a8) = 2;
    }
  }
  else if (iVar1 == 2) {
    (**(code **)(*(long *)this + 0x2b8))
              (this,*(undefined4 *)(this + 0x1ac),*(undefined4 *)(this + 0x1b0),0);
  }
  else if (iVar1 == 0) {
    (**(code **)(*(long *)this + 0x2a8))();
    pcVar3 = *(code **)(*(long *)this + 0x2b0);
    Sexy::Point::Point(aPStack_10,(TPoint *)(this + 0x1ac));
    (*pcVar3)(this,aPStack_10);
    *(undefined4 *)(this + 0x1a8) = 1;
    uVar4 = PVZ_T();
    *(undefined4 *)(this + 0x1b4) = uVar4;
  }
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPoisonMist::KillGridItem() */

void __thiscall GridItemPoisonMist::KillGridItem(GridItemPoisonMist *this)

{
  long lVar1;
  undefined8 extraout_x0;
  PoisonMistTileSubSystem *pPVar2;
  code *pcVar3;
  Point aPStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,
             *(undefined4 *)(this + 0x1ac),*(undefined4 *)(this + 0x1b0));
  lVar1 = FUN_04eda78c(local_20,local_18);
  if (lVar1 != 0) {
    FUN_04eda798(local_20,0);
    nop();
    (**(code **)(*(long *)this + 0x2d0))(this,extraout_x0);
  }
  pPVar2 = Board::GetGameSubSystem<PoisonMistTileSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  pcVar3 = *(code **)(*(long *)pPVar2 + 0xa0);
  Sexy::Point::Point(aPStack_28,(TPoint *)(this + 0x1ac));
  (*pcVar3)(pPVar2,aPStack_28);
  GridItem::KillGridItem((GridItem *)this);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

