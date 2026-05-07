// Class: PlantAnimRig_HotPotato


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HotPotato::PlayPlantAnim(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_HotPotato::PlayPlantAnim(PlantAnimRig_HotPotato *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack");
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
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HotPotato::PlayPreviewAnim(bool) */

void PlantAnimRig_HotPotato::PlayPreviewAnim(bool param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)param_1,asStack_40,2,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_HotPotato::~PlantAnimRig_HotPotato() */

void __thiscall PlantAnimRig_HotPotato::~PlantAnimRig_HotPotato(PlantAnimRig_HotPotato *this)

{
  *(undefined ***)this = &PTR_GetClass_067d3c10;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HotPotato_067d3e78;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HotPotato::~PlantAnimRig_HotPotato() */

void __thiscall PlantAnimRig_HotPotato::~PlantAnimRig_HotPotato(PlantAnimRig_HotPotato *this)

{
  ~PlantAnimRig_HotPotato(this + -0x10);
  return;
}


/* PlantAnimRig_HotPotato::~PlantAnimRig_HotPotato() */

void __thiscall PlantAnimRig_HotPotato::~PlantAnimRig_HotPotato(PlantAnimRig_HotPotato *this)

{
  ~PlantAnimRig_HotPotato(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HotPotato::~PlantAnimRig_HotPotato() */

void __thiscall PlantAnimRig_HotPotato::~PlantAnimRig_HotPotato(PlantAnimRig_HotPotato *this)

{
  ~PlantAnimRig_HotPotato(this + -0x10);
  return;
}


/* PlantAnimRig_HotPotato::StaticGetClass() */

long * PlantAnimRig_HotPotato::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HotPotato",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_HotPotato::GetClass() const */

long * PlantAnimRig_HotPotato::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HotPotato",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_HotPotato::PlantAnimRig_HotPotato() */

void __thiscall PlantAnimRig_HotPotato::PlantAnimRig_HotPotato(PlantAnimRig_HotPotato *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067d3c10;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HotPotato_067d3e78;
  return;
}


/* PlantAnimRig_HotPotato::StaticNew() */

PlantAnimRig_HotPotato * PlantAnimRig_HotPotato::StaticNew(void)

{
  PlantAnimRig_HotPotato *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_HotPotato(this);
  return this;
}

