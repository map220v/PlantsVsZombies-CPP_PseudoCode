// Class: GridItemHanabi


/* GridItemHanabi::~GridItemHanabi() */

void __thiscall GridItemHanabi::~GridItemHanabi(GridItemHanabi *this)

{
  *(undefined ***)this = &PTR_GetClass_06a03880;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHanabi_06a03b68;
  GridItemPoisonMist::~GridItemPoisonMist((GridItemPoisonMist *)this);
  return;
}


/* non-virtual thunk to GridItemHanabi::~GridItemHanabi() */

void __thiscall GridItemHanabi::~GridItemHanabi(GridItemHanabi *this)

{
  ~GridItemHanabi(this + -0x10);
  return;
}


/* GridItemHanabi::~GridItemHanabi() */

void __thiscall GridItemHanabi::~GridItemHanabi(GridItemHanabi *this)

{
  ~GridItemHanabi(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemHanabi::~GridItemHanabi() */

void __thiscall GridItemHanabi::~GridItemHanabi(GridItemHanabi *this)

{
  ~GridItemHanabi(this + -0x10);
  return;
}


/* GridItemHanabi::RecoverPlant(Plant*) */

void __thiscall GridItemHanabi::RecoverPlant(GridItemHanabi *this,Plant *param_1)

{
  if (param_1 != (Plant *)0x0) {
    Plant::EndLossLife(param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHanabi::StaticClassInit() */

void GridItemHanabi::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHanabi");
    (*pcVar2)(plVar1,asStack_10,FUN_04ef0c68,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHanabi::StaticGetClass() */

long * GridItemHanabi::StaticGetClass(void)

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
  uVar2 = GridItemPoisonMist::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHanabi",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHanabi::GetClass() const */

long * GridItemHanabi::GetClass(void)

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
  uVar2 = GridItemPoisonMist::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHanabi",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHanabi::GridItemHanabi() */

void __thiscall GridItemHanabi::GridItemHanabi(GridItemHanabi *this)

{
  GridItemPoisonMist::GridItemPoisonMist((GridItemPoisonMist *)this);
  *(undefined ***)this = &PTR_GetClass_06a03880;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHanabi_06a03b68;
  return;
}


/* GridItemHanabi::StaticNew() */

GridItemHanabi * GridItemHanabi::StaticNew(void)

{
  GridItemHanabi *this;
  
  this = ::operator_new(0x1c0);
  GridItemHanabi(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHanabi::OnCleanPoison(int, int, bool) */

void GridItemHanabi::OnCleanPoison(int param_1,int param_2,bool param_3)

{
  char cVar1;
  long *plVar2;
  uint local_10;
  uint local_c;
  long local_8;
  
  plVar2 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_10,param_2,(uint)param_3);
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)((long)plVar2 + 0x1ac),(TPoint *)&local_10);
  if (cVar1 != '\0') {
    Sexy::OutputDebugStrF
              ((wchar_t *)"GridItemPoisonMist::OnCleanPoison x=%d y=%d",(ulong)local_10,
               (ulong)local_c);
    (**(code **)(*plVar2 + 0x230))(plVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHanabi::CreatePoisonEffect() */

void GridItemHanabi::CreatePoisonEffect(void)

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
  std::string::string(asStack_28,"idle2");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHanabi::onGridItemInitialize() */

void __thiscall GridItemHanabi::onGridItemInitialize(GridItemHanabi *this)

{
  long lVar1;
  BoardTransforms *this_00;
  GridItemPoisonMistProps *pGVar2;
  undefined4 uVar3;
  undefined8 local_10;
  
  *(undefined4 *)(this + 0x1a8) = 0;
  lVar1 = ___stack_chk_guard;
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  *(undefined8 *)(this + 0x1ac) = local_10;
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x1b4) = uVar3;
  pGVar2 = GridItem::GetProps<GridItemPoisonMistProps>();
  uVar3 = FUN_04ef0910(*(undefined4 *)(pGVar2 + 0xd0));
  *(undefined4 *)(this + 0x1b8) = uVar3;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHanabi::PoisonPlant(Plant*) */

void __thiscall GridItemHanabi::PoisonPlant(GridItemHanabi *this,Plant *param_1)

{
  GridItemPoisonMistProps *pGVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 != (Plant *)0x0) {
    pGVar1 = GridItem::GetProps<GridItemPoisonMistProps>();
    fVar2 = (float)FUN_04ef0910(*(undefined4 *)(pGVar1 + 0xd0));
    fVar3 = (float)FUN_04ef0914(*(undefined4 *)(pGVar1 + 0xd4));
    Plant::StartLossLife(param_1,fVar2,fVar3);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHanabi::KillGridItem() */

void __thiscall GridItemHanabi::KillGridItem(GridItemHanabi *this)

{
  long lVar1;
  undefined8 extraout_x0;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,
             *(undefined4 *)(this + 0x1ac),*(undefined4 *)(this + 0x1b0));
  lVar1 = FUN_04ef0918(local_20,local_18);
  if (lVar1 != 0) {
    FUN_04ef0924(local_20,0);
    nop();
    (**(code **)(*(long *)this + 0x2d0))(this,extraout_x0);
  }
  GridItemPoisonMist::KillGridItem((GridItemPoisonMist *)this);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

