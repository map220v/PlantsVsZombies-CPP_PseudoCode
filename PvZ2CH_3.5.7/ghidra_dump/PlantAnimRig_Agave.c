// Class: PlantAnimRig_Agave


/* PlantAnimRig_Agave::~PlantAnimRig_Agave() */

void __thiscall PlantAnimRig_Agave::~PlantAnimRig_Agave(PlantAnimRig_Agave *this)

{
  *(undefined ***)this = &PTR_GetClass_067a1370;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Agave_067a15f0;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Agave::~PlantAnimRig_Agave() */

void __thiscall PlantAnimRig_Agave::~PlantAnimRig_Agave(PlantAnimRig_Agave *this)

{
  ~PlantAnimRig_Agave(this + -0x10);
  return;
}


/* PlantAnimRig_Agave::~PlantAnimRig_Agave() */

void __thiscall PlantAnimRig_Agave::~PlantAnimRig_Agave(PlantAnimRig_Agave *this)

{
  ~PlantAnimRig_Agave(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Agave::~PlantAnimRig_Agave() */

void __thiscall PlantAnimRig_Agave::~PlantAnimRig_Agave(PlantAnimRig_Agave *this)

{
  ~PlantAnimRig_Agave(this + -0x10);
  return;
}


/* PlantAnimRig_Agave::StaticGetClass() */

long * PlantAnimRig_Agave::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Agave",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_Agave::GetClass() const */

long * PlantAnimRig_Agave::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Agave",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_Agave::PlantAnimRig_Agave() */

void __thiscall PlantAnimRig_Agave::PlantAnimRig_Agave(PlantAnimRig_Agave *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067a1370;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Agave_067a15f0;
  return;
}


/* PlantAnimRig_Agave::StaticNew() */

PlantAnimRig_Agave * PlantAnimRig_Agave::StaticNew(void)

{
  PlantAnimRig_Agave *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Agave(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Agave::PlayNormalAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Agave::PlayNormalAttack(PlantAnimRig_Agave *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack01");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Agave::PlayChargeAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Agave::PlayChargeAttack(PlantAnimRig_Agave *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack03");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

