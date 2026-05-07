// Class: EffectAnimRig_JalapenoFireSquare


/* EffectAnimRig_JalapenoFireSquare::~EffectAnimRig_JalapenoFireSquare() */

void __thiscall
EffectAnimRig_JalapenoFireSquare::~EffectAnimRig_JalapenoFireSquare
          (EffectAnimRig_JalapenoFireSquare *this)

{
  *(undefined ***)this = &PTR_GetClass_0675d4e0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_JalapenoFireSquare_0675d608;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x210));
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_JalapenoFireSquare::~EffectAnimRig_JalapenoFireSquare() */

void __thiscall
EffectAnimRig_JalapenoFireSquare::~EffectAnimRig_JalapenoFireSquare
          (EffectAnimRig_JalapenoFireSquare *this)

{
  ~EffectAnimRig_JalapenoFireSquare(this + -0x10);
  return;
}


/* EffectAnimRig_JalapenoFireSquare::~EffectAnimRig_JalapenoFireSquare() */

void __thiscall
EffectAnimRig_JalapenoFireSquare::~EffectAnimRig_JalapenoFireSquare
          (EffectAnimRig_JalapenoFireSquare *this)

{
  ~EffectAnimRig_JalapenoFireSquare(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_JalapenoFireSquare::~EffectAnimRig_JalapenoFireSquare() */

void __thiscall
EffectAnimRig_JalapenoFireSquare::~EffectAnimRig_JalapenoFireSquare
          (EffectAnimRig_JalapenoFireSquare *this)

{
  ~EffectAnimRig_JalapenoFireSquare(this + -0x10);
  return;
}


/* EffectAnimRig_JalapenoFireSquare::EffectAnimRig_JalapenoFireSquare() */

void __thiscall
EffectAnimRig_JalapenoFireSquare::EffectAnimRig_JalapenoFireSquare
          (EffectAnimRig_JalapenoFireSquare *this)

{
  undefined4 uVar1;
  
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0675d4e0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_JalapenoFireSquare_0675d608;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x210));
  uVar1 = PVZ_EOT();
  this[0x220] = (EffectAnimRig_JalapenoFireSquare)0x0;
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x218) = uVar1;
  *(undefined4 *)(this + 0x21c) = uVar1;
  return;
}


/* EffectAnimRig_JalapenoFireSquare::onFireEnd() */

void EffectAnimRig_JalapenoFireSquare::onFireEnd(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_JalapenoFireSquare::StaticClassInit() */

void EffectAnimRig_JalapenoFireSquare::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectAnimRig_JalapenoFireSquare");
    (*pcVar2)(plVar1,asStack_10,FUN_03cb8fa0,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_JalapenoFireSquare::StaticGetClass() */

long * EffectAnimRig_JalapenoFireSquare::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_JalapenoFireSquare",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_JalapenoFireSquare::GetClass() const */

long * EffectAnimRig_JalapenoFireSquare::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_JalapenoFireSquare",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_JalapenoFireSquare::CalculateActiveTime() */

void __thiscall
EffectAnimRig_JalapenoFireSquare::CalculateActiveTime(EffectAnimRig_JalapenoFireSquare *this)

{
  float fVar1;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"idle1");
  fVar1 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"idle2");
  fVar2 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this[0x220] != (EffectAnimRig_JalapenoFireSquare)0x0) {
    fVar2 = (float)*(int *)(this + 0x224) * fVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2 + fVar1);
}


/* EffectAnimRig_JalapenoFireSquare::StaticNew() */

EffectAnimRig_JalapenoFireSquare * EffectAnimRig_JalapenoFireSquare::StaticNew(void)

{
  EffectAnimRig_JalapenoFireSquare *this;
  
  this = ::operator_new(0x228);
  EffectAnimRig_JalapenoFireSquare(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_JalapenoFireSquare::PlayFullEffectSequence() */

void __thiscall
EffectAnimRig_JalapenoFireSquare::PlayFullEffectSequence(EffectAnimRig_JalapenoFireSquare *this)

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
  std::string::string(asStack_58,"onJalapenoSequenceContinued");
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


/* EffectAnimRig_JalapenoFireSquare::onUpdate() */

void __thiscall EffectAnimRig_JalapenoFireSquare::onUpdate(EffectAnimRig_JalapenoFireSquare *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)PVZ_EOT();
  if ((*(float *)(this + 0x218) < fVar1) &&
     (fVar2 = (float)PVZ_T(), *(float *)(this + 0x218) < fVar2)) {
    PlayFullEffectSequence(this);
    *(float *)(this + 0x218) = fVar1;
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_JalapenoFireSquare::onJalapenoSequenceContinued(std::string const&, std::string
   const&, int) */

void EffectAnimRig_JalapenoFireSquare::onJalapenoSequenceContinued
               (string *param_1,string *param_2,int param_3)

{
  RtMixedPtrBase *this;
  bool bVar1;
  char cVar2;
  long *plVar3;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1[0x220] == (string)0x0) || (bVar1 = std::operator==(param_2,"idle2"), !bVar1)) {
LAB_03cb8cf8:
    bVar1 = std::operator==(param_2,"idle2");
    if (bVar1) {
LAB_03cb8e60:
      if (*(code **)(*(long *)param_1 + 0x110) != onFireEnd) {
        (**(code **)(*(long *)param_1 + 0x110))(param_1);
        bVar1 = std::operator==(param_2,"idle3");
        goto joined_r0x03cb8e90;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x224) < 2) {
      std::string::string(asStack_68,"idle3");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"onJalapenoSequenceContinued");
      RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
      RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *
                 )aRStack_50,aRStack_60,asStack_58);
      PopAnimRig::PlayAndContinue((PopAnimRig *)param_1,asStack_68,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
      goto LAB_03cb8cf8;
    }
    std::string::string(asStack_68,"idle2");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onJalapenoSequenceContinued");
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
               aRStack_50,aRStack_60,asStack_58);
    PopAnimRig::PlayAndContinue((PopAnimRig *)param_1,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + -1;
    bVar1 = std::operator==(param_2,"idle2");
    if (bVar1) goto LAB_03cb8e60;
  }
  bVar1 = std::operator==(param_2,"idle3");
joined_r0x03cb8e90:
  if (bVar1) {
    this = (RtMixedPtrBase *)(param_1 + 0x210);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      (**(code **)(*plVar3 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_JalapenoFireSquare::onPopAnimInitialized() */

void __thiscall
EffectAnimRig_JalapenoFireSquare::onPopAnimInitialized(EffectAnimRig_JalapenoFireSquare *this)

{
  undefined4 uVar1;
  
  PopAnimRig::onPopAnimInitialized((PopAnimRig *)this);
  uVar1 = PVZ_EOT();
  this[0x220] = (EffectAnimRig_JalapenoFireSquare)0x0;
  *(undefined4 *)(this + 0x218) = uVar1;
  return;
}

