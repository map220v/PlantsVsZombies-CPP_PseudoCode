// Class: EffectAnimRig_FirePeashooterFireSquare


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_FirePeashooterFireSquare::StaticClassInit() */

void EffectAnimRig_FirePeashooterFireSquare::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectAnimRig_FirePeashooterFireSquare");
    (*pcVar2)(plVar1,asStack_10,FUN_040ae0ec,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_FirePeashooterFireSquare::StaticGetClass() */

long * EffectAnimRig_FirePeashooterFireSquare::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_FirePeashooterFireSquare",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_FirePeashooterFireSquare::GetClass() const */

long * EffectAnimRig_FirePeashooterFireSquare::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_FirePeashooterFireSquare",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_FirePeashooterFireSquare::~EffectAnimRig_FirePeashooterFireSquare() */

void __thiscall
EffectAnimRig_FirePeashooterFireSquare::~EffectAnimRig_FirePeashooterFireSquare
          (EffectAnimRig_FirePeashooterFireSquare *this)

{
  *(undefined ***)this = &PTR_GetClass_067d34d0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_FirePeashooterFireSquare_067d35f0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x210));
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to
   EffectAnimRig_FirePeashooterFireSquare::~EffectAnimRig_FirePeashooterFireSquare() */

void __thiscall
EffectAnimRig_FirePeashooterFireSquare::~EffectAnimRig_FirePeashooterFireSquare
          (EffectAnimRig_FirePeashooterFireSquare *this)

{
  ~EffectAnimRig_FirePeashooterFireSquare(this + -0x10);
  return;
}


/* EffectAnimRig_FirePeashooterFireSquare::~EffectAnimRig_FirePeashooterFireSquare() */

void __thiscall
EffectAnimRig_FirePeashooterFireSquare::~EffectAnimRig_FirePeashooterFireSquare
          (EffectAnimRig_FirePeashooterFireSquare *this)

{
  ~EffectAnimRig_FirePeashooterFireSquare(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   EffectAnimRig_FirePeashooterFireSquare::~EffectAnimRig_FirePeashooterFireSquare() */

void __thiscall
EffectAnimRig_FirePeashooterFireSquare::~EffectAnimRig_FirePeashooterFireSquare
          (EffectAnimRig_FirePeashooterFireSquare *this)

{
  ~EffectAnimRig_FirePeashooterFireSquare(this + -0x10);
  return;
}


/* EffectAnimRig_FirePeashooterFireSquare::onFireSequenceEnded(std::string const&, std::string
   const&, int) */

void EffectAnimRig_FirePeashooterFireSquare::onFireSequenceEnded
               (string *param_1,string *param_2,int param_3)

{
  RtMixedPtrBase *this;
  char cVar1;
  long *plVar2;
  
  this = (RtMixedPtrBase *)(param_1 + 0x210);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
  return;
}


/* EffectAnimRig_FirePeashooterFireSquare::EffectAnimRig_FirePeashooterFireSquare() */

void __thiscall
EffectAnimRig_FirePeashooterFireSquare::EffectAnimRig_FirePeashooterFireSquare
          (EffectAnimRig_FirePeashooterFireSquare *this)

{
  undefined4 uVar1;
  
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067d34d0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_FirePeashooterFireSquare_067d35f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x210));
  uVar1 = PVZ_T();
  this[0x21c] = (EffectAnimRig_FirePeashooterFireSquare)0x0;
  *(undefined4 *)(this + 0x218) = uVar1;
  return;
}


/* EffectAnimRig_FirePeashooterFireSquare::StaticNew() */

EffectAnimRig_FirePeashooterFireSquare * EffectAnimRig_FirePeashooterFireSquare::StaticNew(void)

{
  EffectAnimRig_FirePeashooterFireSquare *this;
  
  this = ::operator_new(0x220);
  EffectAnimRig_FirePeashooterFireSquare(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_FirePeashooterFireSquare::playDelayedAnimationSequence() */

void __thiscall
EffectAnimRig_FirePeashooterFireSquare::playDelayedAnimationSequence
          (EffectAnimRig_FirePeashooterFireSquare *this)

{
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x21c] == (EffectAnimRig_FirePeashooterFireSquare)0x0) {
    std::string::string(asStack_68,"idle");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onFireSequenceContinued");
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
               aRStack_50,aRStack_60,asStack_58);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_68,1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
  }
  else {
    std::string::string(asStack_68,"idle3");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onFireSequenceEnded");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
  }
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_FirePeashooterFireSquare::onUpdate() */

void __thiscall
EffectAnimRig_FirePeashooterFireSquare::onUpdate(EffectAnimRig_FirePeashooterFireSquare *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)PVZ_EOT();
  if ((*(float *)(this + 0x218) < fVar1) &&
     (fVar2 = (float)PVZ_T(), *(float *)(this + 0x218) < fVar2)) {
    playDelayedAnimationSequence(this);
    *(float *)(this + 0x218) = fVar1;
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_FirePeashooterFireSquare::onFireSequenceContinued(std::string const&, std::string
   const&, int) */

void EffectAnimRig_FirePeashooterFireSquare::onFireSequenceContinued
               (string *param_1,string *param_2,int param_3)

{
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"idle2");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onFireSequenceContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  PopAnimRig::PlayAndContinue((PopAnimRig *)param_1,asStack_68,1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

