// Class: PlantAnimRig_Gluttonydragon


/* PlantAnimRig_Gluttonydragon::~PlantAnimRig_Gluttonydragon() */

void __thiscall
PlantAnimRig_Gluttonydragon::~PlantAnimRig_Gluttonydragon(PlantAnimRig_Gluttonydragon *this)

{
  *(undefined ***)this = &PTR_GetClass_069ab1b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Gluttonydragon_069ab418;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Gluttonydragon::~PlantAnimRig_Gluttonydragon() */

void __thiscall
PlantAnimRig_Gluttonydragon::~PlantAnimRig_Gluttonydragon(PlantAnimRig_Gluttonydragon *this)

{
  ~PlantAnimRig_Gluttonydragon(this + -0x10);
  return;
}


/* PlantAnimRig_Gluttonydragon::~PlantAnimRig_Gluttonydragon() */

void __thiscall
PlantAnimRig_Gluttonydragon::~PlantAnimRig_Gluttonydragon(PlantAnimRig_Gluttonydragon *this)

{
  ~PlantAnimRig_Gluttonydragon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Gluttonydragon::~PlantAnimRig_Gluttonydragon() */

void __thiscall
PlantAnimRig_Gluttonydragon::~PlantAnimRig_Gluttonydragon(PlantAnimRig_Gluttonydragon *this)

{
  ~PlantAnimRig_Gluttonydragon(this + -0x10);
  return;
}


/* PlantAnimRig_Gluttonydragon::PlantAnimRig_Gluttonydragon() */

void __thiscall
PlantAnimRig_Gluttonydragon::PlantAnimRig_Gluttonydragon(PlantAnimRig_Gluttonydragon *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069ab1b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Gluttonydragon_069ab418;
  return;
}


/* PlantAnimRig_Gluttonydragon::StaticNew() */

PlantAnimRig_Gluttonydragon * PlantAnimRig_Gluttonydragon::StaticNew(void)

{
  PlantAnimRig_Gluttonydragon *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Gluttonydragon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Gluttonydragon::StaticClassInit() */

void PlantAnimRig_Gluttonydragon::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Gluttonydragon");
    (*pcVar2)(plVar1,asStack_10,FUN_04d2372c,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Gluttonydragon::StaticGetClass() */

long * PlantAnimRig_Gluttonydragon::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Gluttonydragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Gluttonydragon::GetClass() const */

long * PlantAnimRig_Gluttonydragon::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Gluttonydragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Gluttonydragon::PlayJumpOrLanding(std::string const&,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Gluttonydragon::PlayJumpOrLanding
          (PlantAnimRig_Gluttonydragon *this,undefined8 param_1,RtReflectionDelegate *param_3)

{
  int iVar1;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,param_1,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Gluttonydragon::PlayGnaw(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Gluttonydragon::PlayGnaw
          (PlantAnimRig_Gluttonydragon *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"baby_kenyao");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Gluttonydragon::PlayCharged(std::string const&,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Gluttonydragon::PlayCharged
          (PlantAnimRig_Gluttonydragon *this,undefined8 param_1,RtReflectionDelegate *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,param_1,2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  uVar3 = Sexy::Rand(3);
  uVar4 = 0;
  do {
    uVar1 = uVar4 + 1;
    Sexy::StrFormat("swhp0%d",asStack_58,(ulong)uVar1);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_58,uVar3 == uVar4);
    std::string::~string(asStack_58);
    uVar4 = uVar1;
  } while (uVar1 != 3);
  if (iVar2 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Gluttonydragon::PlayDragonIdle(std::string const&) */

void __thiscall
PlantAnimRig_Gluttonydragon::PlayDragonIdle(PlantAnimRig_Gluttonydragon *this,string *param_1)

{
  int iVar1;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,param_1,0,aDStack_38);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Gluttonydragon::getIdleAnimationName() */

void PlantAnimRig_Gluttonydragon::getIdleAnimationName(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  PlantGluttonydragon *this;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 0x210) != 0) {
    nop();
    iVar2 = PlantGluttonydragon::GetCurrentState(this);
    if (iVar2 == 1) {
      std::string::string(in_x8,"young_idle");
      nop();
      goto LAB_04d24b28;
    }
    if (iVar2 == 2) {
      std::string::string(in_x8,"old_idle");
      nop();
      goto LAB_04d24b28;
    }
  }
  std::string::string(in_x8,"baby_idle");
  nop();
LAB_04d24b28:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

