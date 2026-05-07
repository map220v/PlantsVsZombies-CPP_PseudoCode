// Class: ZombieAnimRig_FutureImp


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureImp::PlayEMPeachStunEnd() */

void __thiscall ZombieAnimRig_FutureImp::PlayEMPeachStunEnd(ZombieAnimRig_FutureImp *this)

{
  long lVar1;
  code *pcVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x168);
  std::string::string(asStack_40,"stun_end");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  (*pcVar2)(this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 8;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureImp::PlayEMPeachStunIdle() */

void __thiscall ZombieAnimRig_FutureImp::PlayEMPeachStunIdle(ZombieAnimRig_FutureImp *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"stun_idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 8;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureImp::PlayEMPeachStunStart() */

void __thiscall ZombieAnimRig_FutureImp::PlayEMPeachStunStart(ZombieAnimRig_FutureImp *this)

{
  long lVar1;
  code *pcVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  pcVar2 = *(code **)(*(long *)this + 0x170);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"stun_start");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onStunStartEnd");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 8;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_FutureImp::~ZombieAnimRig_FutureImp() */

void __thiscall ZombieAnimRig_FutureImp::~ZombieAnimRig_FutureImp(ZombieAnimRig_FutureImp *this)

{
  *(undefined ***)this = &PTR_GetClass_068a33a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FutureImp_068a3640;
  ZombieAnimRig_Imp::~ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FutureImp::~ZombieAnimRig_FutureImp() */

void __thiscall ZombieAnimRig_FutureImp::~ZombieAnimRig_FutureImp(ZombieAnimRig_FutureImp *this)

{
  ~ZombieAnimRig_FutureImp(this + -0x10);
  return;
}


/* ZombieAnimRig_FutureImp::~ZombieAnimRig_FutureImp() */

void __thiscall ZombieAnimRig_FutureImp::~ZombieAnimRig_FutureImp(ZombieAnimRig_FutureImp *this)

{
  ~ZombieAnimRig_FutureImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FutureImp::~ZombieAnimRig_FutureImp() */

void __thiscall ZombieAnimRig_FutureImp::~ZombieAnimRig_FutureImp(ZombieAnimRig_FutureImp *this)

{
  ~ZombieAnimRig_FutureImp(this + -0x10);
  return;
}


/* ZombieAnimRig_FutureImp::ZombieAnimRig_FutureImp() */

void __thiscall ZombieAnimRig_FutureImp::ZombieAnimRig_FutureImp(ZombieAnimRig_FutureImp *this)

{
  ZombieAnimRig_Imp::ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  this[0x240] = (ZombieAnimRig_FutureImp)0x0;
  *(undefined ***)this = &PTR_GetClass_068a33a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FutureImp_068a3640;
  return;
}


/* ZombieAnimRig_FutureImp::StaticNew() */

ZombieAnimRig_FutureImp * ZombieAnimRig_FutureImp::StaticNew(void)

{
  ZombieAnimRig_FutureImp *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_FutureImp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureImp::StaticClassInit() */

void ZombieAnimRig_FutureImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_FutureImp");
    (*pcVar2)(plVar1,asStack_10,FUN_04693408,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_FutureImp::StaticGetClass() */

long * ZombieAnimRig_FutureImp::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Imp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_FutureImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_FutureImp::GetClass() const */

long * ZombieAnimRig_FutureImp::GetClass(void)

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
  uVar2 = ZombieAnimRig_Imp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_FutureImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureImp::PlayLand(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_FutureImp::PlayLand(ZombieAnimRig_FutureImp *this,RtReflectionDelegate *param_2)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x240] == (ZombieAnimRig_FutureImp)0x0) {
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
    uVar1 = ZombieAnimRig_Rocket::PlayDropIn((ZombieAnimRig_Rocket *)this,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  else {
    pcVar3 = *(code **)(*(long *)this + 0x170);
    std::string::string(asStack_58,"IMPACT");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
    iVar2 = (*pcVar3)(this,asStack_58,0,aRStack_50);
    uVar1 = iVar2 != -1;
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureImp::PlayGetUp(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void ZombieAnimRig_FutureImp::PlayGetUp
               (wchar16 *param_1,RtReflectionDelegate *param_2,undefined8 param_3,
               LineBreakCategory *param_4,LineBreakCategory *param_5)

{
  undefined1 uVar1;
  int iVar2;
  LineBreakCategory *pLVar3;
  code *pcVar4;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  LineBreakCategory *local_8;
  
  local_8 = ___stack_chk_guard;
  if ((char)param_1[0x120] == '\0') {
    pLVar3 = ___stack_chk_guard;
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
    uVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (param_1,(wchar16 *)aRStack_50,pLVar3,param_4,param_5);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  else {
    *(undefined1 *)(param_1 + 0x120) = 0;
    pcVar4 = *(code **)(*(long *)param_1 + 0x170);
    std::string::string(asStack_58,"TRANSITION");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
    iVar2 = (*pcVar4)(param_1,asStack_58,0,aRStack_50);
    uVar1 = iVar2 != -1;
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureImp::PlayFlying() */

void __thiscall ZombieAnimRig_FutureImp::PlayFlying(ZombieAnimRig_FutureImp *this)

{
  undefined1 uVar1;
  int iVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x240] == (ZombieAnimRig_FutureImp)0x0) {
    uVar1 = ZombieAnimRig_Imp::PlayFlying((ZombieAnimRig_Imp *)this);
  }
  else {
    std::string::string(asStack_40,"DROP");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    iVar2 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    if (iVar2 != -1) {
      *(undefined4 *)(this + 0x210) = 8;
    }
    uVar1 = iVar2 != -1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FutureImp::onStunStartEnd(std::string const&) */

void ZombieAnimRig_FutureImp::onStunStartEnd(string *param_1)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"stun_idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0x210) = 8;
  if (lStack_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

