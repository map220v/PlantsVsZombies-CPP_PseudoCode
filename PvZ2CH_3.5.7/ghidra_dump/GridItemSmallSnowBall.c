// Class: GridItemSmallSnowBall


/* GridItemSmallSnowBall::StaticGetClass() */

long * GridItemSmallSnowBall::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSmallSnowBall",uVar2,StaticNew);
  return sClass;
}


/* GridItemSmallSnowBall::GetClass() const */

long * GridItemSmallSnowBall::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSmallSnowBall",uVar2,StaticNew);
  return sClass;
}


/* GridItemSmallSnowBall::GridItemSmallSnowBall() */

void __thiscall GridItemSmallSnowBall::GridItemSmallSnowBall(GridItemSmallSnowBall *this)

{
  GridItemSnowBall::GridItemSnowBall((GridItemSnowBall *)this);
  *(undefined ***)this = &PTR_GetClass_0663c310;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSmallSnowBall_0663c620;
  return;
}


/* GridItemSmallSnowBall::StaticNew() */

GridItemSmallSnowBall * GridItemSmallSnowBall::StaticNew(void)

{
  GridItemSmallSnowBall *this;
  
  this = ::operator_new(0x200);
  GridItemSmallSnowBall(this);
  return this;
}


/* GridItemSmallSnowBall::~GridItemSmallSnowBall() */

void __thiscall GridItemSmallSnowBall::~GridItemSmallSnowBall(GridItemSmallSnowBall *this)

{
  *(undefined ***)this = &PTR_GetClass_0663c310;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSmallSnowBall_0663c620;
  GridItemSnowBall::~GridItemSnowBall((GridItemSnowBall *)this);
  return;
}


/* non-virtual thunk to GridItemSmallSnowBall::~GridItemSmallSnowBall() */

void __thiscall GridItemSmallSnowBall::~GridItemSmallSnowBall(GridItemSmallSnowBall *this)

{
  ~GridItemSmallSnowBall(this + -0x10);
  return;
}


/* GridItemSmallSnowBall::~GridItemSmallSnowBall() */

void __thiscall GridItemSmallSnowBall::~GridItemSmallSnowBall(GridItemSmallSnowBall *this)

{
  ~GridItemSmallSnowBall(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSmallSnowBall::~GridItemSmallSnowBall() */

void __thiscall GridItemSmallSnowBall::~GridItemSmallSnowBall(GridItemSmallSnowBall *this)

{
  ~GridItemSmallSnowBall(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSmallSnowBall::onGridItemInitialize() */

void __thiscall GridItemSmallSnowBall::onGridItemInitialize(GridItemSmallSnowBall *this)

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
  this[0x1f9] = (GridItemSmallSnowBall)0x1;
  *(undefined4 *)(this + 0x1ec) = 0;
  this[0x1fa] = (GridItemSmallSnowBall)0x0;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"small_idle");
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


/* GridItemSmallSnowBall::executeAttack(Plant*) */

void __thiscall GridItemSmallSnowBall::executeAttack(GridItemSmallSnowBall *this,Plant *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = PVZ_EOT();
  Plant::ApplyCondition(auVar1,0,param_1,6);
  GridItemSnowBall::toCrash((GridItemSnowBall *)this);
  return;
}

