// Class: GridTargetAdaptor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridTargetAdaptor::isValidTargetPosition(Sexy::Point const&) */

void __thiscall GridTargetAdaptor::isValidTargetPosition(GridTargetAdaptor *this,Point *param_1)

{
  long lVar1;
  int local_10;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  BoardTransforms::BoardSpaceToGrid
            ((BoardTransforms *)(ulong)*(uint *)param_1,*(int *)(param_1 + 4),
             (int)___stack_chk_guard);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10 != -1 && local_c != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridTargetAdaptor::StaticClassInit() */

void GridTargetAdaptor::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridTargetAdaptor");
    (*pcVar2)(plVar1,asStack_10,FUN_03604454,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridTargetAdaptor::StaticGetClass() */

long * GridTargetAdaptor::StaticGetClass(void)

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
  uVar2 = CardTargetAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"GridTargetAdaptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridTargetAdaptor::GridTargetAdaptor() */

void __thiscall GridTargetAdaptor::GridTargetAdaptor(GridTargetAdaptor *this)

{
  CardTargetAdaptor::CardTargetAdaptor((CardTargetAdaptor *)this);
  *(undefined ***)this = &PTR_GetTargetAdaptorClass_066669f0;
  Sexy::Point::Point((Point *)(this + 0x18));
  Sexy::Insets::Insets((Insets *)(this + 0x20));
  return;
}


/* GridTargetAdaptor::StaticNew() */

GridTargetAdaptor * GridTargetAdaptor::StaticNew(void)

{
  GridTargetAdaptor *this;
  
  this = ::operator_new(0x30);
  GridTargetAdaptor(this);
  return this;
}


/* GridTargetAdaptor::~GridTargetAdaptor() */

void __thiscall GridTargetAdaptor::~GridTargetAdaptor(GridTargetAdaptor *this)

{
  *(undefined ***)this = &PTR_GetTargetAdaptorClass_066669f0;
  CardTargetAdaptor::~CardTargetAdaptor((CardTargetAdaptor *)this);
  return;
}


/* GridTargetAdaptor::~GridTargetAdaptor() */

void __thiscall GridTargetAdaptor::~GridTargetAdaptor(GridTargetAdaptor *this)

{
  ~GridTargetAdaptor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridTargetAdaptor::setTargetPosition(Sexy::Point const&) */

void GridTargetAdaptor::setTargetPosition(Point *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long extraout_x0;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x58))((Point *)&local_20);
  CardTargetAdaptor::setTargetPosition((CardTargetAdaptor *)param_1,(Point *)&local_20);
  uVar5 = BoardTransforms::BoardSpaceToGridX(local_20);
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  uVar5 = BoardTransforms::BoardSpaceToGridY(local_1c);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x10));
  nop();
  if (extraout_x0 == 0) {
    Sexy::Insets::Insets((Insets *)&local_18,*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c),1,1);
    *(undefined8 *)(param_1 + 0x20) = local_18;
    *(undefined8 *)(param_1 + 0x28) = uStack_10;
  }
  else {
    iVar1 = *(int *)(extraout_x0 + 0x14);
    iVar2 = *(int *)(extraout_x0 + 0x1c);
    iVar3 = *(int *)(extraout_x0 + 0x18);
    iVar4 = *(int *)(extraout_x0 + 0x20);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x18) + iVar1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x1c) + iVar2;
    *(int *)(param_1 + 0x28) = (iVar3 - iVar1) + 1;
    *(int *)(param_1 + 0x2c) = (iVar4 - iVar2) + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridTargetAdaptor::getClosestValidTargetPosition(Sexy::Point const&) */

void GridTargetAdaptor::getClosestValidTargetPosition(Point *param_1)

{
  char cVar1;
  GridTargetProperty *pGVar2;
  int iVar3;
  uint *in_x1;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18 [2];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::BoardSpaceToGrid
            ((BoardTransforms *)(ulong)*in_x1,in_x1[1],(int)___stack_chk_guard);
  Sexy::Point::Point((Point *)&local_20,(TPoint *)&local_28);
  pGVar2 = CardTargetAdaptor::GetProps<GridTargetProperty>((CardTargetAdaptor *)param_1);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)(pGVar2 + 0x24));
  cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)local_18,(TPoint *)&local_28);
  if ((cVar1 == '\0') && (local_1c = local_24, local_18[0] < local_10)) {
    iVar4 = local_18[0] * 2;
    uVar5 = local_28 + local_18[0] * -2;
    iVar6 = 999;
    do {
      iVar3 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
      if (iVar3 < iVar6) {
        local_20 = iVar4;
        iVar6 = iVar3;
      }
      iVar4 = iVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (iVar4 != local_10 + local_18[0]);
  }
  BoardTransforms::GridToBoardSpace((Point *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridTargetAdaptor::GetTargetRect() */

void GridTargetAdaptor::GetTargetRect(void)

{
  char cVar1;
  CardTargetAdaptor *in_x0;
  GridTargetProperty *pGVar2;
  Insets *in_x8;
  Insets aIStack_28 [16];
  Insets aIStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = CardTargetAdaptor::GetProps<GridTargetProperty>(in_x0);
  Sexy::Insets::Insets(aIStack_28,(Insets *)(pGVar2 + 0x24));
  pGVar2 = CardTargetAdaptor::GetProps<GridTargetProperty>(in_x0);
  cVar1 = (**(code **)(*(long *)pGVar2 + 0x80))();
  if (cVar1 == '\0') {
    Sexy::Insets::Insets(in_x8,aIStack_28);
  }
  else {
    Sexy::TRect<int>::Intersection((TRect *)(in_x0 + 0x20));
    if ((local_10 < 1) || (local_c < 1)) {
      Sexy::Insets::Insets(in_x8,0,3,1,1);
    }
    else {
      Sexy::Insets::Insets(in_x8,aIStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridTargetAdaptor::GetRandomGrid() */

void __thiscall GridTargetAdaptor::GetRandomGrid(GridTargetAdaptor *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Point *in_x8;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  GetTargetRect();
  iVar2 = RandRangeInt(local_18,local_18 + local_10 + -1);
  iVar3 = RandRangeInt(local_14,local_14 + local_c + -1);
  Sexy::Point::Point(in_x8,iVar2,iVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridTargetAdaptor::GetRegularGrid(int) */

void GridTargetAdaptor::GetRegularGrid(int param_1)

{
  int iVar1;
  long lVar2;
  int in_w1;
  Point *in_x8;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar2 = ___stack_chk_guard;
  GetTargetRect();
  if (in_w1 < local_10 * local_c) {
    iVar1 = 0;
    if (local_10 != 0) {
      iVar1 = in_w1 / local_10;
    }
    Sexy::Point::Point(in_x8,(in_w1 - iVar1 * local_10) + local_18,iVar1 + local_14);
  }
  else {
    GetRandomGrid((GridTargetAdaptor *)(ulong)(uint)param_1);
  }
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

