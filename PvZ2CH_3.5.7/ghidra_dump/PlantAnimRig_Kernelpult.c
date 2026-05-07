// Class: PlantAnimRig_Kernelpult


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Kernelpult::PlayPlantFoodStart(int) */

void __thiscall
PlantAnimRig_Kernelpult::PlayPlantFoodStart(PlantAnimRig_Kernelpult *this,int param_1)

{
  int iVar1;
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfood");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_50);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aDStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 4;
    *(int *)(this + 0x228) = param_1;
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate0> *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(this + 0x298),
               (RtReflectionDelegate *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate0> *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(this + 0x328),
               (RtReflectionDelegate *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_Kernelpult::~PlantAnimRig_Kernelpult() */

void __thiscall PlantAnimRig_Kernelpult::~PlantAnimRig_Kernelpult(PlantAnimRig_Kernelpult *this)

{
  *(undefined ***)this = &PTR_GetClass_0679bfb0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Kernelpult_0679c228;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Kernelpult::~PlantAnimRig_Kernelpult() */

void __thiscall PlantAnimRig_Kernelpult::~PlantAnimRig_Kernelpult(PlantAnimRig_Kernelpult *this)

{
  ~PlantAnimRig_Kernelpult(this + -0x10);
  return;
}


/* PlantAnimRig_Kernelpult::~PlantAnimRig_Kernelpult() */

void __thiscall PlantAnimRig_Kernelpult::~PlantAnimRig_Kernelpult(PlantAnimRig_Kernelpult *this)

{
  ~PlantAnimRig_Kernelpult(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Kernelpult::~PlantAnimRig_Kernelpult() */

void __thiscall PlantAnimRig_Kernelpult::~PlantAnimRig_Kernelpult(PlantAnimRig_Kernelpult *this)

{
  ~PlantAnimRig_Kernelpult(this + -0x10);
  return;
}


/* PlantAnimRig_Kernelpult::StaticGetClass() */

long * PlantAnimRig_Kernelpult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Kernelpult",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_Kernelpult::GetClass() const */

long * PlantAnimRig_Kernelpult::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Kernelpult",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_Kernelpult::PlantAnimRig_Kernelpult() */

void __thiscall PlantAnimRig_Kernelpult::PlantAnimRig_Kernelpult(PlantAnimRig_Kernelpult *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679bfb0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Kernelpult_0679c228;
  return;
}


/* PlantAnimRig_Kernelpult::StaticNew() */

PlantAnimRig_Kernelpult * PlantAnimRig_Kernelpult::StaticNew(void)

{
  PlantAnimRig_Kernelpult *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Kernelpult(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Kernelpult::PlayRocketAttack(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Kernelpult::PlayRocketAttack
          (PlantAnimRig_Kernelpult *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack3");
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

