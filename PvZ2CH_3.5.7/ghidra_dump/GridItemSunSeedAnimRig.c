// Class: GridItemSunSeedAnimRig


/* GridItemSunSeedAnimRig::~GridItemSunSeedAnimRig() */

void __thiscall GridItemSunSeedAnimRig::~GridItemSunSeedAnimRig(GridItemSunSeedAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_067c7280;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSunSeedAnimRig_067c73a0;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemSunSeedAnimRig::~GridItemSunSeedAnimRig() */

void __thiscall GridItemSunSeedAnimRig::~GridItemSunSeedAnimRig(GridItemSunSeedAnimRig *this)

{
  ~GridItemSunSeedAnimRig(this + -0x10);
  return;
}


/* GridItemSunSeedAnimRig::~GridItemSunSeedAnimRig() */

void __thiscall GridItemSunSeedAnimRig::~GridItemSunSeedAnimRig(GridItemSunSeedAnimRig *this)

{
  ~GridItemSunSeedAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSunSeedAnimRig::~GridItemSunSeedAnimRig() */

void __thiscall GridItemSunSeedAnimRig::~GridItemSunSeedAnimRig(GridItemSunSeedAnimRig *this)

{
  ~GridItemSunSeedAnimRig(this + -0x10);
  return;
}


/* GridItemSunSeedAnimRig::StaticGetClass() */

long * GridItemSunSeedAnimRig::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSunSeedAnimRig",uVar2,StaticNew);
  return sClass;
}


/* GridItemSunSeedAnimRig::GetClass() const */

long * GridItemSunSeedAnimRig::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSunSeedAnimRig",uVar2,StaticNew);
  return sClass;
}


/* GridItemSunSeedAnimRig::GridItemSunSeedAnimRig() */

void __thiscall GridItemSunSeedAnimRig::GridItemSunSeedAnimRig(GridItemSunSeedAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067c7280;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSunSeedAnimRig_067c73a0;
  return;
}


/* GridItemSunSeedAnimRig::StaticNew() */

GridItemSunSeedAnimRig * GridItemSunSeedAnimRig::StaticNew(void)

{
  GridItemSunSeedAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemSunSeedAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSunSeedAnimRig::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
GridItemSunSeedAnimRig::PlayAttack(GridItemSunSeedAnimRig *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack_lv5");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

