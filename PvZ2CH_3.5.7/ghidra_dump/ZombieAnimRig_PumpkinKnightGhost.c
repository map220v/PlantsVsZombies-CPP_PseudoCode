// Class: ZombieAnimRig_PumpkinKnightGhost


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PumpkinKnightGhost::playSingleAnimation(std::string,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_PumpkinKnightGhost::playSingleAnimation
          (ZombieAnimRig_PumpkinKnightGhost *this,undefined8 param_2,RtReflectionDelegate *param_3)

{
  int iVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = (*pcVar2)(this,param_2,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 8;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PumpkinKnightGhost::playLoopAnimation(std::string) */

void __thiscall
ZombieAnimRig_PumpkinKnightGhost::playLoopAnimation
          (ZombieAnimRig_PumpkinKnightGhost *this,undefined8 param_2)

{
  int iVar1;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,param_2,0,aDStack_38);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 8;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* ZombieAnimRig_PumpkinKnightGhost::StaticGetClass() */

long * ZombieAnimRig_PumpkinKnightGhost::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_PumpkinKnightGhost",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_PumpkinKnightGhost::GetClass() const */

long * ZombieAnimRig_PumpkinKnightGhost::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_PumpkinKnightGhost",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_PumpkinKnightGhost::~ZombieAnimRig_PumpkinKnightGhost() */

void __thiscall
ZombieAnimRig_PumpkinKnightGhost::~ZombieAnimRig_PumpkinKnightGhost
          (ZombieAnimRig_PumpkinKnightGhost *this)

{
  *(undefined ***)this = &PTR_GetClass_06a12bb0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PumpkinKnightGhost_06a12e28;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PumpkinKnightGhost::~ZombieAnimRig_PumpkinKnightGhost() */

void __thiscall
ZombieAnimRig_PumpkinKnightGhost::~ZombieAnimRig_PumpkinKnightGhost
          (ZombieAnimRig_PumpkinKnightGhost *this)

{
  ~ZombieAnimRig_PumpkinKnightGhost(this + -0x10);
  return;
}


/* ZombieAnimRig_PumpkinKnightGhost::~ZombieAnimRig_PumpkinKnightGhost() */

void __thiscall
ZombieAnimRig_PumpkinKnightGhost::~ZombieAnimRig_PumpkinKnightGhost
          (ZombieAnimRig_PumpkinKnightGhost *this)

{
  ~ZombieAnimRig_PumpkinKnightGhost(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PumpkinKnightGhost::~ZombieAnimRig_PumpkinKnightGhost() */

void __thiscall
ZombieAnimRig_PumpkinKnightGhost::~ZombieAnimRig_PumpkinKnightGhost
          (ZombieAnimRig_PumpkinKnightGhost *this)

{
  ~ZombieAnimRig_PumpkinKnightGhost(this + -0x10);
  return;
}


/* ZombieAnimRig_PumpkinKnightGhost::ZombieAnimRig_PumpkinKnightGhost() */

void __thiscall
ZombieAnimRig_PumpkinKnightGhost::ZombieAnimRig_PumpkinKnightGhost
          (ZombieAnimRig_PumpkinKnightGhost *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06a12bb0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PumpkinKnightGhost_06a12e28;
  return;
}


/* ZombieAnimRig_PumpkinKnightGhost::StaticNew() */

ZombieAnimRig_PumpkinKnightGhost * ZombieAnimRig_PumpkinKnightGhost::StaticNew(void)

{
  ZombieAnimRig_PumpkinKnightGhost *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_PumpkinKnightGhost(this);
  return this;
}

