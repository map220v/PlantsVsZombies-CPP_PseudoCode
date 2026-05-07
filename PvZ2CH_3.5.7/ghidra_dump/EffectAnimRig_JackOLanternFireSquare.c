// Class: EffectAnimRig_JackOLanternFireSquare


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_JackOLanternFireSquare::SetOwningEffect(Effect_PopAnim*) */

void __thiscall
EffectAnimRig_JackOLanternFireSquare::SetOwningEffect
          (EffectAnimRig_JackOLanternFireSquare *this,Effect_PopAnim *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Effect_PopAnim *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x210),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_JackOLanternFireSquare::SetFireDelay(float) */

void __thiscall
EffectAnimRig_JackOLanternFireSquare::SetFireDelay
          (EffectAnimRig_JackOLanternFireSquare *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x218) = fVar1 + param_1;
  return;
}


/* EffectAnimRig_JackOLanternFireSquare::onPopAnimInitialized() */

void __thiscall
EffectAnimRig_JackOLanternFireSquare::onPopAnimInitialized
          (EffectAnimRig_JackOLanternFireSquare *this)

{
  undefined4 uVar1;
  
  PopAnimRig::onPopAnimInitialized((PopAnimRig *)this);
  uVar1 = PVZ_EOT();
  this[0x21c] = (EffectAnimRig_JackOLanternFireSquare)0x0;
  *(undefined4 *)(this + 0x218) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_JackOLanternFireSquare::StaticClassInit() */

void EffectAnimRig_JackOLanternFireSquare::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectAnimRig_JackOLanternFireSquare");
    (*pcVar2)(plVar1,asStack_10,FUN_04d00878,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_JackOLanternFireSquare::StaticGetClass() */

long * EffectAnimRig_JackOLanternFireSquare::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_JackOLanternFireSquare",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_JackOLanternFireSquare::GetClass() const */

long * EffectAnimRig_JackOLanternFireSquare::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_JackOLanternFireSquare",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_JackOLanternFireSquare::~EffectAnimRig_JackOLanternFireSquare() */

void __thiscall
EffectAnimRig_JackOLanternFireSquare::~EffectAnimRig_JackOLanternFireSquare
          (EffectAnimRig_JackOLanternFireSquare *this)

{
  *(undefined ***)this = &PTR_GetClass_069a5d00;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_JackOLanternFireSquare_069a5e20;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x210));
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to
   EffectAnimRig_JackOLanternFireSquare::~EffectAnimRig_JackOLanternFireSquare() */

void __thiscall
EffectAnimRig_JackOLanternFireSquare::~EffectAnimRig_JackOLanternFireSquare
          (EffectAnimRig_JackOLanternFireSquare *this)

{
  ~EffectAnimRig_JackOLanternFireSquare(this + -0x10);
  return;
}


/* EffectAnimRig_JackOLanternFireSquare::~EffectAnimRig_JackOLanternFireSquare() */

void __thiscall
EffectAnimRig_JackOLanternFireSquare::~EffectAnimRig_JackOLanternFireSquare
          (EffectAnimRig_JackOLanternFireSquare *this)

{
  ~EffectAnimRig_JackOLanternFireSquare(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   EffectAnimRig_JackOLanternFireSquare::~EffectAnimRig_JackOLanternFireSquare() */

void __thiscall
EffectAnimRig_JackOLanternFireSquare::~EffectAnimRig_JackOLanternFireSquare
          (EffectAnimRig_JackOLanternFireSquare *this)

{
  ~EffectAnimRig_JackOLanternFireSquare(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_JackOLanternFireSquare::onSequenceContinued(std::string const&, std::string const&,
   int) */

void EffectAnimRig_JackOLanternFireSquare::onSequenceContinued
               (string *param_1,string *param_2,int param_3)

{
  bool bVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"idle2");
  if (bVar1) {
    std::string::string(asStack_40,"idle2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)param_1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_JackOLanternFireSquare::EffectAnimRig_JackOLanternFireSquare() */

void __thiscall
EffectAnimRig_JackOLanternFireSquare::EffectAnimRig_JackOLanternFireSquare
          (EffectAnimRig_JackOLanternFireSquare *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069a5d00;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_JackOLanternFireSquare_069a5e20;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x210));
  return;
}


/* EffectAnimRig_JackOLanternFireSquare::StaticNew() */

EffectAnimRig_JackOLanternFireSquare * EffectAnimRig_JackOLanternFireSquare::StaticNew(void)

{
  EffectAnimRig_JackOLanternFireSquare *this;
  
  this = ::operator_new(0x220);
  EffectAnimRig_JackOLanternFireSquare(this);
  return this;
}


/* EffectAnimRig_JackOLanternFireSquare::onFadeEnded(std::string const&, std::string const&, int) */

void EffectAnimRig_JackOLanternFireSquare::onFadeEnded(string *param_1,string *param_2,int param_3)

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_JackOLanternFireSquare::PlayFade() */

void __thiscall
EffectAnimRig_JackOLanternFireSquare::PlayFade(EffectAnimRig_JackOLanternFireSquare *this)

{
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this[0x21c] = (EffectAnimRig_JackOLanternFireSquare)0x1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"idle3");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onFadeEnded");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_68,0,aRStack_50);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_JackOLanternFireSquare::PlayIdleSequence() */

void __thiscall
EffectAnimRig_JackOLanternFireSquare::PlayIdleSequence(EffectAnimRig_JackOLanternFireSquare *this)

{
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"idle");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onSequenceContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_68,1,aRStack_50);
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


/* EffectAnimRig_JackOLanternFireSquare::onUpdate() */

void __thiscall
EffectAnimRig_JackOLanternFireSquare::onUpdate(EffectAnimRig_JackOLanternFireSquare *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)PVZ_EOT();
  if (((*(float *)(this + 0x218) < fVar1) &&
      (fVar2 = (float)PVZ_T(), *(float *)(this + 0x218) < fVar2)) &&
     (this[0x21c] == (EffectAnimRig_JackOLanternFireSquare)0x0)) {
    PlayIdleSequence(this);
    *(float *)(this + 0x218) = fVar1;
  }
  return;
}

