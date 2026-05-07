// Class: GridItemSnowRig


/* GridItemSnowRig::~GridItemSnowRig() */

void __thiscall GridItemSnowRig::~GridItemSnowRig(GridItemSnowRig *this)

{
  *(undefined ***)this = &PTR_GetClass_0663be70;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSnowRig_0663bf90;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemSnowRig::~GridItemSnowRig() */

void __thiscall GridItemSnowRig::~GridItemSnowRig(GridItemSnowRig *this)

{
  ~GridItemSnowRig(this + -0x10);
  return;
}


/* GridItemSnowRig::~GridItemSnowRig() */

void __thiscall GridItemSnowRig::~GridItemSnowRig(GridItemSnowRig *this)

{
  ~GridItemSnowRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSnowRig::~GridItemSnowRig() */

void __thiscall GridItemSnowRig::~GridItemSnowRig(GridItemSnowRig *this)

{
  ~GridItemSnowRig(this + -0x10);
  return;
}


/* GridItemSnowRig::GridItemSnowRig() */

void __thiscall GridItemSnowRig::GridItemSnowRig(GridItemSnowRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0663be70;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSnowRig_0663bf90;
  return;
}


/* GridItemSnowRig::StaticNew() */

GridItemSnowRig * GridItemSnowRig::StaticNew(void)

{
  GridItemSnowRig *this;
  
  this = ::operator_new(0x210);
  GridItemSnowRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnowRig::StaticClassInit() */

void GridItemSnowRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSnowRig");
    (*pcVar2)(plVar1,asStack_10,FUN_034724c0,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSnowRig::StaticGetClass() */

long * GridItemSnowRig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSnowRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSnowRig::GetClass() const */

long * GridItemSnowRig::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSnowRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnowRig::playPreAttack(std::string, RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
GridItemSnowRig::playPreAttack(GridItemSnowRig *this,string *param_2,RtReflectionDelegate *param_3)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::operator+(param_2,"_attack");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnowRig::playHit(std::string, RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
GridItemSnowRig::playHit(GridItemSnowRig *this,string *param_2,RtReflectionDelegate *param_3)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::operator+(param_2,"_hit");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnowRig::playMelt(std::string, RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
GridItemSnowRig::playMelt(GridItemSnowRig *this,string *param_2,RtReflectionDelegate *param_3)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::operator+(param_2,"_melt");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnowRig::playCrash(std::string, RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
GridItemSnowRig::playCrash(GridItemSnowRig *this,string *param_2,RtReflectionDelegate *param_3)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::operator+(param_2,"_crash");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

