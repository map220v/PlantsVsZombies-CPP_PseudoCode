// Class: ToxicWaterGridItemPoisonMist


/* ToxicWaterGridItemPoisonMist::TurnToLoop() */

void __thiscall ToxicWaterGridItemPoisonMist::TurnToLoop(ToxicWaterGridItemPoisonMist *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x1a8) != 0) {
    *(undefined4 *)(this + 0x1a8) = 1;
    uVar1 = PVZ_T();
    *(undefined4 *)(this + 0x1b4) = uVar1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToxicWaterGridItemPoisonMist::CreatePoisonEffect() */

void ToxicWaterGridItemPoisonMist::CreatePoisonEffect(void)

{
  long *plVar1;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  pcVar2 = *(code **)(*plVar1 + 0x78);
  std::string::string(asStack_28,"buff");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (*pcVar2)(plVar1,asStack_28,1,0,avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  std::string::~string(asStack_28);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ToxicWaterGridItemPoisonMist::CalcRenderOrder() const */

void __thiscall ToxicWaterGridItemPoisonMist::CalcRenderOrder(ToxicWaterGridItemPoisonMist *this)

{
  Board::MakeRenderOrder(0x64960,*(undefined4 *)(this + 0x1b0),*(undefined4 *)(this + 0x1ac));
  return;
}


/* non-virtual thunk to ToxicWaterGridItemPoisonMist::CalcRenderOrder() const */

void __thiscall ToxicWaterGridItemPoisonMist::CalcRenderOrder(ToxicWaterGridItemPoisonMist *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToxicWaterGridItemPoisonMist::StaticClassInit() */

void ToxicWaterGridItemPoisonMist::StaticClassInit(void)

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
    std::string::string(asStack_10,"ToxicWaterGridItemPoisonMist");
    (*pcVar2)(plVar1,asStack_10,FUN_04edef24,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ToxicWaterGridItemPoisonMist::StaticGetClass() */

long * ToxicWaterGridItemPoisonMist::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ToxicWaterGridItemPoisonMist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ToxicWaterGridItemPoisonMist::GetClass() const */

long * ToxicWaterGridItemPoisonMist::GetClass(void)

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
  (*pcVar3)(plVar1,"ToxicWaterGridItemPoisonMist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToxicWaterGridItemPoisonMist::RecoverPlant(Plant*) */

void __thiscall
ToxicWaterGridItemPoisonMist::RecoverPlant(ToxicWaterGridItemPoisonMist *this,Plant *param_1)

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
    Sexy::OutputDebugStrF((wchar_t *)"ToxicWaterGridItemPoisonMist::RecoverPlant name = %s",uVar2);
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
/* ToxicWaterGridItemPoisonMist::OnCleanPoison(int, int, bool) */

void __thiscall
ToxicWaterGridItemPoisonMist::OnCleanPoison
          (ToxicWaterGridItemPoisonMist *this,int param_1,int param_2,bool param_3)

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
              ((wchar_t *)"ToxicWaterGridItemPoisonMist::OnCleanPoison x=%d y=%d",(ulong)local_10,
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
/* ToxicWaterGridItemPoisonMist::OnCreatePlant(Plant*) */

void __thiscall
ToxicWaterGridItemPoisonMist::OnCreatePlant(ToxicWaterGridItemPoisonMist *this,Plant *param_1)

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
                ((wchar_t *)"ToxicWaterGridItemPoisonMist::OnCreatePlant x=%d y=%d",(ulong)local_10,
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


/* ToxicWaterGridItemPoisonMist::ToxicWaterGridItemPoisonMist() */

void __thiscall
ToxicWaterGridItemPoisonMist::ToxicWaterGridItemPoisonMist(ToxicWaterGridItemPoisonMist *this)

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
  *(undefined ***)this = &PTR_GetClass_069fd270;
  *(undefined ***)(this + 0x10) = &PTR__ToxicWaterGridItemPoisonMist_069fd558;
  Sexy::Point::Point((Point *)(this + 0x1ac));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2b8);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<int,int,bool,Sexy::CBMemberTranslatorX<ToxicWaterGridItemPoisonMist,void(ToxicWaterGridItemPoisonMist::*)(int,int,bool)>>
            ((MessageRouter *)puVar1,Message::CleanPoison,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2c0);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ToxicWaterGridItemPoisonMist,void(ToxicWaterGridItemPoisonMist::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_70);
  return;
}


/* ToxicWaterGridItemPoisonMist::StaticNew() */

ToxicWaterGridItemPoisonMist * ToxicWaterGridItemPoisonMist::StaticNew(void)

{
  ToxicWaterGridItemPoisonMist *this;
  
  this = ::operator_new(0x1c0);
  ToxicWaterGridItemPoisonMist(this);
  return this;
}


/* ToxicWaterGridItemPoisonMist::~ToxicWaterGridItemPoisonMist() */

void __thiscall
ToxicWaterGridItemPoisonMist::~ToxicWaterGridItemPoisonMist(ToxicWaterGridItemPoisonMist *this)

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
  
  *(undefined ***)this = &PTR_GetClass_069fd270;
  *(undefined ***)(this + 0x10) = &PTR__ToxicWaterGridItemPoisonMist_069fd558;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2b8);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Unsubscribe<int,int,bool,Sexy::CBMemberTranslatorX<ToxicWaterGridItemPoisonMist,void(ToxicWaterGridItemPoisonMist::*)(int,int,bool)>>
            ((MessageRouter *)puVar1,Message::CleanPoison,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2c0);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Unsubscribe<Plant*,Sexy::CBMemberTranslatorX<ToxicWaterGridItemPoisonMist,void(ToxicWaterGridItemPoisonMist::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_70);
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to ToxicWaterGridItemPoisonMist::~ToxicWaterGridItemPoisonMist() */

void __thiscall
ToxicWaterGridItemPoisonMist::~ToxicWaterGridItemPoisonMist(ToxicWaterGridItemPoisonMist *this)

{
  ~ToxicWaterGridItemPoisonMist(this + -0x10);
  return;
}


/* ToxicWaterGridItemPoisonMist::~ToxicWaterGridItemPoisonMist() */

void __thiscall
ToxicWaterGridItemPoisonMist::~ToxicWaterGridItemPoisonMist(ToxicWaterGridItemPoisonMist *this)

{
  ~ToxicWaterGridItemPoisonMist(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ToxicWaterGridItemPoisonMist::~ToxicWaterGridItemPoisonMist() */

void __thiscall
ToxicWaterGridItemPoisonMist::~ToxicWaterGridItemPoisonMist(ToxicWaterGridItemPoisonMist *this)

{
  ~ToxicWaterGridItemPoisonMist(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToxicWaterGridItemPoisonMist::onGridItemInitialize() */

void __thiscall
ToxicWaterGridItemPoisonMist::onGridItemInitialize(ToxicWaterGridItemPoisonMist *this)

{
  BoardTransforms *this_00;
  PoisonMistTileSubSystem *pPVar1;
  ToxicWaterGridItemPoisonMistProps *pTVar2;
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
  pTVar2 = GridItem::GetProps<ToxicWaterGridItemPoisonMistProps>();
  uVar4 = FUN_04ede064(*(undefined4 *)(pTVar2 + 0xd0));
  *(undefined4 *)(this + 0x1b8) = uVar4;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToxicWaterGridItemPoisonMist::PoisonPlant(Plant*) */

void __thiscall
ToxicWaterGridItemPoisonMist::PoisonPlant(ToxicWaterGridItemPoisonMist *this,Plant *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ToxicWaterGridItemPoisonMistProps *pTVar3;
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
    pTVar3 = GridItem::GetProps<ToxicWaterGridItemPoisonMistProps>();
    fVar5 = (float)FUN_04ede064(*(undefined4 *)(pTVar3 + 0xd0));
    fVar6 = (float)FUN_04ede068(*(undefined4 *)(pTVar3 + 0xd4));
    Plant::StartLossLife(param_1,fVar5,fVar6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToxicWaterGridItemPoisonMist::DoPoisonMistEffect(Sexy::Point) */

void __thiscall
ToxicWaterGridItemPoisonMist::DoPoisonMistEffect(ToxicWaterGridItemPoisonMist *this,uint *param_2)

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
  lVar2 = FUN_04ede078(local_20,local_18);
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
                ((wchar_t *)"ToxicWaterGridItemPoisonMist::DoPoisonMistEffect x=%d y=%d",
                 (ulong)*param_2,(ulong)param_2[1]);
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
/* ToxicWaterGridItemPoisonMist::KillGridItem() */

void __thiscall ToxicWaterGridItemPoisonMist::KillGridItem(ToxicWaterGridItemPoisonMist *this)

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
  lVar1 = FUN_04ede078(local_20,local_18);
  if (lVar1 != 0) {
    FUN_04ede084(local_20,0);
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

