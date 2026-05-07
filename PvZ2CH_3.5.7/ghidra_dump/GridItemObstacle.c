// Class: GridItemObstacle


/* GridItemObstacle::CalcRenderOrder() const */

undefined8 GridItemObstacle::CalcRenderOrder(void)

{
  return 300000;
}


/* non-virtual thunk to GridItemObstacle::CalcRenderOrder() const */

void __thiscall GridItemObstacle::CalcRenderOrder(GridItemObstacle *this)

{
  CalcRenderOrder();
  return;
}


/* GridItemObstacle::~GridItemObstacle() */

void __thiscall GridItemObstacle::~GridItemObstacle(GridItemObstacle *this)

{
  *(undefined ***)this = &PTR_GetClass_06985040;
  *(undefined ***)(this + 0x10) = &PTR__GridItemObstacle_069852f8;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemObstacle::~GridItemObstacle() */

void __thiscall GridItemObstacle::~GridItemObstacle(GridItemObstacle *this)

{
  ~GridItemObstacle(this + -0x10);
  return;
}


/* GridItemObstacle::~GridItemObstacle() */

void __thiscall GridItemObstacle::~GridItemObstacle(GridItemObstacle *this)

{
  ~GridItemObstacle(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemObstacle::~GridItemObstacle() */

void __thiscall GridItemObstacle::~GridItemObstacle(GridItemObstacle *this)

{
  ~GridItemObstacle(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemObstacle::StaticClassInit() */

void GridItemObstacle::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemObstacle");
    (*pcVar2)(plVar1,asStack_10,FUN_04c37a48,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemObstacle::StaticGetClass() */

long * GridItemObstacle::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemObstacle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemObstacle::GetClass() const */

long * GridItemObstacle::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemObstacle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemObstacle::GridItemObstacle() */

void __thiscall GridItemObstacle::GridItemObstacle(GridItemObstacle *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06985040;
  *(undefined ***)(this + 0x10) = &PTR__GridItemObstacle_069852f8;
  return;
}


/* GridItemObstacle::StaticNew() */

GridItemObstacle * GridItemObstacle::StaticNew(void)

{
  GridItemObstacle *this;
  
  this = ::operator_new(0x1a8);
  GridItemObstacle(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemObstacle::onGridItemInitialize() */

void __thiscall GridItemObstacle::onGridItemInitialize(GridItemObstacle *this)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"animation");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

