// Class: GridItemCraterTimed


/* GridItemCraterTimed::onTimeout() */

void __thiscall GridItemCraterTimed::onTimeout(GridItemCraterTimed *this)

{
  (**(code **)(*(long *)this + 0x48))();
  return;
}


/* GridItemCraterTimed::onUpdate() */

void __thiscall GridItemCraterTimed::onUpdate(GridItemCraterTimed *this)

{
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  PvZ2::Utilities::Timer::Update((Timer *)(this + 0x1a8));
  return;
}


/* GridItemCraterTimed::~GridItemCraterTimed() */

void __thiscall GridItemCraterTimed::~GridItemCraterTimed(GridItemCraterTimed *this)

{
  *(undefined ***)this = &PTR_GetClass_069196a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCraterTimed_06919958;
  GridItemCrater::~GridItemCrater((GridItemCrater *)this);
  return;
}


/* non-virtual thunk to GridItemCraterTimed::~GridItemCraterTimed() */

void __thiscall GridItemCraterTimed::~GridItemCraterTimed(GridItemCraterTimed *this)

{
  ~GridItemCraterTimed(this + -0x10);
  return;
}


/* GridItemCraterTimed::~GridItemCraterTimed() */

void __thiscall GridItemCraterTimed::~GridItemCraterTimed(GridItemCraterTimed *this)

{
  ~GridItemCraterTimed(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemCraterTimed::~GridItemCraterTimed() */

void __thiscall GridItemCraterTimed::~GridItemCraterTimed(GridItemCraterTimed *this)

{
  ~GridItemCraterTimed(this + -0x10);
  return;
}


/* GridItemCraterTimed::GridItemCraterTimed() */

void __thiscall GridItemCraterTimed::GridItemCraterTimed(GridItemCraterTimed *this)

{
  GridItemCrater::GridItemCrater((GridItemCrater *)this);
  *(undefined ***)this = &PTR_GetClass_069196a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCraterTimed_06919958;
  PvZ2::Utilities::Timer::Timer((Timer *)(this + 0x1a8));
  return;
}


/* GridItemCraterTimed::StaticNew() */

GridItemCraterTimed * GridItemCraterTimed::StaticNew(void)

{
  GridItemCraterTimed *this;
  
  this = ::operator_new(0x1e0);
  GridItemCraterTimed(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCraterTimed::StaticClassInit() */

void GridItemCraterTimed::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCraterTimed");
    (*pcVar2)(plVar1,asStack_10,FUN_049926cc,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCraterTimed::StaticGetClass() */

long * GridItemCraterTimed::StaticGetClass(void)

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
  uVar2 = GridItemCrater::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCraterTimed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCraterTimed::GetClass() const */

long * GridItemCraterTimed::GetClass(void)

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
  uVar2 = GridItemCrater::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCraterTimed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCraterTimed::onGridItemInitialize() */

void __thiscall GridItemCraterTimed::onGridItemInitialize(GridItemCraterTimed *this)

{
  GridItemCraterTimedProps *pGVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemCrater::onGridItemInitialize((GridItemCrater *)this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTimeout);
  Sexy::Delegate0::Delegate0<GridItemCraterTimed,void(GridItemCraterTimed::*)()>
            (aDStack_38,aCStack_50);
  PvZ2::Utilities::Timer::SetCallback((Timer *)(this + 0x1a8),aDStack_38);
  pGVar1 = GridItem::GetProps<GridItemCraterTimedProps>();
  PvZ2::Utilities::Timer::Reset((Timer *)(this + 0x1a8),*(float *)(pGVar1 + 0xd0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

