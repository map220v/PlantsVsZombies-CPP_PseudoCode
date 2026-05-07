// Class: ZombieAnimRig_ZombossMech_Eighties


/* ZombieAnimRig_ZombossMech_Eighties::getIntroAnimName() const */

char * ZombieAnimRig_ZombossMech_Eighties::getIntroAnimName(void)

{
  return "intro";
}


/* ZombieAnimRig_ZombossMech_Eighties::~ZombieAnimRig_ZombossMech_Eighties() */

void __thiscall
ZombieAnimRig_ZombossMech_Eighties::~ZombieAnimRig_ZombossMech_Eighties
          (ZombieAnimRig_ZombossMech_Eighties *this)

{
  *(undefined ***)this = &PTR_GetClass_068f6360;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_Eighties_068f66d0;
  ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_Eighties::~ZombieAnimRig_ZombossMech_Eighties() */

void __thiscall
ZombieAnimRig_ZombossMech_Eighties::~ZombieAnimRig_ZombossMech_Eighties
          (ZombieAnimRig_ZombossMech_Eighties *this)

{
  ~ZombieAnimRig_ZombossMech_Eighties(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_Eighties::~ZombieAnimRig_ZombossMech_Eighties() */

void __thiscall
ZombieAnimRig_ZombossMech_Eighties::~ZombieAnimRig_ZombossMech_Eighties
          (ZombieAnimRig_ZombossMech_Eighties *this)

{
  ~ZombieAnimRig_ZombossMech_Eighties(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombossMech_Eighties::~ZombieAnimRig_ZombossMech_Eighties() */

void __thiscall
ZombieAnimRig_ZombossMech_Eighties::~ZombieAnimRig_ZombossMech_Eighties
          (ZombieAnimRig_ZombossMech_Eighties *this)

{
  ~ZombieAnimRig_ZombossMech_Eighties(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_Eighties::ZombieAnimRig_ZombossMech_Eighties() */

void __thiscall
ZombieAnimRig_ZombossMech_Eighties::ZombieAnimRig_ZombossMech_Eighties
          (ZombieAnimRig_ZombossMech_Eighties *this)

{
  ZombieAnimRig_ZombossMech::ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  *(undefined ***)this = &PTR_GetClass_068f6360;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_Eighties_068f66d0;
  return;
}


/* ZombieAnimRig_ZombossMech_Eighties::StaticNew() */

ZombieAnimRig_ZombossMech_Eighties * ZombieAnimRig_ZombossMech_Eighties::StaticNew(void)

{
  ZombieAnimRig_ZombossMech_Eighties *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_ZombossMech_Eighties(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Eighties::StaticClassInit() */

void ZombieAnimRig_ZombossMech_Eighties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ZombossMech_Eighties");
    (*pcVar2)(plVar1,asStack_10,FUN_047eec84,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZombossMech_Eighties::StaticGetClass() */

long * ZombieAnimRig_ZombossMech_Eighties::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_ZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_Eighties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombossMech_Eighties::GetClass() const */

long * ZombieAnimRig_ZombossMech_Eighties::GetClass(void)

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
  uVar2 = ZombieAnimRig_ZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_Eighties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_Eighties::PlayStreetIdle(RtReflectionDelegate<Sexy::Delegate3<std::string
   const&, std::string const&, int> >) */

void __thiscall
ZombieAnimRig_ZombossMech_Eighties::PlayStreetIdle
          (ZombieAnimRig_ZombossMech_Eighties *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"idle_punk");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != 0);
}


/* ZombieAnimRig_ZombossMech_Eighties::getTeleportationEffectOffset() const */

DVec2 * __thiscall
ZombieAnimRig_ZombossMech_Eighties::getTeleportationEffectOffset
          (ZombieAnimRig_ZombossMech_Eighties *this)

{
  DVec2 *in_x8;
  
  DVec2::DVec2(in_x8,180.0,-25.0);
  return in_x8;
}

