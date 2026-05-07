// Class: ZombieAnimRig_Guide


/* ZombieAnimRig_Guide::StaticGetClass() */

long * ZombieAnimRig_Guide::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Guide",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_Guide::GetClass() const */

long * ZombieAnimRig_Guide::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Guide",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_Guide::~ZombieAnimRig_Guide() */

void __thiscall ZombieAnimRig_Guide::~ZombieAnimRig_Guide(ZombieAnimRig_Guide *this)

{
  *(undefined ***)this = &PTR_GetClass_06922e80;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Guide_069230f8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Guide::~ZombieAnimRig_Guide() */

void __thiscall ZombieAnimRig_Guide::~ZombieAnimRig_Guide(ZombieAnimRig_Guide *this)

{
  ~ZombieAnimRig_Guide(this + -0x10);
  return;
}


/* ZombieAnimRig_Guide::~ZombieAnimRig_Guide() */

void __thiscall ZombieAnimRig_Guide::~ZombieAnimRig_Guide(ZombieAnimRig_Guide *this)

{
  ~ZombieAnimRig_Guide(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Guide::~ZombieAnimRig_Guide() */

void __thiscall ZombieAnimRig_Guide::~ZombieAnimRig_Guide(ZombieAnimRig_Guide *this)

{
  ~ZombieAnimRig_Guide(this + -0x10);
  return;
}


/* ZombieAnimRig_Guide::ZombieAnimRig_Guide() */

void __thiscall ZombieAnimRig_Guide::ZombieAnimRig_Guide(ZombieAnimRig_Guide *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06922e80;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Guide_069230f8;
  return;
}


/* ZombieAnimRig_Guide::StaticNew() */

ZombieAnimRig_Guide * ZombieAnimRig_Guide::StaticNew(void)

{
  ZombieAnimRig_Guide *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Guide(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Guide::DoGuideAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_Guide::DoGuideAnimation(ZombieAnimRig_Guide *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"guide");
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

