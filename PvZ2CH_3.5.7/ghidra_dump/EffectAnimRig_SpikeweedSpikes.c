// Class: EffectAnimRig_SpikeweedSpikes


/* EffectAnimRig_SpikeweedSpikes::~EffectAnimRig_SpikeweedSpikes() */

void __thiscall
EffectAnimRig_SpikeweedSpikes::~EffectAnimRig_SpikeweedSpikes(EffectAnimRig_SpikeweedSpikes *this)

{
  *(undefined ***)this = &PTR_GetClass_0675def0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_SpikeweedSpikes_0675e010;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_SpikeweedSpikes::~EffectAnimRig_SpikeweedSpikes() */

void __thiscall
EffectAnimRig_SpikeweedSpikes::~EffectAnimRig_SpikeweedSpikes(EffectAnimRig_SpikeweedSpikes *this)

{
  ~EffectAnimRig_SpikeweedSpikes(this + -0x10);
  return;
}


/* EffectAnimRig_SpikeweedSpikes::~EffectAnimRig_SpikeweedSpikes() */

void __thiscall
EffectAnimRig_SpikeweedSpikes::~EffectAnimRig_SpikeweedSpikes(EffectAnimRig_SpikeweedSpikes *this)

{
  ~EffectAnimRig_SpikeweedSpikes(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_SpikeweedSpikes::~EffectAnimRig_SpikeweedSpikes() */

void __thiscall
EffectAnimRig_SpikeweedSpikes::~EffectAnimRig_SpikeweedSpikes(EffectAnimRig_SpikeweedSpikes *this)

{
  ~EffectAnimRig_SpikeweedSpikes(this + -0x10);
  return;
}


/* EffectAnimRig_SpikeweedSpikes::StaticGetClass() */

long * EffectAnimRig_SpikeweedSpikes::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_SpikeweedSpikes",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_SpikeweedSpikes::GetClass() const */

long * EffectAnimRig_SpikeweedSpikes::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_SpikeweedSpikes",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_SpikeweedSpikes::EffectAnimRig_SpikeweedSpikes() */

void __thiscall
EffectAnimRig_SpikeweedSpikes::EffectAnimRig_SpikeweedSpikes(EffectAnimRig_SpikeweedSpikes *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0675def0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_SpikeweedSpikes_0675e010;
  return;
}


/* EffectAnimRig_SpikeweedSpikes::StaticNew() */

EffectAnimRig_SpikeweedSpikes * EffectAnimRig_SpikeweedSpikes::StaticNew(void)

{
  EffectAnimRig_SpikeweedSpikes *this;
  
  this = ::operator_new(0x210);
  EffectAnimRig_SpikeweedSpikes(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_SpikeweedSpikes::PlayEffectAndStop(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
EffectAnimRig_SpikeweedSpikes::PlayEffectAndStop
          (EffectAnimRig_SpikeweedSpikes *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"action");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_SpikeweedSpikes::PlayEffectLooped() */

void __thiscall EffectAnimRig_SpikeweedSpikes::PlayEffectLooped(EffectAnimRig_SpikeweedSpikes *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"action");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

