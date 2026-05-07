// Class: ZombieAnimRig_ModernSuperfanImp


/* ZombieAnimRig_ModernSuperfanImp::~ZombieAnimRig_ModernSuperfanImp() */

void __thiscall
ZombieAnimRig_ModernSuperfanImp::~ZombieAnimRig_ModernSuperfanImp
          (ZombieAnimRig_ModernSuperfanImp *this)

{
  *(undefined ***)this = &PTR_GetClass_068459b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ModernSuperfanImp_06845c50;
  ZombieAnimRig_Imp::~ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ModernSuperfanImp::~ZombieAnimRig_ModernSuperfanImp() */

void __thiscall
ZombieAnimRig_ModernSuperfanImp::~ZombieAnimRig_ModernSuperfanImp
          (ZombieAnimRig_ModernSuperfanImp *this)

{
  ~ZombieAnimRig_ModernSuperfanImp(this + -0x10);
  return;
}


/* ZombieAnimRig_ModernSuperfanImp::~ZombieAnimRig_ModernSuperfanImp() */

void __thiscall
ZombieAnimRig_ModernSuperfanImp::~ZombieAnimRig_ModernSuperfanImp
          (ZombieAnimRig_ModernSuperfanImp *this)

{
  ~ZombieAnimRig_ModernSuperfanImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ModernSuperfanImp::~ZombieAnimRig_ModernSuperfanImp() */

void __thiscall
ZombieAnimRig_ModernSuperfanImp::~ZombieAnimRig_ModernSuperfanImp
          (ZombieAnimRig_ModernSuperfanImp *this)

{
  ~ZombieAnimRig_ModernSuperfanImp(this + -0x10);
  return;
}


/* ZombieAnimRig_ModernSuperfanImp::ZombieAnimRig_ModernSuperfanImp() */

void __thiscall
ZombieAnimRig_ModernSuperfanImp::ZombieAnimRig_ModernSuperfanImp
          (ZombieAnimRig_ModernSuperfanImp *this)

{
  ZombieAnimRig_Imp::ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  *(undefined ***)this = &PTR_GetClass_068459b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ModernSuperfanImp_06845c50;
  return;
}


/* ZombieAnimRig_ModernSuperfanImp::StaticNew() */

ZombieAnimRig_ModernSuperfanImp * ZombieAnimRig_ModernSuperfanImp::StaticNew(void)

{
  ZombieAnimRig_ModernSuperfanImp *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_ModernSuperfanImp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernSuperfanImp::StaticClassInit() */

void ZombieAnimRig_ModernSuperfanImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ModernSuperfanImp");
    (*pcVar2)(plVar1,asStack_10,FUN_043c47d4,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ModernSuperfanImp::StaticGetClass() */

long * ZombieAnimRig_ModernSuperfanImp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ModernSuperfanImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ModernSuperfanImp::GetClass() const */

long * ZombieAnimRig_ModernSuperfanImp::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ModernSuperfanImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernSuperfanImp::PlayGetUp(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ModernSuperfanImp::PlayGetUp
          (ZombieAnimRig_ModernSuperfanImp *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"TRANSITION");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
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
/* ZombieAnimRig_ModernSuperfanImp::PlayLand(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ModernSuperfanImp::PlayLand
          (ZombieAnimRig_ModernSuperfanImp *this,RtReflectionDelegate *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *__n;
  code *pcVar3;
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  __n = auStack_60;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"land");
  nop();
  cVar1 = FUN_043c3f3c(this[0x240]);
  if (cVar1 == '\0') {
    std::string::append(asStack_58,"land2",(size_t)__n);
  }
  FUN_043c3f40(this + 0x240,0);
  pcVar3 = *(code **)(*(long *)this + 0x170);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar2 = (*pcVar3)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernSuperfanImp::CheerForTheEnd(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ModernSuperfanImp::CheerForTheEnd
          (ZombieAnimRig_ModernSuperfanImp *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"eplode");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
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

