// Class: GridItemPlank


/* GridItemPlank::~GridItemPlank() */

void __thiscall GridItemPlank::~GridItemPlank(GridItemPlank *this)

{
  *(undefined ***)this = &PTR_GetClass_067814b0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemPlank_06781748;
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemPlank::~GridItemPlank() */

void __thiscall GridItemPlank::~GridItemPlank(GridItemPlank *this)

{
  ~GridItemPlank(this + -0x10);
  return;
}


/* GridItemPlank::~GridItemPlank() */

void __thiscall GridItemPlank::~GridItemPlank(GridItemPlank *this)

{
  ~GridItemPlank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemPlank::~GridItemPlank() */

void __thiscall GridItemPlank::~GridItemPlank(GridItemPlank *this)

{
  ~GridItemPlank(this + -0x10);
  return;
}


/* GridItemPlank::GridItemPlank() */

void __thiscall GridItemPlank::GridItemPlank(GridItemPlank *this)

{
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_067814b0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemPlank_06781748;
  return;
}


/* GridItemPlank::StaticNew() */

GridItemPlank * GridItemPlank::StaticNew(void)

{
  GridItemPlank *this;
  
  this = ::operator_new(0x198);
  GridItemPlank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlank::StaticClassInit() */

void GridItemPlank::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemPlank");
    (*pcVar2)(plVar1,asStack_10,FUN_03e02e74,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPlank::StaticGetClass() */

long * GridItemPlank::StaticGetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemPlank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPlank::GetClass() const */

long * GridItemPlank::GetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemPlank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlank::CalcRenderOrder() const */

void GridItemPlank::CalcRenderOrder(void)

{
  long lVar1;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  Board::MakeGroundRenderOrder(local_c,0);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GridItemPlank::CalcRenderOrder() const */

void __thiscall GridItemPlank::CalcRenderOrder(GridItemPlank *this)

{
  CalcRenderOrder();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlank::AddToRenderQueue(RenderQueue*) */

void __thiscall GridItemPlank::AddToRenderQueue(GridItemPlank *this,RenderQueue *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_54;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = (**(code **)(*(long *)this + 0x170))();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x90);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<GridItemPlank,void(BoardEntity::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,uVar2,aDStack_38);
  cVar1 = (**(code **)(*(long *)this + 0x98))(this);
  if (cVar1 != '\0') {
    GridItem::GetGridLocation();
    uVar2 = Board::MakeGroundRenderOrder(local_54 + -6,0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,RealObject::DrawShadow);
    Sexy::Delegate1<Sexy::Graphics*>::Delegate1<GridItemPlank,void(RealObject::*)(Sexy::Graphics*)>
              (aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,uVar2,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlank::onDraw(Sexy::Graphics*) */

void __thiscall GridItemPlank::onDraw(GridItemPlank *this,Graphics *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  float fVar5;
  float fVar6;
  int local_10;
  uint local_c;
  CachedResourcePtr<Sexy::Image> *this_00;
  
  lVar1 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  iVar2 = BoardTransforms::GridToBoardSpaceX(local_10);
  GridItem::GetGridLocation();
  iVar3 = BoardTransforms::GridToBoardSpaceY(local_c);
  GridItem::GetGridLocation();
  if ((local_c & 1) == 0) {
    this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06adc150;
  }
  else {
    this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06adc128;
  }
  pIVar4 = (Image *)CachedResourcePtr<Sexy::Image>::operator->(this_00);
  fVar5 = (float)FUN_03e02ccc((float)iVar2 - 52.0);
  fVar6 = (float)FUN_03e02ccc((float)iVar3 - 68.0);
  Sexy::Graphics::DrawImage(param_1,pIVar4,(int)fVar5,(int)fVar6);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlank::onDrawShadow(Sexy::Graphics*) */

void __thiscall GridItemPlank::onDrawShadow(GridItemPlank *this,Graphics *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  float fVar5;
  float fVar6;
  int local_10;
  uint local_c;
  CachedResourcePtr<Sexy::Image> *this_00;
  
  lVar1 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  iVar2 = BoardTransforms::GridToBoardSpaceX(local_10);
  GridItem::GetGridLocation();
  iVar3 = BoardTransforms::GridToBoardSpaceY(local_c);
  GridItem::GetGridLocation();
  if ((local_c & 1) == 0) {
    this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06adc0d8;
  }
  else {
    this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06adc100;
  }
  pIVar4 = (Image *)CachedResourcePtr<Sexy::Image>::operator->(this_00);
  fVar5 = (float)FUN_03e02ccc((float)iVar2 - 42.0);
  fVar6 = (float)FUN_03e02ccc((float)iVar3 - 90.0);
  Sexy::Graphics::DrawImage(param_1,pIVar4,(int)fVar5,(int)fVar6);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

