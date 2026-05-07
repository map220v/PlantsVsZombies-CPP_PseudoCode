// Class: HealerStaffAnimRig


/* HealerStaffAnimRig::~HealerStaffAnimRig() */

void __thiscall HealerStaffAnimRig::~HealerStaffAnimRig(HealerStaffAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_06a01320;
  *(undefined ***)(this + 0x10) = &PTR__HealerStaffAnimRig_06a01440;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to HealerStaffAnimRig::~HealerStaffAnimRig() */

void __thiscall HealerStaffAnimRig::~HealerStaffAnimRig(HealerStaffAnimRig *this)

{
  ~HealerStaffAnimRig(this + -0x10);
  return;
}


/* HealerStaffAnimRig::~HealerStaffAnimRig() */

void __thiscall HealerStaffAnimRig::~HealerStaffAnimRig(HealerStaffAnimRig *this)

{
  ~HealerStaffAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HealerStaffAnimRig::~HealerStaffAnimRig() */

void __thiscall HealerStaffAnimRig::~HealerStaffAnimRig(HealerStaffAnimRig *this)

{
  ~HealerStaffAnimRig(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HealerStaffAnimRig::StaticClassInit() */

void HealerStaffAnimRig::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"HealerStaffAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_04ee8044,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HealerStaffAnimRig::StaticGetClass() */

long * HealerStaffAnimRig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HealerStaffAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HealerStaffAnimRig::GetClass() const */

long * HealerStaffAnimRig::GetClass(void)

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
  (*pcVar3)(plVar1,"HealerStaffAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HealerStaffAnimRig::HealerStaffAnimRig() */

void __thiscall HealerStaffAnimRig::HealerStaffAnimRig(HealerStaffAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06a01320;
  *(undefined ***)(this + 0x10) = &PTR__HealerStaffAnimRig_06a01440;
  return;
}


/* HealerStaffAnimRig::StaticNew() */

HealerStaffAnimRig * HealerStaffAnimRig::StaticNew(void)

{
  HealerStaffAnimRig *this;
  
  this = ::operator_new(0x210);
  HealerStaffAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HealerStaffAnimRig::PlayFlip(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall HealerStaffAnimRig::PlayFlip(HealerStaffAnimRig *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"drop");
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

