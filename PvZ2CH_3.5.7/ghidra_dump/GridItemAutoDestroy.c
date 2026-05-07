// Class: GridItemAutoDestroy


/* GridItemAutoDestroy::CalcRenderOrder() const */

void __thiscall GridItemAutoDestroy::CalcRenderOrder(GridItemAutoDestroy *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x64960,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemAutoDestroy::CalcRenderOrder() const */

void __thiscall GridItemAutoDestroy::CalcRenderOrder(GridItemAutoDestroy *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemAutoDestroy::~GridItemAutoDestroy() */

void __thiscall GridItemAutoDestroy::~GridItemAutoDestroy(GridItemAutoDestroy *this)

{
  *(undefined ***)this = &PTR_GetClass_0668f1a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemAutoDestroy_0668f458;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemAutoDestroy::~GridItemAutoDestroy() */

void __thiscall GridItemAutoDestroy::~GridItemAutoDestroy(GridItemAutoDestroy *this)

{
  ~GridItemAutoDestroy(this + -0x10);
  return;
}


/* GridItemAutoDestroy::~GridItemAutoDestroy() */

void __thiscall GridItemAutoDestroy::~GridItemAutoDestroy(GridItemAutoDestroy *this)

{
  ~GridItemAutoDestroy(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemAutoDestroy::~GridItemAutoDestroy() */

void __thiscall GridItemAutoDestroy::~GridItemAutoDestroy(GridItemAutoDestroy *this)

{
  ~GridItemAutoDestroy(this + -0x10);
  return;
}


/* GridItemAutoDestroy::onDestroy() */

void __thiscall GridItemAutoDestroy::onDestroy(GridItemAutoDestroy *this)

{
  int iVar1;
  
  iVar1 = FUN_037239a0(*(undefined8 *)(this + 0x1f0),*(undefined8 *)(this + 0x200));
  if (iVar1 != 0) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x1e8));
  }
  GridItem::onDestroy((GridItem *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAutoDestroy::StaticClassInit() */

void GridItemAutoDestroy::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemAutoDestroy");
    (*pcVar2)(plVar1,asStack_10,FUN_0372ee08,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAutoDestroy::StaticGetClass() */

long * GridItemAutoDestroy::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemAutoDestroy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAutoDestroy::GetClass() const */

long * GridItemAutoDestroy::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemAutoDestroy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAutoDestroy::GridItemAutoDestroy() */

void __thiscall GridItemAutoDestroy::GridItemAutoDestroy(GridItemAutoDestroy *this)

{
  undefined4 uVar1;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0668f1a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemAutoDestroy_0668f458;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x1b8),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x1e8),(DummyInit *)0x0);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1b0) = uVar1;
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1b8),(Delegate2 *)aDStack_38);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1e8),(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAutoDestroy::StaticNew() */

GridItemAutoDestroy * GridItemAutoDestroy::StaticNew(void)

{
  GridItemAutoDestroy *this;
  
  this = ::operator_new(0x218);
  GridItemAutoDestroy(this);
  return this;
}


/* GridItemAutoDestroy::SetStartCallback(Sexy::Delegate0) */

void __thiscall GridItemAutoDestroy::SetStartCallback(GridItemAutoDestroy *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1b8),param_2);
  return;
}


/* GridItemAutoDestroy::SetEndCallback(Sexy::Delegate0) */

void __thiscall GridItemAutoDestroy::SetEndCallback(GridItemAutoDestroy *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1e8),param_2);
  return;
}


/* GridItemAutoDestroy::ResetTimer() */

void __thiscall GridItemAutoDestroy::ResetTimer(GridItemAutoDestroy *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1b0) = uVar1;
  return;
}


/* GridItemAutoDestroy::onUpdate() */

void __thiscall GridItemAutoDestroy::onUpdate(GridItemAutoDestroy *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  iVar2 = *(int *)(this + 0x1a8);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      iVar2 = FUN_037239a0(*(undefined8 *)(this + 0x1c0),*(undefined8 *)(this + 0x1d0));
      if (iVar2 != 0) {
        Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x1b8))
        ;
      }
      *(undefined4 *)(this + 0x1a8) = 2;
      uVar3 = PVZ_T();
      *(undefined4 *)(this + 0x1b0) = uVar3;
      return;
    }
    if (iVar2 == 2) {
      cVar1 = TimeUtil::CheckTimeEclapse(*(float *)(this + 0x1ac),*(float *)(this + 0x1b0));
      if (cVar1 != '\0') {
        *(undefined4 *)(this + 0x1a8) = 3;
      }
    }
    else if (iVar2 == 3) {
      (**(code **)(*(long *)this + 0x48))(this);
      *(undefined4 *)(this + 0x1a8) = 0;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAutoDestroy::onGridItemInitialize() */

void __thiscall GridItemAutoDestroy::onGridItemInitialize(GridItemAutoDestroy *this)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 1;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"idle");
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

