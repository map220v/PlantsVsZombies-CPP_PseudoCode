// Class: GridItemRunningSubwayCoin


/* GridItemRunningSubwayCoin::OnCollide(BoardEntity*) */

void GridItemRunningSubwayCoin::OnCollide(BoardEntity *param_1)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRunningSubwayCoin::StaticClassInit() */

void GridItemRunningSubwayCoin::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRunningSubwayCoin");
    (*pcVar2)(plVar1,asStack_10,FUN_033eb4ac,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRunningSubwayCoin::StaticGetClass() */

long * GridItemRunningSubwayCoin::StaticGetClass(void)

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
  uVar2 = GridItemRunningSubwayObject::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRunningSubwayCoin",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRunningSubwayCoin::GetClass() const */

long * GridItemRunningSubwayCoin::GetClass(void)

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
  uVar2 = GridItemRunningSubwayObject::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRunningSubwayCoin",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRunningSubwayCoin::GridItemRunningSubwayCoin() */

void __thiscall
GridItemRunningSubwayCoin::GridItemRunningSubwayCoin(GridItemRunningSubwayCoin *this)

{
  GridItemRunningSubwayObject::GridItemRunningSubwayObject((GridItemRunningSubwayObject *)this);
  *(undefined ***)this = &PTR_GetClass_0661c8d0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRunningSubwayCoin_0661cbe0;
  return;
}


/* GridItemRunningSubwayCoin::StaticNew() */

GridItemRunningSubwayCoin * GridItemRunningSubwayCoin::StaticNew(void)

{
  GridItemRunningSubwayCoin *this;
  
  this = ::operator_new(0x1f8);
  GridItemRunningSubwayCoin(this);
  return this;
}


/* GridItemRunningSubwayCoin::calcCollisionRect() */

void GridItemRunningSubwayCoin::calcCollisionRect(void)

{
  int iVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar3;
  Insets *in_x8;
  float fVar4;
  float fVar5;
  
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  fVar5 = *pfVar3;
  fVar4 = pfVar3[1];
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets(in_x8,(int)fVar5 - iVar1 / 2,((int)fVar4 + -0x19) - iVar2 / 2,iVar1,iVar2);
  return;
}


/* GridItemRunningSubwayCoin::~GridItemRunningSubwayCoin() */

void __thiscall
GridItemRunningSubwayCoin::~GridItemRunningSubwayCoin(GridItemRunningSubwayCoin *this)

{
  *(undefined ***)this = &PTR_GetClass_0661c8d0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRunningSubwayCoin_0661cbe0;
  GridItemRunningSubwayObject::~GridItemRunningSubwayObject((GridItemRunningSubwayObject *)this);
  return;
}


/* non-virtual thunk to GridItemRunningSubwayCoin::~GridItemRunningSubwayCoin() */

void __thiscall
GridItemRunningSubwayCoin::~GridItemRunningSubwayCoin(GridItemRunningSubwayCoin *this)

{
  ~GridItemRunningSubwayCoin(this + -0x10);
  return;
}


/* GridItemRunningSubwayCoin::~GridItemRunningSubwayCoin() */

void __thiscall
GridItemRunningSubwayCoin::~GridItemRunningSubwayCoin(GridItemRunningSubwayCoin *this)

{
  ~GridItemRunningSubwayCoin(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemRunningSubwayCoin::~GridItemRunningSubwayCoin() */

void __thiscall
GridItemRunningSubwayCoin::~GridItemRunningSubwayCoin(GridItemRunningSubwayCoin *this)

{
  ~GridItemRunningSubwayCoin(this + -0x10);
  return;
}

