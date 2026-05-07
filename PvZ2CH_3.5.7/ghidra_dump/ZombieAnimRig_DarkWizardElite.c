// Class: ZombieAnimRig_DarkWizardElite


/* ZombieAnimRig_DarkWizardElite::~ZombieAnimRig_DarkWizardElite() */

void __thiscall
ZombieAnimRig_DarkWizardElite::~ZombieAnimRig_DarkWizardElite(ZombieAnimRig_DarkWizardElite *this)

{
  *(undefined ***)this = &PTR_GetClass_0687bcf0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DarkWizardElite_0687bf68;
  ZombieAnimRig_DarkWizard::~ZombieAnimRig_DarkWizard((ZombieAnimRig_DarkWizard *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DarkWizardElite::~ZombieAnimRig_DarkWizardElite() */

void __thiscall
ZombieAnimRig_DarkWizardElite::~ZombieAnimRig_DarkWizardElite(ZombieAnimRig_DarkWizardElite *this)

{
  ~ZombieAnimRig_DarkWizardElite(this + -0x10);
  return;
}


/* ZombieAnimRig_DarkWizardElite::~ZombieAnimRig_DarkWizardElite() */

void __thiscall
ZombieAnimRig_DarkWizardElite::~ZombieAnimRig_DarkWizardElite(ZombieAnimRig_DarkWizardElite *this)

{
  ~ZombieAnimRig_DarkWizardElite(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DarkWizardElite::~ZombieAnimRig_DarkWizardElite() */

void __thiscall
ZombieAnimRig_DarkWizardElite::~ZombieAnimRig_DarkWizardElite(ZombieAnimRig_DarkWizardElite *this)

{
  ~ZombieAnimRig_DarkWizardElite(this + -0x10);
  return;
}


/* ZombieAnimRig_DarkWizardElite::StaticGetClass() */

long * ZombieAnimRig_DarkWizardElite::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_DarkWizard::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_DarkWizardElite",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_DarkWizardElite::GetClass() const */

long * ZombieAnimRig_DarkWizardElite::GetClass(void)

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
  uVar2 = ZombieAnimRig_DarkWizard::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_DarkWizardElite",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_DarkWizardElite::ZombieAnimRig_DarkWizardElite() */

void __thiscall
ZombieAnimRig_DarkWizardElite::ZombieAnimRig_DarkWizardElite(ZombieAnimRig_DarkWizardElite *this)

{
  ZombieAnimRig_DarkWizard::ZombieAnimRig_DarkWizard((ZombieAnimRig_DarkWizard *)this);
  *(undefined ***)this = &PTR_GetClass_0687bcf0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DarkWizardElite_0687bf68;
  return;
}


/* ZombieAnimRig_DarkWizardElite::StaticNew() */

ZombieAnimRig_DarkWizardElite * ZombieAnimRig_DarkWizardElite::StaticNew(void)

{
  ZombieAnimRig_DarkWizardElite *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_DarkWizardElite(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkWizardElite::StartSilentHoleCasting(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_DarkWizardElite::StartSilentHoleCasting
          (ZombieAnimRig_DarkWizardElite *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"spawn_hole");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 8;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

