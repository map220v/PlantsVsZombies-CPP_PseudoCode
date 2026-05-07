// Class: PlantAnimRig_Stephania


/* PlantAnimRig_Stephania::~PlantAnimRig_Stephania() */

void __thiscall PlantAnimRig_Stephania::~PlantAnimRig_Stephania(PlantAnimRig_Stephania *this)

{
  *(undefined ***)this = &PTR_GetClass_067e13b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Stephania_067e1618;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Stephania::~PlantAnimRig_Stephania() */

void __thiscall PlantAnimRig_Stephania::~PlantAnimRig_Stephania(PlantAnimRig_Stephania *this)

{
  ~PlantAnimRig_Stephania(this + -0x10);
  return;
}


/* PlantAnimRig_Stephania::~PlantAnimRig_Stephania() */

void __thiscall PlantAnimRig_Stephania::~PlantAnimRig_Stephania(PlantAnimRig_Stephania *this)

{
  ~PlantAnimRig_Stephania(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Stephania::~PlantAnimRig_Stephania() */

void __thiscall PlantAnimRig_Stephania::~PlantAnimRig_Stephania(PlantAnimRig_Stephania *this)

{
  ~PlantAnimRig_Stephania(this + -0x10);
  return;
}


/* PlantAnimRig_Stephania::StaticGetClass() */

long * PlantAnimRig_Stephania::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Stephania",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_Stephania::GetClass() const */

long * PlantAnimRig_Stephania::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Stephania",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_Stephania::PlantAnimRig_Stephania() */

void __thiscall PlantAnimRig_Stephania::PlantAnimRig_Stephania(PlantAnimRig_Stephania *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067e13b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Stephania_067e1618;
  return;
}


/* PlantAnimRig_Stephania::StaticNew() */

PlantAnimRig_Stephania * PlantAnimRig_Stephania::StaticNew(void)

{
  PlantAnimRig_Stephania *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Stephania(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Stephania::Juggling(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Stephania::Juggling(PlantAnimRig_Stephania *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"slap");
  nop();
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

