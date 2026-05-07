// Class: ZombieAnimRig_Rogue


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Rogue::getWalkAnimationName() */

void ZombieAnimRig_Rogue::getWalkAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x250) == '\0') {
    __s = "walk";
  }
  else {
    __s = "invisible_walk";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_Rogue::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_Rogue::onPopAnimInitialized(ZombieAnimRig_Rogue *this)

{
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  this[0x250] = (ZombieAnimRig_Rogue)0x0;
  return;
}


/* ZombieAnimRig_Rogue::~ZombieAnimRig_Rogue() */

void __thiscall ZombieAnimRig_Rogue::~ZombieAnimRig_Rogue(ZombieAnimRig_Rogue *this)

{
  *(undefined ***)this = &PTR_GetClass_0687c270;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Rogue_0687c590;
  ZombieAnimRig_DarkBasic::~ZombieAnimRig_DarkBasic((ZombieAnimRig_DarkBasic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Rogue::~ZombieAnimRig_Rogue() */

void __thiscall ZombieAnimRig_Rogue::~ZombieAnimRig_Rogue(ZombieAnimRig_Rogue *this)

{
  ~ZombieAnimRig_Rogue(this + -0x10);
  return;
}


/* ZombieAnimRig_Rogue::~ZombieAnimRig_Rogue() */

void __thiscall ZombieAnimRig_Rogue::~ZombieAnimRig_Rogue(ZombieAnimRig_Rogue *this)

{
  ~ZombieAnimRig_Rogue(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Rogue::~ZombieAnimRig_Rogue() */

void __thiscall ZombieAnimRig_Rogue::~ZombieAnimRig_Rogue(ZombieAnimRig_Rogue *this)

{
  ~ZombieAnimRig_Rogue(this + -0x10);
  return;
}


/* ZombieAnimRig_Rogue::ZombieAnimRig_Rogue() */

void __thiscall ZombieAnimRig_Rogue::ZombieAnimRig_Rogue(ZombieAnimRig_Rogue *this)

{
  ZombieAnimRig_DarkBasic::ZombieAnimRig_DarkBasic((ZombieAnimRig_DarkBasic *)this);
  this[0x250] = (ZombieAnimRig_Rogue)0x0;
  *(undefined ***)this = &PTR_GetClass_0687c270;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Rogue_0687c590;
  return;
}


/* ZombieAnimRig_Rogue::StaticNew() */

ZombieAnimRig_Rogue * ZombieAnimRig_Rogue::StaticNew(void)

{
  ZombieAnimRig_Rogue *this;
  
  this = ::operator_new(600);
  ZombieAnimRig_Rogue(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Rogue::StaticClassInit() */

void ZombieAnimRig_Rogue::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Rogue");
    (*pcVar2)(plVar1,asStack_10,FUN_04625024,600,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Rogue::StaticGetClass() */

long * ZombieAnimRig_Rogue::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Rogue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Rogue::GetClass() const */

long * ZombieAnimRig_Rogue::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Rogue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Rogue::PlayInvisible(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_Rogue::PlayInvisible(ZombieAnimRig_Rogue *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"invisible");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar2 = (*pcVar3)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  this[0x250] = (ZombieAnimRig_Rogue)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}

