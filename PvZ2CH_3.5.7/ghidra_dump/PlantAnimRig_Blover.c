// Class: PlantAnimRig_Blover


/* PlantAnimRig_Blover::~PlantAnimRig_Blover() */

void __thiscall PlantAnimRig_Blover::~PlantAnimRig_Blover(PlantAnimRig_Blover *this)

{
  *(undefined ***)this = &PTR_GetClass_0679a200;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Blover_0679a468;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Blover::~PlantAnimRig_Blover() */

void __thiscall PlantAnimRig_Blover::~PlantAnimRig_Blover(PlantAnimRig_Blover *this)

{
  ~PlantAnimRig_Blover(this + -0x10);
  return;
}


/* PlantAnimRig_Blover::~PlantAnimRig_Blover() */

void __thiscall PlantAnimRig_Blover::~PlantAnimRig_Blover(PlantAnimRig_Blover *this)

{
  ~PlantAnimRig_Blover(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Blover::~PlantAnimRig_Blover() */

void __thiscall PlantAnimRig_Blover::~PlantAnimRig_Blover(PlantAnimRig_Blover *this)

{
  ~PlantAnimRig_Blover(this + -0x10);
  return;
}


/* PlantAnimRig_Blover::StaticGetClass() */

long * PlantAnimRig_Blover::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Blover",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_Blover::GetClass() const */

long * PlantAnimRig_Blover::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Blover",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_Blover::PlantAnimRig_Blover() */

void __thiscall PlantAnimRig_Blover::PlantAnimRig_Blover(PlantAnimRig_Blover *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679a200;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Blover_0679a468;
  return;
}


/* PlantAnimRig_Blover::StaticNew() */

PlantAnimRig_Blover * PlantAnimRig_Blover::StaticNew(void)

{
  PlantAnimRig_Blover *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Blover(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Blover::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Blover::PlayAttack(PlantAnimRig_Blover *this,RtReflectionDelegate *param_2)

{
  undefined4 uVar1;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  uVar1 = PlantAnimRig::PlayAttack((PlantAnimRig *)this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

