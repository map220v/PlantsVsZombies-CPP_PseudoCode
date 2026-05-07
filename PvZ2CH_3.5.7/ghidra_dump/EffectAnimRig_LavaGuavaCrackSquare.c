// Class: EffectAnimRig_LavaGuavaCrackSquare


/* EffectAnimRig_LavaGuavaCrackSquare::StartPlayingCrackEffect(float) */

void __thiscall
EffectAnimRig_LavaGuavaCrackSquare::StartPlayingCrackEffect
          (EffectAnimRig_LavaGuavaCrackSquare *this,float param_1)

{
  EffectAnimRig_JackOLanternFireSquare::SetFireDelay
            ((EffectAnimRig_JackOLanternFireSquare *)this,param_1);
  this[0x21c] = (EffectAnimRig_LavaGuavaCrackSquare)0x0;
  return;
}


/* EffectAnimRig_LavaGuavaCrackSquare::StopPlayingCrackEffect(float) */

void __thiscall
EffectAnimRig_LavaGuavaCrackSquare::StopPlayingCrackEffect
          (EffectAnimRig_LavaGuavaCrackSquare *this,float param_1)

{
  EffectAnimRig_JackOLanternFireSquare::SetFireDelay
            ((EffectAnimRig_JackOLanternFireSquare *)this,param_1);
  this[0x21c] = (EffectAnimRig_LavaGuavaCrackSquare)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LavaGuavaCrackSquare::StaticClassInit() */

void EffectAnimRig_LavaGuavaCrackSquare::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectAnimRig_LavaGuavaCrackSquare");
    (*pcVar2)(plVar1,asStack_10,FUN_04126814,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_LavaGuavaCrackSquare::StaticGetClass() */

long * EffectAnimRig_LavaGuavaCrackSquare::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_LavaGuavaCrackSquare",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_LavaGuavaCrackSquare::GetClass() const */

long * EffectAnimRig_LavaGuavaCrackSquare::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_LavaGuavaCrackSquare",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_LavaGuavaCrackSquare::~EffectAnimRig_LavaGuavaCrackSquare() */

void __thiscall
EffectAnimRig_LavaGuavaCrackSquare::~EffectAnimRig_LavaGuavaCrackSquare
          (EffectAnimRig_LavaGuavaCrackSquare *this)

{
  *(undefined ***)this = &PTR_GetClass_067eab10;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_LavaGuavaCrackSquare_067eac30;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x210));
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_LavaGuavaCrackSquare::~EffectAnimRig_LavaGuavaCrackSquare() */

void __thiscall
EffectAnimRig_LavaGuavaCrackSquare::~EffectAnimRig_LavaGuavaCrackSquare
          (EffectAnimRig_LavaGuavaCrackSquare *this)

{
  ~EffectAnimRig_LavaGuavaCrackSquare(this + -0x10);
  return;
}


/* EffectAnimRig_LavaGuavaCrackSquare::~EffectAnimRig_LavaGuavaCrackSquare() */

void __thiscall
EffectAnimRig_LavaGuavaCrackSquare::~EffectAnimRig_LavaGuavaCrackSquare
          (EffectAnimRig_LavaGuavaCrackSquare *this)

{
  ~EffectAnimRig_LavaGuavaCrackSquare(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_LavaGuavaCrackSquare::~EffectAnimRig_LavaGuavaCrackSquare() */

void __thiscall
EffectAnimRig_LavaGuavaCrackSquare::~EffectAnimRig_LavaGuavaCrackSquare
          (EffectAnimRig_LavaGuavaCrackSquare *this)

{
  ~EffectAnimRig_LavaGuavaCrackSquare(this + -0x10);
  return;
}


/* EffectAnimRig_LavaGuavaCrackSquare::onCrackSequenceEnded(std::string const&, std::string const&,
   int) */

void EffectAnimRig_LavaGuavaCrackSquare::onCrackSequenceEnded
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LavaGuavaCrackSquare::calcAnimName(std::string) */

void EffectAnimRig_LavaGuavaCrackSquare::calcAnimName
               (undefined8 param_1,long param_2,string *param_3)

{
  char *pcVar1;
  string *__n;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(param_1);
  if (*(int *)(param_2 + 0x220) == 3) {
    std::operator+(param_3,"_water");
  }
  else if (*(int *)(param_2 + 0x220) == 4) {
    std::operator+(param_3,"_water_pirate_back");
  }
  else {
    if (*(int *)(param_2 + 0x224) == 1) {
      pcVar1 = "front_";
    }
    else {
      if (*(int *)(param_2 + 0x224) != 3) {
        __n = asStack_10;
        std::string::string(asStack_30,"");
        nop();
        if (*(int *)(param_2 + 0x220) == 2) {
          std::string::append(asStack_30,"fade_",(size_t)__n);
        }
        std::to_string<ActivityTypeID>((ActivityTypeID *)(param_2 + 0x228));
        std::operator+("_",asStack_10);
        std::string::~string(asStack_10);
        std::operator+(asStack_30,"mid_");
        std::operator+(asStack_20,param_3);
        std::operator+(asStack_18,asStack_28);
        FUN_05474278(param_1,asStack_10);
        std::string::~string(asStack_10);
        std::string::~string(asStack_18);
        std::string::~string(asStack_20);
        std::string::~string(asStack_28);
        std::string::~string(asStack_30);
        goto LAB_04123000;
      }
      pcVar1 = "back_";
    }
    FUN_031f5e7c(asStack_10,pcVar1,param_3);
  }
  FUN_05474278(param_1,asStack_10);
  std::string::~string(asStack_10);
LAB_04123000:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* EffectAnimRig_LavaGuavaCrackSquare::EffectAnimRig_LavaGuavaCrackSquare() */

void __thiscall
EffectAnimRig_LavaGuavaCrackSquare::EffectAnimRig_LavaGuavaCrackSquare
          (EffectAnimRig_LavaGuavaCrackSquare *this)

{
  undefined4 uVar1;
  
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067eab10;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_LavaGuavaCrackSquare_067eac30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x210));
  uVar1 = PVZ_T();
  this[0x21c] = (EffectAnimRig_LavaGuavaCrackSquare)0x0;
  *(undefined4 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x228) = 0xffffffff;
  *(undefined4 *)(this + 0x218) = uVar1;
  return;
}


/* EffectAnimRig_LavaGuavaCrackSquare::StaticNew() */

EffectAnimRig_LavaGuavaCrackSquare * EffectAnimRig_LavaGuavaCrackSquare::StaticNew(void)

{
  EffectAnimRig_LavaGuavaCrackSquare *this;
  
  this = ::operator_new(0x230);
  EffectAnimRig_LavaGuavaCrackSquare(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LavaGuavaCrackSquare::playDelayedAnimationSequence() */

void __thiscall
EffectAnimRig_LavaGuavaCrackSquare::playDelayedAnimationSequence
          (EffectAnimRig_LavaGuavaCrackSquare *this)

{
  EffectAnimRig_LavaGuavaCrackSquare EVar1;
  char *__s;
  string asStack_b8 [8];
  RtMixedPtr aRStack_b0 [8];
  string asStack_a8 [8];
  string asStack_a0 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_b8);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_98);
  EVar1 = this[0x21c];
  if (EVar1 != (EffectAnimRig_LavaGuavaCrackSquare)0x0) {
    std::string::string(asStack_a8,"end");
    calcAnimName(asStack_a0,this,asStack_a8);
    FUN_05474278(asStack_b8,asStack_a0);
    std::string::~string(asStack_a0);
    std::string::~string(asStack_a8);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_b0);
    __s = "onCrackSequenceEnded";
  }
  else {
    std::string::string(asStack_a8,"spawn");
    calcAnimName(asStack_a0,this,asStack_a8);
    FUN_05474278(asStack_b8,asStack_a0);
    std::string::~string(asStack_a0);
    std::string::~string(asStack_a8);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_b0);
    __s = "onCrackSequenceContinued";
  }
  std::string::string(asStack_a0,__s);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,asStack_a8,
             asStack_a0);
  RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)aRStack_98,
             (RtReflectionDelegate *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_a0);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_a8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
             (RtReflectionDelegate *)aRStack_98);
  PopAnimRig::PlayAndStop
            ((PopAnimRig *)this,asStack_b8,EVar1 == (EffectAnimRig_LavaGuavaCrackSquare)0x0,
             aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_98);
  std::string::~string(asStack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_LavaGuavaCrackSquare::onUpdate() */

void __thiscall
EffectAnimRig_LavaGuavaCrackSquare::onUpdate(EffectAnimRig_LavaGuavaCrackSquare *this)

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
/* EffectAnimRig_LavaGuavaCrackSquare::onCrackSequenceContinued(std::string const&, std::string
   const&, int) */

void EffectAnimRig_LavaGuavaCrackSquare::onCrackSequenceContinued
               (string *param_1,string *param_2,int param_3)

{
  string asStack_78 [8];
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_78,"loop");
  calcAnimName(asStack_70,param_1,asStack_78);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onCrackSequenceContinued");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop((PopAnimRig *)param_1,asStack_70,1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  std::string::~string(asStack_78);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

