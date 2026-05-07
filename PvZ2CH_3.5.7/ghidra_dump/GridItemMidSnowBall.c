// Class: GridItemMidSnowBall


/* GridItemMidSnowBall::StaticGetClass() */

long * GridItemMidSnowBall::StaticGetClass(void)

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
  uVar2 = GridItemSnowBall::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMidSnowBall",uVar2,StaticNew);
  return sClass;
}


/* GridItemMidSnowBall::GetClass() const */

long * GridItemMidSnowBall::GetClass(void)

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
  uVar2 = GridItemSnowBall::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMidSnowBall",uVar2,StaticNew);
  return sClass;
}


/* GridItemMidSnowBall::GridItemMidSnowBall() */

void __thiscall GridItemMidSnowBall::GridItemMidSnowBall(GridItemMidSnowBall *this)

{
  GridItemSnowBall::GridItemSnowBall((GridItemSnowBall *)this);
  *(undefined ***)this = &PTR_GetClass_0663bfd0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMidSnowBall_0663c2e0;
  return;
}


/* GridItemMidSnowBall::StaticNew() */

GridItemMidSnowBall * GridItemMidSnowBall::StaticNew(void)

{
  GridItemMidSnowBall *this;
  
  this = ::operator_new(0x200);
  GridItemMidSnowBall(this);
  return this;
}


/* GridItemMidSnowBall::~GridItemMidSnowBall() */

void __thiscall GridItemMidSnowBall::~GridItemMidSnowBall(GridItemMidSnowBall *this)

{
  *(undefined ***)this = &PTR_GetClass_0663bfd0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMidSnowBall_0663c2e0;
  GridItemSnowBall::~GridItemSnowBall((GridItemSnowBall *)this);
  return;
}


/* non-virtual thunk to GridItemMidSnowBall::~GridItemMidSnowBall() */

void __thiscall GridItemMidSnowBall::~GridItemMidSnowBall(GridItemMidSnowBall *this)

{
  ~GridItemMidSnowBall(this + -0x10);
  return;
}


/* GridItemMidSnowBall::~GridItemMidSnowBall() */

void __thiscall GridItemMidSnowBall::~GridItemMidSnowBall(GridItemMidSnowBall *this)

{
  ~GridItemMidSnowBall(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemMidSnowBall::~GridItemMidSnowBall() */

void __thiscall GridItemMidSnowBall::~GridItemMidSnowBall(GridItemMidSnowBall *this)

{
  ~GridItemMidSnowBall(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMidSnowBall::onGridItemInitialize() */

void __thiscall GridItemMidSnowBall::onGridItemInitialize(GridItemMidSnowBall *this)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemSnowBall::onGridItemInitialize((GridItemSnowBall *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  RealObject::JoinTeam((RealObject *)this,2);
  *(undefined4 *)(this + 0x1e8) = 0;
  this[0x1f9] = (GridItemMidSnowBall)0x1;
  *(undefined4 *)(this + 0x1ec) = 0;
  this[0x1fa] = (GridItemMidSnowBall)0x0;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"mid_idle");
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


/* GridItemMidSnowBall::executeAttack(Plant*) */

void __thiscall GridItemMidSnowBall::executeAttack(GridItemMidSnowBall *this,Plant *param_1)

{
  GridItemSnowBall::toCrash((GridItemSnowBall *)this);
  Plant::beThrown(param_1);
  return;
}

